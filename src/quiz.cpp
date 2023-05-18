#include "../headers/quiz.h"


quiz::quiz(const std::vector<question>& questions) :
    d_questions{questions}, d_answers(d_questions.size(),-1)
{
    reset();
}

void quiz::reset()
{
    d_answers.assign(d_questions.size(),-1);
    d_nbAnswers = 0;
    d_nbCorrectAnswers = 0;
}

void quiz::userAnswer(int numquestion,int an)
{
    d_answers[numquestion]=an;
    ++d_nbAnswers;
    if (d_questions[numquestion].getAnswer() == an)
    {
        ++d_nbCorrectAnswers;
    }
}

question quiz::getQuestion(int questionNumber) const
{
    return d_questions[questionNumber];
}
int quiz::nbQuestions() const
{
    return d_questions.size();
}

double quiz::successPercentage() const
{
    if (d_nbAnswers == 0) {
        return 0.0;
    }
    return static_cast<double>(d_nbCorrectAnswers) / d_nbAnswers * 100.0;
}

bool quiz::correctUserResponse(int questionNumber) const
{
    if(d_questions[questionNumber].getAnswer() == d_answers[questionNumber])
    {
        return true;
    }
    else
    {
        return false;
    }
}


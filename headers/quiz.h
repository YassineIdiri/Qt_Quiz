#ifndef QUIZZ_H
#define QUIZZ_H

#include<vector>
#include"question.h"



class quiz {
public:
    quiz(const std::vector<question>& questions);
    void reset();
    question getQuestion(int questionNumber) const;
    bool correctUserResponse(int questionNumber) const;
    int nbQuestions() const;
    double successPercentage() const;
    void userAnswer(int numquestion,int an);
private:
    std::vector<question> d_questions;
    std::vector<int> d_answers;
    int d_nbAnswers;
    int d_nbCorrectAnswers;
};

#endif // QUIZZ_H

#include "../headers/mainwindow.h"

mainwindow::mainwindow(const quiz& q, QWidget *parent) :
    QWidget(parent),
    d_quiz{q}, d_currentQuestionNumber{0}, d_choice{0}
{
    viewInterface();
    viewStartQuiz();
}


mainwindow::~mainwindow()
{
}

void mainwindow::viewInterface()
{
    auto mainBox = new QHBoxLayout{};

    auto questionBox = new QVBoxLayout{};
    d_textEntitledQuestion = new QLabel{"XXXXXXXXXXXXXXXXXXXX"};
    questionBox->addWidget(d_textEntitledQuestion,0,Qt::AlignLeft);
    d_buttonsChoices = new QButtonGroup{this};
    for (int i =0; i<4; ++i)
    {
        auto radioButton = new QRadioButton{"XXXXXXXXXXXXXXX"};
        d_buttonsChoices->addButton(radioButton, i);
        questionBox->addWidget(radioButton,0,Qt::AlignLeft);
    }
    questionBox->addStretch(1);
    auto buttonBox = new QHBoxLayout{};
    d_buttonValidate = new QPushButton{"Validate"};
    buttonBox->addWidget(d_buttonValidate);
    d_buttonNext = new QPushButton{"Next"};
    buttonBox->addWidget(d_buttonNext);
    questionBox->addLayout(buttonBox);


    auto informationBox = new QVBoxLayout{};
    d_textPercentageSuccess = new QLabel{"XXXXXXXXX"};
    informationBox->addWidget(d_textPercentageSuccess,0,Qt::AlignLeft);
    d_textNumberQuestion = new QLabel{"XXXXXXXXX"};
    informationBox->addWidget(d_textNumberQuestion,0,Qt::AlignLeft);
    d_textResultChoice = new QLabel{"XXXXXXXXX"};
    informationBox->addWidget(d_textResultChoice,0,Qt::AlignLeft);
    d_restart = new QPushButton{"Restart"};
    informationBox->addWidget(d_restart,0,Qt::AlignLeft);

    mainBox->addLayout(informationBox);
    mainBox->addLayout(questionBox);

    connect(d_buttonNext, &QPushButton::clicked, this, &mainwindow::onNext);
    connect(d_buttonsChoices, qOverload<int>(&QButtonGroup::idClicked),this, &mainwindow::onChoice);
    connect(d_buttonValidate, &QPushButton::clicked, this, &mainwindow::onValidate);
    connect(d_restart, &QPushButton::clicked, this, &mainwindow::onRestart);

    setLayout(mainBox);
}
void mainwindow::viewStartQuiz()
{
    d_quiz.reset();
    d_currentQuestionNumber = 0;
    d_choice = 0;
    viewEnterAnswer();
    viewDisplayPercentageSuccess();
}

void mainwindow::viewDisplayPercentageSuccess()
{
    int percentage = d_quiz.successPercentage();
    QString successText = "Percentage success: " + QString::number(percentage) + "%";
    d_textPercentageSuccess->setText(successText);
}

void mainwindow::viewEnterAnswer()
{
    question q {d_quiz.getQuestion(d_currentQuestionNumber)};
    d_textNumberQuestion->setText("Question "
                                   +QString::number(d_currentQuestionNumber+1)
                                   +"/"

                                   +QString::number(d_quiz.nbQuestions()));
    d_textEntitledQuestion->setText(q.getEntitled());
    for (int i =0; i<4; ++i)
    {
        d_buttonsChoices->button(i)->setEnabled(true);
        d_buttonsChoices->button(i)->setText(q.choice(i));
    }
    d_buttonsChoices->button(d_choice)->setChecked(true);
    d_textResultChoice->setText("Select the answer");
    d_buttonValidate->setEnabled(true);
    d_buttonNext->setEnabled(false);


}



void mainwindow::viewCheckAnswer()
{
    question q = d_quiz.getQuestion(d_currentQuestionNumber);
    d_quiz.userAnswer(d_currentQuestionNumber,d_choice);

    if (d_quiz.correctUserResponse(d_currentQuestionNumber)) {
        d_textResultChoice->setText("Correct!");
    } else {
        d_textResultChoice->setText("Incorrect. The correct answer is: " + q.choice(q.getAnswer()));
    }

    for (int i = 0; i < 4; ++i) {
        d_buttonsChoices->button(i)->setEnabled(false);
    }

    d_buttonValidate->setEnabled(false);
    if(d_currentQuestionNumber<d_quiz.nbQuestions()-1)
    {
        d_buttonNext->setEnabled(true);
    }
}

void mainwindow::onNext()
{
    ++d_currentQuestionNumber;
    d_choice = 0;
    viewEnterAnswer();
}

void mainwindow::onChoice(int num)
{
    d_choice = num;
}

void mainwindow::onValidate()
{
    viewCheckAnswer();
    viewDisplayPercentageSuccess();
}

void mainwindow::onRestart()
{
    viewStartQuiz();
}


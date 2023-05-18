#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QButtonGroup>
#include <QRadioButton>
#include <QObject>
#include <QtWidgets>
#include <QWidget>
#include <QMetaMethod>
#include "quiz.h"

class mainwindow : public QWidget
{
    Q_OBJECT

public:
    mainwindow(const quiz& q, QWidget *parent = nullptr);
    ~mainwindow();
private :
    void viewInterface();

    quiz d_quiz;
    int d_currentQuestionNumber;
    int d_choice;

    QLabel *d_textEntitledQuestion;
    QLabel *d_textNumberQuestion;
    QLabel *d_textPercentageSuccess;
    QLabel *d_textResultChoice;
    QPushButton *d_buttonValidate;
    QPushButton *d_buttonNext;
    QPushButton *d_restart;
    QButtonGroup *d_buttonsChoices;

    void viewStartQuiz();
    void viewDisplayPercentageSuccess();
    void viewEnterAnswer();
    void viewCheckAnswer();

private slots:

   void onNext();
   void onValidate();
   void onRestart();
   void onChoice(int choice);
};
#endif // MAINWINDOW_H


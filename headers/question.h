#ifndef QUESTION_H
#define QUESTION_H
#include <QString>


class question {
public:
    question(QString e, QString c1, QString c2, QString c3, QString c4, int a);
    question(const question &q);
    QString getEntitled() const;
    QString choice(int i) const;
    int getAnswer() const;
private :
    QString entitled;
    QString choice1;
    QString choice2;
    QString choice3;
    QString choice4;
    int answer;

};


#endif // QUESTION_H

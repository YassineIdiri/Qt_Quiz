#include "../headers/question.h"


question::question(QString e, QString c1, QString c2, QString c3, QString c4, int a): entitled{e}, choice1{c1}, choice2{c2},
    choice3{c3} , choice4{c4} , answer{a}
{

}

question::question(const question &q) : entitled{q.getEntitled()}, choice1{q.choice(0)}, choice2{q.choice(1)},
    choice3{q.choice(2)} , choice4{q.choice(3)} , answer{q.getAnswer()}
{

}


QString question::getEntitled() const
{
    return entitled;
}

QString question::choice(int i) const
{
    if(i==0)
    {
        return choice1;
    }
    else if(i==1)
    {
        return choice2;
    }
    else if(i==2)
    {
        return choice3;
    }
    else if(i==3)
    {
        return choice4;
    }
}

int question::getAnswer() const
{
    return answer;
}


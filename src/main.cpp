#include "../headers/mainwindow.h"
#include "../headers/question.h"
#include <iostream>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    std::vector<question> questions;

    questions.push_back(question{"What is the capital of Australia?","Sydney","Melbourne","Canberra","Brisbane",2});
    questions.push_back(question{"How many states are there in the United States?","48","50","52","54",1});
    questions.push_back(question{"What is the largest ocean in the world?","The Atlantic Ocean","The Arctic Ocean","The Indian Ocean","The Pacific Ocean",3});
    questions.push_back(question{"When did World War II end?","In 1944","In 1945","In 1946","In 1947",1});
    questions.push_back(question{"Until 1923, what was the Turkish city of Istanbul called?","Constantinople","Byzantium","Smyrna","Ankara",0});
    questions.push_back(question{"What is the capital of Canada?","Toronto","Vancouver","Montréal","Ottawa",3});
    questions.push_back(question{"Name the longest river in the world?","The Amazon","The Nile","The Yangtze","The Mississippi",1});
    questions.push_back(question{"How many minutes are there in a full week?","7,200 minutes","10,080 minutes","14,400 minutes","16,800 minutes",1});
    questions.push_back(question{"In which country would you find Mount Kilimanjaro?","Tanzania","Kenya","Uganda","Zambia",0});
    questions.push_back(question{"What is the planet closest to the sun?","Venus","Mars","Jupiter","Mercury",3});
    questions.push_back(question{"What is the largest planet in the solar system?","Jupiter","Mercury","Venus","Mars",0});
    questions.push_back(question{"Who was the scientist who proposed the three laws of motion?","Albert Einstein","Isaac Newton","Galileo","Archimede",1});
    questions.push_back(question{"What is the only continent with land in all four hemispheres?","Europe","Asia","Africa","America",2});
    questions.push_back(question{"What is the capital of the state of New York?","New York City","Buffalo","Albany","Rochester",2});
    questions.push_back(question{"What is the smallest state in the United States by land area?","Rhode Island","Delaware","Connecticut","New Hampshire",0});
    questions.push_back(question{"In which year did the Chernobyl disaster occur?","1980","1983","1986","1990",1});
    questions.push_back(question{"How many legs does a lobster have?","8","6","4","2",0});
    questions.push_back(question{"What are the largest continent in the world by land area?","Asia","Africa","North America","South America",0});
    questions.push_back(question{"What year did the Titanic sink in the Atlantic Ocean?","1910","1912","1914","1916",1});
    questions.push_back(question{"Where does the Tour de France end each year?","Alpe d'Huez","Eiffel Tower","Avenue des Champs-Élysées","Mont Ventoux",2});

    mainwindow w{questions};
    w.show();
    return a.exec();
}

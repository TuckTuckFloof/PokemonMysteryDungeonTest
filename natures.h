#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int questionNum();
void totalQuestionNumChecker();
void hitEnter();
void introduction();
void questionChooser();
void hardyQuestions();
void docileQuestions();
void braveQuestions();
void jollyQuestions();
void impishQuestions();
void naiveQuestions();
void timidQuestions();
void hastyQuestions();
void sassyQuestions();
void calmQuestions();
void relaxedQuestions();
void lonelyQuestions(); // Haha me ;-;
void quirkyQuestions();
void miscQuestions();
void getAnswer();

struct playerNature {
    int hardy;
    int docile;
    int brave;
    int jolly;
    int impish;
    int naive;
    int timid;
    int hasty;
    int sassy;
    int calm;
    int relaxed;
    int lonely;
    int quirky;
    int answer;
    int questionNum;
    bool gender;
};

playerNature player;
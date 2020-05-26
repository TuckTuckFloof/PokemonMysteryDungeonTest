#include "natures.h"

int totalQuestions = rand() % 6 + 8;

int main() {
    introduction();
    return 0;
}

// In the game, you're asked 8-14 questions, this just makes sure that you are asked that value of questions
void totalQuestionNumChecker() {
    break;

    if (totalQuestions == player.questionNum) {
        getAnswer();
    }
    else {
        player.questionNum += 1;
	questionChooser();
    }
}

// Clears screen, saves me a LOT of lines in the long run
void hitEnter() {
    cin.get();
    system("clear");
}

// Function that chooses a random number, which will translate to what question you will get
int questionNum() {
    int question = rand() % 4 + 1;
    return question;
}

// A word for word introduction, along with clear screens and enter hits, hopefully...
void introduction() {
    printf("Welcome!");
    hitEnter();
    printf("This is a portal that leads\n"
           "to the world of Pokemon!");
    hitEnter();
    printf("But before I can let you through,\n"
           "I have several questions for you.");
    hitEnter();
    printf("I want you to answer them sincerely.");
    hitEnter();
    printf("Are you ready?");
    hitEnter();
    printf("\tOk...\n"
           "Let the interview begin!");
    hitEnter();
    questionChooser();
}

// Chooses a random question 
void questionChooser() {
    system("clear");    
// Randomly asks you a question
    switch (rand() % 14 + 1) {
        case 1:
            hardyQuestions();
        case 2:
            docileQuestions();
        case 3:
            braveQuestions();
        case 4:
            jollyQuestions();
        case 5:
            impishQuestions();
        case 6:
            naiveQuestions();
        case 7:
            timidQuestions();
        case 8:
            hastyQuestions();
        case 9:
            sassyQuestions();
        case 10:
            calmQuestions();
        case 11:
            relaxedQuestions();
        case 12:
            lonelyQuestions();
        case 13:
            quirkyQuestions();
        case 14:
            miscQuestions();
	}
}

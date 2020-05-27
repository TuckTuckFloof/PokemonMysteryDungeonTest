#include "natures.h"

// Questions based around the Hardy Nature
void hardyQuestions() {
    switch(questionNum()) {
        case 1:
            printf("A test is coming up.\n"
                   "How do you study for it?\n\n"
                   "1) Study Hard.\n"
                   "2) At the last second.\n"
                   "3) Ignore it and play. \n");
            switch(player.answer = cin.get()){
                case 1:
                    player.hardy += 2;
                    totalQuestionNumChecker();
                case 2:
                    player.relaxed += 2;
                    totalQuestionNumChecker();
                case 3:
                    player.impish += 2;
                    totalQuestionNumChecker();
                default:
                    printf("Please put a valid answer...");
                    hardyQuestions();
            }
        case 2:
            printf("Can you focus on something you like?\n\n"
                   "1) Yes.\n"
                   "2) No.\n");
            switch(player.answer = cin.get()){
                case 1:
                    player.hardy += 2;
                    player.docile += 1;
                    totalQuestionNumChecker();
                case 2:
                    player.sassy += 2;
                    player.quirky += 2;
                    totalQuestionNumChecker();
                default:
                    printf("Please put in a valid answer...");
                    hardyQuestion();
            }
        case 3:
            printf("When the going gets tough, do you get going?\n\n"
                   "1) Yes.\n"
                   "2) No.\n");
            switch(player.answer = cin.get()){
                case 1:
                    player.hardy += 2;
                    player.brave += 2;
                    totalQuestionNumChecker();
                case 2:
                    player.sassy += 2;
                    player.quirky += 2;
                    totalQuestionNumChecker();
                default:
                    printf("Please put in a valid answer...");
                    hardyQuestions();
            }
        case 4:
            printf("There is a bucket.\n"
                   "If you put water in it, how high will you fill it?\n\n"
                   "1) Full.\n"
                   "2) Half.\n"
                   "3) A little.\n");
            switch(player.answer = cin.get()){
                case 1:
                    player.hardy += 2;
                    totalQuestionNumChecker();
		case 2:
                    player.calm += 2;
                    totalQuestionNumChecker();
                case 3:
                    player.quirky += 2;
                    totalQuestionNumChecker();
                default:
                    printf("Please put in a valid answer...");
                    hardyQuestions();
            }
    	default:
	    printf("Please put in a valid answer...");
	    hardyQuestions();
    }
}

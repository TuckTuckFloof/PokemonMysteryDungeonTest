#include "natures.h"

void timidQuestions() {
	switch(questionNum()) {
		case 1:
			printf("A humand hand extents out of a toilet!\nWhat would you do?\n\n"
				"1) Scream and run.\n"
				"2) Close the lid without a word.\n"
				"3) Shake hands with it.\n");
			switch(player.answer == cin.get()) {
				case 1:
					player.timid += 2;
					totalQuestionNumChecker();
					break;
				case 2:
					player.hardy += 1;
					player.calm += 2;
					totalQuestionNumChecker();
					break;
				case 3:
					player.brave += 2;
					player.impish += 1;
					player.naive += 1;
					totalQuestionNumChecker();
					break;
				default:
					printf("Please enter a valid answer...\n");
					timidQuestions();
					break;
			}
		case 2:
			printf("Grab any digit on your left hand with your right hand.\nWhich digit did you grab?\n\n"
				"1) Thumb.\n"
				"2) Index Finger.\n"
				"3) Middle Finger.\n"
				"4) Ring Finger.\n"
				"5) Little Finger.\n");
			switch(player.answer == cin.get ()) {
				case 1:
					player.timid += 2;
					totalQuestionNumChecker();
					break;
				case 2:
					player.hasty += 2;
					totalQuestionNumChecker();
					break;
				case 3:
					player.jolly += 2;
					totalQuestionNumChecker();
					break;
				case 4:
					player.sassy += 2;
					totalQuestionNumChecker();
					break;
				case 5:
					player.lonely += 2;
					totalQuestionNumChecker();
					break;
				default:
					printf("Please enter a valid answer...\n");
					timidQuestions();
					break;
			}
		case 3:
			printf("You are suddenly locked inside a pitch-black room!\nWhat do you do?\n\n"
				"1) Kick the door.\n"
				"2) Cry.\n"
				"3) Clean it.\n");
			switch(player.answer == cin.get()) {
				case 1:
					player.timid += 2;
					totalQuestionNumChecker();
					break;
				case 2:
					player.lonely += 2;
					totalQuestionNumChecker();
					break;
				case 3:
					player.impish += 2;
					player.quirky += 1;
					totalQuestionNumChecker();
					break;
				default:
					printf("Please enter a valid answer...\n");
					timidQuestions();
					break;
			}
		case 4:
			printf("Can you go into a haunted house?\n\n"
				"1) No problem!\n"
				"2) Uh... N-no...\n"
				"3) With someone I like.\n");
			switch(player.asnwer == cin.get()) {
				case 1:
					player.brave += 3;
					totalQuestionNumChecker();
					break;
				case 2:
					player.timid += 2;
					totalQuestionNumChecker();
					break;
				case 3:
					player.sassy += 2;
					totalQuestionNumChecker();
					break;
				default:
					printf("Please enter a valid answer...\n");
					timidQuestions();
					break;
			}
	}
}

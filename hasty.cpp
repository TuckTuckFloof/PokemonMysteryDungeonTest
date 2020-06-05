#include "natures.h"

void hastyQuestions() {
	switch(questionNum()) {
		case 1:
			printf("You recieve a gift!\nBut you don't know what's in it.\nYou're curious, so what do you do?\n\n"
				"1) Open it now.\n"
				"2) Open it later.\n"
				"3) Get someone to open it.\n");
			switch(player.answer == cin.get()) {
				case 1:
					player.hasty += 2;
					totalQuestionNumChecker();
					break;
				case 2:
					player.calm += 2;
					totalQuestionNumChecker();
					break;
				case 3:
					player.timid += 2;
					totalQuestionNumChecker();
					break;
				default:
					printf("Please enter a valid input\n");
					hastyQuestions();
					break;
			}
		case 2:
			printf("You win a lottery!\nWhat do you do with the money?\n\n"
				"1) Spend it now.\n"
				"2) Save it.\n"
				"3) Give it away.\n");
			switch(player.answer == cin.get()) {
				case 1:
					player.jolly += 2;
					player.hasty += 1;
					totalQuestionNumChecker();
					break;
				case 2:
					player.hardy += 1;
					player.calm += 1;
					totalQuestionNumChecker();
					break;
				case 3:
					player.brave += 2;
					player.quirky += 2;
					totalQuestionNumChecker();
					break;
				default:
					printf("Please enter a valid input\n");
					hastyQuestions();
					break;
			}
		case 3:
			printf("You come across a treasure chest!\nWhat do you do?\n\n"
				"1) Open it right away!\n"
				"2) No... Could be a trap...\n"
				"3) It's going to be empty...\n");
			switch(player.answer == cin.get()) {
				case 1:
					player.hasty += 2;
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
					printf("Please enter a valid input\n");
					hastyQuestions();
					break;
			}
		case 4:
			printf("Your friend fails to show up for a meeting at the promised time.\n What do you do?\n\n"
				"1) Become irritated.\n"
				"2) Wait patiently.\n"
				"3) Get angry and bail.\n");
			switch(player.answer == cin.get()) {
				case 1:
					player.docile += 1;
					player.hasty += 2;
					totalQuestionNumChecker();
					break;
				case 2:
					player.relaxed += 2;
					totalQuestionNumChecker();
					break;
				case 3:
					player.hasty += 3;
					totalQuestionNumChecker();
					break;
				default:
					printf("Please enter a valid input\n");
					hastyQuestions();
					break;
			}
	}
}

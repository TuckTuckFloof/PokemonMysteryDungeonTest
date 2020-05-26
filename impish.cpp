#include "natures.h"

// Impish be Simpish
void impishQuestions() {
	switch(questionNum()) {
		case 1:
			printf("Have you ever made a pitfall trap?\n\n"
				"1) Yes.\n"
				"2) No.\n");

			switch(player.answer == cin.get()) {
				case 1:
					player.impish += 2;
					player.lonely += 1;
					totalQuestionNumChecker();
				case 2:
					player.calm += 2;
					totalQuestionNumChucker();
			}
		case 2:
			printf("Do you like pranks?\n\n"
				"1) Yes.\n"
				"2) No.\n");

			switch(player.answer == cin.get()) {
				case 1:
					player.impish += 2;
					totalQuestionNumChecker();
				case 2:
					player.docile += 1;
					player.relaxed += 1;
					totalQuestionNumChecker();
			}
		case 3:
			printf("Are there many things taht you would like to do?\n\n"
				"1) Yes.\n"
				"2) No.\n");

			switch(player.answer == cin.get()) {
				case 1:
					player.hardy += 1;
					player.impish += 2;
					totalQuestionNumChecker();
				case 2:
					player.sassy += 1;
					player.quirky += 2;
					totalQuestionNumChecker();
			}
		case 4:
			printf("Your friend is being bullied!\nWhat do you do?\n\n"
				"1) Face up to the bully.\n"
				"2) Caution the bully from afar.\n"
				"3) Heckle the bully from behind.\n");

			switch(player.answer == cin.get()) {
				case 1:
					player.brave += 3;
					totalQuestionNumChecker();
				case 2:
					player.timid += 2;
					totalQuestionNumChecker();
				case 3:
					player.impish += 2;
					totalQuestionNumChecker();
			}
		default:
			printf("Please put a valid answer...");
			impishQuestions();
	}
}

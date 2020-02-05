#include "natures.h"

// File containing Brave Questions... you'll see this a lot
void braveQuestions() {
	switch (questionNum()) {
		case 1:
			printf("You're going bungee jumping for the first time.\n"
				   "Since it's scary, you decide to test the jump with a doll...\n"
				   "And the bungee cord snaps!\n"
				   "Will you still try to make a jump anyway?\n\n"
				   "1) Yes.\n"
				   "2) No.\n");

			switch (player.answer == cin.get()) {
				case 1:
					player.brave += 3;
					player.impish += 1;
					totalQuestionNumChecker();
					questionChooser();
				case 2:
					player.docile += 2;
					player.timid += 1;
					totalQuestionNumChecker();
					questionChooser();
			}
		case 2:
			printf("There is an alien invasion!\n"
				   "What will you do?\n\n"
				   "1) Fight.\n"
				   "2) Run.\n"
				   "3) Ignore it.\n");
			switch (player.answer == cin.get()) {
				case 1:
					printf("You valiantly fight the aliens...\n"
							"But, you are defeated...\n"
							"An alien says to you\n\n"
							"YOU HAVE IMPRESSED US. IT WAS A PLEASURE TO SEE.\n"
							"JOIN US, AND TOGETHER WE SHALL RULE THE WORLD.\n"
							"What will you do?\n\n"
							"1) Rule with the aliens.\n"
							"2) Refuese.\n");
					switch(player.answer == cin.get()) {
						case 1:

						case 2:

					}
			}
		case 3:
		
		case 4:
	
	}
}
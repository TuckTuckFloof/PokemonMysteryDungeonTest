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
							player.sassy += 1;
							player.relaxed += 1;
							totalQuestionNumChecker();
							questionChooser();
						case 2:
							player.brave += 4;
							totalQuestionNumChecker();
							questionChooser();
						
					}
			}
		case 3:
			printf("There is a scream from behind a door!\n"
				"How will you react?\n\n"
				"1) Yank open the door."
				"2) Scream in unison.");
			switch (player.answer == cin.get()) {
				case 1:
					player.hardy += 1;
					player.brave += 2;
					totalQuestionNumChecker();
					questionChooser();
				case 2:
					player.naive += 2;
					totalQuestionNumChecker();
					questionChooser();

			}
		case 4:
			printf("A delinquent is hassling a girl on a busy city street!\n"
				"What will you do?\n\n"
				"1) Help without hesitation.\n"
				"2) Help, even if scared.\n"
				"3) Call the police.\n"
				"4) Do nothing out of fear. \n");
			switch (player.answer == cin.get()) {
				case 1:
					
				case 2:
				case 3:
				case 4:
			}
	}
}
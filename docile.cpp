#include "natures.h"

// Questions that are built around the Docile Nature
void docileQuestions() {
	switch (questionNum()) {
		case 1:
			printf("You are offered a choice of two gifts\n"
				   "Which one will you take?\n\n"
				   "1) Big box.\n"
				   "2) Small box.\n");
			switch(player.answer == cin.get()) {
				case 1:
					player.docile += 2;
					player.naive += 1;
					totalQuestionNumChecker();
					questionChooser();
				case 2:
					player.timid += 2;
					player.calm += 1;
					totalQuestionNumChecker();
					questionChooser();
				default:
					printf("Please put a valid answer...");
					docileQuestions();
			}

		case 2:
			printf("You broke a rotten egg in your room!\n"
				   "What will you do?\n\n"
				   "1) Open a window right away.\n"
				   "2) Take a sniff first.\n");
			switch (player.answer == cin.get()) {
				case 1:
					player.docile += 2;
					player.hasty += 1;
					totalQuestionNumChecker();
					questionChooser();
				case 2:
					player.naive += 2;
					player.relaxed += 1;
					totalQuestionNumChecker();
					questionChooser();
				default:
					printf("Please put a valid answer...");
					docileQuestions();
			}
		case 3:
			printf("A friend brought over something you'd forgotten.\n"
				   "How do you thank your friend?\n\n"
				   "1) Say thank you regularly."
				   "2) Say thanks with a joke."
				   "3) Say thanks, but be cool.");
			switch (player.answer == cin.get()) {
				case 1:
					player.docile += 2;
					totalQuestionNumChecker();
					questionChooser();
				case 2:
					player.naive += 1;
					player.lonely += 1;
					totalQuestionNumChecker();
					questionChooser();
				case 3:
					player.sassy += 2;
					totalQuestionNumChecker();
					questionChooser();
				default:
					printf("Please put a valid answer...");
					docileQuestions();
			}
		case 4:
			printf("There is a wallet on the side of the road.\n\n"
				   "1) Turn it in to the police!\n"
				   "2) Yay! Yay!\n"
				   "3) Is anyone watching...?\n");
			switch (player.answer == cin.get()) {
				case 1:
					player.docile += 2;
					totalQuestionNumChecker();
					questionChooser();
				case 2:
					player.naive += 2;
					totalQuestionNumChecker();
					questionChooser();
				case 3:
					player.impish += 2;
					totalQuestionNumChecker();
					questionChooser();
				default:
					printf("Please put a valid answer...");
					docileQuestions();
			}
	}
}
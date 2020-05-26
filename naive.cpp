#include "natures.h"

void naiveQuestions() {
	switch(questionNum()) {
		case 1:
			printf("Do you like groan-inducing puns?\n\n"
				"1) Love them!\n"
				"2) A little.\n"
				"3) Spare me...\n");
			switch(player.answer == cin.get()) {
				case 1:
					player.impish += 1;
					player.naive += 3;
					totalQuestionNumChecker();
					break;
				case 2:
					player.jolly += 2;
					totalQuestionNumChecker();
					break;
				case 3:
					player.sassy += 2;
					totalQuestionNumChecker();
					break;
			}
		case 2:
			printf("Do you tend to laugh a lot?\n\n"
				"1) Yes.\n"
				"2) No.\n");
			switch(player.answer == cin.get()) {
				case 1:
					player.


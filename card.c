#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct card {
	char *face;
	char *suit;
} card;

void filldeck(card *deck, char *face[], char *suit[]) {
	int i = 0;
	for (i = 0; i < 52; i++) {
		deck[i].face = face[i % 13];
		deck[i].suit = suit[i / 13];
	}
}

void shuffle(card *deck) {
	int i;
	for (i = 51; i > 0; i--) {
		int j = rand() % (i + 1);
		card temp = deck[i];
		deck[i] = deck[j];
		deck[j] = temp;
	}
}

void show(card *deck) {
	int i = 0;
	for (i = 0; i < 52; i++) {
		printf("%2s--%2s%c", deck[i].suit, deck[i].face, (i + 1) % 4 ? '\t' : '\n');
	}
}

int main() {
	card deck[52];
	char *face[] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13"};
	char *suit [] = {"H", "D", "C", "S"};
	srand(time(NULL));
	filldeck(deck, face, suit); //将52张牌放进结构体中
	shuffle(deck);//随机打乱这52张牌
	show(deck);
	return 0;
}
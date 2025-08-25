#include <stdio.h>

typedef enum syllable {
	Do = 1, Re = 2
}Syllable;

void Sound(Syllable sy) {
	switch (sy) {
	case Do:
		puts("��:"); return;
	case Re:
		puts("��:"); return;
	}
	puts("��");
}

int main(void) {
	Syllable tone;
	for (tone = Do; tone <= Re; tone += 1) {
		Sound(tone);
	}
	return 0;
}
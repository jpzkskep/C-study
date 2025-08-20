#include <stdio.h>

typedef enum syllable {
	Do = 1, Re = 2
}Syllable;

void Sound(Syllable sy) {
	switch (sy) {
	case Do:
		puts("µµ:"); return;
	case Re:
		puts("·¹:"); return;
	}
	puts("³¡");
}

int main(void) {
	Syllable tone;
	for (tone = Do; tone <= Re; tone += 1) {
		Sound(tone);
	}
	return 0;
}
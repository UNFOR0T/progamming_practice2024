#include <stdio.h>

int main() {

	float f;
	printf(" 화씨\t\t섭씨\n");
	printf("=====================\n");
	
	for (f = 100; f >= 0; f -= 10) {
		
		float c = (5.0 / 9)*(f - 32);

		printf(" %.1f\t\t%.1f\n",f,c);
	}

}
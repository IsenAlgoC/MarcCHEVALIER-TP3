#include <stdlib.h>
#include <stdio.h>

int main() {
	int N = 2868838400;
	int n = 0;
	n = sizeof(N);
	int v = 0;
	v = (n * 8);
	printf("le nombre d'octet utilise est %d\n", n);
	printf("le nombre de bit utilise est %d\n\n", v);

	for (int i = 0; i < v; i++) {
		if ((N & 1) == 1) {

			printf("bit %d on\n", i + 1);

		}

		else

			printf("bit %d off\n", i + 1);

		N = N >> 1;
	}

	printf("\nbye !\n");

}
#include <stdlib.h>
#include <stdio.h>

#define carre(x) (x) * (x)     // Cela r�alise bien (5 + 1) * (5 + 1), soi 36!
#define carre_ne_fonctionnant_pas(y) y * y    // Cela r�alise ici 5 + 1 * 5 + 1, soit 11... Il faut penser au priorit� op�ratoire!

/*il faut des parenth�ses !!!*/

int main() {

	int Nb = 5;
	printf("%d \n", carre(Nb + 1));
	printf("%d \n", carre_ne_fonctionnant_pas(Nb + 1));

}
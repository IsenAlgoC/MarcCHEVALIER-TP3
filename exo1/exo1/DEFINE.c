#include <stdlib.h>
#include <stdio.h>

#define carre(x) (x) * (x)     // Cela réalise bien (5 + 1) * (5 + 1), soi 36!
#define carre_ne_fonctionnant_pas(y) y * y    // Cela réalise ici 5 + 1 * 5 + 1, soit 11... Il faut penser au priorité opératoire!

/*il faut des parenthèses !!!*/

int main() {

	int Nb = 5;
	printf("%d \n", carre(Nb + 1));
	printf("%d \n", carre_ne_fonctionnant_pas(Nb + 1));

}
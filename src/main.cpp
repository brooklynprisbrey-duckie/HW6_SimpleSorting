#include "Vial.h"

using namespace std;

int main() {
	char arrVial[] = { 'a','a','b',0};
	Vial vial1(arrVial, 3);
	arrVial[0] = 'b';
	arrVial[1] = 'b';
	//arrVial[2] = 'b';
	//arrVial[3] = 'a';
	Vial vial2(arrVial, 3);

	vial1.display();
	vial2.display();

	vial1.transfer(vial2);

	vial1.display();
	vial2.display();

	return 0;
}
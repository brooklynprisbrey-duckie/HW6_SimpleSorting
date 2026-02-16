#include "Vial.h"

using namespace std;

int main() {
	char arrVial[] = { 'a','a','a',0};
	Vial vial1(arrVial, 3);
	//arrVial[0] = 0;
	//arrVial[1] = 0;
	//arrVial[2] = 'b';
	arrVial[3] = 0;
	Vial vial2(arrVial, 3);

	vial1.display();
	vial2.display();

	vial1.transfer(vial2);

	return 0;
}
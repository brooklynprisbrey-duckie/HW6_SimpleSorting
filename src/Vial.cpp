#include "Vial.h"

using namespace std;

Vial::Vial() {};

Vial::Vial(char contents[], int filling) {
	for (int i = 0; i <= sizeof(contents); i++) {
		vContents[i] = contents[i];
	}
	vFilled = filling;
};

Vial::Vial(char c1, char c2, char c3, char c4, int filling) {
	vContents[0] = c1; vContents[1] = c2; vContents[2] = c3; vContents[4] = c4;
	vFilled = filling;
};

bool Vial::add(char content) {
	if (vFilled < sizeof(vContents)) {
		vContents[vFilled] = content;
		vFilled += 1;
		return true;
	}
	cout << "Vial overflow!" << endl;
	return false;
};

void Vial::display() {
	cout << "(" << left << setw(4) << vContents << "]" << endl;
};

bool isComplete();
void setLabel(int label);
bool transfer(Vial& destination);
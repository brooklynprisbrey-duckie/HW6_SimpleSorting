#include "Vial.h"

using namespace std;

Vial::Vial() {};

Vial::Vial(char contents[], int filling) {
	for (int i = 0; i <= sizeof(contents); i++) {
		vContents[i] = contents[i];
	}
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
	return;
};

bool Vial::isComplete() {
	for (int i = 0; i < sizeof(vContents); i++) {
		if (vContents[0] != vContents[i]) { return false; }
	}
	return true;
};

void Vial::setLabel(int label) {
	vLabel = label;
	return;
};

bool Vial::transfer(Vial& destination) {
	if (vFilled == 0) {
		cout << "This vial is empty." << endl;
		return false;
	}
	else if (destination.vFilled == 4) {
		cout << "That vial is full." << endl;
		return false;
	}
	else if (vContents[vFilled - 1] != destination.vContents[destination.vFilled - 1]) {
		cout << "The contents do not match." << endl;
		return false;
	}
	return true;
};
#include <iostream>
#include <iomanip>
#include <string>
#pragma once

class Vial {
private:
	char vContents[4] = { 0 };
	int vFilled = 0;
	int vLabel;
public:
	Vial();
	Vial(char contents[], int filling);

	bool add(char content);
	void display();
	bool isComplete();
	void setLabel(int label);
	bool transfer(Vial& destination);
};


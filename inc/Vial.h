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
	Vial(char c1, char c2, char c3, char c4, int filling);
	bool add(char content);
	void display();
	bool isComplete();
	void setLabel(int label);
	bool transfer(Vial& destination);
};


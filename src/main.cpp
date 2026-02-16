#include "Vial.h"

using namespace std;

bool fillingVial(Vial& vial, int (*fillC)[4], char arr[]) {
	for (int i = 0; i < 4; i++) {
		int code = rand() % 4;
		switch (code) {
		case 0:
			if ((*fillC)[0] < 4) {
				vial.add(arr[0]);
				(*fillC)[0] += 1;
			}
			break;
		case 1:
			if ((*fillC)[1] < 4) {
				vial.add(arr[1]);
				(*fillC)[1] += 1;
			}
			break;
		case 2:
			if ((*fillC)[2] < 4) {
				vial.add(arr[2]);
				(*fillC)[2] += 1;
			}
			break;
		case 3:
			if ((*fillC)[3] < 4) {
				vial.add(arr[3]);
				(*fillC)[3] += 1;
			}
			break;
		}
	}
	return true;
}

int userValidation() {
	int choice = 0;
	while (choice <= 0 || 6 < choice){
		cout << "(Between 1-6) ";
		while (!(cin >> choice)) {
			cout << "Pick a number: ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	}
	return choice;
}

Vial& validToVial(int choice, Vial *vial[6]) {
	switch (choice) {
	case 1:
		return *vial[0];
	case 2:
		return *vial[1];
	case 3:
		return *vial[2];
	case 4:
		return *vial[3];
	case 5:
		return *vial[4];
	case 6:
		return *vial[5];
	}

}

int main() {
	srand(time(0));
	int fillCount[4] = {0};
	char ultArr[4] = { 'b','d','p','q' };

	Vial via1;
	fillingVial(via1, &fillCount, ultArr);
	Vial via2;
	fillingVial(via2, &fillCount, ultArr);
	Vial via3;
	fillingVial(via3, &fillCount, ultArr);
	Vial via4;
	fillingVial(via4, &fillCount, ultArr);
	Vial via5;
	fillingVial(via5, &fillCount, ultArr);
	Vial via6;
	while (fillCount[0] != 4 || fillCount[1] != 4 || fillCount[2] != 4 || fillCount[3] != 4) {
		fillingVial(via6, &fillCount, ultArr);
	}

	Vial* viArray[6] = { &via1, &via2, &via3, &via4, &via5, &via6 };

	bool sorting = true;

	do {
		cout << "1: ";
		via1.display();
		cout << "2: ";
		via2.display();
		cout << "3: ";
		via3.display();
		cout << "4: ";
		via4.display();
		cout << "5: ";
		via5.display();
		cout << "6: ";
		via6.display();

		cout << "Transfer from #number: ";
		int tFrom = userValidation();
		cout << "To #number: ";
		int tTo = userValidation();

		validToVial(tFrom, viArray).transfer(validToVial(tTo, viArray));

		sorting = (!via1.isComplete() && !via2.isComplete());
	} while (sorting);

	return 0;
}
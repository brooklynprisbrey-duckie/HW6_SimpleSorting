#include "Vial.h"

using namespace std;

bool fillingVial(Vial& vial, int (*fillC)[4], char arr[]) {
	for (int i; i <= 4; i++) {
		int code = rand() % 4;
		switch (code) {
		case 0:
			if ((*fillC)[0] < 4) {
				vial.add(arr[0]);
				(*fillC)[0] += 1;
				break;
			}
		case 1:
			if ((*fillC)[1] < 4) {
				vial.add(arr[1]);
				(*fillC)[1] += 1;
				break;
			}
		case 2:
			if ((*fillC)[2] < 4) {
				vial.add(arr[2]);
				(*fillC)[2] += 1;
				break;
			}
		case 3:
			if ((*fillC)[3] < 4) {
				vial.add(arr[3]);
				(*fillC)[3] += 1;
				break;
			}
		}
	}
	return true;
}

int main() {
	srand(time(0));
	int fillCount[4] = {0};
	char ultArr[4] = { 'b','d','p','q' };

	Vial via1;
	fillingVial(via1, &fillCount, ultArr);

	via1.display();

	return 0;
}
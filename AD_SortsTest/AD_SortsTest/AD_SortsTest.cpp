#include "pch.h"
#include <iostream>
#include "MyClasses.cpp"

using namespace std;

int main() {
	GEOKO * geo1 = new GEOKO(1, 1, 1, 1, 1.3, 1.3);
	GEOKO * geo2 = new GEOKO(2, 2, 2, 2, 2.3, 2.3);
	GEOKO * geo3 = new GEOKO(3, 3, 3, 3, 3.3, 3.3);
	GEOKO * geo4 = new GEOKO(4, 4, 4, 4, 4.3, 4.3);
	DVK *zeiger = new DVK(10);

	bool klappt = zeiger->anhaengen(geo1);
	cout << klappt << endl;
	zeiger->print();

}
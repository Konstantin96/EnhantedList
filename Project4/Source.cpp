#include "Libery.h"
#include "Vector.h"
#include "EnhantedVector.h"
#include "EnhantedList.h"
#include "List.cpp"


int main() {
	EnhantedList <int> el;
	el.pushBack(10);
	el.pushBack(13);
	el.pushBack(12);

	cout << el[2] << endl;
	system("pause");
	return 0;
}
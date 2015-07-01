#include<iostream>
#include"Position3D.h"

/*
	增加這一些廢話	
*/


/*我也新增了一些廢化*/

using namespace std;

typedef bool (*CMP)(int, int);

bool high_to_low(int compare_input1, int compare_input2);
bool low_to_high(int compare_input1, int compare_input2);

void sort_array(int *array_, const int length, CMP compare_fn);

int main(int argc, char *argv[]) {

	int array_int[] = { 1, 3, 5, 7, 4, 3, 2, 1 };


	Position2D p1(2.1, 3.1);
	Position2D p2(3.0, 1.1);
	Position3D p3(3.0, 1.1, 2.5);

	double *ptr_position = new double[3];
	p3.getPosition(ptr_position);
	cout << ptr_position[2] << endl;
	p3.setPosition(1.1, 2.2);
	p3.getPosition(ptr_position);
	cout << ptr_position[1] << endl;
	delete[] ptr_position;
	

	system("pause");
	return 0;
}

bool high_to_low(int compare_input1, int  compare_input2) {
	return compare_input1 < compare_input2;
}

bool low_to_high(int compare_input1, int  compare_input2) {
	return compare_input1 > compare_input2;
}

void sort_array(int *array_, const int length, CMP compare_fn) {

	int temp;

	for (int write_pos = 0; write_pos < length; write_pos++) {
		for (int scan_pos = write_pos + 1; scan_pos < length; scan_pos++) {
			if (compare_fn(array_[write_pos], array_[scan_pos])) {
				temp = array_[write_pos];
				array_[write_pos] = array_[scan_pos];
				array_[scan_pos] = temp;
			}
		}
	}
}
// Circular N left rotation in Arrays
// [1,2,3,4,5] and we want to make 3 left rotation => Result is [4,5,1,2,3]
// [10,13,5,7,2] and we want to make 1 left rotation => Result is [13,5,7,2,10]
// Do not use the additional array. In-place swapping.

#include <iostream>
#include <iomanip>
using namespace std;

void shiftleft(int[], int, int);
void shiftone(int[], int);
void printout(int[], int);

void shiftone(int number[], int SIZE)
{
	int tmp = number[0];
	for(int i=1; i<SIZE; i++) {
		number[i-1] = number[i];
	}
	number[SIZE-1] = tmp;
}
void shiftLeft(int number[], int SIZE, int count)
{
	for(int k=0; k<count; k++)
		shiftone(number, SIZE);
}

void printout(int number[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
		cout << setw(5) << number[i];
	cout << endl;
	return;
}

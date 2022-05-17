#include <iostream>
#include <stdio.h>
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
//#include "Array.hpp"
#include "Shape.hpp"
#include "ArrayException.hpp"
#include "Array.cpp"

using namespace std;
using namespace PAULLOPEZ::CAD;
using namespace PAULLOPEZ::CONTAINERS;
namespace PLC = PAULLOPEZ::CAD;
namespace PLCN = PAULLOPEZ::CONTAINERS;
/*
void print(const Point& pnt) {
	cout << "Your point is: (" << pnt.X() << "," << pnt.Y() << ")" << endl;
}
void print(const Line& l) {
	l.start();
	l.end();
}
void print(const Circle& c) {
	cout << endl << "Radius is: " << c.rad() << endl;
	Point pnt = c.ctr();
	cout << "X coordinate of center is: " << pnt.X() << endl ;
	cout << "Y coordinate of center is: " << pnt.Y() << endl;
}
*/
int main() {
	Array<int> intArray1;
	intArray1.SetElement(5, 0);
	Array<int> intArray2;
	Array<double> doubleArray;
	cout << intArray1.DefaultSize() << endl; //printed 10 
	cout << intArray2.DefaultSize() << endl; // printed 10
 	cout << doubleArray.DefaultSize() << endl; //printed 10
	intArray1.DefaultSize(15);
	cout << intArray1.DefaultSize() << endl; // printed 15
	cout << intArray2.DefaultSize() << endl; //printed 15 also! This happens since dSize is static and it keeps memory for that specific type (int)
	cout << doubleArray.DefaultSize() << endl; //printed 10
	return 0;
}
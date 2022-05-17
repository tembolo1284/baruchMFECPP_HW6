#include <iostream>
#include <stdio.h>
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "Array.hpp"
#include "Shape.hpp"
#include "ArrayException.hpp"
#include "PointArray.hpp"
#include "NumericArray.cpp"

using namespace std;
using namespace PAULLOPEZ::CAD;
using namespace PAULLOPEZ::CONTAINERS;
namespace PLC = PAULLOPEZ::CAD;
namespace PLCN = PAULLOPEZ::CONTAINERS;

int main() {
	PointArray arr1(3);
	PointArray arr2;
	Point pt1(1, 1);
	Point pt2(2,1);

	int size1 = arr1.Size();
	for (int i = 0; i < size1; i++) {
		arr1.SetElement(pt1 * i, i);  
		cout << arr1.GetElement(i) << endl;
	}
	cout << "---------------------" << endl;
	cout << "Polyline length for arr1 is: " << arr1.Length() << endl; // should be sqrt(2) + sqrt(2)

	int size2 = arr2.Size();
	for (int j = 0; j < size2; j++) {
		arr2.SetElement(pt2 * j, j);
		cout << arr2.GetElement(j) << endl;
	}
	cout << "---------------------" << endl;
	cout << "Length for arr2 is: " << arr2.Length() << endl;
	return 0;
}
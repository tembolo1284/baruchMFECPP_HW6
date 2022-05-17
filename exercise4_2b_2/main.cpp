#include <iostream>
#include <stdio.h>
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "Shape.hpp"
#include "ArrayException.hpp"
#include "Array.hpp"
#include "NumericArray.hpp"

using namespace std;
using namespace PAULLOPEZ::CAD;
using namespace PAULLOPEZ::CONTAINERS;
namespace PLC = PAULLOPEZ::CAD;
namespace PLCN = PAULLOPEZ::CONTAINERS;

int main() {

	/*
	NumericArray<int> arr1;
	NumericArray<int> arr2(5);
	
	for (int i = 0; i < 5; i++) {
		arr2.SetElement(2, i);
		cout << arr2.GetElement(i) << endl;
	}
	cout << "---------------------" << endl;
	
	//testing assignment operator
	arr1 = arr2;
	
	for (int i = 0; i < 5; i++) {
		cout << arr1.GetElement(i) << endl;
	}
	
	//cout << addressof(arr1) << endl;
	//cout << addressof(arr2) << endl;
	cout << "-----------------------" << endl;
	*/

	NumericArray<double> dblArray1; //default constructor
	NumericArray<double> dblArray2;
	NumericArray<double> dblArray3(5); //constructor with int param
	double num1 = 2.0;
	double num2 = 5.0;
	double factor = 2.0;

	for (int i = 0; i < dblArray1.Size(); i++) {	
		dblArray1.SetElement(num1, i);
		dblArray2.SetElement(num2, i);
		cout << dblArray1.GetElement(i) << " x " << dblArray2.GetElement(i) << endl;
	}

	//dotProduct() test
	double result = dblArray1.DotProduct(dblArray2);// result should be a double (5 * 2) * 10 = 100
	cout << "Dot product result: " << result << endl; //dot product is 100
	
	int arraySize = dblArray3.Size();
	for (int j = 0; j < arraySize; j++) {
		dblArray3.SetElement(num1,j);
		cout << dblArray3.GetElement(j) << endl; //array full of 2's
	}
	cout << "--------Scalar Mult---------------" << endl;
	//test * and + operators
	NumericArray<double> dblArray4(5); 
	dblArray4 = dblArray3 * factor;
	
	for (int j = 0; j < arraySize; j++) {
		cout << dblArray4.GetElement(j) << endl; // now it is all 4's
	}
	cout << "----------Addition-------------" << endl;
	
	dblArray1 = dblArray1 + dblArray2; // 2 + 5 = 7
	int arrSize = dblArray1.Size();
	for (int j = 0; j < arrSize; j++) {
		cout << dblArray1.GetElement(j) << endl; // Array of 7s now
	}
	
	//I'm making the assumption in the body of my definitions that the type I am using I can do + and * with. 
	//This won't work with type string or point, for example.
	//I never defined what is point1 * point2 or string1 * string2. Very cool module!
	return 0;
}
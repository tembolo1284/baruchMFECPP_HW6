#include <iostream>
#include <stdio.h>
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "Array.hpp"
#include "Shape.hpp"
#include "ArrayException.hpp"
#include "StackException.hpp"
#include "PointArray.hpp"
#include "NumericArray.hpp"
#include "Stack.hpp"

using namespace std;
using namespace PAULLOPEZ::CAD;
using namespace PAULLOPEZ::CONTAINERS;
namespace PLC = PAULLOPEZ::CAD;
namespace PLCN = PAULLOPEZ::CONTAINERS;

int main() {
	Array<int> arr1(3);
	Stack<int,3> st1;
	Stack<int,3> st2;
	Stack<int,3> st3; 
	
	int num = 2;
	int arrSize = arr1.Size();
	int currObj{ 0 };
	try {

	for (int i = 0; i < arrSize; i++) {
		arr1[i] = num * i;
		currObj = arr1[i];
		//st1.Push(currObj); 
		st1.Pop();
	}
	st1.Pop(); //will give a stack empty exception if you let the other Pop() call run in the for loop
	//st1.Push(5); //will give stack full exception if you let the other push() above run in the loop
	st3 = st1; //= operator test
	Stack<int,3> st4(st1); //copy constructor test
		
	}
	catch (StackException& se) {
		cout << "A Stack Exception has occurrred." << endl << se.GetMessage() << endl;
	}
	catch (ArraySizeException& ae) {
		cout << "A Stack Exception has occurrred." << endl << ae.GetMessage() << endl;
	}
	catch (OutOfBoundsException& ob) {
	cout << "An exception has occurrred." << endl << ob.GetMessage() << endl;
	}
	catch (...) {
		cout << "An unhandled exception has occurred.";
	}

	return 0;
}
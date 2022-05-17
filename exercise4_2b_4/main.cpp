#include <iostream>
#include <stdio.h>
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "Array.hpp"
#include "Shape.hpp"
#include "ArrayException.hpp"
#include "PointArray.hpp"
#include "NumericArray.hpp"
#include "Stack.hpp"

using namespace std;
using namespace PAULLOPEZ::CAD;
using namespace PAULLOPEZ::CONTAINERS;
namespace PLC = PAULLOPEZ::CAD;
namespace PLCN = PAULLOPEZ::CONTAINERS;

int main() {
	Array<int> arr1;
	Stack<int> st1;
	Stack<int> st2(5);
	

	int n = 2;
	int arrSize = arr1.Size();
	int currObj{ 0 };
	for (int i = 0; i < arrSize; i++) {
		arr1[i] = n * i;
		currObj = arr1[i]; 
		st1.Push(currObj);
		cout << "Array slot " << i << " is: " << arr1[i] << endl;
		cout << "Stack slot " << i << " just pushed: " << arr1[i] << endl;
	}
	Stack<int> st3(st1); //copy constructor test
	int j = arr1.Size();
		while( j != 0) {
		cout << "st1 popped in slot " << j << ": " << st1.Pop() << endl;
		cout << "st3 popped in slot " << j << ": " << st3.Pop() << endl;
		j--;
	}

		st1 = st2; //= operator test


	//st1 is full. Will now do one more push with a random hardcoded integer and we'll get an OutOfBoundsException
	try {
		//cout << "Popping st3 once more:" << endl;
		st3.Pop(); //this gives OutOfBoundsException because we try to pop when it is empty
		
		for (int k = 0; k < 6; k++) {
			//st1.Push(5); // this gives OutOfBoundsException because stack gets full on 6th iteration
		}
	}
	//catch (ArrayException& ae) {
	//	cout << "An Array Exception has occurrred." << endl << ae.GetMessage();
	//}
	catch (OutOfBoundsException& ob) {
	cout << "An exception has occurrred." << endl << ob.GetMessage();
	}
	catch (...) {
		cout << "An unhandled exception has occurred.";
	}

	
	return 0;
}
#define _USE_MATH_DEFINES
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "Array.hpp"
#include "Shape.hpp"
#include "ArrayException.hpp"
#include <cmath>
#include <sstream>


	//ArrayException::ArrayException() {
	//default constructor implementation. 
	//We don't implemenet ArrayException::GetMessage()
//}

//OutofBoundsException::OutofBoundsException() {}
OutOfBoundsException::OutOfBoundsException(int index) {}

string OutOfBoundsException::GetMessage() const {
	return "Your input is out of bounds.";
}
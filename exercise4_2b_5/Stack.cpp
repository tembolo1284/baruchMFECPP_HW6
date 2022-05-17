#ifndef Stack_CPP
#define Stack_CPP
#define _USE_MATH_DEFINES
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "NumericArray.hpp"
#include "ArrayException.hpp"
#include "StackException.hpp"
#include "Array.hpp"
#include "Stack.hpp"
#include <cmath>
#include <sstream>

namespace PAULLOPEZ {
	namespace CONTAINERS {
		template <typename T>
		Stack<T>::Stack() : index(0), arr() {
			//cout << "Default Stack constructor says hello to you." << endl;
		}
		template <typename T>
		Stack<T>::Stack(const int n) : index(0), arr(n) {
			//cout << "This is another Stack constructor." << endl;
		}
		template <typename T>
		Stack<T>::Stack(const Stack<T>& st) : index(st.index), arr(st.arr) {
			//cout << "Copy Stack constructor says Hello to you." << endl;
		}
		template <typename T>
		Stack<T>::~Stack() {
			cout << "Bye bye Stack..." << endl;
		}

		template <typename T>
		Stack<T>& Stack<T>::operator = (const Stack<T>& st) { // Assignment operator.
			if (this == &st) {
				return *this;
			}
			index = st.index;
			arr = st.arr;
			return *this;
		}
		template <typename T>
		void Stack<T>::Push(const T& obj) {
			try {
				arr[index] = obj; //throw object in last slot of array
				index++; //increment index by 1
			}
			catch (ArrayException&) {
				cout << "An Array Exception has occurred." << endl;
				throw StackFullException(); 
			}
			catch (...) {
				cout << "An unhandled exception has occurred.";
			}
		}
		template <typename T>
		T Stack<T>::Pop() { 
			try {
				arr[index - 1]; //try this and if no exception is thrown, we are good to proceed.
				index--; //decrement index by 1
				return arr[index];
			}
			catch (ArrayException&) {
				cout << "An Array Exception has occurred." << endl;
				throw StackEmptyException(); //this needs to be uncommented when testing out Pop()
				
			}
			catch (...) {
				cout << "An unhandled exception has occurred.";
			}
		}

	}
}

#endif
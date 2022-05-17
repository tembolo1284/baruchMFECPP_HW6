#ifndef Stack_HPP
#define Stack_HPP
#include <iostream>
#include <string>
#include "ArrayException.hpp"
#include "Array.hpp"
using namespace std;

namespace PAULLOPEZ {
	namespace CONTAINERS {
		using namespace CAD;
		template <typename T>
		class Stack {
		private:
			int index;
			Array<T> arr;

		public:
			Stack(); //constructor
			Stack(const int n); //initialization with dynamic variable
			Stack(const Stack& st); //Copy constructor
			~Stack(); //destructor

			Stack& operator = (const Stack& source); // Assignment operator.
			
			void Push(const T& obj); //puts object of type T on stack
			T Pop(); //kicks off topmost object of type T off stack
		};
	}
}

#ifndef Stack_cpp // Must be the same name as in source file #define
#include "Stack.cpp"
#endif
#endif
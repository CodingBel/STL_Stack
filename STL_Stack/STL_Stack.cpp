// Note you can NOT iterate through an std::stack
// You'llhave to do it using some while loops 

#include <iostream>
#include <stack>

int main() {
	std::stack<int>myStack; 

	for (int i = 0; i < 5; i++)
		myStack.push(i);  

	std::cout << myStack.top() << std::endl; // top() will just show you 
	std::cout << myStack.top() << std::endl; // it won't remove the 
	std::cout << myStack.top() << std::endl; // element
	std::cout << "\n"; 

	while (!myStack.empty()) {
		std::cout << "The memory location: " << &myStack.top(); 
		std::cout << " has a value of: " << myStack.top() << std::endl;

		myStack.pop(); 
	}

	return 0; 
}
#include <iostream>

const int MAX = 100;						// size of array
template <class Type>

class Stack
{
private:
	Type st[MAX];							// stack array of any type
	int top;								// number of top of stack
public:
	Stack(): top(-1)						// constructor
	{}
	void push(Type var)						// put member on stack
	{
		st[++top] = var;
	}
	Type pop()								// take number of the stack
	{
		return st[top--];
	}
};

int main() {
	Stack<float> s1;                        // s1 is object of class Stack<float>

	s1.push(1111.11);						// push 3 floats and pop 3 floats
	s1.push(2222.22);
	s1.push(3333.33);

	std::cout << "1: " << s1.pop() << std::endl;
	std::cout << "2: " << s1.pop() << std::endl;
	std::cout << "3: " << s1.pop() << std::endl;

	Stack<long> s2;							// s2 is object of class Stack<long>

	s2.push(123123123);						// push 3 longs and pop 3 longs
	s2.push(234234234);
	s2.push(345345345);

	std::cout << "1: " << s2.pop() << std::endl;
	std::cout << "2: " << s2.pop() << std::endl;
	std::cout << "3: " << s2.pop() << std::endl;

	return 0;
}

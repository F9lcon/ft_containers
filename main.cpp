#include "Stack.hpp"
#include <stack>

int	main( void )
{
	ft::Stack<int> a;
	a.push(42);
	a.push(21);

	ft::Stack<int> b = a;
	std::cout << "empty " << a.empty() << std::endl;
	std::cout << "size " << a.size() << std::endl;
	// a.pop();
	std::cout << "top " << a.top() << std::endl;
	std::cout << "== " << (a == b) << std::endl;
	std::cout << "!= " << (a != b) << std::endl;
	std::cout << "< " << (a < b) << std::endl;
	std::cout << "<=" << (a <= b) << std::endl;
	std::cout << ">" << (a > b) << std::endl;
	std::cout << ">=" << (a >= b) << std::endl;
	return (0);
}
#include <iostream> // for std::cout
int main()
{
	std::cout << "Enter a Number: ";//
	int x{};
	std::cin >> x;
	std::cout << "You Entered " << x << '\n';
	//std::cout << "x is equal to: "<< x; // std = Predefined variable which sends data to console  cout = character out
	//std::cout << "Hi!!\n";
	//std::cout << "My name is Alex." << std::endl;
	return 0;
}
// << insertion operator
// >> extraction operator
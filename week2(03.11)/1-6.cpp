//1-6

#include<iostream>
#include<string>

int main(void) {

	std::cout<<"what is ur name?";
	std::string name;
	std::cin >> name;
	std::cout << "hello," << name << std::endl << "and what is yours?";
	std::cin >> name;
	std::cout << "hello," << name << "; nice to meet u too" << std::endl;


	return 0;
}
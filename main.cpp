#include <iostream>
#include "VintagePort.hpp"

int main() {
	VintagePort vp("Port", 500,"Old velvet", 1972);
	VintagePort vp1(vp);
	VintagePort vp2 = vp1;

	Port &addition_info = vp;
	Port &addition_info1 = vp1;
	Port &addition_info2 = vp2;

	std::cout << "\nDerived class check" << std::endl;
	std::cout << "default : " << vp << " | Show() method: ";
	vp.Show();

	std::cout << "copy    : " << vp1 << " | Show() method: ";
	vp1.Show();

	std::cout << "assigned: " << vp2 << " | Show() method: ";
	vp1.Show();

	std::cout << "\nBase class check" << std::endl;
	std::cout << "default : " << addition_info << " | BottleCount() method: ";
	std::cout << addition_info.BottleCount() << std::endl;


	std::cout << "copy    : " <<  addition_info1 << " | BottleCount() method: ";
	std::cout << addition_info1.BottleCount() << std::endl;

	std::cout << "assigned: " << addition_info2 << " | BottleCount() method: ";
	std::cout << addition_info2.BottleCount() << std::endl;

	return 0;
}
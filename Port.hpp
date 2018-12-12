//
// Created by jin on 11.12.18.
//

#ifndef HW5_PORT_HPP
#define HW5_PORT_HPP

#include <iostream>

class Port {
private:
	char* brand;
	char style[20]; // e.g. tawny, ruby, vintage
	int bottles;

public:
	Port(const char* br, const char* st, int b);
	Port(const Port& p);
	virtual ~Port();

	Port& operator=(const Port & p);
	Port& operator+=(int b) ; // adds b to bottles
	Port& operator-=(int b); // subtracts b from bottles, if possible

	int BottleCount() const;
	virtual void Show() const;
	friend std::ostream& operator<<(std::ostream& os, const Port& p);
};

#endif //HW5_PORT_HPP

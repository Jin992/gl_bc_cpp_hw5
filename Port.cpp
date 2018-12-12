//
// Created by jin on 11.12.18.
//

#include <cstring>
#include "Port.hpp"

Port::Port(const char *br, const char *st, int b):bottles(b) {
	memset(style, 0, 20);
	if (st == nullptr || br == nullptr){
		throw std::invalid_argument("Error: nullptr as argument.");
	}
	memcpy(style, st, strlen(st));
	brand = new char[strlen(br) + 1]();
	memcpy(brand, br, strlen(br));
}

Port::Port(const Port &p): brand(nullptr) {
	if (p.brand != nullptr){
		brand = new char[strlen(p.brand) + 1]();
		memcpy(brand, p.brand, strlen(p.brand));
	}
	memcpy(style, p.style, 20);
	bottles = p.bottles;
}

Port::~Port() {
	delete [] brand;
}

int Port::BottleCount() const {
	return bottles;
}

void Port::Show() const{
	std::cout << brand << "," << style << "," <<  bottles;
}

Port& Port::operator=(const Port & p){
	if (brand != nullptr){
		delete [] brand;
		brand = nullptr;
	}
	brand = new char[strlen(brand) + 1]();
	memcpy(brand, p.brand, strlen(brand));
	memcpy(style, p.style, 20);
	bottles = p.bottles;
	return *this;
}

Port& Port::operator+=(int b){
	bottles += b;
	return  *this;
}

Port& Port::operator-=(int b){
	bottles -= b;
	return *this;
}

std::ostream& operator<< (std::ostream& os, const Port& p){
	os << p.brand << "," << p.style << "," <<  p.bottles;
	return os;
}
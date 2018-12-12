//
// Created by jin on 11.12.18.
//

#include "VintagePort.hpp"
#include <cstring>

VintagePort::VintagePort(): Port("Port", "vintage",  0), nickname(nullptr), year(0)
{}

VintagePort::VintagePort(const char *br, int b, const char *nn, int y): Port(br, "vintage", b), year(y) {
	if (nn == nullptr){
		throw std::invalid_argument("Error: nullptr as argument.");
	}
	nickname = new char[strlen(nn) + 1]();
	memcpy(nickname, nn, strlen(nn));
}

VintagePort::VintagePort(const VintagePort &vp): Port(vp), nickname(nullptr) {
	if (vp.nickname != nullptr){
		nickname = new char[strlen(vp.nickname) + 1]();
		memcpy(nickname, vp.nickname, strlen(vp.nickname));
	}
	year = vp.year;
}

VintagePort::~VintagePort() {
	delete [] nickname;
}

void VintagePort::Show() const {
	std::cout << nickname << " " << year << std::endl;
}

VintagePort & VintagePort::operator=(const VintagePort & vp){
	Port::operator=(vp);
	if (nickname != nullptr){
		delete [] nickname;
		nickname = nullptr;
	}
	nickname = new char[strlen(nickname) + 1]();
	memcpy(nickname, vp.nickname, strlen(nickname));
	year = vp.year;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const VintagePort& vp){
	os << vp.nickname << "," << vp.year;
	return os;
}
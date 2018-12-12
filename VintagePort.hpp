//
// Created by jin on 11.12.18.
//

#ifndef HW5_VINTAGEPORT_HPP
#define HW5_VINTAGEPORT_HPP

#include "Port.hpp"


class VintagePort : public Port { // style always == "vintage"
private:
	char* nickname; // like "The Noble", "Old Velvet", etc.
	int year; // year of bottling

public:
	VintagePort();
	VintagePort(const char* br, int b, const char* nn, int y);
	VintagePort(const VintagePort& vp);
	~VintagePort() override;

	VintagePort & operator=(const VintagePort & vp);
	void Show() const override;
	friend std::ostream& operator<<(std::ostream& os, const VintagePort& vp);
};


#endif //HW5_VINTAGEPORT_HPP

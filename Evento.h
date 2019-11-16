#pragma once
#include <string>
using namespace System;
class Evento
{
public:
	std::string startHour;
	std::string fecha;
	std::string description;
	std::string identifier;
	std::string priority;
	int pnum;
	virtual void ItsTime() {};
};


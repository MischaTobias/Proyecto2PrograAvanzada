#pragma once
#include <string>
using namespace System;
class Evento
{
public:
	TimeSpan* startHour;
	std::string fecha;
	std::string description;
	std::string identifier;
	int priority;
	virtual void ItsTime() {};
};


#pragma once
#include <iostream>
#include <string>
#include "Weather.h"

class Service
{
public:

	virtual Weather getWeather(std::string s) = 0;

	virtual ~Service() {};

};


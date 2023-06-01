#pragma once
#include "Service.h"
#include "pugixml-master/src/pugixml.hpp"
using namespace pugi;


class XmlService : public Service {

public:

	virtual Weather getWeather(std::string s) override;
	virtual ~XmlService() {};

};


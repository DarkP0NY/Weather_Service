#pragma once
#include "Service.h"
#include "JSON/include/nlohmann/json.hpp"
#include <iostream>
#include <fstream>


using namespace std;
using nlohmann::json;



class JsonService : public Service {

public:
	virtual Weather getWeather(std::string s) override;
	virtual ~JsonService() {};

};


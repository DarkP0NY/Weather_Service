#include <iostream>
#include "Weather.h"
#include "XmlService.h"
#include <string>
#include "JsonService.h"
using namespace std;


void main() {

	setlocale(0, "");


	JsonService test;

	Weather w = test.getWeather("weather.json");

	cout << w << "\n";


	XmlService xs;

	Weather wea(xs.getWeather("weather.xml"));

	cout << wea;

}
#include <iostream>
#include "Weather.h"
#include "XmlService.h"
#include <string>
#include "JsonService.h"
using namespace std;


void main() {

	setlocale(0, "");

	JsonService test;

	cout << test.getWeather("weather.json") << "\n";



	Weather w = test.getWeather("weather.json");

	cout << w << "\n";


	
	Weather weather("Киров", 49.6601, 58.5966, 5.69, "дождик", 4.27, 100);
	
	cout << weather << "\n";



	XmlService xs;

	Weather wea(xs.getWeather("weather.xml"));

	cout << wea;

}
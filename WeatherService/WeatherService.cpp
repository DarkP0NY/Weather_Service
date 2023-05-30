#include <iostream>
#include "Weather.h"
#include <string>
#include "JsonService.h"
using namespace std;


void main() {

	setlocale(0, "");

	JsonService test;

	cout << test.getWeather("weather.json");

	Weather w = test.getWeather("weather.json");


}
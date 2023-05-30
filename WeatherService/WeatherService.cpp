#include <iostream>
#include "Weather.h"
#include <string>
using namespace std;


void main() {

	setlocale(0, "");

	Weather weather("Киров", 49.6601, 58.5966, 5.69, "дождик", 4.27, 100);

	cout << weather;

	cout;

}
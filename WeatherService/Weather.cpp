#include "Weather.h"

Weather::Weather(string city, double lon, double lat, double temperature, string weather, double windSpeed, int clouds) {

	this->city = city;
	this->lon = lon;
	this->lat = lat;
	this->temperature = temperature;
	this->weather = weather;
	this->windSpeed = windSpeed;
	this->clouds = clouds;

}

void Weather::getData(){

	cout << city << ": lon(" << lon << "), lat(" << lat << "), t(" << temperature << "), погода(" << weather << "), скорость ветра(" << windSpeed << "), облачность(" << clouds << ")\n";

}

std::ostream& operator<<(std::ostream& out, Weather weatherrr)
{
	out << weatherrr.city << ": lon(" << weatherrr.lon << "), lat(" << weatherrr.lat << "), t(" << weatherrr.temperature << "), погода(" << weatherrr.weather << "), скорость ветра(" << weatherrr.windSpeed << "), облачность(" << weatherrr.clouds << ")\n";
	return out;
}

#include "Airline.h"

using namespace std;

Airline::Airline()
{
}

void Airline::addFlight(const Flight flight)
{
	this->m_flights.push_back(flight);
}

void Airline::removeFlight(const int index)
{
	if (index > 0 && index < this->m_flights.size())
		this->m_flights.erase(this->m_flights.begin() + index - 1);
}

Flight Airline::getFlight(const int index)
{
	if (index > 0 && index < this->m_flights.size())
		return this->m_flights[index - 1];
}

int Airline::getFlightCount()
{
	return this->m_flights.size();
}

vector<Flight> Airline::getAllFlights()
{
	return this->m_flights;
}

vector<Flight> getFlightsByDayOfWeek(Airline& airline, int dayOfWeek) {
	vector<Flight> flightsByDay;
	for (auto& flight : airline.getAllFlights()) {
		if (flight.getDayOfWeek() == dayOfWeek) {
			flightsByDay.push_back(flight);
		}
	}
	return flightsByDay;
}

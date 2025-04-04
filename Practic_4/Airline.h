#pragma once
#include <string>
#include <vector>
#include "Flight.h"

class Airline
{
private:
	std::vector<Flight> m_flights;

public:
	Airline();
	void addFlight(const Flight flight);
	void removeFlight(const int index);
	Flight getFlight(const int index);
	int getFlightCount();
	std::vector<Flight> getAllFlights();
	friend std::vector<Flight> getFlightsByDayOfWeek(Airline& airline, int dayOfWeek);
	friend class FriendAirline;
};
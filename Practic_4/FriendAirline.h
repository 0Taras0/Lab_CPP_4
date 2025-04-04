#pragma once
#include <vector>
#include "Airline.h"

class FriendAirline
{
public:
	static std::vector<Flight> getFlightsByDayOfWeek(Airline& airline, int dayOfWeek);
};


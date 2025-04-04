#include "FriendAirline.h"

using namespace std;

vector<Flight> FriendAirline::getFlightsByDayOfWeek(Airline& airline, int dayOfWeek)
{
	vector<Flight> flightsByDay;
	for (auto& flight : airline.m_flights) {
		if (flight.getDayOfWeek() > dayOfWeek) {
			flightsByDay.push_back(flight);
		}
	}
	return flightsByDay;
}

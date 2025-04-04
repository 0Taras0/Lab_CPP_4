#include "Flight.h"

using namespace std;

Flight::Flight(const string destination, const int dayOfWeek) : m_destination(destination), m_dayOfWeek(dayOfWeek)
{
}

string Flight::getDestination()
{
	return this->m_destination;
}

int Flight::getDayOfWeek()
{
	return this->m_dayOfWeek;
}

void Flight::setDestination(const string destination)
{
	if (!destination.empty())
		this->m_destination = destination;
}

void Flight::setDayOfWeek(const int dayOfWeek)
{
	if (dayOfWeek >= 1 && dayOfWeek <= 7)
		this->m_dayOfWeek = dayOfWeek;
}

ostream& operator<<(ostream& os, const Flight& flight)
{
	os << "Flight to " << flight.m_destination << " on day " << flight.m_dayOfWeek << endl;
	return os;
}

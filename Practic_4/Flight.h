#pragma once
#include <iostream>
#include <string>

class Flight
{
private:
	std::string m_destination;
	int m_dayOfWeek;
	
public:
	Flight(const std::string destination, const int dayOfWeek);
	std::string getDestination();
	int getDayOfWeek();
	void setDestination(const std::string destination);
	void setDayOfWeek(const int dayOfWeek);
	friend std::ostream& operator<<(std::ostream& os, const Flight& flight);
};


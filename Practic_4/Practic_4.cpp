#include <iostream>
#include <ctime>
#include "Airline.h"
#include "FriendAirline.h"

using namespace std;

int main()
{
    Flight flight1("Paris", 1);
    Flight flight2("Berlin", 2);
    Flight flight3("New York", 3);

    Airline airline;
    airline.addFlight(flight1);
    airline.addFlight(flight2);
    airline.addFlight(flight3);

    vector<Flight> allFlights = airline.getAllFlights();
    cout << "All Flights:" << endl;
    for (const auto& flight : allFlights) {
        cout << flight;
    }

    vector<Flight> mondayFlights = getFlightsByDayOfWeek(airline, 1);
    cout << "\nFlights on Monday:" << endl;
    for (const auto& flight : mondayFlights) {
        cout << flight;
    }

	vector<Flight> flightsAfterNow = FriendAirline::getFlightsByDayOfWeek(airline, 1);
    cout << "\nFlights after current time:" << endl;
    for (const auto& flight : flightsAfterNow) {
        cout << flight;
    }

    return 0;
}

#include <iostream>
#include <fstream>


EventBuilder::EventBuilder() {

	std::string file;

	std::cout << "enter a file name";
	std::cin >> file;
	std::ifstream inputFile(file);

	while (!inputFile.is_open()) {
		std::cout << "enter a valid file, try again";
		std::cin >> file;
		std::ifstream inputFile(file);
	}

}

Event EventBuilder::createArrivalEvent(int number) {

	EventType::arrival;

}

Event EventBuilder::createDepartureEvent(const Time& currentEventTime, const Time& transactionLength, int number) {

	EventType::departure;
	number = number;
	time.setTime() = currentEventTime + transactionLength;

}
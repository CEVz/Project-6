#include <iostream>
#include <fstream>


EventBuilder::EventBuilder() {

	std::string file;
	int fileContent;

	std::cout << "enter a file name";
	std::cin >> file;
	std::ifstream inputFile(file);

	while (!inputFile.is_open()) {
		std::cout << "enter a valid file, try again";
		std::cin >> file;
		std::ifstream inputFile(file);
	}

	if (inputFile.is_open()){
		inputFile >> num;
		inputFile.close();
	}

}

Event EventBuilder::createArrivalEvent(int number) {

	Event arrivalEvent;
	arrivalEvent.setEventType(EventType::arrival);
	arrivalEvent.setNumber(number);
	arrivalEvent.setTime(num);
	arrivalEvent.setDuration(num);

}

Event EventBuilder::createDepartureEvent(const Time& currentEventTime, const Time& transactionLength, int number) {

	Event departureEvent;
	departureEvent.setEventType(EventType::departure);
	//departureEvent.setTime() = currentEventTime + transactionLength;
	departureEvent.setNumber(number);

}
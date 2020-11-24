#include <iostream>
#include <fstream>


EventBuilder::EventBuilder() {

	std::string file;

	std::cout << "enter a file name";
	std::cin >> file;
	inputFile.open(file);

	while (!inputFile.is_open()) {
		std::cout << "enter a valid file, try again";
		std::cin >> file;
		inputFile.open(file);
	}

	if (inputFile.is_open()){
		inputFile >> num;
		std::cout << num;
		inputFile.close();
	}

}

Event EventBuilder::createArrivalEvent(int number) {

	Event arrivalEvent;
	arrivalEvent.setEventType(EventType::arrival);
	arrivalEvent.setNumber(number);
	arrivalEvent.setTime(num);
	arrivalEvent.setDuration(num);

	return arrivalEvent;

}

Event EventBuilder::createDepartureEvent(const Time& currentEventTime, const Time& transactionLength, int number) {

	Event departureEvent;
	departureEvent.setEventType(EventType::departure);
	//departureEvent.getTime() = currentEventTime + transactionLength;
	departureEvent.setNumber(number);

	return departureEvent;

}
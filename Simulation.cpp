#include <iostream>

Simulation::Simulation() {}

void Simulation::simulate() {


	Event arrivalEvent;
	arrivalEvent.setEventType(EventType::arrival);
	events.enqueue(arrivalEvent);

	while (!events.isEmpty()) {
		currentEvent = events.peekFront();
		if (currentEvent.getEventType() == EventType::arrival) {
			processArrival();
		}
		else {
			processDeparture();
		}
		stats.addEvent(currentEvent);
	}
	stats.reportStats();
}

void Simulation::processArrival() {

	std::cout << "helo";

}

void Simulation::processDeparture() {

	std::cout << "helo";

}
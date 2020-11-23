void simulate() {


	LinkedQueue<Event> arrival;


	while (//the event list is not empty) {
		//Retrieve the next event from the event list
		if (//the event is an arrival event) {
			processArrival()
		}
		else {
			processDeparture()
		}
		stats.addEvent(currentEvent)
	}
	stats.reportStats()
}

void processArrival() {


}

void processDeparture() {



}
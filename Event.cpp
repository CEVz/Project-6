#ifndef EVENT_
#define EVENT_

Event::Event() {}

bool Event::operator<(const Event& rhs) const{

	return time < rhs.time;

}

bool Event::operator>(const Event& rhs) const {

	return time > rhs.time;

}

bool Event::operator<=(const Event& rhs) const {

	return time <= rhs.time;

}

bool Event::operator>=(const Event& rhs) const {

	return time >= rhs.time;

}

bool Event::operator==(const Event& rhs) const {

	return time == rhs.time;

}

bool Event::operator!=(const Event& rhs) const {

	return time != rhs.time;
}

void Event::setTime(const Time& theTime){

	time = theTime;

}

void Event::setDuration(const Time& theDuration) {

	duration = theDuration;

}

void Event::setEventType(const EventType& theType) {

	type = theType;

}

void Event::setNumber(const int theNum) {

	number = theNum;

}

Time Event::getTime() const {

	return time;

}

EventType Event::getEventType() const {

	return type;

}

Time Event::getDuration() const {
	
	return duration;

}

int Event::getNumber() const {

	return number;

}

#endif
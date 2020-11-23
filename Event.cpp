#pragma once

bool Event::operator<(const Event& rhs) const {

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

int Event::getNumber() const {

	return number;

}

void Event::setTime(const Time& theTime){

	time = theTime;

}

void Event::setDuration(const Time& theDuration) {

	duration = theDuration;

}

void Event::setEvent(const EventType& theType) {

	type = theType;

}

void Event::setNum(const int theNum) {

	number = theNum;

}

ItemType Event::getTime() const {

	return time;

}

ItemType Event::getEvent() const {

	return type;

}

ItemType Event::getDuration() const {

	return duration;

}

int Event::getNum() const {

	return number;

}


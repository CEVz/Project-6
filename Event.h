#pragma once

#include "Time.h"
#include "EventType.h"

class Event {
private:
	
	EventType type;
	Time time;
	Time duration;
	int number;


public:

	bool Event::operator<(const Event& rhs) const;
	bool Event::operator>(const Event& rhs) const;
	bool Event::operator<=(const Event& rhs) const;
	bool Event::operator>=(const Event& rhs) const;
	bool Event::operator==(const Event& rhs) const;
	bool Event::operator!=(const Event& rhs) const;

};

#include "Event.cpp"
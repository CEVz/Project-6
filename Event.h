#pragma once

#include "EventType.h"

using Time = double;

class Event {
private:
	
	EventType type;
	Time time;
	Time duration;
	int number;

public:

	Event();

	bool operator<(const Event& rhs) const;
	bool operator>(const Event& rhs) const;
	bool operator<=(const Event& rhs) const;
	bool operator>=(const Event& rhs) const;
	bool operator==(const Event& rhs) const;
	bool operator!=(const Event& rhs) const;
	
	void setTime(const Time& theTime);
	void setDuration(const Time& theDuration);
	void setEventType(const EventType& theType);
	void setNumber(const int theNum);
	Time getTime() const;
	EventType getEventType() const;
	Time getDuration() const;
	int getNumber() const;

};

#include "Event.cpp"
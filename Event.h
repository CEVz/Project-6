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
	
	void setTime(const Time& theTime);
	void setDuration(const Time& theDuration);
	void setEvent(const EventType& theType);
	void setNum(const int theNum);
	ItemType getTime() const;
	ItemType getEvent() const;
	ItemType getDuration() const;
	int getNum() const;

};

#include "Event.cpp"
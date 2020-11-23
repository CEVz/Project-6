#pragma once

#ifndef TIME_
#define TIME_

using ItemType = double;

class Time {
private:
	ItemType Time;

public:
	Time();
	Time(const ItemType& theTime);
	void setTime(const ItemType& theTime);
	ItemType getTime() const;
};

#endif
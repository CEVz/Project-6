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




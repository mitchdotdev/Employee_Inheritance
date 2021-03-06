#include "dateClass.h"

/* Default Constructor */
Date::Date() {
	month = 0;
	day = 0;
	year = 0;
}

/* Constructor w/ parameters */
Date::Date(int mnth, int dy, int yr) {
	if(mnth > 0 && dy > 0 && yr > 0)
	{
		month = mnth;
		day = dy;
		year = yr;
	} else {
		Date();
	}
}

/* Mutator Function */
void Date::setMonth(int mnth) {
	month = mnth;
}

void Date::setDay(int dy) {
	day = dy;
}

void Date::setYear(int yr) {
	year = yr;
}
/* Accessor Functions */
int Date::getMonth() const {
	return month;
}

int Date::getDay() const {
	return day;
}

int Date::getYear() const {
	return year;
}

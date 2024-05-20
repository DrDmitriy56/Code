#include <iostream>
using namespace std;


struct my_time {
	int day, hour, minute, second;
	my_time() {};
	my_time(int day, int hour, int minute, int second) {
		this->day = day;
		this->hour = hour;
		this->minute = minute;
		this->second = second;
	}
};

bool operator < (my_time a, my_time b) {
	if (a.day * 3600 * 24 + a.hour * 3600 + a.minute * 60 + a.second <
		b.day * 3600 * 24 + b.hour * 3600 + b.minute * 60 + b.second)
		return 1;
	else
		return 0;
}
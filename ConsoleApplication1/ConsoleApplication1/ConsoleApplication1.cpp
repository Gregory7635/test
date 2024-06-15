#include <iostream>
using namespace std;

class Time {
private:
	int hour;
	int minute;
	int second;
public:
	void get() {
		cin >> hour;
		cin >> minute;
		cin >> second;
		cout << "Введенные данные: часы- " << hour << " " << "минуты- " << minute << " " << "секунды- " << second << " " << endl;
	}
	void function1() {
		double res = (hour * 60) + minute + (second / 60);
		if (hour < 24) {
			int minutesUntilMidnight = (24 * 60) - res;
			cout << "До полуночи осталось " << minutesUntilMidnight << " минут" << std::endl;
		}
		else {
			cout << "Уже полночь" << std::endl;
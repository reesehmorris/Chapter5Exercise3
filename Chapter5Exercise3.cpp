#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int speed, hours;
	cout << "Enter the vehicle speed in mph: ";
	cin >> speed;
	cout << "Enter the time traveled in hours: ";
	cin >> hours;

	cout << endl;
	cout << "Hour" << setw(20) << "Miles Traveled" << endl;
	cout << "------------------------" << endl;

	for (int hour = 1; hour <= hours; hour++) {
		int distance = speed * hour;
		cout << setw(2) << hour << setw(18) << distance << endl;
	}
	return 0;
}

#include <iostream>

using namespace std;

int main(){
    int secondsEntered, sec, min, hour;
    double minAsDouble;

    cout << "Enter the duration in seconds: ";
    cin >> secondsEntered;

    sec = secondsEntered;

    hour = sec / (60*60);
    sec = sec % (60*60);

    min = sec / 60;
    sec = sec % 60;

    minAsDouble = (double) secondsEntered / 60;

    cout << "Hours: " << hour << endl;
    cout << "Minutes: " << min << endl;
    cout << "Seconds: " << sec << endl;
    cout << "Total minutes (double): " << minAsDouble;

    return 0;
}
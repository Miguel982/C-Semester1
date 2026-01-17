#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int secondsEntered, sec, min, hour;
    double minAsdouble;

    cout << "Enter the duration in seconds: ";
    cin >> secondsEntered;

    sec = secondsEntered;

    hour = sec / (60*60);
    sec = sec % (60*60);

    min = sec / 60;
    sec = sec % 60;

    minAsdouble = (double) secondsEntered / 60;

    cout << "Hours: " << hour << endl;
    cout << "Minutes: " << min << endl;
    cout << "Seconds: " << sec << endl;
    cout << "Total minutes (double): " << minAsdouble;

    return 0;
}
#include <iostream>
using namespace std;

class TimeConverter {
private:
    int hours;
    int minutes;
    int seconds;

public:
    TimeConverter() : hours(0), minutes(0), seconds(0) {}

    
    void readTimeInSeconds() {
        int totalSeconds;
        cout << "Enter time in seconds: ";
        cin >> totalSeconds;

        hours = totalSeconds / 3600;
        totalSeconds %= 3600;
        minutes = totalSeconds / 60;
        seconds = totalSeconds % 60;
    }

    
    void displayTime() const {
        cout << "Time: " << hours << " hours " << minutes << " minutes " << seconds << " seconds" << endl;
    }
};

int main() {
    TimeConverter tc;

    
    tc.readTimeInSeconds();

   
    tc.displayTime();

    
}

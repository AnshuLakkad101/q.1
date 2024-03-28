#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inch;

public:
    Distance() : feet(0), inch(0) {}

   
    void readDistance() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inch: ";
        cin >> inch;
    }

    
    void displayDistance() const {
        cout << "Distance: " << feet << " feet " << inch << " inch" << endl;
    }

    
    Distance addDistance(const Distance& d2) const {
        Distance result;
        result.feet = feet + d2.feet;
        result.inch = inch + d2.inch;
        if (result.inch >= 12) {
            result.feet += result.inch / 12;
            result.inch %= 12;
        }
        return result;
    }
};

int main() {
    Distance d1, d2, sum;

    cout << "Enter first distance:" << endl;
    d1.readDistance();

    cout << "\nEnter second distance:" << endl;
    d2.readDistance();

    sum = d1.addDistance(d2);

    cout << "\nSum of distances:" << endl;
    sum.displayDistance();

    return 0;
}

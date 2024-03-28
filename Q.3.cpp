#include <iostream>
#include <string>
using namespace std;

class Hotel {
private:
    int id;
    string name;
    string type;
    int staffSize;
    int roomSize;
    int establishYear;
    string address;
    string ratingType;
    string website;

public:
    
    void setId(int hotelId) {
        id = hotelId;
    }

    void setName(const string& hotelName) {
        name = hotelName;
    }

    void setType(const string& hotelType) {
        type = hotelType;
    }

    void setStaffSize(int size) {
        staffSize = size;
    }

    void setRoomSize(int size) {
        roomSize = size;
    }

    void setEstablishYear(int year) {
        establishYear = year;
    }

    void setAddress(const string& hotelAddress) {
        address = hotelAddress;
    }

    void setRatingType(const string& type) {
        ratingType = type;
    }

    void setWebsite(const string& hotelWebsite) {
        website = hotelWebsite;
    }

    
    int getId() const {
        return id;
    }

    string getName() const {
        return name;
    }

    string getType() const {
        return type;
    }

    int getStaffSize() const {
        return staffSize;
    }

    int getRoomSize() const {
        return roomSize;
    }

    int getEstablishYear() const {
        return establishYear;
    }

    string getAddress() const {
        return address;
    }

    string getRatingType() const {
        return ratingType;
    }

    string getWebsite() const {
        return website;
    }
};

int main() {
    Hotel hotel1;

    
    cout << "Enter Hotel ID: ";
    int id;
    cin >> id;
    hotel1.setId(id);

    cin.ignore(); 

    cout << "Enter Hotel Name: ";
    string name;
    getline(cin, name);
    hotel1.setName(name);

    cout << "Enter Hotel Type: ";
    string type;
    getline(cin, type);
    hotel1.setType(type);

    cout << "Enter Staff Size: ";
    int staffSize;
    cin >> staffSize;
    hotel1.setStaffSize(staffSize);

    cout << "Enter Room Size: ";
    int roomSize;
    cin >> roomSize;
    hotel1.setRoomSize(roomSize);

    cout << "Enter Establishment Year: ";
    int establishYear;
    cin >> establishYear;
    hotel1.setEstablishYear(establishYear);

    cin.ignore(); 

    cout << "Enter Hotel Address: ";
    string address;
    getline(cin, address);
    hotel1.setAddress(address);

    cout << "Enter Rating Type: ";
    string ratingType;
    getline(cin, ratingType);
    hotel1.setRatingType(ratingType);

    cout << "Enter Website: ";
    string website;
    getline(cin, website);
    hotel1.setWebsite(website);

    cout << "\nHotel Details:" << endl;
    cout << "ID: " << hotel1.getId() << endl;
    cout << "Name: " << hotel1.getName() << endl;
    cout << "Type: " << hotel1.getType() << endl;
    cout << "Staff Size: " << hotel1.getStaffSize() << endl;
    cout << "Room Size: " << hotel1.getRoomSize() << endl;
    cout << "Establish Year: " << hotel1.getEstablishYear() << endl;
    cout << "Address: " << hotel1.getAddress() << endl;
    cout << "Rating Type: " << hotel1.getRatingType() << endl;
    cout << "Website: " << hotel1.getWebsite() << endl;

   
}

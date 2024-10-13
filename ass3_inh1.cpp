#include <iostream>
#include <string>
using namespace std;
class Building {
protected:
    int floors;
    int rooms;
    double sqFt;

public:
    Building(int f, int r, double sq) : floors(f), rooms(r), sqFt(sq) {}

    void displayInfo() const {
        cout<< "Floors: " << floors << "\n"
                  << "Rooms: " << rooms << "\n"
                  << "Total Square Footage: " << sqFt << " sq ft\n";
    }
};


class House : public Building {
private:
    int bedrooms;
    int bathrooms;

public:
    House(int f, int r, double sqFt, int bed, int bath)
        : Building(f, r, sqFt), bedrooms(bed), bathrooms(bath) {}

    void displayInfo() const {
        Building::displayInfo();
        cout<< "Bedrooms: " << bedrooms << "\n"
                  << "Bathrooms: " << bathrooms << "\n";
    }
};


class Office : public Building {
private:
    int fireExtinguishers;
    int telephones;

public:
    Office(int f, int r, double sqFt, int fireExt, int phone)
        : Building(f, r, sqFt), fireExtinguishers(fireExt), telephones(phone) {}

    void displayInfo() const {
        Building::displayInfo();
        cout << "Fire Extinguishers: " << fireExtinguishers << "\n"
                  << "Telephones: " << telephones << "\n";
    }
};

int main() {
    House myHouse(2, 5, 2500.0, 3, 2);
    cout << "House Information:\n";
    myHouse.displayInfo();
    cout << std::endl;

    Office myOffice(5, 20, 10000.0, 10, 15);
    cout << "Office Information:\n";
    myOffice.displayInfo();

    return 0;
}
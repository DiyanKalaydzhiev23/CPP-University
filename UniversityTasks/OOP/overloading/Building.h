#ifndef OVERLOADING_BUILDING_H
#define OVERLOADING_BUILDING_H

#include <iostream>
#include <string>

using std::string;
using std::istream;
using std::ostream;

class Building {
    friend Building operator +(int buildEntries, Building &building) {
        building.entriesBuild += buildEntries;

        return building;
    }

    friend Building operator +=(int buildEntries, Building &building) {
        building.entriesBuild += buildEntries;

        return building;
    }

    friend istream &operator >>(istream  &input, Building &b) {
        string commaAndSpace = ", ";

        // example input -> ul ivan marinov, 10, 10
        input >> b.address >> commaAndSpace >> b.floorsPlaned >> commaAndSpace >> b.entriesPlaned;

        return input;
    }

    friend ostream &operator <<(ostream  &output, Building &b) {
        output << "Address: " << b.address << " "
        << "Planed floors: " << b.floorsPlaned << " "
        << "Build floors: " << b.floorsBuild << " "
        << "Planed entries: " << b.entriesPlaned << " "
        << "Build entries: " << b.entriesBuild;

        return output;
    }

    public:
        Building();
        Building(string address, int floorsPlaned, int entriesPlaned);
        Building(const Building &other);
        ~Building() = default;

        Building operator +(int buildFloors);
        Building operator +=(int buildFloors);
        Building& operator =(const Building &other);

        inline string getAddress() const { return address; }
        inline int getFloorsPlaned() const { return floorsPlaned; }
        inline int getFloorsBuild() const { return floorsBuild; }
        inline int getEntriesPlaned() const { return entriesPlaned; }
        inline int getEntriesBuild() const { return entriesBuild; }

        inline void setAddress(const string &newAddress) {this -> address = newAddress;}
        inline void setFloorsPlaned(int floors) {this -> floorsPlaned = floors;}
        inline void setFloorsBuild(int floors) {this -> floorsBuild = floors;}
        inline void setEntriesPlaned(int entries) {this -> entriesPlaned = entries;}
        inline void setEntriesBuild(int entries) {this -> entriesBuild = entries;}

    private:
        string address;

        int floorsPlaned;
        int floorsBuild;

        int entriesPlaned;
        int entriesBuild;
};


#endif //OVERLOADING_BUILDING_H

#include "Building.h"

#include <utility>
#include "string"

using std::string;

Building::Building() {
    this -> address = "";
    this -> floorsPlaned = 0;
    this -> floorsBuild = 0;
    this -> entriesPlaned = 0;
    this -> entriesBuild = 0;
}

Building::Building(string address, int floorsPlaned, int entriesPlaned) {
    this -> address = std::move(address);
    this -> floorsPlaned = floorsPlaned;
    this -> floorsBuild = entriesPlaned;
    this -> entriesPlaned = 0;
    this -> entriesBuild = 0;
}

Building::Building(const Building &other) {
    this -> address = other.address;
    this -> floorsPlaned = other.floorsPlaned;
    this -> floorsBuild = other.floorsBuild;
    this -> entriesPlaned = other.floorsPlaned;
    this -> entriesBuild = other.entriesBuild;
}

Building Building::operator+(int buildFloors) {
    this -> floorsBuild += buildFloors;

    return *this;
}

Building Building::operator+=(int buildFloors) {
    this -> floorsBuild += buildFloors;

    return *this;
}

Building& Building::operator=(const Building &other) {
    this -> address = other.address;
    this -> floorsPlaned = other.floorsPlaned;
    this -> floorsBuild = other.entriesPlaned;
    this -> entriesPlaned = other.entriesPlaned;
    this -> entriesBuild = other.entriesBuild;

    return *this;
}

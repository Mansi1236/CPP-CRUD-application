#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;

class Planet {
public:
string Name;
int NumMoons;
bool Rings;
int DistanceFromSun;

// Planet Parametrized Constructor
public:
Planet(string Name, int NumMoons, bool Rings, int DistanceFromSun )
{
this->Name = Name;
this->NumMoons = NumMoons;
this->Rings = Rings;
this->DistanceFromSun = DistanceFromSun;
}
// Declaring methods for the attributes

// Method For Name
string getName() {
    return Name;
}

void setName(string Name) {
this->Name = Name;
}


// Method For NumMoons
int getNumMoons() {
    return NumMoons;
}

void setNumMoons(int NumMoons) {
    this->NumMoons=NumMoons;
}


// Method For NumRings
bool getRings() {
    return Rings;
}

void setRings(bool Rings) {
    this->Rings = Rings;
}

// Method For DistanceFromSun
int getDistanceFromSun() {
    return DistanceFromSun;
}

void setDistanceFromSun(int DistanceFromSun) {
    this->DistanceFromSun = DistanceFromSun;
}

} ;

int main() {

Planet PlanetObject("Earth", 1, false, 148810000);
cout<< " Planet Name : " << PlanetObject.getName()<<endl;
cout<< " Number of Moons : " << PlanetObject.getNumMoons()<<endl;
cout<< " Rings Present ?  : " << PlanetObject.getRings()<<endl;
cout<< " Distance From Sun(in Kilometers) : " << PlanetObject.getDistanceFromSun()<<endl;
return 0;
}
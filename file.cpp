#include<stdio.h>
#include<iostream>
#include<conio.h>
#include <vector>
#include <string>

using namespace std;

class Planet {
public:
string Name;
int NumMoons;
bool Rings;
int DistanceFromSun;
public: 
Planet() {}

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
// Creating PlanetDatabase class to store planet information
class PlanetDatabase : public Planet {
public:
vector<Planet>planets;

public: 
 PlanetDatabase() {}


// CRUD -> Create, Read, Update, Delete Operations

public:
// Create
void create(Planet planet) {
    planets.push_back(planet);
}

// Read
Planet read(string Name){
  for (Planet planet : planets) {
    if(planet.getName() == Name) {
        return planet;
    }
  }
  return Planet( " " , 0, true, 0);
}


// Update
bool update(string Name, int NumMoons, bool Rings, int DistanceFromSun) {
for (Planet& planet  : planets) {
if (planet.getName() == Name) {
 planet.setNumMoons(NumMoons);
 planet.setRings(Rings);
 planet.setDistanceFromSun(DistanceFromSun);
 return true;

}
return false;

}
}

// Delete

bool del(string Name) {

    for(auto it = planets.begin(); it != planets.end() ; ++it){

        if (it -> getName() == Name) {
            planets.erase(it);
            return true;
        }
    }
    return false;
}


};



int main() {

PlanetDatabase DB;
// CRUD calls

// Create Planet
Planet P1(" Earth", 1, false, 148000000);
DB.create(P1);

Planet P2(" Mars", 2, true, 30000000);
DB.create(P2);

// Read
DB.read("Earth");
cout << " Planet Name : " << P1.getName() << endl;
cout << " Planet Moons  : " << P1.getNumMoons() << endl;
cout << " Rings Present ?  : " << P1.getRings() << endl;
cout << " Distance From Sun : " << P1.getDistanceFromSun() << endl;

DB.read("Mars");
cout << " Planet Name : " << P2.getName() << endl;
cout << " Planet Moons  : " << P2.getNumMoons() << endl;
cout << " Rings Present ?  : " << P2.getRings() << endl;
cout << " Distance From Sun : " << P2.getDistanceFromSun() << endl;



// update

DB.update("Earth", 1, false, 148810000);

// delete

//DB.del("Earth");

return 0;

}
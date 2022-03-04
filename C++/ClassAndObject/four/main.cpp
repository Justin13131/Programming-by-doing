#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <math.h>
#include <stdio.h>
#include <cmath>


using namespace std; 

class Moon {
    private:
        string name; //Name of Moon
        double distance;  //distance from the planet it is the moon of
        double mass; // mass of moon
        double diameter;  //diameter of moon

    public: 
    //Default Constructor
    Moon() {};
    Moon(string n, double dis, double m, double dia) {
        name = n;
        distance = dis;
        mass = m;
        dia = diameter;
    }

    string getName(){
        return name;
    }

};

class Planet {
    private: 
        string name; //name of planet
        double distance; //distance from sun
        double mass; //mass of planet
        double diameter; // diameter of planet
        int numMoons; //number of moons
        Moon TopMoons[3]; //top 3 moons of the planet

    public: 
    //Default Constructor
    Planet(){};
    Planet(string pn, double pdis, double pm, double pdia, int pnumm, Moon pTM1, Moon pTM2, Moon pTM3){
        name = pn;
        distance = pdis;
        mass = pm;
        diameter = pdia; 
        numMoons = pnumm;
        TopMoons[0] = pTM1;
        TopMoons[1] = pTM2;
        TopMoons[2] = pTM3;
    }
    
    double getDistance() {

        return distance;
    }
    Moon getMoon(int i) { 
        return TopMoons[i];
    }
    string getName(){
        return name;
    }

};

double distanceP(Planet a, Planet b) {
    return abs(a.getDistance() - b.getDistance());
}

string findMoon(Moon x, Planet arr[8]) {
    for(int i = 0; i < 8; i++) {
        for(int j=0; j<3;j++){
            if(x.getName() == (arr[i].getMoon(j)).getName())
                return arr[i].getName();
        }
    }
}

int main() {

     Planet solarSystem[8] = {
        Planet("Mercury",0.33,4879,57.9,0,Moon("NO MOON", 0, 0, 0),Moon("NO MOON", 0, 0, 0),Moon("NO MOON", 0, 0, 0)),
        Planet("Venus",4.87,12104,108.2,0,Moon("NO MOON", 0, 0, 0),Moon("NO MOON", 0, 0, 0),Moon("NO MOON", 0, 0, 0)),
        Planet("Earth",5.97,12756,149.6,1,Moon("Moon",378000,0.07346,3476.2),Moon("NO MOON", 0, 0, 0),Moon("NO MOON", 0, 0, 0)),
        Planet("Mars",0.642,6792,227.9,2,Moon("Phobos",9270,22.5,10.6),Moon("Deimos", 23460,12.4,2.4),Moon("NO MOON", 0, 0, 0)),
        Planet("Jupiter",1898,142984,778.6,79,Moon("Io",421600,3629,893.2),Moon("Europa",670900,3126,480),Moon("Callisto",1883000,4800,1075.9)),
        Planet("Saturn",568,120536,1433.5,82,Moon("Titan",1221850,5150,1345.5),Moon("Mimas",185520,398,0.379),Moon("Rhea",527040,1528,23.1)),
        Planet("Uranus",86.8,51118,2872.5,27,Moon("Umbriel",265970,1190,12.2),Moon("Ariel",191240,1160,12.9),Moon("Miranda",129780,472,0.66)),
        Planet("Neptune",102,49528,4495.1,14,Moon("Neso",47279670,60,0.002),Moon("Sao",22337190,38,0.001),Moon("Naiad",48200,50,0.002))
    };

    cout << "Distances between Mercury and Venus: " << distanceP(solarSystem[0], solarSystem[1]) << endl;
    cout << "Distances between Venus and Earth: " << distanceP(solarSystem[1], solarSystem[2]) << endl;
    cout << "Distances between Earth and Mars: " << distanceP(solarSystem[2], solarSystem[3]) << endl;
    cout << "Distances between Mars and Jupiter: " << distanceP(solarSystem[3], solarSystem[4]) << endl;
    cout << "Distances between Jupiter and Saturn: " << distanceP(solarSystem[4], solarSystem[5]) << endl;
    cout << "Distances between Saturn and Uranus: " << distanceP(solarSystem[5], solarSystem[6]) << endl;
    cout << "Distances between Uranus and Neptune: " << distanceP(solarSystem[6], solarSystem[7]) << endl;
    string res2;
    int i4;
    int which;
    int which2;
    while( i4 < 1) {
        cout << "Anymore distances to find? (y or n) ";
        cin >> res2;
        if (res2 == ("y")) {
            cout << endl << "Mercury 0, Venus 1, Earth 2, Mars 3, Jupiter 4, Saturn 5, Uranus 6, Neptune 7" << endl << endl;
            cout << "Planet 1: ";
            cin >> which;
            cout << "Planet 2: ";
            cin >> which2;
            cout << endl;
            cout << "Distances between this two planets: " << distanceP(solarSystem[which], solarSystem[which2]) << endl;
        }else{
            cout << "Okay, bye." << endl;
            i4++;
        }
    }
    cout << "The planet of Moon Europa is " <<findMoon(Moon("Europa",670900,3126,480), solarSystem) << endl;
    cout << "The planet of Moon Io is " <<findMoon(Moon("Io",421600,3629,893.2), solarSystem) << endl;

    return 0;
}
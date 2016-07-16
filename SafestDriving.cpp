//
//  SafestDriving.cpp
//  TextBookQuestions
//
//  Created by Sharmyn Kayani on 16/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  Safest Driving Area
//Write a program that  determines  which of five geographic  regions within  a major  city (north, south,  east, west, and  central)  had  the fewest reported automobile accidents last year. It should have the following two functions,  which are called by main.
//
//*     int getNumAccidents() is passed the name of a region. It asks the user for the number  of automobile accidents reported in that  region during  the last year, vali- dates the input,  then returns  it. It should be called once for each city region.
//*     void findLowest() is passed the five accident  totals.  It determines  which is the smallest and prints the name of the region, along with its accident figure.
//Input  Validation: Do not accept an accident number  that is less than 0.
//  Doesn't work!!!

#include <iostream>

using namespace std;

//global variables
//automatically initialised as 0
int accident[5];

int getNumAccidents(){
    for (int i = 0; i < 5; i++) {
        if (accident[i] >= 0) {
            return accident[i];
        }
    }
    
    return 0;
}

void findLowest()  {
    int minimum = 0;
    for (int i = 0; i < 5; i++) {
        if (accident[i] < minimum) {
            minimum = accident[i];
        }
    }
    
    if (accident[0] == minimum) {
        cout << "The north region has the least number of accidents." << endl;
        cout << "The number of accidents are: " << minimum << endl;
    } else if (accident[1] == minimum) {
        cout << "The east region has the least number of accidents." << endl;
        cout << "The number of accidents are: " << minimum << endl;
    } else if (accident[2] == minimum) {
        cout << "The south region has the least number of accidents." << endl;
        cout << "The number of accidents are: " << minimum << endl;
    } else if (accident[3] == minimum) {
        cout << "The west region has the least number of accidents." << endl;
        cout << "The number of accidents are: " << minimum << endl;
    } else if (accident[4] == minimum) {
        cout << "The central region has the least number of accidents." << endl;
        cout << "The number of accidents are: " << minimum << endl;
    }
}

int main() {
    cout << "Please enter accidents for each of the five (north, south, east, west, central) regions: " << endl;
    
    //Takes in the values and then validates them
    for (int i = 0; i < 5; i++)  {
        cin >> accident[i];
        getNumAccidents();
    }
    
    findLowest(accident);
    
}




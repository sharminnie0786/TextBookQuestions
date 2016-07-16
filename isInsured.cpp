//
//  isInsured.cpp
//  TextBookQuestions
//
//  Created by Sharmyn Kayani on 16/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
// Logic question 23.

#include <iostream>
using namespace std;

int age;
string name, gender;
char maritalStatus;

bool insured(string, int, string, string);

bool insured(char maritalStatus, int age, string name, string gender) {
    if (maritalStatus == 'y') {
        cout << "You are ensured" << endl;
        return true;
    } else if (maritalStatus == 'n') {
        if (gender == "male" && age >= 30) {
            cout << "You are ensured" << endl;
            return true;
        } else if (gender == "female" && age >= 25) {
            cout  << "You are ensured" << endl;
            return true;
        }
    }
    
    cout << "You are not ensured" << endl;
    return false;
}

int main() {
    cout << "Please enter your age: ";
    cin >> age;
    cout << "Please enter your name: ";
    cin >> name;
    cout << "Please enter your marital status (y or n): ";
    cin >> maritalStatus;
    cout << "Please enter your gender (male or female): ";
    cin >> gender;
    
    insured(maritalStatus, age, name, gender);
}

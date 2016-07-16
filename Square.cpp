//
//  Square.cpp
//  TextBookQuestions
//
//  Created by Sharmyn Kayani on 16/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  Logic Question 33.
//  Print the following:
//  ****
//  ****
//  ****
//  ****

#include <iostream>
using namespace std;

int main() {
    //the first for loop iterates through different lines
    for (int i = 0; i < 4; i++) {
        //the second for loop iterates and places the '*' 
        for (int j = 0; j < 4; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

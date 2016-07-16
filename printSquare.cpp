//
//  printSquare.cpp
//  TextBookQuestions
//
//  Created by Sharmyn Kayani on 16/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  Take input from user and Print Square of number;
//  repeat the same until user input 0. When user input 0
//  stop program by message "Thanks for using program".
// Lab 09

#include <iostream>
using namespace std;

int main() {
    
    //Print square
    int square = 0;
    bool value = true;
    
    while (value == true) {
    cout << "Enter a number please: " << endl;
    cin >> square;
    
        if (square > 0) {
            for (int i =0; i < square; i++) {
            for (int j= 0; j < square; j++) {
                cout << "*";
            }
            cout << endl;
            }
        } else if (square == 0) {
            value = false;
        }
    }
    
        cout << "Thanks for using program" << endl;
        return 0;
}

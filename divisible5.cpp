//
//  divisible5.cpp
//  TextBookQuestions
//
//  Created by Sharmyn Kayani on 16/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  Create a program to print 10 random values divisible by 5 in any range. You must run loop until 5 values are printed and you have to print exact 5 values divisible by 5

#include <iostream>
using namespace std;

int main() {
    srand(time(0));

    int count = 0;
    
    while (count <= 5) {
        unsigned int number;
        number = rand() % 100 + 1;
        if (number % 5 == 0) {
            cout << "The number is divisible and it is: " << number << endl;
            count ++;
        }
    }
    
}

//
//  nto1.cpp
//  TextBookQuestions
//
//  Created by Sharmyn Kayani on 16/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  Logic Question 23 and 24.

#include <iostream>
using namespace std;

int main() {
    
    int n, o;
    
    cout << "Enter a number you'd like to start counting from: " << endl;
    cin >> n;
    cout << "Enter a number you'd like to count till: " << endl;
    cin >> o;
    
    cout << "First the numbers you wanted to start counting from" << endl;
    
    //Start counting from
    //Initial error: Was using arrays and printing out memory addresses instead of numbers
    for(int i = n; i > 0; i--) {
        cout << i << " ";
    }
    
    cout << endl;
    cout << "Now the numbers you wanted to count till" << endl;
    
    //Counting till
    for(int i = 1; i < o; i++) {
        cout << i << " ";
    }
    cout << endl;
}

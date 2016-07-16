//
//  StartToEnd.cpp
//  TextBookQuestions
//
//  Created by Sharmyn Kayani on 16/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  Input starting and ending number from user with
//proper message. Print numbers in ascending order
//between start and end in one line and print numbers in
//descending order between start and end in other line.
//Lab 09

#include <iostream>
using namespace std;

int main() {
    
    int start, last;
    cout << "Please input a starting number: "  << endl;
    cin >> start;
    cout << "Please input an ending number: " << endl;
    cin >> last;
    
    cout << "Now for Ascending order" << endl;
    
    //Ascending order
    for (int i = start; i <= last; i++) {
        cout << i << " ";
    }
    cout << endl;
    cout << "Now for Descending order" << endl;
    
    //Descending order
    for (int i = last; i >= start; i--) {
        cout << i << " ";
    }

}

//
//  makeTable.cpp
//  TextBookQuestions
//
//  Created by Sharmyn Kayani on 16/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  Input table no from user and print table using loop in
//  proper format as shown.  1 - 10

#include <iostream>
using namespace std;

int printTable(int number) {
    for (int i = 1; i <= 10; i++) {
        int answer = number * i;
        cout << number << " * " << i << " = " << answer;
        cout << endl;
    }
    
    return 0;
}

int main() {
    int table;
    cout << "Enter table no: ";
    cin >> table;
    
    printTable(table);
}

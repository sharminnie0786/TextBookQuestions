//
//  -50to+50.cpp
//  TextBookQuestions
//
//  Created by Sharmyn Kayani on 16/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  Generate 10 random values in an array in range -50 to 50. Run loop and print only positive values. Again run loop and print only negative values

#include <iostream>
using namespace std;

int main() {
    int count, count1;
    srand(time(0));
    for (int i = 0; i < 10;) {
        int number;
        //This will give me 100 distinct integers between -50 and 50
        //which includes both as well
        number = rand() % 101 + (-50);
        
        //Positive Values
        if (number > 0) {
            cout << "This number is positive " << number << endl;
            i++;
            count++;
        }
        //Negative Values
//        if (number < 0) {
//            cout << "This  number is negative " << number << endl;
//            i++;
//            count1++;
//        }
        
    }
    
    cout << "Count is: " << count << endl;
}

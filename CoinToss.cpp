//
//  CoinToss.cpp
//  TextBookQuestions
//
//  Created by Sharmyn Kayani on 16/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  Write  a function  named  coinToss that  simulates  the tossing  of a coin.  When  you call the function, it should generate a random number  in the range of 1 through 2. If the random number is 1, the function  should  display    heads.    If the random num- ber is 2, the function should  display    tails.   Demonstrate the function  in a program that  asks the user how many times the coin should  be tossed, and then simulates the tossing of the coin that  number  of times.

#include <iostream>
using namespace std;

int tosses, number;

string coinToss(string, string);

string coinToss(int tosses) {
    string side1 = "tails";
    string side2 = "head";
    
    srand(time(0));
    
    for (int i = 0; i <= tosses; i++){
        number = rand() % 2 + 1;
    }
    
    if (number == 1) {
        cout << "The coin landed on heads" << endl;
        return side2;
    } else if (number == 2) {
        cout << "The coin landed on tails" << endl;
        return side1;
    } else {
        return 0;
    }
    
}

int main() {
    int flips;
    cout << "How  many times would you like the coin to be tossed: "  <<  endl;
    cin >> flips;
    
    coinToss(flips);
}

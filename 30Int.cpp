//
//  30Int.cpp
//  TextBookQuestions
//
//  Created by Sharmyn Kayani on 16/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  Challenge 02 question on Files
//  Don't understand how to do the second part without arrays

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    srand(time(0));
    
    ofstream bubble("Bubble.txt");
    for (int i = 0; i < 30; i++) {
        int number;
        number = rand() % 50 + 1;
        bubble << number << " ";
    }
    bubble.close();
    
    ifstream output("Bubble.txt");
    int value;
    output >> value;
    while(!output.eof()) {
        for(int i = 0; i < 30; i++) {
            
        }
    }
    
    
    
}

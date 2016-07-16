//
//  arrayof2.cpp
//  TextBookQuestions
//
//  Created by Sharmyn Kayani on 16/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  Run loop 10 times & generate 2 random numbers [in each iteration] in range 0-100. Store them in separate arrays say x & y. Calculate sum of both arrays. If sum of array 1 is larger print all values of array 1 otherwise print all values of array 2?

#include <iostream>
using namespace std;
int main() {
    srand(time(0));
    int x[100];
    int y[100];
    int sum1, sum2;
    sum1 = 0;
    sum2 = 0;
    
    for (int i = 0; i < 10; i++) {
        x[i] = rand() % 100 + 1;
        sum1 += x[i];
        y[i] = rand() % 100 + 1;
        sum2 += y[i];
        
        if (sum1 > sum2) {
            cout << "X was bigger: " << x[i] << endl;
        } else if (sum2 > sum1) {
            cout << "Y was bigger: " << y[i] << endl;
        }
    }

}

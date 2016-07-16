//
//  20Numbers.cpp
//  TextBookQuestions
//
//  Created by Sharmyn Kayani on 16/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  Generate 20 random values in range 0-100 and store in array x. Check if value is even store it in array y otherwise in z. At the end print 3 arrays x, y & z.

#include <iostream>
using namespace std;

int main() {
    srand(time(0));
    
    int numberx, numbery, numberz;
    numberx = 0;
    numbery = 0;
    numberz = 0;
    
    for (int i = 0; i < 20; i++) {
        int x[i];
        x[i] = rand() % 5;
        numberx += x[i];
        if (x[i] % 2 == 0) {
            int y[i];
            y[i] = x[i];
            numbery += y[i];
        } else {
            int z[i];
            z[i] = x[i];
            numberz += z[i];
        }
    }
    
    cout << "Array x is : " << numberx << endl;
    cout << "Array y is : " << numbery << endl;
    cout << "Array z is : " << numberz << endl;
    
}

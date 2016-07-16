//
//  armstrongNum.cpp
//  TextBookQuestions
//
//  Created by Sharmyn Kayani on 16/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//  Logic Question 30.
//  I don't understand how I should take an int vaue and break each integer into a seperate part

#include <stdio.h>
#include "iostream"
#include "fstream"
#include "string"
#include "ctime"
#include "limits"

using namespace std;

int main(){
    srand(time(0));
    int number=0,remainder,numToCheck,temp;
    cout << "Please enter a number you want to check : " << endl;
    cin >> numToCheck;
    remainder = numToCheck;
    while (remainder > 0) {
        temp = remainder % 10;
        number += temp * temp * temp;
        remainder = remainder / 10;
    }
    if(number == numToCheck){
        cout <<"This number is an Armstrong number" << endl;
    }
    else{
        cout <<"This number is not an Armstrong number" << endl;
    }
    return 0;
}






#include <iostream>
#include <math.h>
using namespace std;


int main()  {
    double number[3];
    int num;
    cout << "Please enter a number" << endl;
    cin >> num;
    cout << "Please enter the same  number again" << endl;
    for (int i = 0; i < 3; i++) {
        cin >> number[i];
    }
    
    int value, value1, value2, sum;
    value = pow(number[0], 3.0);
    value1 = pow(number[1], 3.0);
    value2 =  pow(number[2], 3.0);
    
    sum = value + value1 + value2;
    
    if (sum == num) {
        cout << "It is an Armstrong number" << endl;
    } else {
        cout << "It is not an Armstrong number" << endl;
    }
}

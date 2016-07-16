//
//  LowestScoreDrop.cpp
//  TextBookQuestions
//
//  Created by Sharmyn Kayani on 16/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  Lowest Score Drop
//Write a program that calculates the average of a group of test scores, where the lowest score in the group is dropped. It should use the following functions:
//
//*     void getScore() should  ask  the  user  for  a test  score,  store  it in a reference parameter variable,  and validate  it. This function  should  be called by main once for each of the five scores to be entered.
//*     void calcAverage() should  calculate  and display the average of the four high- est scores. This function  should be called just once by main, and should be passed the five scores.
//*     int findLowest() should find and return  the lowest of the five scores passed to it. It should be called by calcAverage, which uses the function  to determine  which of the five scores to drop.
//Input  Validation: Do not accept test scores lower than 0 or higher than 100.
//  DOESN'T WORK PROPERLY



// I have uploaded the solution for this question in the logic branch

#include <iostream>

using namespace std;

int score[5];
int minimum = 0;

void getScore(int);
void  calcAverage(int);
int findLowest(int);

void getScore(int score) {
    if (score < 0) {
        cout << "Not acceptable"  << endl;
    }
}

void calcAverage(int score[5]) {
    int average = 0;
    
    if (minimum == score[0]) {
        average = (score[1] + score[2] + score[3] + score[4])/4;
        cout << "The average of the four teams is: " << average << endl;
    } else if (minimum == score[1]) {
        average = (score[0] + score[1] + score[2] + score[3])/4;
        cout << "The average of the four teams is: " << average << endl;
    } else if (minimum == score[2]) {
        average = (score[0] + score[1] + score[3] + score[4])/4;
        cout << "The average of the four teams is: " << average << endl;
    } else if (minimum == score[3]) {
        average = (score[1] + score[2] + score[0] + score[4])/4;
        cout << "The average of the four teams is: " << average << endl;
    } else if (minimum == score[4]) {
        average = (score[1] + score[2] + score[3] + score[0])/4;
        cout << "The average of the four teams is: " << average << endl;
    }
}

int findLowest(int score[5])  {
    for (int i = 0; i < 5; i++){
        if (score[i] < minimum) {
            minimum = score[i];
        }
    }
    return minimum;
}

// Don't understand how to  call functions from the main (problem)
int main() {
    cout << "Please  enter 5 values for the scores:  " << endl;
    //When entering negative values, it still considers it as input (problem)
    for (int i = 0; i < 5; i++)  {
        cin >> score[i];
        getScore(score[i]);
    }
    
    calcAverage(score);
}

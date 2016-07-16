//
//  makeLast.cpp
//  TextBookQuestions
//
//  Created by Sharmyn Kayani on 16/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  Given an int array, return a new array with double the length where its last element is the same as the original array, and all the other elements are 0. The original array will be length 1 or more. Note: by default, a new int array contains all 0's.

//  makeLast([4, 5, 6]) → [0, 0, 0, 0, 0, 6]

#include <iostream>
using namespace std;

int main() {
    int size = 0;
    
    cout << "Please enter how many element you would like in your array: ";
    cin >> size;
    
    int arr[size];
    
    cout << "Please enter " << size << " elements: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "The new array is: " << endl;
    for (int i = 0; i < size -1; i++) {
        arr[i] = 0;
        cout << arr[i] << " ";
    }
    cout << arr[size -1] << endl;
    
}

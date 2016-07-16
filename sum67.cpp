//
//  sum67.cpp
//  TextBookQuestions
//
//  Created by Sharmyn Kayani on 16/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  Return the sum of the numbers in the array, except ignore sections of numbers starting with a 6 and extending to the next 7 (every 6 will be followed by at least one 7). Return 0 for no numbers.

//  sum67([1, 2, 2]) → 5
//  sum67([1, 2, 2, 6, 99, 99, 7]) → 5
//  sum67([1, 1, 6, 7, 2]) → 4
//  DOESN'T WORK :(

#include <iostream>
using namespace std;

int main() {
    int size = 0;
    int sum = 0;
    
    cout << "Please enter how many element you would like in your array: ";
    cin >> size;
    
    int arr[size];
    
    cout << "Please enter " << size << " elements: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] == 6) {
            while (arr[i] != 7) {
                arr[i] = 0;
                sum += arr[i];
                i++;
            }
        }
        sum += arr[i];
    }
        
    
    cout << "The sum is: " << sum << endl;
    
}

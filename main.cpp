#include <iostream>
#include "include/Solution.h"
using namespace std;


int main(){

    int num;
    cout << "Enter a number from 0 to 99\n"; 
    cin >> num;

    if (num < 0 || num > 99) {
        cout << "Wrong input" << endl;
        return 0;
    }

    string turkish = translator(num);
    cout << "Your number on Turkish - " << turkish << endl;
    return 0;
}
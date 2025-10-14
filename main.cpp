#include <iostream>
#include "Solution.h"
using namespace std;


int main(){

    int num;
    cout << "Enter a number from 0 to 99\n"; 
    cin >> num;
    cout << "Your number on Turkish " << translator(num) << endl;
    return 0;
}
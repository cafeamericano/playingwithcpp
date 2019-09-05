//SETUP
#include <iostream>
#include <cmath>
using namespace std;

//FUNCTIONS
void printLineBreak(int lineCount) {
    for (int i = 0; i < lineCount; i++){
        cout << "\n";
    }
}

//MAIN
int main() {
    
    //Add in some spacing
    printLineBreak(1);

    //Variable initialization
    float pounds, inches;
    
    //Find out user's weight in pounds
    cout << "What is your weight in pounds?: ";
    cin >> pounds;
    
    //Find out user's height in inches
    cout << "What is your height in inches?: ";
    cin >> inches;
    
    //Display BMI calculation to user
    cout << "Your BMI is: ";
    cout << (703 * pounds)/(inches * inches);
    
    //End program
    printLineBreak(2);
    return 0;
    
}

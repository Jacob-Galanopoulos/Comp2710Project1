//Jacob Galanopoulos
//JDG0058
//hw1_jdg0058.cpp
//The program calculates the fatal amount of diet coke
//I received no help for this project.

#include <iostream>
using namespace std;

int main() {
    double fatalMouse = 0.0, weightHuman = 0.0, weightMouse = 0.0;
    const double fracSweetInCoke = 0.001;
    cout << "Please input the weight of the mouse in kg" << endl;
    cin >> weightMouse;
    cout << "Please input the fatal amount of sweetener for mouse in kg" << endl;
    cin >> fatalMouse;
    cout << "Please input the weight of your dear friend in kg" << endl;
    cin >> weightHuman;
    double fatalHuman = (fatalMouse * weightHuman) / (weightMouse * fracSweetInCoke);
    cout << "The fatal amount of Coke for your friend is: " << fatalHuman << " kg" << endl;
}
// Tracking Database
// Main File
// Created By Thomas Thirtle

//basic header
#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
#include <time.h>

using namespace std;

// Function Prototypes here

int setup()
{
    // open the file and overwrite
    int product;
    srand (time(NULL));
    int barcode;
    int customerID;
    cout << "customer ID: ";
    cin >> customerID;
    barcode = rand() % 100000 + 100000; //randomize barcode
    cout << barcode << endl;
    cout << endl << "Type of item: " << endl;
    cout << "1. box" << endl << endl;
    cout << "2. Bags" << endl << endl;
    cout << "3. Envelope" << endl << endl;
    cout << "4. Brown Envelope" << endl << endl;
    cout << "Choice: ";
    cin >> product;
    /* Do File I/O Here.
    Write to file
    
    Customer
    Type
    Barcode

    */ 

    return 0;
}


// main function
// required for all c++ programs
int main() {
    setup();
    return 0;

}

// actual run function
int active(){
    int barcode;
    int lookup;
    cout << "Barcode: "
    return 0;
}
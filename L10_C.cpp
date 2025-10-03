/*
    Programmer: Ryan Posey
    Assignment: L10.C
    Purpose: Practice using constructors
    Due date: 10/02/2025
*/

#include <iostream>
#include <iomanip>
#include "personType.h"

using namespace std;



int main() {

    // Init members & Stretch 4 (explicitly test setters & getters in main)

    personType p1{};

    // Init p1 attributesas garbage values

    p1.setName("");
    p1.setAddress("");
    p1.setHeight(0);
    p1.setDOB("");
    p1.setGender('a');
    p1.setAge(0);

    // Reassign p1 attributes

    p1.setName("Sabrina Morales");
    p1.setAddress("662 S. Southhampton Avenue Vista, CA 92083");
    p1.setHeight(51.2);
    p1.setDOB("24 July 2017");
    p1.setGender('F');
    p1.setAge(20);

    personType p2{};

    p2.setName("Elle Macdonald");
    p2.setAddress("84 Green Drive Tracy, CA 95376");
    p2.setHeight(52.3);
    p2.setDOB("17 September 2014");
    p2.setGender('F');
    p2.setAge(20);

    personType p3{};

    p3.setName("Hannah Finley");
    p3.setAddress("8253 Linda Dr. Laguna Niguel, CA 92677");
    p3.setHeight(49.8);
    p3.setDOB("13 September 2012");
    p3.setGender('F');
    p3.setAge(20);

    personType p4{};

    p4.setName("Arabella Walter");
    p4.setAddress("7593 Wood St. Fountain Valley, CA 92708");
    p4.setHeight(54.1);
    p4.setDOB("27 April 2010");
    p4.setGender('F');
    p4.setAge(20);

    personType p5{};

    p5.setName("Kye Baird");
    p5.setAddress("8316 Lafayette Ave. North Hills, CA 91343");
    p5.setHeight(55.8);
    p5.setDOB("28 November 2008");
    p5.setGender('F');
    p5.setAge(20);

    // Stretch 1 (Heading)
    cout << left << setw(10) << setfill('-') << "" << " # personType class # " << left << setw(10) << setfill('-') << "" << endl;

    cout << setfill(' ');

    // Print personType member data

    p1.print(), p2.print(), p3.print(), p4.print(), p5.print();

    // Compare personType members

    cout << boolalpha;
    cout << left << setw(20) << "equals(p1, p2) = " << left << p1.equals(p2) << endl;
    cout << left << setw(20) << "equals(p3, p4) = " << left << p3.equals(p4) << endl;
    cout << left << setw(20) << "equals(p3, p3) = " << left << p3.equals(p3) << endl;
}
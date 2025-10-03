/*
    Programmer: Ryan Posey
    Assignment: L10.C
    Purpose: Practice using constructors
    Due date: 10/02/2025
*/
#include <cstdint>

#ifndef PERSON_TYPE_H
#define PERSON_TYPE_H

using namespace std;

class personType { 
        std::string first_name_;
        std::string last_name_;
        std::string address_;
        double height_inches_{};
        std::string date_of_birth_;  
        char gender_{}; 
        uint16_t age_;

    public:
    
        // Constructor

        personType(
            string firstName, string lastName, string address, 
            double height, string DOB, char gender, uint16_t age
        ); // Full constructor

        personType(string firstName, string lastName); // First+Last constructor

        personType(); // Default constructor


        void print() const;
        bool equals(const personType& other) const;

        // Setters

        void setFirstName(string firstName);

        void setLastName(string lastName);

        void setAddress(string address);

        void setHeight(double height);

        void setDOB(string DOB);

        void setGender(char gender);

        void setAge(uint16_t age);

        // Getters

        string getFirstName() const;
        string getLastName() const;
        string getAddress() const;
        double getHeight() const;
        string getDOB() const;
        char getGender() const;
        uint16_t getAge() const;
};

#endif // PERSON_TYPE_H
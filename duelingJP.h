// Kyle Fraser
// 10/28/2020
// Revision History: Drafted 9/18/2020
//                   revised 9/19/2020
//                   revised 9/20/2020
//                   revised 9/26/2020
//                   revised 10/21/2020
//                   revised 10/22/2020



#ifndef DUELINGJP_H
#define DUELINGJP_H

#include<iostream>
#include "jumpPrime.h"
using namespace std;

class duelingJP {

public:

    // Pre: At least 2 duelingJP objects must be instantiated. If
    // used in the operand, the go function must be invoked with the object.
    // Post: None
    duelingJP operator+(const duelingJP&);

    // Pre: At least 1 duelingJP objects must be instantiated. If
    // used in the operand, the go functions must be invoked with the object.
    // Post: None
    duelingJP operator+(int addToCurrentObject);

    // Pre: At least 1 duelingJP object must be instantiated. Objects used
    // in this operation must have invoked the go function.
    // Post: Number of sub-objects is changed and the encapsulated
    // number for each sub-object is changed.
    duelingJP operator+=(duelingJP& DJP);

    // Pre: At least 1 duelingJP object must be instantiated.
    // Objects used in this operation must have invoked the go
    // function.
    // Post: Number of sub-objects is changed.
    // encapsulated number for each sub-object will be changed.
    duelingJP operator+=(int addToCurrentObject);

    // Pre: At least 1 duelingJP object must be instantiated.
    // Objects used in this operation must have invoked the go
    // function.
    // Post: Number of sub-objects will be changed and the
    // encapsulated number for each sub-object will be changed.
    duelingJP operator++();

    // Pre: At least 1 duelingJP object must be instantiated.
    // objects used in this operation must have invoked the go
    // function.
    // Post: Number of subObjects will be changed and the
    // encapsulated number for each sub-object will be changed.
    duelingJP operator++(int postIncrementNum);

    // Pre: At least 2 duelingJP objects must be instantiated. If
    // used in the operand, the go function must be invoked with the object.
    // Post: None
    duelingJP operator-(const duelingJP&);

    // Pre: At least 1 duelingJP objects must be instantiated. If
    // used in the operand, the go function must be invoked with the object.
    // Post: None
    duelingJP operator-(int subtractFromCurrentObject);

    // Pre: At least 1 duelingJP object must be instantiated. Objects used
    // in this operation must have invoked the go function.
    // Post: Number of sub-objects is changed and the encapsulated
    // number for each sub-object is changed.
    duelingJP operator-=(duelingJP & DJP);

    // Pre: At least 1 duelingJP object must be instantiated. Objects used
    // in this operation must have invoked the go function.
    // Post: Number of sub-objects is changed and the encapsulated
    // number for each sub-object is changed.
    duelingJP operator-=(int subtractFromCurrentObject);

    // Pre: At least 1 duelingJP object must be instantiated.
    // Objects used in this operation must have invoked the go
    // function.
    // Post: Number of sub-objects will be changed and the
    // encapsulated number for each sub-object will be changed.
    duelingJP operator--();

    // Pre: At least 1 duelingJP object must be instantiated.
    // Objects used in this operation must have invoked the go
    // function.
    // Post: Number of sub-objects will be changed and the
    // encapsulated number for each sub-object will be changed.
    duelingJP operator--(int postIncrementsNum);

    // Pre: At least 2 duelingJP objects must be instantiated
    // and the go function must be invoked for both.
    // Post: None
    bool operator==(const duelingJP&);

    // Pre: At least 2 duelingJP objects must be instantiated
    // and the go function must be invoked for both.
    // Post: None
    bool operator!=(const duelingJP&);

    // Pre: At least 2 duelingJP objects must be instantiated
    // and the go function must be invoked for both.
    // Post: None
    bool operator>(const duelingJP&);

    // Pre: At least 2 duelingJP objects must be instantiated
    // and the go function must be invoked for both.
    // Post: None
    bool operator<(const duelingJP&);

    // Pre: A duelingJP objects must be instantiated
    // and the go function must be invoked for both.
    // Post: None
    friend ostream& operator<<(ostream &out, const duelingJP &DJP);

    // Pre: Client must provide the number of jumpPrime objects.
    // Post: DuelingJP object is constructed and fields are initialized.
    duelingJP(int subObjectNum);

    // Pre: None
    // Post: Memory is deallocated.
    ~duelingJP();


    // Pre: None
    // Post: Object is copied
    duelingJP(const duelingJP &obj);

    // Pre: None
    // Post: Object is assigned.
    duelingJP& operator=(const duelingJP &rhs);

    // Pre: None
    // Post: Object is copied. Heap memory is stolen.
    duelingJP(duelingJP&& src);

    // Pre: None
    // Post: Object is assigned. Heap memory is stolen.
    duelingJP& operator=(duelingJP&& src);

    // Pre: A specific iteration of jumpPrime is needed.
    // Post: None
    int getSpecificInversionCount(int specificJumpPrime);

    // Pre: A specific iteration of jumpPrime is needed.
    // Post: None
    int getSpecificCollisionCount(int specificJumpPrime);


    // Pre: None
    // Post: None
    int getTotalInversionCount();

    // Pre: None
    // Post: None
    int getTotalCollisionCount();

    // Pre: None
    // Post: jumpPrime objects are set up.
    // Collision and inversion checks occur.
    void go();

private:

    // Pre: None
    // Post: random numbers will be encapsulated in
    // each jumpPrime object.
    void setUpValues();

    // Pre: None
    // Post: Total and specific inversions
    // may be incremented multiple times.
    void checkForInversions(int iteration);

    // Pre: None
    // Post: total and specific collisions.
    // may be incremented multiple times.
    void checkForCollisions(int iteration);

    // Pre: None
    // Post: All jumpPrime objects are deactivated.
    void queryUntilDeactivation();

    // Pre: None
    // Post None
    int randomNumberGenerator();

    int totalCollisions;
    int totalInversions;
    int subObjectCount;
    int random;


    struct jumpPrimeInfo{

        int inversions;
        int collisions;
        int upQuery;
        int downQuery;
        int checkEqual;
        int encapsulatedNumber;

        jumpPrime jp;


    };

    jumpPrimeInfo* infoArray;
    jumpPrimeInfo* tempArray;


};


#endif

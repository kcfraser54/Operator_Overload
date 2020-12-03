 // Kyle Fraser
// 10/28/2020
// Revision History: Drafted 9/18/2020
//                   Revised 9/19/2020
//                   Revised 9/20/2020
//                   Revised 9/21/2020
//                   Revised 9/22/2020
//                   Revised 9/23/2020
//                   Revised 9/24/2020
//                   Revised 9/25/2020
//                   Revised 9/26/2020
//                   Revised 9/27/2020
//                   Revised 10/21/2020
//                   Revised 10/22/2020
//                   Revised 10/23/2020
//                   Revised 10/26/2020
//                   Revised 10/27/2020

// Interface Invariants
//------------------------------------------------------

// for all overloaded operators except <<, <, >, ==, !=, as a post-operation,
// the encapsulated jumpPrime number will be changed to reflect the
// operator used.

// In order to use instantiated duelingJP objects in operations. the go function
// must be invoked for this duelingJP to set data members.

// The go function does not have to be used on new duelingJP objects whose
// data members are set as a result of existing duelingJP objects.

// addition of two objects supported using "+". This is non-destructive.
// May be used like the += operation in the form duelingJP 1 = duelingJP 1 + duelingJP 2
// Otherwise, may be used in the form duelingJP 3 = duelingJP 1 + duelingJP 2
// where the go function has not been invoked for duelingJP 3.
// A new duelingJP object is created with sub-objects equal to the number of sub-objects in operand
// 1 + number of sub-objects in operand 2.
// encapsulated jumpPrime number for jumpPrimes will be set to reflect an estimation
// of either objects 1's encapsulated jumpPrime numbers or objects 2's
// encapsulated jumpPrime numbers.

// addition of an object and an integer supported using "+". This is non-destructive.
// may be used like the += operator in the form Object1 = Object1 + int
// Otherwise, may be used in the form duelingJP 2 = duelingJP 1 + int where the go
// function has not been invoked for duelingJP 2.
// A new duelingJP object is initialized with sub-objects equal to the number of sub-objects in operand
// 1 + the integer that is operand 2.
// Encapsulated jumpPrime number for jumpPrimes will be set to reflect an estimation of operand 1's
// encapsulated number. The encapsulated number for each new jumpPrime will be a newly created
// number.

// addition assignment operator supported with another object using "+=".
// This is destructive. The current duelingJP object is
// changed so that the new number of sub-objects reflects
// current sub-objects + operand sub-objects.
// encapsulated jumpPrime number for jumpPrimes will be set to reflect an estimation
// of either object 1's encapsulated jumpPrime numbers or object 2's
// encapsulated jumpPrime numbers.


// addition assignment operator supported with an integer using "+=".
// This is destructive. The current duelingJP object is
// changed so that the new number of sub-objects reflects
// current sub-objects + int.
// Encapsulated jumpPrime number for jumpPrimes will be set to reflect and estimation of operand 1's
// encapsulated numbers. The encapsulated number for each new jumpPrime will be a newly encapsulated number.

// Pre-increment supported using ++duelingJP. This is destructive. The
// current duelingJP object is changed so that the new number of sub-objects
// reflects current sub-objects + 1.
// Encapsulated jumpPrime number for jumpPrimes will be set to reflect an estimation of object 1's
// encapsulated numbers. The encapsulated number for each new jumpPrime will be a newly encapsulated
// number.

// post-increment supported using duelingJP++. This is destructive. The
// current duelingJP object is changed so that the new number of sub-objects
// reflects current sub-objects + 1.
// Encapsulated jumpPrime number for jumpPrimes will be set to reflect an estimation of object 1's
// encapsulated numbers. The encapsulated number for each new jumpPrime will be a newly encapsulated
// number.

// subtraction of two objects supported using "-". This is non-destructive.
// may be used like the -= operator in the form Object1 = Object1 - Object 2.
// Otherwise, may be used in the form duelingJP 3 = duelingJP 1 - duelingJP 2
// where the go function has not been invoked for duelingJP 3.
// if duelingJP 1 contains more jumpPrimes than duelingJP 2, Object 2's jumpPrimes are subtracted and
// new encapsulated numbers are set to reflect an estimation of duelingJP 1's encapsulated jumpPrime
// numbers up to the new number of jumpPrimes.

// Subtraction of an integer from an object is supported using "-". This is non-destructive.
// may be used like the -= operator in the form object1 = object1 - int.
// If the number of jumpPrimes in object 1 is greater than the integer, the number of
// object 1's jumpPrimes are subtracted from by the int.
// New encapsulated numbers for jumpPrimes are set to reflect an estimation of
// of object 1's encapsulated jumpPrime numbers up to the new number of jumpPrimes.

// subtraction assignment operator supported using "-=". This is destructive.
// If the number of sub-objects in object 1 is greater than the number of sub-objects in object 2,
// The current duelingJP object is
// changed so that the new number of sub-objects reflects
// object 1 sub-objects - object 2 sub-objects.
// encapsulated jumpPrime number for jumpPrimes will be set to reflect an estimation
// of object 1's encapsulated jumpPrime numbers.

// subtraction assignment operator supported using "-=". This is destructive.
// If the number of sub-objects in object 1 is greater than the integer value,
// The current duelingJP object is
// changed so that the new number of sub-objects reflects
// object 1 sub-objects - int.
// encapsulated jumpPrime number for jumpPrimes will be set to reflect an estimation
// of object 1's encapsulated jumpPrime numbers.

// Pre-decrement supported. This is destructive.
// subtraction assignment operator supported using "--duelingJP". This is destructive.
// If the number of sub-objects in object 1 is greater than 0,
// The current duelingJP object is
// changed so that the new number of sub-objects reflects
// object 1 sub-objects - int.
// encapsulated jumpPrime number for jumpPrimes will be set to reflect an estimation
// of object 1's encapsulated jumpPrime numbers.

//Post-decrement supported. This is destructive.
// subtraction assignment operator supported using "duelingJP--". This is destructive.
// If the number of sub-objects in object 1 is greater 0,
// The current duelingJP object is
// changed so that the new number of sub-objects reflects
// object 1 sub-objects - int.
// encapsulated jumpPrime number for jumpPrimes will be set to reflect an estimation
// of object 1's encapsulated jumpPrime numbers.

// Equivalency operator "==" supported. This is non-destructive.
// returns true when the number of jumpPrime objects of one object
// are equal to the number of jumpPrime objects in a second object.

// Non-equivalency operator "!=" supported. This is non-destructive.
// returns true when the number of jumpPrime objects of one duelingJP object
// is not equal to the number of jumpPrime objects in a second duelingJP object.

// Comparison operator > supported. This is non-destructive.
// returns true when the number encapsulated in the first jumpPrime of the duelingJP
// on the left side
// is greater than the number encapsulated in the first jumpPrime number
// of the duelingJP on the right side of the operation.
// In order to return true, the number of jumpPrimes in the duelingJP object
// on the left side must also be greater than the number of jumpPrimes in the
// duelingJP object on the right of the operation.

// Comparison operator < supported. This is non-destructive.
// returns true when the number encapsulated in the first jumpPrime of the duelingJP
// on the left side
// is less than the number encapsulated in the first jumpPrime number
// of the duelingJP on the right side of the operation.
// In order to return true, the number of jumpPrimes in the duelingJP object
// on the left side must also be less than than the number of jumpPrimes in the
// duelingJP object on the right side of the operation.

// Streaming operator << supported. This is non-destructive.
// returns output for a duelingJP object.
// Will print the total inversions and collisions of the object
// and also the specific inversions and collisions for the
// first jumpPrime in the object.

// Deep Copying supported.
// May get the total collisions.
// May get the total inversions.
// May get a jumpPrime's specific collisions.
// May get a jumpPrime's specific inversions.

// Client responsible for sending the number
// of jumpPrimes to the constructor.

// Client must invoke the go function in
// order for collision and inversion checks.

// Class Invariants
//-------------------------------------------------------

// The "+","+=","++","-","-=","--","==","!=",">", and "<"
// operators are overloaded to work with duelingJP objects.

// Post-operations are done on encapsulated jumpPrime numbers
// after addition and subtraction operations.

// changes won't be seen until the jumpPrime is queried again

// During operations, a new encapsulated number will be set for jumpPrimes that do not
// already have data members set.

// The client may get the total collisions for all
// jumpPrime objects.

// The client may get the total inversions for all
// jumpPrime objects.

// The client may get specific inversions for 1
// jumpPrime object.

// The client may get specific collisions for 1
// jumpPrime object.

// The Client must invoke the go function in order
// for collision and inversion checks to occur.

// Deep copying supported.

// The user must send the number of jumpPrime objects
// used to the constructor.

#include "duelingJP.h"
#include<ctime>
#include<random>

using namespace std;

const int MAXIMUM_QUERY_NUMBER = 20000;
const int MINIMUM_QUERY_NUMBER = 100;

duelingJP::duelingJP(int subObjectNum) {

    totalCollisions = 0;
    totalInversions = 0;
    random = 0;
    subObjectCount = subObjectNum;
    infoArray = new jumpPrimeInfo[subObjectCount];
    for(int i = 0; i < subObjectNum; i++) {

        infoArray[i].upQuery = 0;
        infoArray[i].downQuery = 0;
        infoArray[i].collisions = 0;
        infoArray[i].inversions = 0;
        infoArray[i].checkEqual = 0;
        infoArray[i].encapsulatedNumber = 0;

    }


}

duelingJP::~duelingJP(){

    delete [] infoArray;

}

duelingJP::duelingJP(const duelingJP &obj){

    random = obj.random;
    totalCollisions = obj.totalCollisions;
    totalInversions = obj.totalInversions;
    subObjectCount = obj.subObjectCount;
    infoArray = new jumpPrimeInfo[obj.subObjectCount];
    for(int i = 0; i < subObjectCount; i++){
        infoArray[i] = obj.infoArray[i];
    }
}

duelingJP& duelingJP::operator=(const duelingJP &rhs){

    if(this != &rhs){
        delete [] infoArray;
        infoArray = new jumpPrimeInfo[rhs.subObjectCount];
        subObjectCount = rhs.subObjectCount;
        totalCollisions = rhs.totalCollisions;
        totalInversions = rhs.totalInversions;
        for(int i = 0; i < subObjectCount; i++){
            infoArray[i] = rhs.infoArray[i];
        }

    }

    return *this;

}

duelingJP duelingJP::operator+(const duelingJP& addThisDJP){

    duelingJP DJPExtend(subObjectCount + addThisDJP.subObjectCount);

    for(int i = 0; i < subObjectCount + addThisDJP.subObjectCount; i++){

        if(i < subObjectCount) {
            DJPExtend.infoArray[i].encapsulatedNumber = infoArray[i].encapsulatedNumber;
            DJPExtend.infoArray[i].jp.setNumberToQuery(DJPExtend.infoArray[i].encapsulatedNumber);
            DJPExtend.infoArray[i].upQuery = DJPExtend.infoArray[i].jp.jumpPrimeUp();
            DJPExtend.infoArray[i].downQuery = DJPExtend.infoArray[i].jp.jumpPrimeDown();

        }
        else{

            DJPExtend.infoArray[i].encapsulatedNumber = addThisDJP.infoArray[i - subObjectCount].encapsulatedNumber;
            DJPExtend.infoArray[i].jp.setNumberToQuery(DJPExtend.infoArray[i].encapsulatedNumber);
            DJPExtend.infoArray[i].upQuery = DJPExtend.infoArray[i].jp.jumpPrimeUp();
            DJPExtend.infoArray[i].downQuery = DJPExtend.infoArray[i].jp.jumpPrimeDown();

        }

    }

    DJPExtend.queryUntilDeactivation();
    for(int i = 0; i < DJPExtend.subObjectCount; i++) {
        DJPExtend.infoArray[i].jp += addThisDJP.infoArray[i].jp;
        DJPExtend.infoArray[i].encapsulatedNumber += addThisDJP.infoArray[i].encapsulatedNumber;
    }
    return DJPExtend;

}

duelingJP duelingJP::operator+(int addToCurrentObject){

    duelingJP DJPExtend(subObjectCount + addToCurrentObject);
    for(int i = 0; i < subObjectCount + addToCurrentObject; i++){

        if(i < subObjectCount) {
            DJPExtend.infoArray[i].encapsulatedNumber = infoArray[i].encapsulatedNumber;
            DJPExtend.infoArray[i].jp.setNumberToQuery(DJPExtend.infoArray[i].encapsulatedNumber);
            DJPExtend.infoArray[i].upQuery = DJPExtend.infoArray[i].jp.jumpPrimeUp();
            DJPExtend.infoArray[i].downQuery = DJPExtend.infoArray[i].jp.jumpPrimeDown();

        }

        else{
            DJPExtend.infoArray[i].encapsulatedNumber = randomNumberGenerator();
            DJPExtend.infoArray[i].jp.setNumberToQuery(DJPExtend.infoArray[i].encapsulatedNumber);
            DJPExtend.infoArray[i].upQuery = DJPExtend.infoArray[i].jp.jumpPrimeDown();
            DJPExtend.infoArray[i].downQuery = DJPExtend.infoArray[i].jp.jumpPrimeDown();


        }


    }

    DJPExtend.queryUntilDeactivation();
    for(int i = 0; i < DJPExtend.subObjectCount; i++) {
        DJPExtend.infoArray[i].jp += addToCurrentObject;
        DJPExtend.infoArray[i].encapsulatedNumber += addToCurrentObject;
    }
    return DJPExtend;
}

duelingJP duelingJP::operator+=(duelingJP& DJP){
    totalCollisions = 0;
    totalInversions = 0;
    for(int i = 0; i < subObjectCount + DJP.subObjectCount; i++){

        if(i < subObjectCount) {
            if(infoArray[i].upQuery == -1) {
                infoArray[i].jp.revive();
            }
        }
        else {

            if(DJP.infoArray[i - subObjectCount].upQuery == -1) {

                DJP.infoArray[i - subObjectCount].jp.revive();
            }
        }

    }

    tempArray = new jumpPrimeInfo[subObjectCount + DJP.subObjectCount];

    for(int i = 0; i < subObjectCount + DJP.subObjectCount; i++){

        if(i < subObjectCount){

            tempArray[i].encapsulatedNumber = infoArray[i].encapsulatedNumber;

        }
        else{

            tempArray[i].encapsulatedNumber = DJP.infoArray[i - subObjectCount].encapsulatedNumber;

        }

        tempArray[i].checkEqual = 0;
        tempArray[i].collisions = 0;
        tempArray[i].inversions = 0;



    }

    subObjectCount = subObjectCount + DJP.subObjectCount;

    delete [] infoArray;
    infoArray = new jumpPrimeInfo[subObjectCount];

    for(int i = 0; i < subObjectCount; i++){

        infoArray[i].jp = tempArray[i].jp;
        infoArray[i].encapsulatedNumber = tempArray[i].encapsulatedNumber;
        infoArray[i].jp.setNumberToQuery(infoArray[i].encapsulatedNumber);
        infoArray[i].upQuery = infoArray[i].jp.jumpPrimeUp();
        infoArray[i].downQuery = infoArray[i].jp.jumpPrimeDown();
        infoArray[i].checkEqual = tempArray[i].checkEqual;
        infoArray[i].collisions = tempArray[i].collisions;
        infoArray[i].inversions = tempArray[i].inversions;


    }

    delete [] tempArray;
    queryUntilDeactivation();
    for(int i = 0; i < subObjectCount; i++){
        infoArray[i].encapsulatedNumber += DJP.infoArray[i].encapsulatedNumber;
        infoArray[i].jp += DJP.infoArray[i].jp;

    }
    return *this;
}

duelingJP duelingJP::operator+=(int addToCurrentObject){

    totalCollisions = 0;
    totalInversions = 0;
    for(int i = 0; i < subObjectCount; i++) {
        if (infoArray[i].upQuery == -1){

            infoArray[i].jp.revive();
        }

    }


    tempArray = new jumpPrimeInfo[subObjectCount + addToCurrentObject];
    for(int i = 0; i < subObjectCount + addToCurrentObject; i++){


        if(i < subObjectCount){
            tempArray[i].encapsulatedNumber = infoArray[i].encapsulatedNumber;


        }

        else{

            tempArray[i].encapsulatedNumber = randomNumberGenerator();

        }

        tempArray[i].inversions = 0;
        tempArray[i].collisions = 0;
        tempArray[i].checkEqual = 0;

    }
    subObjectCount = subObjectCount + addToCurrentObject;
    delete [] infoArray;
    infoArray = new jumpPrimeInfo[subObjectCount];
    for(int i = 0; i < subObjectCount; i++){

        infoArray[i].encapsulatedNumber = tempArray[i].encapsulatedNumber;
        infoArray[i].encapsulatedNumber += addToCurrentObject;
        infoArray[i].inversions = tempArray[i].inversions;
        infoArray[i].collisions = tempArray[i].collisions;
        infoArray[i].checkEqual = tempArray[i].checkEqual;
        infoArray[i].jp.setNumberToQuery(infoArray[i].encapsulatedNumber);
        infoArray[i].upQuery = infoArray[i].jp.jumpPrimeUp();
        infoArray[i].downQuery = infoArray[i].jp.jumpPrimeDown();

    }

    delete [] tempArray;

    queryUntilDeactivation();
    for(int i = 0; i < subObjectCount; i++){
        infoArray[i].encapsulatedNumber += addToCurrentObject;
        infoArray[i].jp += addToCurrentObject;

    }
    return *this;
}

duelingJP duelingJP::operator++(){
    totalCollisions = 0;
    totalInversions = 0;
    for(int i = 0; i < subObjectCount; i++) {
        if (infoArray[i].upQuery == -1){

            infoArray[i].jp.revive();
        }

    }

    tempArray = new jumpPrimeInfo[subObjectCount + 1];
    for(int i = 0; i < subObjectCount + 1; i++){

        if(i < subObjectCount){
            tempArray[i].encapsulatedNumber = infoArray[i].encapsulatedNumber;
        }

        else{
            tempArray[i].encapsulatedNumber = randomNumberGenerator();
        }

        tempArray[i].inversions = 0;
        tempArray[i].collisions = 0;
        tempArray[i].checkEqual = 0;

    }

    subObjectCount = subObjectCount + 1;
    delete [] infoArray;
    infoArray = new jumpPrimeInfo[subObjectCount];

    for(int i = 0; i < subObjectCount; i++){

        infoArray[i].encapsulatedNumber = tempArray[i].encapsulatedNumber;
        infoArray[i].inversions = tempArray[i].inversions;
        infoArray[i].collisions = tempArray[i].collisions;
        infoArray[i].checkEqual = tempArray[i].checkEqual;
        infoArray[i].jp.setNumberToQuery(infoArray[i].encapsulatedNumber);
        infoArray[i].upQuery = infoArray[i].jp.jumpPrimeUp();
        infoArray[i].downQuery = infoArray[i].jp.jumpPrimeDown();

    }
    delete [] tempArray;
    queryUntilDeactivation();
    for(int i = 0; i < subObjectCount; i++){
        infoArray[i].encapsulatedNumber++;
        infoArray[i].jp++;

    }

    return *this;


}

duelingJP duelingJP::operator++(int postIncrementNum){
    totalCollisions = 0;
    totalInversions = 0;
    duelingJP oldState = *this;
    for(int i = 0; i < subObjectCount; i++) {
        if (infoArray[i].upQuery == -1){

            infoArray[i].jp.revive();
        }

    }

    tempArray = new jumpPrimeInfo[subObjectCount + 1];
    for(int i = 0; i < subObjectCount + 1; i++){

        if(i < subObjectCount){
            tempArray[i].encapsulatedNumber = infoArray[i].encapsulatedNumber;

        }

        else{
            tempArray[i].encapsulatedNumber = randomNumberGenerator();

        }

        tempArray[i].inversions = 0;
        tempArray[i].collisions = 0;
        tempArray[i].checkEqual = 0;

    }
    subObjectCount = subObjectCount + 1;
    delete [] infoArray;
    infoArray = new jumpPrimeInfo[subObjectCount];

    for(int i = 0; i < subObjectCount; i++){

        infoArray[i].encapsulatedNumber = tempArray[i].encapsulatedNumber;
        infoArray[i].inversions = tempArray[i].inversions;
        infoArray[i].collisions = tempArray[i].collisions;
        infoArray[i].checkEqual = tempArray[i].checkEqual;
        infoArray[i].jp.setNumberToQuery(infoArray[i].encapsulatedNumber);
        infoArray[i].upQuery = infoArray[i].jp.jumpPrimeUp();
        infoArray[i].downQuery = infoArray[i].jp.jumpPrimeDown();
    }

    delete [] tempArray;
    queryUntilDeactivation();
    for(int i = 0; i < subObjectCount; i++){
        infoArray[i].encapsulatedNumber++;
        infoArray[i].jp++;
    }
    return oldState;
}


duelingJP duelingJP::operator-(const duelingJP& DJP){

    if(subObjectCount > DJP.subObjectCount) {
        duelingJP DJPReduce(subObjectCount - DJP.subObjectCount);
        for(int i = 0; i < subObjectCount - DJP.subObjectCount; i++){

            DJPReduce.infoArray[i].encapsulatedNumber = infoArray[i].encapsulatedNumber;
            DJPReduce.infoArray[i].jp.setNumberToQuery(DJPReduce.infoArray[i].encapsulatedNumber);
            DJPReduce.infoArray[i].upQuery = DJPReduce.infoArray[i].jp.jumpPrimeUp();
            DJPReduce.infoArray[i].downQuery = DJPReduce.infoArray[i].jp.jumpPrimeDown();

        }

        DJPReduce.queryUntilDeactivation();
        for(int i = 0; i < DJPReduce.subObjectCount; i++){
            if(DJPReduce.infoArray[i].encapsulatedNumber > DJP.infoArray[i].encapsulatedNumber) {
                DJPReduce.infoArray[i].encapsulatedNumber -= DJP.infoArray[i].encapsulatedNumber;
                DJPReduce.infoArray[i].jp -= DJP.infoArray[i].jp;
            }

        }

        return DJPReduce;
    }
    return *this;

}

duelingJP duelingJP::operator-(int subtractFromCurrentObject){

    if(subObjectCount > subtractFromCurrentObject) {
        duelingJP DJPReduce(subObjectCount - subtractFromCurrentObject);
        for(int i = 0; i < subObjectCount - subtractFromCurrentObject; i++){

            DJPReduce.infoArray[i].encapsulatedNumber = infoArray[i].encapsulatedNumber;
            DJPReduce.infoArray[i].jp.setNumberToQuery(DJPReduce.infoArray[i].encapsulatedNumber);
            DJPReduce.infoArray[i].upQuery = DJPReduce.infoArray[i].jp.jumpPrimeUp();
            DJPReduce.infoArray[i].downQuery = DJPReduce.infoArray[i].jp.jumpPrimeDown();


        }

        DJPReduce.queryUntilDeactivation();
        for(int i = 0; i < DJPReduce.subObjectCount; i++){
            if(DJPReduce.infoArray[i].encapsulatedNumber > subtractFromCurrentObject) {
                DJPReduce.infoArray[i].encapsulatedNumber -= subtractFromCurrentObject;
                DJPReduce.infoArray[i].jp -= subtractFromCurrentObject;
            }

        }
        return DJPReduce;
    }
    return *this;

}

duelingJP duelingJP::operator-=(duelingJP & DJP){
    totalCollisions = 0;
    totalInversions = 0;
    if(subObjectCount > DJP.subObjectCount) {
        subObjectCount -= DJP.subObjectCount;
        for (int i = 0; i < subObjectCount; i++) {

                if (infoArray[i].upQuery == -1) {
                    infoArray[i].jp.revive();
                }
        }

        tempArray = new jumpPrimeInfo[subObjectCount];

        for (int i = 0; i < subObjectCount; i++) {

            tempArray[i].encapsulatedNumber = infoArray[i].encapsulatedNumber;
            tempArray[i].checkEqual = 0;
            tempArray[i].collisions = 0;
            tempArray[i].inversions = 0;


        }

        delete[] infoArray;
        infoArray = new jumpPrimeInfo[subObjectCount];
        for (int i = 0; i < subObjectCount; i++) {

            infoArray[i].jp.setNumberToQuery(tempArray[i].encapsulatedNumber);
            infoArray[i].encapsulatedNumber = tempArray[i].encapsulatedNumber;
            infoArray[i].upQuery = infoArray[i].jp.jumpPrimeUp();
            infoArray[i].downQuery = infoArray[i].jp.jumpPrimeDown();
            infoArray[i].checkEqual = tempArray[i].checkEqual;
            infoArray[i].collisions = tempArray[i].collisions;
            infoArray[i].inversions = tempArray[i].inversions;

        }
        delete[] tempArray;
        queryUntilDeactivation();
        for(int i = 0; i < subObjectCount; i++) {
            if (tempArray[i].encapsulatedNumber > DJP.infoArray[i].encapsulatedNumber) {
                tempArray[i].encapsulatedNumber -= DJP.infoArray[i].encapsulatedNumber;
                tempArray[i].jp -= DJP.infoArray[i].jp;
            }
        }
    }
    return *this;
}

duelingJP duelingJP::operator-=(int subtractFromCurrentObject){
    totalCollisions = 0;
    totalInversions = 0;
    if(subObjectCount > subtractFromCurrentObject) {
        subObjectCount -= subtractFromCurrentObject;
        for (int i = 0; i < subObjectCount; i++) {

            if (infoArray[i].upQuery == -1) {
                infoArray[i].jp.revive();
            }
        }

        tempArray = new jumpPrimeInfo[subObjectCount];

        for (int i = 0; i < subObjectCount; i++) {

            tempArray[i].encapsulatedNumber = infoArray[i].encapsulatedNumber;
            tempArray[i].checkEqual = 0;
            tempArray[i].collisions = 0;
            tempArray[i].inversions = 0;

        }

        delete[] infoArray;
        infoArray = new jumpPrimeInfo[subObjectCount];

        for (int i = 0; i < subObjectCount; i++) {

            infoArray[i].jp.setNumberToQuery(tempArray[i].encapsulatedNumber);
            infoArray[i].encapsulatedNumber = tempArray[i].encapsulatedNumber;
            infoArray[i].upQuery = infoArray[i].jp.jumpPrimeUp();
            infoArray[i].downQuery = infoArray[i].jp.jumpPrimeDown();
            infoArray[i].checkEqual = tempArray[i].checkEqual;
            infoArray[i].collisions = tempArray[i].collisions;
            infoArray[i].inversions = tempArray[i].inversions;

        }
        delete[] tempArray;
        queryUntilDeactivation();
        for(int i = 0; i < subObjectCount; i++) {
            if (tempArray[i].encapsulatedNumber > subtractFromCurrentObject) {
                tempArray[i].encapsulatedNumber -= subtractFromCurrentObject;
                tempArray[i].jp -= subtractFromCurrentObject;
            }
        }
    }

    return *this;
}

duelingJP duelingJP::operator--(){
    totalCollisions = 0;
    totalInversions = 0;
    if(subObjectCount > 0) {
        for (int i = 0; i < subObjectCount; i++) {
            if (infoArray[i].upQuery == -1) {

                infoArray[i].jp.revive();
            }

        }

        tempArray = new jumpPrimeInfo[subObjectCount - 1];
        for (int i = 0; i < subObjectCount - 1; i++) {

            tempArray[i].encapsulatedNumber = infoArray[i].encapsulatedNumber;
            tempArray[i].inversions = 0;
            tempArray[i].collisions = 0;
            tempArray[i].checkEqual = 0;

        }
        subObjectCount = subObjectCount - 1;
        delete[] infoArray;
        infoArray = new jumpPrimeInfo[subObjectCount];

        for (int i = 0; i < subObjectCount; i++) {

            infoArray[i].encapsulatedNumber = tempArray[i].encapsulatedNumber;
            infoArray[i].inversions = tempArray[i].inversions;
            infoArray[i].collisions = tempArray[i].collisions;
            infoArray[i].checkEqual = tempArray[i].checkEqual;
            infoArray[i].jp.setNumberToQuery(infoArray[i].encapsulatedNumber);
            infoArray[i].upQuery = infoArray[i].jp.jumpPrimeUp();
            infoArray[i].downQuery = infoArray[i].jp.jumpPrimeDown();

        }

        delete[] tempArray;
        queryUntilDeactivation();
        for (int i = 0; i < subObjectCount; i++) {
            if (infoArray[i].encapsulatedNumber > 0) {
                infoArray[i].encapsulatedNumber--;
                infoArray[i].jp--;
            }
        }
    }
    return *this;
}

duelingJP duelingJP::operator--(int postIncrementsNum){
    totalCollisions = 0;
    totalInversions = 0;
    duelingJP oldState = *this;

    if(subObjectCount > 0) {

        for (int i = 0; i < subObjectCount; i++) {
            if (infoArray[i].upQuery == -1) {

                infoArray[i].jp.revive();
            }

        }

        tempArray = new jumpPrimeInfo[subObjectCount - 1];
        for (int i = 0; i < subObjectCount - 1; i++) {

            tempArray[i].encapsulatedNumber = infoArray[i].encapsulatedNumber;
            tempArray[i].inversions = 0;
            tempArray[i].collisions = 0;
            tempArray[i].checkEqual = 0;

        }
        subObjectCount = subObjectCount - 1;
        delete[] infoArray;
        infoArray = new jumpPrimeInfo[subObjectCount];

        for (int i = 0; i < subObjectCount; i++) {

            infoArray[i].encapsulatedNumber = tempArray[i].encapsulatedNumber;
            infoArray[i].inversions = tempArray[i].inversions;
            infoArray[i].collisions = tempArray[i].collisions;
            infoArray[i].checkEqual = tempArray[i].checkEqual;
            infoArray[i].jp.setNumberToQuery(infoArray[i].encapsulatedNumber);
            infoArray[i].upQuery = infoArray[i].jp.jumpPrimeUp();
            infoArray[i].downQuery = infoArray[i].jp.jumpPrimeDown();
        }

        delete[] tempArray;
        queryUntilDeactivation();
        for(int i = 0; i < subObjectCount; i++) {
            if (infoArray[i].encapsulatedNumber > 0) {
                infoArray[i].encapsulatedNumber--;
                infoArray[i].jp--;
            }
        }

    }
    return oldState;
}

bool duelingJP::operator==(const duelingJP& checkEquality){

        return subObjectCount == checkEquality.subObjectCount;

}

bool duelingJP::operator!=(const duelingJP& checkEquality){

      return subObjectCount != checkEquality.subObjectCount;

}

bool duelingJP::operator>(const duelingJP& checkEquality){

    return subObjectCount > checkEquality.subObjectCount &&
    infoArray[0].jp > checkEquality.infoArray[0].jp;

}

bool duelingJP::operator<(const duelingJP& checkEquality){

    return subObjectCount < checkEquality.subObjectCount &&
    infoArray[0].jp < checkEquality.infoArray[0].jp;
}

ostream& operator<<(ostream &out, const duelingJP &DJP){

        out << endl << "Total Collisions: " << DJP.totalCollisions << endl
        << "Total inversions: " << DJP.totalInversions << endl;

        for(int i = 0; i < 2; i++){

            out << endl << "Specific Collisions for jumpPrime: " <<
            DJP.infoArray[i].collisions << endl <<
            DJP.infoArray[i].inversions << endl;
        }

 return out;
}

duelingJP::duelingJP(duelingJP&& src)
{
    totalCollisions = src.totalCollisions;
    totalInversions = src.totalInversions;
    random = src.random;
    subObjectCount = src.subObjectCount;
    infoArray = src.infoArray;
    src.subObjectCount = 0;
    src.infoArray = nullptr;
}

duelingJP& duelingJP::operator=(duelingJP&& src)
{
    swap(subObjectCount, src.subObjectCount);
    swap(totalCollisions, src.totalCollisions);
    swap(totalInversions, src.totalInversions);
    swap(random, src.random);
    for(int i = 0; i < subObjectCount; i++) {
        swap(infoArray[i], src.infoArray[i]);

    }
    return *this;

}

void duelingJP::go(){

    setUpValues();
    queryUntilDeactivation();

}

int duelingJP::getSpecificCollisionCount(int specificJumpPrime) {


    return infoArray[specificJumpPrime].collisions;
}

int duelingJP::getSpecificInversionCount(int specificJumpPrime) {


    return infoArray[specificJumpPrime].inversions;
}

int duelingJP::getTotalCollisionCount() {


    return totalCollisions;

}


int duelingJP::getTotalInversionCount() {


    return totalInversions;

}


void duelingJP::checkForInversions(int iteration) {

    for(int i = 0; i < subObjectCount; i++){

        if(i != iteration){

            if (infoArray[i].upQuery == infoArray[iteration].downQuery) {
                infoArray[iteration].inversions++;
                infoArray[i].inversions++;
                totalInversions++;
            }

            else if (infoArray[i].downQuery == infoArray[iteration].upQuery) {
                infoArray[iteration].inversions++;
                infoArray[i].inversions++;
                totalInversions++;
            }

        }




    }

}

void duelingJP::checkForCollisions(int iteration) {
    for(int i = 0; i < subObjectCount; i++){

        if(i != iteration){

            if (infoArray[i].upQuery == infoArray[iteration].upQuery) {
                infoArray[iteration].collisions++;
                infoArray[i].collisions++;
                totalCollisions++;
            }

            if (infoArray[i].downQuery == infoArray[iteration].downQuery) {
                infoArray[iteration].collisions++;
                infoArray[i].collisions++;
                totalCollisions++;
            }

        }




    }
}




void duelingJP::setUpValues(){

    for(int i = 0; i < subObjectCount; i++){
        infoArray[i].encapsulatedNumber = randomNumberGenerator();
        infoArray[i].jp.setNumberToQuery(infoArray[i].encapsulatedNumber);
        infoArray[i].upQuery = infoArray[i].jp.jumpPrimeUp();
        infoArray[i].downQuery = infoArray[i].jp.jumpPrimeDown();



    }

}

int duelingJP::randomNumberGenerator(){


    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(MINIMUM_QUERY_NUMBER, MAXIMUM_QUERY_NUMBER);

    random = distr(gen);

    return random;
}

void duelingJP::queryUntilDeactivation(){

    for(int i = 0; i < subObjectCount; i++){


        while(infoArray[i].upQuery != -1){



            infoArray[i].upQuery = infoArray[i].jp.jumpPrimeUp();
            infoArray[i].downQuery = infoArray[i].jp.jumpPrimeDown();

            if(infoArray[i].checkEqual != infoArray[i].upQuery && infoArray[i].upQuery != -1){

                checkForCollisions(i);
                checkForInversions(i);

            }

            infoArray[i].checkEqual = infoArray[i].upQuery;



        }



    }



}

// Implementation Invariants
//---------------------------------------------------------------------

// Overloaded operations for jumpPrime will help drive the functionality
// of overloaded operation for duelingJP.

// For non-destructive overloaded operations, a new object is allocated
// and the correct size and data members are set. This new object is then
// returned.

// For destructive overloaded operations, a temporary array is
// allocated so that new data members may be set for the current object.
// the current object is then returned.

// A new encapsulated number will be set for iterations of jumpPrime that do not have data
// members set in a duelingJP object.

// The encapsulated number variable in the duelingJP class for each jumpPrime is meant
// to be an estimate of the true encapsulated number in a jumpPrime.

// As a post-operation, In all instances of addition overloading, the encapsulated jumpPrime numbers
// will equal (encapsulated jumpPrime number + encapsulated jumpPrime number of rightMost operand.

// In instances where integers are added, the encapsulated jumpPrime numbers will equal
// (encapsulated jumpPrime number + integer)

// As a post-operation, In all instances of subtraction overloading, the encapsulated jumpPrime numbers
// will equal (encapsulated jumpPrime number - encapsulated jumpPrime number of rightMost operand.

// In instances where integers are subtracted, the encapsulated jumpPrime numbers will equal
// (encapsulated jumpPrime number - integer)

// Deep copying supported
// Returns to the user, total collisions,
// total inversions, collisions for a specific
// jumpPrime, and inversions for a specific
// jumpPrime.

// Uses a dynamic array of structs
// Each struct holds a jumpPrime object and
// the its relevant info.

// User instantiates the number of jumpPrime objects,
// sending this number to objects constructor.
// This is not a replaceable dependency.

// The client must invoke the go function
// in order to check for collisions and inversions.

// A Random, positive, number between 100 and 50,000 is encapsulated
// in each jumpPrime object.

// Objects are queried until deactivated.

// checked against all other objects
// with every check.

// Checks for collisions and inversions once
// for each jump of a jumpPrime.

// If a jumpPrime used in an operation is inactive, then
// it is revived.



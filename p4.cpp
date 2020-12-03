// Kyle Fraser
// 10/28/2020
// Revision History: Drafted 9/24/2020
//                   Revised 9/25/2020
//                   Revised 9/26/2020
//                   Revised 9/27/2020
//                   Revised 10/26/2020
//                   Revised 10/27/2020
//                   Revised 10/28/2020


// Program Overview
//---------------------------------------------------------------

// This program allows the user to invoke duelingJP objects. Each
// duelingJP object invokes 10 jumpPrime objects but the code may
// easily be modified, adding keyboard prompts so that the user may specify
// how many jumpPrime objects they wish to work with.

// This program counts the total inversions and total inversions for
// each duelingJP object invoked.

// This program also counts the specific inversions and collisions each
// jumpPrime object used.

// User must invoke the go function in order to receive data.

// Assumptions
//----------------------------------------------------------------

// DuelingJP objects may work with the "+","+=","++","-","-=","--",
// "==","!=","<", and ">" operators as specified in the interface invariant.

// jumpPrime overloaded operators are tested through
// duelingJP overloaded operator testing.

// The go function must be invoked prior to the operation
// with objects used as operands
// or with objects used in destructive operations.

// Comparison tests on duelingJP object also rely on a jumpPrime encapsulated number

// The user will invoke the go function in order to get data from
// the program.

// Total inversions and total collisions reflect the total inversions
// and collisions for a duelingJP object.

// Specific inversions and collisions reflect the total inversions
// and collisions for a jumpPrime object.

// Deep copying is supported

// All jumpPrime objects are deactivated once the collisions and
// inversions are checked for.

// duelingJP objects are used once.


#include<iostream>
#include "duelingJP.h"
using namespace std;

void additionOpTest();
void additionAssignOpTest();
void incrementOpTest();
void subtractionOpTest();
void subtractionAssignOpTest();
void decrementOpTest();
void equivalencyOpTest();
void comparisonOpTest();
void streamingOpTest();

const int TEST_NUM1 = 5;
const int TEST_NUM2 = 10;
const int TEST_NUM3 = 15;
const int TEST_NUM4 = 6;
const int TEST_NUM5 = 7;
const int TEST_NUM6 = 8;
const int TEST_NUM7 = 9;
const int TEST_NUM8 = 100;

int main() {

    additionOpTest();
    additionAssignOpTest();
    incrementOpTest();
    subtractionOpTest();
    subtractionAssignOpTest();
    decrementOpTest();
    equivalencyOpTest();
    comparisonOpTest();
    streamingOpTest();

    cout << endl << endl;
    cout << "End of tests";
    cout << endl << endl;

    return 0;

}

void additionOpTest(){

    duelingJP djp1(TEST_NUM2);
    duelingJP djp2(TEST_NUM1);
    djp1.go();
    djp2.go();
    duelingJP djp3 = djp1 + djp2;
    duelingJP djp4(TEST_NUM1);
    djp4.go();

    cout << endl << endl;
    cout << "Now testing addition operations with duelingJP...";
    cout << endl << endl;

    cout << endl << endl;
    cout << "Now testing the addition of 2 duelingJP objects...";
    cout << endl;

    for(int i = 0; i < TEST_NUM3; i++){
        cout << endl;
        cout << i << "th jumpPrime specific inversions: " << djp3.getSpecificInversionCount(i) << endl;
        cout << i << "th jumpPrime specific collisions: " << djp3.getSpecificCollisionCount(i);
        cout << endl;
    }

    cout << endl;
    cout << "Total inversions: " << djp3.getTotalInversionCount() << endl;
    cout << "Total collisions: " << djp3.getTotalCollisionCount();


    cout << endl << endl;
    cout << "Now testing the addition of an integer to a duelingJP object...";
    cout << endl;

    duelingJP djp5 = djp4 + TEST_NUM1;

    for(int i = 0; i < TEST_NUM2; i++){
        cout << endl;
        cout << i << "th jumpPrime specific inversions: " << djp1.getSpecificInversionCount(i) << endl;
        cout << i << "th jumpPrime specific collisions: " << djp1.getSpecificCollisionCount(i);
        cout << endl;
    }

    cout << endl;
    cout << "Total inversions: " << djp1.getTotalInversionCount() << endl;
    cout << "Total collisions: " << djp1.getTotalCollisionCount();
    cout << endl << endl;

}

void additionAssignOpTest(){

    duelingJP djp1(TEST_NUM2);
    duelingJP djp2(TEST_NUM1);

    djp1.go();
    djp2.go();

    djp1 += djp2;

  cout << endl << endl;
  cout << "Now testing assignment addition of duelingJP objects...";
  cout << endl << endl;

  cout << endl << endl;
  cout << "Now testing the assignment addition of a duelingJP to a duelingJP...";
  cout << endl;

    for(int i = 0; i < TEST_NUM3; i++){
        cout << endl;
        cout << i << "th jumpPrime specific inversions: " << djp1.getSpecificInversionCount(i) << endl;
        cout << i << "th jumpPrime specific collisions: " << djp1.getSpecificCollisionCount(i);
        cout << endl;
    }

    cout << endl;
    cout << "Total inversions: " << djp1.getTotalInversionCount() << endl;
    cout << "Total collisions: " << djp1.getTotalCollisionCount();

  cout << endl << endl;
  cout << "Now testing the assignment addition of a duelingJP and an integer...";
  cout << endl;

  duelingJP djp3(TEST_NUM2);
  djp3.go();
  djp3 += TEST_NUM1;

    for(int i = 0; i < TEST_NUM3; i++){
        cout << endl;
        cout << i << "th jumpPrime specific inversions: " << djp1.getSpecificInversionCount(i) << endl;
        cout << i << "th jumpPrime specific collisions: " << djp1.getSpecificCollisionCount(i);
        cout << endl;
    }

    cout << endl;
    cout << "Total inversions: " << djp1.getTotalInversionCount() << endl;
    cout << "Total collisions: " << djp1.getTotalCollisionCount();
    cout << endl << endl;

}


void incrementOpTest(){

    duelingJP djp1(TEST_NUM1);
    djp1.go();

    cout << endl << endl;
    cout << "Now testing increment operations of duelingJP objects...";
    cout << endl << endl;

    cout << endl << endl;
    cout << "Now testing pre-increment operations...";
    cout << endl;

    ++djp1;
    for(int i = 0; i < TEST_NUM4; i++){
        cout << endl;
        cout << i << "th jumpPrime specific inversions: " << djp1.getSpecificInversionCount(i) << endl;
        cout << i << "th jumpPrime specific collisions: " << djp1.getSpecificCollisionCount(i);
        cout << endl;
    }

    cout << endl;
    cout << "Total inversions: " << djp1.getTotalInversionCount() << endl;
    cout << "Total collisions: " << djp1.getTotalCollisionCount();

    cout << endl << endl;
    cout << "Now testing post-increment operations...";
    cout << endl;

    djp1++;
    for(int i = 0; i < TEST_NUM5; i++){
        cout << endl;
        cout << i << "th jumpPrime specific inversions: " << djp1.getSpecificInversionCount(i) << endl;
        cout << i << "th jumpPrime specific collisions: " << djp1.getSpecificCollisionCount(i);
        cout << endl;
    }

    cout << endl;
    cout << "Total inversions: " << djp1.getTotalInversionCount() << endl;
    cout << "Total collisions: " << djp1.getTotalCollisionCount();
    cout << endl << endl;

}

void subtractionOpTest(){

    duelingJP djp1(TEST_NUM2);
    duelingJP djp2(TEST_NUM1);
    djp1.go();
    djp2.go();
    duelingJP djp3 = djp1 - djp2;
    duelingJP djp4(TEST_NUM2);
    djp4.go();

    cout << endl << endl;
    cout << "Now testing subtraction operations with duelingJP...";
    cout << endl << endl;

    cout << endl << endl;
    cout << "Now testing the subtraction of 1 duelingJP object from another...";
    cout << endl;

    for(int i = 0; i < TEST_NUM1; i++){
        cout << endl;
        cout << i << "th jumpPrime specific inversions: " << djp3.getSpecificInversionCount(i) << endl;
        cout << i << "th jumpPrime specific collisions: " << djp3.getSpecificCollisionCount(i);
        cout << endl;
    }

    cout << endl;
    cout << "Total inversions: " << djp3.getTotalInversionCount() << endl;
    cout << "Total collisions: " << djp3.getTotalCollisionCount();


    cout << endl << endl;
    cout << "Now testing the subtraction of an integer from a duelingJP object...";
    cout << endl;

    duelingJP djp5 = djp4 - TEST_NUM1;

    for(int i = 0; i < TEST_NUM1; i++){
        cout << endl;
        cout << i << "th jumpPrime specific inversions: " << djp5.getSpecificInversionCount(i) << endl;
        cout << i << "th jumpPrime specific collisions: " << djp5.getSpecificCollisionCount(i);
        cout << endl;
    }

    cout << endl;
    cout << "Total inversions: " << djp5.getTotalInversionCount() << endl;
    cout << "Total collisions: " << djp5.getTotalCollisionCount();
    cout << endl << endl;


}

void subtractionAssignOpTest(){

    duelingJP djp1(TEST_NUM3);
    duelingJP djp2(TEST_NUM1);

    djp1.go();
    djp2.go();

    djp1 -= djp2;

    cout << endl << endl;
    cout << "Now testing assignment subtraction of duelingJP objects...";
    cout << endl << endl;

    cout << endl << endl;
    cout << "Now testing the assignment subtraction of a duelingJP from a duelingJP...";
    cout << endl;

    for(int i = 0; i < TEST_NUM2; i++){
        cout << endl;
        cout << i << "th jumpPrime specific inversions: " << djp1.getSpecificInversionCount(i) << endl;
        cout << i << "th jumpPrime specific collisions: " << djp1.getSpecificCollisionCount(i);
        cout << endl;
    }

    cout << endl;
    cout << "Total inversions: " << djp1.getTotalInversionCount() << endl;
    cout << "Total collisions: " << djp1.getTotalCollisionCount();

    cout << endl << endl;
    cout << "Now testing the assignment subtraction of an integer from a duelingJP...";
    cout << endl;

    djp1 -= 5;


    for(int i = 0; i < TEST_NUM1; i++){
        cout << endl;
        cout << i << "th jumpPrime specific inversions: " << djp1.getSpecificInversionCount(i) << endl;
        cout << i << "th jumpPrime specific collisions: " << djp1.getSpecificCollisionCount(i);
        cout << endl;
    }

    cout << endl;
    cout << "Total inversions: " << djp1.getTotalInversionCount() << endl;
    cout << "Total collisions: " << djp1.getTotalCollisionCount();
    cout << endl << endl;



}

void decrementOpTest(){

    duelingJP djp1(TEST_NUM2);
    djp1.go();

    cout << endl << endl;
    cout << "Now testing decrement operations with duelingJP objects...";
    cout << endl << endl;

    cout << endl << endl;
    cout << "Now testing pre-decrement operations...";
    cout << endl;
    --djp1;

    for(int i = 0; i < TEST_NUM7; i++){
        cout << endl;
        cout << i << "th jumpPrime specific inversions: " << djp1.getSpecificInversionCount(i) << endl;
        cout << i << "th jumpPrime specific collisions: " << djp1.getSpecificCollisionCount(i);
        cout << endl;
    }

    cout << endl;
    cout << "Total inversions: " << djp1.getTotalInversionCount() << endl;
    cout << "Total collisions: " << djp1.getTotalCollisionCount();

    cout << endl << endl;
    cout << "Now testing post-decrement operations...";
    cout << endl;
    djp1--;

    for(int i = 0; i < TEST_NUM6; i++){
        cout << endl;
        cout << i << "th jumpPrime specific inversions: " << djp1.getSpecificInversionCount(i) << endl;
        cout << i << "th jumpPrime specific collisions: " << djp1.getSpecificCollisionCount(i);
        cout << endl;
    }

    cout << endl;
    cout << "Total inversions: " << djp1.getTotalInversionCount() << endl;
    cout << "Total collisions: " << djp1.getTotalCollisionCount();
    cout << endl << endl;



}

void equivalencyOpTest(){

    duelingJP djp1(TEST_NUM2);
    duelingJP djp2(TEST_NUM2);
    duelingJP djp3(TEST_NUM3);
    djp1.go();
    djp2.go();
    djp3.go();
    bool equivalent;
  cout << endl << endl;
  cout << "Now testing equivalency operators with duelingJP objects...";
  cout << endl << endl;



  cout << endl << endl;
  cout << "Now testing the == operator...";
  cout << endl;
  equivalent = djp1 == djp2;
  cout << endl << endl;
  cout << equivalent;
  cout << endl << endl;

  cout << endl << endl;
  cout << "Now testing the != operator...";
  cout << endl;
  equivalent = djp1 != djp3;
  cout << endl << endl;
  cout << equivalent;
  cout << endl << endl;

}

void comparisonOpTest(){
    duelingJP djp1(TEST_NUM3);
    duelingJP djp2(TEST_NUM2);
    djp1.go();
    djp2.go();
    bool comparison;

    cout << endl << endl;
    cout << "Now testing comparison operators with duelingJP objects...";
    cout << endl << endl;

    cout << endl << endl;
    cout << "Now testing the < operator...";
    cout << endl;

    comparison = djp1 > djp2;
    cout << endl << endl;
    cout << comparison;
    cout << endl << endl;


    cout << endl << endl;
    cout << "Now testing the > operator...";
    cout << endl;

    comparison = djp2 < djp1;
    cout << endl << endl;
    cout << comparison;
    cout << endl << endl;



}

void streamingOpTest(){

    duelingJP djp1(TEST_NUM8);
    djp1.go();
    cout << endl << endl;
    cout << "Now testing the streaming operator for duelingJP...";
    cout << endl << endl;

    cout << endl << endl;
    cout << "Now printing using the streaming operator...";
    cout << endl;

    cout << djp1;

}











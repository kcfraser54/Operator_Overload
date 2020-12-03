// Kyle Fraser
// 10/28/2020
// revision history  drafted 9/13/2020
//                   revised 9/14/2020
//                   revised 9/15/2020
//                   revised 9/16/2020
//                   revised 9/17/2020
//                   revised 9/26/2020
//                   revised 10/21/2020
//                   revised 10/22/2020
//                   revised 10/26/2020


// Interface Invariants
//----------------------------------------------------------------------------

// Overloaded operations for "+","+=","++","-","-=","--","==","!=","<", and ">".

// addition with jumpPrimes is supported using "+". This is non-destructive and returns
// a new jumpPrime object's encapsulated number as the sum of the encapsulated
// numbers of both operands.

// addition with a jumpPrime and an integer is supported using "+". This is non-destructive and
// returns a new jumpPrime's encapsulated number as the sum of the encapsulated number
// of one operand and the integer that is another operand.

// The addition assignment operator is supported using "+=". This is destructive
// and returns the current object. The encapsulated number of this object
// reflects its own encapsulated number + the encapsulated number of the operand.

// The addition assignment operator using an integer is supported using "+=". This is
// destructive and returns the current object. The encapsulated number of this object
// reflects its own encapsulated number + the integer value of the operand.

// The pre-increment operator is supported("++"), adding one to the encapsulated number of the
// current object.

// The post-increment operator is supported("++"), adding one to the encapsulated number of the
// current object.

// subtraction with jumpPrimes is supported using "-". This is non-destructive and returns
// a new jumpPrime object's encapsulated number as the difference of the encapsulated
// numbers of both operands.

// subtraction with a jumpPrime and an integer is supported using "-". This is non-destructive and
// returns a new jumpPrime's encapsulated number as the difference of the encapsulated number
// of one operand and the integer that is another operand.

// The subtraction assignment operator is supported using "-=". This is destructive
// and returns the current object. The encapsulated number of this object
// reflects its own encapsulated number - the encapsulated number of the operand.

// The subtraction assignment operator using an integer is supported using "-=". This is
// destructive and returns the current object. The encapsulated number of this object
// reflects its own encapsulated number - the integer value of the operand.

// The pre-decrement operator is supported("--"), subtracting one from the encapsulated
// number of the current object.

// The post-decrement operator is supported("--"_, subtracting one from the encapsulated
// number of the current object.

// The equivalency operator "==" is supported, returning true when the encapsulated numbers in
// two jumpPrimes are the same.

// The equivalency operator "!=" is supported, returning true when the encapsulated numbers
// in two jumpPrimes are not the same.

// The comparison operator ">" is supported, returning true when the encapsulated number of the
// jumpPrime on the left side is greater than the encapsulated number of the jumpPrime on the right
// side.

// The comparison operator "<" is supported, returning true when the encapsulated number of the
// jumpPrime on the left side is less than the encapsulated number of the jumpPrime on the right
// side.

// Must use a setter method to encapsulate a number and query correctly.

// The number returned from the high prime query will be the closest prime
// above the encapsulated number.

// The number returned from the low prime query will be the closest prime
// below the encapsulated number.

// Deep Copying is supported.

// The user may enter a positive, 4 digit, prime number.
// The user may enter a positive, 4 digit, non-prime number.

// If a prime number is encapsulated, the number will be
// changed so that it is not prime.

// The encapsulated number jumps when all queries have been spent
// A new encapsulated number will be used for queries.

// Returns -2 if a permanently deactivated object is queried

// Returns -1 if a deactivated object is queried

// A query on a deactivated object does not count as a query.
// program notifies the user of a deactivated object by
// returning -1 or -2

// Number sent to the jumpPrime object must be 4 digits and positive
// otherwise a 0 will be returned to the user upon query.

// The client cannot explicitly check if the object is active

// A valid type must be passed to the object. This is enforced by the
// compiler

// Numbers returned from queries will be prime

// Constructor initializes necessary fields upon instantiation.

// The user may only set the encapsulated number once before a reset.
// The user may set a new encapsulated number everytime they reset.

// Queries for the High prime counts as one query
// Queries for the low prime counts as one query

// Class Invariants
//--------------------------------------------------------------------------------------

// The class overloads the "+","+=","++","-","-=","--","==","!=",">", and "<"
// operators

// all overloaded operations explicitly do operations on the encapsulated number
// in jumpPrime.

// Property injection used. The client is responsible to set the encapuslated
// number.

// Individual high and low prime queries count as 1 query.

// The constructor does not take parameters.

// Deep copying is supported.

// Number returned from queries will be the high and low prime numbers
// closest to the encapsulated number.

// Client must send a number into the object that is 4 digits long and
// positive.

// Object must be active to query.

// Queries return a -1 if the object is deactivated.

// Queries return a -2 if the object is permanently deactivated.

// reset encapsulates a new number.

// revive restarts the deactivation count for current
// encapsulated number.

// Encapsulated numbers that are already prime cannot be
// permanently deactivated

// Attempt to revive an active object permanently deactivates the object.


// Pre: None
// Post: Relevent fields are instantiated.
#include "jumpPrime.h"
#include<iostream>
using namespace std;

jumpPrime::jumpPrime()
{
    primeNumberCheck = false;
    userMaySet = true;
    active = true;
    permanentDeactivation = false;
    jumpCount = 0;
    numberToQuery = 0;
    firstPrimeAboveNumber = 0;
    firstPrimeBelowNumber = 0;
    needNewNumber = true;


}

jumpPrime::~jumpPrime()
{

}

jumpPrime::jumpPrime(const jumpPrime &obj)
{

    primeNumberCheck = obj.primeNumberCheck;
    userMaySet = obj.userMaySet;
    active = obj.active;
    permanentDeactivation = obj.permanentDeactivation;
    jumpCount = obj.jumpCount;
    numberToQuery = obj.numberToQuery;
    firstPrimeAboveNumber = obj.firstPrimeAboveNumber;
    firstPrimeBelowNumber = obj.firstPrimeBelowNumber;
    needNewNumber = obj.needNewNumber;


}

jumpPrime& jumpPrime::operator=(const jumpPrime &rhs)
{

    if(this != &rhs){
        primeNumberCheck = rhs.primeNumberCheck;
        userMaySet = rhs.userMaySet;
        active = rhs.active;
        permanentDeactivation = rhs.permanentDeactivation;
        jumpCount = rhs.jumpCount;
        numberToQuery = rhs.numberToQuery;
        firstPrimeAboveNumber = rhs.firstPrimeAboveNumber;
        firstPrimeBelowNumber = rhs.firstPrimeBelowNumber;
        needNewNumber = rhs.needNewNumber;

    }

    return *this;

}

jumpPrime jumpPrime::operator+(const jumpPrime& addNumber){

    jumpPrime yes;
    yes.numberToQuery = numberToQuery;
    yes.numberToQuery += addNumber.numberToQuery;
    return yes;
}

jumpPrime jumpPrime::operator+(int addToCurrentObject){

    jumpPrime yes;
    yes.numberToQuery = numberToQuery;
    yes.numberToQuery += addToCurrentObject;
    return yes;

}

jumpPrime jumpPrime::operator+=(jumpPrime& JP){

    numberToQuery += JP.numberToQuery;
    return *this;
}

jumpPrime jumpPrime::operator+=(int addToCurrentObject){

    numberToQuery += addToCurrentObject;
    return *this;
}

jumpPrime jumpPrime::operator++(){

    numberToQuery++;
    return *this;
}

jumpPrime jumpPrime::operator++(int postIncrementNum){

    jumpPrime oldState = *this;
    numberToQuery++;
    return oldState;
}

jumpPrime jumpPrime::operator-(const jumpPrime& JP){
    jumpPrime yes;
    yes.numberToQuery = numberToQuery;
    if(yes.numberToQuery > JP.numberToQuery) {
        yes.numberToQuery -= JP.numberToQuery;
    }
    return yes;

}

jumpPrime jumpPrime::operator-(int subtractFromCurrentObject){

    jumpPrime yes;
    yes.numberToQuery = numberToQuery;
    if(yes.numberToQuery > subtractFromCurrentObject && subtractFromCurrentObject > 0) {
        yes.numberToQuery -= subtractFromCurrentObject;
    }
    return yes;
}

jumpPrime jumpPrime::operator-=(jumpPrime & JP){

    if(numberToQuery > JP.numberToQuery) {
        numberToQuery -= JP.numberToQuery;
    }
    return *this;
}

jumpPrime jumpPrime::operator-=(int subtractFromCurrentObject){

    if(numberToQuery > subtractFromCurrentObject && subtractFromCurrentObject > 0) {
      numberToQuery -= subtractFromCurrentObject;
    }
    return *this;
}

jumpPrime jumpPrime::operator--(){

    if(numberToQuery > 0) {
      numberToQuery--;
    }
    return *this;
}

jumpPrime jumpPrime::operator--(int postIncrementsNum){

    jumpPrime oldState = *this;
    if(numberToQuery > 0) {
        numberToQuery--;
    }
    return oldState;
}

bool jumpPrime::operator==(const jumpPrime& JP){

    return numberToQuery == JP.numberToQuery;
}

bool jumpPrime::operator!=(const jumpPrime& JP){

    return numberToQuery != JP.numberToQuery;
}

bool jumpPrime::operator>(const jumpPrime& JP){

    return numberToQuery > JP.numberToQuery;
}

bool jumpPrime::operator<(const jumpPrime& JP){

    return numberToQuery < JP.numberToQuery;
}


jumpPrime::jumpPrime(jumpPrime&& src){


    primeNumberCheck = src.primeNumberCheck;
    userMaySet = src.userMaySet;
    active = src.active;
    permanentDeactivation = src.permanentDeactivation;
    jumpCount = src.jumpCount;
    numberToQuery = src.numberToQuery;
    firstPrimeAboveNumber = src.firstPrimeAboveNumber;
    firstPrimeBelowNumber = src.firstPrimeBelowNumber;
    needNewNumber = src.needNewNumber;

    src.primeNumberCheck = false;
    src.userMaySet = false;
    src.active = false;
    src.permanentDeactivation = true;
    src.jumpCount = 0;
    src.numberToQuery = 0;
    src.firstPrimeAboveNumber = 0;
    src.firstPrimeBelowNumber = 0;
    src.needNewNumber = false;




}

jumpPrime& jumpPrime::operator=(jumpPrime&& src){


    swap(primeNumberCheck, src.primeNumberCheck);
    swap(userMaySet, src.userMaySet);
    swap(active, src.active);
    swap(permanentDeactivation, src.permanentDeactivation);
    swap(jumpCount, src.jumpCount);
    swap(numberToQuery, src.numberToQuery);
    swap(firstPrimeBelowNumber, src.firstPrimeBelowNumber);
    swap(firstPrimeAboveNumber, src.firstPrimeAboveNumber);
    swap(needNewNumber, src.needNewNumber);


    return *this;

}


int jumpPrime::jumpPrimeUp()
{

    if (!needNewNumber)
    {

        if (permanentDeactivation)
        {
            firstPrimeAboveNumber = PERMANENTLY_DEACTIVATED_OBJECT;

        }

        else
        {
            active = checkIfActive();
            if (active)
            {

                if (needJump())
                {
                    jump();
                    jumpCount++;


                }

                else
                {
                    queryCount--;
                }

            }

            else if (!active)
            {
                firstPrimeAboveNumber = DEACTIVATED_OBJECT;
            }

        }

    }

    return firstPrimeAboveNumber;


}


int jumpPrime::jumpPrimeDown()
{

    if (!needNewNumber)
    {

        if (permanentDeactivation)
        {
            firstPrimeBelowNumber = PERMANENTLY_DEACTIVATED_OBJECT;
        }

        else
        {
            active = checkIfActive();
            if (active)
            {
                if (needJump())
                {

                    jump();
                    jumpCount++;


                }

                queryCount--;


            }

            else if (!active)
            {
                firstPrimeBelowNumber = DEACTIVATED_OBJECT;

            }

        }



    }

    return firstPrimeBelowNumber;

}

void jumpPrime::setNumberToQuery(int setNumber)
{



    if (userMaySet && setNumber >= MINIMUM_QUERY_NUMBER && setNumber <= MAXIMUM_QUERY_NUMBER)
    {
        numberToQuery = setNumber;

        if(numberToQuery > MAXIMUM_PRIME){
            numberToQuery = MAXIMUM_PRIME - 1;
        }
        else if(numberToQuery < MINIMUM_PRIME){
            numberToQuery = MINIMUM_PRIME + 1;
        }


        firstPrimeAboveNumber = findHighPrime();
        firstPrimeBelowNumber = findLowPrime();

        primeDifference = calculatePrimeDifference();
        queryCount = primeDifference;



        userMaySet = false;
        needNewNumber = false;
    }






}

void jumpPrime::revive()
{

    if (!permanentDeactivation)
    {

        if (checkIfActive())
        {
            permanentDeactivation = true;
        }
        else
        {
            jumpCount = 0;
            firstPrimeAboveNumber = findHighPrime();
            firstPrimeBelowNumber = findLowPrime();
            primeDifference = calculatePrimeDifference();
            queryCount = primeDifference;

            active = true;


        }

    }

}



void jumpPrime::reset()
{
    if (active) {


        primeNumberCheck = false;
        userMaySet = true;
        permanentDeactivation = false;
        jumpCount = 0;
        numberToQuery = 0;
        firstPrimeAboveNumber = 0;
        firstPrimeBelowNumber = 0;
        needNewNumber = true;

    }

}

bool jumpPrime::checkIfActive()
{

    return jumpCount <= JUMPS_BEFORE_DEACTIVATION;

}

int jumpPrime::findHighPrime()
{

    findPrime = numberToQuery;
    primeNumberCheck = isThisPrime(findPrime);

    if(primeNumberCheck){
        numberToQuery -= 1;
        primeNumberCheck = false;
    }



    while (!primeNumberCheck)
    {

        findPrime++;
        primeNumberCheck = isThisPrime(findPrime);

    }

    if(findPrime > MAXIMUM_PRIME)
    {
        findPrime = MAXIMUM_PRIME;
    }


    primeNumberCheck = false;
    return findPrime;

}

int jumpPrime::findLowPrime()
{
    findPrime = numberToQuery;
    primeNumberCheck = isThisPrime(findPrime);
    if (primeNumberCheck){

        numberToQuery += 1;
        primeNumberCheck = false;
    }
    while (!primeNumberCheck)
    {

        findPrime--;
        primeNumberCheck = isThisPrime(findPrime);


    }

    if (findPrime < MINIMUM_PRIME)
    {

        findPrime = MINIMUM_PRIME;

    }
    primeNumberCheck = false;
    return findPrime;

}

bool jumpPrime::isThisPrime(int numberToCheck)
{
    currentNumber = 2;
    factors = 0;
    NumberFirstHalf = numberToCheck / 2;


    while (currentNumber <= NumberFirstHalf)
    {
        if (factors < FACTOR_THRESHOLD)
        {

            if (numberToCheck % currentNumber == 0)
            {
                factors++;

            }

        }
        currentNumber++;
    }

    return factors < FACTOR_THRESHOLD;
}

void jumpPrime::jump()
{

    if(numberToQuery <= MIDDLE_QUERY_NUMBER)
    {
        numberToQuery += primeDifference;
        if(numberToQuery > MIDDLE_QUERY_NUMBER){
            numberToQuery = 19000;
        }

    }

    else if(numberToQuery > MIDDLE_QUERY_NUMBER)
    {
        numberToQuery -= primeDifference;
        if(numberToQuery <= MAXIMUM_QUERY_NUMBER){
            numberToQuery = 200;
        }
    }


    primeNumberCheck = false;

    firstPrimeAboveNumber = findHighPrime();
    firstPrimeBelowNumber = findLowPrime();

    primeDifference = calculatePrimeDifference();
    queryCount = primeDifference;


}


bool jumpPrime::needJump()
{
    return queryCount == 0;
}


int jumpPrime::calculatePrimeDifference()
{
    return firstPrimeAboveNumber - firstPrimeBelowNumber;
}

// Implementation Invariant
//------------------------------------------------------------------------------------

// This class relies on property injection.
// jumpPrime number to query is a replaceable dependency.
// A number must be sent into the jumpPrime Object to enable queries.

// The object must be active to enable a query.

// deactivated once the number of jumps exceeds 5.

// No containers are used.

// Number of queries equals the difference between high and low primes.

// Returns -1 to the user after a query if the object is deactivated.

// Returns -2 to the user after a query if the object is permanently deactivated.


// An encapsulated number that is already prime will be converted to a number that
// is not prime.

// Prime numbers and the deactivation count are stored immediately after the
// user sends a number to the object. Also, the user will not be able to set a new
// number unless they reset.

// Revive resets values but does not reset the encapsulated number.

// Reset may encapsulate a new number.
// reset resets values initialized in the constructor.

// Uses a private helper function to identify if a single number is prime.

// Encapsulated number jumps up if it is between 100 and 9,949.
// Encapsulated number jumps down if it is between 9,950 and 19999.
// Encapsulated numbers will continually jump to 9,950 if they
// are continually revived and jumped.

// If the encapsulated number is greater than the highest prime, then the
// query returns the highest prime.

// If the encapsulated number is lower than the lowest prime, then the
// query returns the lowest prime.

// Returns the closest prime numbers above and below the encapsulated number.

// Deep copying is supported.

// New objects are instantiated for destructive operations.
// Then this new object is returned to reflect the operation.

// For non-destructive operations, the current object will be returned
// with changed data members.

// encapsulated numbers will be between 100 and 20,000




// Kyle Fraser
// 10/28/2020
// Revision History: Drafted 9/20/2020
//                   Revised 9/26/2020
//                   Revised 9/26/2020
//                   Revised 10/21/2020
//                   Revised 10/22/2020
//                   Revised 10/26/2020

#ifndef JUMPPRIME_H
#define JUMPPRIME_H

class jumpPrime{

public:

    // Pre: Object Invoked.
    // Post: Fields for Object instantiated.
    jumpPrime();

    // Pre: None
    // Post: Object Deallocated.
    ~jumpPrime();

    // Pre: None
    // Post: Object copied to another instance.
    jumpPrime(const jumpPrime &obj);

    // Pre: None
    // Post: Object assigned to another instance.
    jumpPrime& operator=(const jumpPrime &rhs);

    // Pre: At least two jumpPrime objects must be instantiated
    // and contain set data members.
    // Post: None
    jumpPrime operator+(const jumpPrime&);

    // Pre: At least 1 jumpPrime objects must be instantiated
    // and contain set data members.
    // Post: None
    jumpPrime operator+(int addToCurrentObject);

    // Pre: 2 jumpPrime object must be instantiated
    // and contain set data members.
    // Post: The encapsulated number will be the sum of
    // the original encapsulated number and the encapsulated number
    // of the operand.
    jumpPrime operator+=(jumpPrime& DJP);

    // Pre: A jumpPrime object must be instantiated
    // and contain set data members.
    // Post: The encapsulated number will be the sum of the original
    // encapsulated number and the integer passed in.
    jumpPrime operator+=(int addToCurrentObject);

    // Pre: A jumpPrime object must be instantiated and
    // contain set data members.
    // Post: The encapsulated number will be 1 more
    // than it was originally.
    jumpPrime operator++();

    // Pre: A jumpPrime object must be instantiated and
    // contain set data members.
    // Post: The encapsulated number will be 1 more
    // than it was originally.
    jumpPrime operator++(int postIncrementNum);

    // Pre: At least 2 jumpPrime objects must be instantiated
    // and contain set data members.
    // Post: None
    jumpPrime operator-(const jumpPrime&);

    // Pre: At least 1 jumpPrime objects must be instantiated
    // and contain set data members.
    // Post: None
    jumpPrime operator-(int subtractFromCurrentObject);

    // Pre: Two jumpPrime objects must be instantiated
    // and contain set data members.
    // Post: The encapsulated number may be the difference between
    // the original encapsulated number and the encapsulated number
    // of the operand.
    jumpPrime operator-=(jumpPrime & DJP);

    // Pre: A jumpPrime object must be instantiated
    // and contain set data members.
    // Post: The encapsulated number may be the difference between the original
    // encapsulated number and the integer passed in.
    jumpPrime operator-=(int subtractFromCurrentObject);

    // Pre: A jumpPrime object must be instantiated and
    // contain set data members.
    // Post: The encapsulated number will be 1 less
    // than it was originally.
    jumpPrime operator--();

    // Pre: A jumpPrime object must be instantiated and contain
    // set data members.
    // Post: The encapsulated number will be 1 less
    // than it was originally.
    jumpPrime operator--(int postIncrementsNum);


    // Pre: Two jumpPrime objects must be instantiated and contain
    // set data members.
    // Post: None
    bool operator==(const jumpPrime&);

    // Pre: Two jumpPrime objects must be instantiated
    // and contain set data members.
    // Post: None
    bool operator!=(const jumpPrime&);

    // Pre: Two jumpPrime objects must be instantiated
    // and contain set data members.
    // Post: None
    bool operator>(const jumpPrime& JP);

    // Pre: Two jumpPrime objects must be instantiated
    // and contain set data members.
    // Post: None
    bool operator<(const jumpPrime& JP);



    // Pre: None
    // Post: Object copied to another instance.
    // allocated memory is stolen.
    jumpPrime(jumpPrime&& src);

    // Pre: None
    // Post: Object assigned to another instance.
    // allocated memory is stolen.
    jumpPrime& operator=(jumpPrime&& src);

    // Pre: jumpPrime object must be active
    // Post: primeNumberCheck is set to false, the user may set another number,
    // the object is active, deactivation count is restarted, prime numbers are zeroed out.
    void reset();

    // Pre: None
    // Post: Deactivation count will be restarted, prime numbers will be stored
    // using the current number being queried.
    void revive();

    // Pre: None
    // Post: Number from client will be encapsulated in the JumpPrime object.
    // Prime numbers will be initialized and the deactivation count is initialized.
    void setNumberToQuery(int setNumber);

    // Pre: None
    // Post: Object may be deactivated.
    int jumpPrimeDown();

    // Pre: None
    // Post: Object may be deactivated.
    int jumpPrimeUp();


private:

    // Pre: None
    // Post: None
    int calculatePrimeDifference();

    // Pre: The user must query to find the first prime number below the
    // number being queried.
    // Post: primeNumberCheck is set to false, allowing for further queries.
    int findLowPrime();

    // Pre: The user must query to find the first prime number above
    // the number being queried.
    // Post: primeNumberCheck is set to false, Allowing for further queries.
    int findHighPrime();

    // Pre: None
    // Post: None
    bool needJump();

    // Pre: Requires an integer.
    // Post: None
    bool isThisPrime(int numberToCheck);

    // Pre: None
    // Post: None
    bool checkIfActive();

    // Pre: The object must need to jump.
    // Post: The number being queried, higher prime, lower prime, and
    // number of queries remaining are altered.
    void jump();

    const int FACTOR_THRESHOLD = 1;
    const int PERMANENTLY_DEACTIVATED_OBJECT = -2;
    const int DEACTIVATED_OBJECT = -1;
    const int MINIMUM_QUERY_NUMBER = 100; // change to 100
    const int MIDDLE_QUERY_NUMBER = 9950;  // change to 24,950
    const int MAXIMUM_QUERY_NUMBER = 20000; // change to 50,000
    const int JUMPS_BEFORE_DEACTIVATION = 5;
    const int MAXIMUM_PRIME = 19997; // change to reflect correct maximum prime
    const int MINIMUM_PRIME = 101; // change to reflect correct minimum prime

    int firstPrimeAboveNumber;
    int firstPrimeBelowNumber;
    int numberToQuery;
    int primeDifference;
    int queryCount;
    int NumberFirstHalf;
    int factors;
    int jumpCount;
    int currentNumber;
    int findPrime;

    bool userMaySet;
    bool primeNumberCheck;
    bool active;
    bool permanentDeactivation;
    bool needNewNumber;

};





#endif

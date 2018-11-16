#include <iostream>
#include <stdio.h>
#include "item02.h"

#define CONSTANT_RATIO 1.243      // a compiler will not even know the name CONSTANT_RATIO => the pre-compiler does the work before
const double AspectRatio = 1.243; // a better way because the compiler can optimize memory; ==> MACRO definition

const char * const authorName = "Test  ters"; // why using 2 consts? -> see item03
const std::string authorNameBetter("Test...ters - stronger"); // preferable method

using namespace std;
using namespace EffectiveCpp;

#define CALL_WITH_MAX(a, b) print_two_numbers((a)>(b) ? (a) : (b));

void print_two_numbers(int num)
{
    printf("Value =  %d\n", num);
}

int main()
{
    GamePlayer gp;

//    const int GamePlayer::NumTurns; // a definition

    cout << "Hello World!" << endl;

    gp.print();

    cout << "The current FudgeFactor is " << CostEstimate::FudgeFactor << endl;

    cout << "The name of author is: " << authorName << endl
         << "Or using object is: " << authorNameBetter.c_str() << endl;

    int a = 5, b = 0;

    CALL_WITH_MAX(++a, b);
    printf("A = %d, B = %d\n", a, b);       // a increased TWICE because it is processed 2 times

    /// this will actually be replaced with :
    /// 1. (++a) > (b) => TRUe
    /// 2. print_two_numbers(++a)

    CALL_WITH_MAX(++a, b+10);               // a increased ONCE
    /// this will actually be replaced with :
    /// 1. (++a) < (b+10) => FALSE
    /// 2. print_two_numbers(b+10)

    printf("A = %d, B = %d\n", a, b);

    cout << "For this reason: " << endl
         << "\t 1. For simple constants, prefer const OBJECTS or ENUMS than #defines" << endl
         << "\t 2. For function-like macro, prefer INLINE function (item 30)" << endl;

    return 0;
}


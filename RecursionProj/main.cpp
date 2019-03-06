//
//  main.cpp
//  RecursionProj
//
//  Created by Rivas, Angela on 3/6/19.
//  Copyright © 2019 CTEC CSP. All rights reserved.
//

#include <iostream>
using namespace std;

int fib(long number)
{
    if(number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return fib(number-1) + fib(number -2);
    }
}
double fact (int numb)
{
    if (numb ==1 || numb == 0)
    {
        return 1;
    }
    else
    {
        return numb * fact(numb - 1);
    }
}
int main()
{
    // insert code here...
    int number = 10;
    for(int index = 0; index < 50; index++)
    {
//    cout<< "The Fibonacci sequence at" << number << "is: " << fib(number) << endl;
    cout<< "The Factorial sequence at" << number << "is: " << fib(number) << endl;
    }
    return 0;
}

//
//  main.cpp
//  RecursionProj
//
//  Created by Rivas, Angela on 3/6/19.
//  Copyright © 2019 CTEC CSP. All rights reserved.
//

#include <iostream>
using namespace std;

long fib(long number)
{
    if (number <= 1)
    {
        return 1;
    }
    else
    {
        long prev = 1;
        long current = 1;
        
        for(int i = 2; i < number; i++)
        {
            long temp = current;
            current += prev;
            prev = temp;
        }
        return current;
    }
    
//    if(number == 0 || number == 1)
//    {
//        return 1;
//    }
//    else
//    {
//        return fib(number-1) + fib(number -2);
//    }
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
    for(int index = 10; index < 50; index++)
    {
    cout<< "The Fibonacci sequence at " << index << " is: " << fib(index) << endl;
//    cout<< "The Factorial sequence at" << number << "is: " << fib(number) << endl;
    }
    return 0;
}

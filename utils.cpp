//
// Created by nadya on 10.12.2018.
//

#include "utils.h"

bool isPrime(int x)
{
    bool is_prime = true;
    for (int i = 2; i < x; i++)
    {
        int factor = x/i;
        if (factor * i == x)
        {
            cout << "Find factor " << factor << endl;
            is_prime = false;
            break;
        }
    }
    return is_prime;
}
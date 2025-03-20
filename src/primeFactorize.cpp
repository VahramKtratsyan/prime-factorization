#include <vector>

bool is_prime(int n) //return true if n is prime else false.
{
    for (int i = 3; i * i <= n; ++i) //in primeFactorize it ensures that n must be odd
        if (n % i == 0)              //thats why loops starts from 3 and not 2
            return false;
    return true;
}

std::vector<int> primeFactorize(int n)
{
    std::vector<int> result;
    int current_prime_number = 2;
    while (n > 1)
    {
        if (n % current_prime_number == 0)
        {
            result.push_back(current_prime_number);
            n /= current_prime_number;
        }
        
        else
        {
            int next_prime_number = (current_prime_number == 2) ? 3 : current_prime_number + 2;
            while (!is_prime(next_prime_number)) //the loop is prepared for searching next prime number                                 
                next_prime_number += 2;                                                        
            current_prime_number = next_prime_number; 
        }
    }
    return result;
}
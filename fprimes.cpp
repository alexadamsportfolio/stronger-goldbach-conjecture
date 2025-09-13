// Necessary imports
#include <bits/stdc++.h>
using namespace std;


// Prime number algorithm
vector<bool> sieve(int n) {


    // Create a boolean vector of n elements with all elements true
    vector<bool> primes(n + 1, true);


    // Since 0 and 1 is not prime, mark them false
    primes[0] = primes[1] = false;


    // Mark all the multiples of numbers from 2 to sqrt(n) as false
    for (int i = 2; i * i <= n; i++) {
        if (primes[i]) {
            for (int j = i * i; j <= n; j += i)
                primes[j] = false;
        }
    }
	

  	// Return the vector that contains all the prime numbers
  	return primes;
}


// Main
int main(int argc, char** argv) {


    // Set the user's parameter
    int n = atoi(argv[1]);


  	// Get all the primes numbers up to n
    vector<bool> primes = sieve(n);


    // Instantiation of the set consisting of the values which my conjecture holds to be the entire set of integers
    set<int> fprimes;


    // Calculate the minimum number of steps away from half of an even number you need to take before getting a sum of two equidistant primes
    for (int i = 6; i <= 2*n; i += 2) {
        for (int j = 1-(i/2)%2; j <= i/2; j+=2) {
          if (primes[i/2-j] && primes[i/2+j]) {
            fprimes.insert(j);
            fprimes.insert(-j);
            cout << j << " ";
            break;
          }
        }
    }


    // Separate the two sections of the output
    cout << "\n=================================================\n";


    // Print the fprimes set
    for (int num : fprimes) {
        cout << num << " ";
    }


    return 0;
}
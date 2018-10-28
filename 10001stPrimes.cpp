#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> primes;
    primes.push_back(2);
    for(int i = 3; primes.size() <= 10000; i++){
        bool isPrime = true;
        vector<int>::iterator it;
        for(it = primes.begin(); it != primes.end(); it++)
        {
            if(i % *it == 0)
                isPrime = false;
        }
        if(isPrime)
            primes.push_back(i);
    }
    
    for(int a = 0; a < t; a++){
        int n;
        cin >> n;
        cout << primes.at(n - 1) << endl;
    }
    return 0;
}

#include <cmath>
#include <vector>
#include <iostream>
using namespace std;

int logarithm(int base, int x) {
    return static_cast<int>(log(x)/log(base)); 
}

void getPrimes(vector<int> &primes){    
    int aux[41] = {0};
    for (int i = 2; i<=40;i++) { // 0 and 1 are NOT primes (Foundamental Theorem of Arithmetic)
        if (aux[i] == 0) {
            primes.push_back(i);
            for (int j = i*i; j<=40; j+=i) {
                aux[j] = 1;
            }
        }
    }
}


int main() {
    int t,n;
    long long result;
    vector<int> primes;
    getPrimes(primes);

    cin >> t;
    while(t--) {
        cin >> n;
        result = 1;
        for (vector<int>::iterator i = primes.begin(); i != primes.end(); ++i) {
            if (*i > n) {break;}
            result *= pow(*i,logarithm(*i,n));
        }
        cout << result << endl;
    }    
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        long long result = -1;
        for(int x = 1; x <= n / 3; x++){
            int y = (n * n - 2 * n * x)/(2 * n - 2 * x);
            int z = n - x - y;
            if(x * x + y * y == z * z){
                if(x * y * z > result) 
                    result = x * y * z;
            }
        }
        cout << result << endl;
    }
    return 0;
}

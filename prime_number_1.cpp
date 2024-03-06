// C++ program to check if a number is prime or not using a nested for loop

#include <iostream>
using namespace std;

int main()
{
    int n, i, j, flag = 0;
    cout << "Enter a positive integer: ";
    cin >> n;

    
    if (n == 0 || n == 1) {
        cout << n << " is not a prime number.";
    }
    else {
        
        for (i = 2; i <= n / 2; ++i) {
        
            for (j = 2; j <= i / 2; ++j) {
                if (i % j == 0) {
                    
                    flag = 1;
                    break;
                }
            }
            
            if (flag == 0) {
            
                if (n % i == 0) {
                    
                    cout << n << " is not a prime number.";
                    break;
                }
            }
        
            flag = 0;
        }
        if (i > n / 2)
            cout << n << " is a prime number.";
        }
}


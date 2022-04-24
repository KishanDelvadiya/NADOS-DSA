/*
Sample Input
5
13
2
3
4
5

Sample Output
prime
prime
prime
not prime
prime

*/

#include <iostream>
using namespace std;


// void isPrime(int );
void isPrime(int n)
{
    for (int i = 2; i*i <= n; ++i)
    {
        if (n%i==0)
        {
            cout << "not prime\n";
            return;
        }
    }
    cout<<"prime\n";
    return;
}
int main(){
    int t;
    cin >> t;

    //write your code here
    while (t--)
    {
        int n;
        cin >> n;
        isPrime(n);
    }
}

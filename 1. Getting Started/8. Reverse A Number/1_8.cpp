#include <iostream>
using namespace std;

void printRevDigits(int );

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    printRevDigits(n);
}

void printRevDigits(int n)
{
    while (n)
    {
        cout << n % 10 << "\n";
        n = n / 10;
    }
}

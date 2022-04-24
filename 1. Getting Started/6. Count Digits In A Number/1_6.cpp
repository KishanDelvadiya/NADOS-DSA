#include <iostream>
using namespace std;

void countDigits(int );

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    countDigits(n);
    
}

void countDigits(int n)
{
    int cnt = 0;
    while (n)
    {
        cnt++;
        n = n / 10;
    }
    cout << cnt;
}

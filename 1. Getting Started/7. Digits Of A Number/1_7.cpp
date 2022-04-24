#include <iostream>
using namespace std;

int countDigits(int );
void printDigits(int );

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    printDigits(n);
}

void printDigits(int n)
{

    if(n==0)
        return;

    int rem = n % 10;

    // recur-call
    printDigits(n/10);
    cout << rem << "\n";
}

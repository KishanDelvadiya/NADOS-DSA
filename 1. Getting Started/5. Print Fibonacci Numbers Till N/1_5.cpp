#include <iostream>
using namespace std;

void Fibonacci(int );

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    
    //write your code here
    Fibonacci(n);
    
}

void Fibonacci(int n)
{
    int f = 0, s = 1, t;
    for (int i = 0; i < n; ++i)
    {
        cout << f << "\n";
        t = f;
        f = s;
        s = s + t;
    }

}

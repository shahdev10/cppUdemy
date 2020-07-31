#include<iostream>

using namespace std;

void calculate(int);
int fibonacci(int);

int main ()
{
    cout << "Enter number of terms: ";
    int terms;
    cin >> terms;
    calculate(terms);
}

void calculate(int terms)
{
    for (int i = 1; i <= terms; i++)
    {
        int result = fibonacci(i);
        cout << result << " ";
    }
}

int fibonacci(int n)
{
    if (n <= 2)
    {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

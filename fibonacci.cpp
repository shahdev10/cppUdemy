#include<iostream>

using namespace std;

int main ()
{
    int t1 = 0;
    int t2 = 1; 
    int nextTerm = 0;
    int num; 
    cout << "Enter the number of terms you want displayed: ";
    cin >> num;
    cout << endl;

    cout << "0 ";

    if (num >= 2)
    {
        cout << "1 ";
    }

    nextTerm = t1 + t2; //nextTerm = 1
    t1 = t2;         //t1 = 1
    t2 = nextTerm;   // t2 = 1

    if (num > 2)
    {
        int i = 3;
        while (i <= num)
        {
            cout << nextTerm << " "; // prints 1
            nextTerm = t1 + t2; //nextTerm = 2
            t1 = t2; //t1 = 1
            t2 = nextTerm; // t2 = 2
            i++;
        }
    }
    cout << endl;
}



#include<iostream>
#include<string>

using namespace std;

int main () 
{
     string input;
     cout << "Enter a string: ";
     cin >> input;
     cout << endl;

     size_t strLen = input.length();
     
     for (int i = 0; i < strLen; i++)
     {
        size_t numOfSpace = strLen - i - 1; 
        while (numOfSpace > 0)
        {
            cout << " ";
            numOfSpace--;
        }
        int count = -2;
        for (int j = 0; j <= i; j++)
        {
            cout << input.at(j);
            count++;
        }
        for (int k = count; k >=0; k--)
        {
            cout << input.at(k);
        }
        cout << endl;
     }





}

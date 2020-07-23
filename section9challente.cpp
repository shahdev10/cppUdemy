#include<iostream>
#include<vector>

using namespace std;

int main()
{
    char input;
    vector <int> list;
    while (input != 'q' || input != 'Q')
    {
        cout << "P - Print Numbers \n A - Add a number \n M - Display mean of numbers";
        cout << endl;
        cout << "S - Display smallest number\n L - Display largest number\n";
        cout << " Q - Quit" << endl << endl << "Enter your choice: ";
        cin >> input; 
        cout << endl;

        switch (input)
        {
            case 'p' : case 'P':
            {
                if (list.size != 0)
                {
                    for (int i = 0; i < list.size() - 1; i++)
                        {
                            cout << list.at(i) << endl;
                        }
                }
                else 
                {
                    cout << "The list is empty \n";
                }
            }
            case 's' : case 'S':
            {
                
            }
        }

    }
}


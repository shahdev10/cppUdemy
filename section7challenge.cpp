/* Declare 2 empty vectors of integers named vector1 and vector2
 *
 * add 10 and 20 to vector1 dynamically using pushback
 * Display the elements in vector1 using the at() method as well as its size using the size() method
 *
 * Add 100 and 200 to vector2 dynamically using pushback
 * Display the elements in vector2 using the at() method as well as its size using the size() method
 *
 * Declare an empty 2D vector called vector_2d
 * Remember, that a 2D vector is a vector of vector<int>
 *
 * Add vector1 to vector_2d dynamically using pushback
 * Add vector2 to vector_2d dynamically using push_back
 *
 * Display the elements in vector_2d using the at() method
 *
 * Change vector1.at(0) to 1000
 * 
 * Display the elements in vector_2d again using the at() method
 *
 * display the elements in vector 1
 * */

#include<iostream>
#include<vector>

using namespace std;

int main ()
{
    vector<int> vector1;
    vector<int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "Vector 1 elements: " << vector1.at(0) << endl << vector1.at(1) << endl;
    cout << "Vector 1 size: " << vector1.size() << endl << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "Vector 2 elements: " << vector2.at(0) << endl << vector2.at(1) << endl;
    cout << "Vector 2 size: " << vector2.size() << endl << endl;

    vector<vector<int> > vector2D;
    vector2D.push_back(vector1);
    vector2D.push_back(vector2);

    cout << "2D Vector elements: " << vector2D.at
}


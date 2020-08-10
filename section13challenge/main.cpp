#include<iostream>
#include"movies.h"

using namespace std;

void increment_watched(Movies &movies, string name);
void add_movie(Movies &movies, string name, string rating, int watched);

void increment_watched(Movies &movies, string name)
{
    if (movies.increment_watched(name))
    {
        cout << name << " watch incremented" << endl;
    }
    else
    {
        cout << name << " not found" << endl;
    }
}

void add_movie(Movies &movies, string name, string rating, int watched)
{
    if (movies.add_movie(name, rating, watched))
    {
        cout << name << " added" << endl;
    }
    else
    {
        cout << name << " already exists" << endl;
    }
}

int main()
{
Movies my_movies;
my_movies.display;

add_movie(my_movies, "Big", "PG", 4);
add_movie(my_movies, "Cinderella", "PG", 10);

my_movies.display;

increment_watched(my_movies, "Big");
increment_watched(my_movies, "Incredibles");

my_movies.display;
return 0;
}

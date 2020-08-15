#ifdef _MOVIES_H_
#define _MOVIES_H_

#include<string>
#include<vector>
#include"movie.h"

class Movies
{
private:
    std::vector<Movie> movies;

public:
    Movies();
    ~Movies();

    bool add_movie(std::string name, std::string rating, int watched);
    bool increment_watched(std::string name);
    void display() const;
}

#endif

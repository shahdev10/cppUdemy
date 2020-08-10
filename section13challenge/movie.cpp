#include<iostream>
#include "movie.h"

Movie::Movie(std::string name, std::string rating, int watched)
    : name(name), rating(rating), watched(watched) {}

Movie::Movie(const Movie &source)
    : Movie{source.name, source.rating, source.watched} {}

Movie::~Moive() {}

void Movie::display() const
{
    std::cout << "Name: " << name << ", Rating: " << rating << ", Watched: " << watched << std::endl;
}

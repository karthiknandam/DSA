#ifndef MOVIES_H
#define MOVIES_H

#include "Movie.h"
#include <vector>

class Movies { 
private:
    std::vector<Movie> movies;

public:
    Movies();
    ~Movies();

    bool add_movie(std::string &_name, std::string &_rating, int &_count);
    bool increment_count(const std::string &_name);
    void display() const;
};

#endif

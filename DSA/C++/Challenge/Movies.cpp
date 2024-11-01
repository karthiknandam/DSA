#include "Movies.h"
#include <iostream>

Movies::Movies() { }
Movies::~Movies() { }

bool Movies::add_movie(std::string &_name, std::string &_rating, int &_count) { 
    for (const Movie &movie : movies) { 
        if (movie.getName() == _name) return false;
    }
    Movie temp{_name, _rating, _count};
    movies.push_back(temp);
    return true;
}

bool Movies::increment_count(const std::string &_name) { 
    for (Movie &movie : movies) { 
        if (movie.getName() == _name) { 
            movie.increment_count();
            return true;
        }
    }
    return false;
}

void Movies::display() const { 
    for (const Movie &movie : movies) { 
        std::cout << movie.getName() << std::endl;
        std::cout << movie.getRating() << std::endl;
        std::cout << movie.getCount() << std::endl;
    }
}

#include <iostream>
#include "Movies.h"

void increment_count(Movies &movies, std::string name);
void add_movie(Movies &movies, std::string name, std::string rating, int count);

void increment_count(Movies &movies, std::string name) { 
    if (movies.increment_count(name)) { 
        std::cout << "Incremented" << std::endl;
    } else { 
        std::cout << "Do not take place [Not found]" << std::endl;
    }
}

void add_movie(Movies &movies, std::string name, std::string rating, int count) { 
    if (movies.add_movie(name, rating, count)) {
        std::cout << "Movie is added" << std::endl;
    } else { 
        std::cout << "Movie is already there" << std::endl;
    }
}

int main() { 
    Movies my_movies;

    add_movie(my_movies, "JW 1", "A", 1);
    add_movie(my_movies, "JW 2", "A", 1);
    add_movie(my_movies, "JW 3", "A", 1);
    my_movies.display();

    return 0;
}
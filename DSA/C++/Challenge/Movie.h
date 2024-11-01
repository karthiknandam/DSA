#ifndef MOVIE_H
#define MOVIE_H

#include <string>

class Movie { 
private:
    std::string name;
    std::string rating;
    int count;

public:
    // Constructor
Movie(std::string &_name, std::string &_rating, int &_count);
    // Destructor
    ~Movie();

    // Getters
    std::string getRating() const { return rating; }
    int getCount() const { return count; }
    std::string getName() const { return name; }

    // Method to increment count
    void increment_count() { ++count; }
};

#endif

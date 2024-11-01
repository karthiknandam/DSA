#include <iostream>
#include <vector>
#include <string>

class Movie {
private:
    std::string name;
    std::string rating;
    int count;

public:
    // Constructor
    Movie(std::string _name, std::string _rating, int _count = 1)
        : name(_name), rating(_rating), count(_count) {}

    // Getters
    std::string getName() const { return name; }
    std::string getRating() const { return rating; }
    int getCount() const { return count; }

    // Increment count
    void increment_count() { ++count; }
};

class Movies {
private:
    std::vector<Movie> movies;

public:
    // Add a movie to the collection
    bool add_movie(const std::string& _name, const std::string& _rating, int _count = 1) {
        for (const Movie& movie : movies) {
            if (movie.getName() == _name) {
                return false; // Movie already exists
            }
        }
        movies.push_back(Movie(_name, _rating, _count));
        return true;
    }

    // Increment the watch count for a specific movie
    bool increment_count(const std::string& _name) {
        for (Movie& movie : movies) {
            if (movie.getName() == _name) {
                movie.increment_count();
                return true;
            }
        }
        return false; // Movie not found
    }

    // Display all movies in the collection
    void display() const {
        for (const Movie& movie : movies) {
            std::cout << "Name: " << movie.getName() << std::endl;
            std::cout << "Rating: " << movie.getRating() << std::endl;
            std::cout << "Watch Count: " << movie.getCount() << std::endl;
            std::cout << "-----------------------------" << std::endl;
        }
    }
};

// Helper functions
void add_movie(Movies& movies, const std::string& name, const std::string& rating, int count) {
    if (movies.add_movie(name, rating, count)) {
        std::cout << "Movie added successfully." << std::endl;
    } else {
        std::cout << "Movie already exists." << std::endl;
    }
}

void increment_count(Movies& movies, const std::string& name) {
    if (movies.increment_count(name)) {
        std::cout << "Watch count incremented." << std::endl;
    } else {
        std::cout << "Movie not found." << std::endl;
    }
}

int main() {
    Movies my_movies;

    // Adding movies to the collection
    add_movie(my_movies, "JW 1", "A", 1);
    add_movie(my_movies, "JW 2", "A", 1);
    add_movie(my_movies, "JW 3", "A", 1);

    // Displaying all movies
    my_movies.display();

    // Incrementing watch count for a movie
    increment_count(my_movies, "JW 2");
    my_movies.display();

    return 0;
}

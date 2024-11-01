#include "Movie.h"

Movie::Movie(std::string &_name, std::string &_rating, int &_count)
    : name{_name}, rating{_rating}, count{_count} { }


Movie::~Movie() { }

#include "Movie.h"

using namespace std;

Movie::Movie(char* title, int year, char* director, int duration, int rating) {
  this->director = new char[strlen(director) + 1]; //convert to cstring of needed size
  strcpy(this->director, director); //copy the passed in director into our object's director
  this->duration = duration; //copy passed in duration into object's duration
  this->rating = rating; 
}

Movie::~Movie() {
  delete[] director;
}

void Movie::print() {
  cout << "Movie:" << title << ", Year: " << year << ", Director: " << director << ", Duration: " <<
    duration << " minutes, Rating: " << rating << endl;
}

char* Movie::getDirector() {
  return director;
}

int Movie::getDuration() {
  return duration;
}

int Movie::getRating() {
  return rating;
}


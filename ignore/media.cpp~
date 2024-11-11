#include "Media.h"

using namespace std;

Media::Media(char* title, int year) {
  this->title = new char[strlen(title) + 1]; //convert to cstring of needed size
  strcpy(this->title, title); //copy the passed in title into our object's title
  this->year = year; //copy passed in year into object's year
}

Media::~Media() {
  delete[] title;
}

virtual void print() {
  cout << "Unknown media type..." << endl;
}

char* Media::getTitle() {
  return title;
}

int Media::getYear() {
  return year;
}

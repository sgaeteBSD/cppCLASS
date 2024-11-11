#include "Media.h"

#include "Game.h"
#include "Movie.h"
#include "Music.h"

#include <vector>

using namespace std;

void add(vector<Media*> &med);
void search(vector<Media*> &med);
//void deleter(vector<Media*> &med);
//void quit(vector<Media*> &med, bool &input);

int main() {

  vector<Media*> med;
  /*char* temp = new char[80];
  char* temp2 = new char[80];
  strcpy(temp, "Game1");
  strcpy(temp2, "Publisher1");
  Game* game1 = new Game(temp, 2006, temp2, 9);
  med.push_back(game1);
  cout << med[0]->getTitle() << endl;
  */
  
  bool input = true;
  while (input == true) {

    cout << "Input a command." << endl;
    char command[6] = "";

    cin >> command;
    cin.ignore();

    if (strcmp(command, "ADD") == 0) {
      add(med);
      input = true; //run command loop again
    }
    else if (strcmp(command, "SEARCH") == 0) {
      search(med);
      input = true;
    }
    else if (strcmp(command, "DELETE") == 0) {
      //deleter(med);
      input = true;
    }
    else if (strcmp(command, "QUIT") == 0) {
      //quit(med, input);
    }
    else { //if command isn't 1 of the 4
      cout << "Invalid input! Try again." << endl;
    }
  }
  cout << "hello" << endl;
  return 0;
}

void add(vector<Media*> &med) {
  cout << "GAME. MOVIE, or MUSIC?" << endl;
  char medType[5] = "";
  char tempTitle[80];
  int tempYear;
  cin >> medType;
  cin.ignore();

  if (strcmp(medType, "GAME") == 0) {
    char tempPub[80];
    int tempRat;
    cout << "Title?" << endl;
    cin.getline(tempTitle, 80, '\n');
    cout << "Year?" << endl;
    cin >> tempYear;
    cin.ignore();
    cout << "Publisher?" << endl;
    cin.getline(tempPub, 80, '\n');
    cout << "Rating? (out of 10)" << endl;
    cin >> tempRat;
    cin.ignore();

    Game* nGame = new Game(tempTitle, tempYear, tempPub, tempRat);
    med.push_back(nGame);
    nGame->print();
  }
  else if (strcmp(medType, "MOVIE") == 0) {
    char tempDirector[80];
    int tempDur;
    int tempRat;
    cout << "Title?" << endl;
    cin.getline(tempTitle, 80, '\n');
    cout << "Year?" << endl;
    cin >> tempYear;
    cin.ignore();
    cout << "Director?" << endl;
    cin.getline(tempDirector, 80, '\n');
    cout << "Duration (minutes)?" << endl;
    cin >> tempDur;
    cin.ignore();
    cout << "Rating? (out of 10)" << endl;
    cin >> tempRat;
    cin.ignore();

    Movie* nMovie = new Movie(tempTitle, tempYear, tempDirector, tempDur, tempRat);
    med.push_back(nMovie);
    nMovie->print();
  }
  else if (strcmp(medType, "MUSIC") == 0) {
    char tempArtist[80];
    char tempPub[80];
    int tempDur;
    cout << "Title?" << endl;
    cin.getline(tempTitle, 80, '\n');
    cout << "Year?" << endl;
    cin >> tempYear;
    cin.ignore();
    cout << "Artist?" << endl;
    cin.getline(tempArtist, 80, '\n');
    cout << "Publisher?" << endl;
    cin.getline(tempPub, 80, '\n');
    cout << "Duration (minutes)?" << endl;
    cin >> tempDur;
    cin.ignore();

    Music* nMusic = new Music(tempTitle, tempYear, tempArtist, tempPub, tempDur);
    med.push_back(nMusic);
    nMusic->print();
  }
  else {
    cout << "uh oh" << endl;
  }
}

void search(vector<Media*> &med) {
  cout << "Would you like to search by TITLE or YEAR?" << endl;
  char selector[5] = "";
  cin >> selector;
  cin.ignore();
  if (strcmp(selector, "TITLE") == 0) {
    char searcher[80];
    cin.getline(searcher, 80, '\n');
    for (auto it = med.begin(); it != med.end(); ++it) { //iterator to look through vect
      if (strcmp((*it)->getTitle(), searcher)) {
	(*it)->print();
      }
    }
  }
  
  
}

  /*char* temp = new char[80];
  char* temp2 = new char[80];
  strcpy(temp, "Game1");
  strcpy(temp2, "Publisher1");
  Game* game1 = new Game(temp, 2006, temp2, 9);
  med.push_back(game1);
  cout << med[0]->getTitle() << endl;
  */

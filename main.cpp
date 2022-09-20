#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

/*void adv_tokenizer(string s, char del)
{
    stringstream ss(s);
    string word;
    while (!ss.eof()) {
      getline(ss, word, del);
    }
} */

/*void tokenize(string s, string del)
{
    int start, end = -1*del.size();
    do {
        start = end + del.size();
        end = s.find(del, start);
        cout << s.substr(start, end - start) << endl;
    } while (end != -1);
  } */

int main() {
  ostringstream infoOSS;
  ifstream inFS;
  string allInfo, category, name, desc, available;
  char delim = '\t';
  const int numItems = 4;

  inFS.open("food.txt");
  if (!inFS.is_open()) {
    cout << "Could not open file numFile.txt." << endl;
    return -1;
  }

  while (!inFS.fail()) {
    
    while (getline(inFS, allInfo)) {
      
      stringstream ss(allInfo);
      getline(ss, category, '\t');
      getline(ss, name, '\t');
      getline(ss, desc, '\t');
      getline(ss, available, '\t');
      
      
      //adv_tokenizer(allInfo, delim);
      //tokenize(allInfo, "\t");
      
      //inFS >> category >> name >> desc >> available;
      cout << category;
      
      if (available == "available") {
        cout << name << " (" << category << ") -- " << desc << endl;
      } 
      else if (available != "available") {
        return;
      } 
      
    }
  }
  inFS.close();
}
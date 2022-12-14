#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  // const int numElements = 4;
  ifstream inFS;
  string line, category, name, desc, avail;
  string delim = "\t";
  vector<string> allwords;

  inFS.open("food.txt");

  if (!inFS.is_open()) {
    cout << "food.txt." << endl;
  }

  // getline(inFS,line);
  // size_t pos = 0;
  // string token;
  // while (!inFS.eof()) {
  //   while ((pos = line.find(delim)) != string::npos) {
  //     token = line.substr(0, pos);
  //     cout << token << endl;
  //     line.erase(0, pos + delim.length());
  //   }
  //   //cout << line << endl;
  // }
  


  
  //Vector Approach
  
  // while (!inFS.eof()) {
  //   getline(inFS, line);
  //   size_t pos = 0;
  //   while ((pos = line.find(delim)) != string::npos) {
  //     allwords.push_back(line.substr(0, pos));
  //     line.erase(0, pos + delim.length());
  //     cout << allwords.at(0) << " (" << allwords.at(1) << ") "
  //          << " -- " << allwords.at(2) << " -- " << allwords.at(3) << endl;
  //   }
  // } 


  //Initial Approach
  
  getline(inFS, line);
  size_t pos = line.find('\t');
  while (!inFS.eof()) {
    if (pos!=std::string::npos) {
       size_t pos2 = line.find('\t',pos);
       category = line.substr(0,pos);
       // size_t pos3 = line.find('\t',pos2);
       // name = line.substr(pos,pos2);
       // size_t pos4 = line.find('\t');
       // desc = line.substr(pos2,pos3);
       // avail = line.substr(pos3,pos4);
       // cout << pos << pos2 << pos3 << pos4;
  }
     cout << name << " (" << category <<  ") " << " -- " << desc << " -- " <<
     avail << endl;
  }

  return 0;
}
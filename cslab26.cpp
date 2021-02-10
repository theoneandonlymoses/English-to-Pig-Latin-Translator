
#include <iostream>
#include <string>
using namespace std;

int main() {
  string firstname;
  string lastname;
  cout << "enter first name" << endl;
  cin >> firstname;
  cout << "enter last name" << endl;
  cin >> lastname;
  for(int i=0; i<=firstname.size(); i++){
        if(firstname[i]>=65 && firstname[i]<=90){
            firstname[i] = firstname[i]+32;
            }
          cout << firstname[i];
    }
cout << " ";
for(int i=0; i<=lastname.size(); i++){

        if(lastname[i]>=65 && lastname[i]<=90){
            lastname[i] = lastname[i]+32;
            }
          cout << lastname[i];
    }
  cout << endl;
  if(firstname[0] == 'a'||firstname[0] == 'e'|| firstname[0] == 'i'|| firstname[0] == 'o'|| firstname[0] == 'u'||firstname[0] == 'A'||firstname[0] == 'E'||firstname[0] == 'I'||firstname[0] == 'O'||firstname[0] == 'U'){
    cout << firstname << "way" << endl;
  }
  else {
    for(int i = 1; i <= firstname.size(); i++){
      cout << firstname[i];
    }
    cout << firstname[0] << "ay";
  }
  cout << endl;
  if(lastname[0] == 'a'||lastname[0] == 'e'|| lastname[0] == 'i'|| lastname[0] == 'o'|| lastname[0] == 'u'||lastname[0] == 'A'||lastname[0] == 'E'||lastname[0] == 'I'||lastname[0] == 'O'||lastname[0] == 'U'){
    cout << lastname << "way" << endl;
  }
  else {
    for(int j = 1; j <= lastname.size(); j++){
      cout << lastname[j];
    } cout << lastname[0] << "ay";
  }
  return 0;
}



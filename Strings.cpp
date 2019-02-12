#include <iostream>
using namespace std;

int main() {

  char first_name[50], last_name[50], formal_name[50], full_name[50];

  cout<<"Please insert your first name"<<endl;
  cin >> first_name;
  cout<<"Please insert your last name"<<endl;
  cin >> last_name;

 strcpy(formal_name, last_name);
 strcat(formal_name, first_name);

 strcpy(full_name, first_name);
 strcat(full_name, last_name);

  cout << "Your formal name is " << formal_name << endl;
  cout << "Your full name is " << full_name << endl;


 return 0;
}

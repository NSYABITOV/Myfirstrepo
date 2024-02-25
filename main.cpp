#include <iostream>
#include <string>

using namespace std;

class human{
  public:
  string FirstName;
  string SecondName;
  int age;

  void showAll(string F,string S, int a){
    FirstName = F;
    SecondName = S;
    age = a;
  }
};

int main(){
human objA;
  objA.showAll("Иван","Иванов", 22);
}

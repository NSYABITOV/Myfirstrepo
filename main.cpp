#include <iostream>
#include <string>

using namespace std;

//Описание класса
class MyClass{
  public:
  //Поля
  string name;
  int number;
  void show(){
    cout << "Поле name: " << name << endl;
    cout << "Поле number: " << number << endl;
  }
};

int main(){
  //Создание объектов
  MyClass objA, objB;
  //Объявление указателя
  MyClass* p;
  //Адрес объекта записывается в указатель
  p=&objA;
  
  p->name =" Объект objA";
  p->number = 111;

  //Вызов метода через указатель
  p->show();
  //Новое значение указателя
  p=&objB;

  p->name ="Объект objB";
  p->number = 222;

  p->show();
  
  cout << "Проверяем объекты\n";
  objA.show();
  objB.show();
}

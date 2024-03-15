#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Animal
{
public:
  int legs;

  void SetName(string n)
  {
    name = n;
  }

  string GetName()
  {
    return name;
  }

private:
  string name;
};

int main()
{
  Animal cat, dog;

  cat.SetName("Cat");
  cat.legs = 4;

  dog.SetName("Dog");
  dog.legs = 4;

  cout << "Animal 1 - name: " << cat.GetName() << " legs: " << cat.legs << endl;
  cout << "Animal 2 - name: " << dog.GetName() << " legs: " << dog.legs << endl;

  return 0;
}
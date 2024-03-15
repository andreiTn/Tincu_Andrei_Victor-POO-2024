#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Persoana
{
  unsigned vs;
  char nume[20];
  char prenume[20];
};

class Pers
{
private:
  unsigned vs;
  char nume[20];
  char prenume[20];

public:
  Pers(unsigned vs1, char *num1, char *prenum1)
  {
    vs = vs1;
    strcpy_s(nume, 20, num1);
    strcpy_s(prenume, 20, prenum1);
  }

  Pers() {}

  unsigned arata_vs() { return this->vs; };
  char *arata_nume() { return this->nume; };
};

int main()
{
  int nr_pers;

  cout << "Introdu numarul de persoane: ";
  cin >> nr_pers;

  Persoana *persoane = new Persoana[nr_pers];

  for (size_t i = 0; i < nr_pers; i++)
  {
    cout << "Introdu numele persoanei " << i + 1 << endl;
    char nume[20];

    cin >> nume;

    strcpy_s(persoane[i].nume, 20, nume);

    cout << "Introdu varsta persoanei " << i + 1 << endl;
    unsigned varsta;

    cin >> varsta;

    persoane[i].vs = varsta;
  }

  cout << "Afisam numele persoanelor si varstele aferente: " << endl;

  for (size_t i = 0; i < nr_pers; i++)
  {
    cout << persoane[i].nume << "\t" << persoane[i].vs << endl;
  }

  cin.ignore();
  cin.get();

  return 0;
}
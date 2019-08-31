#include<iostream>
using namespace std;

class Base {
  public:
    Base() {
      cout<<"Base constructor\n";
    }
    ~Base() {
      cout<<"Base destructor\n";
    }
};

class Dervied: public Base {
  public:
    Dervied() {
      cout<<"Dervied Constructor\n";
    }
    ~Dervied() {
      cout<<"Dervied destructor\n";
    }
};

int main () {
  Dervied *d = (Dervied *)malloc(sizeof(Dervied));
  free(d);
  return 0;
}

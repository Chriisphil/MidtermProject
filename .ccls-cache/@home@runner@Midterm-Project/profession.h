using namespace std;
#include "sort.h"
class job {

private:
  string name;
  int age; //middle & boomer

public:
  void set_all(string, int);
  void sorting(job p[],int);
  job(string="Homeless", int=18); //default constructor
  ~job(); 
};

job::job(string n, int m) {
  name = n;
  age = m;
  cout<<"name = "<<name<<endl;
  cout<<"age = "<<age<<endl;
}

job::~job() {
  cout<<"===End==="<<endl;
}

void job::set_all(string n,int m){
  age = m;
  name = n;
}



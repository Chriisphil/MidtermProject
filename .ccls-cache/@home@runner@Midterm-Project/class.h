using namespace std;

class profession {

private:
  string name;
  int age; //middle & boomer

public:
  void set_all(string, int);
  void sorting(profession p[],int);
  profession(string="Homeless", int=18); //default constructor
  ~profession(); 
};

profession::profession(string n, int m) {
  name = n;
  age = m;
  cout<<"name= "<<name<<endl;
  cout<<"age = "<<age<<endl;
}

profession::~profession() {
  cout<<"===End==="<<endl;
}

void profession::set_all(string n,int m){
  age = m;
  name = n;
}


/*void profession::sorting(profession p[],int length){
  int i,j;
  int sorted;
  for (j = 1; j<=n-1; j++){
    sorted = 0;
    for (i = 0; i<n-j; i++){
      if(a[i] > a[i+1]){
        swap(a[i],a[i+1]);
      sorted = 1;
      }
    }
  }
  */

#include <iostream>
#include <iomanip>
#include "job.h"

using namespace std;

int main() {
  int k,i;
  cout<< "How many people to survey? ";
  cin>>k;
  job *a, p[k];
  scale_table();
  //TO SET NAME
  for(i=0;i<k;i++){
    string n;   
    int a;
    string s;   
    int c;
    cout<<"PERSON "<<i+1<<" NAME: "<<endl;
    cin>>n;
    cout<<"PERSON "<<i+1<<" AGE: "<<endl;
    cin>>a;
    cout<<"PERSON "<<i+1<<" PROFESSION: "<<endl;
    cin>>s;
    cout<<"PERSON "<<i+1<<" COVID ON A SCALE OF 1-10: "<<endl;
    cin>>c;
    p[i].setAll(n,a,s,c);
    cout<<"==========="<<endl;
  }
      a = p;
  
    a[k].bubbleSort(a,k);  

  cout<<"PEOPLE AND THEIR PROFESSION AFFECTED BY COVID THE LEAST TO MOST: "<<endl;
    cout<<"==========="<<endl;
  for(i=0;i<k;i++){
    (p+i)->display();
    cout<<"==========="<<endl;
  }

  }

  
  

#include <iostream>
#include <cmath>
#include <vector>
#include <numeric>
using namespace std; // make name from std visible without std  

double square(double x){ // function that returns a quare value of a double 
  return x*x; 
}

void print_square(double x){
  cout << "the sqaure root of "<< x << " is " << square(x) << endl; 
  return;
}

void some_function(){
  double d = 2.3;  // initialize a double  
  int i = 7;       // initialize and integervoid some_function(){
  d = d + i;       // assign sum to d 
  i = d*i ;        // assign product to i bewar: truncating the double d*i to an int !!
  cout << "i is : "<< i<< endl;
  double d2 {2.5}; // same declaration as d 
  cout << "d2 is equal to :" << d2 << endl;
  auto l = 1.5;    // define a variable without specifiying it type (double in  this case) 
  auto ch = 'x'; // define a variable without specifiying it type (character in  this case)
  auto z = sqrt(l) ;
  vector<int> {1,2,3};
  for (int i = 0; i < 3; ++i)
    {
      cout << "vector line is " << i << endl; 
    }  
  return; 
}

// The scope of definitions and there liftime  

vector<int> vec; // vector vec is global

struct Record {
  string name; 
};

void fct(int arg){ // fct is global while arg is local 

  string motto {"who dares wins"}; // motto is local
  auto p = new Record {"Hume"};    // p points to an unnamed Record (created by new)
  cout << "this is the pointer " << p << endl; 
}

void constants() {
  constexpr int dmv = 17;       // constant computed when the compiler is running
  int var = 17;                 // integer is not constant
  const double sqr = sqrt(var); // constant computed at the run time.
  cout << "type of constants " << dmv << sqr << endl;
  vector<double> v {1.2,2.4,4.5}; // v is not constant
  //   const double s1 = sum(v); // the sum is evaluated at running time 
}

int main(){
  
  print_square(1.234);
  some_function() ; 
  fct(2);
  constants();
  return 0;
}

// lab6-4.cpp
#include <iostream>
#include <assert.h>

class Items{
   friend class Vec; // make Vec can access member in Items
public:
   Items(){value = 0;}
   Items(int v){value = v;}
   int value;
};

class Vec{
public:
   Vec(){len =0;};
   Vec(int n);
   ~Vec();
   void setValue(int idx, int v);
   void printVec() const;
private:
   // nested class Items for Vec
   // all members in Items are private
   // class Items{
   //    friend class Vec; // make Vec can access member in Items
   // public:
   //    Items(){value = 0;}
   //    Items(int v){value = v;}
   //    int value;
   // };
   int len;
   Items *vec;
};
Vec::Vec(int n){
   len = n;
   vec = new Items [len];
}
Vec::~Vec(){
   if (len > 0) delete []vec;
}

void Vec::setValue(int idx, int v){
   assert(idx < len);
   vec[idx].value = v;
}

void Vec::printVec() const
{
   for (int i=0;i<len;i++)
       std::cout << vec[i].value << " ";
   std::cout << std::endl;
}
int main(){
   Vec vector(5);
   vector.printVec();
   for (int i=0;i<5;i++)
       vector.setValue(i,i);
   vector.printVec();
   Items n;
   return 0; 
   }
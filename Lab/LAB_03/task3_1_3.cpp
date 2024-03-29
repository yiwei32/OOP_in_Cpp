// lab3-1-3.cpp
#include <iostream>
typedef struct{
    int x;
    int y;
    double value;
}Point2D;

void assignPoint2D(Point2D *obj, int n1, int n2, double v) {
    obj->x = n1;
    obj->y = n2;
    obj->value = v;
};
void displayPoint2D(Point2D *obj){
    std::cout << "(" << obj->x << "," << obj->y << ") = ";
    std::cout << obj->value << std::endl; 
};

int main(){
    Point2D *ptArray[10];
    for (int i=0;i<10;i++){
        ptArray[i] = new Point2D;
        assignPoint2D(ptArray[i],i,i+2,i*10);
        displayPoint2D(ptArray[i]);
    }
    return 0;
}
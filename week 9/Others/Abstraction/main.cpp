#include<iostream>
#include "bird.h"
using namespace std;

void birdDoesSomething(Bird *&bird){
    bird->eat();
    bird->fly();
}

int main()
{
    Bird* bird = new pegion();
    birdDoesSomething(bird);

    // sparrow *sp = new sparrow();
    // birdDoesSomething(sp); //cannot be done ,eagle and sparrow are private 

    return 0;
}
#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>

class Bird{
    public:
     virtual void eat() = 0;
     virtual void fly() = 0;
    //interface
};

class sparrow : public Bird{
private:
    void eat(){
        std::cout<<"Sparrow is eating\n";
    }
    void fly(){
         std::cout<<"Sparrow is flying\n";
    }
};

class eagle : public Bird{
private:
    void eat(){
        std::cout<<"Eagle is eating\n";
    }
    void fly(){
         std::cout<<"Eagle is flying\n";
    }
};

class pegion : public Bird{
private:
    void eat(){
        std::cout<<"Pegion is eating\n";
    }
    void fly(){
         std::cout<<"Pegion is flying\n";
    }
};
#endif // #BIRD_H

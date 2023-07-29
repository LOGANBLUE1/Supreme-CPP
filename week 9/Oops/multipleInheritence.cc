#include<iostream>
using namespace std;
class Lion{
public:
    int weight;
};
class Tiger{
public:
    string nature;
};
class Liger : public Lion, Tiger{
public:
    string color;
};
int main()
{
    Liger berry;
    
    return 0;
}
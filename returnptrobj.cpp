#include<iostream>
#include<string.h>
using namespace std;

class Animal
{   
    private:
    string name;

    public:
    Animal()
    {
        cout<<"Animal created.";
    }
    ~Animal()
    {
        cout<<"Destructed object";
    }
    void setup_Name(string name)
    {
        this->name=name;
    }
    void speak()
    {
        cout<<"My name is: "<<name<<endl;
    }
    
};
Animal *createAnimal()
{
    Animal *c1= new Animal();
    c1->setup_Name("Pranjali");
    return c1;
}
int main()
{
    Animal *a1= new Animal();

    //a1->setup_Name("Pranjali");
    a1->speak();
    delete a1;

    return 0;
}

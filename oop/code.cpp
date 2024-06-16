#include <iostream>
using namespace std;

class Animal{
  public:
    void eat(){
        cout << "animal is eating";
    }  
    void eat(int a){
        cout << "ate" << a << "things";
    }
    int eat(int a, int b){
        return a-b;
    }
    virtual void show(){
        cout << "what a lovely animal"; 
    }
};

class cat: public Animal{
    public:
        void meow(){
            cout << "cat says meow";
        }
        void show() override{
            cout << "what a lovely cat";
        }
};
class dog: public Animal{
    public:
        void bark(){
            cout << "dog says bark";
        }
        void show() override{
            cout << "what a lovely doggo";
        }
};

int main(){
    cat kitty;
    kitty.eat();
    cout << "\n";
    kitty.meow();
    cout << "\n";
    kitty.eat(5);
    cout << "\n";
    cout << "the difference is" << kitty.eat(10,3) << "things";
    cout << "\n";
    kitty.show();
    dog doggo;
    doggo.show();
    return 0;
    
}
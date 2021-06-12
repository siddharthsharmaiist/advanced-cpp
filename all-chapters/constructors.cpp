#include<cstdio>
#include<string>

using namespace std;

const string unk = "unkown";
const string clone_prefix = "clone-";

class Animal{
    string _type = "";
    string _name = "";
    string _sound = "";
public:
    Animal(); //default constructor
    Animal(const string &type, const string &name, const string &sound );
    Animal(const Animal &); //copy constructor  
    Animal &operator = (const Animal &); //copy Operator 
    ~Animal(); //destructor

    void printing() const;
};

//--implementation--//
Animal::Animal() : _type(unk), _name(unk), _sound(unk){
    puts("Default Constructor");
}
Animal::Animal(const string &type, const string &name, const string &sound):
_type(type), _name(name), _sound(sound){
    puts("Constructor with Arguments");
}

Animal::Animal(const Animal &rhs){
    puts("copy Constructor");
    _name = clone_prefix+rhs._name;
    _type = clone_prefix+rhs._type;
    _sound= clone_prefix+rhs._sound;
}

Animal::~Animal(){
    printf("Destructor: %s the %s \n", _name.c_str(), _type.c_str());
}

void Animal::printing() const {
    printf("%s the %s says %s \n",_name.c_str(),_type.c_str(),_sound.c_str());
}

Animal &Animal :: operator=(const Animal &rhs){
    puts("copy constructor");
    if(this!=&rhs){
        _name =clone_prefix+rhs._name;
        _type = rhs._type;
        _sound = rhs._sound;
    }
    return * this;
}


int main(){
   Animal a;
   a.printing();
   
   const Animal b("cat", "fluffy", "meow");
   b.printing();

   const Animal c=b;
   c.printing();

   a=c;
   a.printing();
   
   return 0;   
}
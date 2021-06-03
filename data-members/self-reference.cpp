#include<cstdio>

using namespace std;

class c1{
    int _value;
public:
    void setvalue(const int & value){
        _value = value;
    }
    int getvalue() const;
    int getvalue2() const; 
};

int c1::getvalue() const {
    printf("GetValue: this is %p\n", this);
    return _value;    
}

int c1::getvalue2() const {
    printf("GetValue2\n"); 
    return this ->getvalue();   
}
int main(){
    const int i =2822;
    c1 a1;
    a1.setvalue(i);
    printf("The address of the object is %p\n", &a1);
    printf("The value is %d\n", a1.getvalue2());
    return 0;
}
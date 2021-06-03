#include<cstdio>

using namespace std;

class class1 {
    int _value;
    public:
    void setvalue(const int a){
        _value=a;
    }
    int getvalue() const {
        puts("Const Qualified"); 
        return _value;
    }
    int getvalue(){
        puts("Mutable Qualified");
        return _value;
    }
};

int main(){
    class1 cls;
    cls.setvalue(2822);
    printf("The number is %d\n",cls.getvalue());

    const class1 cls2=cls;
    printf("The number2 is %d\n"), cls2.getvalue();

    return 0;
}
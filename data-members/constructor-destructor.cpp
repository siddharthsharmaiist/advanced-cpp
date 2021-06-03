#include<cstdio>

using namespace std;

class class1{
    int i = 0;
    public:
    void setvalue(const int &value){
        i=value;
    }
    int getvalue() const{
        return i;
    }
};


int main(){
    const int i{};
    class1 cls;
    cls.setvalue(2822);
    printf("The number in the class is %d\n",cls.getvalue());

    class1 cl2=cls;    
    printf("The number in the class is %d\n",cl2.getvalue());

    return 0;
}
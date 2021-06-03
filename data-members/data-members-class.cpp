#include<cstdio>

using namespace std;

class A{
    int mem1 {28};
    const char *mem2{""};
    int mem3{22};
    public:
    A(const int a, const char *b, const int c ): mem1(a),mem2(b),mem3(c){};
    
    void setmem1 (const int a){
        mem1= a;
    }
    void setmem2 (const char *b){
        mem2 = b;
    }
    void setmem3 (const int c){
        mem3 = c;
    }
    int getmem1() const{
        return mem1;
    }
    const char * getmem2() const {
        return mem2;
    }
    int getmem3() const{
        return mem3;
    }
};

int main(){
    A a(28,"Siddharth",22);
    printf("Members of the class are:\n mem1:%d\n mem2=%s\n mem3=%d\n",a.getmem1(),a.getmem2(),a.getmem3());
    return 0;
}
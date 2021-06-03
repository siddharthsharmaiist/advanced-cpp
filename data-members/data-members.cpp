#include<cstdio>

using namespace std;

struct A {
    int mem1;
    const char *mem2= "";
    int mem3;
};


int main(){
    A mystruct;
    mystruct.mem1=28;
    mystruct.mem2="Siddharth";
    mystruct.mem3=22;
    printf("Struct members are 1st member:%d\n 2nd member:%s\n 3rd member:%d\n", mystruct.mem1,mystruct.mem2,mystruct.mem3);
    return 0;
}
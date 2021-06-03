#include<cstdio>

using namespace std;

/*
  Example of a very Simple class.
*/
class class1 {
    //Always declare your private first.
    int i=0;
    public:
    // Pubic member: methods to access private members of the class.
        /*
        ## 1st Try 
        void setvalue (const int &value){
            i = value;
        }
        int getvalue(){
            return i;
        }
        */
       //Second try is to always keep only declration in class
       void setvalue (const int &);
       int getvalue() const;
};

void class1::setvalue (const int &value){
            i = value;
}
int class1::getvalue() const{
            return i;
}

int main (){
    const int i = 2822;
    //Definition of the class.
    class1 object1;
    object1.setvalue (i);
    printf("Value of %d\n", object1.getvalue()); 
    return 0;
}

/*
The Best Practice is to define a function outside the class.
Only declerations should be in the class. 
*/
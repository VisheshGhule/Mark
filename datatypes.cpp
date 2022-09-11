/*There are 3 tyeps of data types          1byte=8bits

(Primitive)                          (Derived)                            (User-defined)
1.Interger (eg- 1,4,100)          |  1.Function                         | 1.Class 
2.Float (eg- 3.5, 6.5, 1.00)      |  2.Array                            | 2.Structure
3.Character (eg- c,f,@,%)         |  3.Pointer                          | 3.Union
4.Boolean (eg- 0,1 /true or false)|  4.Reference                        | 4.Enum     
                            False=0
                    true=1
*/
#include<iostream>
using namespace std;
int main(){

    int a; //variable declaration
    //a=12; //initialisation

    cout<<"size of int "<<sizeof(a)<<endl;

    float b;
     cout<<"size of float "<<sizeof(b)<<endl;

    char c;
      cout<<"size of char "<<sizeof(c)<<endl;

    bool d;
     cout<<"size of bool "<<sizeof(d)<<endl;

     
    return 0;
    
}



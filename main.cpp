#include <iostream>
#include <cstdlib>
using namespace std;
char inst;
void reset(){
    system("cls");
    system("title Knowledge_base");
}
void quotations(){
    reset();
    
}
int main() {
    do{
        reset();
        cout<<endl<<" Originally by Calvin Hsu"<<endl;
        cout<<endl<<" ======================"<<endl;
        cout<<endl<<" c++ version by rh_hu"<<endl;
        cout<<" instructions:"<<endl;
        cout<<" q  - Quotations: learn from the elderly"<<endl;
        cout<<" qt - Quick translate"<<endl;
        cout<<" e  - Excited! Devote your life to the elderly"<<endl;
        cout<<" r  - Request for more info"<<endl;
        cout<<" Input instruction: ";
        cin>>inst;
        if(inst=='q'){
            quotations();
        }
        if(inst=='qt'){
            translate();
        }
        if(inst=='e'){
            excited();
        }
        if(inst=='r'){
            resource();
        }
    }while(1);
    return 0;
}
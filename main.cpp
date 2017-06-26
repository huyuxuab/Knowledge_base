//windows os only
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <conio.h>
using namespace std;
char inst;
char q[1000];
void reset(){
    system("cls");
    system("title Knowledge_base");
}
bool load(){
    FILE * add;
    add=fopen("quotations.txt","r");
    if(add==NULL){
        fclose(add);
        reset();
        cout<<endl<<"Error opening file. Press any key to return."<<endl;
        getch();
        return false;
    }else{
        if (fgets(q,200,add)!=NULL){
            puts(q);
        }
    }
    fclose(add);
    return true;
}
void quotations(){
    reset();
    if(!load()){
        return;
    }else{
        cout<<q<<endl;
    }
}
int main() {
    do{
        reset();
        cout<<endl<<" Originally by Calvin Xu"<<endl;
        cout<<endl<<" ======================"<<endl;
        cout<<endl<<" c++ version by rh_hu"<<endl;
        cout<<" instructions:"<<endl;
        cout<<" q    - Quotations: learn from the elderly"<<endl;
        cout<<" qt   - Quick translate"<<endl;
        cout<<" e    - Excited! Devote your life to the elderly"<<endl;
        cout<<" r    - Request for more info"<<endl;
        cout<<" exit - Exit program"<<endl;
        cout<<" Input instruction: ";
        cin>>inst;
        if(inst=='q'){
            quotations();
        }
        /*if(inst=='qt'){
            translate();
        }
        if(inst=='e'){
            excited();
        }
        if(inst=='r'){
            resource();
        }*/
        if(inst=='exit'){
            return 0;
        }
        if(inst!='q'&&inst!='qt'&&inst!='e'&&inst!='r'&&inst!='exit'){
            reset();
            cout<<endl<<"No such command. Press any key to return."<<endl;
            getch();
        }
    }while(1);
    return 0;
}
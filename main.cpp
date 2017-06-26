//windows os only
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <cstdio>
using namespace std;
string inst;
char q[46];
void reset(){
    system("cls");
    system("title Knowledge_base");
}
void delay(int t){
    int now;
    now=clock();
    do{}while(clock()-now<t*100);
    return;
} //function delay() uses ms*10
void load(){
    freopen("quotations.txt","r",stdin);
    for(int i=1; i<=45; i++){
        getline(cin,q[i],"\n");
    }
}
void quotations(){
    reset();
    load();
    cout<<q<<endl;
    cout<<endl<<" Press any key to return.";
    getch();
    return;
}
void excited(){
    reset();
    for(int i=1; i<=64; i++){
        cout<<endl<<" EXCITED!!"<<endl;
        cout<<" +"<<i<<"s"<<endl;
        delay(5);
    }
    cout<<endl<<" Press any key to return.";
    getch();
    return;
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
        if(inst=="q"){
            quotations();
        }
        /*if(inst=='qt'){
            translate();
        }*/
        if(inst=="e"){
            excited();
        }/*
        if(inst=='r'){
            resource();
        }*/
        if(inst=="exit"){
            reset();
            cout<<endl<<"Thanks: Calvin Xu"<<endl;
            cout<<endl<<"Exit soon."<<endl;
            delay(10);
            return 0;
        }
        if(inst=="\n"){
            cout<<endl<<"Please enter the command. Press any key to return."<<endl;
            getch();
        }
        if(inst!="q"&&inst!="qt"&&inst!="e"&&inst!="r"&&inst!="exit"){
            reset();
            cout<<endl<<"No such command. Press any key to return."<<endl;
            getch();
        }
    }while(1);
    return 0;
}
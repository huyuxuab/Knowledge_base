//windows os only
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>

using namespace std;
string inst;
string q;
void reset(){
    system("cls");
    system("title Knowledge_base");
}
void delay(int t){
    int now;
    now=clock();
    do{}while(clock()-now<t*100);
    return;
}
bool load(){
    //freopen("quotations.txt","r",stdin);
    getline(cin,q,'\n');
    //fclose(stdin);
    return true;
}
void quotations(){
    reset();
    if(!load()){
        cout<<"error"<<endl;
        getch();
        return;
    }else{
        cout<<q<<endl;
        getch();
        return;
    }
}
void excited(){
    reset();
    for(int i=1; i<=64; i++){
        cout<<endl<<" EXCITED!!"<<endl;
        cout<<" +"<<i<<"s"<<endl;
        delay(5);
    }
    cout<<endl<<"Press any key to continue.";
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
            return 0;
        }
        if(inst!="q"&&inst!="qt"&&inst!="e"&&inst!="r"&&inst!="exit"){
            reset();
            cout<<endl<<"No such command. Press any key to return."<<endl;
            getch();
        }
    }while(1);
    return 0;
}
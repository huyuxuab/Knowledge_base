//the quotations can be extended up to 9999 items
//support file (except quotations.txt) should end with "}"
#include <iostream>
#include <fstream>
#include <ctime>
#include <conio.h>
#include <cstdlib>
#include <cstdio>
#include <string>
using namespace std;
string inst,phrase,q,choice;
string phrasegroup[10000];
int ii,s=0;
void reset(){
    system("cls");
    system("title Knowledge_base");
}
void delay(int t){
    int now;
    now=clock();
    do{}while(clock()-now<t*100);
    return;
} //uses ms*10
/*bool loadq(){
    fstream file1("quotations.txt");
    if(!file1){
        cout<<endl<<" ERROR! File missing."<<endl;
        return false;
    }
    getline(file1,q,'}');
    file1.close();
    return true;
}*/
bool loadi(){
    reset();
    fstream file1("info.txt");
    if(!file1){
        cout<<endl<<" ERROR! File missing."<<endl;
        return false;
    }else{
        getline(file1,q,'}');
    }
    file1.close();
    return true;
}
bool load_a(){
    reset();
    fstream file1("quote1.txt");
    if(!file1){
        cout<<endl<<" ERROR! File missing."<<endl;
        return false;
    }else{
        getline(file1,q,'}');
    }
    file1.close();
    return true;
}
bool load_b(){
    reset();
    fstream file1("quote2.txt");
    if(!file1){
        cout<<endl<<" ERROR! File missing."<<endl;
        return false;
    }else{
        getline(file1,q,'}');
    }
    file1.close();
    return true;
}
bool load_c(){
    reset();
    fstream file1("quote3.txt");
    if(!file1){
        cout<<endl<<" ERROR! File missing."<<endl;
        return false;
    }else{
        getline(file1,q,'}');
    }
    file1.close();
    return true;
}
bool load(){
    int i=1;
    fstream file1("quotations.txt");
    if(!file1){
        cout<<endl<<" ERROR! File missing."<<endl;
        return false;
    }
    while(file1 && getline(file1,phrasegroup[i])){
        i++;
    }
    file1.close();
    ii=i;
    return true;
}
void quotations(){
    reset();
    if(load()){
        for(int i=1;i<=ii;i++){
            cout<<phrasegroup[i]<<endl;
        }
    }
    cout<<endl<<" Press any key to return.";
    getch();
    return;
}
void excited(){
    reset();
    int i=0;
    int set=0;
    cout<<endl<<"How much time do you want to devote to the elderly? ";
    cin>>set;
    do{
        reset();
        i++;
        cout<<endl<<" EXCITED!!"<<endl;
        cout<<" +"<<i<<"s"<<endl;
        //cout<<endl<<" Press any key to stop."<<endl;
        delay(10);
    }while(i!=set);
    cout<<endl<<" Life devotion completed successfully, magician."<<endl;
    cout<<endl<<" You have devoted "<<i<<" seconds. Press any key to return.";
    getch();
    return;
}
void resource(){
    reset();
    if(loadi()){
        cout<<q<<endl;
    }
    cout<<endl<<" Press any key to return.";
    getch();
    return;
}
void search(){
    reset();
    string::size_type idx;
    while(load()){
        reset();
        cout<<endl<<"Search for quotations, type e to return:";
        cin>>phrase;
        if(phrase=="e"){
            return;
        }
        for(int i=1;i<=ii;i++){
            idx=phrasegroup[i].find(phrase);
            if(idx!=string::npos){
                cout<<phrasegroup[i]<<endl;
                s=1;
            }
        }
        if(s!=1){
            reset();
            cout<<endl<<" Not found. Press any key to return.";
        }else{
            cout<<endl<<" Press any key to return.";
        }
        getch();
    }
    cout<<endl<<" Press any key to return.";
    getch();
    return;
}
void experiences(){
    do{
        reset();
        cout<<endl<<" a    - GUO JI ER YUAN"<<endl;
        cout<<" b    - Rebuke"<<endl;
        cout<<" c    - The interview"<<endl;
        cout<<" exit - Return to homepage"<<endl;
        cout<<endl<<" Choose which you want to learn: ";
        cin>>choice;
        cin.clear();
        clearerr(stdin);
        if(choice=="a"){
            if(load_a()){
                cout<<q<<endl;
            }
            cout<<endl<<" Press any key to return.";
            getch();
        }
        if(choice=="b"){
            if(load_b()){
                cout<<q<<endl;
            }
            cout<<endl<<" Press any key to return.";
            getch();
        }
        if(choice=="c"){
            if(load_c()){
                cout<<q<<endl;
            }
            cout<<endl<<" Press any key to return.";
            getch();
        }
        if(choice=="exit"){
            return;
        }
        if(choice!="a"&&choice!="b"&&choice!="c"&&choice!="exit"){
            reset();
            cout<<endl<<"No such command. Press any key to return."<<endl;
            getch();
        }
    }while(1);
    return;
}
int main() {
    do{
        reset();
        cout<<endl<<" Originally by Calvin Xu"<<endl;
        cout<<endl<<" ======================"<<endl;
        cout<<endl<<" c++ version by rh_hu"<<endl;
        cout<<" Instructions:"<<endl;
        cout<<" q    - Quotations: learn from the elderly (view all)"<<endl;
        cout<<" m    - Stories: Get to know the elderly's life experience"<<endl;
        cout<<" s    - Search for his quotations"<<endl;
        cout<<" e    - Excited! Devote your life to the elderly"<<endl;
        cout<<" r    - Request for more info"<<endl;
        cout<<" exit - Exit program"<<endl;
        cout<<endl<<" Input instruction: ";
        cin>>inst;
        cin.clear();
        clearerr(stdin);
        if(inst=="q"){
            quotations();
        }
        if(inst=="m"){
            experiences();
        }
        if(inst=="s"){
            search();
        }
        if(inst=="e"){
            excited();
        }
        if(inst=="r"){
            resource();
        }
        if(inst=="exit"){
            reset();
            cout<<endl<<"Thanks: Calvin_Xu the mogician"<<endl;
            cout<<endl<<"Programmed by rh_hu"<<endl;
            cout<<endl<<"LET'S +1s TOGETHER!"<<endl;
            cout<<endl<<"Exit soon."<<endl;
            delay(10);
            return 0;
        }
        if(inst!="q"&&inst!="s"&&inst!="m"&&inst!="e"&&inst!="r"&&inst!="exit"){
            reset();
            cout<<endl<<"No such command. Press any key to return."<<endl;
            getch();
        }
    }while(1);
    return 0;
}
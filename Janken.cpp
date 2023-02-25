#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;
int main(){
    mulai:
    int p1,p2;
    char pil;
    cout<<"======Program Suit======"<<endl;
    cout<<"1. Batu\n2. Gunting \n3. Kertas"<<endl;
    cout<<"Pilihan = angka"<<endl;
    cout<<"========================"<<endl;
    cout<<"Masukkan Pilihan (P1): ";cin>>p1;
    system("cls");
    cout<<"======Program Suit======"<<endl;
    cout<<"1. Batu\n2. Gunting \n3. Kertas"<<endl;
    cout<<"Pilihan = angka"<<endl;
    cout<<"========================"<<endl;
    cout<<"Masukkan Pilihan (P1):__"<<endl;
    cout<<"Masukkan Pilihan (P2): ";cin>>p2;
    system("cls");
    cout<<"======Program Suit======"<<endl;
    cout<<"1. Batu\n2. Gunting \n3. Kertas"<<endl;
    cout<<"Pilihan = angka"<<endl;
    cout<<"========================"<<endl;
    cout<<"Masukkan Pilihan (P1): "<<p1<<endl;
    cout<<"Masukkan Pilihan (P2): "<<p2<<endl;
    cout<<"========================"<<endl;
    cout<<"Player 1 vs Player 2"<<endl;
    if (p1==1){
        if(p2==1){
            cout<<"Batu vs Batu"<<endl;
            cout<<"Result: DRAW";
        }else if(p2==2){
            cout<<"Batu vs Gunting"<<endl;
            cout<<"Result: Player 1 WINS";
        }else if(p2==3){
            cout<<"Batu vs Kertas"<<endl;
            cout<<"Result: Player 2 WINS";
        }else{
            cout<<"ERROR";
        }
    }else if (p1==2){
        if(p2==1){
            cout<<"Gunting vs Batu"<<endl;
            cout<<"Result: Player 2 WINS";
        }else if(p2==2){
            cout<<"Gunting vs Gunting"<<endl;
            cout<<"Result: DRAW";
        }else if(p2==3){
            cout<<"Gunting vs Kertas"<<endl;
            cout<<"Result: Player 1 WINS";
        }else{
            cout<<"ERROR";
        }
    }if (p1==3){
        if(p2==1){
            cout<<"Kertas vs Batu"<<endl;
            cout<<"Result: Player 1 WINS";
        }else if(p2==2){
            cout<<"Kertas vs Gunting"<<endl;
            cout<<"Result: Player 2 WINS";
        }else if(p2==3){
            cout<<"Kertas vs Kertas"<<endl;
            cout<<"Result: DRAW";
        }else{
            cout<<"ERROR";
        }
    }
    cout<<endl;
    cout<<"Ulang Permainan(Y): ";cin>>pil;
    system("cls");
    if (pil=='Y' or pil=='y'){
        goto mulai;
    }
    return 0;
}

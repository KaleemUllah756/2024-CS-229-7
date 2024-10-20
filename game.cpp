#include <iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void printPlayer();
void printEnemy();
void eraseEnemy();
void moveEnemy();
void printMaze();
void movePlayerLeft();
void movePlayerRight();

int eX=2, eY=2;
int pX=20, pY=20;
 int main(){
system("cls");
printMaze();
printPlayer();
printEnemy();
while(true){
    if(GetAsyncKeyState(VK_LEFT) & 0*8000){
        movePlayerLeft();
    }if(GetAsyncKeyState(VK_RIGHT) & 0*8000){
        movePlayerRight();
    }
    moveEnemy();
    Sleep(200);
}
return 0;
}
void printEnemy(){
    gotoxy(eX,eY);
    cout<< "(---)  (---)";
    gotoxy(eX,eY+1);
    cout<< "   (*****)  ";
    gotoxy(eX,eY+2);
    cout<< "  ||    ||  ";
}
void eraseEnemy(){
    gotoxy(eX,eY);
    cout<< "            ";
    gotoxy(eX,eY+1);
    cout<< "            ";
    gotoxy(eX,eY+2);
    cout<< "            ";
}
void moveEnemy(){
eraseEnemy();
eY++;
if(eY>25){
    eY=2;
}
printEnemy();
}
void printPlayer(){
gotoxy(pX,pY);
cout<<"  ||     ||   ";
gotoxy(pX, pY+1);
cout<<" (--)   (--)  ";
gotoxy(pX,pY+2);
cout<<" (***)  (***) ";
}
void erasePlayer(){
gotoxy(pX,pY);
cout<<"              ";
gotoxy(pX, pY+1);
cout<<"              ";
gotoxy(pX,pY+2);
cout<<"              ";

}
void printMaze(){
cout<<"###########################################################"<<endl;
cout<<"#                                                         #"<<endl;
cout<<"#                                                         #"<<endl;
cout<<"#                                                         #"<<endl;
cout<<"#                                                         #"<<endl;
cout<<"#                                                         #"<<endl;
cout<<"#                                                         #"<<endl;
cout<<"#                                                         #"<<endl;
cout<<"#                                                         #"<<endl;
cout<<"#                                                         #"<<endl;
cout<<"#                                                         #"<<endl;
cout<<"#                                                         #"<<endl;
cout<<"#                                                         #"<<endl;
cout<<"#                                                         #"<<endl;
cout<<"#                                                         #"<<endl;
cout<<"#                                                         #"<<endl;
cout<<"###########################################################"<<endl;

}
void movePlayerLeft(){
erasePlayer();
pX=max(pX-1,1);
printPlayer();

}
void movePlayerRight(){
erasePlayer();
pX=min(pX+1,20);
printPlayer();


}
void gotoxy(int x, int y){
COORD coord;
coord.X=x;
coord.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);


}
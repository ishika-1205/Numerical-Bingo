#include<bits/stdc++.h>


using namespace std;
void delay(int delay)
{
	int now=time(NULL);
	int later=now+delay;
	while(now<=later)now=time(NULL);
}

string square[27]={"00","01","02","03","04","05","06","07","08","09","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","\0"};
void board();
int win();

int main(){

char playagain='y';
while(playagain=='y'){
cout<<"  Tic Tac Toe game !!!\n\n "<<endl;
int player=1;
int i,choice;
string mark;


do{

board();
player=(player%2)?1:2;

cout<<"\n";
cout<<"Player "<<player<<" enter a number: ";
cin>>choice;
mark=(player==1)?"XX":"@@";

if(choice==1 && square[1]=="01")

square[1]=mark;
else if (choice == 2 && square[2] == "02")

square[2] = mark;
else if (choice == 3 && square[3] == "03")

square[3] = mark;
else if (choice == 4 && square[4] == "04")

square[4] = mark;
else if (choice == 5 && square[5] == "05")

square[5] = mark;
else if (choice == 6 && square[6] == "06")

square[6] = mark;
else if (choice == 7 && square[7] == "07")

square[7] = mark;
else if (choice == 8 && square[8] == "08")

square[8] = mark;
else if (choice == 9 && square[9] == "09")

square[9] = mark;
else if (choice == 10 && square[10] == "10")

square[10] = mark;
else if (choice == 11 && square[11] == "11")

square[11] = mark;
else if (choice == 12 && square[12] == "12")

square[12] = mark;
else if (choice == 13 && square[13] == "13")

square[13] = mark;
else if (choice == 14 && square[14] == "14")

square[14] = mark;
else if (choice == 15 && square[15] == "15")

square[15] = mark;
else if (choice == 16 && square[16] == "16")

square[16] = mark;
else if (choice == 17 && square[17] == "17")

square[17] = mark;
else if (choice == 18 && square[18] == "18")

square[18] = mark;
else if (choice == 19 && square[19] == "19")

square[19] = mark;
else if (choice == 20 && square[20] == "20")

square[20] = mark;
else if (choice == 21 && square[21] == "21")

square[21] = mark;
else if (choice == 22 && square[22] == "22")

square[22] = mark;
else if (choice == 23 && square[23] == "23")

square[23] = mark;
else if (choice == 24 && square[24] == "24")

square[24] = mark;
else if (choice == 25 && square[25] == "25")



square[25] = mark;
else
{
cout<<"\nINVALID MOVE \n\n";
player--;
}

i=win();
player++;
}while(i==-1);
board();
if(i==1)
cout<<"<----------Player "<<--player<<" win------------>";
if(i==0)
cout<<"<----------Game draw------------->";
cout<<"\n\nWanna play again(y/n)?:";
cin>>playagain;
cout<<endl;

if(playagain=='y'){
cout<<"You choice to play again\n\n";
}
else if(playagain=='n'){
cout<<"You choice not to play again\n\n";
}
else{
cout<<"You didnt put an valid character , so I will take it like(n),so the program will close.\n\n";
}

for(int c=0;c<120;c++){
cout<<"****";
}
cout<<endl;

square[1] = "1";
square[2] = "2";
square[3] = "3";
square[4] = "4";
square[5] = "5";
square[6] = "6";
square[7] = "7";
square[8] = "8";
square[9] = "9";
square[10] = "10";
square[11] = "11";
square[12] = "12";
square[13] = "13";
square[14] = "14";
square[15] = "15";
square[16] = "16";
square[17] = "17";
square[18] = "18";
square[19] = "19";
square[20] = "20";
square[21] = "21";
square[22] = "22";
square[23] = "23";
square[24] = "24";
square[25] = "25";

}}

int win(){

if(square[1]==square[2]&&square[2]==square[3]&&square[3]==square[4]&&square[4]==square[5])
return 1;

else if(square[6]==square[7]&&square[7]==square[8]&&square[8]==square[9]&&square[9]==square[10])
return 1;

else if(square[11]==square[12]&&square[12]==square[13]&&square[13]==square[14]&&square[14]==square[15])
return 1;

else if(square[16]==square[17]&&square[17]==square[18]&&square[18]==square[19]&&square[19]==square[20])
return 1;

else if(square[21]==square[22]&&square[22]==square[23]&&square[23]==square[24]&&square[24]==square[25])
return 1;

else if(square[1]==square[2]&&square[2]==square[13]&&square[13]==square[19]&&square[19]==square[25])
return 1;

else if(square[5]==square[9]&&square[9]==square[13]&&square[13]==square[17]&&square[17]==square[21])
return 1;

else if(square[1]==square[6]&&square[6]==square[11]&&square[11]==square[16]&&square[16]==square[21])
return 1;

else if(square[2]==square[7]&&square[7]==square[12]&&square[12]==square[17]&&square[17]==square[22])
return 1;

else if(square[3]==square[8]&&square[8]==square[13]&&square[13]==square[18]&&square[18]==square[23])
return 1;

else if(square[4]==square[9]&&square[9]==square[14]&&square[14]==square[19]&&square[19]==square[24])
return 1;

else if(square[5]==square[10]&&square[10]==square[15]&&square[15]==square[20]&&square[20]==square[25])
return 1;

else if (square[1] != "01" && square[2] != "02" && square[3] != "03" && square[4] != "04" &&square[5] != "05" && square[6] != "06" && square[7] != "07" && square[8] != "08" && square[9] != "09" && square[10] != "10" && square[11] != "11" && square[12] != "12" && square[13] != "13" && square[14] != "14" && square[15] != "15" && square[16] != "16" && square[17] != "17" && square[18] != "18" && square[19] != "19" && square[20] != "20" && square[21] != "21" && square[22] != "22" && square[23] != "23" && square[24] != "24" && square[25] != "25")

return 0;

else
return -1;
}

void board()
{
	
cout<<"*********************************************************************************************************************";
	

 system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (XX)  -  Player 2 (@@)" << endl << endl;
    cout << endl;

    cout << "\t\t\t\t\t     |     |     |     |     " << endl;
    cout << "\t\t\t\t\t  " << square[1] << " |  " << square[2] << " |  " << square[3] <<" |  "<< square[4]<<" |  "<<square[5]<<"   "<<endl;

    cout << "\t\t\t\t\t_____|_____|_____|_____|_____" << endl;
    cout << "\t\t\t\t\t     |     |     |     |     " << endl;
    
    
    cout << "\t\t\t\t\t  " << square[6] << " |  " << square[7] << " |  " << square[8] <<" |  "<< square[9]<<" |  "<<square[10]<<"   "<<endl;

    cout << "\t\t\t\t\t_____|_____|_____|_____|_____" << endl;
    
    cout << "\t\t\t\t\t     |     |     |     |     " << endl;
    cout << "\t\t\t\t\t  " << square[11] << " |  " << square[12] << " |  " << square[13] <<" |  "<< square[14]<<" |  "<<square[15]<<"   "<<endl;

    cout << "\t\t\t\t\t_____|_____|_____|_____|_____" << endl;
    
    cout << "\t\t\t\t\t     |     |     |     |     " << endl;
    cout << "\t\t\t\t\t  " << square[16] << " |  " << square[17] << " |  " << square[18] <<" |  "<< square[19]<<" |  "<<square[20]<<"   "<<endl;

    cout << "\t\t\t\t\t_____|_____|_____|_____|_____" << endl;
    
    cout << "\t\t\t\t\t     |     |     |     |     " << endl;
    cout << "\t\t\t\t\t  " << square[21] << " |  " << square[22] << " |  " << square[23] <<" |  "<< square[24]<<" |  "<<square[25]<<"   "<<endl;

    cout << "\t\t\t\t\t     |     |     |     |     " << endl;
    cout<<endl;
    
cout<<"*********************************************************************************************************************";
cout<<endl;

system("cls");


}

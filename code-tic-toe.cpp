//tic -toe
#include<bits/stdc++.h>
using namespace std;
char player ='X';
int enter =1;
int one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
int repeat=0;
int i=0;
void show(char a[3][3]){
	for(int i=0;i<3;i++){
		cout<<"    ---------------"<<"\n";
		cout<<"    |";
		for(int j=0;j<3;j++){
			
			cout<<" "<<a[i][j]<<" | ";
	
		}
		cout<<"\n";
	}
	cout<<"    ---------------"<<"\n";
	
}
void change(char a[3][3],int num){
	
	if(num==1 && one==0){
		a[0][0]=player;
		one+=1;
		repeat=0;
	    i++;
	}
	else if(one==1 && num==1){
		//system("cls");
		cout<<"    Can not enter number twice at same place"<<"\n";
		repeat=1;
	}
	else if(num==2 && two==0){
		a[0][1]=player;
		two+=1;
		repeat=0;
	    i++;
		
	}
	else if(two==1&& num==2){
		//system("cls");
		cout<<"    Can not enter number twice at same place"<<"\n";
		repeat=1;
	}
	else if(num==3 && three==0){
		a[0][2]=player;
		three+=1;
		repeat=0;
	    i++;
	}
	else if(num==3 && three==1){
		//system("cls");
		cout<<"    Can not enter number twice at same place"<<"\n";
		repeat=1 ;
	}
	else if(num==4&& four==0){
		a[1][0]=player;
	    four+=1;
	    repeat=0;
	    i++;
	
	}
	else if(four==1 && num==4){
	//	system("cls");
		cout<<"    Can not enter number twice at same place"<<"\n";
		repeat=1;
	}
	else if(num==5 && five==0){
		a[1][1]=player;
		five+=1;
		repeat=0;
		i++;
	}
	else if(five==1 && num==5){
	//	system("cls");
		cout<<"    Can not enter number twice at same place"<<"\n";
		repeat=1;
	}
	else if(num==6&& six==0){
		a[1][2]=player;
	    six+=1;
	    repeat=0;
	    i++;
	}
	else if(six==1 && num==6){
	//	system("cls");
		cout<<"    Can not enter number twice at same place"<<"\n";
		repeat=1;
	}
	else if(num==7 && seven==0){
		a[2][0]=player;
		seven+=1;
		repeat=0;
		i++;
	
	}
	else if(seven==1 && num==7){\
	  //  system("cls");
		cout<<"    Can not enter number twice at same place"<<"\n";
		repeat=1;
	}
	else if(num==8 && eight==0){
		a[2][1]=player;
		eight+=1;
		repeat=0;
		i++;
	}
	else if(num==8 && eight==1){
		//system("cls");
		cout<<"    Can not enter number twice at same place"<<"\n";
		repeat=1;
	}
	else if(num==9 && nine==0){
		a[2][2]=player;
		nine+=1;
		repeat=0;
		i++;
	}
	
	else if(num==9 && nine==1){
		//system("cls");
		cout<<"     Can not enter number twice at same place"<<"\n";
		repeat=1;
	}
}
void toogleplayer(){
	//cout<<enter<<"\n";
    
	if(player=='X'){		
		player='O';
	}
	else {
		player='X';
	}
	
}
char win(char a[3][3]){
	//rows for A
	if(a[0][0]=='X'&&a[0][1]=='X'&&a[0][2]=='X'){
		return 'X';
	}
	if(a[1][0]=='X'&&a[1][1]=='X'&&a[1][2]=='X'){
		return 'X';
	}
	if(a[2][0]=='X'&&a[2][1]=='X'&&a[2][2]=='X'){
		return 'X';
	}
	//coloumn
		if(a[0][0]=='X'&&a[1][0]=='X'&&a[2][0]=='X'){
		return 'X';
	}
		if(a[0][1]=='X'&&a[1][1]=='X'&&a[2][1]=='X'){
		return 'X';
	}
		if(a[0][2]=='X'&&a[1][2]=='X'&&a[2][2]=='X'){
		return 'X';
	}
	//diagonal
		if(a[0][0]=='X'&& a[1][1]=='X'&&a[2][2]=='X'){
		return 'X';
	}
		if(a[0][2]=='X'&&a[1][1]=='X'&& a[2][0]=='X'){
		return 'X';	;
	}
}
char winb(char a[3][3]){
	//rows for A
	if(a[0][0]=='O'&&a[0][1]=='O'&&a[0][2]=='O'){
		return 'O';
	}
	if(a[1][0]=='O'&&a[1][1]=='O'&&a[1][2]=='O'){
		return 'O';
	}
	if(a[2][0]=='O'&&a[2][1]=='O'&&a[2][2]=='O'){
		return 'O';
	}
	//coloumn
		if(a[0][0]=='O'&&a[1][0]=='O'&&a[2][0]=='O'){
		return 'O';
	}
		if(a[0][1]=='O'&&a[1][1]=='O'&&a[2][1]=='O'){
		return 'O';
	}
		if(a[0][2]=='O'&&a[1][2]=='O'&&a[2][2]=='O'){
		return 'O';
	}
	//diagonal
		if(a[0][0]=='O'&& a[1][1]=='O'&&a[2][2]=='O'){
		return 'O';
	}
		if(a[0][2]=='O'&&a[1][1]=='O'&& a[2][0]=='O'){
		return 'O';	
	}
}

int main()
{
	char a[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
	int num;
	cout<<" Instructions"<<"\n";
	cout<<" how to play"<<"\n";
	cout<<" first player will be allocted 'X' and other 'O'"<<"\n";
	cout<<" Enter the num where you want to place your 'X' or 'O'"<<"\n";
	cout<<" Please donot enter anything other than number ,this program may show unkown behaviour"<<"\n";
	cout<<" what do you expect from program"<<"\n";
	cout<<" This program can take valid postive interger upto certain range ie 9"<<"\n"<<" if you enter number above 9 it will instruct you about invalid input"<<"\n";
	cout<<" I you enter the input at the block which was already filled then it not register it. And you have to enter it again "<<"\n";
	
	
	show(a);
	while(1){
		
		jump:cout<<"    Enter the number : "<<" ";
		cin>>num;
		if(num<1||num>9){
			cout<<"    Invalid output"<<"\n";
			goto jump;
		}
		system("cls");
                change(a,num);
		if(win(a)=='X'){
			show(a);
			cout<<"player "<<win(a)<<" won"<<"\n";
			break;
		}
		else if(winb(a)=='O'){
			show(a);
			cout<<"player "<<winb(a)<<" won""\n";
			break;
		}
		if(repeat==0)
		toogleplayer();
		show(a);
		if(i==9){
			show(a);
			cout<<"Match is Drawn";
			break;
		}
	
	}
	
	
}

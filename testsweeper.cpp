// testsweeper.cpp : main project file.

#include "stdafx.h"
#include<iostream>
#include<time.h>
#include<ctime>
#include<fstream>
#include<cstdlib>
using namespace std;

//prototypes of functions
void mines(int a[][8],int size);
void numbers(int array[][8],int size);
void board(char array2[][8],int size);
int axis(int array[][8],char array2[][8],int array3[][8],int array4[][8],int size);
void highscore(int & b);
void help();

//help function
void help(){
 cout<<endl;
cout<<"Welcome to Minesweeper Game."<<endl;
cout<<"At any given Time you can press D for Replay or E for Exiting the game."<<endl;
cout<<"1.During play use left and right click option for replay and Exit.  "<<endl;
cout<<"2.When you see 0 revealed then u can open its neighboring cell without any risk."<<endl;
cout<<"3.Only 10 Flags are available. Flags are your hint that mine is there. "<<endl;
cout<<"4.When you will open all the numbers without mine you will win. "<<endl;
cout<<"5.To unflag a flag jump to same cell and press r."<<endl;
}



//Placing mines
void mines(int a[][8],int size){
 for(int i=0;i<10;i++)
 {
  int row=rand()%size;
  int col=rand()%size;
   if(a[row][col]==9)
   { i--;
  }
  a[row][col]=9;
 }
}

//placing numbers
void numbers(int array[][8],int size){
 for(int j=0;j<size;j++){
  for(int k=0;k<size;k++){
   
 
     if(array[j][k]!=9&&k>0&&k<7){
    if(array[j-1][k-1]==9){
     array[j][k]++;
    }
   }
   if(array[j][k]!=9&&k>0&&k<7){
    if(array[j-1][k]==9){
     array[j][k]++;
    }
   }
 
   if(array[j][k]!=9&&k>0&&k<7){
    if(array[j-1][k+1]==9){
     array[j][k]++;
    }
   }
 
   if(array[j][k]!=9&&k>0&&k<7){
    if(array[j][k-1]==9){
     array[j][k]++;
    }
   
   }
 
   if(array[j][k]!=9&&k>0&&k<7){
    if(array[j][k+1]==9){
     array[j][k]++;
    }
   }
 
   if(array[j][k]!=9&&k>0&&k<7){
    if(array[j+1][k-1]==9){
     array[j][k]++;
    }
   }
 
   if(array[j][k]!=9&&k>0&&k<7){
    if(array[j+1][k]==9){
     array[j][k]++;
    }
   }
   if(array[j][k]!=9&&k>0&&k<7){
    if(array[j+1][k+1]==9){
     array[j][k]++;
    }
   }
  }
 } 
 for(int j=0;j<size;j++){
  for(int k=0;k<size;k++){
   
   if((array[j][k]!=9)&&(k==0)){
    if(array[j-1][k]==9){
     array[j][k]++;
    }
   }
   
   if((array[j][k]!=9)&&(k==0)){
    if(array[j-1][k+1]==9){
     array[j][k]++;
    }
   }
   
   if((array[j][k]!=9)&&(k==0)){
    if(array[j][k+1]==9){
     array[j][k]++;
    }
   }
   
   if((array[j][k]!=9)&&(k==0)){
    if(array[j+1][k]==9){
     array[j][k]++;
    }
   }
   
   if((array[j][k]!=9)&&(k==0)){
    if(array[j+1][k+1]==9){
     array[j][k]++;
    }
   }
  
   
   
   
   if((array[j][k]!=9)&&(k==7)){
    if(array[j-1][k-1]==9){
     array[j][k]++;
    }
   }
   
   if((array[j][k]!=9)&&(k==7)){
    if(array[j-1][k]==9){
     array[j][k]++;
    }
   }
   
   if((array[j][k]!=9)&&(k==7)){
    if(array[j][k-1]==9){
     array[j][k]++;
    }
   }
   
   if((array[j][k]!=9)&&(k==7)){
    if(array[j+1][k-1]==9){
     array[j][k]++;
    }
   }
   
   if((array[j][k]!=9)&&(k==7)){
    if(array[j+1][k]==9){
     array[j][k]++;
    }
   }
  
  }
 }
 
}

//setting board
void board(char array2[][8],int size){
 
 char a=178;
  for(int m=0;m<size;m++){
  for(int j=0;j<size;j++){
   
   array2[m][j]=a;
   
  }
}
}

 //moving in board.this is  the main function
int axis(int array[][8],char array2[][8],int array3[][8],int array4[][8],int size){
 int counterf=0;
 int total=0; int totalf=0;
 int set=0;
 char a=178;
 char b=179;
  int urow;
  int ucol;
  char o;
  char temp;
  int count=0;
  for(int x=0;x<8;x++){
   for(int y=0;y<8;y++){
    if(array[x][y]!=9){
    totalf=totalf+array[x][y];
    }
   }
  }

  int time=0; 
  int set2;
 for(int i=1;i>0;i++)
 {
  count++;
  if(i>0){
   
   time=clock();
   if(time/1000>999) // minesweeper has three digit timer
   {
    time=999999;
   }
   cout<<"time elasped : "<<time/1000<<" seconds"<<endl;
   cout<<"total : "<<total<<endl;
   cout<<"Enter row no. : ";
   cin.clear();
  cin>>urow;
  cout<<"Enter coloumn no. : ";
  cin.clear();
  cin>>ucol;
  cout<<"Enter right click or left click : ";
  cin.clear();
  cin>>o;
  urow=urow-1;
  ucol=ucol-1;
  if(o=='D'||o=='d'){
   cout<<"Do you really want to restart game?(press 1 for yes or any other key for no.) ";
   cin.clear();
   cin>>set2;
    if(set2==1){
     break;
    }
    if(set2==2){
     cout<<" ";
     continue;
    }
  }
  if(o=='e'||o=='E'){
   cout<<"Do you really want to Exit from game?(press 1 for yes or anyother key for no.) ";
   cin>>set2;
    if(set2==1){
     cout<<"Thanks for Playing Alah Hafiz"<<endl;
    system("PAUSE");
    return 0;
    }
    if(set2>=2){
     cout<<" ";
     continue;
    }
  }

  system("cls");
  }
  for(int m=0;m<size;m++){
   for(int n=0;n<size;n++){
    if(m==urow&&n==ucol&&o=='l'&&array[m][n]!=9&&array3[m][n]==0&&array2[m][n]!='f')
     {
     temp=array[m][n];
     
     if(temp==0){
     array2[m][n]=48;
     array3[m][n]=1;
     }
     
     if(temp==1){
     array2[m][n]=49;
     array3[m][n]=1;
     }
     
     if(temp==2){
     array2[m][n]=50;
     array3[m][n]=1;
     }
     
     if(temp==3){
     array2[m][n]=51;
     array3[m][n]=1;
     }
     
     if(temp==4){
     array2[m][n]=52;
     array3[m][n]=1;
     }
     
     if(temp==5){
     array2[m][n]=53;
     array3[m][n]=1;
     }
     
     if(temp==6){
     array2[m][n]=54;
     array3[m][n]=1;
     }
     
     if(temp==7){
     array2[m][n]=55;
     array3[m][n]=1;
     }
     
     if(temp==8){
     array2[m][n]=56;
     array3[m][n]=1;
     
     }
    total=total+array[m][n];
    }
    if(m==urow&&n==ucol&&o=='r'&&array3[m][n]==0&&array4[m][n]==0&&counterf<10)
    {
     array2[m][n]='f';
     array4[m][n]=1;
     counterf=counterf+1;
    
    }
    else if(m==urow&&n==ucol&&o=='r'&&array4[m][n]==1)
    {
     array2[m][n]=178;
     array4[m][n]=0;
     counterf=counterf-1;
    
    }
   
   cout<<array2[m][n]<<" "<<" ";
    
  }
  cout<<endl<<endl;
  }
  if(array[urow][ucol]==9&&o=='l'&&array2[urow][ucol]!='f'){
   system("cls");
   for(int m=0;m<8;m++){
    for(int n=0;n<8;n++){
     if(array[m][n]==9)
     {
      array2[m][n]='X'; // x is mine
     }
     
      cout<<array2[m][n]<<" "<<" ";
     
     
    }
     cout<<endl<<endl;
    }

   cout<<"You just hit a mine. Ohhh thats sad. Better luck next time : "<<endl;

   break;
  }
  if(total==totalf){
   int temp4=time/1000;
   system("cls");
   for(int r=0;r<8;r++){
    for(int l=0;l<8;l++){
     if(array2[r][l]=='f'|| array[r][l]==9){
      array2[r][l]='X';
     }
     cout<<array2[r][l]<<" "<<" ";
    }
    cout<<endl<<endl;
   }
   cout<<"Congratulation you win :"<<endl;
   highscore(temp4);
   break;
  }
   
}
}
void highscore(int & b){
 char array[20];
 ifstream ifile;
 ifile.open("highscore.txt");
 ofstream ofile;
 ofile.open("highscore.txt");
 int a;
 while(!ifile.eof()){
  ifile>>a;
  if(a>b){
   ofile<<a; ofile<<" ";
   cout<<"Enter name ";
   cin.getline(array,20,'\n');
   for(int i=0;array[i]!='\0';i++){
    ofile<<array[i];
   }
  }
 }
  ifile.close();
  ofile.close();
 }
int main (){
	 int array[8][8]={0};
	 int array3[8][8]={0};
	 int array4[8][8]={0};
	 char array2[8][8];
	 int size=8;
	int choice;
	int choice2;
	cout<<"Enter 1 for Help and anyother key to play game "<<endl;
	cin>>choice;
	if(choice==1){
		help();
		cout<<endl<<endl;
		cout<<"To play game now. Press 3 ";
		cin>>choice2;
	}
	if(choice>=2||choice2==3){

	 srand(time(0));

		mines(array,size);
		numbers(array,size);

							/*for(int i=0;i<8;i++){
 for(int j=0;j<8;j++){
  cout<<" "<<array[i][j]<<" ";
 }
cout<<endl<<endl;
}
*/
		board(array2,size);
		axis(array,array2,array3,array4,size);
		char o;
		cout<<"Do you want to countinue or exit. Enter R for replay or E for exit ";
		cin>>o;
		switch(o){
			case 'r':
			case 'R':
			{
				system("cls");
				for(int f=0;f<8;f++){
				for(int n=0;n<8;n++){
					array[f][n]=0;
					array3[f][n]=0;//this array checks whether mine is reveal or unreveal
					array4[f][n]=0; // this array checks that whether blocks has some flag or not
					array2[f][n]=178;
				}
			 }
			  mines(array,size);
			numbers(array,size);
			//board(array,size);
			axis(array,array2,array3,array4,size);
			break;
			}
			case 'e':
			case 'E':
				cout<<"Thanks for Playing."<<endl;
				system("PAUSE");
				break;

			default:
			cout<<"Invalid option Entered"<<endl;
			 break;
			}
		}  
	return 0;
 
}
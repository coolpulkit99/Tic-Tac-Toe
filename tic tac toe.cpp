#include <iostream>
#include <string.h>



using namespace std;

int win(string a[9],string b){
int i;
for(i=0;i<7;i+=3)
{
	if(a[i]==a[i+1] and a[i+2]==a[i+1] and a[i]==b)
	return 1;
}


for(i=0;i<3;i+=1)
{
	if(a[i]==a[i+3] and a[i+6]==a[i+3] and a[i]==b)
	return 1;
}

	if(a[0]==a[4] and a[8]==a[4] and a[0]==b)
	return 1;

	if(a[2]==a[4] and a[6]==a[4] and a[2]==b)
	return 1;

return 0;
}



int main()
{
int player=0;
	string 
	 tl[9]=" "
	,tr[9]=" "
	,bl[9]=" "
	,br[9]=" ";
	
int n=0,place=0;
cout<<tl[1]<<tl[8];


while(n<9){


cout<<"\n\t   Layout:  ";
cout<<"\n\t   |    |   ";
cout<<"\n\t_1_|__2_|_3_";
cout<<"\n\t   |    |   ";
cout<<"\n\t_4_|__5_|_6_";
cout<<"\n\t   |    |   ";
cout<<"\n\t 7 |  8 | 9 ";	
cout<<"\n";
cout<<"\n\t"<<tl[0]<<tr[0]<<" | "<<tl[1]<<tr[1]<<" | "<<tl[2]<<tr[2]<<" ";
cout<<"\n\t"<<bl[0]<<br[0]<<"_|_"<<bl[1]<<br[1]<<"_|_"<<bl[2]<<br[2]<<" ";
cout<<"\n\t"<<tl[3]<<tr[3]<<" | "<<tl[4]<<tr[4]<<" | "<<tl[5]<<tr[5]<<" ";
cout<<"\n\t"<<bl[3]<<br[3]<<"_|_"<<bl[4]<<br[4]<<"_|_"<<bl[5]<<br[5]<<" ";
cout<<"\n\t"<<tl[6]<<tr[6]<<" | "<<tl[7]<<tr[7]<<" | "<<tl[8]<<tr[8]<<" ";
cout<<"\n\t"<<bl[6]<<br[6]<<" | "<<bl[7]<<br[7]<<" | "<<bl[8]<<br[8]<<" ";	


if(n%2==0){
cout<<"\n\tFirst player's turn:\n";
}else{
cout<<"\n\tSecond player's turn:\n";}
cin>>place;
 if(place<1 or place>9)
 {system("cls");cout<<"\n\tPlease enter between 1 and 9.Try again!";continue;

 }
 if(tl[place-1]!=" ")
 {system("cls");cout<<"\n\tPlease enter a position that is not taken.Try again!";continue;

 }
 
if(n%2==0){
tl[place-1]="/";
tr[place-1]="\\";
bl[place-1]="\\";
br[place-1]="/";
player=1;
}else{
	
tl[place-1]="\\";
tr[place-1]="/";
bl[place-1]="/";
br[place-1]="\\";
player=2;
}
if(win(tl,tl[place-1]))
{
system("cls");
cout<<"\n";
cout<<"\n\t"<<tl[0]<<tr[0]<<" | "<<tl[1]<<tr[1]<<" | "<<tl[2]<<tr[2]<<" ";
cout<<"\n\t"<<bl[0]<<br[0]<<"_|_"<<bl[1]<<br[1]<<"_|_"<<bl[2]<<br[2]<<" ";
cout<<"\n\t"<<tl[3]<<tr[3]<<" | "<<tl[4]<<tr[4]<<" | "<<tl[5]<<tr[5]<<" ";
cout<<"\n\t"<<bl[3]<<br[3]<<"_|_"<<bl[4]<<br[4]<<"_|_"<<bl[5]<<br[5]<<" ";
cout<<"\n\t"<<tl[6]<<tr[6]<<" | "<<tl[7]<<tr[7]<<" | "<<tl[8]<<tr[8]<<" ";
cout<<"\n\t"<<bl[6]<<br[6]<<" | "<<bl[7]<<br[7]<<" | "<<bl[8]<<br[8]<<" ";	

cout<<"\n\tGame Over!\n";
cout<<"\tPlayer "<<player<<" wins!\n";
system("pause");
break;
	
	
}

if (n==8)
{
	
system("cls");
cout<<"\n";
cout<<"\n\t"<<tl[0]<<tr[0]<<" | "<<tl[1]<<tr[1]<<" | "<<tl[2]<<tr[2]<<" ";
cout<<"\n\t"<<bl[0]<<br[0]<<"_|_"<<bl[1]<<br[1]<<"_|_"<<bl[2]<<br[2]<<" ";
cout<<"\n\t"<<tl[3]<<tr[3]<<" | "<<tl[4]<<tr[4]<<" | "<<tl[5]<<tr[5]<<" ";
cout<<"\n\t"<<bl[3]<<br[3]<<"_|_"<<bl[4]<<br[4]<<"_|_"<<bl[5]<<br[5]<<" ";
cout<<"\n\t"<<tl[6]<<tr[6]<<" | "<<tl[7]<<tr[7]<<" | "<<tl[8]<<tr[8]<<" ";
cout<<"\n\t"<<bl[6]<<br[6]<<" | "<<bl[7]<<br[7]<<" | "<<bl[8]<<br[8]<<" ";	

cout<<"\n\tGame Over!\n";
system("pause");
break;

}

system("cls");
n+=1;
}

}

#include<iostream>
using namespace std;
int cont=0;
static int arr[10]; //Taking static so all values initialize with 0
int index;
//Fuction to convert the last 3 digits into the index of the array
int getindex(int sapid){
int a=sapid%1000;	//getting last 3 digits
int b;
int result=0;
while(a){
	b=a%10;
	a=a/10;
	result=b+result;
}
if(result>=10){
	a=result%10;
	result=result/10;
	result=result+a;
	return result;
}
else{
	return result;
}
}
//Function to insert the sapid into array
void insert(int sapid){
int index=getindex(sapid); //getting index value from getindex function made above
if(arr[index]==0)
{
arr[index]=sapid;
cout<<"Element "<<sapid<<" Inserted Successfully at "<<index<<" position"<<endl;
}
else
cout<<"There is a Collision"<<endl;

}
//Function to Traverse in the array
void traverse(){
	for(int i=0;i<=10;i++)
	{
cout<<i<<".) "<<arr[i]<<endl;
	}
}
//Main Function
int main(){
do{
int ch;
cout<<"1.Insert"<<endl<<"2.Display"<<endl<<"";
cin>>ch;
switch(ch){
	case 1:	cout<<"Enter SAP ID"<<endl;
	int sapid;
	cin>>sapid;
	insert(sapid);
	break;
	case 2: traverse();
	break;
	default:cout<<"Invalid selection"<<endl;
}
cout<<"Do you want to Continue(0/1)?"<<endl;
cin>>cont;
}while(cont);
cout<<endl<<"Exit Successfull";
}

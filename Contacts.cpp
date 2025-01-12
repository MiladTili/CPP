#include<iostream>
#include <fstream>
#include<string>
#include<cstdlib>
#include<conio.h>
#include<cmath>
using namespace std;	
int main()
{
	system("color 5");
	ofstream phonebook("phonebook.txt");
	string name;
	string numberphone;
	string postalcode;
	string email;
	string id;
	string addres;
	int contats;
	string search;
	string pak;
	cout<<"Welcome to phonebook.\nEntr the name-numberphone-postalcode-email-id-addres.\nIf you donot want to entet a contact choose number {EXIT} in the name.\n";
	for ( ; ; )
	{
	cout<<"\nEnter the name: ";
	cin>>name;
	if(name=="EXIT")
	break;
	phonebook<<name<<"\n"<<endl;
	cout<<"Enter the numberphone: ";
	cin>>numberphone;
	phonebook<<numberphone<<"\n"<<endl;
	cout<<"Enter the postalcode: ";
	cin>>postalcode;
	phonebook<<postalcode<<"\n"<<endl;
	cout<<"Enter the email: ";
	cin>>email;
	phonebook<<email<<"\n"<<endl;
	cout<<"Enter the id: ";
	cin>>id;
	phonebook<<id<<"\n"<<endl;
	cout<<"Enter the addres: ";
	cin>>addres;
	phonebook<<addres<<"\n"<<endl;
	phonebook.close();
    }
//________________________________________________________________________________________________________
//________________________________________________________________________________________________________
//________________________________________________________________________________________________________
    ifstream phonebook2("phonebook.txt");
	bool find=false;
    cout<<"Which of the foiiwing should the program do?\n1)search contacts.\n2)Delete contacts."<<endl;
	cin>>contats;
	if(contats==1)
	cout<<"Which contact do you want me to search for? "<<endl;
    cin>>search;
    if(contats==2) 
    cout<<"Which contact do you want me to delete for? "<<endl;
    cin>>pak;
    while(phonebook2>>name)
    {
    phonebook2>>numberphone;
	phonebook2>>postalcode;
	phonebook2>>email;
	phonebook2>>id;
	phonebook2>>addres;
    if(name==search)
    {
    cout<<name<<"\n"<<numberphone<<"\n"<<postalcode<<"\n"<<email<<"\n"<<id<<"\n"<<addres<<"\n"<<endl;
    find=true;
    break;
	}
    }
	if(find==false)
	cout<<search<<"\nThe desired contact is not in Phonebook."<<endl;
	if(name==pak)
	{
	system("name,numberphone,postalcode,email,id,addres");
	phonebook2.close();
    }
	return 0;
}
// M.T
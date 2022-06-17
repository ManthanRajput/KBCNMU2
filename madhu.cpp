#include<iostream.h>

#include<conio.h>

#include<string.h>

#include<stdlib.h>

class list

{

    char arr[50][50];
    int n; // size of string array
    public:

    void getdata();

    void putdata();

    void insort();

};

void list::getdata()

{
     cout<<"enter the tital no.of list :";

     cin>>n;

     cout<<"enter the elemwnt of list :";

     for(int i=0;i<n;i++)

     cin>>arr[i];

}

void list::putdata()

{
     cout<<"the list elements are"<<endl;

     for(int i=0;i<n;i++)

     cout<<arr[i]<<endl;

     getch();

}

void list::insort()

{

     int i,j;
     char temp[50];

     for(i=0;i<n-1;i++)

     {

	for(j=0;j<n-i-1;j++)

	{

	   if(strcmp(arr[j],arr[j+1])>=0)

	   {
	      strcpy(temp,arr[j]);

	      strcpy(arr[j],arr[j+1]);

	      strcpy(arr[j+1],temp);

	   }

	}

     }

}

void main()

{

     clrscr();

     list obj;

     obj.getdata();

     cout<<"before sortimg"<<endl;

     obj.putdata();

     obj.insort();

     cout<<"after sorting"<<endl;

     obj.putdata();

     getch();

}

#include <iostream>
#include <string>
using namespace std;

struct library{
string book_name;
string author;
int page;
float price;
};

int main()
{
   library lib[100];
   int i, input, count;
   i=input=count=0;
   string au_name;

   while(input!=5)
   {
       cout<<"Welcome to the Library"<<endl;
       cout<<"1. Add book Information"<<endl;
       cout<<"2. Print book Information"<<endl;
       cout<<"3. List all the book given by author"<<endl;
       cout<<"4. List the count of the books in the library"<<endl;
       cout<<"5. Exit"<<endl;

       cout<<"Enter the above Details"<<endl;
       cin>>input;

       switch(input)
       {
           case 1:
           cout<<"enter the book name : " <<endl;
           cin>>lib[i].book_name;

           cout<<"enter the author name: "<<endl;
           cin>>lib[i].author;

           cout<<"Enter pages :"<<endl;
           cin>>lib[i].page;

           cout<<"enter price :"<<endl;
           cin>>lib[i].price;
           count++;
           break;

           case 2:
            cout<<"Display book information";
            for(int i=0; i<count; i++)
            {
                cout<<"book name" <<lib[i].book_name<<endl;
                cout<<"author name"<<lib[i].author<<endl;
                cout<<"page"<<lib[i].page<<endl;
                cout<<"price"<<lib[i].price<<endl;
            }
           break;

           case 3:
            cout<<"List all the book given by author"<<endl;
            cin>>au_name;
            for(int i=0; i<count; i++)
            {
                if(au_name==lib[i].author)
                cout<<lib[i].book_name<<" "<<lib[i].author<<" "<<lib[i].page<<" "<<lib[i].price<<endl;
            }
            break;

           case 4:
            cout<<"count"<<count<<endl;
            break;

            case 5:
                exit(0);
       }

   }
    return 0;
}

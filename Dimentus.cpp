// Dimensions calculator (Dimentus).

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
main()
{
    float length,width,height,base,radius;
    char choice,repeat,shutdown_checker;
    while(1)
    {
    cout<<"Welcome User !\nSelect a number from given menu\nThis will let us know what can we help you calculate today ...\n\n";
    cout<<"1 for Area of rectangle .\n";
    cout<<"2 for Area of square .\n";
    cout<<"3 for Area of circle .\n";
    cout<<"4 for Area of triangle .\n";
    cout<<"5 for Volume of block/cube .\n";
    cout<<"6 for volume of cylinder .\n";
    cout<<"\nYour choice : ";
    choice=getche();
    cout<<"\n";
    system("pause");
    system("cls");
    switch(choice)
    {
        case '1':
            cout<<"Area of Rectangle :\n\n";
            cout<<"Enter length : ";
            cin>>length;
            cout<<"Enter width : ";
            cin>>width;
            system("cls");
            cout<<"Area of Rectangle :\n\n";
            cout<<"Length : "<<length<<"\n";
            cout<<"Width : "<<width<<"\n";
            cout<<"\nArea of Rectangle : "<<length*width<<" square unit";
            getch();
            system("cls");
            break;
        case '2':
            cout<<"Area of Square :\n\n";
            cout<<"Enter length : ";
            cin>>length;
            system("cls");
            cout<<"Area of Square :\n\n";
            cout<<"Length : "<<length<<"\n";
            cout<<"\nArea of Square : "<<length*length<<" square unit";
            getch();
            system("cls");
            break;
        case '3':
            cout<<"Area of Circle :\n\n";
            cout<<"Enter radius : ";
            cin>>radius;
            system("cls");
            cout<<"Area of Circle :\n\n";
            cout<<"Radius : "<<radius<<"\n";
            cout<<"\nArea of Circle : "<<3.14159*radius*radius<<" square unit";
            getch();
            system("cls");
            break;
        case '4':
            cout<<"Area of Triangle :\n\n";
            cout<<"Enter base : ";
            cin>>base;
            cout<<"Enter height : ";
            cin>>height;
            system("cls");
            cout<<"Area of Triangle :\n\n";
            cout<<"Base : "<<base<<"\n";
            cout<<"Height : "<<height<<"\n";
            cout<<"\nArea of Triangle : "<<(base/2)*height<<" square unit";
            getch();
            system("cls");
            break;
        case '5':
            cout<<"Volume of Block/Cube :\n\n";
            cout<<"Enter length : ";
            cin>>length;
            cout<<"Enter width : ";
            cin>>width;
            cout<<"Enter height : ";
            cin>>height;
            system("cls");
            cout<<"Volume of Block/Cube :\n\n";
            cout<<"Length : "<<length<<"\n";
            cout<<"Width : "<<width<<"\n";
            cout<<"Height :"<<height<<"\n";
            cout<<"\nVolume of Block/Cube : "<<length*width*height<<" cubic unit";
            getch();
            system("cls");
            break;
        case '6':
            cout<<"Volume of Cylinder :\n\n";
            cout<<"Enter radius : ";
            cin>>radius;
            cout<<"Enter height : ";
            cin>>height;
            system("cls");
            cout<<"Volume of Cylinder :\n\n";
            cout<<"Radius : "<<radius<<"\n";
            cout<<"Height : "<<height<<"\n";
            cout<<"\nVolume of Cylinder : "<<3.14159*radius*radius*height<<" cubic unit";
            getch();
            system("cls");
            break;
        default:
            cout<<"Invalid Input ...\nPress any key to try again ...";
            getch();
            system("cls");
    }
    while(1)
    {
    cout<<"Do you want to perform a new calculation (y/n) : ";
    repeat=getch();
    system("cls");
    if(repeat=='y'||repeat=='Y')
    {
        break;
    }
    else if(repeat=='n'||repeat=='N')
    {   
        shutdown_checker=1;
        break;
    }
    else
    {
        cout<<"Invalid input ...\nEnter y/Y for yes or n/N for no ...\nPress any key to try again ...";
        getch();
        system("cls");
    }
    }
    if(shutdown_checker==1)
    {
        cout<<"Thanks for Using Dimentus ...\nSee you next time ... Good Bye !";
        getch();
        break;
    }
    }
}
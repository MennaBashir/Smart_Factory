#include <iostream>
#include<string>//use getline()
#include<conio.h>//use getch()
#include<stdlib.h>//use system ("cls")
#include<windows.h>//use color
#include"Factory.h"
using namespace std;
int main()
{
    system("color 70");
    cout<<"\n\t\t\t\x03 Welcome to the smart factory \x03\n";
    cout<<"\t\t\t_________________________________\n\n";
    //Assume that this factory produces three types of candy #3product
    Factory<string> Product_01;

    Factory<string> Product_02;
    Factory<string> Product_03;
    std::string step_01,step_02,step_03;
    int num,x,y,z,i1,i2,i3;
    i1=i2=i3=0;
    do
    {
        system("color 70");
        cout<<"We have Three product,choose what you want\x02"<<endl;
        cout<<"\n1. The first product\n";
        cout<<"2. The second product\n";
        cout<<"3. The third product\n";
        cout<<"0. Exit the factory\n";
        cin>>num;
        system("cls");
        if(num==1)
        {
            system("color 75");
            do
            {
                cout<<"\n\tselect what you want\n\n";
                cout<<"1. Adding product production steps\n";
                cout<<"2. Delete one or more specific steps\n";
                cout<<"3. Show the steps of producing the product\n";
                cout<<"0. Return to main\n";
                cin>>x;
                system("cls");
                if(x==1)
                {
                    cout<<"\t\tBe precise in writing the steps\n";
                    cout<<"\t\t_______________________________\n";
                    char ch='a';
                    while(ch!='0')
                    {
                        cout<<++i1<<". ";
                        std::getline(std::cin >> std::ws,step_01);
                        Product_01.Push(step_01);
                        cout<<"Press Enter if you want add another step \nand press 0 to end process";
                        ch=getch();
                        cout<<endl;
                    }

                    system("cls");
                }
                else if(x==2)
                {
                    int po1;
                    cout<<"\n Specify the process number that you want to delete \n to complete the production process successfully: ";
                    cin>>po1;
                    Product_01.Delete(po1);
                    i1--;
                    cout<<"\nPress Enter to continue";
                    getch();
                    system("cls");
                }
                else if(x==3)
                {
                    cout<<"\tThe steps must be followed in order for successful product quality \x03\n";
                    cout<<"\t____________________________________________________________________\n";
                    Product_01.Display();
                    cout<<"\n\tPress Enter to continue";
                    getch();
                    system("cls");
                }
                else if(x>3 || x<0)
                {
                    cout<<"Out Of Range\n";
                    cout<<"\n\tPress Enter to continue";
                    getch();
                    system("cls");
                }
            }
            while(x!=0);
        }
        else if(num==2)
        {
            system("color 71");
            do
            {
                cout<<"\n\tselect what you want\n\n";
                cout<<"1. Adding product production steps\n";
                cout<<"2. Delete one or more specific steps\n";
                cout<<"3. Show the steps of producing the product\n";
                cout<<"0. Return to main\n";
                cin>>y;
                system("cls");
                if(y==1)
                {
                    cout<<"\t\tBe precise in writing the steps\n";
                    cout<<"\t\t_______________________________\n";
                    char ch1='a';
                    while(ch1!='0')
                    {
                        cout<<++i2<<". ";
                        std::getline(std::cin >> std::ws,step_02);
                        Product_02.Push(step_02);
                        cout<<"Press Enter if you want add another step \nand press 0 to end process";
                        ch1=getch();
                        cout<<endl;
                    }

                    system("cls");
                }
                else if(y==2)
                {
                    int po2;
                    cout<<"\n Specify the process number that you want to delete \n to complete the production process successfully: ";
                    cin>>po2;
                    Product_02.Delete(po2);
                    i2--;
                    cout<<"\nPress Enter to continue";
                    getch();
                    system("cls");
                }
                else if(y==3)
                {
                    cout<<"\tThe steps must be followed in order for successful product quality \x03\n";
                    cout<<"\t____________________________________________________________________\n";
                    Product_02.Display();
                    cout<<"\n\tPress Enter to continue";
                    getch();
                    system("cls");
                }
                else if(y>3 || y<0)
                {
                    cout<<"Out Of Range\n";
                    cout<<"\n\tPress Enter to continue";
                    getch();
                    system("cls");
                }
            }
            while(y!=0);
        }
        else if(num==3)
        {
            system("color 74");
            do
            {
                cout<<"\n\tselect what you want\n\n";
                cout<<"1. Adding product production steps\n";
                cout<<"2. Delete one or more specific steps\n";
                cout<<"3. Show the steps of producing the product\n";
                cout<<"0. Return to main\n";
                cin>>z;
                system("cls");
                if(z==1)
                {
                    cout<<"\t\tBe precise in writing the steps\n";
                    cout<<"\t\t_______________________________\n";
                    char ch2='a';
                    while(ch2!='0')
                    {
                        cout<<++i3<<". ";
                        std::getline(std::cin >> std::ws,step_03);
                        Product_03.Push(step_03);
                        cout<<"Press Enter if you want add another step \nand press 0 to end process";
                        ch2=getch();
                        cout<<endl;
                    }

                    system("cls");
                }
                else if(z==2)
                {
                    int po3;
                    cout<<"\n Specify the process number that you want to delete \n to complete the production process successfully: ";
                    cin>>po3;
                    Product_03.Delete(po3);
                    i3--;
                    cout<<"\nPress Enter to continue";
                    getch();
                    system("cls");
                }
                else if(z==3)
                {
                    cout<<"\tThe steps must be followed in order for successful product quality \x03\n";
                    cout<<"\t____________________________________________________________________\n";
                    Product_03.Display();
                    cout<<"\n\tPress Enter to continue";
                    getch();
                    system("cls");
                }
                else if(z>3 || z<0)
                {
                    cout<<"Out Of Range\n";
                    cout<<"\n\tPress Enter to continue";
                    getch();
                    system("cls");
                }
            }
            while(z!=0);
        }
        else if(num==0)
        {
            system("color 70");
            cout<<"\n\t\tWe hope to return soon \x02";
        }
        else
        {
            system("color 70");
            cout<<"Out Of Range\n";
            cout<<"\n\tPress Enter to continue";
            getch();
            system("cls");
        }
    }
    while(num!=0);
    return 0;
}


#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include <cctype>
#include <iomanip>
#include<windows.h>
#include<time.h>
using namespace std;
/*class login{
    public:
 string UserName,Password; 
};*/
void date()
{
  time_t T= time(NULL);
  struct  tm tm = *localtime(&T);
  cout<<endl<<endl<<endl;
  printf("\t\t\t\t\t   Date :: %02d/%02d/%04d\n",tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
}
//To give delay to load Login System
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

void showdata()
{ 
    
	
	char arrshow[]={'V','I','J','A','Y', ' ' ,'M','A','L','L','Y','A', ' ','B','A','N','K','@','@'};
	cout<<"\n\n\n\n\n\n\t\t\t";
	for(int i=0;i<25;i++)
	{
		cout<<arrshow[i];
		Sleep(500);
		
	}
	system("CLS");
}
class bank
{
public:
    string name;
    int accno;
    string atype;
    int aadhar_number,mobile_number;
    char panno[20] ;
public:
    void  getAccountDetails()
    {
        cout<<"\nEnter Customer Name :- ";
        cin.ignore();
        cin>>name;
        cout<<"\nEnter Account Number  :-";
        cin.ignore();
        cin>>accno;
        cout<<"\nEnter Account Type    :- ";
        cin.ignore();
        cin>>atype;
        
        cout<<"\nEnter Your Mobile Number :- ";
			cin.ignore();
			cin>>mobile_number;
			cout<<"\nEnter Your Aadhar Number :- ";
			cin.ignore();
			cin>>aadhar_number;
            cout<<"\nEnter Your pan card Number :- ";
			cin.ignore();
			cin>>panno;
    }

    void address(){ 
        char add[40];
        cout<<"\n Enter your address :-";
        cin>>add;

    }
    void displayDetails()
    {
        cout<<"\n\nCustomer Name : "<<name;
        cout<<"\nAccount Number  : "<<accno;
        cout<<"\nAccount Type    : "<<atype;
    }
};
void login();
void registration();
class current_account : public bank
{
private:
    float balance;
public:
    void c_display()
    {
        cout<<"\nBalance :"<<balance;
    }
    void c_deposit()
    {
        float deposit;
        cout<<"\nEnter amount to Deposit :  ";
        cin>>deposit;
        balance = balance + deposit;
    }
    void c_withdraw()
    {
        float withdraw;
        cout<<"\n\nBalance : "<<balance;
        cout<<"\nEnter amount to be withdraw :";
        cin>>withdraw;
        if(balance > 1000)
        {
            balance=balance-withdraw;
            cout<<"\nBalance Amount After Withdraw: "<<balance;
        }
        else
        {
            cout<<"\n Insufficient Balance";
        }
 
    }
 
 
};
 
class saving_account : public bank
{
private:
    float sav_balance;
public:
    void s_display()
    {
        cout<<"\nBalance :  "<<sav_balance;
    }
    void s_deposit()
    {
        float deposit,interest;
        cout<<"\nEnter amount to Deposit :  ";
        cin>>deposit;
        sav_balance = sav_balance + deposit;
        interest=(sav_balance*2)/100;
        sav_balance=sav_balance+interest;
    }
    void s_withdraw()
    {
        float withdraw;
        cout<<"\nBalance :- "<<sav_balance;
        cout<<"\nEnter amount to be withdraw : ";
        cin>>withdraw;
        if(sav_balance > 500)
        {
            sav_balance=sav_balance-withdraw;
            cout<<"\nBalance Amount After Withdraw: "<<sav_balance;
        }
        else
        {
            cout<<"\n Insufficient Balance";
        }
    }
};

class loan :public saving_account, public current_account{ 
    public: 
    double amount;
double rates;
int years;
void inputFunction(){
    cout<<"\n Enter the amount of the loan: ";
cin>>amount;

if(amount > 100000)
{
cout<<"\n Error: Amount Exceeds $100,000.00";
return;
}

cout<<"\n Enter the annual interest rate (example 3 = 3%):";
cin>>rates;
if(rates > 22)
{
cout<<"\n Error: Rates Exceeds 22%";
return;
}

cout<<"\n Enter the Duration of the Loan in years:";
cin>>years;

if(years > 6)
{
cout<<"\n Error: Years Exceeds 6";
return;
}

}
void outputFunction(){
    double emi = 0;
double paybackamt = 0;
double interest = (amount*rates*years)/100;

paybackamt = amount + interest;
emi = paybackamt/(years*12);



cout<<"\n\n";
cout<<left<<"\tLoan Amount emi: "<<emi; 
cout<<"\n total paybackamount="<<paybackamt;
cout<<right;

}

   
};

fun(){
    int choice;

        cout<<"***********************************************************************\n\n\n";

        cout<<"                      Welcome to login page  of Vijay Mallya Bank                              \n\n";

        cout<<"*******************        MENU        *******************************\n\n";

        cout<<"1.LOGIN"<<endl;
         cout<<"2.REGISTER"<<endl;
         cout<<"3.Exit"<<endl;
        cout<<"\nEnter your choice :";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
                case 1:
                        login();
                        break;

                case 2:

                        registration();

                        break;

                case 4:
                        cout<<"Thanks for using this program.\nThis program is created by @InhaleCode(rxn)\n\n";
                        break;
                default:

                        system("cls");
                        cout<<"You've made a mistake , Try again..\n"<<endl;
                        fun();

        }



}


 void fx()
 {
          current_account c1;
    saving_account s1;
    loan l1;
    char type;
    cout<<"\nEnter S for saving customer and C for current a/c customer : ";
    cin>>type;
    int choice;
    if(type=='s' || type=='S')
    {
        s1.getAccountDetails();
        s1.address();
        while(1)
        {
            cout<<"\nChoose Your Choice"<<endl;
            cout<<"1)   Deposit"<<endl;
            cout<<"2)   Withdraw"<<endl;
            cout<<"3)   Display Balance"<<endl;
            cout<<"4)   Display with full Details"<<endl;
             cout<<"5)   loan"<<endl;
            cout<<"6)   Exit"<<endl;
            cout<<"Enter Your choice: ";
            cin>>choice;
            switch(choice)
            {
            case 1 :
                s1.s_deposit();
                break;
            case 2 :
                s1.s_withdraw();
                break;
            case 3 :
                s1.s_display();
                break;
            case 4 :
                s1.displayDetails();
                s1.s_display();
                break;
                 case 5 :
                   l1.inputFunction();
                   l1.outputFunction();
                   break;
            case 6 :
                   
                goto end;
                break;
            default:
                cout<<"\n\nEntered choice is invalid,\"TRY AGAIN\"";
            }
        }
    }
    else if(type=='c' || type=='C')
    {
        c1.getAccountDetails();
        c1.address();
        while(1)
        {
            cout<<"\nChoose Your Choice"<<endl;
            cout<<"1)   Deposit"<<endl;
            cout<<"2)   Withdraw"<<endl;
            cout<<"3)   Display Balance"<<endl;
            cout<<"4)   Display with full Details"<<endl;
             cout<<"5)   loan"<<endl;
            cout<<"6)   Exit"<<endl;
            cout<<"Enter Your choice: ";
            cin>>choice;
            switch(choice)
            {
            case 1 :
                c1.c_deposit();
                break;
            case 2 :
                c1.c_withdraw();
                break;
            case 3 :
                c1.c_display();
                break;
            case 4 :
                c1.displayDetails();
                c1.c_display();
                break;
                case 5 :
                    l1.inputFunction();
                   l1.outputFunction();
                   break;
            case 6 :
                goto end;
                break;
            default:
                cout<<"\n\nEntered choice is invalid,\"TRY AGAIN\"";
            }
        }
    }
   
    else
    {
        cout<<"\nInvalid Account Selection";
    }
end:
    cout<<"\nThank You for Banking with us..";
    
 }
int main()

{
     system("color 5");
    showdata();
    date();
    delay(150);
    fun();
   
  
}

void login(){
    int count;
        string user,pass,u,p;
        system("cls");
        cout<<"please enter the following details"<<endl;
        cout<<"USERNAME :";
        cin>>user;
        cout<<"PASSWORD :";
        cin>>pass;
        ifstream input("database.txt");
        while(input>>u>>p)
        {
                if(u==user && p==pass)
                {
                        count=1;
                        system("cls");
                }
        }
        input.close();
        if(count==1)
        {
                cout<<"\n\t\t\tHello  "<<user<<"\n\t\t\t<LOGIN SUCCESSFUL>\nThanks for logging in..\n";
                cin.get();
                cin.get();
               // main();
               fx();
        }
        else
        {
                cout<<"\nLOGIN ERROR\nPlease check your username and password\n";
               // main();
        }
        
}
void registration(){
        system("cls");
     
       string reguser,regpass,ru,rp;

        system("cls");
        cout<<"Enter the username :";
        cin>>reguser;
        cout<<"\nEnter the password :";
       cin>>regpass;
        ofstream reg("database.txt",ios::app);
        reg<<reguser<<' '<<regpass<<endl;
        system("cls");
        cout<<"\nRegistration Sucessful\n";
        fun();
       // main();
}
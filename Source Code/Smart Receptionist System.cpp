#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<conio.h>
#include<time.h>
#include<iomanip>
#include<windows.h>
using namespace std;
int totalam,totalam2;
int aaa,bbb;
int n, Subtotal, rmsrvs, visit, amnt=0, cnt=0, two=0, three=0, four=0, k=0, c=0;
string res = "";

struct emp
{
    string name,id,address,contact;
    int salary, crntsalary = 0, walm = 0;
};
int total=0;
emp e[100];

//MADE BY TUSHAR DEY- 167
int RoomChoose(int asso, int RM1[], int RM2[], int RM3[], int RM4[], int RM5pp[]);
int *SpecialService();
int CarRental(int crnt[]);
void BankTransfer();
void LuckyWinner();
void CryptoCurrency();
void PaymentCustomer();

//MADE BY MAHINUR RAHMAN- 160
void empdata();
void showEmpInfo();
void Search();
void update();
void PaymentSalary();
void CheckSalary();
void del();

//MADE BY SUMAIYA OISHEE- 161
void two_wheel();
void three_wheel();
void four_wheel();
void ShowParkInfo();
int Parking();
void DeletePrkInfo();

//MADE BY RAYAT- 162
int DoctorList();
int ServiceList();
int PromoCode(int aaa,int bbb);
int Total();
int Payment();
int Input();
string namecheck(string a);
template<typename T>
string itos(T i);

//MADE BY AHAD- 156
void doctorLogin();
void doctor();
void hospital();
void loginD();

//MADE BY Koushik-173
int main();



    /////HOSPITAL TEAM WORKS...............................................................
	/////STARTS FROM HERE...............................................................
	/////CLASSIFIED.....................................................................
int DoctorList()
{
    string line;
	ofstream file;
	int input;
	a:
	cout<<"Select your doctor"<<endl;
    ifstream file1("DoctorPay.txt");

    while(getline(file1, line))
    {
        cout<<line<<endl;
    }

    file.close();
    cout<<"Enter your input : ";
    cin>>input;
    system("cls");
    //cout<<input;
    int num[]={1,2,3,5,7,10,12,14,17,18,20};
    int num2[]={4,6,8,13,15,16,19};
    int num3[]={9,11,21};
    {
        for(int i=0;i<11;i++)
        {
            if(input==num[i])
            {
                return 1000;
            }
            else if(input==num2[i])
            {
                return 1200;
            }
            else if(input==num3[i])
            {
                return 2000;
            }
        }
    }

}

int ServiceList()
{
    int x,sum=0;
    string line;
	ofstream file;
	int input;
	b:
	cout<<"Select your Services : "<<endl;
    ifstream file1("Service.txt");

    while(getline(file1, line))
    {
        cout<<line<<endl;
    }

    file.close();
    cout<<"How many service you used : ";
    cin>>x;
    int y[x];
    cout<<"Enter the number : ";
    for(int i=0;i<x;i++)
    {
        cin>>y[i];
    }
    for(int i=0;i<x;i++)
    {
        if(1==y[i])
        {
             sum+=1200;
        }
        else if(2==y[i])
        {
             sum+=2000;
        }
        else if(3==y[i])
        {
             sum+=5000;
        }
        else if(4==y[i])
        {
             sum+=1000;
        }
        else if(5==y[i])
        {
            sum+=1300;
        }
        else if(6==y[i])
        {
            sum+=500;
        }
        else if(7==y[i])
        {
            sum+=800;
        }
        else if(8==y[i])
        {
            sum+=900;
        }
    }
    system("cls");
    return sum;

}
int PromoCode(int aaa,int bbb)
{
    a:
    int sum;
    sum=aaa+bbb;
    string code;
    string promo="DOC5";
    cout<<"enter you Promocode : ";
    cin>>code;
    if(code==promo)
    {
        cout<<"Promo Code applied Successful"<<endl;
        totalam2=(sum*5)/100;
        totalam=sum-totalam2;
    }
    else
    {
        cout<<"Invalid Promo Code"<<endl;
        cout<<"Try again"<<endl<<endl;
        goto a;

    }
}

int Total()
{
    cout<<"*****Update*****"<<endl<<endl;
    cout<<"Doctor fee  : "<<aaa<<" TK"<<endl;
    cout<<"Service fee : "<<bbb<<" TK"<<endl;
    cout<<"Discount    : "<<totalam2<<" TK"<<endl;
    cout<<"------------------"<<endl;
    cout<<"Total Bill  : "<<totalam<<" TK"<<endl;
}

int Payment()
{
    int input;
    cout<<"\t\t\t\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";
cout<<"\n\n\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t _______________________________________________________________________________________ \n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                          Payment Option                                               |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                          1 >>  Bank Payment                                           |\n";
cout<<"\t\t|                          2 >>  Bkash Payment                                          |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|_______________________________________________________________________________________|\n";
a:cout<<"\t\tEnter your choice : ";cin>>input;
input+=10;
if(input>12||input<11){cout<<"\n\n\t\t\t\t\t\tInvalid Choice\n";cout<<"\t\t\t\t\t\tTry again...........\n\n";goto a;}
system("cls");
if(input==11)
{
    cout<<"\t\t\t\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";

cout<<"\t\t _______________________________________________________________________________________ \n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                  Send you payment to this A/C number                                  |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                       Account number:28277620                                         |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|_______________________________________________________________________________________|\n";
//cout<<"\t\tAfter complete you payment press 1";cin>>input;
exit(0);
}
else if(input==12)
{
    f:
    string input;
    cout<<"\t\t\t\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";

cout<<"\t\t _______________________________________________________________________________________ \n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                  Send you payment to this Merchant number                             |\n";
cout<<"\t\t|                             Number:01700000000                                        |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|_______________________________________________________________________________________|\n";
cout<<"\t\tEnter your TrxID : ";cin>>input;
system("cls");
    string line;
	ofstream file;
    ifstream file1("TrxID.txt");

    while(getline(file1, line))
    {
        if(line==input)
        {
            cout<<"\t\t\t\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";

cout<<"\t\t _______________________________________________________________________________________ \n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                  Payment Complete                                     |\n";
cout<<"\t\t|                            Thanks for using our service                               |\n";
cout<<"\t\t|                                    XYZ Hospital                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|_______________________________________________________________________________________|\n";
exit(0);
        }
        else
        {
            cout<<"TrxID Error,Try again"<<endl;
            goto f;
        }
    }

    file.close();
}


}
int Input()
{
    int input,in;

        cout<<"\t\t\t\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";

cout<<"\t\t _______________________________________________________________________________________ \n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                         Select Your Doctor from this list                             |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|_______________________________________________________________________________________|\n";
a:cout<<"\t\tPress 1 to continue : ";cin>>input;
if(input>1||input<1){cout<<"\n\n\t\t\t\t\t\tInvalid Choice\n";cout<<"\t\t\t\t\t\tTry again...........\n\n";goto a;}
system("cls");
if(input==1)
{
    goto cs;
}

y:
cout<<"\n\n\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t _______________________________________________________________________________________ \n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                          Do You use our Services?                                     |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                          1 >>  Yes                                                    |\n";
cout<<"\t\t|                          2 >>  No                                                     |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|_______________________________________________________________________________________|\n";
aa:cout<<"\t\tEnter your choice : ";cin>>input;
if(input>2||input<1){cout<<"\n\n\t\t\t\t\t\tInvalid Choice\n";cout<<"\t\t\t\t\t\tTry again...........\n\n";goto aa;}
input++;
system("cls");
if(input==2)
{
    goto cs;
}
else
{
    bbb=0;
}
c:
        cout<<"\t\t\t\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";
cout<<"\n\n\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t _______________________________________________________________________________________ \n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                          Do you have any Promo code?                                  |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                          1 >>  Yes                                                    |\n";
cout<<"\t\t|                          2 >>  No                                                     |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|_______________________________________________________________________________________|\n";
aaa:cout<<"\t\tEnter your choice : ";cin>>input;
if(input>2||input<1){cout<<"\n\n\t\t\t\t\t\tInvalid Choice\n";cout<<"\t\t\t\t\t\tTry again...........\n\n";goto aaa;}
input+=2;
system("cls");
if(input==3)
{
    goto cs;
}
else
{
    totalam=aaa+bbb;
}
d:
        cout<<"\t\t\t\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";
cout<<"\n\n\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t _______________________________________________________________________________________ \n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                    Total amount                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|_______________________________________________________________________________________|\n";
aaaa:cout<<"\t\tPress 1 to continue : ";cin>>input;
if(input>1||input<1){cout<<"\n\n\t\t\t\t\t\tInvalid Choice\n";cout<<"\t\t\t\t\t\tTry again...........\n\n";goto aaaa;}
input+=3;
system("cls");
if(input==4)
{
    goto cs;
}
e:
        cout<<"\t\t\t\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";
cout<<"\n\n\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t _______________________________________________________________________________________ \n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                    Payment                                            |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|_______________________________________________________________________________________|\n";
aaaaa:cout<<"\t\tPress 1 to continue : ";cin>>input;
if(input>1||input<1){cout<<"\n\n\t\t\t\t\t\tInvalid Choice\n";cout<<"\t\t\t\t\t\tTry again...........\n\n";goto aaaaa;}
input+=4;
system("cls");
if(input==5)
{
    goto cs;
}
    cs:
    switch(input)
    {
    case 1:
    {

        system("cls");
        //DoctorList();

        //cout<<DoctorList()<<endl;
        aaa=DoctorList();
        goto y;
    }
    break;

    case 2:
    {

        system("cls");
        //cout<<ServiceList()<<endl;
        bbb=ServiceList();
        goto c;
    }
    break;

    case 3:
    {
        system("cls");
        PromoCode(aaa,bbb);
        goto d;
    }
    break;

    case 4:
    {
        system("cls");
        Total();
        goto e;
    }
    break;
    case 5:
    {
        system("cls");
        Payment();

    }
    break;

}
}
void doctorLogin()
{

   int n;
   system("cls");
      cout<<"\n\n\n\n";
    cout<<"\n\t\t\t\t                     Doctor Portal                  ";
    cout<<"\n\t\t\t\t                     -------------                  ";
    cout<<"\n\n\n\n\t\t\t\t\t\t01. hospital information "<<endl;
    cout<<"\n\t\t\t\t\t\t02. patient information "<<endl;
    cout<<"\n\t\t\t\t\t\t03. doctor information "<<endl;
    cout<<"\n\t\t\t\t\t\t04. Exit "<<endl;

    cout<<"\n\n\t\t\t\t\t\tChoose any option : ";
    cin>>n;

    switch (n)
    {

    case 2:
        {
            string line;
    system("cls");
     ifstream file1("patient_information.txt");

     while(getline(file1,line))
     {
         cout<<line<<endl;
     }
     char ch;
     cout<<"\n\n\n\n\n\t\t\t\t\t\t ";
     cout<<"press 'g' to go back : ";
     cin>>ch;

     switch(ch)
     {
     case 'g':
        {
            system("cls");
          doctorLogin();
        }
     }



        }

    case 3:
        {
            doctor();
                break;
        }

    case 1:
        {
            hospital();
            break;
        }

    case 4:
        {
            system("cls");
            exit(0);

            break;
        }

    default:
        {
            cout<<"\n\n\t\t\t\t\      wrong choce ";
            char ch;

            cout<<"\n\n\n\n\t\t\t\t\t  press 'r' to refresh : ";
            cin>>ch;

            switch(ch)
            {
            case 'r':
                {
                    system("cls");
                doctorLogin();
                }
            }

        }
    }

    getch();
}


void doctor()
{


          system("cls");
    cout<<"\n\n\n\n\n\t\t\t\t\t\             doctor information  ";
    cout<<"\n\t\t\t\t\t\t    ======================  ";
    cout<<"\n\n";
    cout<<"\n                                  id                name                       sector ";
    cout<<"\n                                ------           -----------               ---------------              ";

    cout<<"\t\t\t\t                         3476.      Doctor M. A. Ahbab Medicine liver  diabetics specialist " <<endl<<endl;
    cout<<"\t\t\t\t 8436.       Prof Dr Foysal Ahmad  medicine specialist                    "<<endl<<endl;
    cout<<"\t\t\t\t 8956.       Dr Md khalilur Rahman(Pappu) medicine specialist      "<<endl<<endl;
    cout<<"\t\t\t\t 3487 .      Dr S. M. Sajjadul Haque medicine specialist                 "<<endl<<endl;                     // Colon and Rectal
    cout<<"\t\t\t\t 2398.       Prof Dr K M aktarujjaman Medicine and heart specialist       "<<endl<<endl;                    //Care
    cout<<"\t\t\t\t 1875.       Dr Shishir Ahmed  medicine and heart specialist      "<<endl<<endl;
    cout<<"\t\t\t\t 7397.       Prof Dr MD Aminul Islam Laskar  medicine and heart specialist     "<<endl<<endl;
    cout<<"\t\t\t\t 7295.       Prof Dr MD shahabuddin   medicine and heart specialist "<<endl<<endl;             //Emergency
    cout<<"\t\t\t\t 2863.       Professor Dr Mohammad motiur Rahman   Neuro medicine specialist  "<<endl<<endl;

    cout<<"\n\n\t\t\t\t 3570.        Dr Mohammad nazrul Islam   Neuro medicine specialist       "<<endl<<endl;
    cout<<"\t\t\t\t 1298.        Dr Ahmad Riaz Chowdhury     Psychiatrist                   "<<endl<<endl;
    cout<<"\t\t\t\t 1399.        Professor Dr Syed alamgir safwat    medicine and liver specialist        "<<endl<<endl;
    cout<<"\t\t\t\t 5230 .       Dr, alamgir  Chowdhury  Kidney disease and medicine specialist   "<<endl<<endl;                     // Colon and Rectal
    cout<<"\t\t\t\t 5630.        Dr Najmus saqib     Kidney diseases specialist      "<<endl<<endl;                    //Care
    cout<<"\t\t\t\t 1879.        Dr akhlaq Ahmed        Neonatal and adolescent pathologist "<<endl<<endl;
    cout<<"\t\t\t\t 7398.        Dr Mohammed Hussain (harun)        Neonatal and adolescent pathologist   "<<endl<<endl;
    cout<<"\t\t\t\t 7294.        Dr Isthiak alam(russel)     Cancer and tumor specialist "<<endl<<endl;             //Emergency
    cout<<"\t\t\t\t 2869.        Dr Mostofa Toufiq Ahmed     Neurosurgery specialist"<<endl<<endl;
     char ch;

     cout<<"\n\n\n\n\t\t\t\t\t press 'g' to go back : ";
     cin>>ch;

     switch(ch)
     {
     case 'g' :
        system("cls");
         doctorLogin();
     }


}



void hospital()

{
     system("cls");
    cout<<"\n\n\n\t\t\t\t\t                    SYLHET MEDICALE HOSPITAL  ";
    cout<<"\n\t\t\t\                       _______________________________________________ ";

         cout<<"\n\n\n\n\n\t\t\t Type          : Public medical hospital ";
         cout<<"\n\n\t\t\t Established   : 1946 ";
         cout<<"\n\n\t\t\t Principal     : Khan Abul Kalam Azad ";
         cout<<"\n\n\t\t\t Director      : Brig. Gen. Mohammad Nasir Uddin[1] ";
         cout<<"\n\n\t\t\t Location      : Sylhet, Bangladesh ";
         cout<<"\n\n\t\t\t Campus	       : 25 acres (10 ha) ";
         cout<<"\n\n\t\t\t Language      : English ";
         cout<<"\n\n\t\t\t Website       : www.smc.gov.bd ";
         cout<<"\n\n\n\t\t\t phone number  : 01768793284 ";
         cout<<"\n\n\t\t\t               : 01674952841 ";
         cout<<"\n\n\t\t\t               : 01873096257 ";



         char ch;
     cout<<"\n\n\n\n\n\t\t\t\t\t\t ";
     cout<<"press 'g' to go back : ";
     cin>>ch;

     switch(ch)
     {
     case 'g':
        {
            system("cls");
             doctorLogin();
        }
     }
}

void loginD()                                                                      //page 4
{
    int count=0;
     string user,pas,u,p;
     system("cls");
     cout<<"\n\n\n\t\t\t\t\t  please enter the username and password  ";
     cout<<"\n\t\t\t              ______________________________________________ ";
     cout<<" \n\n\n\t\t\t USERNAME : ";
     cin>>user;
     cout<<" \n\n\t\t\t PASSWORD : ";
     cin>>pas;

    ifstream input("doctorinfo.txt");
        while(input>>u>>p)
        {
                if(user==u && pas==p)

                {
                        count=1;
                        system("cls");
                }
        }
        input.close();
        if(count==1)
        {
                system("cls");
                 doctorLogin();

        }


    else
        cout<<"\n\n\n\n\n\n\t\t\t your username or password is wrong ";
        cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\t       press 'r' to refresh : ";
        char gh;
        cin>>gh;

        switch(gh)
        {
        case 'r':

            {
                system("cls");
                loginD();
            }
        }

}

string patientinfoadd ()
{
    int in;
    string line;
    cout<<"Select your doctor"<<endl;
    ifstream file1("doctor.txt");

    while(getline(file1, line))
    {
        cout<<line<<endl;
    }
    cin>>in;

    if(in==1)
    {
        return "Dr. MD Khalilur Rahman (Pappu)";
    }
    else if(in==2)
    {
        return "Prof. Dr. K. M. Akhtaruzzaman (Medicine & Heart Specialist)";
    }
    else if(in==3)
    {
        return "Dr. Shishir Basak (Medicine & Heart Specialist)";
    }
    else if(in==4)
    {
        return "Prof. Dr. Md. Aminur Rahman Laskar(Heart Specialist)";
    }
    else if(in==5)
    {
        return "PRO. Dr. Md. Shahabuddin(Heart Specialist)";
    }
    else if(in==6)
    {
        return "Dr. Ajoy Kumar Dutta(Heart Specialist)";
    }
    else if(in==7)
    {
        return "Pro. Dr. Md. Motiur Rahman(Neuro Medicine Specialist)";
    }
    else if(in==8)
    {
        return "Dr. Md. Nazrul Islam(Neuro Medicine Specialist)";
    }
    else if(in==9)
    {
        return "Dr. Ahmed Riad Chowdhury(Psychopathology Specialist)";
    }
    else if(in==10)
    {
        return "Prof. Dr. Syed Alomgir Safwat(Psychopathology Specialist)";
    }
    else if(in==11)
    {
        return "Dr. Alomgir Chowdhury(Kidney Disease & Medicine Specialist)";
    }
    else if(in==12)
    {
        return "Dr. Nazmus Sakib(Kidney Disease & Medicine Specialist)";
    }
    else if(in==13)
    {
        return "Dr. Akhlak Ahmed(Pediatric Specialist)";
    }
    else if(in==14)
    {
        return "Dr. Md. Muyazzem Hossain (Harun)(Pediatric Specialist)";
    }
    else if(in==15)
    {
        return "Dr. Md. Ishtiyak Alam (Rasel)(Pediatric Specialist)";
    }
    else if(in==16)
    {
        return "Dr. Mostafa Towfik Ahmed(Neuro Surgery Specialist)";
    }
    else if(in==17)
    {
        return "Dr. M. Khaled Mahmud(Neuro Surgery Specialist)";
    }
    else if(in==18)
    {
        return "Dr. Md. Abdul Kadir(Neuro Surgery Specialist)";
    }
    else if(in==19)
    {
        return "Dr. Showkat Uddin Ahmed(Neuro Surgery Specialist)";
    }
    else if(in==20)
    {
        return "Dr. Kishoura Parveen(Gynecology Specialist)";
    }


}
string namecheck(string a)
{
    string search;
    int offset;
    string line;

    ifstream Myfile;
    Myfile.open("name.txt");
    search=a;

    if(Myfile.is_open())
    {
        while(!Myfile.eof())
        {
           getline(Myfile,line);
           if((offset = line.find(search,0)) != string ::npos)
              {
                  return "again";
              }
        }
        Myfile.close();
    }
    else
        cout <<"not open the file"<<endl;
    system("PAUSE");
}

template<typename T>
string itos(T i)
{
    stringstream s;
    s<<i;
    return s.str();
}

int main()

{
    int adnum,tmm;
    string name;
    char fname[20];
time_t rawtime;
struct tm * timeinfo;

time ( &rawtime );
timeinfo = localtime ( &rawtime );

    int i;
    re:
cout<<"\t\t _______________________________________________________________________________________ \n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                  WELCOME TO                                           |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                           SMART RECEPTIONIST SYSTEM                                   |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                 -solo programmer                      |\n";
cout<<"\t\t|_______________________________________________________________________________________|\n";
system("pause");
system("cls");

x:
cout<<"\t\t\t\t\t\t  SMART RECIPTIONIST SYSTEM \n\n";
cout<<"\n\n\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t _______________________________________________________________________________________ \n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                           1  >> HOSPITAL RECEPTION SYSTEM                             |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                           2  >> HOTEL RECEPTION SYSTEM                                |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                           3  >> EXIT                                                  |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|_______________________________________________________________________________________|\n";
y:cout<<"\t\tEnter your choice: ";cin>>i;

if(i>3||i<1){cout<<"\n\n\t\tInvalid Choice\n";cout<<"\t\tTry again...........\n\n";goto y;}
system("cls");

    if(i==2)
    {
        goto hotel;
    }
    if(i==3)
    {
        goto ex;
    }
    if(i==1)
    {
       xx:
cout<<"\t\t\t\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";
cout<<"\n\n\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t _______________________________________________________________________________________ \n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                           1  >> Continue as Patient                                   |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                           2  >> Continue as Doctor                                    |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                           3  >> Main Menu                                             |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|_______________________________________________________________________________________|\n";
yy:cout<<"\t\tEnter your choice: ";cin>>i;
if(i>3||i<1){cout<<"\n\n\t\t\t\t\t\tInvalid Choice\n";cout<<"\t\t\t\t\t\tTry again...........\n\n";goto yy;}
system("cls");
    if(i==3)
    {
        goto x;
    }
    if(i==2)
    {
        loginD();
    }
    if(i==1)
    {
        b:
cout<<"\t\t\t\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";
cout<<"\n\n\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t _______________________________________________________________________________________ \n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                           1  >> Add New Patient Record                                |\n";
cout<<"\t\t|                           2  >> Show Full History of the Patient                      |\n";
cout<<"\t\t|                           3  >> Continue to Payment                                   |\n";
cout<<"\t\t|                           4  >> Exit the Program                                      |\n";
cout<<"\t\t|                           5  >> Previous menu                                         |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|_______________________________________________________________________________________|\n";
a:cout<<"\t\tEnter your choice: ";cin>>i;


if(i>9||i<1){cout<<"\n\n\t\t\t\t\t\tInvalid Choice\n";cout<<"\t\t\t\t\t\tTry again...........\n\n";goto a;} //if inputed choice is other than given choice



system("cls");
if(i==5)
{
    goto x;
}
if(i==3)
{
   Input();
}

///Adding the record of the new patient..................option 1
again:if(i==1)
{
  time_t rawtime;
  struct tm * timeinfo;

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  cout<<"\n\n\t\t\t\t\t\t\t\t"<< asctime (timeinfo);
  ofstream pat_file;
  char fname[20];
  cout<<"\n\n\n\nEnter the patient's file name : ";
  cin.ignore();
  gets(fname);

  name=namecheck(itos(fname));
  if(name=="again")
  {
      system("cls");
      cout<<"This name is already registered,try again";

      goto again;
  }
  else
    {
    fstream file("name.txt",ios::in | ios::out | ios :: app);
    file<<fname<<endl;
  pat_file.open(fname);
  		if(!fname)
		{
		cout<<"\nError while opening the file\n";goto b;
		}
		else
		{
                        struct patient_info
                        {
                            char name[20];
                            char address[100];
                            char contact[10];
                            char age[5];
                            char sex[8];
                            char blood_gp[5];
                            char disease_past[50];
                            char id[15];
                            char doctime[50];
                        };

            patient_info ak;
            cout<<"\n********************************************************************\n";pat_file<<"\n********************************************************************\n\n";//fn1353 st
            cout<<"\nFull Name : ";pat_file<<"Full Name : ";gets(ak.name);pat_file<<ak.name<<"\n";
            cout<<"\nAddress : ";pat_file<<"Address : ";gets(ak.address);pat_file<<ak.address<<"\n";
            cout<<"\nContact Number : ";pat_file<<"Contact Number : ";gets(ak.contact);pat_file<<ak.contact<<"\n";
            cout<<"\nAge : ";pat_file<<"Age : ";gets(ak.age);pat_file<<ak.age<<"\n";
            cout<<"\nSex : ";pat_file<<"Sex : ";gets(ak.sex);pat_file<<ak.sex<<"\n";
            cout<<"\nBlood Group : ";pat_file<<"Blood Group : ";gets(ak.blood_gp);pat_file<<ak.blood_gp<<"\n";
            cout<<"\nAny Major disease suffered earlier : ";pat_file<<"Any Major disease suffered earlier : ";gets(ak.disease_past);pat_file<<ak.disease_past<<"\n";
            cout<<"\nPatient NID : ";pat_file<<"Patient ID : ";gets(ak.id);pat_file<<ak.id<<"\n";
            cout<<"\npress 1 to add Doctor from the list : ";
            ad:cin>>adnum;
            system("cls");
            if(adnum>1||adnum<1){cout<<"\n\n\t\t\t\t\t\tInvalid Choice\n";cout<<"\t\t\t\t\t\tTry again...........\n\n";goto ad;}
            if(adnum==1)
            {

                pat_file<<"Doctor name : "<<patientinfoadd();
                system("cls");
                chos:cout<<"\nAvailable time of doctor"<<endl;
                cout<<"1 >> 10:30 A.M"<<endl<<"2 >> 05:30 P.M"<<endl<<"3 >> 08:30 P.M"<<endl;
                cout<<"Enter your choice: ";

                cin>>tmm;
                if(tmm>3||tmm<1){cout<<"\n\n\t\t\t\t\t\tInvalid Choice\n";cout<<"\t\t\t\t\t\tTry again...........\n\n";goto chos;}
                if(tmm==1)
                {
                    pat_file<<"\nDoctor visit time : 10:30 A.M";
                }
                else if(tmm==2)
                {
                    pat_file<<"\nDoctor visit time : 05:30 P.M";
                }
                else if(tmm=3)
                {
                    pat_file<<"\nDoctor visit time : 08:30 P.M";
                }

            }

            cout<<"\n********************************************************************\n";pat_file<<"\n********************************************************************\n\n";
            cout<<"\nInformation Saved Successfully\n";
            }
  system("pause");
  system("cls");
  goto b;
    }

}

///For displaying the full medical history of patient in that hospital............option 3
if(i==2)
{
    fstream pat_file;
    cout<<"\n\nEnter the patient's file name to be opened : ";
    cin.ignore();
    gets(fname);
    system("cls");
	pat_file.open(fname, ios::in);
		if(!pat_file)
		{
		cout<<"\nError while opening the file\n";goto b;
		}
		else
		{
		    cout<<"\n\n\n\n\t\t\t\t........................................ Full Medical History of "<<fname<<" ........................................\n\n\n\n";
		    string info;
			while(pat_file.good())
			{
			getline(pat_file,info);
			cout<<info<<"\n";
			}
			cout<<"\n";
        }
        system("pause");
        system("cls");
        goto b;
}


///Exiting Through the system with a Thank You note........................option 5
if(i==4)
{
    ex:
system("cls");
cout<<"\t\t _______________________________________________________________________________________ \n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                           		                                |\n";
cout<<"\t\t|                                   THANK YOU                                           |\n";
cout<<"\t\t|                                      FOR                                              |\n";
cout<<"\t\t|                               USING OUR SYSTEM                                        |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                                                       |\n";
cout<<"\t\t|                                                 -solo programmer                      |\n";
cout<<"\t\t|_______________________________________________________________________________________|\n";
cout<<"\t\tFor Main Menu press (1)";
cout<<"\n\t\tTo Exit press       (2)\n";
cin>>i;

if(i>2||i<1){cout<<"\n\n\t\tInvalid Choice\n";cout<<"\t\tTry again...........\n\n";goto y;}
system("cls");

if(i==1)
{
    goto x;
}
if(i==2)
{
    exit(0);
}
}



cout<<"\n";



    }

    /////HOTEL TEAM WORKS...............................................................
	/////STARTS FROM HERE...............................................................
	/////CLASSIFIED.....................................................................
	hotel:
    {
	    f:
	    system("cls");
		cout<<"\t\t\t\t\t\t  HOTEL MANAGEMENT SYSTEM \n";
		cout<<"\t\t _______________________________________________________________________________________ \n";
		cout<<"\t\t|                           1  >> If you are a customer.                                |\n";
		cout<<"\t\t|                                                                                       |\n";
		cout<<"\t\t|                           2  >> If you an administrator.                              |\n";
		cout<<"\t\t|                                                                                       |\n";
		cout<<"\t\t|                           3  >> Go back to Homepage.                                  |\n";
		cout<<"\t\t|_______________________________________________________________________________________|\n";
		cout<<"\t\tEnter your choice: ";
		cin>>i;
		system("cls");

		if(i>3||i<1)
		{
			cout<<"\n\n\t\t\t\t\t\tInvalid Choice\n";
			cout<<"\t\t\t\t\t\tTry again...........\n\n";
			Sleep(500);
			goto f;
		}

		if(i==1)
		{
		    system("cls");
		    string name;
		    int asso, stay, rmno, pm, phn, prkchoc;
		    long long int nidpass;
		    ofstream file;

		    int RM1[5] = {0, 2990, 2090, 3999, 5999};
	        int RM2[5] = {0, 3499, 4899, 5000, 5999};
		    int RM3[6] = {0, 6000, 5000, 4000, 8000, 10000};
   	        int RM4[6] = {0, 6000, 4970, 3999, 8990, 9999};
	        int RM5pp[3] = {0, 25000, 65000};
	        int spclcst[] = {0, 3000, 1000, 5000, 8000, 0};
	        int carnt[5] = {0, 3000, 8000, 5000, 10000};

		    file.open("Customer Information.txt", ios::out|ios::app);

		    if(c<=500)
		    {
		    	cout<<"\t\t\t\t\t\t  HOTEL MANAGEMENT SYSTEM \n\n";
		    	cout<<"\t\tWELCOME TO RIDEN GAURD HOTEL. PLEASE ENTER YOUR INFORMATION BELOW."<<endl<<endl;

		    	cout<<"\t\t\t\t\tEnter your name: ";
		        cin>>name;
		        //getline(cin, name);
		        file<<name<<endl;

		        cout<<"\t\t\t\t\tEnter your phone number: ";
		        cin>>phn;
		        file<<phn<<endl;

		        cout<<"\t\t\t\t\tEnter your NID/Passport NO: ";
		        cin>>nidpass;
		        file<<nidpass<<endl;

		        cout<<"\t\t\t\t\tEnter the number of people(including you within 11 people): ";
		        cin>>asso;
		        file<<asso<<endl;

		        int j=0;
		        while(j<1 and asso<=11)
		    	{
			        cout<<"\t\t\t\t\tEnter total time of your stay(daywise): ";
			        cin>>stay;
			        file<<stay<<endl<<endl;

			    	rs:
					system("cls");
			        cout<<"\t\t\t\t\t\t  HOTEL MANAGEMENT SYSTEM \n";
					cout<<"\t\t _______________________________________________________________________________________ \n";
					cout<<"\t\t|                   Food costs are included within the room price.                      |\n";
					cout<<"\t\t|                But having room service will cost you extra 1999TK.                    |\n";
					cout<<"\t\t|          Note that room service is only available for breakfast and snacks.           |\n";
					cout<<"\t\t|                                                                                       |\n";
					cout<<"\t\t|                          Do you want room service?                                    |\n";
					cout<<"\t\t|                                                                                       |\n";
					cout<<"\t\t|                           1  >> Yes                                                   |\n";
					cout<<"\t\t|                                                                                       |\n";
					cout<<"\t\t|                           2  >> No                                                    |\n";
					cout<<"\t\t|_______________________________________________________________________________________|\n";
					cout<<"\t\tEnter your choice: ";
					cin>>rmsrvs;
					if(rmsrvs<1 or rmsrvs>2)
					{
						cout<<"Invalid Input. Try again"<<endl;
						Sleep(500);
						goto rs;
					}

		            cin.ignore();
		            cout<<endl;

		            system("cls");

		            int rmcst = RoomChoose(asso, RM1, RM2, RM3, RM4, RM5pp);
		        	cout<<endl;

		            system("cls");

		            int *spclret = SpecialService();
		            cout<<endl;

		            system("cls");

					vc:
					system("cls");
			        cout<<"\t\t\t\t\t\t  HOTEL MANAGEMENT SYSTEM \n";
					cout<<"\t\t ______________________________________________________________________________ \n";
					cout<<"\t\t|                   Do you have any vehicle with you?                          |\n";
					cout<<"\t\t|                                                                              |\n";
					cout<<"\t\t|                           1  >> Yes                                          |\n";
					cout<<"\t\t|                                                                              |\n";
					cout<<"\t\t|                           2  >> No                                           |\n";
					cout<<"\t\t|______________________________________________________________________________|\n";
					cout<<"\t\tEnter your choice: ";
		            cin>>prkchoc;
		            if(prkchoc<1 or prkchoc>2)
					{
						cout<<"Invalid Input. Try again"<<endl;
						Sleep(500);
						goto vc;
					}
		            cout<<endl;

		            if(prkchoc==1)
		            	Parking();

		            system("cls");

					int carcst, rnt;
		            if(prkchoc==2)
		            {
		            	cout<<"\t\t\t\t\t\t  HOTEL MANAGEMENT SYSTEM \n";
						cout<<"\t\t ____________________________________________________________________ \n";
						cout<<"\t\t|                   Do you wish to rent a car?                       |\n";
						cout<<"\t\t|                                                                    |\n";
						cout<<"\t\t|                           1  >> Yes                                |\n";
						cout<<"\t\t|                                                                    |\n";
						cout<<"\t\t|                           2  >> No                                 |\n";
						cout<<"\t\t|____________________________________________________________________|\n";
						cout<<"\t\tEnter your choice: ";
						cin>>rnt;
						if(rnt==1)
							carcst = CarRental(carnt);
					}

		            int total2 = 0;
		            for(int i=0; i<n; i++)
		                total2 = total2 + spclcst[spclret[i]];

		            Subtotal = stay*(rmcst+total2);
		                rmsrvs==1 ? Subtotal = Subtotal + 1999*stay : Subtotal;
		                prkchoc==1 ? Subtotal = Subtotal + amnt*stay : Subtotal;
		                rnt==1 ? Subtotal = Subtotal + carcst*stay : Subtotal;

		            fo:
		            system("cls");
		            cout<<"\t\t__________________________________________________"<<endl;
		            cout<<"\t\t\t\tFinal Overview"<<endl;
		            cout<<"\t\t\t\tCustomer Name: "<<name<<endl;
		            cout<<"\t\t\t\tNumber of people: "<<asso<<endl;
		            cout<<"\t\t\t\tDuration of stay: "<<stay<<endl;
		            cout<<"\t\t\t\tRoom Service Taken?: ";
		                rmsrvs==1?cout<<"Yes.":cout<<"No.";
		            cout<<endl<<"\t\t\t\tCost of room(for "<<asso<<"): "<<rmcst<<endl;
		            cout<<"\t\t\t\tSpecial Services Taken: "<<n<<endl;
		            cout<<"\t\t\t\tVehicle?: ";
		                prkchoc==1 ? cout<<"Yes." : cout<<"No.";
		            cout<<endl<<"\t\t\t\tYour total cost is: "<<Subtotal<<endl;
		            cout<<"\t\t__________________________________________________"<<endl;

		            int ovr;
		            cout<<"Press 1 to go to payment: ";
		            cin>>ovr;

		            if(ovr==1)
		            	PaymentCustomer();

		            else
		            	{
		            		cout<<"Invalid Input. Try again."<<endl;
		            		Sleep(500);
		            		goto fo;
						}
		            j++;

		            cout<<"Press 1 to go to hotel management homepage: ";
					int prs;
					cin>>prs;
					if(prs==1)
						goto f;
		        }

		        if(asso>11)
		        {
		            cout<<"More than 11 people at the same time are not suitable to fit in in this hotel. The manager will be here soon to discuss your accomodation. Thank You.";
		            goto f;
				}
		    }
	    }

	    else if(i==2)
	    {
	        string usrnm = "admin";
	        string pswrd = "admin";
	        start:
	        system("CLS");
	        string checkUsrn,checkPswd;
	        cout<<"\n\t\t\tWELCOME TO EMPLOYEE MANAGEMENT SECTION OF HOTEL MANAGEMENT SOFTWARE"<<endl;
	        cout<< "___________________________________________________________________________________________________________________";
	        cout<<"\n\n\n\t\t\t\t\t\tLOGIN FORM"<<endl;
	        cout<<"\n\n\t\t\tEnter username: ";
	        cin>>checkUsrn;
	        cout<<"\n\n\t\t\tEnter password: ";
	        cin>>checkPswd;
	        if(checkUsrn == usrnm && checkPswd == pswrd)
	        {
	            cout<<"\n\t\t\tMatched\t";
	            for(int i=0; i<3; i++){
	            cout<<".";
	            Sleep(500);
	        }

			system("CLS");
	        int ch;
	        while(1)
	        {
	            cout<<"\t\t\t\t\t\t  HOTEl MANAGEMENT SYSTEM \n";
				cout<<"\t\t _______________________________________________________________________________________ \n";
				cout<<"\t\t|                           1  >> Enter data of employee                                |\n";
				cout<<"\t\t|                           2  >> Show all data                                         |\n";
				cout<<"\t\t|                           3  >> Search data of specific employee                      |\n";
				cout<<"\t\t|                           4  >> Update data of specific employee                      |\n";
				cout<<"\t\t|                           5  >> Delete data of specific or full record                |\n";
				cout<<"\t\t|                           6  >> Delete parking data                                   |\n";
				cout<<"\t\t|                           7  >> Check Salary Info                                     |\n";
				cout<<"\t\t|                           8  >> Enter payment detials                                 |\n";
				cout<<"\t\t|                           9  >> Logout                                                |\n";
				cout<<"\t\t|                           10 >> Hotel Management Homepage                             |\n";
				cout<<"\t\t|_______________________________________________________________________________________|\n";
				cout<<"\t\tEnter your choice: ";

	                cin>>ch;
	                system("CLS");
	                switch(ch)
	                {
	                case 1:
	                    empdata();
	                    break;
	                case 2:
	                    showEmpInfo();
	                    break;
	                case 3:
	                    Search();
	                    break;
	                case 4:
	                    update();
	                    break;
	                case 5:
	                    del();
	                    break;
	                case 6:
	                    DeletePrkInfo();
	                    break;
	                case 7:
	                	CheckSalary();
	                	break;
	                case 8:
	                    PaymentSalary();
	                    break;
	                case 9:
	                    goto start;
	                    break;
	                case 10:
	                    goto f;
	                    break;
	                }
	            }
	        }

	        else if(checkUsrn != usrnm && checkPswd == pswrd)
	        {
	            cout<<"\n\n\t\t\t\aInvalid USERNAME please try again";
	            Sleep(2000);
	            goto start;
	        }
	        else if(checkPswd != pswrd && checkUsrn == usrnm)
	        {
	            cout<<"\n\n\a\t\t\tInvalid PASSWORD please try again";
	            Sleep(2000);
	            goto start;
	        }
	        else
	        {
	            cout<<"\n\n\n\n\a\t\tBoth USERNAME and PASSWORD are Invalid";
	            Sleep(2000);
	            goto start;
	        }
	    }

		else if(i==3)
		{
			goto x;
			system("cls");
		}

	    else
	    {
	    	cout<<"Invalid Input. Try again."<<endl;
	    	Sleep(500);
	    	goto f;
		}
	}
}
}

void empdata()
{
    int user=0;
    cout<<"\t\t\t\t\t  HOTEL MANAGEMENT SYSTEM \n\n";
    cout<<"\t\t\t\tHow many employees data do you want to enter??";
    cin>>user;
    for(int i=total; i<total+user; i++)
    {
        cout<<"\t\t ___________________________________________________________________________________\n";
        cout<<                   "\n\t\t\t\t\tEnter data of employee :"  << i+1 << endl;
        cout<<"\t\t ___________________________________________________________________________________\n\n";
        cout<<"\t\t\t                   Enter employee name: ";cin>>e[i].name;
        cout<<endl;
        cout<<"\t\t\t                   Enter employee ID: ";cin>>e[i].id;
        cout<<endl;
        cout<<"\t\t\t                   Enter employee address: ";cin>>e[i].address;
        cout<<endl;
        cout<<"\t\t\t                   Enter employee contact: ";cin>>e[i].contact;
        cout<<endl;
        cout<<"\t\t\t                   Enter employee salary: ";cin>>e[i].salary;

        cout<<"\t\t ___________________________________________________________________________________\n";

        e[i].crntsalary = e[i].salary;
        }
        total=total+user;
        system("CLS");
}

void showEmpInfo()
{
    if(total!=0)
    {
        for(int i=0; i<total; i++)
        {   cout<<"\t\t ___________________________________________________________________________________\n";
            cout<<                   "\n\t\t\t\t\tData of employee  :  "  << i+1 << endl;
            cout<<"\t\t ___________________________________________________________________________________\n\n";
            cout<<"\t\t\t                   Name: " << e[i].name;
            cout<<endl;
            cout<<"\t\t\t                   ID: " << e[i].id;
            cout<<endl;
            cout<<"\t\t\t                   Address: " << e[i].address;
            cout<<endl;
            cout<<"\t\t\t                   Contact: "<<e[i].contact;
            cout<<endl;
            cout<<"\t\t\t                   Salary: "<<e[i].salary;
            cout<<endl;
            cout<<"\t\t\t                   Current Salary: "<<e[i].crntsalary;
            cout<<endl;
            cout<<"\t\t\t                   Online Wallet: "<<e[i].walm;
            cout<<endl;
            cout<<"\t\t ___________________________________________________________________________________\n";

        }
    }
    else
    {
        cout<<"\t\t\t\tNo data is entered"<<endl;
    }
}

void Search()
{
    if(total!=0)
    {
        string id;
        cout<<"\t\t _________________________________________________________________________________________\n\n";
        cout<<"\t\t\tEnter id of employee which you want to search : ";
        cin>>id;
        cout<<"\t\t _________________________________________________________________________________________\n\n";
        for(int i=0; i<total; i++)
        {
            if(e[i].id==id)
            {
                cout<<"\t\t _________________________________________________________________________________________\n\n";
                cout<<"\t\t\t                   Name: " << e[i].name;
                cout<<endl;
                cout<<"\t\t\t                   ID: " << e[i].id;
                cout<<endl;
                cout<<"\t\t\t                   Address: " << e[i].address;
                cout<<endl;
                cout<<"\t\t\t                   Contact: "<<e[i].contact;
                cout<<endl;
                cout<<"\t\t\t                   Salary: "<<e[i].salary;
                cout<<endl;
                cout<<"\t\t\t                   Current Salary: "<<e[i].crntsalary;
                cout<<endl;
                cout<<"\t\t _________________________________________________________________________________________\n\n";
                break;
            }
            if(i==total-1)
            {
                cout<<"\t\t\t\tNo such record found" << endl << endl;
            }
        }
    }
    else
    {
        cout<<"\t\t\t\tNo data is entered"<< endl << endl;
    }
}

void update()
{
    if(total!=0)
    {
        string id;
        cout<<"\t\t ___________________________________________________________________________________\n\n";
        cout<<"\t\t\tEnter id of employee which you want to update : ";
        cin>>id;
        cout<<"\t\t ___________________________________________________________________________________\n\n";
        for(int i=0; i<total; i++)
        {
            if(e[i].id==id)
            {
                cout<<"\t\t ___________________________________________________________________________________\n\n";
                cout<<"\t\t\t                   Name: " << e[i].name;
                cout<<endl;
                cout<<"\t\t\t                   ID: " << e[i].id;
                cout<<endl;
                cout<<"\t\t\t                   Address: " << e[i].address;
                cout<<endl;
                cout<<"\t\t\t                   Contact: "<<e[i].contact;
                cout<<endl;
                cout<<"\t\t\t                   Salary: "<<e[i].salary;
                cout<<endl<<endl;
                cout<<"\t\t  ENTER NEW EMPLOYEE DATA >> " << endl;
                cout<<"\t\t\t                   Enter employee name: ";cin>>e[i].name;
                cout<<endl;
                cout<<"\t\t\t                   Enter employee ID: ";cin>>e[i].id;
                cout<<endl;
                cout<<"\t\t\t                   Enter employee address: ";cin>>e[i].address;
                cout<<endl;
                cout<<"\t\t\t                   Enter employee contact: ";cin>>e[i].contact;
                cout<<endl;
                cout<<"\t\t\t                   Enter employee salary: ";cin>>e[i].salary;
                cout<<"\t\t ___________________________________________________________________________________\n\n";
                e[i].crntsalary = e[i].salary;
                break;
            }

            if(i==total-1)
            {
                cout<<"\t\t\t\tNo such record found"<<endl;
            }
        }
    }
    else
    {
        cout<<"\t\t\t\tNo data is entered"<<endl;
    }
    system("CLS");
}

void PaymentSalary()
{
    int choice;
    if(total!=0)
    {
        string id;
        cout<<"\t\t ___________________________________________________________________________________\n\n";
        cout<<"\t\t\tEnter the employee ID you want to pay to: ";
        cin>>id;
        cout<<"\t\t ___________________________________________________________________________________\n\n";
        for(int i=0; i<total; i++)
        {
            if(e[i].id==id)
            {
                cout<<"\t\t ___________________________________________________________________________________\n\n";
                cout<<"\t\t\t                   Name: " << e[i].name;
                cout<<endl;
                cout<<"\t\t\t                   ID: " << e[i].id;
                cout<<endl;
                cout<<"\t\t\t                   Address: " << e[i].address;
                cout<<endl;
                cout<<"\t\t\t                   Contact: "<<e[i].contact;
                cout<<endl;
                cout<<"\t\t\t                   Salary: "<<e[i].salary;
                cout<<endl;
                cout<<"\t\t\t                   Current Salary: "<<e[i].crntsalary;
                cout<<endl;
                cout<<"\t\t ___________________________________________________________________________________\n\n";

                if(e[i].salary>0)
                {
                	cout<<"\t\t Would you like to pay employee "<<e[i].name<<"' salary?"<<endl<<"\t\t 1. Yes."<<endl<<"\t\t 2. No."<<endl<<"\t\t Enter your choice: ";
	                cin>>choice;
	                if(choice==1)
	                {
	                    e[i].walm = e[i].walm + e[i].crntsalary;
	                    e[i].crntsalary = 0;
	                    cout<<"\t\t Salary "<<e[i].walm<<" has been paid to "<<e[i].name<<"'s online wallet."<< endl << endl;
	                }
				}
				else
					cout<<"\t\tNothing to pay."<<endl << endl;
            }
            else{
                    cout<<"\t\t ___________________________________________________________________________________\n\n";
                    cout<<"\t\t NOT FOUND SUCH RECORD"<<endl;
                    cout<<"\t\t ___________________________________________________________________________________\n\n";
            }
        }
    }
}

void CheckSalary()
{
    if(total!=0)
    {
        string id;
        cout<<"\t\t ___________________________________________________________________________________\n\n";
        cout<<"\t\t\t\t\tEnter the employee ID you want to check: ";
        cin>>id;
        cout<<"\t\t ___________________________________________________________________________________\n\n";
        for(int i=0; i<total; i++)
        {
            if(e[i].id==id)
            {
                if(e[i].walm==0)
				{
				    cout<<"\t\t ___________________________________________________________________________________\n\n";
                    cout<<"\t\t Salary is not paid to " << e[i].name << "'s online wallet."<< endl;
                    cout<<"\t\t ___________________________________________________________________________________\n\n";
                }
                else{
                    cout<<"\t\t ___________________________________________________________________________________\n\n";
                    cout<<"\t\t Salary has been paid."<< endl ;
                    cout<<"\t\t ___________________________________________________________________________________\n\n";
                }
            }
            else{
                    cout<<"\t\t ___________________________________________________________________________________\n\n";
                    cout<<"\t\t NOT FOUND SUCH RECORD"<<endl;
                    cout<<"\t\t ___________________________________________________________________________________\n\n";
            }
        }
    }
}

void del()
{
    if(total!=0)
    {
        int press;
        cout<<"\t\t ___________________________________________________________________________________\n\n";
        cout<<"\t\t\t\tPress 1 to delete specific record"<<endl;
        cout<<"\t\t\t\tPress 2 to delete full record"<<endl;
        cout<<"\t\t ___________________________________________________________________________________\n\n";
        cin>>press;
        if(press==1)
        {
            string id;
            cout<<"\t\t ___________________________________________________________________________________\n\n";
            cout<<"\t\t\t\tEnter id of employee which you want to delete : ";
            cin>>id;
            cout<<"\t\t ___________________________________________________________________________________\n\n";
            for(int i=0; i<total; i++)
            {
                if(e[i].id==id)
                {
                    e[i].name=e[i+1].name;
                    e[i].id=e[i+1].id;
                    e[i].address=e[i+1].address;
                    e[i].contact=e[i+1].contact;
                    e[i].salary=e[i+1].salary;
                    total--;
                    cout<<"\t\t ___________________________________________________________________________________\n\n";
                    cout<<"\t\t\t\tYour required record is deleted"<<endl<<endl;
                    cout<<"\t\t ___________________________________________________________________________________\n\n";
                    break;
                }
                if(i==total-1)
                {
                    cout<<"\t\t ___________________________________________________________________________________\n\n";
                    cout<<"\t\t\t\tNo such record found"<<endl<<endl;
                    cout<<"\t\t ___________________________________________________________________________________\n\n";
                }
            }
        }
        else if(press==2)
        {
            total=0;
            cout<<"\t\t ___________________________________________________________________________________\n\n";
            cout<<"\t\t\t\tAll record is deleted"<<endl;
            cout<<"\t\t ___________________________________________________________________________________\n\n";
        }
        else
        {
            cout<<"\t\t ___________________________________________________________________________________\n\n";
            cout<<"\t\t\t\tInvalid Input"<<endl;
            cout<<"\t\t ___________________________________________________________________________________\n\n";
        }
    }
    else
    {
        cout<<"\t\t ___________________________________________________________________________________\n\n";
        cout<<"\t\t\t\tNo data is entered"<<endl;
        cout<<"\t\t ___________________________________________________________________________________\n\n";
    }
}


void DeletePrkInfo()
{
    int ch;
    ShowParkInfo();
    cout<<endl<<endl<<"\t\t\t\tPress 1 to delete parking record."<<endl;
    cin>>ch;
    if(ch==1)
    {
        amnt=cnt=two=three=four=0;

        cout<<"\t\t**************************************************"<<endl;
        cout<<"\t\t\t\tAll Record deleted......."<<endl<<endl;
        cout<<endl;
    }
}

int RoomChoose(int asso, int RM1[], int RM2[], int RM3[], int RM4[], int RM5pp[])
{
    string line;
    ofstream file;
    int rmno;
    switch(asso)
    {
        case 1:
            {
                ifstream file1("ForOne.txt");

                while(getline(file1, line))
                {
                    cout<<line<<endl;
                }

                file.close();
            }
        break;

        case 2:
            {
                ifstream file2("ForTwo.txt");

                while(getline(file2, line))
                {
                    cout<<line<<endl;
                }

                file.close();
            }
        break;

        case 3:
            {
                ifstream file3("ForThree.txt");

                while(getline(file3, line))
                {
                    cout<<line<<endl;
                }

                file.close();
            }
        break;

        case 4:
            {
                ifstream file4("ForFour.txt");

                while(getline(file4, line))
                {
                    cout<<line<<endl;
                }

                file.close();
            }
        break;

        case 5:
        {
                ifstream file5("ForFive++.txt");

                while(getline(file5, line))
                {
                    cout<<line<<endl;
                }

                file.close();
            }
        break;

        default:
            if(asso>=6 and asso<=11)
            {
                ifstream file5("ForFive++.txt");

                while(getline(file5, line))
                {
                    cout<<line<<endl;
                }

                file.close();
            }

            else if(asso>=11)
                cout<<"Its not possible for us to provide options for more than 11 people at the same time."<<endl<<"The manager will be here soon to assist you."<<endl ;
        break;
    }

    if(asso>=1 and asso<=11)
    {
        cout<<endl<<"Enter the number of the room you desire: ";
        cin>>rmno;

        if(asso == 1)
            return RM1[rmno];
        else if(asso == 2)
            return RM2[rmno];
        else if(asso == 3)
            return RM3[rmno];
        else if(asso == 4)
            return RM4[rmno];
        else
            return RM5pp[rmno];
    }
}

int *SpecialService()
{
    static int spcl[4];
    system("cls");
    cout<<"\t\t\t\t\t\t  HOTEL MANAGEMENT SYSTEM \n";
	cout<<"\t\t _______________________________________________________________________________________ \n";
	cout<<"\t\t|            Below are a list of some of the special services we provide.               |\n";
	cout<<"\t\t|               1  >> Spa- 3000TK                                                       |\n";
	cout<<"\t\t|               2  >> Gym- 1000TK                                                       |\n";
	cout<<"\t\t|               3  >> Car-rental- 5000TK                                                |\n";
	cout<<"\t\t|               4  >> Private Swimming Pool- 8000TK                                     |\n";
	cout<<"\t\t|               5  >> Don't Need Special Service                                        |\n";
	cout<<"\t\t|_______________________________________________________________________________________|\n";
	cout<<"\t\tHow many service would you choose: ";
	cin>>n;

    if(n<1 or n>4)
    {
        cout<<"Invalid Input. Try again."<<endl;
        Sleep(500);
        SpecialService();
    }

	cout<<endl<<"\t\tEnter your choice(s): ";
	if(n>0)
    {
        for(int i=0; i<n; i++)
        	cin>>spcl[i];
    }

    else
        spcl[0] = 0;

    return spcl;
}

int CarRental(int carnt[])
{
	int choic;
		cout<<endl<<"\t\t\t\tChoose what kind of car you want: "<<endl;
		cout<<"\t\t\t\t1. Normal four wheeler- 3000TK Per Day."<<endl;
		cout<<"\t\t\t\t2. Luxurious four wheeler- 8000TK Per Day."<<endl;
		cout<<"\t\t\t\t3. Normal mini bus- 5000TK Per Day."<<endl;
		cout<<"\t\t\t\t4. Luxurious mini bus- 10000TK Per Day."<<endl;
		cout<<"\t\t\t\tEnter your choice: ";
		cin>>choic;
		return carnt[choic];
}

void two_wheel()
{
    if(cnt<=500)
    {
        two++;
        amnt=amnt+1000;
        cnt=cnt+1;

        cout<<"\t\t\t\t\t**********UPDATING**********"<<endl;
        Sleep(500);
        cout<<"\t\t\t\tA new Two Wheeler has been parked."<<endl;
        cout<<"\t\t\t\tTotal numbers of vehicles: "<<cnt<<endl;
        cout<<"\t\t\t\tNow free space: "<<500-(two+three+four)<<endl;
        cout<<endl;
    }

    else
    {
        cout<<"\t\t\t\tSorry! Parking is full."<<endl;
    }
}

void three_wheel()
{
    if(cnt<=500)
    {
        three++;
        amnt=amnt+2000;
        cnt=cnt+1;

        cout<<"\t\t\t\t\t**********UPDATING**********"<<endl;
        Sleep(500);
        cout<<"\t\t\t\tA new Three Wheeler has parked."<<endl;
        cout<<"\t\t\t\tTotal numbers of vehicles: "<<cnt<<endl;
        cout<<"\t\t\t\tnow free space: "<<500-(two+three+four)<<endl;
        cout<<endl;
    }

    else
    {
        cout<<"\t\t\t\tSorry! Parking is full";
    }
}

void four_wheel()
{
    if(cnt<=500)
    {
        four++;
        amnt=amnt+3000;
        cnt=cnt+1;

        cout<<"\t\t\t\t\t**********UPDATING**********"<<endl;
        Sleep(500);
        cout<<"\t\t\t\tA new FourWheeler has parked."<<endl;
        cout<<"\t\t\t\tTotal numbers of vehicles: "<<cnt<<endl;
        cout<<"\t\t\t\tnow free space: "<<500-(two+three+four)<<endl;
        cout<<endl;
    }

    else
    {
        cout<<"\t\t\t\tSorry! Parking is full";
    }
}

void ShowParkInfo()
{
    cout<<"\t\t\t\t********** SHOWING INFORMATION *********"<<endl;

    cout<<"\t\t\t\tTotal amount: "<<amnt<<endl;
    cout<<"\t\t\t\tTotal numbers of vehicles: "<<cnt<<endl;

    cout<<"\t\t\t\tTotal numbers of Two Wheeler: "<<two<<endl;
    cout<<"\t\t\t\tTotal number of Three Wheeler: "<<three<<endl;
    cout<<"\t\t\t\tTotal number of Four Wheeler: "<<four<<endl;

    cout<<endl;
}

int Parking()
{
    int choice;
    system("cls");
    while(1)
    {
        cout<<"\t\t\t\t\t\t  HOTEL MANAGEMENT SYSTEM \n\n";
		cout<<"\t\t _______________________________________________________________________________________ \n";
		cout<<"\t\t|                                  PARKING INFO                                         |\n";
		cout<<"\t\t|                      Parking number of vehicles limit: 500                            |\n";
		cout<<"\t\t|                      Two Wheeler parking charges: 1000TK Per Day.                     |\n";
		cout<<"\t\t|                      Three Wheeler parking charges: 2000TK Per Day.                   |\n";
		cout<<"\t\t|                      Four Wheeler parking charges: 3000TK Per Day.                    |\n";
		cout<<"\t\t|                                                                                       |\n";
		cout<<"\t\t|                           1  >> Two Wheeler                                           |\n";
		cout<<"\t\t|                           2  >> Three Wheeler                                         |\n";
		cout<<"\t\t|                           3  >> Four Wheeler                                          |\n";
		cout<<"\t\t|                           4  >> Show the record                                       |\n";
		cout<<"\t\t|                           5  >> For Exit                                              |\n";
		cout<<"\t\t|_______________________________________________________________________________________|\n";
		cout<<"\t\tEnter your choice: ";
		cin>>choice;

        switch(choice)
        {
            case 1:
                {
                    system("cls");
                    two_wheel();
                }
            break;

            case 2:
                {
                    system("cls");
                    three_wheel();
                }
            break;

            case 3:
                {
                    system("cls");
                    four_wheel();
                }
            break;

            case 4:
                {
                    system("cls");
                    ShowParkInfo();
                }
            break;
            case 5:
                return 0;

            default:
                {
                    system("cls");

                    cout<<"**************************************************"<<endl;
                    cout<<"\t\t\tWrong Input. Try Again."<<endl;
                    cout<<endl;
                }
            }
        }
}

void BankTransfer()
{
    int Mt[4][4], scn1, vercode, vercodein;
    int bnkacno[] = {9, 7, 5, 3, 8, 1, 2, 1, 6, 7, 3, 3, 9, 1, 2, 6};
    srand(time(0));
    ofstream file;

	system("cls");
    cout<<"This is our bank account number: 9753 81216 7339 126"<<endl;
    cout<<"Scan this Accitrix to pay automatically:"<<endl<<endl;
    int k=0;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            Mt[i][j] = bnkacno[k];
            k++;
        }
    }

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<Mt[i][j]<<"   ";
        }
        cout<<endl;
    }

    cout<<"Press 1 to scan the Accitrix: ";
    cin>>scn1;

    if(scn1==1)
    {
        vercode = rand() % 1000;
        file.open("Verfication Bank.txt", ios::out|ios::app);
        file<<vercode<<endl<<endl;

        cout<<"We have send verification code to your phone number. Please enter the code here: ";
        cin>>vercodein;

        if(vercodein==vercode)
        {
            cout <<"Verification Loading..";
            Sleep(500);
            system("cls");
            cout <<"Verification Loading....";
            Sleep(500);
            system("cls");
            cout <<"Verification Loading......";
            Sleep(500);
            system("cls");
            cout <<"Verification Loading........";
            cout<<"Verification is complete."<<endl;

            cout<<"Payment is complete."<<endl<<endl;;
            cout<<"Your room number is: "<<rand()%500<<". Please use the verification code "<<vercode<<" for room unlocking."<<endl;
            c++;
        }
        else
        {
            cout<<"Something went wrong. Please try again."<<endl;
            Sleep(500);
            BankTransfer();
        }
    }
    else
    {
        cout<<"Something went wrong. Please try again."<<endl;
        Sleep(500);
        BankTransfer();
    }
}

void LuckyWinner()
{
    string cryptoadrs;
    cout<<"Than you have a chance to win a massive discount on the final cost."<<endl<<endl;
    cout<<"Enter the previous crypto wallet address that you paid to: ";
    cin>>cryptoadrs;

    int T[37][37];

    for(int i=0; i<=36; i++)
        T[i][0] = 0;

    for(int i=0; i<=36; i++)
        T[0][i] = 0;

    for(int i=1; i<=36; i++)
    {
        for(int j=1; j<=36; j++)
        {
            if(cryptoadrs[i-1]==res[j-1])
                T[i][j] = T[i-1][j-1] + 1;

            else
            {
                if(T[i-1][j]>=T[i][j-1])
                    T[i][j] = T[i-1][j];

                else
                    T[i][j] = T[i][j-1];
            }
        }
    }

    int i=36, j=36;
    while(T[i][j]!=0)
    {
        if(cryptoadrs[i-1]==res[j-1])
        {
            k++;
            i--;
            j--;
        }

        else if(T[i-1][j]>=T[i][j-1])
            i--;

        else
            j--;
    }
}

void CryptoCurrency()
{
    int wc;
    float cnvrt;
    ofstream file;
    system("cls");
    cout<<"\t\t\t\t\t\t  HOTEL MANAGEMENT SYSTEM \n";
	cout<<"\t\t _______________________________________________________________________________________ \n";
	cout<<"\t\t|                   Choose which crypto you would like to pay with                      |\n";
	cout<<"\t\t|                                                                                       |\n";
	cout<<"\t\t|                      1  >> Bytecoin.                                                  |\n";
	cout<<"\t\t|                                                                                       |\n";
	cout<<"\t\t|                      2  >> Bytecoin Cash.                                             |\n";
	cout<<"\t\t|                                                                                       |\n";
	cout<<"\t\t|                      3  >> Ethernano.                                                 |\n";
	cout<<"\t\t|                                                                                       |\n";
	cout<<"\t\t|                      4  >> Procoin.                                                   |\n";
	cout<<"\t\t|_______________________________________________________________________________________|\n";
    coin:
    cout<<"Enter your choice: ";
    cin>>wc;
    cout<<endl;

	if(wc<1 or wc>4)
	{
		cout<<"Invalid Input. Try Again."<<endl;
		Sleep(500);
		goto coin;
	}

    else if(wc>0 and wc<=4)
    {
        int scn, vercode, vercodein;
        ofstream file;
        char alphabet[36] = {'a', 'b', 'c', '0', 'd', 'e', 'f', '1', 'g',
                             'h', 'i', '2', 'j', 'k', 'l', '3', 'm', 'n',
                             'o', '4', 'p', 'q', 'r', '5', 's', 't', 'u',
                             '6', 'v', 'w', 'x', '7', 'y', 'z', '8', '9'};

        srand(time(NULL));
        for (int i=0; i<36; i++)
            res = res + alphabet[rand() % 36];

        file.open("Crypto Address.txt", ios::out|ios::app);
        file<<res<<endl<<endl;

		prevst:
        cout<<"Have you stayed at our hotel before and paid in crypto?"<<endl<<"1. Yes."<<endl<<"2. No."<<endl;
        cout<<"Enter your choice: ";
        cin>>visit;

		if(visit<1 or visit>2)
		{
			cout<<endl<<"Ivalid Input. Try again."<<endl<<endl;
			Sleep(500);
			goto prevst;
		}

        else if(visit==1)
        {
            LuckyWinner();
            if(k<=5)
                k = k*5;

            else
                k = k*1;

            cout<<"Congratulation!!! You have gained "<<k<<"% discount on total cost.";
            if(wc==1)
            {
                cnvrt = (float)(Subtotal-((Subtotal*k)/100)) / 3000000;
                cout<<"You will pay "<<cnvrt<<" Bytecoin(s)."<<endl;
            }
            else if(wc==2)
            {
                cnvrt = (float)(Subtotal-((Subtotal*k)/100)) / 50000;
                cout<<"You will pay "<<cnvrt<<" Bytecoin Cash(s)."<<endl;
            }
            else if(wc==3)
            {
                cnvrt = (float)(Subtotal-((Subtotal*k)/100)) / 190000;
                cout<<"You will pay "<<cnvrt<<" Ethernano(s)."<<endl;
            }
            else
            {
                cnvrt = (float)(Subtotal-((Subtotal*k)/100)) / 13000;
                cout<<"You will pay "<<cnvrt<<" Procoin(s)."<<endl;
            }
        }

        else
        {
            if(wc==1)
            {
                cnvrt = (float)Subtotal / 3000000;
                cout<<"You will pay "<<cnvrt<<" Bytecoin(s)."<<endl;
            }
            else if(wc==2)
            {
                cnvrt = (float)Subtotal / 50000;
                cout<<"You will pay "<<cnvrt<<" Bytecoin Cash(s)."<<endl;
            }
            else if(wc==3)
            {
                cnvrt = (float)Subtotal / 190000;
                cout<<"You will pay "<<cnvrt<<" Ethernano(s)."<<endl;
            }
            else
            {
                cnvrt = (float)Subtotal / 13000;
                cout<<"You will pay "<<cnvrt<<" Procoin(s)."<<endl;
            }
        }

        cout<<"This is our cryptocurrency wallet address number: ";
        cout<<res<<endl;

        char M[6][6];
        int k=0;
        for(int i=0; i<6; i++)
        {
            for(int j=0; j<6; j++)
            {
                M[i][j] = res[k];
                k++;
            }
        }

		cp:
        cout<<endl<<"Scan this Addressix to go payment directly: "<<endl;

        for(int i=0; i<6; i++)
        {
            for(int j=0; j<6; j++)
            {
                cout<<M[i][j]<<"  ";
            }
            cout<<endl;
        }

        cout<<"Press 1 to scan the Addressix: ";
        cin>>scn;

        if(scn==1)
        {
            ofstream file;
            vercode = rand() % 1000;
            file.open("Verfication Crypto.txt", ios::out|ios::app);
            file<<vercode<<endl<<endl;

            cout<<"We have send verification code to your phone number. Please enter the code here: ";
            cin>>vercodein;

            if(vercodein==vercode)
            {
                cout <<"Verification Loading..";
                Sleep(500);
                system("cls");
                cout <<"Verification Loading....";
                Sleep(500);
                system("cls");
                cout <<"Verification Loading......";
                Sleep(500);
                system("cls");

                cout <<"Verification Loading........";
                cout<<"Verification is complete."<<endl;

                cout<<"Payment is complete."<<endl<<endl;;
                cout<<"Your room number is: "<<rand()%500<<". Please use the verification code "<<vercode<<" for room unlocking."<<endl;
                c++;
            }
            else
            {
                cout<<"Something went wrong. Please try again."<<endl;
                Sleep(500);
                goto cp;
            }
        }
        else
        {
            cout<<"Something went wrong. Please try again."<<endl;
            Sleep(500);
            CryptoCurrency();
        }
    }

}

void PaymentCustomer()
{
    int pm;
    system("cls");
    cout<<"\t\t\t\t\t\t  HOTEL MANAGEMENT SYSTEM \n";
	cout<<"\t\t _______________________________________________________________________________ \n";
	cout<<"\t\t|                   How would you like to pay?                                  |\n";
	cout<<"\t\t|                                                                               |\n";
	cout<<"\t\t|                      1  >> Bank Trasnfer.                                     |\n";
	cout<<"\t\t|                                                                               |\n";
	cout<<"\t\t|                      2  >> Pay using Cryptocurrency.                          |\n";
	cout<<"\t\t|_______________________________________________________________________________|\n";
    cout<<"\t\tEnter your choice: ";
    cin>>pm;
    cout<<endl;
    switch(pm)
    {
        case 1:
            {
                BankTransfer();
            }
        break;

        case 2:
        {
            CryptoCurrency();
        }
        break;

        default:
        {
            cout<<"\t\t\t\tWrong Input. Try again."<<endl;
            Sleep(500);
            PaymentCustomer();
        }
        break;
    }
}







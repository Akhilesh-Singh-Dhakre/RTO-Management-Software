#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<process.h>

struct mobile
 {
  char mobno[10];
 }mob;

struct birth
 {
  int day,month,year;
 }dob;

struct aadhar
 {
  char adhrno[16];
 }adhr;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class RTO
 {
  public:
  char name[40],address[30],gender[10],father_name[30];
  char veh_no[20],vehicle[20],state[15];
  int age;
  void RTO_Entry()
  {
   cout<<"\nEnter your name:";
   gets(name);
   cout<<"Enter your father's name :";
   gets(father_name);
   cout<<"Enter your birth day:";
   cin>>dob.day;
   gotoxy(24,5);
   cout<<"/";
   cin>>dob.month;
   gotoxy(27,5);
   cout<<"/";
   cin>>dob.year;
   cout<<"Enter your age:";
   cin>>age;
   if(age<18)
   {
    cout<<"\nYou are under aged to get registered in RTO";
    delay(1500);
   }
   else
   {
    cout<<"Enter your gender{M/F/other}:";
    cin>>gender;
    cout<<"Enter your mobile no.:-";
    gets(mob.mobno);
    cout<<"Enter your residential address:";
    gets(address);
    cout<<"Enter your state:";
    gets(state);
    cout<<"Enter your adhar card no.:";
    gets(adhr.adhrno);
    int x;
    cout<<"\nEnter your vehicle:-";
    cout<<"\n1.2 Wheeler\n2.3 Wheeler\n3.4Wheeler";
    cout<<"\n4.more than 4 wheeler";
    cout<<"\nEnter from above:";
    cin>>x;
    if(x==1)
     strcpy(vehicle,"2 wheeler");
    else if(x==2)
     strcpy(vehicle,"3 wheeler");
    else if(x==3)
     strcpy(vehicle,"4 wheeler");
    else if(x==4)
     strcpy(vehicle,"more than 4 wheeler");
    else
     strcpy(vehicle,"NULL");
    cout<<"\nEnter your vehicle no.:";
    gets(veh_no);
   }
  }
  void RTO_Display()
  {
   cout<<"\nName:";
   puts(name);
   cout<<"S/D/W of:";
   puts(father_name);
   cout<<"Address:";
   puts(address);
   cout<<"State:";
   puts(state);
   cout<<"Date of birth:";
   cout<<dob.day<<"/"<<dob.month<<"/"<<dob.year;
   cout<<"\nGender:"<<gender;
   cout<<"\nAdhar no.:";
   puts(adhr.adhrno);
   cout<<"\nVehicle no.:"<<veh_no;
   cout<<"\nVehicle type:"<<vehicle;
  }
 }RTO1;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Licence:public RTO
 {
  public:
  char licence_code[30];
  int day,month,year;
  void Making()
  {
   RTO::RTO_Entry();
  }
  void Renewal()
  {
   RTO::RTO_Entry();
   clrscr();
   cout<<"\nEnter your 20 digit licence code:";
   gets(licence_code);
   cout<<"Enter the Expiry Date:";
   cin>>day;
   gotoxy(25,3);
   cout<<"/";
   cin>>month;
   gotoxy(28,3);
   cout<<"/";
   cin>>year;
  }
  void Making_Display()
  {
   textcolor(BLUE);
   clrscr();
   RTO::RTO_Display();
   cout<<"\nLicence code:";
   cout<<"RTO-"<<state<<"-";
   puts(adhr.adhrno);
   cout<<"Valid Till:31/12/35";
  }
  void Renewal_Display()
  {
   textcolor(BLUE);
   clrscr();
   gotoxy(1,6);
   cout<<"\nYour extended date";
   cout<<day<<"/"<<month<<"/"<<year+15;
   getch();
   clrscr();
   RTO::RTO_Display();
   cout<<"\nLicense Code:";
   puts(licence_code);
   cout<<"\nValid Till:"<<day<<"/"<<month<<"/"<<year+15;
  }
 };
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Transfer:public RTO
 {
  public:
  char sname[40],fname[40],gender[10],address1[30],state1[15];
  char vehicle1[20];
  char veh_no1[20];
  void Transfer_Enter()
  {
   RTO::RTO_Entry();
   clrscr();
   cout<<"\t\tEnter for second person";
   cout<<"\nEnter your name:";
   gets(sname);
   cout<<"Enter father name:";
   gets(fname);
   cout<<"Enter your gender{M/F/OTHER}:";
   gets(gender);
   cout<<"Enter date of birth:";
   cin>>dob.day;
   gotoxy(28,5);
   cout<<"-";
   cin>>dob.month;
   gotoxy(31,5);
   cout<<"-";
   cin>>dob.year;
   cout<<"\nEnter your address:";
   gets(address1);
   cout<<"Enter your aadhar no.:";
   gets(adhr.adhrno);
   cout<<"Enter your state:";
   gets(state1);
   cout<<"Enter your mobile no.:";
   gets(mob.mobno);
  }
 void Transfer_Display()
 {
  cout<<"\n\n\n\n\n\n\n\n\t\t     TRANSFERRING PLEASE WAIT......\n";
  delay(3000);
  clrscr();
  gotoxy(1,6);
  cout<<"\nVehicle no."<<veh_no<<" FOR "<<vehicle;
  cout<<" Has been transfered from\n\t\t";
  puts(name);
  cout<<" "<<"\n\t\t to \n\t\t";
  puts(sname);
  textcolor(GREEN);
  strcpy(veh_no1,veh_no);
  strcpy(vehicle1,vehicle);
  getch();
  clrscr();
  delay(1000);
  cout<<"\nName:";
  puts(sname);
  cout<<"Son of:";
  puts(fname);
  cout<<"Gender:";
  puts(gender);
  cout<<"Date of birth:"<<dob.day<<"-"<<dob.month<<"-"<<dob.year;
  cout<<"Address:";
  puts(address1);
  cout<<"State:";
  puts(state);
  cout<<"Aadhar no.:";
  puts(adhr.adhrno);
  cout<<"\nVehicle type:";
  puts(vehicle1);
  cout<<"Vehicle no.:";
  puts(veh_no1);
 }
};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Updation:public RTO
  {
   public:
   char Lic_code[22],veh[20],veh_num[20],ch,licence1[20],licence2[20];
   char desi[20],Light[20];
   void Licence_Update()
    {
     int n1,n2;
     RTO::RTO_Entry();
     clrscr();
     cout<<"\nEntrer your licence code:";
     gets(Lic_code);
     cout<<"\nEnter the type of licence you have:\n1.2 Wheeler\n2.3 Wheeler";
     cout<<"\n3.4Wheeler\n4.More than 4 Wheeler\nEnter:";
     cin>>n1;
     if(n1==1)
     {
      strcpy(licence1,"2 Wheeler");
     }
     else if(n1==2)
     {
      strcpy(licence1,"3 Wheeler");
     }
     else if(n1==3)
     {
      strcpy(licence1,"4 Wheeler");
     }
     else if(n1==4)
     {
      strcpy(licence1,"More Than 4 Wheeler");
     }
     else
     {
      strcpy(licence1,"NULL");
     }
     clrscr();
     cout<<"\nTo which type of licence you want to convert your existing licence?";
     cout<<"\n1.2 Wheeler\n2.3 Wheeler";
     cout<<"\n3.4Wheeler\n4.More than 4 Wheeler\nEnter:";
     cin>>n2;
     if(n2==1)
      strcpy(licence2,"2 Wheeler");
     else if(n2==2)
      strcpy(licence2,"3 Wheeler");
     else if(n2==3)
      strcpy(licence2,"4 Wheeler");
     else if(n2==4)
      strcpy(licence2,"More Than 4 Wheeler");
     else
      strcpy(licence2,"NULL");
    }
   void Licence_Update_Display()
    {
     gotoxy(16,6);
     cout<<"\nYour Existing Licence:";
     puts(licence1);
     cout<<"is updated to :";
     puts(licence2);
     cout<<"\nYour New Licence Code:";
     cout<<"RTO-"<<state<<"-";
     puts(adhr.adhrno);
     getch();
     clrscr();
     RTO::RTO_Display();
     cout<<"\nLicence Code:";
     cout<<"RTO-"<<state<<"-";
     puts(adhr.adhrno);
    }
   void AIP()
    {
     int n;
     RTO::RTO_Entry();
     cout<<"\nEnter your licence code:";
     gets(Lic_code);
     cout<<"\nEnter your vehicle Type:";
     cout<<"\n1.4 Wheeler\n2.More Than Two Wheeler";
     cout<<"\nEnter:";
     cin>>n;
     if(n==1)
      strcpy(veh,"4 Wheeler");
     else if(n==2)
      strcpy(veh,"More Than 4 Wheeler");
     else
      strcpy(veh,"NULL");
     cout<<"\nEnter Your Vehicle No.:";
     gets(veh_num);
     cout<<"\nDo you want all india permit for your vehicle{Y/N}:";
     cin>>ch;
    }
   void AIP_Display()
   {
    if(ch=='Y'||ch=='y')
    {
     gotoxy(1,6);
     cout<<"\nYour Vehicle";
     puts(veh_num);
     cout<<"has gotten all india permit. ";
     cout<<"\nNow Your No. Plate has to be changed to YELLOW color...";
    }
    else
    {
     cout<<"\nQUITTED!!!!!!!!!";
     delay(1000);
     exit(0);
    }
   }
};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void main()
{
 clrscr();
 int num,n,pos,count=0;
 char ab,ch,lk[40];
 void Loading();
 Licence LIC;
 Transfer TRA;
 Updation UPDATE;
 textcolor(RED);
 clrscr();
 strcpy(lk,"WELCOME TO RTO MANAGEMENT");
 cout<<"\n\n\n\n\n\n\n\n\n\t\t\t";
 for(int i=0;i<=24;i++)
 {
  delay(100);
  cout<<lk[i];
 }
 delay(1000);
 clrscr();
 logo:
 Loading();
 textcolor(15);
 cout<<"\n\t\t\t   WELCOME TO RTO MANAGEMENT";
 delay(100);
 cout<<"\n\t\t\t   ~~~~~~~ ~~ ~~~ ~~~~~~~~~~";
 delay(100);
 cout<<"\n\t\t\t=================================";
 delay(100);
 cout<<"\n\t\t\t|==|                         |==|";
 delay(100);
 cout<<"\n\t\t\t|==|       1.Licence         |==|";
 delay(100);
 cout<<"\n\t\t\t|==|       2.Name Transfer   |==|";
 delay(100);
 cout<<"\n\t\t\t|==|       3.Updation        |==|";
 delay(100);
 cout<<"\n\t\t\t|==|       4.Exit            |==|";
 delay(100);
 cout<<"\n\t\t\t|==|                         |==|";
 delay(100);
 cout<<"\n\t\t\t=================================";
 delay(100);
 cout<<"\n\n\n\n\n\n\t\t\t\n\n\n\n\n\n\n\t\t\t\t\t\tIF U ARE RTO EMPLOYEE TYPE'121'";
 gotoxy(30,11);
 cout<<"\n\t\t\tEnter Your Choice :";
 cin>>num;
 clrscr();
 switch(num)
  {
   case 1:Loading();
	  textcolor(RED);
	  clrscr();
	  cout<<"\n\t\t************<LICENCE>************";
	  cout<<"\n\t\t|==|                         |==|";
	  cout<<"\n\t\t|==|   1.MAKING              |==|";
	  cout<<"\n\t\t|==|   2.RENEWAL             |==|";
	  cout<<"\n\t\t|==|   3.BACK TO MENU        |==|";
	  cout<<"\n\t\t|==|                         |==|";
	  cout<<"\n\t\t*********************************";
	  cout<<"\n\t\tEnter your choice:";
	  cin>>n;
	  clrscr();
	  if(n==1)
	  {
	   cout<<"\n=====================<MAKING>=================";
	   cout<<"\n=====";
	   fstream file("MAKE.TXT",ios::out|ios::in|ios::app);
	   LIC.Making();
	   count++;
	   file.seekg(0);
	   file.write((char*)&LIC,sizeof(LIC));
	   LIC.Making_Display();
	   delay(5000);
	   getch();
	   file.close();
	   goto logo;
	  }
	  else if(n==2)
	  {
	   cout<<"\n=====================<RENEWAL>===============";
	   cout<<"======";
	   fstream file("Renew.txt",ios::out|ios::in|ios::app);
	   LIC.Renewal();
	   file.seekg(0);
	   file.write((char*)&LIC,sizeof(LIC));
	   count++;
	   clrscr();
	   file.read((char*)&LIC,sizeof(LIC));
	   LIC.Renewal_Display();
	   file.close();
	   goto logo;
	  }
	  else if(n==3)
	   goto logo;
	  else
	  {
	   gotoxy(35,2);
	   cout<<"\nINVALID ENTRY";
	   cout<<"\nEnter * to go back:";
	   ab=getch();
	   if(ab=='*')
	    goto logo;
	  }
	  break;
   case 2:cout<<"\n==================<NAMETRANSFER>================";
	  cout<<"===";
	  fstream file("Trans.txt",ios::out|ios::in|ios::app);
	  TRA.Transfer_Enter();
	  file.seekg(0);
	  file.write((char*)&TRA,sizeof(TRA));
	  count++;
	  clrscr();
	  file.read((char*)&TRA,sizeof(TRA));
	  TRA.Transfer_Display();
	  file.close();
	  goto logo;
	  break;
   case 3:abhi:
	  clrscr();
	  Loading();
	  cout<<"\n\t\t**************<UPDATION>**************";
	  cout<<"\n\t\t|==|                              |==|";
	  cout<<"\n\t\t|==|     1.Licence Update         |==|";
	  cout<<"\n\t\t|==|     2.All India Permit       |==|";
	  cout<<"\n\t\t|==|     3.Back To Menu           |==|";
	  cout<<"\n\t\t|==|                              |==|";
	  cout<<"\n\t\t**************************************";
	  cout<<"\n\t\tEnter your choice:";
	  cin>>n;
	  delay(1000);
	  clrscr();
	  if(n==1)
	  {
	   cout<<"\n==================<LICENCE UPDATE>==============";
	   cout<<"===";
	   fstream file("Licup.txt",ios::out|ios::in|ios::app);
	   UPDATE.Licence_Update();
	   file.seekg(0);
	   file.write((char*)&UPDATE,sizeof(UPDATE));
	   clrscr();
	   count++;
	   file.read((char*)&UPDATE,sizeof(UPDATE));
	   UPDATE.Licence_Update_Display();
	   file.close();
	   goto logo;
	  }
	  else if(n==2)
	  {
	   cout<<"\n=================<ALL INDIA PERMIT>===========";
	   cout<<"=====";
	   fstream file("AIP.txt",ios::out|ios::in|ios::app);
	   UPDATE.AIP();
	   file.seekg(0);
	   file.write((char*)&UPDATE,sizeof(UPDATE));
	   count++;
	   clrscr();
	   file.read((char*)&UPDATE,sizeof(UPDATE));
	   UPDATE.AIP_Display();
	   delay(2000);
	   file.close();
	   goto logo;
	  }
	  else if(n==3)
	  {
	   goto logo;
	  }
	  else
	  {
	   cout<<"\nWrong choice try again";
	   cout<<"\nEnter * to go back";
	   //ab=getch();
	   if(ab=='*')
	   {
	    goto abhi;
	   }
	  }
	  break;
   case 4:exit(0);
	  break;
   case 121:RMEW:
	    clrscr();
	    int x;
	    char password[20],ab_no[20];
	    cout<<"\n\t\t    RTO MANAGEMENT EMPLOYEE WINDOW";
	    cout<<"\n\t\t    ___ __________ ________ ______";
	    cout<<"\n\t\t=======================================";
	    cout<<"\n\t\t|==|                               |==|";
	    cout<<"\n\t\t|==|     1.Modify                  |==|";
	    cout<<"\n\t\t|==|     2.Delete                  |==|";
	    cout<<"\n\t\t|==|     3.No. of Enteries         |==|";
	    cout<<"\n\t\t|==|       [Total No. of Vechiles] |==|";
	    cout<<"\n\t\t|==|     4.Go Back to Main Menu    |==|";
	    cout<<"\n\t\t|==|     5.Exit                    |==|";
	    cout<<"\n\t\t|==|                               |==|";
	    cout<<"\n\t\t=======================================";
	    cout<<"\n\t\tMake Your Choice :";
	    cin>>x;
	    clrscr();
	    switch(x)
	     {
	      case 1:cout<<"\n================<MODIFY>================";
		     cout<<"\nEnter Your Password:";
		     gets(password);
		     if(strcmp(password,"RTO123")==0)
		     {
		      cout<<"\nEnter Vehicle No. to Modify:";
		      gets(ab_no);
		      fstream file_M("MAKE.txt",ios::out|ios::in|ios::app);
		      fstream file_M1("T_Make.txt",ios::out|ios::in);
		      char cho;
		      while(file_M.read((char*)&LIC,sizeof(LIC)))
		      {
		       puts(LIC.veh_no);
		       clrscr();
		       if(strcmp(ab_no,LIC.veh_no)==0)
		       {
			LIC.Making_Display();
			getch();
			clrscr();
			cout<<"\nWant to Modify This Record{Y/N}:";
			cin>>cho;
			if(cho=='y'||cho=='Y')
			{
			 file_M1.seekp(-1*sizeof(LIC),ios::cur);
			 LIC.Making();
			}
			else
			 goto RMEW;
		       }
		       file_M1.write((char*)&LIC,sizeof(LIC));
		      }
		      clrscr();
		      cout<<"\n\n\nThe DATA is Modified!!!!!";
		      file_M.close();
		      file_M1.close();
		      remove("MAKE.txt");
		      rename("T_Make.txt","Make.txt");
		      fstream file_R("Renew.txt",ios::out|ios::in|ios::app);
		      fstream file_R1("T_Renew.txt",ios::out|ios::in);
		      while(file_R.read((char*)&LIC,sizeof(LIC)))
		      {
		       if(strcmp(ab_no,LIC.veh_no)==0)
		       {
			LIC.Renewal_Display();
			getch();
			clrscr();
			cout<<"\nWant to Modify This Record{Y/N}:";
			cin>>cho;
			clrscr();
			if(cho=='y'||cho=='Y')
			{
			 file_R1.seekp(-1*sizeof(LIC),ios::cur);
			 LIC.Renewal();
			}
			else
			 goto RMEW;
		       }
		       file_R1.write((char*)&LIC,sizeof(LIC));
		      }
		      clrscr();
		      cout<<"\n\n\nThe DATA is Modified!!!!!";
		      file_R.close();
		      file_R1.close();
		      remove("Renew.txt");
		      rename("T_Renew.txt","Renew.txt");
		      fstream file_T("Trans.txt",ios::in|ios::out|ios::app);
		      fstream file_T1("T_Trans.txt",ios::out|ios::in);
		      while(file_T.read((char*)&TRA,sizeof(TRA)))
		      {
		       if(strcmp(ab_no,TRA.veh_no)==0)
		       {
			TRA.Transfer_Display();
			getch();
			clrscr();
			cout<<"\nWant to Modify This Record{Y/N}:";
			cin>>cho;
			if(cho=='y'||cho=='Y')
			{
			 file_T1.seekp(-1*sizeof(TRA),ios::cur);
			 TRA.Transfer_Enter();
			}
		       }
		       file_T1.write((char*)&TRA,sizeof(TRA));
		      }
		      clrscr();
		      cout<<"\n\n\nThe DATA is Modified!!!!!";
		      file_T.close();
		      file_T1.close();
		      remove("Trans.txt");
		      rename("T_Trans.txt","Trans.txt");
		      fstream file_L("Licup.txt",ios::out|ios::in|ios::app);
		      fstream file_L1("T_Licup.txt",ios::out|ios::in);
		      while(file_L.read((char*)&UPDATE,sizeof(UPDATE)))
		      {
		       if(strcmp(ab_no,UPDATE.veh_no)==0)
		       {
			UPDATE.Licence_Update_Display();
			getch();
			clrscr();
			cout<<"\nWant to Modify This Record{Y/N}:";
			cin>>cho;
			if(cho=='y'||cho=='Y')
			{
			 file_L1.seekp(-1*sizeof(UPDATE),ios::cur);
			 UPDATE.Licence_Update();
			}
		       }
		       file_L1.write((char*)&UPDATE,sizeof(UPDATE));
		      }
		      clrscr();
		      cout<<"\n\n\nThe DATA is Modified!!!!!";
		      file_L.close();
		      file_L1.close();
		      remove("Licup.txt");
		      rename("T_Licup.txt","Licup.txt");
		      delay(2000);
		      clrscr();
		      goto RMEW;
		     }
		     else
		     {
		      cout<<"\n\nWrong Password!!!!!!!!!!";
		     }
		     break;
	      case 2: cout<<"\n===================<DELETE>=====================";
		      cout<<"\nEnter your password:";
		      gets(password);
		      if(strcmp(password,"RTO123")==0)
		      {
		       cout<<"\nEnter vehicle no. to delete:";
		       gets(ab_no);
		       fstream file_M("Make.txt",ios::out|ios::in|ios::app);
		       fstream file_M1("T_Make.txt",ios::out|ios::in);
		       char cho;
		       while(file_M.read((char*)&LIC,sizeof(LIC)))
		       {
			if(strcmp(ab_no,LIC.veh_no)==0)
			{
			 LIC.Making_Display();
			 getch();
			 clrscr();
			 cout<<"\nWant to delete this record{Y/N}:";
			 cin>>cho;
			 clrscr();
			 if(cho=='Y'||cho=='y')
			  {
			   file_M1.write((char*)&LIC,sizeof(LIC));
			   clrscr();
			   cout<<"\n\n\nThe DATA is deleted!!!!";
			  }
			 }
			}
		       file_M.close();
		       file_M1.close();
		       remove("Make.txt");
		       rename("T_MAKE.txt","Make.txt");
		       fstream file_R("Renew.txt",ios::out|ios::in|ios::app);
		       fstream file_R1("T_Renew.txt",ios::out|ios::in);
		       while(file_R.read((char*)&LIC,sizeof(LIC)))
		       {
			if(strcmp(ab_no,LIC.veh_no)==0)
			{
			 LIC.Renewal_Display();
			 getch();
			 clrscr();
			 cout<<"\nwant to Delete this record{Y/N}:";
			 cin>>cho;
			 clrscr();
			 if(cho=='y'||cho=='Y')
			 {
			  file_R1.write((char*)&LIC,sizeof(LIC));
			  clrscr();
			  cout<<"\n\n\nThe DATA is Deleted!!!!";
			 }
			}
		       }
		       file_R.close();
		       file_R1.close();
		       remove("Renew.txt");
		       rename("T_Renew.txt","Renew.txt");
		       fstream file_T("Trans.txt",ios::out|ios::in|ios::app);
		       fstream file_T1("T_Trans.txt",ios::out|ios::in);
		       while(file_T.read((char*)&TRA,sizeof(TRA)))
		       {
			if(strcmp(ab_no,TRA.veh_no)==0)
			{
			 TRA.Transfer_Display();
			 getch();
			 clrscr();
			 cout<<"\nWant to delete This record{Y/N}:";
			 cin>>cho;
			 clrscr();
			 if(cho=='y'||cho=='Y')
			 {
			  file_T1.write((char*)&TRA,sizeof(TRA));
			  clrscr();
			  cout<<"\n\n\nThe DATA is Deleted!!!!";
			 }
			}
		       }
		       file_T.close();
		       file_T1.close();
		       remove("Trans.txt");
		       rename("T_Trans.txt","Trans.txt");
		       fstream file_L("Licup.txt",ios::out|ios::in|ios::app);
		       fstream file_L1("T_licup.txt",ios::out|ios::in);
		       while(file_L.read((char*)&UPDATE,sizeof(UPDATE)))
		       {
			if(strcmp(ab_no,UPDATE.veh_no)==0)
			{
			 UPDATE.Licence_Update_Display();
			 getch();
			 clrscr();
			 cout<<"\nWant to delete this record{Y/N}:";
			 cin>>cho;
			 clrscr();
			 if(cho=='y'||cho=='Y')
			 {
			  file_L1.write((char*)&UPDATE,sizeof(UPDATE));
			  clrscr();
			  cout<<"\n\n\n The DATA id deleted!!!!";
			 }
			}
		       }
		       file_L.close();
		       file_L1.close();
		       remove("Licup.txt");
		       rename("T_Licup.txt","Licup.txt");
		       delay(2000);
		       clrscr();
		       goto RMEW;
		      }
		     else
		      cout<<"\nWrong Password!!!!!";
		     break;
	      case 3:cout<<"\n============<NO> OF ENTERIES>=========";
		     cout<<"===";
		     cout<<"\nEmter Your Password:";
		     gets(password);
		     if(strcmp(password,"RTO123")==0)
		      {
		       cout<<"\nTotal No. of Vechile Registered :";
		       cout<<count;
		       delay(2000);
		      }
		     goto RMEW;
		     break;
	      case 4:goto logo;
		     break;
	      case 5:exit(0);
		     break;
	      default:char flag;
		      cout<<"\nYou Have Choose the Wrong Option !!TrY AgAiN!!";
		      delay(1500);
		      Loading();
		      goto RMEW;
	     }
	    break;
   default:cout<<"\nWrong Choice Try Again";
	   delay(1500);
	   Loading();
	   goto logo;
  }
 getch();
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Loading()
{
 textcolor(70);
 clrscr();
 for(int u=5;u<8;u++)
 {
  gotoxy(27,11);
  cout<<"\tLOADING";
  for(int o=0;o<3;o++)
  {
   cout<<".";
   delay(500);
  }
  clrscr();
 }
}

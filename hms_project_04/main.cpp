#include<iostream>
#include<string>
#include<fstream>
#include<conio.h>


using namespace std;

void  window01();
void cregister();
void login();
void Ourservices();
void contactUs();
void Aboutus();
void Mainmenu();
void display();
void Covid19menu();

namespace inputData
{
     int inputnum01;
    int inputnum02;
    string inputnum03;
    float inputnum04;
    string username1;
    string userpassword1;
}
class services
{
protected:

    string FullName,Tel,Date,time,Location,age;

public:


      virtual void getAppoinment()
      {
         cout << "\n\t\t\t\t\t Enter Patient Name full name : ";
         cin>>FullName;
         cout << "\n\t\t\t\t\t Enter Patient Telephone number : ";
         cin>>Tel;
         cout << "\n\t\t\t\t\t Enter Patient Location area : ";
         cin>>Location;
         cout << "\n\t\t\t\t\t Enter date : ";
         cin>>Date;
         cout << "\n\t\t\t\t\t Enter Time : ";
         cin>>time;
      }

      virtual void Calculate()
      {

      }





};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class covid19:public services
{
protected:

    float Bill,Bill02,Bill03,Bill04,Bill05;
       float FinalBillamount=0;

public:

    void  covid19f()
    {



                using namespace inputData;
                string answer1,answer2,answer3,answer4;
                system("cls");
                cout << "\n\t\t\t\t\t****Covid 19 self-fourm**** \n";
                cout << "\n\t\t\t\t\tThe most common symptoms of COVID-19 are fever, tiredness, and dry cough. Some patients may have aches and pains,\n\t\t\t\t\t  nasal congestion, runny nose, sore throat or diarrhea. These symptoms are usually mild and begin gradually.\n\t\t\t\t\t Some people become infected but don’t develop any symptoms and don't feel unwell.\n\t\t\t\t\t Most people (about 80%) recover from the disease without needing special treatment.\n\t\t\t\t\t Around 1 out of every 6 people who gets COVID-19 becomes seriously ill and develops difficulty breathing. Older people,\n\t\t\t\t\t and those with underlying medical problems like high blood pressure, heart problems or diabetes, are more likely to develop \n\t\t\t\t\t serious illness.People with fever, cough and difficulty breathing should seek medical attention.\n";
                cout << "\n\t\t\t\t\t-------Please answer the following questions ! -------"<<endl;
                cout << "\n\t\t\t\t\tDo you have any of the following symptoms? (You can select more than one)\n ";
                cout << "\n\t\t\t\t\t01.Fever - y/n : ";
                cin>>answer1;
                cout << "\n\t\t\t\t\t02.Sore throat -y/n : ";
                cin>>answer2;
                cout << "\n\t\t\t\t\t>03.Cough Runny Nose and   -y/n : ";
                cin>>answer3;
                cout << "\n\t\t\t\t\t04.Difficulty in Breathing  -y/n : ";
                cin>>answer4;

                cout << "\n\t\t\t\t\t--------------------------------\n ";

                if("y" || "Y" ==answer1 && "y" || "Y"==answer4 && "y" || "Y"==answer3 && "y" || "Y"==answer2 )
                {
                    system("cls");
                    cout << "\n\t\t\t\t\t-You have been  Covid 19 diagnosed with symptoms !\n ";
                    cout << "\n\t\t\t\t\t- Please follow the instructions below >>>\n ";
                    cout << "\n\t\t\t\t\t- Get an immediate Rapid-Antigen test now - press 01\n ";
                    cout << "\n\t\t\t\t\t- Get an immediate PCR test now - press 02\n ";
                    cout << "\n\t\t\t\t\t>Exit -03: \n";
                    cout << "\n\t\t\t\t\tEnter your choice : ";
                    cin>>inputnum01;

                    switch(inputnum01)
                    {
                    case 1:
                        RapidTest();
                        break;
                    case 2:
                        PcrTest();
                        break;
                    case 3:
                        Covid19menu();
                        break;
                    }
                }else if("y" || "Y" ==answer1 || "y" || "Y"==answer2 || "y" || "Y"==answer3 || "y" || "Y"==answer4 )
                {
                      system("cls");
                      cout << "\n\t\t\t\t\t- See a Our Covid 19 care servises-- doctor immediately [Online video Chat]- 02\n ";
                      cout << "\n\t\t\t\t\t>Exit -02  : \n";
                      cin>>inputnum01;

                      switch(inputnum01)
                      {
                      case 1:
                        CovidHpackage();
                        break;
                      case 2:
                        Covid19menu();
                        break;
                      }

                }else  if("n" || "N" ==answer1 && "n" || "N"==answer2 && "n" || "N" ==answer3 && "n" || "N" ==answer4 )
                {
                    system("cls");
                    cout << "\n\t\t\t\t\t Good ! The health here is good at the moment...But there is a risk ! \n\t\t\t\t\t ~ stay safe and stay healthy ~ \n\t\t\t\t\t Did you get the Covid 19 vaccine? : y/n : \n ";
                    cout << "\n\t\t\t\t\t>Exit -01 : \n";
                    cin>>inputnum03;

                    if("y" || "Y" ==inputnum03)
                    {

                        VaccineCenter();
                    }else if("n" || "N" ==inputnum03)
                    {
                        Covid19menu();
                    }

                }

    }
    void  VaccineCenter()
    {
       using namespace inputData;
         system("cls");
         cout << "\n\t\t\t\t\t ***********Cpvid 19 Vaccine center ************** \n";
         cout << "\n\t\t\t\t\t > Make an appointment - press 01 \n";
         cout << "\n\t\t\t\t\t>Exit -02 : \n";
         cout << "\n\t\t\t\t\t>Enter your choice : ";
         cin>>inputnum01;


         if(1==inputnum01)
         {
            getAppoinment();
             cout << "\n\t\t\t\t\t>Enter age : ";
             cin>>age;

             using namespace inputData;
             system("cls");
            cout << "\n\t\t\t\t\t ***********Covid 19 Vaccine center ************** \n\n";
            cout << "\n\t\t\t\t\t>Pfizer-BioNTech -- Price+Medical charges : Rs.3500.00   -01";
            cout << "\n\t\t\t\t\t>Moderna --Price+Medical charges : Rs.3200.00           -02 ";
            cout << "\n\t\t\t\t\t>astrazeneca -- Price+Medical charges : Rs.2790.00       -03 ";
            cout << "\n\t\t\t\t\t>sinopharm -- Price+Medical charges : Rs.2503.00        -04 \n";
            cout << "\n\t\t\t\t\tEnter your choice vaccine type ........ ";
            cin>>inputnum01;

            switch(inputnum01)
            {
            case 1:

                while(1)
                {
                    system("cls");
                  cout << "\n\t\t\t\t\t............Payment Portal.................\n\n ";
                  cout << "\n\t\t\t\t\t>Pfizer-BioNTech -- Price+Medical charges : Rs.3500.00 \n";

                  cout << "\n\t\t\t\t\t>Pay now : Rs. ";
                 cin>>Bill04;
                 if(3500==Bill04)
                 {
                        cout << "\n\t\t\t\t\t>Payment succsesfully ! \n";
                        FinalBillamount=Bill04;
                        cout << "\n\t\t\t\t\t>Exit : ";
                        system("pause");
                        VaccineCenter();
                 }else
                 {
                     cout << "\n\t\t\t\t\t>Payment not   succsesfully ! Try again - Press 01 || Exit - Press 02\n";
                     cin>>inputnum01;
                     switch(inputnum01)
                     {
                     case 1:

                        continue;
                        break;
                     case 2:
                          break;
                     }
                    }
                 }
                 break;
            case 2:
                 while(1)
                {
                    system("cls");
                  cout << "\n\t\t\t\t\t............Payment Portal.................\n\n ";
            cout << "\n\t\t\t\t\t>Moderna --Price+Medical charges : Rs.3200.00        \n";

                  cout << "\n\t\t\t\t\t>Pay now : Rs. ";
                 cin>>Bill04;
                 if(3200==Bill04)
                 {
                        cout << "\n\t\t\t\t\t>Payment succsesfully ! \n";
                        FinalBillamount=Bill04;
                        cout << "\n\t\t\t\t\t>Exit : ";
                        system("pause");
                        VaccineCenter();
                 }else
                 {
                     cout << "\n\t\t\t\t\t>Payment not   succsesfully ! Try again - Press 01 || Exit - Press 02\n";
                     cin>>inputnum01;
                     switch(inputnum01)
                     {
                     case 1:

                        continue;
                        break;
                     case 2:
                          break;
                     }
                    }
                 }
                 break;
            case 3:
                while(1)
                {
                    system("cls");
                  cout << "\n\t\t\t\t\t............Payment Portal.................\n\n ";
            cout << "\n\t\t\t\t\t>astrazeneca -- Price+Medical charges : Rs.2790.00   ";

                  cout << "\n\t\t\t\t\t>Pay now : Rs. ";
                 cin>>Bill04;
                 if(2790==Bill04)
                 {
                        cout << "\n\t\t\t\t\t>Payment succsesfully ! \n";
                        FinalBillamount=Bill04;
                        cout << "\n\t\t\t\t\t>Exit : ";
                        system("pause");
                        VaccineCenter();
                 }else
                 {
                     cout << "\n\t\t\t\t\t>Payment not   succsesfully ! Try again - Press 01 || Exit - Press 02\n";
                     cin>>inputnum01;
                     switch(inputnum01)
                     {
                     case 1:

                        continue;
                        break;
                     case 2:
                          break;
                     }
                    }
                 }
                 break;
            case 4:
                 while(1)
                {
                    system("cls");
                  cout << "\n\t\t\t\t\t............Payment Portal.................\n\n ";
            cout << "\n\t\t\t\t\t>sinopharm -- Price+Medical charges : Rs.2503.00    \n";

                  cout << "\n\t\t\t\t\t>Pay now : Rs. ";
                 cin>>Bill04;
                 if(2503==Bill04)
                 {
                        cout << "\n\t\t\t\t\t>Payment succsesfully ! \n";
                        FinalBillamount=Bill04;
                        cout << "\n\t\t\t\t\t>Exit : ";
                        system("pause");
                        VaccineCenter();
                 }else
                 {
                     cout << "\n\t\t\t\t\t>Payment not   succsesfully ! Try again - Press 01 || Exit - Press 02\n";
                     cin>>inputnum01;
                     switch(inputnum01)
                     {
                     case 1:

                        continue;
                        break;
                     case 2:
                          break;
                     }
                    }
                 }
                 break;
            }


         }else if(2==inputnum01)
         {
              Covid19menu();

         }
    }


    void  PcrTest()
    {
        using namespace inputData;
         system("cls");
         cout << "\n\t\t\t\t\t ***********PCR TEST ************** ";
         cout << "\n\t\t\t\t\t >Drive through pcr - Make an appointment - press 01 ";
         cout << "\n\t\t\t\t\t >PCR Test **Come home and do the test - Make an appointment - press 02 ";
         cout << "\n\t\t\t\t\t>Exit -03 : \n";
         cout << "\n\t\t\t\t\t>Enter your choice : ";
         cin>>inputnum01;

         switch(inputnum01)
         {
         case 1:

             system("cls");

                cout << "\n\t\t\t\t\t >Drive through PCR Test \n ";
                cout << "\n\t\t\t\t\t Price : Rs.3500.00+TAX ";
                getAppoinment();
                while(1)
             {
                system("cls");
                cout << "\n\t\t\t\t\tPayment portal -----------------------\n";
                cout << "\n\t\t\t\t\t >Drive through PCR Test \n ";
                cout << "\n\t\t\t\t\t Price : Rs.3500.00+TAX ";
                cout << "\n\t\t\t\t\tPay now : ";
                cin>>Bill;

             if(3500==Bill)
             {
                 FinalBillamount=Bill;
                 cout << "\n\t\t\t\t\tPayment sucsessfully ! - Click here Continue menu.... \n";
                 getch();
                 PcrTest();
             }else{

                    cout << "\n\t\t\t\t\tPayment not sucsessfully ! try again - press 01 | Exit - press 02 \n ";
                    cin>>inputnum01;
                    if(1==inputnum01)
                    {
                        continue;
                    }else if(2==inputnum01){

                        PcrTest();
                    }

             }

             }
             break;
         case 2:

             system("cls");

                cout << "\n\t\t\t\t\t >PCR Test **Come home and do the test  \n ";
                cout << "\n\t\t\t\t\t Price : Rs.6500.00+TAX ";
                getAppoinment();
                while(1)
             {
                system("cls");
                cout << "\n\t\t\t\t\tPayment portal -----------------------\n";
                cout << "\n\t\t\t\t\t >PCR Test **Come home and do the test  \n ";
                cout << "\n\t\t\t\t\t Price : Rs.6500.00+TAX ";
                cout << "\n\t\t\t\t\tPay now : ";
                cin>>Bill02;

             if(6500==Bill02)
             {
                 FinalBillamount=Bill02;
                 cout << "\n\t\t\t\t\tPayment sucsessfully ! - Click here Continue menu.... \n";
                 getch();
                 PcrTest();
             }else{

                    cout << "\n\t\t\t\t\tPayment not sucsessfully ! try again - press 01 | Exit - press 02 \n ";
                    cin>>inputnum01;
                    if(1==inputnum01)
                    {
                        continue;
                    }else if(2==inputnum01){

                        PcrTest();
                    }

             }
         }
         break;
         case 3:
            Covid19menu();
            break;
         }
        }
    void  RapidTest()
    {
         using namespace inputData;
         system("cls");
        cout << "\n\t\t\t\t\t ***********Rapid-Antigen TEST ************** ";
         cout << "\n\t\t\t\t\t > Make an appointment - press 01 \n";
         cout << "\n\t\t\t\t\t>Exit -02 : \n";
         cout << "\n\t\t\t\t\t>Enter your choice : ";
         cin>>inputnum01;

         switch(inputnum01)
         {
         case 1:

              system("cls");
                using namespace inputData;
                cout << "\n\t\t\t\t\t >Rapid Test \n ";
                cout << "\n\t\t\t\t\t Price : Rs.500.00+TAX ";
                getAppoinment();
                while(1)
             {
                system("cls");
                cout << "\n\t\t\t\t\tPayment portal -----------------------\n";
                cout << "\n\t\t\t\t\t >Rapid Test \n ";
                cout << "\n\t\t\t\t\t Price : Rs.500.00+TAX ";
                cout << "\n\t\t\t\t\tPay now : ";
                cin>>Bill03;

             if(500==Bill03)
             {
                 FinalBillamount=Bill03;
                 cout << "\n\t\t\t\t\tPayment sucsessfully ! - Click here Continue menu.... \n";
                 getch();
                 RapidTest();
             }else{

                    cout << "\n\t\t\t\t\tPayment not sucsessfully ! try again - press 01 | Exit - press 02 \n ";
                    cin>>inputnum01;
                    if(1==inputnum01)
                    {
                        continue;
                    }else if(2==inputnum01){

                       RapidTest();
                    }

             }
          }
             break;
         case 2:
            Covid19menu();
            break;
         }

    }


    void  CovidHpackage()
    {
        using namespace inputData;
        system("cls");
        cout << "\n\t\t\t\t\t Covid 19 Care Health Packages  \n";
        cout << "\n\t\t\t\t\t.......********..........\n";
        cout << "\n\t\t\t\t\t>Hire Covid 19 specilaist Doctor - [01] ";
        cout << "\n\t\t\t\t\t>Lite package - [02] ";
        cout << "\n\t\t\t\t\t>Family package -[03] ";
        cout << "\n\t\t\t\t\t> Premium pakage - [04]";
        cout << "\n\t\t\t\t\t>Select your want to any packages : ";
        cin>>inputnum01;

        switch(inputnum01)
        {
        case 1:
                    cout << "\n\t\t\t\t\t> Covid 19 specilaist Doctor - Meet online Video Chat !";
                    cout << "\n\t\t\t\t\t> Dr.nadeeja karanarathne - 24*hours ";
                    cout << "\n\t\t\t\t\t>Make quick appoinment - purchase now Rs.350.00 ";


             while(1)
                {
                    system("cls");
                  cout << "\n\t\t\t\t\t............Payment Portal.................\n\n ";
                  cout << "\n\t\t\t\t\t>purchase now Rs.350.00 +  \n";

                  cout << "\n\t\t\t\t\t>Pay now : Rs. ";
                 cin>>Bill05;
                 if(350==Bill05)
                 {
                        cout << "\n\t\t\t\t\t>Payment succsesfully ! \n";
                        FinalBillamount=Bill04;
                        cout << "\n\t\t\t\t\t>Exit : ";
                        system("pause");
                       CovidHpackage();
                 }else
                 {
                     cout << "\n\t\t\t\t\t>Payment not   succsesfully ! Try again - Press 01 || Exit - Press 02\n";
                     cin>>inputnum01;
                     switch(inputnum01)
                     {
                     case 1:

                        continue;
                        break;
                     case 2:
                          break;
                     }
                    }
                 }


            break;
        case 2:

            cout << "\n\t\t\t\t\t>Lite package - * \n";
            cout << "\n\t\t\t\t\t>Lite package details \n";
            cout << "\n\t\t\t\t\t>purchase package now : Rs.13,500.00 ";

               while(1)
                {
                    system("cls");
                  cout << "\n\t\t\t\t\t............Payment Portal.................\n\n ";
                  cout << "\n\t\t\t\t\t>purchase package now : Rs.13,500.00  \n";

                  cout << "\n\t\t\t\t\t>Pay now : Rs. ";
                 cin>>Bill05;
                 if(13500==Bill05)
                 {
                        cout << "\n\t\t\t\t\t>Payment succsesfully ! \n";
                        FinalBillamount=Bill05;
                        cout << "\n\t\t\t\t\t>Exit : ";
                        system("pause");
                         CovidHpackage();
                 }else
                 {
                     cout << "\n\t\t\t\t\t>Payment not   succsesfully ! Try again - Press 01 || Exit - Press 02\n";
                     cin>>inputnum01;
                     switch(inputnum01)
                     {
                     case 1:

                        continue;
                        break;
                     case 2:
                          break;
                     }
                    }
                 }

        break;
        case 3:
             cout << "\n\t\t\t\t\t>Family package - * \n";
            cout << "\n\t\t\t\t\t>Family package details \n";
             cout << "\n\t\t\t\t\t>purchase package now : Rs.20,500.00 ";
               while(1)
                {
                    system("cls");
                  cout << "\n\t\t\t\t\t............Payment Portal.................\n\n ";
                      cout << "\n\t\t\t\t\t>purchase package now : Rs.25,500.00 ";

                  cout << "\n\t\t\t\t\t>Pay now : Rs. ";
                 cin>>Bill05;
                 if(25500==Bill05)
                 {
                        cout << "\n\t\t\t\t\t>Payment succsesfully ! \n";
                        FinalBillamount=Bill05;
                        cout << "\n\t\t\t\t\t>Exit : ";
                        system("pause");
                       CovidHpackage();
                 }else
                 {
                     cout << "\n\t\t\t\t\t>Payment not   succsesfully ! Try again - Press 01 || Exit - Press 02\n";
                     cin>>inputnum01;
                     switch(inputnum01)
                     {
                     case 1:

                        continue;
                        break;
                     case 2:
                          break;
                     }
                    }
                 }
            break;
        case 4:
             cout << "\n\t\t\t\t\t>Premium package - * \n";
            cout << "\n\t\t\t\t\t>Premium package details \n";
            cout << "\n\t\t\t\t\t>purchase package now : Rs.55000.00 ";
               while(1)
                {
                    system("cls");
                  cout << "\n\t\t\t\t\t............Payment Portal.................\n\n ";
                  cout << "\n\t\t\t\t\t>Pfizer-BioNTech -- Price+Medical charges : Rs.3500.00 \n";

                  cout << "\n\t\t\t\t\t>Pay now : Rs. ";
                 cin>>Bill05;
                 if(55000==Bill05)
                 {
                        cout << "\n\t\t\t\t\t>Payment succsesfully ! \n";
                        FinalBillamount=Bill05;
                        cout << "\n\t\t\t\t\t>Exit : ";
                        system("pause");
                         CovidHpackage();
                 }else
                 {
                     cout << "\n\t\t\t\t\t>Payment not   succsesfully ! Try again - Press 01 || Exit - Press 02\n";
                     cin>>inputnum01;
                     switch(inputnum01)
                     {
                     case 1:

                        continue;
                        break;
                     case 2:
                          break;
                     }
                    }
                 }
            break;

        }

    }

void cal()
{
   cout << "\n\t\t\t\t\tPayment portal -----------------------\n";
                cout << "\n\t\t\t\t\t >Rapid Test \n ";
                cout << "\n\t\t\t\t\t Price : Rs.500.00+TAX "<<FinalBillamount;
                cout << "\n\t\t\t\t\tPay now : ";
                cin>>Bill03;
}

};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class DEChannl:public services
{
private:
     string Fname,Locate,pAge,BookDate,Booktime;
     string Doctorid,Doctorname ;
     int TelNum;
     float Doctor_Charge,fullchBill_amount=0;
     float BookingCharge=300;



public:

          DEChannl(int did,string Doctorname,string Fname,int TelNum,string Locate,string pAge,string BookDate,string Booktime,float Doctor_Charge)
          {
              this->Doctorname=Doctorname;
              this->Fname=Fname;
              this->TelNum=TelNum;
              this->pAge=pAge;
              this->BookDate=BookDate;
              this->Booktime=Booktime;
              this->Doctor_Charge=Doctor_Charge;

             fullchBill_amount+=Doctor_Charge+BookingCharge;
             while(1)
             {
             using namespace inputData;
             cout << "\n\t\t\t\t\t Your bill is Rs:"<<fullchBill_amount<<endl;
             cout << "\n\t\t\t\t\t Pay now: ";
             cin>>inputnum04;

             if(fullchBill_amount==inputnum04)
             {
              ofstream putChanneldata;
              putChanneldata.open("DchannelInfo.csv",ios::app);
              putChanneldata<<did<<","<<Doctorname<<","<<Fname<<","<<TelNum<<","<<Locate<<","<<pAge<<","<<BookDate<<","<<Booktime<<","<<fullchBill_amount<<endl;
              putChanneldata.close();
              cout << "\n\t\t\t\t\t Appointment added succesfully !"<<endl;
              break;
             }else
             {
                cout << "\n\t\t\t\t\t Appointment added not succesfully ! "<<endl;
                continue;
              }
             }
            }

          ~DEChannl()
          {

          }
};
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Mpackage:public services
{
protected:

    float mFbillamount;

public:

       void  BasicPKG()
       {
         system("cls");
         using namespace inputData;
        cout << "\n\t\t\t\t\t Basic Health Screening \n";
        cout << "\n\t\t\t\t\t----------------------------\n ";
        cout << "\n\t\t\t\t\t>Full Blood Count (General Body Condition) ";
        cout << "\n\t\t\t\t\t>Fasting Blood Sugar (Glucose Levels) ";
        cout << "\n\t\t\t\t\t>Cholesterol (Cardiac Health)";
        cout << "\n\t\t\t\t\t>Triglycerides (Cardiac Health) ";
        cout << "\n\t\t\t\t\t>Creatinine & eGFR (Kidney & Renal Health) ";
        cout << "\n\t\t\t\t\t>Gamma GT (Liver Health)";
        cout << "\n\t\t\t\t\t>SGPT (Liver Health) ";
        cout << "\n\t\t\t\t\t>Urine Full Report (General Body Condition)\n";

        cout << "\n\t\t\t\t\t Price : Rs.3,600.00 \n";
        cout << "\n\t\t\t\t\t Pay now : Rs. ";
        cin>>inputnum04;

        if(3600==inputnum04)
        {
              cout << "\n\t\t\t\t\t Payment successfuly !  \n";
              mFbillamount+=inputnum04;
        }else{
            cout << "\n\t\t\t\t\t Payment not successfuly !  \n";
        }

       }


       void  GeneralPKG()
        {    system("cls");
                 using namespace inputData;
        cout << "\n\t\t\t\t\t General Health Screening \n";
        cout << "\n\t\t\t\t\t----------------------------\n ";
        cout << "\n\t\t\t\t\t>Full Blood Count (General Body Condition) ";
        cout << "\n\t\t\t\t\t>Fasting Blood Sugar (Glucose Levels) ";
        cout << "\n\t\t\t\t\t>Lipid Profile (Cardiac Health)";
        cout << "\n\t\t\t\t\t>Creatinine & eGFR (Kidney & Renal Health) ";
        cout << "\n\t\t\t\t\t>TSH (3rd Generation) (Thyroid Profile) ";
        cout << "\n\t\t\t\t\t>Gamma GT (Liver Health)";
        cout << "\n\t\t\t\t\t>SGPT (Liver Health) ";
        cout << "\n\t\t\t\t\t>Urine Full Report (General Body Condition)\n";
        cout << "\n\t\t\t\t\t>ECG (Cardiac Health) ";
        cout << "\n\t\t\t\t\t>Full Medical Report ";

        cout << "\n\t\t\t\t\t Price : Rs.6,000.00 \n";
        cout << "\n\t\t\t\t\t Pay now : Rs. ";
        cin>>inputnum04;

        if(6000==inputnum04)
        {
              cout << "\n\t\t\t\t\t Payment successfuly !  \n";
               mFbillamount+=inputnum04;
        }else{
            cout << "\n\t\t\t\t\t Payment not successfuly !  \n";
        }


        }


      void PremierPKG()
          {      system("cls");
                 using namespace inputData;
             cout << "\n\t\t\t\t\t Premier Health Package \n";
        cout << "\n\t\t\t\t\t----------------------------\n ";
        cout << "\n\t\t\t\t\t>Full Blood Count (General Body Condition) ";
        cout << "\n\t\t\t\t\t>Fasting Blood Sugar (Glucose Levels) ";
        cout << "\n\t\t\t\t\t>Cholesterol (Cardiac Health)";
        cout << "\n\t\t\t\t\t>Triglycerides (Cardiac Health) ";
        cout << "\n\t\t\t\t\t>Creatinine & eGFR (Kidney & Renal Health) ";
        cout << "\n\t\t\t\t\t>Stool Occult Blood (Bleeding in Lower Intestines)";
        cout << "\n\t\t\t\t\t>SGPT (Liver Health) ";
        cout << "\n\t\t\t\t\t>HbA1C (Diabetes – Glucose Levels)\n";
        cout << "\n\t\t\t\t\t>hsCRP (Inflammation/Identifying Heart Disease))\n";
        cout << "\n\t\t\t\t\t>Micro Albumin (Kidney Health)\n";

        cout << "\n\t\t\t\t\t Price : Rs.15,000.00 \n";
        cout << "\n\t\t\t\t\t Pay now : Rs. ";
        cin>>inputnum04;

        if(15000==inputnum04)
        {
              cout << "\n\t\t\t\t\t Payment successfuly !  \n";
               mFbillamount+=inputnum04;
        }else{
            cout << "\n\t\t\t\t\t Payment not successfuly !  \n";
        }

          }


      void  CardiacPKG()
           {      system("cls");
                  using namespace inputData;
             cout << "\n\t\t\t\t\t Cardiac Screening \n";
        cout << "\n\t\t\t\t\t----------------------------\n ";
        cout << "\n\t\t\t\t\t>Full Blood Count (General Body Condition) ";
        cout << "\n\t\t\t\t\t>Fasting Blood Sugar (Glucose Levels) ";
        cout << "\n\t\t\t\t\t>Cholesterol (Cardiac Health)";
        cout << "\n\t\t\t\t\t>Triglycerides (Cardiac Health) ";
        cout << "\n\t\t\t\t\t>Creatinine & eGFR (Kidney & Renal Health) ";
        cout << "\n\t\t\t\t\t>Gamma GT (Liver Health)";
        cout << "\n\t\t\t\t\t>SGPT (Liver Health) ";
        cout << "\n\t\t\t\t\t>Urine Full Report (General Body Condition)\n";
        cout << "\n\t\t\t\t\t>Serum Triglycerides ";
        cout << "\n\t\t\t\t\t>Ratio of Cholesterol / HDL ";
        cout << "\n\t\t\t\t\t>Blood Urine & Electrolytes ";
        cout << "\n\t\t\t\t\t>Chest X-Ray with Reporting ";

            cout << "\n\t\t\t\t\t Price : Rs.14,500.00 \n";
        cout << "\n\t\t\t\t\t Pay now : Rs. ";
        cin>>inputnum04;

        if(14500==inputnum04)
        {
              cout << "\n\t\t\t\t\t Payment successfuly !  \n";
               mFbillamount+=inputnum04;
        }else{
            cout << "\n\t\t\t\t\t Payment not successfuly !  \n";
        }

           }
      void Senior_citizenPKG()
              {      system("cls");
                     using namespace inputData;
             cout << "\n\t\t\t\t\t Senior Citizen Health Screening \n";
        cout << "\n\t\t\t\t\t----------------------------\n ";
        cout << "\n\t\t\t\t\t>Full Blood Count (General Body Condition) ";
        cout << "\n\t\t\t\t\t>Fasting Blood Sugar (Glucose Levels) ";
        cout << "\n\t\t\t\t\t>Cholesterol (Cardiac Health)";
        cout << "\n\t\t\t\t\t>CA 19-9 (Gastrointestinal Cancer Screening) ";
        cout << "\n\t\t\t\t\t>Creatinine & eGFR (Kidney & Renal Health) ";
        cout << "\n\t\t\t\t\t>CEA (Colon Cancer Screening)";
        cout << "\n\t\t\t\t\t>SGPT (Liver Health) ";
        cout << "\n\t\t\t\t\t>Urine Full Report (General Body Condition)\n";
        cout << "\n\t\t\t\t\t>ESR (Infections/Inflammation) ";
        cout << "\n\t\t\t\t\t>hsCRP (Inflammation/Identifying Heart Disease) ";
        cout << "\n\t\t\t\t\t>TMT – Stress Test (Cardiovascular Function) ";

        cout << "\n\t\t\t\t\t Price : Rs.12,000.00 \n";
        cout << "\n\t\t\t\t\t Pay now : Rs. ";
        cin>>inputnum04;

        if(12000==inputnum04)
        {
              cout << "\n\t\t\t\t\t Payment successfuly !  \n";
               mFbillamount+=inputnum04;
        }else{
            cout << "\n\t\t\t\t\t Payment not successfuly !  \n";
        }

              }
       void Feminine_hPKG()
           {       system("cls");
                 using namespace inputData;
                 cout << "\n\t\t\t\t\t Feminine Health Screening\n";
        cout << "\n\t\t\t\t\t----------------------------\n ";
        cout << "\n\t\t\t\t\t>Full Blood Count (General Body Condition) ";
        cout << "\n\t\t\t\t\t>Fasting Blood Sugar (Glucose Levels) ";
        cout << "\n\t\t\t\t\t>Cholesterol (Cardiac Health)";
        cout << "\n\t\t\t\t\t>Mammogram";
        cout << "\n\t\t\t\t\t>Creatinine & eGFR (Kidney & Renal Health) ";
        cout << "\n\t\t\t\t\t>Gamma GT (Liver Health)";
        cout << "\n\t\t\t\t\t>E.S.R. ";
        cout << "\n\t\t\t\t\t>Random Blood Sugar\n";

        cout << "\n\t\t\t\t\t Price : Rs.13,750.00 \n";
        cout << "\n\t\t\t\t\t Pay now : Rs. ";
        cin>>inputnum04;

        if(13750==inputnum04)
        {
              cout << "\n\t\t\t\t\t Payment successfuly !  \n";
               mFbillamount+=inputnum04;
        }else{
            cout << "\n\t\t\t\t\t Payment not successfuly !  \n";
        }

           }
        void  CancerPKG()
        {    system("cls");
            using namespace inputData;
             cout << "\n\t\t\t\t\t General Health Screening \n";
        cout << "\n\t\t\t\t\t----------------------------\n ";
        cout << "\n\t\t\t\t\t>Full Blood Count (General Body Condition) ";
        cout << "\n\t\t\t\t\t>Fasting Blood Sugar (Glucose Levels) ";
        cout << "\n\t\t\t\t\t>Cholesterol (Cardiac Health)";
        cout << "\n\t\t\t\t\t>Triglycerides (Cardiac Health) ";
        cout << "\n\t\t\t\t\t>Body Mass Index / Distant Vision ";
        cout << "\n\t\t\t\t\t>Chest X-Ray with Report)";
        cout << "\n\t\t\t\t\t>Dietician Consultation ";
        cout << "\n\t\t\t\t\t>nitial Psychological Stress Screening Test";
        cout << "\n\t\t\t\t\t>Chest X-Ray with Report)";
        cout << "\n\t\t\t\t\t>Medical history, physical examination and report discussion by a Consultant Physician";

          cout << "\n\t\t\t\t\t Price : Rs.14,500.00 \n";
        cout << "\n\t\t\t\t\t Pay now : Rs. ";
        cin>>inputnum04;

        if(14500==inputnum04)
        {
              cout << "\n\t\t\t\t\t Payment successfuly !  \n";
               mFbillamount+=inputnum04;
        }else{
            cout << "\n\t\t\t\t\t Payment not successfuly !  \n";
        }

        }
         void  TeenagePKG()
         {       system("cls");
               using namespace inputData;
           cout << "\n\t\t\t\t\t Teenage and Kids Health Screening \n";
        cout << "\n\t\t\t\t\t----------------------------\n ";
        cout << "\n\t\t\t\t\t>Full Blood Count (General Body Condition) ";
        cout << "\n\t\t\t\t\t>Fasting Blood Sugar (Glucose Levels) ";
        cout << "\n\t\t\t\t\t>Cholesterol (Cardiac Health)";
        cout << "\n\t\t\t\t\t>Vision - Near / Distant / Colour Vision";
        cout << "\n\t\t\t\t\t>Initial Psychological Stress Screening Test ";
        cout << "\n\t\t\t\t\t>ECG)";
        cout << "\n\t\t\t\t\t>SGPT / SGOT ";
        cout << "\n\t\t\t\t\t>Dental Check-up";

        cout << "\n\t\t\t\t\t Price : Rs.5,400.00 \n";
        cout << "\n\t\t\t\t\t Pay now : Rs. ";
        cin>>inputnum04;

        if(5400==inputnum04)
        {
              cout << "\n\t\t\t\t\t Payment successfuly !  \n";
               mFbillamount+=inputnum04;
        }else{
            cout << "\n\t\t\t\t\t Payment not successfuly !  \n";
        }

         }


};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class BookRoom:public services
{
protected:
    float BFbillamount;
public:

      void  Ward_bed()
      {
            system("cls");
            using namespace inputData;
             cout << "\n\t\t\t\t\t Ward bed\n";
        cout << "\n\t\t\t\t\t----------------------------\n ";

        cout << "\n\t\t\t\t\t>Share with other Patient";
        cout << "\n\t\t\t\t\t>Attached bathroom ";
        cout << "\n\t\t\t\t\t> Fan";
        cout << "\n\t\t\t\t\t>Guardian Divan";
        cout << "\n\t\t\t\t\t>Ward bed";

          cout << "\n\t\t\t\t\t Price : Rs.14,500.00 \n";
        cout << "\n\t\t\t\t\t Pay now : Rs. ";
        cin>>inputnum04;

        if(14500==inputnum04)
        {
              cout << "\n\t\t\t\t\t Payment successfuly !  \n";
               BFbillamount+=inputnum04;
        }else{
            cout << "\n\t\t\t\t\t Payment not successfuly !  \n";
        }
      }
      void Standard_room()
    {
              system("cls");
            using namespace inputData;
             cout << "\n\t\t\t\t\t Standard_room \n";
        cout << "\n\t\t\t\t\t----------------------------\n ";

        cout << "\n\t\t\t\t\t>Guardian Divan ";
        cout << "\n\t\t\t\t\t>Attached bathroom with meals";
        cout << "\n\t\t\t\t\t>AC";
        cout << "\n\t\t\t\t\t>Fan";
        cout << "\n\t\t\t\t\t>Telephone";
        cout << "\n\t\t\t\t\t>TV";

          cout << "\n\t\t\t\t\t Price : Rs.24,500.00 \n";
        cout << "\n\t\t\t\t\t Pay now : Rs. ";
        cin>>inputnum04;

        if(24,500==inputnum04)
        {
              cout << "\n\t\t\t\t\t Payment successfuly !  \n";
               BFbillamount+=inputnum04;
        }else{
            cout << "\n\t\t\t\t\t Payment not successfuly !  \n";
        }
    }
       void  SemiLuxury_Room()
       {
            system("cls");
            using namespace inputData;
             cout << "\n\t\t\t\t\t SemiLuxury_Room \n";
        cout << "\n\t\t\t\t\t----------------------------\n ";

        cout << "\n\t\t\t\t\t>Guardian Divan ";
        cout << "\n\t\t\t\t\t>Attached bathroom with meals";
        cout << "\n\t\t\t\t\t>AC";
        cout << "\n\t\t\t\t\t>Fan";
        cout << "\n\t\t\t\t\t>Telephone";
        cout << "\n\t\t\t\t\t>TV";
         cout << "\n\t\t\t\t\t>Hot water";
          cout << "\n\t\t\t\t\t>Small Fridge";
           cout << "\n\t\t\t\t\t>Chair";

          cout << "\n\t\t\t\t\t Price : Rs.35,000.00 \n";
        cout << "\n\t\t\t\t\t Pay now : Rs. ";
        cin>>inputnum04;

        if(35000==inputnum04)
        {
              cout << "\n\t\t\t\t\t Payment successfuly !  \n";
               BFbillamount+=inputnum04;
        }else{
            cout << "\n\t\t\t\t\t Payment not successfuly !  \n";
        }
       }
       void  Deluxe_Room()
       {
          system("cls");
            using namespace inputData;
             cout << "\n\t\t\t\t\t Deluxe_Room \n";
        cout << "\n\t\t\t\t\t----------------------------\n ";
         cout << "\n\t\t\t\t\t>Guardian Divan ";
        cout << "\n\t\t\t\t\t>Attached bathroom with meals";
        cout << "\n\t\t\t\t\t>AC";
        cout << "\n\t\t\t\t\t>Fan";
        cout << "\n\t\t\t\t\t>Telephone";
        cout << "\n\t\t\t\t\t>TV";
         cout << "\n\t\t\t\t\t>Hot water";
          cout << "\n\t\t\t\t\t>Small Fridge";
           cout << "\n\t\t\t\t\t>Internet & wifi";
           cout << "\n\t\t\t\t\t>Microwave Oven";
        cout << "\n\t\t\t\t\t>Shower rooms";
        cout << "\n\t\t\t\t\t>Coffee Table";
          cout << "\n\t\t\t\t\t>BathTub ";


          cout << "\n\t\t\t\t\t Price : Rs.55,500.00 \n";
        cout << "\n\t\t\t\t\t Pay now : Rs. ";
        cin>>inputnum04;

        if(55500==inputnum04)
        {
              cout << "\n\t\t\t\t\t Payment successfuly !  \n";
               BFbillamount+=inputnum04;
        }else{
            cout << "\n\t\t\t\t\t Payment not successfuly !  \n";
        }
       }

};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  void Covid19menu()
    {

                using namespace inputData;
                system("cls");
                cout << "\n\t\t\t\t\t****COVID 19 CARE CENTER**** \n";
                cout << "\n\t\t\t\t\t--------------------------------\n ";
                cout << "\n\t\t\t\t\t>Covid 19 self-fourm -01\n ";
                cout << "\n\t\t\t\t\t>Vaccine center -02\n ";
                cout << "\n\t\t\t\t\t>PCR Test -03\n ";
                cout << "\n\t\t\t\t\t>Rapid-Antigen test -04\n ";
                cout << "\n\t\t\t\t\t>Covid care pakages -05 \n ";
                cout << "\n\t\t\t\t\t>Exit -06\n";
                cout << "\n\t\t\t\t\t--------------------------------\n ";
                cout << "\n\t\t\t\t\tEnter number your choice : ";
                cin>>inputnum01;

                 covid19 user;
                switch(inputnum01)
                {
                case 1:

                    user.covid19f();
                    break;
                case 2:
                    user.VaccineCenter();
                    break;
                case 3:
                    user.PcrTest();
                    break;
                case 4:
                    user.RapidTest();
                    break;
                case 5:
                    user.CovidHpackage();
                    break;
                case 6:

                  system("cls");
                 display();
                    break;
                }
    }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Dchannel()
{
    do{
         using namespace inputData;
                system("cls");
                cout << "\n\n\t\t\t\t\t****DOCTOR E-CHANNEL ONLINE-24/7**** \n";
                cout << "\n\t\t\t\t\t--------------------------------\n ";
                cout << "\n\t\t\t\t\t+ Specialist Area +++++++++Doctor name++++++++ Doctor id +++\n ";
                cout << "\n\t\t\t\t\t>Cardiac           -Dr Chandana Amarasinghe   01 ";
                cout << "\n\t\t\t\t\t>Dental            -Dr Suharshi Silva 02 ";
                cout << "\n\t\t\t\t\t>Orthopaedic       -Dr Aflah Sadikeen 03 ";
                cout << "\n\t\t\t\t\t>Nephroligy        -Dr Pandula Athaudaarchchi 04  ";
                cout << "\n\t\t\t\t\t>Gynaecology       -Dr M B F Rahuman 05  ";
                cout << "\n\t\t\t\t\t>Genaral Surgeon   -Dr Mohan Rajakaruna 06 ";
                cout << "\n\t\t\t\t\t>Physicians        -Dr Suneth Karunarathne 07 ";
                cout << "\n\t\t\t\t\t>Neurology         -Dr Sandamali Premarathna 08 ";
                cout << "\n\t\t\t\t\t>Paediatric        -Dr Suneth Karunarathne 09 ";
                cout << "\n\t\t\t\t\t>Ophthalmology     -Dr Vajira Gunawardena 10 ";
                cout << "\n\t\t\t\t\t>Urology           -Dr Thisara Samarawickrama 11 ";
                cout << "\n\t\t\t\t\t>Dermatology       -Dr Wasanthi Rathnayake12 ";
                cout << "\n\t\t\t\t\t>Endocrinology     -Dr Suresh Kottegoda 13 ";
                cout << "\n\t\t\t\t\t>Gastroenterology  -Dr Asunga Dunuwille 14 ";
                cout << "\n\t\t\t\t\t>Family doctor     -Dr Susitha Amarasinghe 15";
                cout << "\n\t\t\t\t\t>+++++++++++++++++++++++++++++++++++++++++\n ";

          string dname,Fn,Loc,age,BDate,Btime,time;
          int  did,Tnum;
          float dCharge;
         cout << "\n\t\t\t\t\t[if you want to Exit - 16] or \n\t\t\t\t\tSelect Doctor ID : ";
         cin>>did;


         if(16>=did)
         {
         cout << "\n\t\t\t\t\t Enter Patient Name full name : ";
         cin>>Fn;
         cout << "\n\t\t\t\t\t Enter Patient Telephone number [only numbers use]: ";
         cin>>Tnum;
         cout << "\n\t\t\t\t\t Enter Patient Home town : ";
         cin>>Loc;
         cout << "\n\t\t\t\t\t Enter Patient age : ";
         cin>>age;
         cout << "\n\t\t\t\t\t Enter Booking date : ";
         cin>>BDate;
         cout << "\n\t\t\t\t\t Enter Booking Time : ";
         cin>>Btime;



           if(1==did)
            {
                   dname="Cardiac-Dr Chandana Amarasinghe";
                   dCharge=1000;
                   DEChannl user(did,dname,Fn,Tnum,Loc,age,BDate,Btime,dCharge);

            }else if(2==did)
            {
                  dname="Dental-Dr Suharshi Silva";
                   dCharge=1500;
                   DEChannl user(did,dname,Fn,Tnum,Loc,age,BDate,Btime,dCharge);

            }else if(3==did)
            {
                    dname="Orthopaedic-Dr Aflah Sadikeen";
                     dCharge=1000;
                   DEChannl user(did,dname,Fn,Tnum,Loc,age,BDate,Btime,dCharge);
            }else if(4==did)
            {      dname="Nephroligy-Dr Pandula Athaudaarchchi ";
                     dCharge=1250;
                   DEChannl user(did,dname,Fn,Tnum,Loc,age,BDate,Btime,dCharge);

            }else if(5==did)
            {
                 dname="Gynaecology-Dr M B F Rahuman";
                  dCharge=2500;
                   DEChannl user(did,dname,Fn,Tnum,Loc,age,BDate,Btime,dCharge);
            }else if(6==did)
            {       dname="Genaral Surgeon-Dr Mohan Rajakaruna ";
                    dCharge=2000;
                   DEChannl user(did,dname,Fn,Tnum,Loc,age,BDate,Btime,dCharge);

            }else if(7==did)
            {
                  dname="Physicians-Dr Suneth Karunarathne";
                   dCharge=1000;
                   DEChannl user(did,dname,Fn,Tnum,Loc,age,BDate,Btime,dCharge);
            }else if(8==did)
            {
                      dname="Neurology-Dr Sandamali Premarathna ";
                       dCharge=1600;
                   DEChannl user(did,dname,Fn,Tnum,Loc,age,BDate,Btime,dCharge);
            }else if(9==did)
            {
                  dname="Paediatric-Dr Suneth Karunarathne";
                   dCharge=1000;
                   DEChannl user(did,dname,Fn,Tnum,Loc,age,BDate,Btime,dCharge);
            }else if(10==did)
            {
                dname="Ophthalmology-Dr Vajira Gunawardena";
                   DEChannl user(did,dname,Fn,Tnum,Loc,age,BDate,Btime,dCharge);

            }else if(11==did)
            {
                   dname="Urology-Dr Thisara Samarawickrama";
                    dCharge=1300;
                   DEChannl user(did,dname,Fn,Tnum,Loc,age,BDate,Btime,dCharge);
            }else if(12==did)
            {
                   dname="Dermatology-Dr Wasanthi Rathnayake";
                    dCharge=1200;
                   DEChannl user(did,dname,Fn,Tnum,Loc,age,BDate,Btime,dCharge);
            }else if(13==did)
            {
                   dname="Endocrinology-Dr Suresh Kottegoda";
                   DEChannl user(did,dname,Fn,Tnum,Loc,age,BDate,Btime,dCharge);
            }else if(14==did)
            {
                 dname="Gastroenterology -Dr Asunga Dunuwille ";
                  dCharge=3000;
                   DEChannl user(did,dname,Fn,Tnum,Loc,age,BDate,Btime,dCharge);
            }else if(15==did)
            {
                   dname="Family doctor-Dr Susitha Amarasinghe ";
                    dCharge=800;
                   DEChannl user(did,dname,Fn,Tnum,Loc,age,BDate,Btime,dCharge);
            }
         }else if(16==did)
         {

         }else{

            cout << "\n\t\t\t\t\tWrong Enter...Try again !...\n";
         }

            cout << "\n\t\t\t\t\tIf you want Continue... - press 01 ";
            cout << "\n\t\t\t\t\t>Exit -02 ";
            cout << "\n\t\t\t\t\t--------------------------------\n ";
            cout << "\n\t\t\t\t\tEnter number your choice : ";
            cin>>inputnum01;

            switch(inputnum01)
            {
            case 1:
                continue;
                break;
            case 2:
                 system("cls");
                 display();
                 break;
            }


    }while(1);


}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 void  MediPackage()
    {
        do{
            using namespace inputData;
        system("cls");
        cout << "\n\t\t\t\t\t HEALTH PACKAGES +  \n";
        cout << "\n\t\t\t\t\t----------------------------\n ";
        cout << "\n\t\t\t\t\t>Basic Health Screening -           Price : Rs.3,600.00     [01] ";
        cout << "\n\t\t\t\t\t>General Health Screening -         Price : Rs.6,000.00     [02] ";
        cout << "\n\t\t\t\t\t>Premier Health Package  -          Price : Rs.15,000.00    [03]";
        cout << "\n\t\t\t\t\t>Cardiac Screening-                 Price : Rs.14,500.00    [04] ";
        cout << "\n\t\t\t\t\t>Senior Citizen Health Screening -  Price : Rs.12,000.00    [05] ";
        cout << "\n\t\t\t\t\t>Feminine Health Screening -        Price : Rs.13,750.00    [06] ";
        cout << "\n\t\t\t\t\t>Cancer Detection – Screening-      Price : Rs.14,500.00    [07] ";
        cout << "\n\t\t\t\t\t>Teenage and Kids Health Screening- Price : Rs.5,400.00     [08] \n";
        cout << "\n\t\t\t\t\t Enter you want to package : ";
        cin>>inputnum01;

        if(8>=inputnum01)
        {
            Mpackage user;
        if(1==inputnum01)
        {
            user.BasicPKG();
        }else if(2==inputnum01)
        {
           user.GeneralPKG();
        }else if(3==inputnum01)
        {
           user.PremierPKG();
        }else if(4==inputnum01)
        {
            user.CardiacPKG();

        }else if(5==inputnum01)
        {
               user.Senior_citizenPKG();
        }else if(6==inputnum01)
        {
            user.Feminine_hPKG();

        }else if(7==inputnum01)
        {
          user.CancerPKG();
        }else if(8==inputnum01)
        {
           user.TeenagePKG();
        }
        }else
        {
                  cout << "\n\t\t\t\t\tWrong Enter value ! Try again...  "<<endl;
        }



       using namespace inputData;
       cout << "\n\t\t\t\t\tIf you want to add new packages... - press 01 ";
       cout << "\n\t\t\t\t\t>Exit -02 ";
       cout << "\n\t\t\t\t\t--------------------------------\n ";
       cout << "\n\t\t\t\t\tEnter number your choice : ";
       cin>>inputnum01;

       switch(inputnum01)
       {
       case 1:
        continue;
        break;
       case 2:
        system("cls");
        display();
        break;
       }
        }while(1);
    }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


 void Baccomadation()
    {

        do{
            using namespace inputData;
        system("cls");
        cout << "\n\t\t\t\t\t BOOK IN ACCOMMONDATION  \n";
        cout << "\n\t\t\t\t\t----------------------------\n ";
        cout << "\n\t\t\t\t\t>Ward bed             Price : Rs.3,600.00     [01] ";
        cout << "\n\t\t\t\t\t>Standard room        Price : Rs.6,000.00     [02] ";
        cout << "\n\t\t\t\t\t>SemiLuxury Room      Price : Rs.15,000.00    [03]";
        cout << "\n\t\t\t\t\t>Deluxe Room          Price : Rs.14,500.00    [04] ";
        cout << "\n\t\t\t\t\t Enter you want to package : ";
        cin>>inputnum01;

        if(8>=inputnum01)
        {
           BookRoom user;
        if(1==inputnum01)
        {
            user.Ward_bed();
        }else if(2==inputnum01)
        {
           user.Standard_room();
        }else if(3==inputnum01)
        {
           user.SemiLuxury_Room();
        }else if(4==inputnum01)
        {
            user.Deluxe_Room();

        }
        }else
        {
                  cout << "\n\t\t\t\t\tWrong Enter value ! Try again...  "<<endl;
        }



       using namespace inputData;
       cout << "\n\t\t\t\t\tIf you want to add new packages... - press 01 ";
       cout << "\n\t\t\t\t\t>Exit -02 ";
       cout << "\n\t\t\t\t\t--------------------------------\n ";
       cout << "\n\t\t\t\t\tEnter number your choice : ";
       cin>>inputnum01;

       switch(inputnum01)
       {
       case 1:
        continue;
        break;
       case 2:
        system("cls");
        display();
        break;
       }
        }while(1);

    }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void display()
    {
        using namespace inputData;
        cout << "\n\t\t\t\t\t Welcome to MyDoc Health care  \n";
        cout << "\n\t\t\t\t\t.......My Account..........\n";
        cout << "\n\t\t\t\t\t>COVID 19 CARE CENTER*** -   [01] ";
        cout << "\n\t\t\t\t\t>Doctor E-Channeling -       [02] ";
        cout << "\n\t\t\t\t\t>Medical pakage -            [03]";
        cout << "\n\t\t\t\t\t>Book in Accommodation  -    [04] ";

        cout << "\n\n\t\t\t\t\t-------------------------------------------------------";

            cout << "\n\n\t\t\t\t\t>Enter your choice : ";
            cin>>inputnum01;

            switch(inputnum01)
            {
                case 1:
                Covid19menu();
                break;
                case 2:
                Dchannel();
                break;
                case 3:
                MediPackage();
                break;
                case 4:
                Baccomadation();
                break;



            }
}



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Customer
{
private:
    string Username;
    string Userpassword;
    string NICnumber;
    int telephoneNum;
    string Homeaddress;
    string age;
public:

     void openAccount(string Username,string Userpassword)
     {
         this->Username=Username;
         this->Userpassword=Userpassword;

         ofstream registerDataFile;
         registerDataFile.open("registerDataFile.txt", ios::app);
         registerDataFile<<Username<<" "<<Userpassword<<endl;
         registerDataFile.close();

         using namespace inputData;
         cout<<"\n\n\n\t\t\t\t\t> Go to next ->  press 01: ";
         cout<<"\n\n\n\t\t\t\t\t> Back to menu->  press 02: ";
          cout<<"\n\n\n\t\t\t\t\t> Enter your choice : ";
          cin>>inputnum01;

         switch(inputnum01)        {
         case 1:
              getuserData();
            break;
            case 2:
             window01();
            break;
            default:
                cout<<"\n\n\n\t\t\t\t\t> Invalid Enter ! ";
        }
     }

        void getuserData()
      {
        system("cls");
        cout << "\n\t\t\t\t\tContinue........Add user infomation ++\n";
        cout << "\n\t\t\t\t\t>Enter Username(enter register username !) : ";
        cin>>Username;
        cout << "\n\t\t\t\t\t>Enter address : ";
        cin>>Homeaddress;
        cout << "\n\t\t\t\t\t>Enter NIC number : ";
        cin>>NICnumber;
        cout << "\n\t\t\t\t\t>Enter telephone number : ";
        cin>>telephoneNum;
        cout << "\n\t\t\t\t\t>Enter age  : ";
        cin>>age;

        ofstream userData;
        userData.open("userData.txt",ios::app);
        userData<<Username<<" "<<Homeaddress<<" "<<NICnumber<<" "<<telephoneNum<<" "<<age<<endl;
        userData.close();

        using namespace inputData;
        cout << "\n\t\t\t\t\tGo to Login()- press 02 : ";
        cin>>inputnum01;

        switch(inputnum01)
        {
        case 1:
            login();
            break;
        }
      }

     void loginAccount(string Username,string Userpassword)
     {
         this->Username=Username;
         this->Userpassword=Userpassword;

        string UserAndPassword=Username+" "+Userpassword;
        string line;

        ifstream registerDataFile;
        registerDataFile.open("registerDataFile.txt");

           bool found = false;

if(registerDataFile.is_open()) {

    while(getline(registerDataFile,line) && !found) {

        if (line.compare(UserAndPassword) == 0) {

            found = true;

        }
    }
    registerDataFile.close();

    if(found) {

        cout << "\n\n\n\t\t\t\t\t Login Sucsessfully "<<endl;
        system("cls");
        UserAccount();
    }

    else {
            using namespace inputData;
          cout << "\n\n\n\t\t\t\t\tUsername or password incorrect!\n\n\n\n"<<endl;
          cout << "\n\n\n\t\t\t\t\t Try to Login again ! press -- [01] || Back to menu :  press--[02]\n\n\n\n"<<endl;
          cin>>inputnum01;
          if(1==inputnum01)
          {
              login();
          }else if(2==inputnum01)
          {
              system("pause");
              window01();
          }
         }
}

}

     void UserAccount()
     {
        cout << "\n\t\t\t\t\t[Account name] : "<<Username<<endl;

     }



};




void cregister()
{
    using namespace inputData;
    cout<<"\n\n\n\t\t\t\t\t> Enter Username : ";
    cin>>username1;
    cout<<"\n\t\t\t\t\t>Enter Password : ";
    cin>>userpassword1;

    Customer *user=new Customer();
    user->openAccount(username1,userpassword1);
    delete user;
}
void login()
{
    using namespace inputData;
    system("cls");
    cout<<"\n\n\n\t\t\t\t\t> Login now -->>>> : ";
    cout<<"\n\n\n\t\t\t\t\t> Enter Username : ";
    cin>>username1;
    cout<<"\n\t\t\t\t\t>Enter Password : ";
    cin>>userpassword1;

    Customer user;
    user.loginAccount(username1,userpassword1);
    display();





}



void Ourservices()
{


      cout<<"\n\t\t\t\t\t----------- Our services------------------- \n\n\n";
        cout<<"\n\t\t\t\t\tAmong the many healthy choices one can make in life, I sincerely believe Odoc care center to be a \n\t\t\t\t  supremely healthy choice - from many perspectives. To the customer, we are a provider of the finest\n\t\t\t\t   health care available in Sri Lanka today\n";
        cout<<"\n\t\t\t\t\Our State-of-the Art technology, medical systems and procedures, skilled professionals and years of \n\t\t\t\t\ experience in the field equate to a top tier health care provider\n\n\n\n";


                cout<<"\n\t\t\t\t\t----------- Exit : ";
                system("pause");
                window01();






}
void contactUs()
{
    cout<<"\n\n\t\t\t\t\t ----------Contact us---------------"<<endl;
    cout<<"\n\n\n\t\t\t\t\t>General Line : +94 (0) 115577111\n";
    cout<<"\n\t\t\t\t\t>Hotline : +94 (0) 115777888\n";
    cout<<"\n\t\t\t\t\t> Email : OdocASK@odoc.lk\n";
    cout<<"\n\t\t\t\t\t>Fax : +94 (0) 11 2430393\n";

  cout<<"\n\t\t\t\t\t----------- Exit : ";
                system("pause");
                window01();

}
void Aboutus()
{
    cout<<"\n\n\t\t\t\t\t -------------About us----------------------- "<<endl;
    cout<<"\n\n\n\t\t\t\t\t>Odoc Health Care system (pvt) Ltd\n";
    cout<<"\n\t\t\t\t\t>Colombo 02,sri lanka";
    cout<<"\n\t\t\t\t\t> Copyright © Odoc Health Care system (pvt) Ltd. All rights reserved.\n";
  cout<<"\n\t\t\t\t\t----------- Exit : ";
                system("pause");
                window01();

}


void window01()///// frist window
 {

    using namespace inputData;
    system("cls");
    cout<<"\n\n\t\t\t\t\t MyDoc Healthcare System "<<endl;
    cout<<"\n\n\n\t\t\t\t\t>Regiter : 01\n";
    cout<<"\n\t\t\t\t\t>Log in : 02\n";
    cout<<"\n\t\t\t\t\t> Our services : 03\n";
    cout<<"\n\t\t\t\t\t> Contact us : 04\n";
    cout<<"\n\t\t\t\t\t>About us : 05 \n";
    cout<<"\n\t\t\t\t\t> Exits : 06 \n\n\n";;

    cout<<" \n\n\t\t\t\t\t Enter number : ";
    cin>>inputnum01;
    system("cls");

    switch(inputnum01)
    {
    case 1:
        cregister();
        break;
    case 2:
        login();
        break;
    case 3:
        Ourservices();
        break;
    case 4:
        contactUs();
        break;
    case 5:
        Aboutus();
        break;
    case 6:
        return;
        break;
    default:
            cout<<" \n\n\t\t\t\t\t Enter number is wrong ! ";

    }
}
int main()
{
    window01();

    return 0;
}


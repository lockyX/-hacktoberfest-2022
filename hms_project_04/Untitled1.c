#include <stdio.h>
//#include <stdlib.h>



 int Total=0;
 int final_bill=0;

int Reward_Card(int Rtype,int Rbill)
{


    if(1==Rtype)
    {
       Total=Rbill*0.125;
       final_bill=Rbill-Total;
    }else if(2==Rtype)
    {
      Total=Rbill*0.115;
      final_bill=Rbill-Total;

    }else  if(3==Rtype)
    {
      Total=Rbill*0.095;
      final_bill=Rbill-Total;
    }

    return final_bill;
}

int main()
{

    int Room_type=0;
    int Acc_Basis=0;
    int No_Days=0;
    int RcType=0;
    int Room_bill=0;


    printf(" Enter Room type : ");
    scanf("%d",& Room_type);


   if(-1<=Room_type && 3>=Room_type)
   {
     printf(" Enter Accomdation Basis :ful board==>[01]   half board==>[02] ");
    scanf("%d",&Acc_Basis);


    printf(" Enter No of days : ");
    scanf("%d",& No_Days);


   printf(" Enter Rewrd Card Type ==>> gold==>[01]   silver==>[02]  browns==>[03] : ");
   scanf("%d",&RcType);

        switch(Room_type)
   {
   case 1:

    if(1==Acc_Basis )
    {
        Room_bill=25555*No_Days;
        Reward_Card(RcType,Room_bill);

    }
    else if(2==Acc_Basis)
    {
         Room_bill=17250*No_Days;
         Reward_Card(RcType,Room_bill);
    }

     break;
   case 2:
     if(1==Acc_Basis )
    {
        Room_bill=17500*No_Days;
        Reward_Card(RcType,Room_bill);

    }else if(2==Acc_Basis)
    {
         Room_bill=12250*No_Days;
         Reward_Card(RcType,Room_bill);
    }
break;
   case 3:
     if(1==Acc_Basis )
    {
        Room_bill=9000*No_Days;
        Reward_Card(RcType,Room_bill);

    }else if( 2==Acc_Basis)
    {
        Room_bill=9000*No_Days;
         Reward_Card(RcType,Room_bill);
    }
break;
   }

   printf(" Amount (Rs) : %d ", final_bill  );


   }else{

           printf(" Invalid type of room ");

   }

    return 0;

}

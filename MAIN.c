#include <stdio.h>
#include <windows.h>
int selection();
int moviedetails();
int moviename();
int choice1();
int customer();
int seattype();
struct customer{
		char name[20];
		int no[10];
		char address[20];
		int totalprice;
	};
int main(){
	selection();
	
}
int selection(){

    int choice=choice1();
	switch (choice)
	{
		case 1:
			moviename();
			customer();
			break;
		
		case 2:
		 	
		 	break;
		 	
		case 3:
		 	
		 	break;
		 	
		case 4:
		 	
		    break;
		case 5:
		  	
		  	break;
		
		default:
			printf("Invalid choice- enter again=%d",choice);
			break;
	}
}
int choice1()
{
	
	int choice;
	printf("                 CINEMA TICKET BOOKING SYSTEM\n");
	printf("                ********************************\n");
	printf("____________________________________________________________________\n");
	printf("||             1- Booking of Tickets                              ||\n");
	printf("||             2- Cancellation of Tickets                         ||\n");
	printf("||             3- Ticket Rates                                    ||\n");
	printf("||             4- Show timings                                    ||\n");
	printf("||             5- Exit                                            ||\n");
	printf("||________________________________________________________________||\n");
	printf("  Enter your choice: ");
	scanf("%d",&choice);
	
	return (choice);
}
int customer()
{
	
	struct customer c;
	int i,j,a[i],count=0,n;
	printf("_____________________________________________________________\n");
	for(i=1; i<=100; i++){
		if(a[i]==0){
			printf("%d\t",i);
		}else{
			printf("%d\t",i);
		}
		if(i%10==0){
			printf("\n\n");
		}
	}
	printf("enter how many seats you want=");
	scanf("%d",&n);
	for(i=0; i<n; i++){
	printf("ENTER SEAT YOU WANT?=");
	scanf("%d",&a[i]);
}
	
	if(j>100 || j<1){
		
		printf("invalid seat number");
		printf("RE-ENTER SEAT YOU WANT?=");
	    scanf("%d",&j);
}
	if(a[j]==1){
		printf("this seat is already booked.. enter another seat?");
		scanf("%d",&j);
	}else{
		a[j]=1;
	}
	printf("ENTER YOUR NAME? = ");
	scanf("%s",&c.name);
	printf("ENTER YOUR CONTACT NO? = ");
	scanf("%d",&c.no);
	printf("ENTER YOUR ADDRESS? = ");
	scanf("%s",&c.address);	
	seattype();
	
	
	system("CLS");
	printf(" \n                   ||*********************************||");
	printf(" \n                   ||CUSTOMER TICKET INFORMATION      ||");
	printf(" \n                   ||*********************************||");
	printf(" \n                        NAME=%s                       ",c.name);
	printf(" \n                        ADDRESS=%s                      ",c.address);
	printf(" \n                        CONTACT NO=%d                    ",c.no);
	printf(" \n                        SEAT NO=%d                      ",j);
	printf(" \n                        TICKETS PRICE=%d                  ",c.totalprice);
	
}  
moviedetails1()
{
printf("\n--- Marvel Cinematic Universe films ---\n\n");
}
moviedetails2()
{
printf("\n--- Saviour Of The City  ---\n\n");
}
moviedetails3()
{
printf("\n--- Based On Missions That Seems Impossible ---\n\n");
}
moviedetails4()
{
printf("\n--- A Romantic Movie Full Of Love And Happiness ---\n\n");
}
moviedetails5()
{
printf("\n--- Paramount Pictures Best Production ---\n\n");
}
moviename()
{
	system("CLS");
int i;
printf("\n\n\n**Kindly Select The Movie You Want To Watch**\n\n");
printf("1.Avengers Endgame.\n");
printf("2.Spider Man Far From Home.\n");
printf("3.Mission Impossible.\n");
printf("4.Titanic.\n");
printf("5.Terminater Genisis.\n");
printf("\nPlease Enter The Number Of Movie : ");
scanf("%d",&i);

switch(i)
    {
 case 1:
 moviedetails1();
 break;
 case 2:
 moviedetails2();
 break;
 case 3:
 moviedetails3();
 break;
 case 4:
 moviedetails4();
 break;
 case 5:
 moviedetails5();
 break;
    }
}
seattype()
{
	struct customer c;
    printf("\n\nSelect Category Of Ticket\n\n");
    printf("1.Gold.\n");
    printf("2.Platinum.\n");
    printf("3.Silver.\n");
    int i,n;
    scanf("%d",&i);
    printf("Enter No. Of Tickets : \n");
    scanf("%d",&n);
    if(i==1){
      c.totalprice=1000*n;
   }else
    if(i==2) {
      c.totalprice=850*n;
   }else
   {
      c.totalprice=700*n;
   }
}

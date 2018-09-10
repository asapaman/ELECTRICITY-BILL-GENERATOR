										// by:- Rahul kumar 			section:- K17HZ 			Roll no.:- A-15
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char name[30];
	FILE *fp1,*fp2,*fp3;
	int a;
	float e;
	long int id,i,b,c,d;
	printf("Please Enter Your Name :- ");
	gets(name);
	printf("Enter Your Consumer id :- ");
	scanf("%ld",&id);
	for (i=0;i<=167; i++)
	printf("_");
fp1=fopen("1.txt","r");
	while(!feof(fp1))
	printf("%c",getc(fp1));
     	scanf("%d",&a);
     	for (i=0;i<=167; i++)
	printf("_");
     	switch (a)
     {	
     	case 1 :
     	{
     	fp2=fopen("2.txt","r");
	while(!feof(fp2))
	printf("%c",getc(fp2));
	scanf("%d",&b);
	for (i=0;i<=167; i++)
	printf("-");

     	switch (b)
     	{
     			case 1 :
     			{
     			printf("Category of consumer\n\
				 press 1 for :- Unmetered (Upto 2 kW)\n\
				 press 2 for :- metered (Upto 2 kW)\n\
				 Enter your type :- ");	
     			scanf("%d",&d);
     			for (i=0;i<=167; i++)
				printf("_");
					 switch (d)
					 {
     					case 1 :
     						{
    			printf("Fixed Charge (Rs.) :- 170/connection /per month\n\
		 Energy Charges :-\n\tConsumption in a month (Units) :- XXX\t\t\tRate P/unit :- XXX \n ");
	printf("\nenter energy used (in unit) :- ");
	scanf("%f",&e);
		 for (i=0;i<=167; i++)
	printf("*");
	printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :- %.2f\nRate P/unit :- XXX \
	\nenergy charge :- 000.00\nfixed charge :- 000.00\n\n Total charge :- Rs. 170 /- only\n\n\t\t\t\tThank You.\n",strupr(name),id,e);	
     	}
		break;	
    	case 2 :
		{
		printf("\nFixed Charge (Rs.) :- XXX	\n\nEnergy Charges :-\n\tConsumption in a month (Units) \t\t\t Rate (P/unit)\n\n\
		First 50 units \t\t\t\t 210 P/unit \n\
		51-100 units \t\t\t\t 240 P/unit\n\
		Above 100 units\t\t\t\t 280 P/unit \n\
		\nenter energy used (in unit) :- ");
		scanf("%f",&e);
			 for (i=0;i<=167; i++)
			printf("*");
		if(e>=0&&e<=50)
		printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :-%.2f\
		\nEnergy Charge :- %.2f\nFixed Charge :- 000.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",strupr(name),id,e,(210*e)/100,(210*e)/100);	
		else if(e>50&&e<=100)
		printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :-%.2f\
		\nEnergy Charge :- %.2f\nFixed Charge :- 000.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",strupr(name),id,e,105+((240*(e-50))/100),105+((240*(e-50))/100));
		else if(e>100)
		printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :-%.2f\
		\nEnergy Charge :- %.2f\nFixed Charge :- 000.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",strupr(name),id,e,225+((e-100)*280)/100,225+((e-100)*280)/100);
		else
		printf("wrong entry , plese try again.... thank you.");
		}	
    	break;	
		default :
		printf(" wrong entry , plese try again.... thank you.");
		break;
		}	
     	}
     	break;
     	case 2 :
     	{
     		printf("Category of consumer\n\
		 press 1 for :- Single phase Up to 7 kW\n\
		 press 2 for :- Three Phase 5 kW and aboveW\n\
		 Enter your type :- ");	
     	scanf("%d",&d);
     		for (i=0;i<=167; i++)
			printf("_");
		 switch (d)
		 {
     		case 1 :
		{
		printf("Fixed Charge (Rs.) :- Rs.55/month.  \n\
		Energy charges :- \n\nConsumption in a month (Units) \t\t\t Rate (Ps/unit)\n\
			\n\t\t1-100 units\t\t\t\t300\n\t\t101-200 units\t\t\t\t365\n\t\t201-300 units\t\t\t\t435\n\t\tAbove 300 units\t\t\t\t545\n\
			\nenter energy used (in units) :- ");
			scanf("%f",&e);
			for (i=0;i<=167; i++)
			printf("*");
			if(e>0&&e<=100)
			printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :-%.2f\
		\nEnergy Charge :- %.2f\nFixed Charge :- 55.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",strupr(name),id,e,(e*300)/100,55+((e*300)/100));
			else if(e>100&&e<=200)
			printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :-%.2f\
		\nEnergy Charge :- %.2f\nFixed Charge :- 55.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",strupr(name),id,e,300+(((e-100)*365)/100),355+(((e-100)*365)/100));
			else if(e>200&&e<300)
			printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :-%.2f\
		\nEnergy Charge :- %.2f\nFixed Charge :- 55.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",strupr(name),id,e,665+(((e-200)*435)/100),720+(((e-200)*435)/100));
			else if(e>300)
			printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :-%.2f\
		\nEnergy Charge :- %.2f\nFixed Charge :- 55.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",strupr(name),id,e,1100+(((e-300)*545)/100),1155+(((e-300)*545)/100));
			else 
			printf("wrong entry , plese try again.... thank you.");	
		}	
    	break;
			case 2 :
		{
		printf("Fixed Charge (Rs.) :- Rs.250/month  \n\
		Energy charges :- \nConsumption in a month (Units) \t\t\t Rate (Ps/unit)\n\
		\n\t\t1-100 units\t\t\t\t300\n\t\t101-200 units\t\t\t\t365\n\t\t201-300 units\t\t\t\t435\n\t\tAbove 300 units\t\t\t\t545\n\
			\nenter energy used (in units) :- ");
			scanf("%f",&e);
			for (i=0;i<=167; i++)
			printf("*");
			if(e>0&&e<=100)	
				printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :-%.2f\
		\nEnergy Charge :- %.2f\nFixed Charge :- 250.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",strupr(name),id,e,(e*300)/100,250+((e*300)/100));
			else if(e>100&&e<=200)
			printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :-%.2f\
		\nEnergy Charge :- %.2f\nFixed Charge :- 250.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",strupr(name),id,e,300+(((e-100)*365)/100),550+(((e-100)*365)/100));
			else if(e>200&&e<300)
			printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :-%.2f\
		\nEnergy Charge :- %.2f\nFixed Charge :- 250.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",strupr(name),id,e,665+(((e-200)*435)/100),915+(((e-200)*435)/100));
			else if(e>300)
			printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :-%.2f\
		\nEnergy Charge :- %.2f\nFixed Charge :- 250.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",strupr(name),id,e,1100+(((e-300)*545)/100),1350+(((e-300)*545)/100));
			else 
			printf("wrong entry , plese try again.... thank you.");	
		}	
    	break;	
		default :
		printf(" wrong entry , plese try again.... thank you.");
		break;	
     }
     	}
		break;
    	case 3 :
		{
		printf("Connected load of 30 kW and above\n\
		Fixed charge (Rs.) :- 55 per kW \n\
		Energy charges :- \nConsumption in a month (Units) \t\t\t Rate (Ps/unit)\n\
		\n\t\tall units\t\t\t\t435\n\
		\nenter energy used (in units) :-");	
			scanf("%f",&e);
			for (i=0;i<=167; i++)
			printf("*");
			if (e>=0)
			printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :-%.2f\
		\nEnergy Charge :- %.2f\nFixed Charge :- 55.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",strupr(name),id,e,((e*435)/100),55+((e*435)/100));
			if (e<0)
				printf(" wrong entry , plese try again.... thank you.");
		}	
    	break;	
		default :
		printf(" wrong entry , plese try again.... thank you.");
		break;
		}
     	}
     	break;
     	
     										// by:- Rahul kumar 			section:- K17HZ 			Roll no.:- A-15	
     	
     	case 2 :
		{
		fp3=fopen("3.txt","r");
	while(!feof(fp3))
	printf("%c",getc(fp3));
scanf("%d",&b);
switch (b)
    	{
     	case 1 :
     	{
		 printf("Category of consumer\n\
		 press 1 for :- Unmetered \n\
		 press 2 for :- metered \n\
		 Enter your type :- ");	
     	scanf("%d",&d);
     	for (i=0;i<=167; i++)
			printf("_");
		 switch (d)
		 {
     		case 1 :
     	{
		 	printf("Fixed Charge (Rs.) :- 230/connection /per month\n\
		 Energy Charges :-\n\tConsumption in a month (Units) :- XXX\t\t\tRate P/unit :- XXX \n ");
	printf("\nenter energy used (in unit) :- ");
	scanf("%f",&e);
		 for (i=0;i<=167; i++)
	printf("*");
	printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :- %.2f\nRate P/unit :- XXX \
	\nenergy charge :- 000.00\nfixed charge :- 000.00\n\n Total charge :- Rs. 230.00 /- only\n\n\t\t\t\tThank You.\n",name,id,e);
     	}
		break;
     	case 2 :
		{
		printf("\nFixed Charge (Rs.) :- XXX	\n\nEnergy Charges :-\n\tConsumption in a month (Units) \t\t\t Rate (P/unit)\n\n\
		1-100 units \t\t\t\t 240 P/unit \n\
		101-200 units \t\t\t\t 280 P/unit\n\
		Above 200 units\t\t\t\t 320 P/unit \n\
		\nenter energy used (in unit) :- ");
		scanf("%f",&e);
			 for (i=0;i<=167; i++)
			printf("*");
		if(e>=0&&e<=100)
		printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :-%.2f\
		\nEnergy Charge :- %.2f\nFixed Charge :- 000.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",strupr(name),id,e,(240*e)/100,(240*e)/100);	
		else if(e>100&&e<=200)
		printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :-%.2f\
		\nEnergy Charge :- %.2f\nFixed Charge :- 000.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",strupr(name),id,e,240+((280*(e-100))/100),240+((280*(e-100))/100));
		else if(e>200)
		printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :-%.2f\
		\nEnergy Charge :- %.2f\nFixed Charge :- 000.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",strupr(name),id,e,520+((e-200)*320)/100,520+((e-200)*320)/100);
		else
		printf("wrong entry , plese try again.... thank you.");
		}	
    	break;	
		default :
		printf(" wrong entry , plese try again.... thank you.");
		break; 	
     	}
     }
     	break;
     	case 2 :
     	{
     		printf("Category of consumer\n\
		 press 1 for :- Load up to 0.5 kW\n\
		 press 2 for :-  Load above 0.5 kW and Up to 7 kW\n\
		 Enter your type :- ");	
     	scanf("%d",&d);
     	for (i=0;i<=167; i++)
			printf("_");
		 switch (d)
		 {
     		case 1 :
		{
		printf("Fixed Charge (Rs.) :- Rs.100/month.  \n\
		Energy charges :- \n\nConsumption in a month (Units) \t\t\t Rate (Ps/unit)\n\
			\n\t\t1-100 units\t\t\t\t515\n\t\t101-200 units\t\t\t\t545\n\t\tAbove 200 units\t\t\t\t585\n\
			\nenter energy used (in units) :- ");
			scanf("%f",&e);
				for (i=0;i<=167; i++)
			printf("*");
			if(e>0&&e<=100)
			printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :-%.2f\
		\nEnergy Charge :- %.2f\nFixed Charge :- 100.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",strupr(name),id,e,(e*515)/100,100+((e*515)/100));
			else if(e>100&&e<=200)
			printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :-%.2f\
		\nEnergy Charge :- %.2f\nFixed Charge :- 100.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",strupr(name),id,e,515+(((e-100)*545)/100),615+(((e-100)*545)/100));
			else if(e>200)
			printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :-%.2f\
		\nEnergy Charge :- %.2f\nFixed Charge :- 100.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",strupr(name),id,e,1060+(((e-200)*585)/100),1160+(((e-200)*585)/100));
			else 
			printf("wrong entry , plese try again.... thank you.");	
		}	
    	break;
			case 2 :
		{
		printf("Fixed Charge (Rs.) :- Rs.180/month  \n\
			Energy charges :- \n\nConsumption in a month (Units) \t\t\t Rate (Ps/unit)\n\
			\n\t\t1-100 units\t\t\t\t515\n\t\t101-200 units\t\t\t\t545\n\t\tAbove 200 units\t\t\t\t585\n\
			\nenter energy used (in units) :- ");
			scanf("%f",&e);
				for (i=0;i<=167; i++)
			printf("*");
			if(e>0&&e<=100)
			printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :-%.2f\
		\nEnergy Charge :- %.2f\nFixed Charge :- 180.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",strupr(name),id,e,(e*515)/100,180+((e*515)/100));
			else if(e>100&&e<=200)
			printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :-%.2f\
		\nEnergy Charge :- %.2f\nFixed Charge :- 180.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",strupr(name),id,e,515+(((e-100)*545)/100),695+(((e-100)*545)/100));
			else if(e>200)
			printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :-%.2f\
		\nEnergy Charge :- %.2f\nFixed Charge :- 180.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only\n",strupr(name),id,e,1160+(((e-200)*585)/100),1240+(((e-200)*585)/100));
			else 
			printf("\\nwrong entry , plese try again.... thank you.");	
		}	
    	break;	
		default :
		printf("\n wrong entry , plese try again.... thank you.");
		break;		
     }
     	}	
    	break;	
		default :
		printf(" wrong entry , plese try again.... thank you.");
		break;
	}
		}
		break;
		default :
		printf("error...... wrong key pressed");
		break;
	}
	getch();
} 
 													//by:- Rahul kumar 			section:- K17HZ 			Roll no.:- A-15

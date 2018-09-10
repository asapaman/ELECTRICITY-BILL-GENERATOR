#include<stdio.h>
#include<conio.h>

int main()
{
	char name[30];
	int a;
	float e;
	long int id,i,b,c,d;
	printf("Please Enter Your Name :- ");
	gets(name);
	printf("Enter Your Consumer id :- ");
	scanf("%ld",&id);
	for (i=0;i<=167; i++)
	printf("_");
	
	
printf("\nDOMESTIC CONSUMERS (DC) :- \n\n\t This tariff is applicable for supply of electricity for domestic purposes such as lights\n\
fans, televisions, heaters, air-conditioners, washing machines, air-coolers, geysers,\n\
refrigerators, ovens, mixers and other domestic appliances including motor pumps \n\
for lifting water for domestic purposes. This is also applicable to the common\n\
facilities in the multistoried, purely residential apartments, buildings.");

printf("\n\nNON-DOMESTIC CONSUMERS (NDC) :- \n\n\t This is applicable for supply of electrical energy for non-domestic consumers having\n\
sanctioned/contracted load up to 70 kW, using electrical energy for light, fan and\n\
power loads for non-domestic purposes like shops, hospitals, nursing homes, \n\
clinics, dispensaries, restaurants, hotels, clubs, guest houses, marriage houses,\n\
public halls, show rooms, centrally air-conditioning units, offices, commercial\n\
establishments, cinemas, X-ray plants, non-government schools, colleges, libraries,  Government and semi–government offices etc\n\
		 \n\n\tPress 1 if you are DOMESTIC CONSUMERS\n\
     	press 2 if you are  NON-DOMESTIC CONSUMERS (NDC)");
     	printf("\n\nenter your choice :- ");
     	scanf("%d",&a);
     	for (i=0;i<=167; i++)
	printf("_");
     	switch (a)
     {	
     	case 1 :
     	{
     		printf("\n\t\t\tyou have selected DOMESTIC CONSUMERS (DC) \n\n");
	printf("Categories of DOMESTIC CONSUMERS (DC)\n\
\n1 .Domestic CONSUMERS - I (DC - I) :- \n\
\nThis is applicable to domestic premises in notified rural areas for a load up to 2 kW\
not covered by areas indicated under DC-II & not being fed from urban/town feeders.\n\
\n2 .DOMESTIC CONSUMERS - II (DC - II) :- \n\
\nThis is applicable for domestic premises in urban areas covered by Notified are\n\
a committee/Municipality/Municipal Corporation/Development Authority/All\
District and Sub-divisional towns/Block Head Quarters/Industrial areas/Contiguous\n\
Sub urban areas and also areas getting power from Urban/Town feeders for single\
phase supply for load up to 7 kW and three phase supply for load of 5 kW and\n\
above. Rural consumers having sanctioned load above 2 kW will also come under this category.\n\
\n3 .DOMESTIC CONSUMERS - III (DC - III) :- \n\
\nThis is applicable for registered societies for their residential colonies having not\n\
less than 15 houses/flats in the colony, Residential colonies/multistoried residentia\
complexes taking load in bulk at a single point with a minimum load of 2 kW per\n\
flat/house and maximum total load up to 70 kW.\n\
\n\n\npress 1 for DOMESTIC CONSUMERS - I (DC - I)\n\
press 2 for DOMESTIC CONSUMERS - II (DC - II)\n\
press 3 for DOMESTIC CONSUMERS - III (DC - III)\n\
\nEnter your choice :- ");
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
	\nenergy charge :- 000.00\nfixed charge :- 000.00\n\n Total charge :- Rs. 170 /- only\n\n\t\t\t\tThank You.\n",name,id,e);	
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
		\nEnergy Charge :- %.2f\nFixed Charge :- 000.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",name,id,e,(210*e)/100,(210*e)/100);	
		else if(e>50&&e<=100)
		printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :-%.2f\
		\nEnergy Charge :- %.2f\nFixed Charge :- 000.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",name,id,e,105+((240*(e-50))/100),105+((240*(e-50))/100));
		else if(e>100)
		printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :-%.2f\
		\nEnergy Charge :- %.2f\nFixed Charge :- 000.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",name,id,e,225+((e-100)*280)/100,225+((e-100)*280)/100);
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
		\nEnergy Charge :- %.2f\nFixed Charge :- 55.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",name,id,e,(e*300)/100,55+((e*300)/100));
			else if(e>100&&e<=200)
			printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :-%.2f\
		\nEnergy Charge :- %.2f\nFixed Charge :- 55.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",name,id,e,300+(((e-100)*365)/100),355+(((e-100)*365)/100));
			else if(e>200&&e<300)
			printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :-%.2f\
		\nEnergy Charge :- %.2f\nFixed Charge :- 55.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",name,id,e,665+(((e-200)*435)/100),720+(((e-200)*435)/100));
			else if(e>300)
			printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :-%.2f\
		\nEnergy Charge :- %.2f\nFixed Charge :- 55.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",name,id,e,1100+(((e-300)*545)/100),1155+(((e-300)*545)/100));
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
		\nEnergy Charge :- %.2f\nFixed Charge :- 250.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",name,id,e,(e*300)/100,250+((e*300)/100));
			else if(e>100&&e<=200)
			printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :-%.2f\
		\nEnergy Charge :- %.2f\nFixed Charge :- 250.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",name,id,e,300+(((e-100)*365)/100),550+(((e-100)*365)/100));
			else if(e>200&&e<300)
			printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :-%.2f\
		\nEnergy Charge :- %.2f\nFixed Charge :- 250.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",name,id,e,665+(((e-200)*435)/100),915+(((e-200)*435)/100));
			else if(e>300)
			printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :-%.2f\
		\nEnergy Charge :- %.2f\nFixed Charge :- 250.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",name,id,e,1100+(((e-300)*545)/100),1350+(((e-300)*545)/100));
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
		\nEnergy Charge :- %.2f\nFixed Charge :- 55.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",name,id,e,((e*435)/100),55+((e*435)/100));
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
     	case 2 :
		{
			printf("\t\t\tyou have selected NON-DOMESTIC CONSUMERS (DC) \n\n");
	printf("Categories of NON-DOMESTIC CONSUMERS (DC)\n\
\n1 .NON-Domestic CONSUMERS - I (NDC - I) :- \n\
	\nApplicable to loads up to 2 kW in rural areas not covered by areas indicated under\
NDS – II and not being fed from urban/town feeders.\nFuel and Power Purchase Cost Adjustment (FPPCA) charges as applicable will be charged extra.\n\
\n2 .NON-Domestic CONSUMERS - II (NDC - II) :- \n\
	\nApplicable to loads up to 70 kW in urban areas covered by Notified Area\
Committees/Municipalities/Municipal Corporations/Regional Development\n\
Authorities/District and Sub–divisional towns/Block headquarters/Industrial\
areas/contiguous sub urban areas getting power from urban/town feeders.\n\
press 1 for NON-DOMESTIC CONSUMERS - I (NDC - I)\n\
press 2 for NON-DOMESTIC CONSUMERS - II (NDC - II)\n\
\nEnter your choice :- ");
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
		\nEnergy Charge :- %.2f\nFixed Charge :- 000.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",name,id,e,(240*e)/100,(240*e)/100);	
		else if(e>100&&e<=200)
		printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :-%.2f\
		\nEnergy Charge :- %.2f\nFixed Charge :- 000.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",name,id,e,240+((280*(e-100))/100),240+((280*(e-100))/100));
		else if(e>200)
		printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :-%.2f\
		\nEnergy Charge :- %.2f\nFixed Charge :- 000.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",name,id,e,520+((e-200)*320)/100,520+((e-200)*320)/100);
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
		\nEnergy Charge :- %.2f\nFixed Charge :- 100.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",name,id,e,(e*515)/100,100+((e*515)/100));
			else if(e>100&&e<=200)
			printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :-%.2f\
		\nEnergy Charge :- %.2f\nFixed Charge :- 100.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",name,id,e,515+(((e-100)*545)/100),615+(((e-100)*545)/100));
			else if(e>200)
			printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :-%.2f\
		\nEnergy Charge :- %.2f\nFixed Charge :- 100.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",name,id,e,1060+(((e-200)*585)/100),1160+(((e-200)*585)/100));
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
		\nEnergy Charge :- %.2f\nFixed Charge :- 180.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",name,id,e,(e*515)/100,180+((e*515)/100));
			else if(e>100&&e<=200)
			printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :-%.2f\
		\nEnergy Charge :- %.2f\nFixed Charge :- 180.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",name,id,e,515+(((e-100)*545)/100),695+(((e-100)*545)/100));
			else if(e>200)
			printf("\n\t\t\t\t\t\t\t\t\t\t ELECTRICITY BILL \n\nName :- %s\t\t\t\t\tConsumer id :- %d\n\nConsumption in a month (Units) :-%.2f\
		\nEnergy Charge :- %.2f\nFixed Charge :- 180.00\n\t\t\t\tTotal charge :- Rs. %.2f/- only",name,id,e,1160+(((e-200)*585)/100),1240+(((e-200)*585)/100));
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

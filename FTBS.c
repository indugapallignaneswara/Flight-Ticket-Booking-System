
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
  char display();
  int main()
  {
  	
  	FILE *fp;
	  	char username[30];
  	    char source[25];
    	char desti[25]; 
	    char gender[10]; 
	    char email[30]; 
  	    char flight[20]; 
	    char clas[20];
	    char time[5];
  	
	  int ch,ch1,ch2,ch3,ch4,value,i,phno,nofseats,adharno,date,age,n,cost,cost1;
   
	printf("\t\t\t\t\t\t..............WELCOME TO FLIGHT TICKET BOOKING CENTRE..............\n\n\n\n\n\n");
  MENU:
		{
  
  	printf("\t\nSELECT A DESIRED SERVICE-\n");
  	printf("1.RESERVATION OF SEATS\n");
  	printf("2.CANCELLATION OF SEATS/RE-SCHEDULING OF SEATS\n");
  	printf("3.BOOKING DETAILS\n");
  	printf("4.RECORDS\n");
  	printf("5.EXIT\n");
  	printf("\t\nENTER YOUR CHOICE-");
  	scanf("%d",&ch1);
  }
  	switch (ch1)
	  {
	  	case 1:system("cls");
	  	
	  	PLACES:
	  		    {
				  
		        printf("\t\nFLIGHTS ARE AVAILABLE BETWEEN THE FOLLOWING PLACES\n\n");
		        printf("\tVIZAG\n \tCHENNAI\n \tHYDERBAD\n \tMUMBAI\n  \tSRINAGAR\n \tKOLKATA\n \tBHUBANESWAR\n \tDELHI\n \tBANGLORE\n \tVIJAYAWADA\n \tKOCHI\n \tTHIRUVANANTHAPURAM\n \tCOIMBATORE\n \tVARANASI\n \tMANGALORE\n "); 
		        printf("\t\nENTER YOUR STARTING POINT-");
	  	        scanf("%s",source);
	            printf("\t\nENTER YOUR DESTINATION POINT-");
				scanf("%s",desti); 
				value=strcmp(source,desti);
				if(value==0)
				{
				printf("\t\n\nERROR IN STARTING/DESINATION POINT, PLEASE RE-ENTER YOUR DETAILS-\n");
				printf("\t\nENTER YOUR STARTING POINT-");
				scanf("%s",source);
				printf("\t\nENTER YOUR DESTINATION POINT-");
				scanf("%s",desti);
			}
		}
			CLASS:
					{
					
				printf("\t\n\n\nSELECT A DESIRED CLASS-\n");
				printf("\t\n1.ECONOMY CLASS\t (COST OF EACH SEAT IN THIS CLASS IS IN A RANGE OF Rs.2000 TO Rs.9000)\n");
				printf("\t\n2.PREMIUM ECONOMY CLASS \t(COST OF EACH SEAT IN THIS CLASS IS IN A RANGE OF Rs.5,000 TO 10,000)\n");
				printf("\t\n3.BUSINESS CLASS\t (COST OF EACH SEAT IN THIS CLASS IS IN A RANGE OF Rs.30,000 TO 40,000)\n");
				printf("\t\nPLEASE ENTER THE NAME OF THE CLASS YOU WANT-");
				scanf("%s",clas);
				printf("\t\nPLEASE ENTER THE CHOICE OF CLASS YOU SELECTED-");
				scanf("%d",&ch3);
		
	           	}
			
			FLIGHTS:
				{
				
				printf("\t\n\n\nAVAILABLE FLIGHTS\n");
				printf("\n\t1.INDIGO AIRLINES\n \t2.AIR INDIA AIRLINES\n\t3.SPICEJET AIRLINES\n\t4. GO AIR AIRLINES\n\t5.VISTARA AIRLINES\n\t6.TRUJET AIRLINES\n");
				printf("\t\n PLEASE ENTER THE NAME OF YOUR DESIRED AIRLINES-");
				scanf("%s",flight);
				printf("\t\n PLEASE ENTER THE CHOICE OF FLIGHT YOU SELECTED -");
				scanf("%d",&ch2);
			  	}
			switch (ch2)
			{
				case 1:
				
                   	printf("\t\n\nSELECT A DESIRED TIMING FROM THE GIVEN TIMINGS\n");
					printf("\n\t8 AM \n \t10 AM  \n  \t1 PM\n  \t4 PM\n");
				    printf("\t\nENTER YOUR DESIRED TIMING-");
			        scanf("%s",time);
	             	printf("\t\nENTER DATE MONTH YEAR-");
					scanf("%d",&date);
					
					if(ch3==1)
					{
					printf("\t\nCOST OF A SEAT IN ECONOMY CLASS IS:Rs.3000");
					cost=3000;
						}
					else if(ch3==2)
					{
					printf("\t\nCOST OF A SEAT IN PREMIUM ECONOMY CLASS IS:Rs.7000");
				    cost=7000;
						}
					else if(ch3==3)
					{
					printf("\n\tCOST OF A SEAT IN BUSINESS CLASS IS:Rs.30,000");
					cost=30000;
					}
					else
						{
					printf("\t\n YOU HAVE ENTERED A WRONG CHOICE\n");
					printf("\t\n PLEASE CHOOSE FROM 1-3\n");
					goto CLASS;
				     } 
		
			   	break;
				case 2:
					
						
						printf("\t\n\n\nSELECT A DESIRED TIMING FROM THE GIVEN TIMINGS\n");	
				        printf("\n\t1.7 AM \n  \t2.9 AM \n  \t3.11 AM  \n  \t4.3 PM\n");
				        printf("\t\nENTER YOUR DESIRED TIMING-");
				        scanf("%s",time);
			            printf("\t\nENTER DATE MONTH YEAR-");
			            scanf("%d",&date);
			            	
				  if(ch3==1)
				    	{
					printf("\t\nCOST OF A SEAT IN ECONOMY CLASS IS:Rs.4000");
					cost=4000;
				      }
					else if(ch3==2)
					{
					printf("\t\nCOST OF A SEAT IN PREMIUM ECONOMY CLASS IS:Rs.9000");
					cost=9000;
				    }
					else if(ch3==3)
					{
					printf("\n\tCOST OF A SEAT IN BUSINESS CLASS IS:Rs.32,000");
					cost=32000;
			      	}
					else 
					{
				    printf("\t\n YOU HAVE ENTERED A WRONG CHOICE\n");
					printf("\t\n PLEASE CHOOSE FROM 1-3\n");
					goto CLASS;
				    }
				
			break;
			case 3:
					
						printf("\t\n\n\nSELECT A DESIRED TIMING FROM THE GIVEN TIMINGS\n");		
				        printf("\n\t10 AM \n  \t12 PM \n  \t2 PM\n \t5 PM \n \t8 PM\n");
				        printf("\t\nENTER YOUR DESIRED TIMING-");
			            scanf("%s",time);
			            printf("\t\nENTER DATE MONTH YEAR-");
					    scanf("%d",&date);
					   	
				       	if(ch3==1)
					{
					printf("\t\nCOST OF A SEAT IN ECONOMY CLASS IS:Rs.5000");
					cost=5000;
			     	}
					else if(ch3==2)
					{
					printf("\t\nCOST OF A SEAT IN PREMIUM ECONOMY CLASS IS:Rs.6000");
					cost=6000;
				   }
					else if(ch3==3)
					{
					printf("\n\tCOST OF A SEAT IN BUSINESS CLASS IS:Rs.34,000");
					cost=34000;
			    	}
					else 
					{
					printf("\t\n YOU HAVE ENTERED A WRONG CHOICE\n");
					printf("\t\n PLEASE CHOOSE FROM 1-3\n");
					goto CLASS;
			    	}
					
				      break;
			case 4:
	
						printf("\t\n\n\nSELECT A DESIRED TIMING FROM THE GIVEN TIMINGS\n");
				        printf("\n\t10 AM\n \t12 PM\n \t4 PM\n \t7 PM\n");
				        printf("\t\nENTER YOUR DESIRED TIMING-");
				        scanf("%s",time);
			            printf("\t\nENTER DATE MONTH YEAR-");
					    scanf("%d",&date);
					    
					   if(ch3==1)
					{
					printf("\t\nCOST OF A SEAT IN ECONOMY CLASS IS:Rs.5000");
					cost=5000;
					}
					else if(ch3==2)
					{
					printf("\t\nCOST OF A SEAT IN PREMIUM ECONOMY CLASS IS:Rs.6000");
					cost=6000;
			    	}
					else if(ch3==3)
					{
					printf("\n\tCOST OF A SEAT IN BUSINESS CLASS IS:Rs.34,000");
					cost=34000;
			     	}
					else 
					{
					printf("\t\n YOU HAVE ENTERED A WRONG CHOICE\n");
					printf("\t\n PLEASE CHOOSE FROM 1-3\n");
					goto CLASS;
			     	}
				       
				      break;
			case 5:	
	
						printf("\t\n\n\nSELECT A DESIRED TIMING FROM THE GIVEN TIMINGS\n");
				        printf("\n\t7 AM\n \t9 AM\n \t1 PM\n \t5 PM\n");
				        printf("\t\nENTER YOUR DESIRED TIMING-");
			            scanf("%s",time);
			            printf("\t\nENTER DATE MONTH YEAR-");
					    scanf("%d",&date);
					
				       	if(ch3==1)
					{
					printf("\t\nCOST OF A SEAT IN ECONOMY CLASS IS:Rs.2500");
					cost=2500;
			     	}
					else if(ch3==2)
					{
					printf("\t\nCOST OF A SEAT IN PREMIUM ECONOMY CLASS IS:Rs.9000");
					cost=9000;
			     	}
					else if(ch3==3)
					{
					printf("\n\tCOST OF A SEAT IN BUSINESS CLASS IS:Rs.35,000");
					cost=35000;
			     	}
					else 
					{
					printf("\t\n YOU HAVE ENTERED A WRONG CHOICE\n");
					printf("\t\n PLEASE CHOOSE FROM 1-3\n");
					goto CLASS;
			      	}
				      break;
			case 6:
	                 	printf("\t\n\n\nSELECT A DESIRED TIMING FROM THE GIVEN TIMINGS\n");
					    printf("\n\t8 AM \n \t10 PM \n \t2 PM\n \t6 PM \n");
				        printf("\t\nENTER YOUR DESIRED TIMING-");
			            scanf("%s",time);
			            printf("\t\nENTER DATE MONTH YEAR-");
					    scanf("%d",&date);
				       	if(ch3==1)
				        	{
						printf("\t\nCOST OF A SEAT IN ECONOMY CLASS IS:Rs.3000");
					   cost=3000;
			        	 }
					else if(ch3==2)
				     	{
				     	printf("\t\nCOST OF A SEAT IN PREMIUM ECONOMY CLASS IS:Rs.6500");
						cost=6500;
			         	}
					else if(ch3==3)
				     	{
				        printf("\n\tCOST OF A SEAT IN BUSINESS CLASS IS:Rs.33,000");
						cost=33000;
			        	}
					else 
					{
					printf("\t\n YOU HAVE ENTERED A WRONG CHOICE\n");
					printf("\t\n PLEASE CHOOSE FROM 1-3\n");
					goto CLASS;
			      	}
				      break;
				      default:
				      	printf("\t\n\nENTERED INVALID CHOICE \n");
				      	printf("\t\nPLEASE RE-ENTER THE CHOICE FROM 1-6\t\n");
				      	goto FLIGHTS;
				      	break; 
	      }
	            printf("\t\nENTER NUMBER OF SEATS REQUIRED-");
				scanf("%d",&nofseats);
	        
      fp=fopen("Passengers.details.txt","w");
	 n=1;
		for(i=1;i<=nofseats;i++)
				{
				    printf("\t\nPLEASE ENTER THE FOLLOWING DETAILS OF THE PASSENGER:\n");
					printf("\t\nENTER YOUR NAME-");
					scanf("%s",&username);
			     	printf("\t\nENTER YOUR EMAIL ADDRESS-");
					scanf("%s",&email);
					printf("\t\nENTER YOUR AADHAR CARD NUMBER-");
					scanf("%d",&adharno);
					printf("\t\nENTER YOUR  AGE- ");
					scanf("%d",&age);
					if(age<=5)
					{
						printf("\t\nYOUR ENTERED AGE IS NOT ELIGIBLE FOR THE FLIGHT SERVICE\n");
						printf("\t\nPLEASE RE-ENTER THE AGE CORRECTLY IF YOU HAVE ENTERED WRONGLY-");
						scanf("%d",&age);
					}
					printf("\t\nENTER YOUR GENDER- ");
					scanf("%s",gender);
					printf("\t\nENTER YOUR PHONE NUMBER-");
					scanf("%d",&phno);
					printf("\t\n YOUR SEAT NUMBER IS:A-%d\n\n",n);
		  QUOTA:
					{
					
				printf("\t\n\nDO YOU BELONG TO ANY OF THE FOLLOWING CATEGORY-\n");
				printf("\t1.SENIOR CITIZEN (IF YOUR AGE IS ABOVE 60)\n");
				printf("\t2.STUDENT \n");
				printf("\t3.ANY OF THE ARMED FORCES\n");
				printf("\t4.DOESNOT BELONG TO ANY CATEGORY\n");
				printf("\t\n\nPLEASE ENTER YOUR CATEGORY IF YOU BELONG TO ANY OF THEM-\n");
				scanf("%d",&ch4);
			
				if (ch4==1)
				{
				if(age>=60)
				   {
				printf("30 percent discount is provided");
				cost1=cost-(.3*cost);
				printf("\t\n COST OF YOUR TICKETS AFTER  DISCOUNT IS-%d",cost1);
		        	}
				else
			    	printf("\tYOUR AGE IS NOT ELIGIBLE FOR THIS CATEGORY\n");
	              }
			    else if(ch4==2)
			        {
			        	if(age>=5 && age<=24)
			        	{
						printf("20 precent is provided");
				    	cost1=cost-(.2*cost);
					    printf("\t\n COST OF YOUR TICKETS AFTER  DISCOUNT IS-%d",cost1);
					}
					else 
					printf("\t\n YOUR AGE IS NOT ELIGIBLE FOR THIS CATEGORY\n");
			     	}
				else if(ch4==3)
			      	{
					    printf("40 precent is provided");
			           cost1=cost-(.4*cost);
				    printf("\t\n COST OF YOUR TICKETS AFTER  DISCOUNT IS-%d",cost1);
			     	}
				else if (ch4==4)
			     	{
					printf("\t\n TOTAL COST OF YOUR TICKETS-%d",cost);
				    }
			}
				printf("\t\n\n *YOUR TICKET RESERVATION IS SUCESSFULL*\n\n\t");
			    goto MENU;
				if(fp!=NULL)
				       {
					 	
					fprintf(fp,"\n\t USERNAME-%s",username);
					fprintf(fp,"\n\t EMAIL_ADDRESS-%s",email);
					fprintf(fp,"\n\t AADHAR_NUMBER-%d",adharno);
					fprintf(fp,"\n\t AGE-%d",age);
					fprintf(fp,"\n\t GENDER-%s",gender);
					fprintf(fp,"\n\t PHONE_NUMBER-%d",phno);
					fprintf(fp,"\n\t SEAT_NUMBER:A-%d",n);
					fprintf(fp,"\n\t TICKET AMOUNT-%d\n",cost);
					n++;
					
			     	}
				else
				printf("\t\nERROR IN OPENING THE FILE\n");
		}
			   n=1;	
				
				if(fp!=NULL)
				{
				
				    fprintf(fp,"\n\n\t TIMING-%s",time);
			        fprintf(fp,"\n\t DATE-%d",date);
			        fprintf(fp,"\n\t SOURCE_POINT-%s",source);
			        fprintf(fp,"\n\t DESTINATION_POINT-%s ",desti);
			        fprintf(fp,"\n\t FLIGHT_NAME-%s ",flight);
			        fprintf(fp,"\n\t NO.OF_SEATS-%d",nofseats);
		
			    }
			    else
			    printf("\t\nERROR IN OPENING THE FILE\n");
	            fclose(fp);
				break;
		case 2:
			CANCEL_CASE:
				{
				printf("\tCHOOSE A CATEGORY\n");
				printf("\t1.RE-SCHEDULING OF SEATS\n");
				printf("\t2.CANCELLATION OF SEATS\n");
				scanf("%d",&ch);
		     	}
				switch (ch)
				{
		case 1: 
		            printf("\t\nPLEASE ENTER THE NO.OF SEATS BOOKED-");
		            	scanf("%d",&nofseats);
		            printf("PLEASE ENTER THE NAME OF AIRLINES YOU HAVE TAKEN-");
		            	scanf("%s",flight);
		            	for(i=1;i<=nofseats;i++)
		            	{
					printf("\t\nPLEASE ENTER YOUR SEAT NO:A-");
					scanf("%d",&n);
					printf("ENTER YOUR DESIRED DATE FOR RE-SHCEDULING-");
					scanf("%d",&date);
				       }
					printf("\t\n\n**YOUR RE-SCHEDULING IS SUCCESSFULL**\n\n\t");
				      	break;
        case 2:	
				   printf("\t\nPLEASE ENTER THE NO.OF SEATS BOOKED-");
				   scanf("%d",&nofseats);
				   printf("\tPLEASE ENTER THE NAME OF AIRLINES YOU HAVE TAKEN-");
				   scanf("%s",flight);
				   for(i=1;i<=nofseats;i++)
				       {
				   printf("\t\nPLEASE ENTER YOUR SEAT NO:A-");
					scanf("%d",&n);
			        	}
					printf("\t\n\n**YOUR CANCELLATION IS SUCCESSFULL**\n\n\t");
					break;
		default:
					printf("\t\nYOU HAVE ENTERED A INVALID CHOICE\n");
					printf("\t PLEASE ENTER YOUR CHOICE FROM 1-2\n");
					goto CANCEL_CASE;
					break;
				}
             break;
             goto MENU;
	case 3: 
	       
	         printf("\t\nPLEASE ENTER YOUR NAME-");
	        scanf("%s",username);
	        fp=fopen("Passengers.details.txt","r");
	        if(fp!=NULL)
	        {
	        while(fscanf(fp,"%s%d%d%s%s%s%s%d%d",username,&adharno,&phno,source,desti,flight,time,&date,&nofseats) != EOF)
		     	{
				
				printf("\t%s\n",username);
				printf("\t%d\n",adharno);
				printf("\t%d\n",phno);
				printf("\t%s\n",source);
				printf("\t%s\n",desti);
				printf("\t%s\n",flight);
				printf("\t%s\n",time);
				printf("\t%d\n",date);
				printf("\t%d\n",nofseats);
				}	
			}
			else 
			printf("\t\nERROR IN OPENING THE FILE\n");
			fclose(fp);
	        break;
	        goto MENU;
	    
	case 4:
	       display();
	      break;
	case 5:
	break;
	default:
	printf("\t YOU HAVE ENTERED A INVALID CHOICE\n");
	printf("\t PLEASE ENTER THE CHOICE FROM 1-5\n");
	goto MENU; 
	break;       
	   }
	   return 0;
}
	   char display()
	   {
	   	FILE *fp;
	   	fp=fopen("Passengers.details.txt","r");
	   	if(fp!= NULL)
	   	{
	   		char c;
	   		while ((c=fgetc(fp)) != EOF)
	   		putchar(c);
	   		fclose(fp);
	      }
	else 
	printf("\tERROR IN OPENING THE FILE\n");
	   }

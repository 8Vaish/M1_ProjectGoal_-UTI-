#include<stdio.h>
 #include "test.h"
 int que(){

 
 for(i=1; i<=10; i++)
    {
        n=0;
        switch(i)
        {
        case 1:
            printf("Who is called as Father of C Programming Language ?\n1.Ken Thompson 2.Bill Gates 3.Dennis Ritchie 4.Steve Jobs\n");
            scanf("%d",&n);
            if(n==3)
            {
                printf("You have entered the correct answer\nNow you have won Rs.%d000 \nYour Next Question is\n",i);
                Marks++;
            }
            else
            {
                printf(" You have entered the wrong answer\nBetter Luck Next Time\nYou have earned Rs.%d000\n",i-1);
                i=11;
            }

        case 2:
            printf("'Bloody Sunday’ is a commemorative event marked by which country?\n1.USA 2.Ireland 3.Germany 4.Italy\n");
            scanf("%d",&n);
            if(n==2)
            {
                printf("You have entered the correct answer\nNow you have won Rs.%d000\n Your Next Question is\n",i);
                Marks++;
            }
            else
            {
                printf(" You have entered the wrong answer\nBetter Luck Next Time\nYou have earned Rs.%d000\n",i-1);
                i=11;
            }

        case 3:
            printf("The Lunar New Year 2022 marks the start of Year of which animal?\n1.Year of Ox 2.Year of Tiger 3.Year of Pig 4.Year of Lion\n");
            scanf("%d",&n);
            if(n==2)
            {
                printf("You have entered the correct answer\nNow you have won Rs.%d000\n Your Next Question is\n",i);
                Marks++;
            }
            else
            {
                printf(" You have entered the wrong answer\nBetter Luck Next Time\nYou have earned Rs.%d000\n",i-1);
                i=11;
            }

        case 4:
            printf(".Which Indian state has witnessed cases of Covidengue, a combination of both COVID-19 and Dengue?\n1.Kerala 2.Telangana 3.Madhya Pradesh 4.Gujarat\n");
            scanf("%d",&n);
            if(n==2)
            {
                printf("You have entered the correct answer\nNow you have won Rs.%d000 \nYour Next Question is \n",i);
                Marks++;
            }
            else
            {
                printf(" You have entered the wrong answer\nBetter Luck Next Time\nYou have earned Rs.%d000\n",i-1);
                i=11;
            }

        case 5:
            printf("Which Indian state has topped the Public Affairs Index (PAI 2021)?\n1.Tamil Nadu 2.Kerala 3.Telangana 4.Gujarat\n");
            scanf("%d",&n);
            if(n==2)
            {
                printf("You have entered the correct answer\nNow you have wonRs.%d000 \nYour Next Question is\n",i);
                Marks++;
            }
            else
            {
                printf("You have entered the wrong answer\nBetter Luck Next Time\nYou have earned Rs.%d000\n",i-1);
                i=11;
            }

        case 6:
            printf("ISRO in association with which institution has developed a device to cultivate microorganisms in space?\n1.IIT- Madras 2.IIT- Bombay 3.IISc 4.DRDO\n");
            scanf("%d",&n);
            if(n==3)
            {
                printf("You have entered the correct answer\nNow you have wonRs.%d000 \nYour Next Question is\n",i);
                Marks++;
            }
            else
            {
                printf("You have entered the wrong answer\nBetter Luck Next Time\nYou have earned Rs.%d000\n",i-1);
                i=11;
            }

        case 7:
            printf("In which month, “World Breastfeeding Week” is observed every year?\n1.June 2.August 3.July 4.October\n");
            scanf("%d",&n);
            if(n==2)
            {
                printf("You have entered the correct answer\nNow you have wonRs.%d000 \nYour Next Question is\n",i);
                Marks++;
            }
            else
            {
                printf("You have entered the wrong answer\nBetter Luck NextTime\nYou have earned Rs.%d000\n",i-1);
                i=11;
            }

        case 8:
            printf("Which country recently unveiled “The Kit 300”?\n1.US 2.UK 3.Israel 4.Russia\n");
            scanf("%d",&n);
            if(n==3)
            {
                printf("You have entered the correct answer\nNow you have wonRs.%d000 \nYour Next Question is\n",i);
                Marks++;
            }
            else
            {
                printf("You have entered the wrong answer\nBetter Luck Next Time\nYou have earned Rs.%d000\n",i-1);
                i=11;
            }

        case 9:
            printf("SEBI modified the requirement to formulate dividend distribution policy by top 500 listed companies to how many companies?\n1.Top 100 2.Top 250 3.Top 1000 4.Top 2000\n");
            scanf("%d",&n);
            if(n==3)
            {
                printf("You have entered the correct answer\nNow you have wonRs.%d000Your \nNext Question is\n",i);
                Marks++;
            }
            else
            {
                printf("You have entered the wrong answer\nBetter Luck Next \nTimeYou have earned Rs.%d000\n",i-1);
                i=11;
            }

        case 10:
            printf("Which Indian legendary singer won the Maharashtra Bhushan award, the state’s highest honour?\n1.S P Bala Subramaniam 2.Asha Bhosle 3.Lata Mangeshkar 4.Mukesh Chand\n");
            scanf("%d",&n);
            if(n==3)
            {
                printf("You have entered the correct answer\nNow you have wonRs.%d000\n*YOU HAVE BECOME THE WINNER OF THIS TEST* \n",i);
                Marks++;
            }
            else
            {
                printf("You have entered the wrong answer\nBetter Luck Next Time\nYou have earned Rs.%d000\n",i-1);
                i=11;
            }
        default:
            printf("Total No of correct Answers you gave are: %d", Marks );
            printf("\nYour Cash Reward is: %d", Marks*cashReward);
            break;
        }
    }
 }
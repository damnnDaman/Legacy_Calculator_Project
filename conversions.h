#include<stdio.h>
#include<stdlib.h>

/* This function displays a menu of conversions available in time. The function prompts the user to enter two choices, the time unit to convert and into.
After the choices have been input by the user, if the two choices entered are the same, the function prompts the user to enter the time and store it into a variable called 
'initialTime'. It then displays the time using the print function. If the entered choices differ then the function takes the time input and compares the second choice to 
the options available in the menu using if statements. when a choice has been found, it performs the respective calculations to convert the initial time from its original measuremeant unit to 
the desired unit.
*/
void time(){

    int convertFrom,convertTo;
    double initialTime,convertedTime;
    int secsInYear = 31557600;                            // using an int to store seconds in a year.

    printf("\n\t\tseconds(1)\t\tminutes(2)\t\thours(3)\t\tdays(4)\n\n\n\t\tweeks(5)\t\tmonths(6)\t\tyears(7)\t\tDecades(8)\n\n\n\t\tcenturies(9)\t\tmilleniums(10)\t\tGenerations(11):");
    printf("\n\n\n\t\tConvert from(number):");
    scanf("%d",&convertFrom);
    printf("\n\n\n\t\tConvert to(number):");
    scanf("%d",&convertTo);
    if(convertFrom==convertTo){
        printf("Enter time:");
        scanf("%lf",&initialTime);
        printf("The resultant value is %f",initialTime);
    }
    else {
        printf("\n\n\n\t\tEnter the time:");
        scanf("%lf",&initialTime);
        // this block of if statement is executed if the initial time is given in seconds. 
        if(convertFrom==1){
             // converting from seconds to minutes.
            if(convertTo==2){                                                                            
                convertedTime=initialTime/60;    
                // special case of the initial time being exactly 1 second.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 second = %f minute",convertedTime);
                }
                // special case of converted time being less than or equal to a minute
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f seconds = %f minute",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f seconds = %f minutes",initialTime,convertedTime);
                }
            }
            // converting from seconds to hours. 
            if(convertTo==3){
                convertedTime=initialTime/3600;
                // special case of initial time being 1 second         .
                if(initialTime==1){
                    printf("\n\n\n\t\t1 second = %f hour",convertedTime);
                }
                // special case of the converted time being 1 hour.
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f seconds = %f hour",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f seconds = %f hours",initialTime,convertedTime);
                }

            }
            // converting from seconds to days.
            if(convertTo==4){
                convertedTime=initialTime/(3600*24);
                if(initialTime==1){
                    printf("\n\n\n\t\t1 second = %f ",convertedTime);
                }
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f seconds = %f day",initialTime,convertedTime);
                }
                else {
                    printf("\n\n\n\t\t%f seconds = %f days",initialTime,convertedTime);
                }
            }
            // converting from seconds to weeks. 
            if(convertTo==5){
                convertedTime=initialTime/(3600*24*7);
                if(initialTime==1){
                    printf("\n\n\n\t\t1 second = %f week",convertedTime);
                }
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f seconds = %f week",initialTime,convertedTime);
                }
                else {
                    printf("\n\n\n\t\t%f seconds = %f weeks",initialTime,convertedTime);
                }
            }
            // converting from seconds to months. 
            if(convertTo==6){
                convertedTime=initialTime/(3600*24*30);
                if(initialTime==1){
                    printf("\n\n\n\t\t1 second = %f month",convertedTime);
                }
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f seconds = %f month",initialTime,convertedTime);
                }
                else {
                    printf("\n\n\n\t\t%f seconds = %f months",initialTime,convertedTime);
                }
            }
            // converting from seconds to years.
            if(convertTo==7){
                convertedTime=initialTime/(3600*24*365.25);
                if(initialTime==1){
                    printf("\n\n\n\t\t1 second = %f year",convertedTime);
                }
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f seconds = %f year ",initialTime,convertedTime);
                }
                else {
                    printf("\n\n\n\t\t%f seconds = %f years",initialTime,convertedTime);
                }
            }
            //converting from seconds to decades.
            if(convertTo==8){
                convertedTime=initialTime/(3600*24*365.25*10);
                 if(initialTime==1){
                    printf("\n\n\n\t\t1 second = %f decade",convertedTime);
                }
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f seconds = %f decade",initialTime,convertedTime);
                }
                else {
                    printf("\n\n\n\t\t%f seconds = %f decades",initialTime,convertedTime);
                }
            }
            //converting from seconds to centuries.
            if(convertTo==9){
                convertedTime=initialTime/(3600*24*365.25*100);
                if(initialTime==1){
                    printf("\n\n\n\t\t1 second = %f century",convertedTime);
                }
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f seconds = %f century",initialTime,convertedTime);
                }
                else {
                    printf("\n\n\n\t\t%f seconds = %f centuries",initialTime,convertedTime);
                }
            }
            //converting from seconds to millenium.
            if(convertTo==10){
                convertedTime=initialTime/(3600*24*365.25*1000);
                if(initialTime==1){
                    printf("\n\n\n\t\t1 second = %f millenium",convertedTime);
                }
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f seconds = %f millenium",initialTime,convertedTime);
                }
                else {
                    printf("\n\n\n\t\t%f seconds = %f milleniums",initialTime,convertedTime);
                }
            }

            //converting from seconds to generations
            if(convertTo==11){
                convertedTime=initialTime/(3600*24*365.25*30);
                 if(initialTime==1){
                    printf("%f second = %f Generation",initialTime,convertedTime);
                }
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("%f seconds = %f Generation",initialTime,convertedTime);
                }
                else {
                    printf("%f seconds = %f Generations",initialTime,convertedTime);
                }
            }

        }
        //this is block is executed if the initial time is given in minutes.
        if (convertFrom==2){
            //converting from minutes to seconds
            if(convertTo==1){
                convertedTime = initialTime*60;
                // special case of the initial time being exactly 1 minute.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 minute = 60 seconds");
                }
                // special case of converted time being less than or equal to a minute.     
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f minute = %f second",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f minutes = %f seconds",initialTime,convertedTime);
                }
                

            }
            //converting from minutes to hours 
            if(convertTo==3){
                convertedTime = initialTime/60;
                // special case of the initial time being exactly 1 minute.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 minute = %f hour",convertedTime);
                }
                // special case of converted time being less than or equal to a minute.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%.2f minutes = %f hour",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f minutes = %f hours ",initialTime,convertedTime);
                }


            }
            //converting from minutes to days 
            if(convertTo==4){
                convertedTime= initialTime/(60*24);
                // special case of the initial time being exactly one minute.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 minute = %f day", convertedTime);
                }
                // special case of converted time being less than or equal to a day.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f minutes = %f day",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f minutes = %f days",initialTime,convertedTime);
                }


                
            }
            //converting from minutes  to weeks 
            if(convertTo==5){
                convertedTime= initialTime/(60*24*7);
                // special case of the initial time being exactly one minute.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 minute = %f week", convertedTime);
                }
                // special case of converted time being less than or equal to a week.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f minutes = %f week ",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f minutes = %f weeks",initialTime,convertedTime);
                }
            }
            //converting from minutes to months 
            if(convertTo==6){
                convertedTime= initialTime/(60*24*30);
                // special case of the initial time being exactly one minute.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 minute = %f month", convertedTime);
                }
                // special case of converted time being less than or equal to a month.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f minutes = %f month ",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f minutes = %f months",initialTime,convertedTime);
                }
                
            }
            //converting from minutes to years 
            if(convertTo==7){
                convertedTime= initialTime/(60*24*365.25);
                // special case of the initial time being exactly one minute.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 minute = %f year", convertedTime);
                }
                // special case of converted time being less than or equal to a year.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f minutes = %f year",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f minutes = %f years",initialTime,convertedTime);
                }
                
            }
            //conveting from minutes to decades 
            if(convertTo==8){
                convertedTime= initialTime/(60*24*365.25*10);
                // special case of the initial time being exactly one minute.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 minute = %f decade", convertedTime);
                }
                // special case of converted time being less than or equal to a decade.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f minutes = %f decade",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f minutes = %f decades",initialTime,convertedTime);
                }
            }
            //converting from minutes to centuries 
            if(convertTo==9){
                convertedTime= initialTime/(60*24*365.25*100);
                // special case of the initial time being exactly one minute.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 minute = %f century", convertedTime);
                }
                // special case of converted time being less than or equal to a century.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f minutes = %f century",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f minutes = %f centuries",initialTime,convertedTime);
                }
                
            }
            //converting from minutes to millenium 
            if(convertTo==10){
                convertedTime= initialTime/(60*24*365.25*1000);
                // special case of the initial time being exactly one minute.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 minute = %f millenium", convertedTime);
                }
                // special case of converted time being less than or equal to a millenium.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f minutes = %f millenium",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f minutes = %f milleniums",initialTime,convertedTime);
                }
                
            }
            //converting from minutes to generations 
            if(convertTo==11){
                convertedTime= initialTime/(60*24*365.25*30); // There are 30 years on average in a generation.
                // special case of the initial time being exactly one minute.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 minute = %f generation",convertedTime);
                }
                // special case of converted time being less than or equal to a generation.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f minutes = %f generation",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f minutes = %f generations",initialTime,convertedTime);
                }
                
            }

        }
        //this is block is executed if the initial time is given in hours.
        if (convertFrom==3){
            //converting from hours to seconds.
            if(convertTo==1){
                convertedTime= initialTime*3600;
                // special case of the initial time being exactly one hour.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 hour = %f seconds", convertedTime);
                }
                // special case of converted time being less than or equal to a second.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f hour = %f second",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f hours = %f seconds",initialTime,convertedTime);
                }


            }
            //converting from hours to minutes 
            if(convertTo==2){
                convertedTime= initialTime*60;
                // special case of the initial time being exactly one hour.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 hour = %f minutes", convertedTime);
                }
                // special case of converted time being less than or equal to a minute.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f hour = %f minute",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f hours = %f minutes",initialTime,convertedTime);
                }

            }
            //converting from hours to days 
            if(convertTo==4){
                convertedTime= initialTime/24;
                // special case of the initial time being exactly one hour.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 hour = %f day", convertedTime);
                }
                // special case of converted time being less than or equal to a day.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f hours = %f day",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f hours = %f days",initialTime,convertedTime);
                }

                
            }
            //converting from hours to weeks 
            if(convertTo==5){
                convertedTime= initialTime/(24*7);
                 // special case of the initial time being exactly one hour.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 hour = %f week", convertedTime);
                }
                // special case of converted time being less than or equal to a week.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f hours = %f week",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f hours = %f weeks",initialTime,convertedTime);
                }
            }
            //converting from hours to months 
            if(convertTo==6){
                convertedTime= initialTime/(24*30);
                // special case of the initial time being exactly one hour.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 hour = %f month", convertedTime);
                }
                // special case of converted time being less than or equal to a month.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f hours = %f month",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f hours = %f months",initialTime,convertedTime);
                }
            }
            //converting from hours to years 
            if(convertTo==7){
                convertedTime= initialTime/(24*365.25);
                // special case of the initial time being exactly one hour.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 hour = %f year", convertedTime);
                }
                // special case of converted time being less than or equal to a year.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f hours = %f year",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f hours = %f years",initialTime,convertedTime);
                }
                
            }
            //conveting from hours to decades 
            if(convertTo==8){
                convertedTime= initialTime/(24*365.25*10);
                // special case of the initial time being exactly one hour.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 hour = %f decade", convertedTime);
                }
                 // special case of converted time being less than or equal to a decade.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f hours = %f decade",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f hours = %f decades",initialTime,convertedTime);
                }
                
            }
            //converting from hours to centuries 
            if(convertTo==9){
                convertedTime= initialTime/(24*365.25*100);
                // special case of the initial time being exactly one hour.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 hour = %f century", convertedTime);
                }
                // special case of converted time being less than or equal to a century.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f hours = %f century",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f hours = %f centuries",initialTime,convertedTime);
                }
            }
            //converting from hours to millenium 
            if(convertTo==10){
                convertedTime= initialTime/(24*365.25*1000);
                // special case of the initial time being exactly one hour.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 hour = %f millenium", convertedTime);
                }
                // special case of converted time being less than or equal to a millenium.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f hours = %f millenium",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f hours = %f milleniums",initialTime,convertedTime);
                }
                
            }

            //converting from hours to generations 
            if(convertTo==11){
                convertedTime= initialTime/(24*365.25*30);
                // special case of the initial time being exactly one hour.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 hour = %f millenium", convertedTime);
                }
                // special case of converted time being less than or equal to a millenium.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f hours = %f millenium",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f hours = %f milleniums",initialTime,convertedTime);
                }
                
            }

        }
        //this is block is executed if the initial time is given in days.
        if (convertFrom==4){
            //converting from days to seconds
            if(convertTo==1){
                convertedTime= initialTime*24*3600;
                // special case of the initial time being exactly one day.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 day = %f seconds",convertedTime);
                }
                // special case of converted time being less than or equal to a second.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f day = %f second",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f days = %f seconds",initialTime,convertedTime);
                }

            }
            //converting from days to minutes 
            if(convertTo==2){
                convertedTime= initialTime*24*60;
                // special case of the initial time being exactly one day.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 day = %f minutes",convertedTime);
                }
                // special case of the initial time being exactly one day.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 day = %f minutes",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f days = %f minutes",initialTime,convertedTime);
                }

            }
            //converting from days to hours
            if(convertTo==3){
                convertedTime= initialTime*24;
                // special case of the initial time being exactly one day.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 day = %f hours",convertedTime);
                }
                // special case of converted time being less than or equal to 1 hour.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f day = %f hour",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f days = %f hours",initialTime,convertedTime);
                }
                
            }
            //converting from days to weeks
            if(convertTo==5){
                convertedTime= initialTime/7;
                // special case of the initial time being exactly one day.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 day = %f week",convertedTime);
                }
                // special case of converted time being less than or equal to a week.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f days = %f week",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f days = %f weeks",initialTime,convertedTime);
                }
                
            }
            //converting from days to months 
            if(convertTo==6){
                convertedTime= initialTime/30;
                // special case of the initial time being exactly one day.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 day = %f month",convertedTime);
                }
                // special case of converted time being less than or equal to a month.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f days = %f month",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f days = %f months",initialTime,convertedTime);
                }
                
            }
            //converting from days to years 
            if(convertTo==7){
                convertedTime= initialTime/365.35;
                // special case of the initial time being exactly one day.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 day = %f year",convertedTime);
                }
                // special case of converted time being less than or equal to a year.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f days = %f year",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f days = %f years",initialTime,convertedTime);
                }
                
            }
            //conveting from days to decades 
            if(convertTo==8){
                convertedTime= initialTime/(365.25*10);
                // special case of the initial time being exactly one day.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 day = %f decade",convertedTime);
                }
                 // special case of converted time being less than or equal to a decade.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f days = %f decade",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f days = %f decades",initialTime,convertedTime);
                }
                
            }
            //converting from days to centuries 
            if(convertTo==9){
                convertedTime= initialTime/(365.25*100);
                // special case of the initial time being exactly one day.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 day = %f century",convertedTime);
                }
                // special case of converted time being less than or equal to a century.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f days = %f century",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f days = %f centuries",initialTime,convertedTime);
                }
                
            }
            //converting from days to millenium 
            if(convertTo==10){
                convertedTime= initialTime/(365.25*1000);
                // special case of the initial time being exactly one day.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 day = %f millenium",convertedTime);
                }
                // special case of converted time being less than or equal to a millenium.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f days = %f millenium",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f days = %f milleniums",initialTime,convertedTime);
                }
                
            }

            //converting from days to generations 
            if(convertTo==11){
                convertedTime= initialTime/(365.25*30);
                // special case of the initial time being exactly one day.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 day = %f generation",convertedTime);
                }
                // special case of converted time being less than or equal to a generation.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f days = %f generation",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f days = %f generations",initialTime,convertedTime);
                }

                
            }

        }
        //this is block is executed if the initial time is given in weeks.
        if (convertFrom==5){
            //converting from weeks to seconds
            if(convertTo==1){
                convertedTime= initialTime*7*24*3600;
                // special case of the initial time being exactly one week.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 week = %f seconds",convertedTime);
                }
                // special case of converted time being less than or equal to a second.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f week = %f second",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f weeks = %f seconds",initialTime,convertedTime);
                }

            }
            //converting from weeks to minutes
            if(convertTo==2){
                convertedTime= initialTime*7*24*60;
                // special case of the initial time being exactly one week.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 week = %f minutes",convertedTime);
                }
                // special case of converted time being less than or equal to a minute.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f week = %f minute",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f weeks = %f minutes",initialTime,convertedTime);
                }

            }
            //converting from weeks to hours 
            if(convertTo==3){
                convertedTime= initialTime*7*24;
                // special case of the initial time being exactly one week.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 week = %f hours",convertedTime);
                }
                // special case of converted time being less than or equal to 1 hour.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f week = %f hour",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f weeks = %f hours",initialTime,convertedTime);
                }
                
            }
            //converting from weeks to days 
            if(convertTo==4){
                convertedTime= initialTime*7;
                // special case of the initial time being exactly one week.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 week = %f days",convertedTime);
                }
                // special case of converted time being less than or equal to a day.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f week = %f day",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f weeks = %f days",initialTime,convertedTime);
                }
                
            }
            //converting from weeks to months 
            if(convertTo==6){
                convertedTime= (initialTime*7)/30;
                // special case of the initial time being exactly one week.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 week = %f month",convertedTime);
                }
                // special case of converted time being less than or equal to a second.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f weeks = %f month",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f weeks = %f months",initialTime,convertedTime);
                }
                
            }
            //converting from weeks to years 
            if(convertTo==7){
                convertedTime= (initialTime*7)/365.25;
                // special case of the initial time being exactly one week.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 week = %f year",convertedTime);
                }
                // special case of converted time being less than or equal to a year.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f weeks = %f year",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f weeks = %f years",initialTime,convertedTime);
                }
                
            }
            //conveting from weeks to decades 
            if(convertTo==8){
                convertedTime= (initialTime*7)/(365.25*10);
                // special case of the initial time being exactly one week.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 week = %f decade",convertedTime);
                }
                // special case of converted time being less than or equal to a decade.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f weeks = %f decade",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f weeks = %f decades",initialTime,convertedTime);
                }
                
            }
            //converting from weeks to centuries 
            if(convertTo==9){
                convertedTime= (initialTime*7)/(365.25*100);
                // special case of the initial time being exactly one week.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 week = %f century",convertedTime);
                }
                 // special case of converted time being less than or equal to a century.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f weeks = %f century",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f weeks = %f centuries",initialTime,convertedTime);
                }
                
            }
            //converting from to millenium 
            if(convertTo==10){
                convertedTime= (initialTime*7)/(365.25*1000);
                // special case of the initial time being exactly one week.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 week = %f millenium",convertedTime);
                }
                // special case of converted time being less than or equal to a millenium.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f weeks = %f millenium",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f weeks = %f milleniuims",initialTime,convertedTime);
                }
            }
            
            //converting from weeks to generations 
            if(convertTo==11){
                 convertedTime= (initialTime*7)/(365.25*30);
                // special case of the initial time being exactly one week.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 week = %f genration",convertedTime);
                }
                // special case of converted time being less than or equal to a generation.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f weeks = %f generation",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f weeks = %f generations",initialTime,convertedTime);
                }
                
            }

        }
        //this is block is executed if the initial time is given in months.
        if (convertFrom==6){
            //converting from months to seconds
            if(convertTo==1){
                convertedTime= initialTime*3600*24*30;
                // special case of the initial time being exactly one month.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 month = %f seconds",convertedTime);
                }
                // special case of converted time being less than or equal to a second.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f month = %f second",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f months = %f seconds ",initialTime,convertedTime);
                }

            }
            //converting from months to minutes
            if(convertTo==2){
                convertedTime= initialTime*60*24*30;
                // special case of the initial time being exactly one month.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 month = %f minute",convertedTime);
                }
                // special case of converted time being less than or equal to a minute.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f month = %f minute ",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f months = %f minutes",initialTime,convertedTime);
                }

            }
            //converting from months to hours 
            if(convertTo==3){
                convertedTime = initialTime*24*30;
                // special case of the initial time being exactly one month.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 month = %f hours",convertedTime);
                }
                // special case of converted time being less than or equal to a hour.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f month = %f hour",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f months = %f hours",initialTime,convertedTime);
                }
                
            }
            //converting from months to days 
            if(convertTo==4){
                convertedTime = initialTime*30;
                // special case of the initial time being exactly one week.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 month = %f days",convertedTime);
                }
                // special case of converted time being less than or equal to a day.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f month = %f days ",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f months = %f days",initialTime,convertedTime);
                }
                
            }
            //converting from months to weeks 
            if(convertTo==5){
                convertedTime = (initialTime*30)/7;
                // special case of the initial time being exactly one month.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 month = %f weeks",convertedTime);
                }
                // special case of converted time being less than or equal to a week.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f month = %f week",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f months = %f weeks",initialTime,convertedTime);
                }
                
            }
            //converting from months to years 
            if(convertTo==7){
                convertedTime = initialTime/12;
                // special case of the initial time being exactly one month.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 month = %f years",convertedTime);
                }
                // special case of converted time being less than or equal to year.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f months = %f year",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f months = %f minutes",initialTime,convertedTime);
                }
                
            }
            //conveting from months to decades 
            if(convertTo==8){
                convertedTime = initialTime/(12*10);
                // special case of the initial time being exactly one month.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 month = %f decade",convertedTime);
                }
                // special case of converted time being less than or equal to a decade.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f months = %f decade",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f months = %f decades",initialTime,convertedTime);
                }
                
            }
            //converting from months to centuries 
            if(convertTo==9){
                convertedTime = initialTime/(12*100);
                // special case of the initial time being exactly one month.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 month = %f century",convertedTime);
                }
                // special case of converted time being less than or equal to a century.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f months = %f century",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f months = %f centuries",initialTime,convertedTime);
                }
            }
            //converting from months to millenium 
            if(convertTo==10){
                convertedTime = initialTime/(12*1000);
                // special case of the initial time being exactly one month.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 month = %f century",convertedTime);
                }
                // special case of converted time being less than or equal to a century.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f months = %f century",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f months = %f centuries",initialTime,convertedTime);
                }
            }
            //converting from months to generations 
            if(convertTo==11){
                convertedTime = initialTime/(12*30);
                // special case of the initial time being exactly one month.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 month = %f generation",convertedTime);
                }
                // special case of converted time being less than or equal to a generation.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f months = %f generation",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f months = %f generations",initialTime,convertedTime);
                }
                
            }

        }
        //this is block is executed if the initial time is given in years.
        if (convertFrom==7){
            //converting from years to seconds
            if(convertTo==1){
                convertedTime = initialTime*secsInYear;
                // special case of the initial time being exactly one year.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 year = %f seconds",convertedTime);
                }
                // special case of converted time being less than or equal to a second.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f year = %f second",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f years = %f seconds",initialTime,convertedTime);
                }


            }
            //converting from year to minutes
            if(convertTo==2){
                convertedTime = (initialTime*secsInYear)/60;
                // special case of the initial time being exactly one year.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 year = %f minutes",convertedTime);
                }
                // special case of converted time being less than or equal to a minute.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f year = %f minute",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f years = %f minutes",initialTime,convertedTime);
                }


            }
            //converting from years to hours 
            if(convertTo==3){
                 convertedTime = (initialTime*secsInYear)/3600;
                // special case of the initial time being exactly one year.
                if(initialTime==1){
                    printf("\n\n\n\t\t1 year = %f hours",convertedTime);
                }
                // special case of converted time being less than or equal to 1 hour.                        
                else if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f year = %f hour",initialTime,convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f years = %f hours",initialTime,convertedTime);
                }

                
            }
            //converting from years to days 
            if(convertTo==4){
                 convertedTime = initialTime*365.25;
                // special case of converted time being less than or equal to a day.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f year = %f day",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one year.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 year = %f days",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f years = %f days",initialTime,convertedTime);
                }

                
            }
            //converting from years to weeks
            if(convertTo==5){
                 convertedTime = (initialTime*365.2)/7;
                // special case of converted time being less than or equal to a week.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f year = %f week",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one year.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 year = %f weeks",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f years = %f weeks",initialTime,convertedTime);
                }

                
            }
            //converting from years to months
            if(convertTo==6){
                 convertedTime = initialTime*12;
                // special case of converted time being less than or equal to a months.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f year = %f month",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one year.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 year = %f months",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f years = %f months",initialTime,convertedTime);
                }

            }
            //conveting from years to decades 
            if(convertTo==8){
                 convertedTime = initialTime/10;
                // special case of converted time being less than or equal to a decade.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f years = %f decade",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one year.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 year = %f decade",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f years = %f decades",initialTime,convertedTime);
                }

                
            }
            //converting from years to centuries 
            if(convertTo==9){
                 convertedTime = initialTime/100;
                // special case of converted time being less than or equal to a century.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f years = %f century",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one year.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 year = %f century",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f years = %f centuries",initialTime,convertedTime);
                }

                
            }
            //converting from years to millenium 
            if(convertTo==10){
                 convertedTime = initialTime/1000;
                // special case of converted time being less than or equal to a millenium;                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f years = %f millenium",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one year.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 year = %f millenium",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f years = %f milleniums",initialTime,convertedTime);
                }

                
            }

            //converting from years to generations 
            if(convertTo==11){
                 convertedTime = initialTime/30;
                // special case of converted time being less than or equal to a generation.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f years = %f generation",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one year.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 year = %f generation",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f years = %f generations",initialTime,convertedTime);
                }

                
            }

        }
         //this is block is executed if the initial time is given in decades.
        if (convertFrom==8){
            //converting from decades to seconds
            if(convertTo==1){
                 convertedTime = initialTime*secsInYear*10;
                // special case of converted time being less than or equal to a second.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f decade = %f second",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one decade.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 decade = %f seconds",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f decades = %f seconds",initialTime,convertedTime);
                }


            }
            //converting from decades to minutes
            if(convertTo==2){
                 convertedTime = (initialTime*secsInYear*10)/60;
                // special case of converted time being less than or equal to a minute.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f decade = %f minute",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one decade.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 decade = %f minutes",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f decades = %f minutes",initialTime,convertedTime);
                }

            }
            //converting from decades to hours 
            if(convertTo==3){
                 convertedTime = (initialTime*secsInYear*10)/3600;
                // special case of converted time being less than or equal to 1 hour.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f decade = %f hour",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one decade.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 decade = %f hours",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f decades = %f hours",initialTime,convertedTime);
                }
            }
            //converting from decades to days 
            if(convertTo==4){
                 convertedTime = initialTime*365.25*10;
                // special case of converted time being less than or equal to a day.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f decade = %f day",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one decade.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 decade = %f days",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f decades = %f days",initialTime,convertedTime);
                }
                
            }
            //converting from decades to weeks
            if(convertTo==5){
                convertedTime = (initialTime*365.25*10)/7;
                // special case of converted time being less than or equal to a week.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f decade = %f week",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one decade.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 decade = %f weeks",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f decades = %f weeks",initialTime,convertedTime);
                }
                
            }
            //converting from decades to months
            if(convertTo==6){
                convertedTime = (initialTime*365.25*10)/30;
                // special case of converted time being less than or equal to a month.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f decade = %f month",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one decade.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 decade = %f months",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f decades = %f months",initialTime,convertedTime);
                }
                
            }
            //conveting from decades to years
            if(convertTo==7){
                convertedTime = initialTime*10;
                // special case of converted time being less than or equal to a year.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f decade = %f year",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one decade.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 decade = %f years",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f decades = %f years",initialTime,convertedTime);
                }
                
            }
            //converting from decades to centuries 
            if(convertTo==9){
                convertedTime = (initialTime*10)/100;
                // special case of converted time being less than or equal to a century.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f decade = %f century",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one year.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 decade = %f century",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f decades = %f centuries",initialTime,convertedTime);
                }

                
            }
            //converting from decades to millenium 
            if(convertTo==10){
                convertedTime = (initialTime*10)/1000;
                // special case of converted time being less than or equal to a millenium.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f decade = %f millenium",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one year.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 decade = %f millenium",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f decades = %f milleniums",initialTime,convertedTime);
                }


                
            }
            
            //converting from decades to generations 
            if(convertTo==11){
                convertedTime = (initialTime*10)/30;
                // special case of converted time being less than or equal to a generation.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f decade = %f generation",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one year.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 decade = %f generation",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f decades = %f generations",initialTime,convertedTime);
                }
                
            }

        }
         //this is block is executed if the initial time is given in centuries.
        if (convertFrom==9){
            //converting from centuries to seconds
            if(convertTo==1){
                convertedTime = initialTime*secsInYear*100;
                // special case of converted time being less than or equal to a second.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f century = %f second",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one year.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 century = %f seconds",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f centuries = %f seconds",initialTime,convertedTime);
                }

            }
            //converting from centuries to minutes
            if(convertTo==2){
                convertedTime = (initialTime*secsInYear*100)/60;
                // special case of converted time being less than or equal to a minute.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f century = %f minute",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one year.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 century = %f minutes",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f centuries = %f minutes",initialTime,convertedTime);
                }
            }
            //converting from centuries to hours 
            if(convertTo==3){
                convertedTime = (initialTime*secsInYear*100)/3600;
                // special case of converted time being less than or equal to 1 hour.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f century = %f hour",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one year.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 century = %f hours",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f centuries = %f hours",initialTime,convertedTime);
                }
            }
            //converting from centuries to days 
            if(convertTo==4){
                convertedTime = initialTime*365.25*100;
                // special case of converted time being less than or equal to a day.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f century = %f day",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one year.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 century = %f days",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f centuries = %f days",initialTime,convertedTime);
                }
            }
            //converting from centuries to weeks
            if(convertTo==5){
                convertedTime = initialTime*365.25*100/7;
                // special case of converted time being less than or equal to a week.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f century = %f week",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one year.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 century = %f weeks",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f centuries = %f weeks",initialTime,convertedTime);
                }
                
            }
            //converting from centuries to months
            if(convertTo==6){
                convertedTime = initialTime*365.25*100/30;
                // special case of converted time being less than or equal to a month.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f century = %f month",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one year.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 century = %f months",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f centuries = %f months",initialTime,convertedTime);
                }
                
            }
            //converting from centuries to years
            if(convertTo==7){
                convertedTime = initialTime*100;
                // special case of converted time being less than or equal to a year.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f century = %f year",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one century.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 century = %f years",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f centuries = %f years",initialTime,convertedTime);
                }
            }
            //converting from centuries to decades
            if(convertTo==8){
                convertedTime = initialTime*10;
                // special case of converted time being less than or equal to a decade.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f century = %f decade",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one century.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 century = %f decades",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f centuries = %f decades",initialTime,convertedTime);
                }
            }
            //converting from centuries to millenium 
            if(convertTo==10){
                convertedTime = (initialTime*100)/1000;
                // special case of converted time being less than or equal to a millenium.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f centuries = %f millenium",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one century.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 century = %f millenium",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f centuries = %f milleniiums",initialTime,convertedTime);
                }
            }
            //converting from centuries to generations 
            if(convertTo==11){
                convertedTime = (initialTime*100)/30;
                // special case of converted time being less than or equal to a generation.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f century = %f generation",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one century.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 century = %f generations",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f centuries = %f generations",initialTime,convertedTime);
                }
            }

        }
        //this is block is executed if the initial time is given in milleniums.
        if (convertFrom==10){
            //converting from milleniums to seconds
            if(convertTo==1){
                convertedTime = initialTime*secsInYear*1000;
                // special case of converted time being less than or equal to a second.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f millenium = %f second",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one year.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 millenium = %f seconds",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f milleniums = %f seconds",initialTime,convertedTime);
                }

            }
            //converting from millenium to minutes
            if(convertTo==2){
                convertedTime = (initialTime*secsInYear*1000)/60;
                // special case of converted time being less than or equal to a minute.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f millenium = %f minute",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one year.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 millenium = %f minutes",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f milleniums = %f minutes",initialTime,convertedTime);
                }

            }
            //converting from millenium to hours 
            if(convertTo==3){
                convertedTime = (initialTime*secsInYear*1000)/3600;
                // special case of converted time being less than or equal to 1 hour.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f millenium = %f hour",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one millenium.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 millenium = %f hours",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f milleniums = %f hours",initialTime,convertedTime);
                }
            }
            //converting from millenium to days 
            if(convertTo==4){
                convertedTime = initialTime*365.25*1000;
                // special case of converted time being less than or equal to a day.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f millenium = %f day",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one millenium.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 millenium = %f day",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f milleniums = %f days",initialTime,convertedTime);
                }
            }
            //converting from millenium to weeks
            if(convertTo==5){
                convertedTime = (initialTime*365.35*1000)/7;
                // special case of converted time being less than or equal to a week.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f millenium = %f week",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one millenium.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 millenium = %f weeks",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f milleniums = %f weeks",initialTime,convertedTime);
                }
            }
            //converting from millenium to months
            if(convertTo==6){
                convertedTime = (initialTime*365.25*1000)/30;
                // special case of converted time being less than or equal to a month.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f millenium = %f month",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one millenium.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 millenium = %f months",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f milleniums = %f months",initialTime,convertedTime);
                }
            }
            //conveting from millenium to years
            if(convertTo==7){
                convertedTime = initialTime*1000;
                // special case of converted time being less than or equal to a year.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f millenium = %f year",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one millenium.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 millenium = %f years",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f milleniums = %f years",initialTime,convertedTime);
                }
            }
            //converting from millenium to decades
            if(convertTo==8){
                convertedTime = (initialTime*1000)/10;
                // special case of converted time being less than or equal to a decade.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f millenium = %f decade",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one year.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 millenium = %f decades",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f milleniums = %f decades",initialTime,convertedTime);
                }
            }
            //converting from millenium to centuries 
            if(convertTo==9){
                convertedTime = (initialTime*1000)/100;
                // special case of converted time being less than or equal to a century.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f millenium = %f century",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one millenium.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 millenium = %f centuries",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f milleniums = %f centuries",initialTime,convertedTime);
                }
            }
            //converting from millenium to generations 
            if(convertTo==11){
                convertedTime = (initialTime*1000)/30;
                // special case of converted time being less than or equal to a generation.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f millenium = %f generation",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one millenium.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 millenium = %f generations",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f milleniums = %f generations",initialTime,convertedTime);
                }
            }

        }
         //this is block is executed if the initial time is given in generations.
        if (convertFrom==11){
            //converting from generations to seconds
            if(convertTo==1){
                convertedTime = initialTime*secsInYear*30;
                // special case of converted time being less than or equal to a second.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f generation = %f second",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one year.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 genreration = %f seconds",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f generations = %f seconds",initialTime,convertedTime);
                }


            }
            //converting from genrations to minutes
            if(convertTo==2){
                convertedTime = (initialTime*secsInYear*30)/60;
                // special case of converted time being less than or equal to a minute.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f generation = %f minute",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one year.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 genreration = %f minutes",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f generations = %f minutes",initialTime,convertedTime);
                }

            }
            //converting from generations to hours 
            if(convertTo==3){
                convertedTime = (initialTime*secsInYear*30)/3600;
                // special case of converted time being less than or equal to 1 hour.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f generation = %f hour",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one generation.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 genreration = %f hours",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f generations = %f hours",initialTime,convertedTime);
                }
            }
            //converting from generation to days 
            if(convertTo==4){
                convertedTime = initialTime*365.20*30;
                // special case of converted time being less than or equal to a day.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f generation = %f day",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one generation.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 genreration = %f days",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f generations = %f days",initialTime,convertedTime);
                }
            }
            //converting from generations to weeks
            if(convertTo==5){
                convertedTime = (initialTime*365.25*30)/7;
                // special case of converted time being less than or equal to a week.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f generation = %f week",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one generation.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 genreration = %f weeks",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f generations = %f weeks",initialTime,convertedTime);
                }
            }
            //converting from generation to months
            if(convertTo==6){
                convertedTime = initialTime*12*30;
                // special case of converted time being less than or equal to a month.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f generation = %f month",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one year.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 genreration = %f months",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f generations = %f months",initialTime,convertedTime);
                }
            }
            //conveting from generation to years
            if(convertTo==7){
                convertedTime = initialTime*30;
                // special case of converted time being less than or equal to a year.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f generation = %f year",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one generation.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 genreration = %f years",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f generations = %f years",initialTime,convertedTime);
                }
            }
            //converting from generation to decades
            if(convertTo==8){
                convertedTime = initialTime*3;
                // special case of converted time being less than or equal to a decade.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f generation = %f decade",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one year.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 genreration = %f decades",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f generations = %f decades",initialTime,convertedTime);
                }
            }
            //converting from generations to centuries 
            if(convertTo==9){
                convertedTime = (initialTime*30)/100;
                // special case of converted time being less than or equal to a century.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f generations = %f century",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one generation.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 genreration = %f century",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f generations = %f centuries",initialTime,convertedTime);
                }
            }
            //converting from generation to milleniums
            if(convertTo==10){
                convertedTime = (initialTime*30)/1000;
                // special case of converted time being less than or equal to a millenium.                        
                if(convertedTime<=1&&convertedTime>=0){
                    printf("\n\n\n\t\t%f generations = %f millenium",initialTime,convertedTime);
                }
                // special case of the initial time being exactly one generation.
                else if(initialTime==1){
                    printf("\n\n\n\t\t1 genreration = %f millenium",convertedTime);
                }
                else{
                    printf("\n\n\n\t\t%f generations = %f millenium",initialTime,convertedTime);
                }
            }
        }
    }   // end major else statement 
} // end of function 


   


/*
The Function temp converts temperatures from one unit to another. The options for temperature conversions available for
the user to convert to and from are Celcuis, Fahrenheit and Kelvin correspponding to 1, 2 and 3 respectively. these options are first printed by the
program and then the user is asked to enter the correspondong values of the unit to convert from and then unit to convert to.
The program then asks user to eneter the initial temperature. The choices for the original unit and unit to be converted to are compared
using a conditionala stament. if tehy are the same the initial temperature is printed. otherwise switch statments are used to perform
conversion calculations when the choices enetered have been found in comparisons.
 */

void temp(){

    int convertFrom,convertTo;
    double initialTemp,convertedTemp;

    printf("\n\n\n\t\t\tCelsius(1)\t\t\tFahrenheit(2)\t\t\tKelvin(3)");
    printf("\n\n\n\t\t\tConvert from(number):");
    scanf("%d",&convertFrom);
    printf("\n\n\n\t\t\tConvert to(number):");
    scanf("%d",&convertTo);
    printf("\n\n\n\t\t\tEnter temperature:");
    scanf("%lf",&initialTemp);

    if(convertFrom==convertTo){
        printf("\n\n\n\t\t\t The resulting temperature remains the same; %f",initialTemp);
    }
    else{
        switch(convertFrom){
            case 1: //initial temperature in celcius Celcius. 
                switch(convertTo){
                    case 2:
                        convertedTemp=initialTemp*9/5+32.0;
                        printf("\n\n\n\t\t\t%fC=%fF",initialTemp,convertedTemp);
                    break;
                    case 3:
                        convertedTemp=initialTemp+273.15;
                        printf("\n\n\n\t\t\t%fC=%fK",initialTemp,convertedTemp);
                    break;
                }
            break;
            case 2: // initial temperature in Fahrenheit.
                switch(convertTo){
                    case 1:
                        convertedTemp=(initialTemp-32.0)*5/9;
                        printf("\n\n\n\t\t\t%fF=%fC",initialTemp,convertedTemp);
                    break;
                    case 3:
                        initialTemp=(initialTemp-32.0)*5/9;
                        convertedTemp=initialTemp+273.15;
                        printf("\n\n\n\t\t\t%fF=%fK",initialTemp,convertedTemp);
                    break;

                }
            break;
            case 3: // initial temoperature in Kelvin.
                switch(convertTo){
                    case 1:
                        convertedTemp=initialTemp-273.15;
                        printf("\n\n\n\t\t\t%fK=%fC",initialTemp,convertedTemp);
                    break;
                    case 2:
                        convertedTemp=(initialTemp-273.15)*9/5+32;
                        printf("\n\n\n\t\t\t%fK=%fF",initialTemp,convertedTemp);
                    break;
                }
            break;


        }   
    }  
}

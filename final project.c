#include <stdio.h>

int main() {
   float computerth, economicsth, socialth, accountth, englishth, nepalith, 
   computerpr, economicspr, socialpr, accountpr, englishpr, nepalipr, computer, economics, social, account, english, nepali, total,  percentage;
 
 
   printf("Enter theory marks of student in computer: ");
   scanf("%f", &computerth);
   printf("Enter practical marks of student in computer: ");
   scanf("%f", &computerpr);
    printf("Enter theory marks of student in economics: ");
   scanf("%f", &economicsth);
   printf("Enter practical marks of student in economics: ");
   scanf("%f", &economicspr);
    printf("Enter theory marks of student in social: ");
   scanf("%f", &socialth);
   printf("Enter practical marks of student in social: ");
   scanf("%f", &socialpr); 
   printf("Enter theory marks of student in account: ");
   scanf("%f", &accountth);
   printf("Enter practical marks of student in account: ");
   scanf("%f", &accountpr);
    printf("Enter theory marks of student in english: ");
   scanf("%f", &englishth);
   printf("Enter practical marks of student in english: ");
   scanf("%f", &englishpr);
    printf("Enter theory marks of student in nepali: ");
   scanf("%f", &nepalith);
   printf("Enter practical marks of student in nepali: ");
   scanf("%f", &nepalipr);
   
     computer  = computerth+computerpr;
     economics = economicsth+economicspr;
     social    =  socialth+socialpr;
     account   =accountth+accountpr;
      english  =  englishth+englishpr;
     nepali    = nepalith+nepalipr;

   total = computer+economics+social+account+english+nepali;

 

   percentage = (total / 600) * 100;

  
   printf("\nTotal marks = %.2f\n", total);
 
   printf("Percentage = %.2f%%\n", percentage);

  
   if (percentage >= 90) {
      printf("Grade: A+");
   } else if (percentage >= 80) {
      printf("Grade: A");
   } else if (percentage >= 70) {
      printf("Grade: B+");
   } else if (percentage >= 60) {
      printf("Grade: B");
   } else if (percentage >= 50) {
      printf("Grade: C+");
   } else if (percentage >= 40) {
      printf("Grade: D");
   } else {
      printf("Grade: Non Grade");
   }

   return 0;
}


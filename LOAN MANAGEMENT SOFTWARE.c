#include<stdio.h>
#include<math.h>

struct customer{
  char name[20];
  char add[40];
  int age;
  char car[20];
}c1;


int main(){

  int ch,vh;

  printf("------------------------------\n");
  printf("   LOAN MANAGEMENT SYSTEM     \n");
  printf("------------------------------\n");
  printf("1. Vehicle Loan\n");
  printf("2. Home Loan\n");
  printf("3. Personal Loan\n");
  printf("Enter the type of loan required: ");
  scanf("%d",&ch);

  //Vehicle Loan:
  if(ch==1){
    printf("------------------------------\n");
    printf("          VEHICLE LOAN        \n");
    printf("------------------------------\n");
    printf("1. Car Loan\n");
    printf("2. Two-Wheeler Loan\n");
    printf("Enter the type of loan required: ");
    scanf("%d",&vh);

    //Car Loan:
    if(vh==1){
      float p,n=10,r,amt,cost;
      char choice;

      printf("\n----PERSONAL DETAILS-----\n");
      printf("Enter your name: ");
      scanf("%s",&c1.name);
      printf("Enter your address: ");
      scanf("%s",&c1.add);
      printf("Enter your age: ");
      scanf("%d",&c1.age);

      printf("\n-------CAR DETAILS-------\n");
      printf("Enter the name of car your you want: ");
      scanf("%s",&c1.car);

      printf("Enter the cost of car: ");
      scanf("%f",&cost);

      float mloan = cost/2;

      printf("\n------LOAN DETAILS------\n");
      printf("The amount of loan that can be sanctioned is: %0.2f\n",mloan);

      p=mloan+1;

      while (p>mloan){
        printf("Enter the amount of loan: ");
        scanf("%f",&p);
        if(p>mloan){
          printf("Amount of loan that can be santioned should be less than: %.2f\n",mloan);
        }
      }

      while(n>5){
        printf("Enter the duration of loan(in years): ");
        scanf("%f",&n);
        if(n>5){
          printf("Duration for loan is maximum 5years");
        }
      }
      printf("Installments for two months: 6%r.a.\n");
      printf("No Installments for two months: 8%r.a.\n");
      printf("Are you willing to pay installments for two months?(Y/N): ");
      scanf("%s",&choice);
      if(choice=='y' || choice=='Y'){
        r = 6;
      }
      else{
        r = 8;
      }

      amt = p*pow(1+r/100,n);

      printf("------------------------------\n");
      printf("Final Amount to pay: %.2f",amt);

    }
    //Two-wheeler Loan:
    else if(vh==2){
      float p,n=10,r,amt,cost;
      char choice;

      printf("\n---PERSONAL DETAILS-----------\n");
      printf("Enter your name: ");
      scanf("%s",&c1.name);
      printf("Enter your address: ");
      scanf("%s",&c1.add);
      printf("Enter your age: ");
      scanf("%d",&c1.age);

      printf("\n---TWO-WHEELER DETAILS--------\n");
      printf("Enter the name of two-wheeler your you want: ");
      scanf("%s",&c1.car);

      printf("Enter the cost of Two-wheeler: ");
      scanf("%f",&cost);

      float mloan = cost/2;

      printf("---LOAN DETAILS----------------\n");
      printf("The amount of loan that can be sanctioned is: %0.2f\n",mloan);

      p=mloan+1;
      while (p>mloan){
        printf("Enter the amount of loan: ");
        scanf("%f",&p);
        if(p>mloan){
          printf("Amount of loan that can be santioned should be less than: %.2f\n",mloan);
        }
      }

      while(n>5){
        printf("Enter the duration of loan(in years): ");
        scanf("%f",&n);
        if(n>5){
          printf("Duration for loan is maximum 5years\n");
        }
      }
      printf("Installments for two months: 4%%r.a.\n");
      printf("No Installments for two months: 6%%r.a.\n");
      printf("Are you willing to pay installments for two months?(Y/N): ");
      scanf("%s",&choice);
      if(choice=='y' || choice=='Y'){
        r = 4;
      }
      else{
        r = 6;
      }
      amt = p*pow(1+r/100,n);

      printf("------------------------------\n");
      printf("Final Amount to pay: %.2f",amt);

    }
  }
  //House Loan:
  else if(ch==2){
    printf("------------------------------\n");
    printf("           HOUSE LOAN         \n");
    printf("------------------------------\n");
    float inc,mloan,amt,n=100;

    printf("\n---PERSONAL DETAILS-----------\n");
    printf("Enter your name: ");
    scanf("%s",&c1.name);
    printf("Enter your address: ");
    scanf("%s",&c1.add);
    printf("Enter your age: ");
    scanf("%d",&c1.age);

    printf("Enter your annual income: ");
    scanf("%f",&inc);
    mloan = 7.5*inc;

    printf("\n---LOAN DETAILS------------\n");
    printf("Amount of loan that can be sanctioned will be: %.2f\n",mloan);
    float p = mloan+1;
    while(p>mloan){
      printf("Enter the amount of loan required: ");
      scanf("%f",&p);
      if(p>mloan){
        printf("Amount of loan required should be less than %.2f",mloan);
      }
    }
    while(n>25){
        printf("Enter the duration of loan(in years): ");
        scanf("%f",&n);
        if(n>25){
          printf("Duration for loan is maximum 25years\n");
        }
    }

    amt = p*pow(1.08,n);

    printf("------------------------------\n");
    printf("Final amount to pay: %.2f",amt);

  }
  //Personal Loan:
  else if(ch==3){
    printf("------------------------------\n");
    printf("        PERSONAL LOAN         \n");
    printf("------------------------------\n");
    float inc,amt,n;

    printf("\n---PERSONAL DETAILS---------\n");
    printf("Enter your name: ");
    scanf("%s",&c1.name);
    printf("Enter your address: ");
    scanf("%s",&c1.add);
    printf("Enter your age: ");
    scanf("%d",&c1.age);

    printf("Enter your annual income: ");
    scanf("%f",&inc);
    float mloan = inc/5;
    printf("\n---LOAN DETAILS-------------\n");
    printf("Amount of loan that can be sanctioned will be: %.2f\n",mloan);
    float p = mloan+1;
    while(p>mloan){
      printf("Enter the amount of loan: ");
      scanf("%f",&p);
      if(p>mloan){
        printf("Amount of loan should be lesser than %.2f",mloan);
      }
    }
    printf("Enter the duration of loan: ");
    scanf("%f",&n);

    amt = p*pow(1.01,n);
    printf("------------------------------\n");
    printf("Final amount to pay: %.2f",amt);
  }

  printf("\n\n------------------------------\n");
  printf("    THANKS FOR VISITING US    \n");
  printf("------------------------------\n");


  return 0;
}

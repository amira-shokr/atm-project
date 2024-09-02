/*
 * File:   atm.c
 * Author: Amira Muhamed
 *
 * Created on sebtember 1, 2024, 6:20 PM
 */
#include "atm.h"

int balance =0;
void bassword_activation(int *pin){
    printf("please enter your bassword of 4 digits to activate this visa : \n");
    scanf("%i" , pin);
  for(int i=0 ; i<10 ; i++){
      printf("...................................................................................\n");
  }

    printf(" this visa has been activated  successfully \n");

}
int authenticate(int *bassword_user_entered ,int *pin) {

     if(*bassword_user_entered == *pin ){
        printf("bassword you entered is correct now you can use  this visa ...  \n");
     return 1;
    }
    else{
          printf("bassword you entered is  not correct  ...  \n");

     return -1;
    }

}
void  confirm(){
     int pin;
    bassword_activation(&pin);
    printf("blease confirm bassword to use this visa \n");
    int bassword_user_entered;
    scanf("%i" , &bassword_user_entered);
    int ret;
     ret=authenticate( &bassword_user_entered,&pin);
    if (ret==1){
        transaction();
    }else{
        printf("you cant use this visa \n");
    }

}
//
void transaction(){

       int choice;
    printf("please enter any option to be seved: \n");
    printf("1. withdraw\n");
    printf("2. deposit\n");
    printf("3. balance\n");
    scanf("%i" ,&choice );
    switch(choice){
    case 1: {
        float amountwithdraw;
         printf("please enter amountwithdraw : \n");
           scanf("%i" ,&amountwithdraw);
        if(amountwithdraw > balance){
            printf("your balance is not enough \n");
        // ask for anothertransactions
        anothertransactions();
    }else{
        //this means your balance is enough
        //call function to withdraw
 withdraw(&balance , &amountwithdraw);
      // ask for anothertransactions

      anothertransactions();

    }

    }  break;
    case 2: {
        int deposit_amount;
        printf("please enter deposit_amount : \n");
  scanf("%i" ,&deposit_amount);
  //call function to deposit
 deposit(&balance , &deposit_amount);
  // ask for anothertransactions

      anothertransactions();
    }
    break;
    case 3:{
       //call function to show balace;
get_balance(&balance );
// ask for anothertransactions
      anothertransactions();

    }

}
}
//
void anothertransactions(){
    int anothertransaction;
    printf("\n\nif you want another transaction ? press 1 to exit press 2 \n\n");
    scanf("%i" ,&anothertransaction);
    if(anothertransaction==1){
       transaction();
    }

    //ignore another option
}

void  withdraw(int *balance , int *amountwithdraw){
    *balance-=*amountwithdraw;
    printf("your transaction has done successfully and withdraw %i  ",*amountwithdraw );
}
void deposit(int *balance , int *deposit_amount){
    *balance+=*deposit_amount;
    printf("your transaction has done successfully and deposit %i",*deposit_amount );
}
void get_balance(int *balance ){
    printf("your balance is %i \n", *balance);
}


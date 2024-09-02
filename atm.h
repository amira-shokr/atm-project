/*
 * File:   atm.h
 * Author: Amira Muhamed
 *
 * Created on sebtember 1, 2024, 6:20 PM
 */
#ifndef ATM_H_
#define	ATM_H_

 /* Section : Includes */
 /* Section: Macro Declarations */
 /* Section: Macro Functions Declarations */
 /* Section: Data Type Declarations */
  /* Section:Functions  Declarations */
void anothertransactions();
void bassword_activation(int *pin);
int authenticate(int *bassword_user_entered ,int *pin);
void  withdraw(int *balance , int *amountwithdraw);
void deposit(int *balance , int *deposit_amount);
void get_balance(int *balance );
void bassword_activation(int *pin);
void transaction();
void  confirm();





 #endif	/* ATM_H_ */

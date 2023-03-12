#include <stdio.h> 
#include <stdlib.h>
#include "input.h"
#include <math.h>

void change(double);

int main() {

    double total = 0, pay = 0, moneyChange = 0;

	do {
		printf("Introduza o total das compras: ");
	} while(!readDouble(&total)); 

    
	do {
		printf("Introduza o montante pago: ");
	} while(!readDouble(&pay)); 

    moneyChange = (pay - total);
    
    printf("Total (€): %.2f\n", total);
    printf("Pay (€): %.2f\n", pay);
    printf("Receives (%.2f€) by:\n", moneyChange);

    change(moneyChange);

    return EXIT_SUCCESS;
}

void change(double money){

    int totalNoteFive = 0, totalCoinTwo = 0, totalCoinOne = 0, totalCoinFifty = 0, totalCoinTwenty = 0, totalCoinTen = 0, totalCoinFive = 0,
    totalCoinTwoCents = 0, totalCoinOneCent = 0;

    int remainingMoney = (int)(100 * money);

    if(money < 0){
        printf("Não é necessário dar troco!");
    }else{

        totalNoteFive = remainingMoney / 500;
        remainingMoney %= 500;

        totalCoinTwo = remainingMoney / 200;
        remainingMoney %= 200;

        totalCoinOne = remainingMoney / 100;
        remainingMoney %= 100;

        totalCoinFifty = remainingMoney / 50;
        remainingMoney %= 50;

        totalCoinTwenty = remainingMoney / 20;
        remainingMoney %= 20;

        totalCoinTen = remainingMoney / 10;
        remainingMoney %= 10;

        totalCoinFive = remainingMoney / 5;
        remainingMoney %= 5;

        totalCoinTwoCents = remainingMoney / 2;
        remainingMoney %= 2;

        totalCoinOneCent = remainingMoney;

        printf("Value\tx\tAmount\n");
        printf("5€\tx\t%d\n", totalNoteFive);
        printf("2€\tx\t%d\n", totalCoinTwo);
        printf("1€\tx\t%d\n", totalCoinOne);
        printf("0.5€\tx\t%d\n", totalCoinFifty);
        printf("0.2€\tx\t%d\n", totalCoinTwenty);
        printf("0.1€\tx\t%d\n", totalCoinTen);
        printf("0.05€\tx\t%d\n", totalCoinFive);
        printf("0.02€\tx\t%d\n", totalCoinTwoCents);
        printf("0.01€\tx\t%d\n", totalCoinOneCent);

    }
}
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int n;
  printf("\ninput n: ");
  scanf("%d", &n);
  int a = n % 10;
  int b = (n / 10) % 10;
  int c = n / 100;
  if(n<100 || n > 999){
      cout <<"input number have 2 number ";
  }
  else{
    switch(c){
      case 1: printf("onehundred ");break;
      case 2: printf("twohundred ");break;
      case 3: printf("threehundred ");break;
      case 4: printf("fourhundred ");break;
      case 5: printf("fivehundred ");break;
      case 6: printf("sixhundred ");break;
      case 7: printf("sevenhundred ");break;
      case 8: printf("eighthundred ");break;
      case 9: printf("ninehundred ");break;
    }
    
    if(b % 10 == 0 && a != 0){
      printf("and ");
    }
    switch(b){
      case 1: printf("ten ");break;
      case 2: printf("twenty ");break;
      case 3: printf("threety ");break;
      case 4: printf("fourty ");break;
      case 5: printf("fifthty ");break;
      case 6: printf("sixty ");break;
      case 7: printf("seventy ");break;
      case 8: printf("eightty ");break;
      case 9: printf("ninety ");break;
    }
    //in ra hàn đơn vị
    switch(a){
      case 1: printf("one ");break;
      case 2: printf("two ");break;
      case 3: printf("three");break;
      case 4: printf("four");break;
      case 5: printf("five ");break;
      case 6: printf("six ");break;
      case 7: printf("seven ");break;
      case 8: printf("eight ");break;
      case 9: printf("nine ");break;
    }
  }
  return 0;
}
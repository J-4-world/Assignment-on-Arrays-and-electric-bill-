#include<stdio.h>
#include<string.h>

struct book{
 char Title[30];
 char author[30];
 char ISBN[30];
 int publicationyear;
 float price;
 }book1;
 int main (){
 strcpy(book1.Title,"Introduction to programming");
 strcpy(book1.author,"John Smith");
 strcpy(book1.ISBN,"9780131103627");
 int publicationyear=2022;
 float price=49.99;
 
 
 
 
 
 printf("Title:%s\n",book1.Title);
 printf("Author:%s\n",book1.author);
 printf("ISBN no:%s\n",book1.ISBN);
 printf("year published:%d\n",publicationyear);
 printf("The price is :%.2f",price);
 
 return 0;
 }
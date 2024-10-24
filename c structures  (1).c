//c structures 
#include<stdio.h>
#include<string.h>

struct book{
 char Title[30];
 char author[30];
 char ISBN[30];
 int publicationyear;
 float price;
 }book1;
 int main (){/*
 strcpy(book1.Title,"Introduction to programming");
 strcpy(book1.author,"John Smith");
 strcpy(book1.ISBN,"9780131103627");
 int publicationyear=2022;
 float price=49.99;*/
 
 printf("Enter the book name",book1.Title);
 scanf("%s",book1.Title);
 
 printf("Enter the author",book1.author);
 scanf("%s",&book1.author);
 
 printf("input the ISBN",book1.ISBN);
 scanf("%s",&book1.ISBN);
 
 printf("Enter year of publication",book1.publicationyear);
 scanf("%d",&book1.publicationyear);
 
 printf("Enter the price",book1.price);
 scanf("%f",&book1.price);
 
 
 
 
 printf("Title:%s\n",book1.Title);
 printf("Author:%s\n",book1.author);
 printf("ISBN no:%s\n",book1.ISBN);
 printf("year published:%d\n",book1.publicationyear);
 printf("The price is :%.2f",book1.price);
 
 return 0;
 }
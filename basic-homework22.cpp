#include <stdio.h> 
#include <stdlib.h>

struct servitor

{
   char m[8],q[12];
   int g,w,h;
};

void calc(struct servitor []); 
int main(void)

{

   struct servitor emp[4];

   int i=0;

	   printf("                 工讀生資料                \n");
	   printf("-------------------------------------------------\n");

   do 
   { 
	   printf("請輸入第%d位的編號,姓名,時薪,工作時數:", i+1); 

       scanf(" %s %s %d %d", emp[i].m, emp[i].q, &emp[i].g, &emp[i].w);

       i++;

   } 
   while (i<4);

   calc(emp);

   printf("月收入總表：\n");

   for (i=0; i<4; i++)

      printf("編號：%s 姓名：%s　月收入: %d\n",emp[i].m, emp[i].q, emp[i].h);

   system("pause"); 
   
   return 0;

}

void calc(struct servitor p[])

{

    int i;

    for (i=0; i<4; i++)

       p[i].h=p[i].g*p[i].w;

}

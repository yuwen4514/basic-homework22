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

	   printf("                 �uŪ�͸��                \n");
	   printf("-------------------------------------------------\n");

   do 
   { 
	   printf("�п�J��%d�쪺�s��,�m�W,���~,�u�@�ɼ�:", i+1); 

       scanf(" %s %s %d %d", emp[i].m, emp[i].q, &emp[i].g, &emp[i].w);

       i++;

   } 
   while (i<4);

   calc(emp);

   printf("�리�J�`��G\n");

   for (i=0; i<4; i++)

      printf("�s���G%s �m�W�G%s�@�리�J: %d\n",emp[i].m, emp[i].q, emp[i].h);

   system("pause"); 
   
   return 0;

}

void calc(struct servitor p[])

{

    int i;

    for (i=0; i<4; i++)

       p[i].h=p[i].g*p[i].w;

}

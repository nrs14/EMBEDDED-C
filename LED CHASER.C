#include<AT89S52.h>
void wait(void)
{
int i;
for(i=0;i<5;i++)
{
}
}
void main()
{
int j;
for(j=0;;j++)
{
P2_0=0;
wait();
P2_0=1;

P2_1=0;
wait();
P2_1=1;

P2_2=0;
wait();
P2_2=1;

P2_3=0;
wait();
P2_3=1;

P2_4=0;
wait();
P2_4=1;

P2_5=0;
wait();
P2_5=1;

P2_6=0;
wait();
P2_6=1;

P2_7=0;
wait();
P2_7=1;

}
}




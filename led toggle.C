#include<AT89S52.h>
void wait(void)
{
int i;
for(i=0;i<100;i++)
{}
}
void main()
{
while(1)
{
P2_0=0;
wait();
P2_0=1;
wait();
}
}


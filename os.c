#include<stdio.h>
int main()
{
  float avwt;
  int i,j,num,pt[20],wt[20],twt=0,pr[20],tmp1;
  char pa[10][5],tmp[5];
  printf("enter the no of process you want :-");
  scanf("%d",&num);
  for(i=0;i<num;i++)
  {
    printf("enter the process %d name:- ",i+1);
    scanf("%s",&pa[i]);
    printf("enter time requiered for process:- ");
    scanf("%d",&pt[i]);
    printf("enter priority:");
    scanf("%d",&pr[i]);
  }
 for(i=0;i<num-1;i++)
 {
 for(j=i+1;j<num;j++)
 {
    if(pr[i]>pr[j])
 {
   temp1=pr[i];
   pr[i]=pr[j];
   pr[j]=temp1;
   temp1=pt[i];
   pt[i]=pt[j];
   pt[j]=temp1;
   strcpy(temp,pa[i]);
   strcpy(pa[i],pa[j]);
   strcpy(pa[j],tmp);
  }
  }
  }
 wt[0]=0;
  for(i=1;i<n;i++)
  {
   wt[i]=wt[i-1]+p[i-1];
   twt=twt+wt[i];
  }   
   avwt=(float)twt/num;   
   printf("process_name\t process_time\t priority\t waiting_time\n");
for(i=0;i<num;i++)  
{
   printf(" %s\t %d\t %d\t %d\n ",p[i],pt[i],pr[i],wt[i]);
}
  printf("total waiting time=%d\n avg waiting time=%f",tot,avg);
  return 0;
}

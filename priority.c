#include <stdio.h>

int main()
{
    int n, i, time = 0, completed = 0;
    
  //  printf("Enter number of processes: ");
    scanf("%d", &n);

    char pid[n][5];
    int at[n], bt[n], pr[n];
    int rt[n], ct[n], wt[n], tat[n];
    int isCompleted[n];

    for(i = 0; i < n; i++)
        isCompleted[i] = 0;

  //  printf("Enter ProcessID ArrivalTime BurstTime Priority:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%s %d %d %d", pid[i], &at[i], &bt[i], &pr[i]);
        rt[i] = bt[i];
    }








  

    return 0;
}

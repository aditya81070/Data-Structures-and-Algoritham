#include<stdio.h>

int main () {
  int t, temp1, temp2, lead=0, winner;
  scanf("%d", &t);
  int p[t], q[t];
  scanf("%d%d", &p[0], &q[0]);
  for(int i = 1; i<t; i++) {
    scanf("%d%d", &temp1, &temp2);
    p[i] = p[i-1]+temp1;
    q[i] = q[i-1]+temp2;
  }
 for(int i = 0; i<t; i++) {
   if (p[i] <= q[i] && q[i] - p[i] >lead) {
     winner = 2;
     lead = q[i] - p[i];
   } else if (p[i] > q[i] && p[i] - q[i] >lead) {
     winner = 1;
     lead = p[i] - q[i];
   }
 }
 printf("%d %d", winner, lead);
 return 0;
}
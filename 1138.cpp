//URI 1138
//Imran Nazir Emon

#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define MX 10000000
#define HI printf("HI")
#define pass printf("PASS")
#define sc scanf
#define pf printf

#define sc2(a, b) scanf("%d%d", &a, &b)
#define fr(i, a, n) for(int i = (a); i < (n); i++)

using namespace std;

int a, b, c, d, e, j, res[10];
int arr[9] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000};

void calc();
void calc2();

int main(int argc, char const *argv[]){
	
	 while(sc2(b, a) && (a || b)){
 	 memset(res, 0, 40);
 	 b--;
 	 calc();
 	 calc2();
 	 printf("%d", res[0]);
 	 fr(i, 1, 10)
  	 printf(" %d", res[i]);

       	 printf("\n");
	}
    return 0;
}

void calc(){
      for(j = 8; j >= 0; j--){
	 if(a >= arr[j]){
 	 c = a / arr[j], d = a % arr[j], e = c % 10, c /= 10;
	 fr(i, 0, e)
   	 res[i] += arr[j] * (c + (i ? 1 : 0));
	 res[e] += arr[j] * (c - (e ? 0 : 1)) + d + 1;

      	 fr(i, (e + 1), 10)
   	 res[i] += arr[j] * c;
  }
 }
}

void calc2(){
	for(j = 8; j >= 0; j--){
	  if(b >= arr[j]){
  	  c = b / arr[j], d = b % arr[j], e = c % 10, c /= 10;
    	  fr(i, 0, e)
    	  res[i] -= arr[j] * (c + (i ? 1 : 0));

	  res[e] -= arr[j] * (c - (e ? 0 : 1)) + d + 1;
	  fr(i, (e + 1), 10)
   	  res[i] -= arr[j] * c;
  }
 }
}

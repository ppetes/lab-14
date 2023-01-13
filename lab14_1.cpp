#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}
void stat(const double A[],int n ,double B[]){
double sum1 = 0;
double sum2 = 0;
double sum3 = 0;
double sum4 = 1;
double max = 0,min = 1;
double gm;
    for(int i = 0;i<n;i++){
        sum1 += A[i];
        B[0] = sum1/n;
    }
   for(int i = 0;i<n;i++){
   double sd;
        sum2 += pow(A[i],2);
        sd = sqrt((sum2/n)-pow(B[0],2));
        B[1] = sd;
    }
     for(int i = 0;i<n;i++){
        
       sum4 *= A[i];}
       gm = pow(sum4,(double)1/n);
        B[2] = gm;
    
    
      for(int i = 0;i<n;i++){
        double hn;
       sum3 += 1/A[i];
       hn = n/sum3;
        B[3] = hn;
    }
     for(int i = 0;i<n;i++){
        
        if(A[i]>max) max=A[i];
        if(A[i]<min) min=A[i];
       B[4] = max;
       B[5] = min;
    }
    
    
    }
    
    
    
    
    
    













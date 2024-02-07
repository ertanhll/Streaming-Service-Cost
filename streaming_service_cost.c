
#include <stdio.h>


double streaming_a(int a);
double streaming_b(int b);
double streaming_c(int c);


int main() {
    
    double cost;
    int device_number;
    char service_type;
    
    printf("Enter number of devices and streaming service: ");
    scanf("%d %c",&device_number, &service_type);
    
    if(service_type =='A') cost = streaming_a(device_number);
    else if(service_type == 'N') cost = streaming_b(device_number);
    else if(service_type == 'H') cost = streaming_c(device_number);
    else cost =0;
   
    printf("yearly membership cost for %c: %.2lf$ \n",service_type, cost);

}

double streaming_a(int a){
    
    if(a<=2) return 12*7.99;
    else return 12*12.99;
}

double streaming_b(int b){
   
    if(b<=3) return 12*12.99;
    else if(b>=4 && b<7) return 12*14.99;
    else return 12*24.99;
}

double streaming_c(int c){
    
    if (c<=4) return 12*14.99;
    else if(c>=5 && c<10) return 12*24.99;
    else return 12*34.99;
}



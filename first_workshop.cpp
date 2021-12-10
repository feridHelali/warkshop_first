#include<iostream>

using namespace std;

int add(int a,int b){

    printf("i m processing in add");
    cout << "Hello "<< endl;
    return a+b;
}


int main(){
    printf("Hello :)\n");
    
    int x=5,y=18;
    int p=x*y;
    
    printf("%d \n",add(x,y));
    printf("%d \n",p);

     x=10;y=12;
    int p2=x*y;

    printf("%d \n",p2);

    printf("End of program :)\n");


    return 0;
}


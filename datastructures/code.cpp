#include <iostream> // c++ libray for cin cout
#include <stdio.h>  // c library for printf scanf
#include <stdlib.h> // for calloc and malloc
using namespace std;

struct rectangle{
        int length; 
        int breadth;
};

struct shape{
    int num_of_sides;
    int area;
};

int main(){
    // // arrays in c
    // int a[5] = {1,2,3,4,5};
    // printf("%d", sizeof(a));
    // printf("\n");
    // printf("%d", sizeof(string));
    // printf("\n");
    // a[0] = 1;
    // for(int i=0; i<5; i++)
    //     printf("%d", a[i]);
    // return 0;    

    // int n;
    // cout << "enter size";
    // cin >> n;
    // int a[n];
    // a[3] = 5;
    // for (int i:a){
    //     cout << i << endl;
    //     cout <<"\n";
    // }

    // //structures
    // struct rectangle r = {19,5};
    // r.length = 10;
    // r.breadth = 5;
    // printf("Area of rectangle %d", r.length*r.breadth);
    // struct shape shape[5];
    
    //pointers
    int a = 5;
    int *p = &a;
    printf("%d", p);

    p = (int*)malloc(5 * sizeof(int));
    p = new int[5];

    return 0;    
    
}
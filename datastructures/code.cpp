#include <iostream> // c++ libray for cin cout
#include <stdio.h>  // c library for printf scanf
#include <stdlib.h> // for calloc and malloc
using namespace std;

// struct rectangle{
//         int length; 
//         int breadth;
// };

// struct shape{
//     int num_of_sides;
//     int area;
// };

// void swap(int* x, int* y){
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
// }

// void swap_plus(int &x, int &y){
//     int temp;
//     temp = x;
//     x = y;
//     y = temp;
// }

// void funarray(int *A, int n){
//     for(int i=0; i<n; i++){
//         A[i]++;
//     }
// }


// int* returnarr(int n){
//     int* A = (int*)malloc(n * sizeof(int));
//     for(int i=0; i<n; i++){
//         A[i] = i;
//     }
//     return A;
// }

// class Rectangle{
// public:
//     int l;
//     int b;
//     // void initialize(int length, int breadth){
//     //     length = l;
//     //     breadth = b;
//     // }
//     Rectangle(int length, int breadth){
//         l = length;
//         b = breadth;
//     }

//     int perimeter(){
//         return 2*(l+b);
//     }
//     int area(){
//         return l*b;
//     }
// };

// //templates
// template<class T>
// class Arithmetic{
// private:
//     T a;
//     T b;
// public:
//     Arithmetic(int a, int b);
//     T add();
//     T sub();
// };

// template<class T>
// Arithmetic<T>::Arithmetic(int a,int b){
//     this->a = a;
//     this->b = b;
// }

// template<class T>
// T Arithmetic<T>::sub(){
//     return a-b;
// }

// template<class T>
// T Arithmetic<T>::add(){
//     return a+b;
// }

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
    
    // //pointers
    // int a = 5;
    // int *p = &a;
    // printf("%d", p);

    // p = (int*)malloc(5 * sizeof(int)); //c code
    // p = new int[5]; //c++ code
    // free(p); //c code
    // delete [] p; //c++ code

    // //references (c++ exclusive)
    // int a = 6;
    // int &r = a;
    // r = 5;
    // printf("%d\n", r);
    // printf("%d", a);
    // return 0;    

    // //pointer to structures
    // struct rectangle* p;
    // p = &r;
    // (*p).length = 6;
    // (*p).breadth = 45;
    // printf("\nArea of rectangle %d", r.length*r.breadth);
    // p->length = 17;
    // p->breadth = 20;
    // printf("\nArea of rectangle %d", r.length*r.breadth);
    // struct rectangle *dyn = (struct rectangle*)malloc(sizeof(struct rectangle));
    // dyn->length=30;
    // dyn->breadth=2;
    // printf("\nArea of rectangle %d", dyn->length*dyn->breadth);

    // //functions
    // int a = 10;
    // int b = 5;
    // printf("a and b are - %d %d - done", a,b);
    // swap(&a,&b);
    // printf("\na and b are - %d %d - done", a,b);
    // swap_plus(a,b);
    // printf("\na and b are - %d %d - done", a,b);
    // return 0;

    //funarray
    // int A[] = {1,2,3,4,5};
    // funarray(A, sizeof(A)/sizeof(int));
    // for(int i=0; i<5; i++){
    //     printf("%d", A[i]);
    // }
    // return 0;

    // int* B = returnarr(5);
    // for(int i=0; i<5; i++){
    //     printf("%d", B[i]);
    // }
    
    // //class practice
    // Rectangle r(10,5);
    // // r.initialize(10,5);
    // int p = r.perimeter();
    // printf("%d", p);
    // // printf("%d",r.perimeter());
    // // printf("%d",r.area());

    // //templates
    // Arithmetic<int> objab(10,5);
    // printf("%d", objab.add());

    

    return 0;
}
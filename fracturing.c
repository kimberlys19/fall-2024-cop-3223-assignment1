#include <stdio.h>
#include <math.h>
#define PI 3.14159
#define g 9.81 

// Name: Kimberly Soberanis
// UCFID: 5675144

// The entire code is my own work. I did not use any external resources. 
// The ideas and examples I used to create my code come from the knowledge 
// I have gained from the material presented in this class. 


// Distance: Where x and y represent coordinates in a 2-D plane 
// This formula is for the distance between two points
double calculateDistance(int x1, int x2, int y1, int y2) {
    double Distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    return Distance;
}

// Perimeter: Where l represents length and w represents width
// This formula is for the perimeter of a rectangle
double calculatePerimeter(int l1, int l2, int w1, int w2) {
    double Perimeter = (l1 + l2 + w1 + w2); 

    return Perimeter; 
}

// Area: Where PI represents a value of 3.14159 and r represents radius 
// This formula is for the area of a circle
double calculateArea(int r) {
    double Area = PI * pow(r, 2);

    return Area; 
}

// Width: Where A represents Area and h represents length
// This formula is to know the width of a rectangle
double calculateWidth(int A, int h) {
    double Width = A/h;
    
    return Width;
}

// Height: Where v represents initial velocity, t represents time and g represents gravity
// This formula is for the maximum height of an object falling from the tallest building in the city
double calculateHeight(int v, int t) {
    double Height = (v * t) - 1/2* (g) * (pow(t, 2));

    return Height;
}

// Bonus: 
double askForUserInput(int B) {
    double Bonus = B;

    return Bonus; 
}


int main(int argc, char ** argv) {
 
// Distance
    int x1; 
    int x2;
    int y1; 
    int y2; 

    printf("Enter x1: "); 
    scanf("%d", &x1);
    
    printf("Enter y1: "); 
    scanf("%d", &y1); 

    printf("Enter x2: "); 
    scanf("%d", &x2);

    printf("Enter y2: "); 
    scanf("%d", &y2); 

    printf("Point #1 entered: x1 = %d; y1 = %d \n", x1, y1); 
    printf("Point #2 entered: x2 = %d; y2 = %d \n", x2, y2); 
    
    double giveMeMyDistance = calculateDistance(x1, x2, y1, y2);
    printf("The distance between the two points is - %lf\n", giveMeMyDistance); 

// Perimeter
    int l1;
    int w1; 
    int l2; 
    int w2;

    printf("Enter length 1: "); 
    scanf("%d", &l1);
    
    printf("Enter width 1: "); 
    scanf("%d", &w1); 
    
    printf("Enter length 2: "); 
    scanf("%d", &l2);

    printf("Enter width 2: "); 
    scanf("%d", &w2); 

    printf("Point #1 entered: l1 = %d; w1 = %d \n", l1, w1);
    printf("Point #2 entered: l2 = %d; w2 = %d \n", l2, w2); 

    double giveMeMyPerimeter = calculatePerimeter(l1, l2, w1, w2);
    double perimeter_function = 1;
    printf("The perimeter of the city encompassed by your request is -  %lf\n", giveMeMyPerimeter);
    printf("On a scale of 1 to 5 (where 5 is hard) the difficulty of performing this function was - %lf\n", perimeter_function);
   
// Area 
    int r; 
    
    printf("Enter radius of circle: "); 
    scanf("%d", &r);
    
    printf("Radius entered: r = %d \n", r); 

    double giveMeMyArea = calculateArea(r);
    double Area_function = 2;
    printf("The area of the city encompassed by your request is - %lf\n", giveMeMyArea);
    printf("On a scale of 1 to 5 (where 5 is hard) the difficulty of performing this function was - %lf\n", Area_function );
    
// Width
    int A; 
    int h; 

    printf("Enter Area: "); 
    scanf("%d", &A);
    
    printf("Enter length: "); 
    scanf("%d", &h); 
    
    printf("Area entered: A = %d \n", A);
    printf("Length entered: h = %d \n", h); 

    double giveMeMyWidth = calculateWidth(A, h);
    double Width_function = 2;

    printf("The width of the city encompassed by your request is - %lf\n", giveMeMyWidth);
    printf("On a scale of 1 to 5 (where 5 is hard) the difficulty of performing this function was - %lf\n", Width_function );

// Height
    int v; 
    int t; 

    printf("Enter initial velocity: "); 
    scanf("%d", &v);
    
    printf("Enter time: "); 
    scanf("%d", &t); 
    
    printf("velocity entered: v = %d \n", v);
    printf("time entered: t = %d \n", t); 

    double giveMeMyHeight = calculateHeight(v, t);
    double Height_function = 3;

    printf("The height of the city encompassed by your request is - %lf\n", giveMeMyHeight);
    printf("On a scale of 1 to 5 (where 5 is hard) the difficulty of performing this function was - %lf\n", Height_function);
    
// Bonus 
   
   int B;

   printf("Enter a value: ");
   scanf("%d", &B);

   double User_Input = askForUserInput(B);
   printf("User's typed value... %lf\n", User_Input);

    return 0; 
}
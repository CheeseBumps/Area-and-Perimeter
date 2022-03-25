 #include <stdio.h>
 #include <math.h>
 
 void circle()
 {  
  const double pi=3.1415926535;
  double perimeter,radius;
  double area;

  printf("Enter radius of your circle:\n");
  scanf("%lf",&radius); //takes userinput
  perimeter=2*pi*radius; //calculates perimeter
  printf("The perimeter of your circle is %.2lf ", perimeter);
  area=pi*radius*radius; //calculates area
  printf("\nThe area of your circle is %.2lf ", area);


 }

 void triangle(double side1,double side2,double area,double angle)
 {  
  int reply;
  //asking wheter user wants to use angle method or base&height method
 
    do {           //making sure reply is only 1 or 2
    printf("Do you want to find the area using\nbase and height(1)\nor by entering\ntwo sides and the angle(2) between them?\nEnter 1 for first method and\n2 for the second one\n");
    scanf("%d",&reply);
    if (reply!=1 && reply!=2){    
       printf("Please type either '1' or '0'\n ");
       }
       
   }
   while (reply!=1 && reply!=2);

   if (reply==1){                      //base and side method
   printf("Enter side1: ");
   scanf("%lf",&side1);
   printf("Enter side2: ");
   scanf("%lf",&side2);
   area=0.5*side1*side2;
   printf("The area of the trangle is %0.2lf",area);
   }
   else if(reply==2){                          //angle method
   printf("Enter side1: ");
   scanf("%lf",&side1);
   printf("Enter side2: ");
   scanf("%lf",&side2);
   printf("Enter the angle between the two sides ");
   scanf("%lf",&angle);
   area=0.5*side1*side2*sin(angle);
   printf("The area of the trangle is %0.2lf",area);    //output will be 2dp
   }

 }

 void square(double side1,char shape)        //reusing shape variable to check if user wants to calculate area or perimeter
 {
   printf("Do you want to calculate area or perimeter? Type 'a' or 'p'\n");  //area or perimeter?
   scanf(" %c", &shape);          //space before %c so that scanf doesn't take white space as input
   
    if (shape=='a'){
      printf("Enter one side:\n");            //prompt
      scanf(" %lf", &side1);                   //takes input
      side1 = (side1 * side1);               //calculates area
      printf("\nThe area is %.2lf", side1);
    }
    else if (shape=='p')
    {
      printf("Enter one side:\n ");            //prompt
      scanf(" %lf", &side1);
      side1 = 4 * side1;
      printf("\nThe perimeter is: %.2lf", side1);
    }
    else
    {
      printf("Invalid input! ");
    }
    
  }

 void rectangle(double side1,double side2,char shape)
 {
   printf("Do you want to calculate area or perimeter? Type 'a' or 'p'\n");  //area or perimeter?
   scanf(" %c", &shape);          //space before %c so that scanf doesn't take white space as input
   
    if (shape=='a'){
      printf("Enter one side:\n");            //prompt
      scanf(" %lf", &side1);                   //takes input
      printf("Enter another side:\n");           
      scanf(" %lf", &side2);
      side1 = (side1 * side2);               //calculates area
      printf("\nThe area is %.2lf", side1);
    }
    else if (shape=='p')
    {
      printf("Enter one side:\n ");            //prompt
      scanf(" %lf", &side1);
      printf("Enter another side:\n ");         
      scanf(" %lf", &side2);
      side1 = 2 * side1+ 2 * side2;
      printf("\nThe perimeter is: %.2lf", side1);
    }
    else
    {
      printf("Invalid input! ");
    }
    
  }

  //main function
  int main(void){
    double side1,side2,area,angle;
    char shape;
    printf("Which shape?\nSquare:(s)  Triangle(t)  Circle(c) Rectangle(r) "); //asks which shape
    scanf(" %c", &shape);             
    switch (shape)             // case statement to check which shape
    {
    case 's':
      square(side1,shape);
      break;
    case 't':
      triangle(side1,side2,area,angle);
      break;
    case 'c':
      circle();
      break;
    case 'r':
      rectangle(side1,side2,shape);
      break;
    default:
      printf("\nInvalid input!");
      break;
    }



    return 0;
 } 


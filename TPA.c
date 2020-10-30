/*
I Gusti Ngurah Agung Krisna Adhitya, 2005551072; https://github.com/Agung-Krisna
This program will become visible to the public in GitHub on October 30th 2020.
===================================DESC===================================
TPA = Tools to PWN them All.
Equiped with error-free and hassle-free basic 3D shape calculator
and some miscellaneous things too...
===================================TIPS===================================
If you're having some problems while compiling this program, please use the "-lm" flag
while compiling the program.

example:
"gcc TPA.c -o TPA.out -lm"

*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int calculate_volume();
int calculate_surface();
int cube_volume();
int cube_surface();
int sphere_volume();
int sphere_surface();
int prism_volume();
int prism_surface();
int box_volume();
int box_surface();
int cylinder_volume();
int cylinder_surface();
int pyramid_volume();
int pyramid_surface();
int cone_volume();
int cone_surface();
int miscellaneous();
int live();
int time_till_death();
int time_now();

int main(){
    int choice;
    //int num_choice;
    //double test;
    printf ("\t========|TPA|========\n");
    printf ("|T|ools to |PWN| them |A|ll (Mathematics Edition)\n\n\n");

    printf ("What do you want to calculate?\n");
    printf ("(1) Volume\n");
    printf ("(2) Surface Area\n");
    printf ("(999) None of the above, surprise me\n");
    scanf ("%d", &choice);
    if (choice == 1){
        printf ("==============Volume Calculator==============");
        printf ("\n");
        calculate_volume();
    }
    else if (choice == 2){
        printf ("===========Surface Area Calculator===========");
        printf ("\n");
        calculate_surface();
    }
    else if (choice == 999){
        printf ("================Miscellaneous================");
        printf ("\n");
        printf ("Interesting Choice...\n");
        miscellaneous();
    }
    else{
        printf ("Please check your input again\n");
        return EXIT_FAILURE;
    }
    return 0;
}

int calculate_volume(){
    int choices;
        printf ("Enter the 3D Shape that you want to calculate:\n");
        printf ("(1) Cube\n");
        printf ("(2) Sphere\n");
        printf ("(3) Prism\n");
        printf ("(4) Box\n");
        printf ("(5) Cylinder\n");
        printf ("(6) Pyramid\n");
        printf ("(7) Cone\n");

        scanf ("%d", &choices);
        if (choices <= 0 || choices > 7){
            printf ("Please check your input again\n");
            return EXIT_FAILURE;
        }
        switch (choices){
            case 1:
                cube_volume();
                break;
            case 2:
                sphere_volume();
                break;
            case 3:
                prism_volume();
                break;
            case 4:
                box_volume();
                break;
            case 5:
                cylinder_volume();
                break;
            case 6:
                pyramid_volume();
                break;
            case 7:
                cone_volume();
                break;
        }
    return 0;
}
int calculate_surface(){
    int choices;
        printf ("Enter the 3D Shape that you want to calculate:\n");
        printf ("(1) Cube\n");
        printf ("(2) Sphere\n");
        printf ("(3) Prism\n");
        printf ("(4) Box\n");
        printf ("(5) Cylinder\n");
        printf ("(6) Pyramid\n");
        printf ("(7) Cone\n");

        scanf ("%d", &choices);
        if (choices <= 0 || choices > 7){
            printf ("Please check your input again\n");
            return EXIT_FAILURE;
        }
        switch (choices){
            case 1:
                cube_surface();
                break;
            case 2:
                sphere_surface();
                break;
            case 3:
                prism_surface();
                break;
            case 4:
                box_surface();
                break;
            case 5:
                cylinder_surface();
                break;
            case 6:
                pyramid_surface();
                break;
            case 7:
                cone_surface();
                break;
        }
    return 0;
}

int cube_volume(){
    double side;
    int converter;
    double value;
    printf ("Enter the length of the side");
    scanf ("%lf", &side);
    if ((float)side <= 0){//added error handling
        printf ("Please check again the number that you want to calculate.\n");
        return EXIT_FAILURE;//exit the program if the error occurs
    }
    value = pow(side, 3);
    converter = (int) value;
    if (value - converter == 0){
        printf ("The volume of the cube is %d", converter);
        printf("\n");
    }
    else {
        printf ("The volume of the cube is %.3f", value);
        printf("\n");
    }
    return 0;
}

int cube_surface(){
    double side;
    int converter;
    double value;
    printf ("Enter the length of the side:\n");
    scanf("%lf", &side);
    if ((float)side <= 0){//added error handling
        printf ("Please check again the number that you want to calculate.\n");
        return EXIT_FAILURE;//exit the program if the error occurs
    }
    value = 6 * (pow (side, 2));
    converter = (int) value;
    if (value - converter == 0){
        printf ("The surface area of the cube is %d", converter);
        printf("\n");
    }
    else {
        printf ("The surface area of the cube is %.3f", value);
        printf("\n");
    }
    return 0;
}

int sphere_volume(){
    double radius;
    double phi = 3.141592;
    int converter;
    double value;
    double division = 1.333333333;
    printf ("Enter the radius of the sphere:\n");
    scanf ("%lf", &radius);

    if ((float)radius <= 0){//added error handling
        printf ("Please check again the number that you want to calculate.\n");
        return EXIT_FAILURE;//exit the program if the error occurs
    }
    value = division * phi * (pow(radius, 3));
    converter = (int) value;
     if (value - converter == 0){
        printf ("The volume of the sphere is %d", converter);
        printf("\n");
    }
    else {
        printf ("The volume of the sphere is %.3f", value);
        printf("\n");
    }
    return 0;
}

int sphere_surface(){
    double radius;
    double phi = 3.141592;
    int converter;
    double value;
    printf ("Enter the radius of the sphere:\n");
    scanf ("%lf", &radius);

    if ((float)radius <= 0){//added error handling
        printf ("Please check again the number that you want to calculate.\n");
        return EXIT_FAILURE;//exit the program if the error occurs
    }
    value = 4 * phi * pow(radius, 2);
    converter = (int) value;
     if (value - converter == 0){
        printf ("The surface area of the sphere is %d", converter);
        printf("\n");
    }
    else {
        printf ("The surface area of the sphere is %.3f", value);
        printf("\n");
    }
    return 0;
}

int prism_volume(){
    double base = 0;
    double depth = 0;
    double value;
    int converter;

    printf ("Enter prism base area:\n");
    scanf ("%lf", &base);

    //it would result an error if the user input something other than numbers
    if ((float)base <= 0){//added the first error handling
        printf ("Please check again the number that you want to calculate.\n");
        return EXIT_FAILURE;//exit the program if the error occurs
    }
    else if ((float)base >= 1){
        printf ("Enter the prism depth:\n");
        scanf ("%lf", &depth);
        }

    if ((float)depth <= 0){ //added error handling if one of the variable is zero
        printf ("Please check again the number that you want to calculate.\n");
    }
    else if(depth >= 1 && base >= 1){
        value = base * depth;
        converter = (int) value; //type casting from double to int
        if (value == 0){//further check the input, for maximum security
            printf ("Please check again the number that you want to calculate.\n");
        }
        else if (value - converter == 0){//print out integers if it's not in decimal
            printf ("The volume of the prism is %d\n", converter);
        }
        else {//print out the decimal number with accuracy 3 numbers behind the comma
        printf ("The volume of the prism is %.3f\n", value);
        }
    }
    return (0);//return if the program ran successfully
}

int prism_surface(){
    double base;
    double perimeter;
    double depth;
    double value;
    int converter;
    printf ("Enter prism base area:\n");
    scanf ("%lf", &base);

    //it would result an error if the user input something other than numbers
    if ((float)base <= 0){//added the first error handling
        printf ("Please check again the number that you want to calculate.\n");
        return EXIT_FAILURE;//exit the program if the error occurs
    }
    else if ((float)base >= 1){
        printf ("Enter the prism perimeter:\n");
        scanf ("%lf", &perimeter);
        printf ("Enter the prism depth:\n");
        scanf ("%lf", &depth);
        }

    if ((float)depth <= 0 || (float)perimeter <= 0){ //added error handling if one of the variable is zero
        printf ("Please check again the number that you want to calculate.\n");
    }
    else if(depth >= 1 && base >= 1 && perimeter >= 1){
        value = (2 * base) + (perimeter * depth);
        converter = (int) value; //type casting from double to int
        if (value == 0){//further check the input, for maximum security
            printf ("Please check again the number that you want to calculate.\n");
        }
        else if (value - converter == 0){//print out integers if it's not in decimal
            printf ("The surface area of the prism is %d\n", converter);
        }
        else {//print out the decimal number with accuracy 3 numbers behind the comma
            printf ("The surface area of the prism is %.3f\n", value);
        }
    }
    return (0);//return if the program ran successfully
}

int box_volume(){
    double length;
    double width;
    double depth;
    double value;
    int converter;
    printf ("Enter the length of the box:\n");
    scanf ("%lf", &length);
    if ((float)length <= 0){//added error handling
        printf ("Please check again the number that you want to calculate.\n");
        return EXIT_FAILURE;//exit the program if the error occurs
    }
    printf ("Enter the width of the box:\n");
    scanf ("%lf", &width);
    if ((float)width <= 0){
        printf ("Please check again the number that you want to calculate.\n");
        return EXIT_FAILURE;
    }
    printf ("Enter the depth of the box:\n");
    scanf ("%lf", &depth);
    if ((float)depth <= 0){
        printf ("Please check again the number that you want to calculate.\n");
        return EXIT_FAILURE;
    }
    value = length * width * depth;
    converter = (int) value;
    if (value - converter == 0){
        printf ("The volume of the box is %d", converter);
        printf("\n");
    }
    else {
        printf ("The volume of the box is %f", value);
        printf("\n");
    }
    return 0;
}

int box_surface(){
    double length;
    double width;
    double depth;
    double value;
    int converter;

    printf ("Enter the length of the box:\n");
    scanf ("%lf", &length);
    if ((float)length <= 0){//added error handling
        printf ("Please check again the number that you want to calculate.\n");
        return EXIT_FAILURE;//exit the program if the error occurs
    }
    printf ("Enter the width of the box:\n");
    scanf ("%lf", &width);
    if ((float)width <= 0){
        printf ("Please check again the number that you want to calculate.\n");
        return EXIT_FAILURE;
    }
    printf ("Enter the depth of the box:\n");
    scanf ("%lf", &depth);
    if ((float)depth <= 0){
        printf ("Please check again the number that you want to calculate.\n");
        return EXIT_FAILURE;
    }
    value = (2 * (length * width)) + (2 * (length * depth)) + (2 * (width *depth));
    converter = (int) value;
    if (value - converter == 0){
        printf ("The surface area of the box is %d", converter);
        printf("\n");
    }
    else {
        printf ("The surface area of the box is %f", value);
        printf("\n");
    }
    return 0;
}

int cylinder_volume(){
    double radius;
    double height;
    double phi = 3.141592;
    int converter;
    double value;

    printf ("Enter the radius of the cylinder:\n");
    scanf ("%lf", &radius);

    if ((float)radius <= 0){//added error handling
        printf ("Please check again the number that you want to calculate.\n");
        return EXIT_FAILURE;//exit the program if the error occurs
    }

    printf ("Enter the height of the cylinder:\n");
    scanf ("%lf", &height);

    if ((float)height <= 0){
        printf ("Please check again the number that you want to calculate.\n");
        return EXIT_FAILURE;
    }

    value = phi * pow(radius, 2) * height;
    converter = (int) value;
     if (value - converter == 0){
        printf ("The volume of the cylinder is %d", converter);
        printf("\n");
    }
    else {
        printf ("The volume of the cylinder is %.3f", value);
        printf("\n");
    }
    return 0;
}

int cylinder_surface(){
    double radius;
    double height;
    double phi = 3.141592;
    int converter;
    double value;

    printf ("Enter the radius of the cylinder:\n");
    scanf ("%lf", &radius);

    if ((float)radius <= 0){//added error handling
        printf ("Please check again the number that you want to calculate.\n");
        return EXIT_FAILURE;//exit the program if the error occurs
    }

    printf ("Enter the height of the cylinder:\n");
    scanf ("%lf", &height);

    if ((float)height <= 0){
        printf ("Please check again the number that you want to calculate.\n");
        return EXIT_FAILURE;
    }

    value = (2 * phi * pow(radius, 2)) + (2 * phi * radius * height);
    converter = (int) value;
    if (value - converter == 0){
        printf ("The surface area of the cylinder is %d", converter);
        printf("\n");
    }
    else {
        printf ("The surface area of the cylinder is %.3f", value);
        printf("\n");
    }
    return 0;
}

int pyramid_volume(){
    double side_a;
    //double side_b;
    double height;
    double value;
    int converter;
    double division = 0.3333333333;


    printf ("Enter the front side of the square pyramid:\n");
    scanf ("%lf", &side_a);
    if ((float)side_a <= 0){
        printf ("Please check again the number that you want to calculate.\n");
        return EXIT_FAILURE;
    }

    printf ("Enter the height of the square pyramid:\n");
    scanf ("%lf", &height);
    if ((float)height <= 0){
        printf ("Please check again the number that you want to calculate.\n");
        return EXIT_FAILURE;
    }
    value = division * pow(side_a, 2) * height;
    converter = (int)value;
    if (converter - value == 0){
        printf ("The volume of the square pyramid is %d", converter);
        printf("\n");
    }
    else {
        printf ("The volume of the square pyramid is %.3f", value);
        printf("\n");
    }
    return 0;
}

int pyramid_surface(){
    double side_a;
    double side_b;
    double height;
    double value;
    double squared;
    double height_squared;
    int converter;

    printf ("Enter the front side of the square pyramid:\n");
    scanf("%lf", &side_a);

    if ((float)side_a <= 0){
        printf ("Please check again the number that you want to calculate.\n");
        return EXIT_FAILURE;
    }

    printf ("Enter the side of the square pyramid:\n");
    scanf("%lf", &side_b);

    if ((float)side_b <= 0){
        printf ("Please check again the number that you want to calculate.\n");
        return EXIT_FAILURE;
    }

    printf ("Enter the height of the square pyramid:\n");
    scanf ("%lf", &height);

    if ((float)height <= 0){
        printf ("Please check again the number that you want to calculate.\n");
        return EXIT_FAILURE;
    }
    squared = pow(side_a, 2);
    height_squared = pow ((2 * height), 2);
    value = squared + (side_a * sqrt(squared + height_squared));
    converter = (int)value;
    if (value - converter == 0){
        printf ("The surface area of the square pyramid is %d", converter);
        printf("\n");
    }
    else {
        printf ("The surface area of the square pyramid is %.3f", value);
        printf("\n");
    }

    return 0;
}

int cone_volume(){
    double radius;
    double height;
    double phi = 3.141592;
    double value;
    double division = 0.3333333333;
    int converter;

    printf ("Enter the radius of the cone:\n");
    scanf("%lf", &radius);

    if ((float)radius <= 0){
        printf ("Please check again the number that you want to calculate.\n");
        return EXIT_FAILURE;
    }

    printf ("Enter the height of the cone:\n");
    scanf("%lf", &height);

    if ((float)height <= 0){
        printf ("Please check again the number that you want to calculate.\n");
        return EXIT_FAILURE;
    }
    value = division * (phi * pow(radius, 2) * height);
    converter = (int)value;
    if (value - converter == 0){
        printf ("The volume of the cone is %d", converter);
        printf("\n");
    }
    else {
        printf ("The volume of the cone is %.3f", value);
        printf("\n");
    }
    return 0;
}

int cone_surface(){
    char side[100];
    char check[10];
    char *pointer; //I have to use pointer to use strtol because atoi can have undefined responses and I can't risk my program to fail.
    int checker;
    double multi;
    double new_side;
    double radius;
    double height;
    double phi = 3.141592;
    double value;
    int multi_conv;
    int converter;

    strcpy (check, "side");

    printf ("Enter the radius of the cone:\n");
    scanf("%lf", &radius);

    if ((float)radius <= 0){
        printf ("Please check again the number that you want to calculate.\n");
        return EXIT_FAILURE;
    }

    printf ("Enter the side of the cone:\n\n");
    printf ("pro tip: the side of the cone can be calculated\n");
    printf ("by using height and radius of the cone, type 'side' to calculate it.\n");
    scanf ("%s", side);

    checker = strcmp(side, check);

    if (checker == 0){
        printf ("Enter the height of the cone:\n");
        scanf ("%lf", &height);
        multi = pow(radius, 2) + pow(height, 2);
        multi_conv = (int) multi;
        new_side = sqrt (multi);
        value = (phi * pow(radius, 2)) + (phi * radius * new_side);
        converter = (int)value;
        if (value - converter == 0){
            //printf ("The side of the cone is %.0f\n", multi);
            printf ("The surface area of the cone is %d", converter);
            printf("\n");
        }
        else {
            //printf ("The side of the cone is %.2f\n", multi);
            printf ("The surface area of the cone is %.3f", value);
            printf("\n");
        }
        if (multi - multi_conv == 0){
            printf ("The side of the cone is %d\n", multi_conv);
            return EXIT_SUCCESS;
        }
        else {
            printf ("The side of the cone is %.2f\n", multi);
            return EXIT_SUCCESS;
        }
    }
    else {
        new_side = strtol (side, &pointer, 10); //sorry, I have to use pointers, or else, I can't use strtol.
            if ((float)new_side <= 0){
                printf ("Please check again the number that you want to calculate.\n");
                return EXIT_FAILURE;
            }
        value = (phi * pow(radius, 2)) + (phi * radius * new_side);

        converter = (int)value;

        if (value - converter == 0){
            printf ("The surface area of the cone is %d", converter);
            printf("\n");
        }
        else {
            printf ("The surface area of the cone is %.3f", value);
            printf("\n");
        }
        return 0;
    }
}

int miscellaneous(){
    int choices_again;
    printf ("What do you want to calculate then?\n\n");
    printf ("(1) How long do I actually live in this world?\n");
    printf ("(2) How long do I still have time in this world?\n");
    printf ("(3) What time is it now?\n");

    scanf ("%d", &choices_again);


    switch (choices_again){
        case 1:
            live();
            break;
        case 2:
            time_till_death();
            break;
        case 3:
            time_now();
            break;
        default:
            printf ("Please check your input again.\n");
    }
    return 0;
}

int live(){
    double age;
    double days = 365.249989;
    double weeks = 52.17857;
    double value;
    double value_days;
    double value_weeks;
    int seconds_in_year = 31557600;
    printf ("Enter your age:\n");
    scanf ("%lf", &age);
    if ((float)age <= 3){
        printf ("You shouldn't be able to read yet...\nLet alone using my program...\n\n");
        printf ("Access Terminated\n");
        return EXIT_FAILURE;
    }

    if ((float)age >= 115){
        printf ("Wow, you should definitely list yourself as the world's oldest person\n");
        printf ("~~My programs can't count for miracles~~\n");
        return EXIT_FAILURE;
    }

    if ((float)age >= 90){
        printf ("You're definitely older than most humans right now, \nare you sure you're not inputing the wrong number?...\n");
        return EXIT_FAILURE;
    }
    value = age * seconds_in_year;
    value_days = age * days;
    value_weeks = age * weeks;
    printf ("\n");
    printf ("You are %.3f weeks old;\n%.3f days old;\n%.0f seconds old;\nFeeling old now?\n", value_weeks, value_days, value);

    return 0;
}

int time_till_death(){
    double age;
    double general = 71;
    double female = 75.7;
    double male = 73;
    int choice;

    printf ("Enter your gender:");
    printf ("\n");
    printf ("(1) Male");
    printf ("\n");
    printf ("(2) Female");
    printf ("\n");
    printf ("(3) Non-Binary");
    printf ("\n");
    scanf("%d", &choice);

    switch (choice){
        case 1:
            printf ("Enter your age:\n");
            scanf ("%lf", &age);
            printf ("Your life expectancy is %.1f more years", male - age);
            printf ("\n");
            break;
        case 2:
            printf ("Enter your age:\n");
            scanf ("%lf", &age);
            printf ("Your life expectancy is %.1f more years", female - age);
            printf ("\n");
            break;
        case 3:
            printf ("Enter your age:\n");
            scanf ("%lf", &age);
            printf ("Your life expectancy is %.1f more years", general - age);
            printf ("\n");
            break;
        default:
            printf ("Please check your input again.");
            printf ("\n");
    }
    return 0;
}

int time_now(){
    time_t t;//included in time.h header.
    time(&t);

    printf ("Time at the current moment is %s", ctime(&t));//not a primitive data type, so it's harder to work with.

    return 0;
}

//Thank you for reading my code till the end of the line...
//I hope that you're not just scrolling down 'till here...

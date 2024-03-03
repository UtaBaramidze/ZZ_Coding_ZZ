#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <stdio.h>
#include <limits>


// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;
// using text_t = std::string;
// using number_t = int;

// namespace first{
//     int x = 100;
// }
// namespace second{
//     int x = 200;
// }

// void happyBirthday(std::string name, int age){
//     std::cout << "Happy birthday to " << name << '\n';
//     std::cout << "Happy birthday to " << name << '\n';
//     std::cout << "Happy birthday dear " << name << '\n';
//     std::cout << "Happy birthday to " << name << '\n';
//     std::cout << "You are " << age << " Years Old\n";
// }

// double square(double length){
//     return length * length;
// }
// double cube(double length){
//     return length * length * length;
// }

// std::string concatStrings(std::string string1, std::string  string2){
//     return string1 + " " + string2;
// }

// void bakePizza(){
//     std::cout << "Here is Your Pizza!\n";
// }
// void bakePizza(std::string topping1){
//     std::cout << "Here is Your " << topping1 << " Pizza!\n";
// }
// void bakePizza(std::string topping1, std::string topping2){
//     std::cout << "Here is Your " << topping1 << " And " << topping2 << " Pizza!\n";
// }

// void printNum(){
//     int myNum = 2;
//     std::cout << myNum;
// }

// void showBalance(double balance){
//     std::cout << "Your Balance is: $" << balance << '\n' << '\n';
// }
// double deposite(){
//     double amount = 0;
//     std:: cout << "Enter amount to be deposited: ";
//     std:: cin >> amount;
//     if (amount > 0)
//     {
//         return amount;
//     }else{
//         std::cout << "That's not valid amount!!!\n";
//         return 0;
//     }
// }
// double withdraw(double balance){
//     double amount = 0;
//     std::cout << "Enter amount to be withdrown: ";
//     std::cin >> amount;
//     if (amount < 0)
//     {
//         std::cout << "That's not valid amount!!!\n";
//         return 0;
//     }else if (amount > balance)
//     {
//         std::cout << "That's not valid amount!\n";
//         return 0;
//     }else{
//         return amount;
//     }
//     return amount;
// }

void clearInputBuffer(){
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

// char getUserChoise(){
//     char player;
//     std:: cout << "**********************************************\n";
//     std:: cout << "********** Rock-Paper-Scissors Game **********\n";
//     std:: cout << "**********************************************\n";
//     do
//     {
//         std::cout << "Choise one of the following\n";
//         std::cout << "'R' for Rock\n";
//         std::cout << "'P' for Paper\n";
//         std::cout << "'S' for Scissors\n";
//         std::cin >> player;
//         clearInputBuffer();
//         if (player != 'R' && player != 'P' && player != 'S')
//         {
//             std::cout << "Please Enter Only - R or P or S\n";
//         }     
//     } while (player != 'R' && player != 'P' && player != 'S');
//     return player;
// }
// char getComputerChoise(){
//     srand(time(0));
//     int num = rand() % 3 + 1;
//     switch (num)
//     {
//         case 1: return 'r';
//         case 2: return 'p';
//         case 3: return 's';
//     }
//     return 0;
// }
// void showChoice(char choice){
//     switch (choice)
//     {
//         case 'R': std:: cout << "Rock\n";
//                   break;
//         case 'P': std:: cout << "Paper\n";
//                   break;
//         case 'S': std:: cout << "Scissors\n";
//                   break;
//     }
// }
// void chooseWinner(char player, char computer){
//     switch (player)
//     {
//         case 'R':   if (computer == 'r')
//                     {
//                         std::cout << "Its a tie!\n";
//                     }
//                     else if (computer == 'p')
//                     {
//                         std::cout << "You Lose!\n";
//                     }
//                     else
//                     {
//                         std::cout << "You Win!\n";
//                     }
//                     break;
//         case 'P':   if (computer == 'r')
//                     {
//                         std::cout << "You Win!\n";
//                     }
//                     else if (computer == 'p')
//                     {
//                         std::cout << "Its a tie!\n";
//                     }
//                     else
//                     {
//                         std::cout << "You Lose!\n";
//                     }
//                     break;
//         case 'S':   if (computer == 'r')
//                     {
//                         std::cout << "You Lose!\n";
//                     }
//                     else if (computer == 'p')
//                     {
//                         std::cout << "You Win!\n";
//                     }
//                     else
//                     {
//                         std::cout << "Its a tie!\n";
//                     }
//                     break;
//     }
// }

// double getTotal(double prices[], int size){
//     double total = 0;
//     for(int i = 0; i < size; i++){
//         total = total + prices[i];
//     }
//     return total;
// }

// int searchArray(std::string array[], int size, std::string element){
//     for(int i = 0; i < size; i++){
//         if (array[i] == element)
//         {
//             return i;
//         }
//     }
//     return -1;
// }   

// void sort(int array[], int size){
//     int temp;
//     for (int i = 0; i < size - 1; i++)
//     {
//         for (int j = 0; j < size - i - 1; j++)
//         {
//             if (array[j] > array[j + 1])
//             {
//                 temp = array[j];
//                 array[j] = array[j + 1];
//                 array[j + 1] = temp;
//             }
//         }
//     }
// }

// void swap(std::string &x, std::string &y){
//     std::string temp;
//     temp = x;
//     x = y;
//     y = temp;
// }

// void printInfo(const std::string &name, const int &age){
//     std::cout << name << '\n';
//     std::cout << age << '\n';
// }

// int getDigit(const int number){
//     return number % 10 + (number / 10 % 10);
// }
// int sumOddDigits(const std::string cardNumber){
//     int sum = 0;
//     for (int i = cardNumber.size() - 1; i >= 0; i-=2)
//     {
//         sum += (cardNumber[i] - '0');
//     }
//     return sum;
// }
// int sumEvenDigits(const std::string cardNumber){
//     int sum = 0;
//     for (int i = cardNumber.size() - 2; i >= 0; i-=2)
//     {
//         sum += getDigit((cardNumber[i] - '0')* 2);
//     }
//     return sum;
// }

// void drawBoard(char *spaces){
//     std::cout << '\n';
//     std::cout << "     |     |     " << '\n';
//     std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << '\n';
//     std::cout << "_____|_____|_____" << '\n';
//     std::cout << "     |     |     " << '\n';
//     std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << '\n';
//     std::cout << "_____|_____|_____" << '\n';
//     std::cout << "     |     |     " << '\n';
//     std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << '\n';
//     std::cout << "     |     |     " << '\n';
//     std::cout << '\n';
// }
// void playerMove(char *spaces, char player){
//     int number;
//     do
//     {
//         std::cout << "Enter a spot place a marker (1-9): ";
//         std::cin >> number;
//         number--;
//         if (spaces[number] == ' ')
//         {
//             spaces[number] = player;
//             break;
//         }
//     } while (!number > 0 || !number < 8); 
// }
// void computerMove(char *spaces, char computer){
//     int number;
//     srand(time(0));
//     while (true)
//     {
//         number = rand() % 9;
//         if (spaces[number] == ' ')
//         {
//             spaces[number] = computer;
//             break;
//         }
//     }    
// }
// bool checkWinner(char *spaces, char player, char computer){
//     if ((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces [1] == spaces[2]))
//     {
//         spaces[0] == player ? std::cout << "You Win!\n" : std::cout << "You Lose!\n";
//     }else if ((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces [4] == spaces[5]))
//     {
//         spaces[3] == player ? std::cout << "You Win!\n" : std::cout << "You Lose!\n";
//     }else if ((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces [7] == spaces[8]))
//     {
//         spaces[6] == player ? std::cout << "You Win!\n" : std::cout << "You Lose!\n";
//     }else if ((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces [3] == spaces[6]))
//     {
//         spaces[0] == player ? std::cout << "You Win!\n" : std::cout << "You Lose!\n";
//     }else if ((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces [4] == spaces[7]))
//     {
//         spaces[1] == player ? std::cout << "You Win!\n" : std::cout << "You Lose!\n";
//     }else if ((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces [5] == spaces[8]))
//     {
//         spaces[2] == player ? std::cout << "You Win!\n" : std::cout << "You Lose!\n";
//     }else if ((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces [4] == spaces[8]))
//     {
//         spaces[0] == player ? std::cout << "You Win!\n" : std::cout << "You Lose!\n";
//     }else if ((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces [4] == spaces[6]))
//     {
//         spaces[2] == player ? std::cout << "You Win!\n" : std::cout << "You Lose!\n";
//     }else{
//         return false;
//     }
//     return true;
// }
// bool checkTie(char *spaces){
//     for (int i = 0; i < 9; i++)
//     {
//         if (spaces[i]==' ')
//         {
//             return false;
//         }
//     }
//     std::cout << "it's a Tie\n";
//     return true;
// }

// void walk(int steps){
//     if (steps > 0)
//     {
//         std::cout << "you take a step!\n";
//         walk(steps - 1);
//     }
// }

// int factorial(int num){
    // int result = 1;
    // for (int i = 1; i <= num; i++){
    //     result = result * i;
    // }
    // return result;
//     if (num > 1)
//     {
//         return num * factorial(num - 1);
//     }else{
//         return 1;
//     }
// }

// template <typename T, typename U>
// auto max(T x, U y){
//     return (x > y) ? x : y;
// }

// struct student
// {
//     std::string name;
//     double gpa;
//     bool enrolled;
// };

// struct Car
// {
//     std::string model;
//     int year;
//     std::string color;
// };
// void printCar(Car &car){
//     std::cout << car.model << '\n';
//     std::cout << car.year << '\n';
//     std::cout << car.color << '\n';
// }

// enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thusday = 4, friday = 5, saturday = 6};

// class Human{
//     public:
//         std::string name;
//         std::string ocupation;
//         int age;
//         void eat(){
//             std::cout << "This person is eating\n";
//         }
//         void drink(){
//             std::cout << "This person is drinking\n";
//         }
//         void sleep(){
//             std::cout << "This person is sleeping\n";
//         }
// };

// class Student{
//     public:
//         std::string name;
//         int age;
//         double gpa;
//         int birthN;
//     Student(std::string name, int age, double x, int y){
//         this->name = name;
//         this->age = age;
//         gpa = x;
//         birthN = y;
//     }
// };

// class Pizza{
//     public:
//         std::string topping1;
//         std::string topping2;
//     Pizza(){
//     }
//     Pizza(std::string topping1){
//         this->topping1 = topping1;
//     }
//     Pizza(std::string topping1, std::string topping2){
//         this->topping1 = topping1;
//         this->topping2 = topping2;
//     }
// };

// class Stove{
//     private:
//         int temperature = 0;
//     public:
//         int getTemperature(){
//             return temperature;
//         }
//         void setTemperature(int temperature){
//             if (temperature < 0)
//             {
//                 this->temperature = 0;
//             }else if (temperature >= 10)
//             {
//                 this->temperature = 10;
//             }else{
//                 this->temperature = temperature;
//             }
//         }
// };

// class Animal{
//     public:
//         bool alive = true;
//     void eat(){
//         std::cout << "this animal is eating\n";
//     }
// };
// class Dog : public Animal{
//     public:
//         void bark(){
//             std::cout << "this dog goes woof!\n";
//         }
// };
// class Cat : public Animal{
//     public:
//         void meow(){
//             std::cout << "This cat goes meow!\n";
//         }
// };
// class Shape{
//     public:
//         double area;
//         double volue;
// };
// class Cube : public Shape{
//     public:
//         double side;
//     Cube(double side){
//         this->side = side;
//         this->area = side * side * 6;
//         this->volue = side * side * side;
//     }
// };
// class Sphere : public Shape{
//     public:
//         double radius;
//     Sphere(double radius){
//         this->radius = radius;
//         this->area = 4 * 3.14159 * (radius * radius);
//         this->volue = (4/3.0) * 3.14159 * (radius * radius * radius);
//     }
// };
int main(){

    // integer (whole number)
    // int age = 21;
    // int year = 2024;
    
    // double (number including decimal)
    // double price = 10.45;
    // double temperature = 36.6;

    // single character
    // char grade = 'A';
    // char initial = 'B';

    // boolean (true or false)
    // bool student = false;
    // bool power = true;

    // string (objects that represents a sequence of text)
    // std::string name = "Ayliozaa";
    // std::string day = "Friday";

    // Output
    // std::cout << "Hello " << name << '\n';
    // std::cout << "You Are " << age << " years old" << '\n';
    // std::cout << "Your Temperature Is " << temperature << " gradusi" << '\n';
    // std::cout << "Your Balance Is " << price << '\n';

    // the const keyboard specfies that a variable's value is constant
    // tells the compiler to prevent from modifying it
    // (Read-only)
    // double PI = 3.14159;
    // PI = 420.69;
    // double radius = 10;
    // double circumference = 2 * PI * radius;
    // std::cout << circumference << "cm" << '\n';

    // namespace = provides a solution for preventing name conflicts in large projects. Each entity needs a Unique name.
    //             A namespace allows for Identically named entities as long as the namespaces are different.
    // using namespace second;
    // std::cout << first::x << " ara";
    // std::cout << x << " ara" << '\n';

    // typedef = reserved ketword used to create an additional name (alias) for another data type.
    //           New identifier for an existing type helps with readability and reduces types
    //           Use when there is a clear benefit replacedwith 'using' (work better w/ templates)
    // pairlist_t pairlist;
    // text_t firstName = "Reapera";
    // number_t Aage = 18;
    // std::cout << "Name: " << firstName << '\n' << "Age: " << Aage << '\n';

    // arithmetic operators = return the result of a specific arithmetic operation (+ - * /)
    // int students = 20;
    // students = students + 1;
    // students+=1;
    // students = students -1;
    // students-= 1;
    // students = students * 2;
    // students *=2;
    // students = students / 2;
    // students/= 2;
    // int students = 6-5+4*3/2;
    // std::cout << students << '\n';

    // type conversion = conversion a value of one data type to anchor
    //      Implicit = automatic
    //      Explicit = Precede value with new data type (int)
    // int correct = 8;
    // int questions = 10;
    // double score = correct/(double)questions * 100;
    // std::cout << score << "%";

    // cout << (insertion operator)
    // cin >> (extraction operator)
    // std::string name;
    // int age;
    // std::cout << "What's Your Age? ";
    // std::cin >> age;
    // std::cout << "What's Your Full Name? ";
    // std::cin >> name;
    // std::getline(std::cin >> std::ws, name);
    // std::cout << "Hello Mr. " << name << '\n';
    // std::cout << "Your are " << age << " years old";

    // cmath    https://cplusplus.com/reference/cmath/
    // double x = 3.99;
    // double y = 4;
    // double z;
    // z = std::max(x,y);
    // z = std::min(x,y);
    // z = pow(2,4);
    // z = sqrt(9);
    // z = abs(-3);
    // z = round(x);
    // z = ceil(x);
    // z = floor(x);
    // std::cout << z;
    // another math
    // double a;
    // double b;
    // double c;
    // std::cout << "Enter side A: ";
    // std::cin >> a;
    // std::cout << "Enter side B: ";
    // std::cin >> b;
    // a = pow(a,2);
    // b = pow(b,2);
    // c = sqrt(a + b);
    // c= sqrt(pow(b,2) + pow(a,2));
    // std::cout << "side C: " << c;

    // if statements = do something if a condition is true.if not then dont do it.
    // int age;
    // std::cout << "Enter your age: ";
    // std::cin >> age;
    // if(age >= 18){
    //     std::cout << "Welcome to the site!";
    // }else if (age < 0){
    //     std::cout << " You are not born yet!";
    // }else{
    //     std::cout << " You are not old enough to enter";
    // }

    // switch = alternative to useing many "else if" statements compare one vlue against matching cases
    // int month;
    // std::cout << "Enter the month (1-12): ";
    // std::cin >> month;
    // switch(month){
    //     case 1:
    //         std::cout << "Its January";
    //         break;
    //     case 2:
    //         std::cout << "Its February";
    //         break;
    //     case 3:
    //         std::cout << "Its March";
    //         break;
    //     case 4:
    //         std::cout << "Its April";
    //         break;
    //     case 5:
    //         std::cout << "Its May";
    //         break;
    //     case 6:
    //         std::cout << "Its June";
    //         break;
    //     case 7:
    //         std::cout << "Its July";
    //         break;
    //     case 8:
    //         std::cout << "Its August";
    //         break;
    //     case 9:
    //         std::cout << "Its September";
    //         break;
    //     case 10:
    //         std::cout << "Its Octomber";
    //         break;
    //     case 11:
    //         std::cout << "Its November";
    //         break;
    //     case 12:
    //         std::cout << "Its December";
    //         break;
    //     default:
    //         std::cout << "Please enter in only numbers (1-12)";
    // }

    // Calculator Program
    // char op;
    // double num1;
    // double num2;
    // double result;
    // std::cout << "************* Calculator *************" << '\n';
    // std::cout << "Enter either (+ - * /): ";
    // std::cin >> op;
    // std::cout << "Enter first number: ";
    // std::cin >> num1;
    // std::cout << "Enter second number: ";
    // std::cin >> num2;
    // switch (op)
    // {
    // case '+':
    //     result = num1 + num2;
    //     std::cout << "result: " << result << '\n';
    //     break;
    // case '-':
    //     result = num1 - num2;
    //     std::cout << "result: " << result << '\n';
    //     break;
    // case '*':
    //     result = num1 * num2;
    //     std::cout << "result: " << result << '\n';
    //     break;
    // case '/':
    //     result = num1 / num2;
    //     std::cout << "result: " << result << '\n';
    //     break;
    // default:
    //     std::cout << "That wasnt a valid response";
    //     break;
    // }
    // std::cout << "**************************************";

    // ternary operator ?: = replacement to an if/else statement
    // condition ? expression1 : expression2;
    // int grade = 5;
    // grade >= 8 ? std::cout << "you pass" : std::cout << "you fail";
    // int number = 9;
    // number %2 == 1 ? std::cout << "kenti" : std::cout << "luwi";
    // bool hungry = true;
    // hungry ? std::cout << "Your are hungry" : std::cout << "You are full";
    // std::cout << (hungry ? "you are hungry" : "You are full");

    // && = check if two conditions are true
    // || = check if at least one of two conditions is true
    // ! = reverses the logical state of its operand

    // Temperature Program
    // double temp;
    // char unit;
    // std:: cout << "************* Temperature Conversion *************\n";
    // std:: cout << "F = fahrenheit\n";
    // std:: cout << "C = Celsius\n";
    // std:: cout << "What unit would you like to convert to: ";
    // std:: cin >> unit;
    // if (unit == 'f' || unit == 'F')
    // {
    //     std:: cout << "Enter the temperature in celsius: ";
    //     std:: cin >> temp;
    //     temp = (1.8 * temp) + 32.0;
    //     std::cout << "temperature is: " << temp << "F\n";
    // }else if (unit == 'c' || unit == 'C')
    // {
    //     std:: cout << "Enter the temperature in Fahrenheit: ";
    //     std:: cin >> temp;
    //     temp = (temp - 32) / 1.8;
    //     std::cout << "temperature is: " << temp << "C\n";
    // }else
    // {
    //     std::cout << "Please enter in only F or C";
    // }
    // std:: cout << "**************************************************\n";

    // Usefull string methods https://cplusplus.com/reference/string/string/
    // std::string name;
    // std::cout << "Enter Your name: ";
    // std::getline(std::cin, name);
    // sigrdzis sazomi
    // if (name.length() > 12)
    // {
    //     std::cout << "Yuor Name Cant Be Over 12 Characters";
    // }else{
    //     std:: cout << "Wellcome to The League of " << name;
    // }
    // carelaa tu ara
    // if (name.empty())
    // {
    //     std::cout << "You didn't enter your name";
    // }else{
    //     std::cout << "Hello " << name;
    // }
    // gasasuftaveblad name.clear();
    // textis bolos ramis damateba name.append("@gmail.com");

    // while loops
    // std:: string name;
    // while(name.empty())
    // {
    //     std:: cout << "Enter Your Name: ";
    //     std::getline(std::cin, name);
    // }
    // std::cout << "Hello " << name;

    // do while loop = do some block of code first, Then repeat again if condition is true
    // int number;
    // do{
    //     std::cout << "Enter a positive #: "
    //     std::cin >> number;
    // }while (number < 0);
    // std:: cout << "The # is: " << number;
    
    // for loop
    // for(int i = 1; i <= 5; i++){
    //     std::cout << "Happy New Year!\n";
    // }
    
    // break = break out of a loop
    // for (int i = 1; i < 20; i++)
    // {
    //     if (i == 13)
    //     {
    //         break;
    //     }
    //     std::cout << i << '\n';
    // }
    // continue = skip current iteration
    // for (int i = 1; i < 20; i++)
    // {
    //     if (i == 13)
    //     {
    //         continue;;
    //     }
    //     std::cout << i << '\n';
    // }
    
    // nested for loops
    // loop(){
    //     loop(){
    //     }
    // }
//    int rows;
//    int columns;
//    char symbol;
//    std::cout << "how many rows? ";
//    std::cin >> rows;
//    std::cout << "how many columns? ";
//    std::cin >> columns;
//    std::cout << "Chose symbol? ";
//    std::cin >> symbol;
//    for (int i = 1; i <= rows; i++)
//    {
//         for (int j = 1; j <= columns; j++)
//         {            
//             std::cout << symbol << ' ';
//         }
//         std::cout << '\n';
//    }

    // pseudo-random = not truly random (but close)
    // srand(time(NULL));
    // int num1 = (rand() % 6) + 1;
    // int num2 = (rand() % 6) + 1;
    // int num3 = (rand() % 6) + 1;
    // std::cout << num1 << '\n';
    // std::cout << num2 << '\n';
    // std::cout << num3 << '\n';

    // random event generator
    // srand(time(0));
    // int randNum = rand() % 5 + 1;
    // switch (randNum)
    // {
    //     case 1: std::cout << "You win a bumper sticker!\n"; break;
    //     case 2: std::cout << "You win a t-shirt\n"; break;
    //     case 3: std::cout << "You win a free lunch\n"; break;
    //     case 4: std::cout << "You win a gift card\n"; break;
    //     case 5: std::cout << "You win a concert tickets\n"; break;
    // }

    // number guessing game
    // int num;
    // int guess;
    // int tries;
    // srand(time(NULL));
    // num = (rand()% 100) + 1;
    // std::cout << "********** Number Gusessing Game **********\n";
    // do
    // {
    //     std::cout << "Enter a guess between (1-100): ";
    //     std::cin >> guess;
    //     tries++;
    //     if (guess > num)
    //     {
    //         std::cout << "Try Low Number\n";
    //     }else if (guess < num){
    //         std::cout << "Try High number\n";
    //     }else{
    //         std::cout << "CORRECT! You Tryed " << tries << " Times\n";
    //     }
    // } while (guess != num);
    // std::cout << "*******************************************";

    // function = a block of reusable code
    // std::string name = "Uta";
    // int age = 20;
    // happyBirthday(name, age);

    // return = return a value back to the spot where you called the encampassing function
    // double length = 5.0;
    // double area = square(length);
    // double volume = cube(length);
    // std:: cout << "Area: " << area << "cm^2\n";
    // std:: cout << "Valume: " << volume << "cm^3\n";
    // meore versia
    // std::string firstName = "Uta";
    // std::string lastName = "Baramidze";
    // std::string fullName = concatStrings(firstName, lastName);
    // std::cout << "Hello " << fullName;

    // overloaded functions
    // bakePizza("Peperoni", "Extra Chiese");

    // local variables = declared inside a function or block {}
    // global variables = declared outsideof all functions
    // itokshi Globali aris funkciis garet rom weria da locali funqciashi (int age;), globalis dasawerad viyenebt (::age;)
    // int myNum = 1;
    // printNum();

    // Banking Program
    // double balance = 0;
    // int choise = 0;
    // do
    // {
    //     std::cout << "*****************************\n";
    //     std::cout << "Enter Your Choise: \n";
    //     std::cout << "*****************************\n";
    //     std::cout << "1. Show Balance\n";
    //     std::cout << "2. Deposit Money\n";
    //     std::cout << "3. Withdraw Money\n";
    //     std::cout << "4. Exit\n";
    //     std::cin >> choise;
    //     clearInputBuffer();
    //     switch (choise)
    //     {
    //         case 1: showBalance(balance);
    //                 break;
    //         case 2: balance += deposite();
    //                 showBalance(balance);
    //                 break;
    //         case 3: balance -= withdraw(balance);
    //                 showBalance(balance);
    //                 break;
    //         case 4: std::cout << "Thanks for visiting!";
    //                 break;
    //         default: std::cout << "Invalid choise\n";
    //     }
    // } while (choise != 4);
    
    // rock, papaer, scissors game
    // char player;
    // char computer;
    // player = getUserChoise();
    // std::cout << "**********************************************\n";
    // std::cout << "Your Choise: ";
    // showChoice(player);
    // std::cout << "Computer Choise: ";
    // computer = getComputerChoise();
    // showChoice(computer);
    // chooseWinner(player, computer);
    // std::cout << "**********************************************\n";

    // array = a data structure that can hold multiple values
    //           values are accessed by an index number
    //           "kind of like variable that holds multiple values"
    // std::string cars[] = {"Corvette", "Mustang", "Camry"};
    // cars[0] = "Camaro";
    // std::cout << cars[0] << '\n';
    // std::cout << cars[1] << '\n';
    // std::cout << cars[2] << '\n';
    // double prices[] = {5.00, 7.50, 9.99, 15.00};
    // std::cout << prices[0] << '\n';
    // std::cout << prices[1] << '\n';
    // std::cout << prices[2] << '\n';
    // std::cout << prices[3] << '\n';
    
    // sizeof() = determines the size in bytes of a: Variable, datatype, class, objects etc.
    // std::string name = "Uta";
    // double gpa = 2.5;
    // char grade = 'F';
    // bool student = true;
    // char grades[] = {'A', 'B', 'C', 'D', 'F'};
    // std::string students[] = {"Aylioza", "Uta", "Reapera"};
    // std::cout << sizeof(students)/sizeof(std::string) << " Elements\n";
    
    // iterate over an array
    // std::string students[] = {"Uta", "Aylioza", "Reapera", "Ornn"};
    // char grades[] = {'A', 'B', 'C', 'D', 'F'};
    // std::cout << students[0] << '\n';
    // std::cout << students[1] << '\n';
    // std::cout << students[2] << '\n';
    // for(int i = 0; i < sizeof(grades)/sizeof(char); i++){
    //     std::cout << grades[i] << '\n';
    // }
    
    // foreach loop = loop that eases the traversal over an iterable data set
    // std::string students[] = {"Uta", "Aylioza", "Reapera", "Ornn"};
    // int grades[] = {65, 72, 81, 93};
    // for(int grade : grades){
    //     std::cout << grade << '\n';
    // }

    // pass array to a function
    // double prices[] = {49.99, 15.05, 75, 9.99};
    // int size = sizeof(prices)/sizeof(prices[0]);
    // double total = getTotal(prices, size);
    // std::cout << "$" << total;

    // search an array for an element
    // int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // std::string foods[] = {"Pizza", "Hamburger", "Hotdog"};
    // int size = sizeof(foods)/sizeof(foods[0]);
    // int index;
    // std::string myFood;
    // int myNum;
    // std::cout << "Enter element to search for: " << '\n';
    // std::getline(std::cin, myFood);
    // index = searchArray(foods, size, myFood);
    // if (index != -1)
    // {
        // std::cout << myFood << " is at index " << index;
    // }else{
        // std::cout << myFood << " is not in the array";
    // }
    
    // Creating sort() function
    // int array[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    // int size = sizeof(array)/sizeof(array[0]);
    // sort(array, size);
    // for(int element : array){
    //     std::cout << element << " ";
    // }

    // fill() = fills a range of elements with a apecified value
    //          fill(begin, end, value)    
    // const int size = 9;
    // std::string foods[size];
    // fill(foods, foods + (size/3), "Pizza");
    // fill(foods + (size/3), foods + size, "Hamburger");
    // fill(foods + (size/3)*2, foods + size, "Hotdog");
    // for (std::string food : foods)
    // {
    //     std::cout << food << '\n';
    // }
    
    // fill array with user input
    // std::string foods[5];
    // int size = sizeof(foods)/sizeof(foods[0]);
    // std::string temp;
    // for (int i = 0; i < size; i++)
    // {
    //     std::cout << "Enter a food you like or 'q' to quit #" << i + 1 << " : ";
    //     std::getline(std::cin, temp);
    //     if (temp == "q")
    //     {
    //         break;
    //     }else{
    //         foods[i] = temp;
    //     }
    // }
    // std::cout << "You like the following food:\n";
    // for (int i = 0; !foods[i].empty(); i++)
    // {
    //     std::cout << foods[i] << '\n';
    // }
    
    // Multidimensional arrays
    // std::string cars[][3] = {{"Mustang", "Escape", "F-150"},
    //                         {"Corvette", "Equinox", "Silverado"},
    //                         {"Challenger", "Durango", "Ram 1500"}};
    // int rows = sizeof(cars)/sizeof(cars[0]);
    // int columns = sizeof(cars[0])/sizeof(cars[0][0]);
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < columns; j++)
    //     {
    //         std::cout << cars[i][j] << " ";
    //     }
    //     std::cout << '\n';
    // }
    
    //Quiz Game
    // std::string questions[] = {"1. What Year Was C++ Created?: ",
    //                           "2. Who Invented C++?: ",
    //                           "3. What Is The Predecessor Of C++?: ",
    //                           "4. Is The Earth Flat?: "};
    // std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
    //                            {"A. Guido Van Rossum", "B. Bjoarne Stroutrup", "C. John Carmack", "D. Mark Zuckerburg"},
    //                            {"A. C", "B. C+", "C. C--", "D. B++"},
    //                            {"A. Yes", "B. No", "C. Sometimes", "D. What's Earth?"}};
    // char answerKey[] = {'C', 'B', 'A', 'B'};
    // int size = sizeof(questions)/sizeof(questions[0]);
    // char Guess;
    // int score = 0;
    // for (int i = 0; i < size; i++)
    // {
    //     std::cout << "************ Quiz Game *************\n";
    //     std::cout << questions[i] << '\n';
    //     std::cout << "************************************\n";
    //     for (int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++)
    //     {
    //         std::cout << options[i][j] << '\n';
    //     }
    //     bool validInput = false;
    //     while (!validInput) {
    //         std::cin >> Guess;
    //         Guess = toupper(Guess);
    //         if (std::cin.fail() || (Guess < 'A' || Guess > 'D')) {
    //             std::cout << "Please choose from answers A-D.\n";
    //             clearInputBuffer();
    //         } else {
    //             validInput = true;
    //         }
    //     }
    //     if (Guess == answerKey[i])
    //     {
    //         std::cout << "Correct\n";
    //         score++;
    //     }else{
    //         std::cout << "Wrong!\n";
    //         std::cout << "Answer: " << answerKey[i] << '\n';
    //     }
    // }
    // std::cout << "************************************\n";
    // std::cout << "*            Results:              *\n";
    // std::cout << "************************************\n";
    // std::cout << "Correct Guesses: " << score << '\n';
    // std::cout << "# Of Questions: " << size << '\n';
    // std::cout << "Score: " << (score/(double)size)*100 << "%";

    // memory adress = a location in memory where data is stored
    // a memory adress can accessed with & (address-of operator)
    // std::string name = "Uta";
    // int age = 20;
    // bool student = true;
    // std::cout << &name << '\n';
    // std::cout << &age << '\n';
    // std::cout << &student << '\n';

    // Pass by VALUE vs pass by REFERENCE
    // std::string x = "Kool-Aid";
    // std::string y = "Water";
    // swap(x, y);
    // std::cout << "X: " << x << '\n';
    // std::cout << "Y: " << y << '\n';

    // const parameter = parameter what is effectively read-only code is moresecire & coveys
    //                   intent useful for references and pointers
    // std::string name = "Uta";
    // int age = 20;
    // printInfo(name, age);

    // Credit Card Validator Program
    // std::string cardNumber;
    // int result = 0;
    // std::cout << "Enter a Credit Card #: ";
    // std::cin >> cardNumber;
    // result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);
    // if (result % 10 == 0)
    // {
    //     std::cout << cardNumber << " Is Valid";
    // }else{
    //     std::cout << cardNumber << " Is Not Valid";
    // }
    
    // pointers = Variable that stores a memory address of another variable
    //            sometimes it's easier to work with an address
    // & address-of operator
    // * dereference operator
    // std::string name = "Uta";
    // int age = 20;
    // std::string freePizzas[5] =  {"Pizza1", "Pizza2", "Pizza3", "Pizza4", "Pizza5", };
    // std::string *pName = &name;
    // int *pAge = &age;
    // std::string *pFreePizzas = freePizzas;
    // std::cout << *pName << '\n';
    // std::cout << *pAge << '\n';
    // std::cout << *pFreePizzas << '\n';

    // Null Value = a special value that means something has no value. when a pointer is holding a null vaulue,
    //              that pointer is not pointing at anything (Null Pointer)
    // NullPtr = Keyword represents a null pointer Literal
    // NullPtrs are helpful when determmining if an adress was successfully assigned to a pointer
    // int *pointer =  nullptr;
    // int x = 123;
    // pointer = &x;
    // if (pointer == nullptr)
    // {
    //     std::cout << "adress was not assigned!\n";
    // }else{
    //     std::cout << "adress was assigned!\n";
    //     std::cout << *pointer;
    // }
    
    // Tic Tac Toe Game
    // char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    // char player = 'X';
    // char computer = 'O';
    // bool running = true;
    // drawBoard(spaces);
    // while (running)
    // {
    //     playerMove(spaces, player);
    //     drawBoard(spaces);
    //     if (checkWinner(spaces, player, computer))
    //     {
    //         running = false;
    //         break;
    //     }else if (checkTie(spaces))
    //     {
    //        running = false;
    //        break;
    //     }
    //     computerMove(spaces, computer);
    //     drawBoard(spaces);
    //     if (checkWinner(spaces, player, computer))
    //     {
    //         running = false;
    //         break;
    //     }else if (checkTie(spaces))
    //     {
    //        running = false;
    //        break;
    //     }
    // }
    // std::cout << "Thanks for Playing!";

    // dynamic memory = Memory that is aallocated after the program is already compiled & running.
    //                  use the 'New' operator to allocate memory in the heap rather than the stack
    //                  usefull when we dont know how much memory we will need. makes our programs more flexible
    //                  especially when accepting use input
    // int *pNum = NULL;
    // pNum = new int;
    // *pNum = 20;
    // std::cout << "Address: " << pNum << '\n';
    // std::cout << "Value: " << *pNum << '\n';
    // delete pnum;
    // 
    // char *pGrades = NULL;
    // int size;
    // std::cout <<  "How Many Grades To Enter In?: ";
    // std::cin >> size;
    // pGrades = new char[5];
    // for (int i = 0; i < size; i++)
    // {
    //     std::cout << "Enter grade #" << i + 1 << ": ";
    //     std::cin >> pGrades[i];
    // }
    // for (int i = 0; i < size; i++)
    // {
    //     std::cout << pGrades[i] << " ";
    // }
    // delete[] pGrades;

    // recursion = a programming technique where a function invokes itself from within
    //             break a complex concept into a repetable single step
    // (iterative vs recursive)
    // adventages = less code and is cleaner
    //              useful for sorting and searching algorithms
    // disadventages = uses more memory, slower.
    // walk(50);
    // std::cout << factorial(10);

    // function template = describes what a function looks like. can be used  to generate as many overload functions
    //                     as needed, each using different data types
    //                     ex. "Its like a cookie-cutter..."
    //                     "cookies are the same shape, but the dough used can be different"
    // std::cout << max(1, 2.1) << '\n';

    // struct = A structure tha group related variables under one name, struct can cotain many different data types (string, int, double, bool, etc.)
    //          variables in a struct are known as "Nembers"
    //          members can be access with. "Class Member Acces Operator"
    // student student1;
    // student1.name = "Spongebob";
    // student1.gpa = 3.2;
    // student1.enrolled = true;
    // student student2;
    // student2.name = "Patrick";
    // student2.gpa = 2.1;
    // student2.enrolled = true;
    // std::cout << student1.name << '\n';
    // std::cout << student1.gpa << '\n';
    // std::cout << student1.enrolled << '\n';
    // std::cout << student2.name << '\n';
    // std::cout << student2.gpa << '\n';
    // std::cout << student2.enrolled << '\n';

    // pass structs as arguments
    // Car car1;
    // Car car2;
    // car1.model = "Mustang";
    // car1.year = 2023;
    // car1.color = "red";
    // car2.model = "Corvette";
    // car2.year = 2024;
    // car2.color = "blue";
    // printCar(car2);

    // enums = a user-defined data type that consists of paired name integer constants. 
    //         GREAT if you have a set of potential options
    // Day today = sunday;
    // switch (today)
    // {
    //     case sunday: std::cout << "Its sunday!\n";
    //                    break;
    //     case monday: std::cout << "Its monday!\n";
    //                    break;
    //     case tuesday: std::cout << "Its tuesday!\n";
    //                    break;
    //     case wednesday: std::cout << "Its wednesday!\n";
    //                    break;
    //     case thusday: std::cout << "Its thusday!\n";
    //                    break;
    //     case friday: std::cout << "Its friday!\n";
    //                    break;
    //     case saturday: std::cout << "Its saturday!\n";
    //                    break;
    // }

    // object = A collection of attributes and methods they can have characteristics and could perform actions
    //          can be used to mimic real world items (ex. phone, book, dog)
    //          created from a class which acts as a "blue-print"
    // Human human1;
    // human1.name = "Uta";
    // human1.ocupation = "programmist";
    // human1.age = 20;
    // std::cout << human1.name << '\n';
    // std::cout << human1.ocupation << '\n';
    // std::cout << human1.age << '\n';
    // human1.eat();
    // human1.drink();
    // human1.sleep();

    // constucrot = special method that is automatically called when an object is instantiated
    //              useful for assigning value to attributes as arguments
    // Student student1("Spongebob", 20, 3.2, 19);
    // std::cout << student1.name << "\n";
    // std::cout << student1.age << "\n";
    // std::cout << student1.gpa << "\n";
    // std::cout << student1.birthN << "\n";

    // overloaded constructors = multiple constructors w/ same name but different parameters
    //                           allows for verying arguments when instantiating an object
    // Pizza pizza1("peperoni");
    // Pizza pizza2("Mushrooms", "peppers");
    // Pizza pizza3;
    // std::cout << pizza2.topping1 << '\n';
    // std::cout << pizza2.topping2 << '\n';

    // Abstraction = hiding unnecessary data from outside a class
    // getter = function that makes a private atribute READABLE
    // setter = function that makes a private atribute WRITABLE
    // Stove stove;
    // stove.setTemperature(1000000);
    // std::cout << "the temperature setting is: " << stove.getTemperature();

    // inheritance = A class recive attributes and methods from another class
    //               Children classes inherit from a parent class
    //               helps to reuse similar code found within multiple classes
    // Dog dog;
    // std::cout << dog.alive << '\n'; 
    // dog.eat();
    // dog.bark();
    // Cat cat;
    // std::cout << cat.alive << '\n';
    // cat.eat();
    // cat.meow();
    // Cube cube(10);
    // Sphere sphere(5);
    // std::cout << "Area: " << cube.area << '\n';
    // std::cout << "volue: " << cube.volue << '\n';
    // std::cout << "Area: " << sphere.area << '\n';
    // std::cout << "volue: " << sphere.volue << '\n';

    return 0;
}
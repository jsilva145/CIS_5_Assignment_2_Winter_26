#include <iostream>
#include <string>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
   // name
   string name;
   cout << "Jose: ";
   cin >> name;
   
   // age
   int age; 
   cout << "24: ";
   cin >> age;

   // height
   double height;
   cout << "1.829 (meters): "; 
   cin >> height;

   // weight
   double weight;
   cout << "99 (kg): ";
   cin >> weight;
   
   // BMI calculation
   double bmi = weight / (height * height);

   // BMI category
   string category;
   if (bmi <18.5)
       category = "Underweight";
    else if (bmi < 25)
        category = "Normal weight";
    else if (bmi < 30)
        category = "Overwight";
    else
        category = "Obese";

    // test score
    int score;
    cout << "0 (0-100): ";
    cin >> score; 
    // grade;
    char grade;
    if (score >= 90)
        grade = 'A';
    else if (score >= 80)
        grade = 'B';
    else if (score >= 70)
        grade = 'C';
    else if (score >= 60)
        grade = 'D';
    else
        grade = 'F';
    
        // final output
        cout << std::fixed << std::setprecision(2);
        cout << "\nHey " << name << ", you're" << age
             << " years old with a BMI of" << bmi
             << " (" <<category << ") and you got a grade"
             << grade << "!" << endl; 
             cout << "Not good!" << endl;

    return 0;
}
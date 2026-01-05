# CIS_5_Assignment_2_Winter_26
Assignment 2

BMI and Grade Calculator Program
Requirements
Create a program that:
1. User Information
Ask for the user's name (store in a std::string variable)
Ask for their age (store in an int)
Ask for their height in meters (store in a double)
Ask for their weight in kilograms (store in a double)
2. BMI Calculation
Calculate their BMI (Body Mass Index): bmi = weight / (height * height)
Use conditionals to tell them their weight category:
BMI < 18.5 → "Underweight"
BMI 18.5–24.9 → "Normal weight"
BMI 25–29.9 → "Overweight"
BMI ≥ 30 → "Obese"
3. Grade Calculation
Ask for their test score (0–100, store in an int).
Use conditionals to give a letter grade:
90–100 → A
80–89 → B
70–79 → C
60–69 → D
Below 60 → F
4. Final Output
Finally, print a personalized message using their name, like:
> "Hey [name], you're [age] years old with a BMI of [bmi] ([category]) and you got a grade [letter]! Keep it up! 🚀"

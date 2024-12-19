#ifndef NUTRITION_H
#define NUTRITION_H

#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include "Records.h"
#include "User.h"
using namespace std;

class Nutrition : public Records {
private:
    int month;
    int day;
    int year;

public:
    Nutrition(int month, int day, int year);
    void addFood(const Food& food);
    void addExercise(const Exercise& exercise);
    float getTotalCaloriesConsumed() const;
    float getTotalCaloriesBurned() const;
    void displaySummary() const;
    void writeNutritionToFile(ofstream& outFile) const;
    int getMonth();
    int getDay();
    int getYear();
};

#endif

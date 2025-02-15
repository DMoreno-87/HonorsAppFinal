#ifndef EXERCISE_H
#define EXERCISE_H

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

class Exercise {

public:
    string name;
    float duration;  // in minutes
    float caloriesBurned;  // calories burned


    Exercise(string name, float duration, float caloriesBurned);
    void getExerciseSummary();
    void setExerciseName(string n);
    void setExerciseDuration(float d);
    void setExeciseCaloriesBurned(float c);
    void writeExercisesToFile(ofstream& outFile) const;
};

#endif

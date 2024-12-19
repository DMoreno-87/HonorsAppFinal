#ifndef TUTORIALS_H
#define TUTORIALS_H

#include <vector>
#include <string>
#include <QStringList>
#include <QString>
#include <QMovie>
#include "Records.h"

class Tutorials : public Records{
public:
    Tutorials();

    QMovie* getExerciseGif(int index) const;
    QString getExerciseDescription(int index) const;
    QStringList getExerciseNames() const;

private:
    QStringList exerciseNames;
    vector <QMovie*> exerciseGifs;
    vector <QString> exerciseDescriptions;

    void loadExercises();
};

#endif // TUTORIALS_H

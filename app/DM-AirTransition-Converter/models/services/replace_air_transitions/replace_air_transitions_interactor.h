#ifndef REPLACE_AIR_TRANSITIONS_INTERACTOR_H
#define REPLACE_AIR_TRANSITIONS_INTERACTOR_H

#include <QStringList>
#include <QDebug>

#include "models/types/sml_02_point.h"

class ReplaceAirTransitionsInteractor
{
public:
    ReplaceAirTransitionsInteractor();

    QStringList execute(QStringList program, QList<SML02Point> points, double velocity);

private:
    QStringList replaceAirTransition(QStringList params, QList<SML02Point> &points, double velocity);
    QString buildTTLineCommand(unsigned int firstPointIndex, unsigned int secondPointIndex, bool airTransition, double height, double velocity);
};

#endif // REPLACE_AIR_TRANSITIONS_INTERACTOR_H

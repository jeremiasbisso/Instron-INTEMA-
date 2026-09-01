#ifndef PARAMETROSENSAYO_H
#define PARAMETROSENSAYO_H

#include <QString>

struct ParametrosEnsayo
{
    // Datos generales
    QString nombreMetodo;
    QString comentario;

    int tipoEnsayo = -1;
    int velocidadAdquisicion = 0;
    double velocidadTraversa = 0.0;
    QString direccion;

    // Límites de carga
    int accionMaxCarga = 0;
    double maxCarga = 0.0;

    int accionMinCarga = 0;
    double minCarga = 0.0;

    // Límites de extensión
    int accionMaxExtension = 0;
    double maxExtension = 0.0;

    int accionMinExtension = 0;
    double minExtension = 0.0;

    // Límites de deformación
    int accionMaxStrain = 0;
    double maxStrain = 0.0;

    int accionMinStrain = 0;
    double minStrain = 0.0;

    // Otros
    bool switchToExtension = false;
    int accionRotura = 0;
    int cantidadCiclos = 0;
};

#endif // PARAMETROSENSAYO_H
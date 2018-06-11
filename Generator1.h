#pragma once
#include <vector>
#include <string>
#include <vtkPolyData.h>


class Generator1
{
public:
    Generator1();
    ~Generator1();

    void initGrid(double R, double x1, double x2, double y1, double y2, double z1, double z2);

    void SaveToPolyData();

    void SaveToFileVTK();

    void SaveToFile();


    virtual void Generate() = 0;

    double x1, x2, y1, y2, z1, z2;
    double R , Radius;
    double cell_size;
    double Nx, Ny, Nz;
    int i = 0;
     int parts;

    std::string filename = "Failas_1";
    vtkPolyData *poly;


    //vectoriai poziciju koordinatems.
    std::vector<double> x_Points;
    std::vector<double> y_Points;
    std::vector<double> z_Points;

    std::vector<double> Random_radius;
    std::vector<double> Skirtingi_spinduliai;
    std::vector<double> Daleliu_ID;

    //Dalelius skaicius.
    int Number_Of_Lines;
    int Number_Of_Points;




};


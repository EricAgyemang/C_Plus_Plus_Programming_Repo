package shapes;

public class Cylinder extends Shape3D {

    private double radius;
    private double heigth;

    public Cylinder(double r, double h) {
        radius = r;
        heigth = h;
    }

    public double surfaceArea() {
        return 2*PI*radius*(radius+ heigth);
    }
    public double volume(){
        return PI*radius*radius*heigth;
    }
}
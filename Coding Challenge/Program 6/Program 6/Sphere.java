package shapes;

public class Sphere extends Shape3D {

    private double radius;

    public Sphere(double r) {
        radius = r;
    }

    public double surfaceArea() {
        return (4/3)* PI * radius * radius;
    }
    public double volume(){
        return PI*radius*radius*radius;
    }
}
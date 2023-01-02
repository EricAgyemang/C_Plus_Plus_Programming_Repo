package shapes;
public class ShapeTest {

    public static void main(String args[]) {
        Shape3D s = new Cylinder(10.0, 112.23);
        System.out.println("Cyclinder:");
        System.out.println("\t Suface Area: "+s.surfaceArea());
        System.out.println("\t Volume: "+s.volume());
        s = new Sphere(22.123);
        System.out.println("Sphere:");
        System.out.println("\t Suface Area: "+s.surfaceArea());
        System.out.println("\t Volume: "+s.volume());
        s = new Cube(22.123);
        System.out.println("Cube:");
        System.out.println("\t Suface Area: "+s.surfaceArea());
        System.out.println("\t Volume: "+s.volume());
    }
}
public class Student {

    private String studentId;
    public String name;
    private Address address; 
    private Contact contact;

    public Student(String id) {
        studentId = id;
    }
    public void addAddress(Address a){
        address = a;
    }
    public void addContact(Contact c){
        contact = c;
    }
    public void display() {
        System.out.println(
                name + " - has student id: " + studentId);
        address.display();
        contact.display();
    }

    public static void main(String args[]) {
        Student rishi = new Student("rsaripa");
        Address address = new Address("Information Tech", 5150, "", "Normal", "IL", "USA");
        Contact contact = new Contact("rishi.saripalle@ilstu.edu", "309-909-09090", "911"); 
        rishi.name = "Rishi Saripalle";
        rishi.addAddress(address);
        rishi.addContact(contact);
        rishi.display();
    }

}
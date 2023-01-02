public class Contact{
    private String email;
    private String cellPhone;
    private String emergencyPhone;

    public Contact(String e, String cp, String ep){
        email = e;
        cellPhone =cp;
        emergencyPhone = ep;
    }
    public void display(){
        System.out.println("Email: "+email+", Cell Phone: "+cellPhone+", and Emergency Phone: "+emergencyPhone);
    }
}
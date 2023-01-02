public class Address{
    private String streetName;
    private int houseNo;
    private String aptNo;
    private String city;
    private String state;
    private String country;

    public Address(String sn, int hn, String an, String ct, String st, String cou){
        streetName = sn;
        houseNo = hn;
        aptNo = an;
        city=ct;
        state=st;
        country=cou;
    }
    public void display(){
        System.out.println(houseNo+" "+streetName);
        if(!aptNo.isEmpty()){
            System.out.println("Apt #: "+aptNo);
        }
        System.out.println(city+", "+state);
        System.out.println(country);
    }
}
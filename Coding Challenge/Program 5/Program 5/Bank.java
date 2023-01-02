package edu.isu.it326.misc;

public class Bank {

    public double deposit;
    public double interest;
    public double timeInYears;

    public double simpleInterest() {
        return (deposit * interest * timeInYears) / 100;
    }

}
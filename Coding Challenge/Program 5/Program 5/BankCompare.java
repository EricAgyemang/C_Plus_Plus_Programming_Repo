package edu.isu.it326.misc;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class BankCompare {

    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in); // Takes user input; in C++ use "cin"
        System.out.print("Num of Banks: ");
        int numOfBanks = sc.nextInt();

        List<Bank> banks = new ArrayList<Bank>(numOfBanks); // List of banks. Use dynamic memory allocation
        // Refer to DynamicMemoryPerson Example uploaded onto ReggieNet.
        for (int i = 0; i < numOfBanks; i++) {
            double amt = Math.random() * (200000 - 10 + 1) + 10; // Generate a random number between 200000 (Max) and 10
                                                                 // (Min)
            // In C++ use the rand() function in stdlib.h library.
            // http://www.cplusplus.com/reference/cstdlib/rand/
            double rate = Math.random() * (10 - 1 + 1) + 1;
            double time = Math.random() * (15 - 1 + 1) + 1;
            Bank temp = new Bank(); // No required in C++. Refer to DynamicMemoryPerson Example uploaded onto
                                    // ReggieNet
            temp.deposit = amt;
            temp.interest = rate;
            temp.timeInYears = time;
            banks.add(temp);
        }

        for (int i = 0; i < numOfBanks; i++) {
            System.out.println(banks.get(i).simpleInterest());
        }

    }

}
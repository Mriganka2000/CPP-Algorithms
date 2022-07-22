package com.company;

import java.util.Scanner;

public class Main {

    public static int waterCount(int arr[]) {
        int leftPrefix[] = new int[arr.length];
        int rightPrefix[] = new int[arr.length];
        int water = 0;

        for (int i = 0; i < arr.length; i++) {
            if (i == 0) {
                leftPrefix[i] = arr[i];
            }
            else {
                leftPrefix[i] = Math.max(arr[i], leftPrefix[i-1]);
            }
        }

        for (int i = arr.length - 1; i >= 0; i--) {
            if (i == arr.length - 1) {
                rightPrefix[i] = arr[i];
            }
            else {
                rightPrefix[i] = Math.max(arr[i], rightPrefix[i+1]);
            }
        }

        for (int i = 0; i < arr.length; i++) {
            water += Math.min(rightPrefix[i], leftPrefix[i]) - arr[i];
        }

        return water;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
//        int arr[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
        System.out.println(waterCount(arr));
    }
}

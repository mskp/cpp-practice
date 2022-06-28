#include<bits/stdc++.h>

using namespace std;

class Sort {

    void selectionSort(int *a, int n) {
        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < n; j++)

                if (a[j] < a[minIndex])
                    minIndex = j;

            int temp = a[i];
            a[i] = a[minIndex];
            a[minIndex] = temp;
        }
    }

    void insertionSort(int *a, int n) {
        for (int i = 1; i < n; i++) {
            int key = a[i];
            int j = i - 1;

            while (j >= 0 && a[j] > key) {
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = key;
        }
    }

    void bubbleSort(int *a, int n) {
        for (int i = 0; i < n - 1; i++) {
            bool chk = true;

            for (int j = 0; j < n - 1 - i; j++) {
                if (a[j] > a[j + 1]) {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                    chk = false;
                }
            }
            if (chk)
                break;
        }
    }

    int partition(int *a, int low, int high) {
        int pivot = a[low];
        int i = low + 1;
        int j = high;

        do {
            while (a[i] <= pivot)
                i++;

            while (a[j] > pivot)
                j--;
            if(low < high){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        } while (i < j);

        int temp = a[low];
        a[low] = a[j];
        a[j] = temp;
        return j;
    }

    void quickSort(int *a, int low, int high) {
        if (low < high) {
            int partitionIndex = partition(a, low, high);
            quickSort(a, low, partitionIndex - 1);
            quickSort(a, partitionIndex + 1, high);
        }
    }
};
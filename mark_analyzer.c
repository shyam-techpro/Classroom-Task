#include<stdio.h>
// Global Variables Declaration and Initialization
int n=0;
char name[100][10];
int marks[100];
float avg=0;


void inputData();  // Input Data Function Declaration
void displayData(); // Display Data Function Declaration
void showReport(); // Show Report Function Declaration

int main() {
    int choice;
     // Selection loop for Student Marks program
    while (1) {
        printf("Choose Any 1 option from the menu\n");
        printf("1.Enter Name and Marks of the Students \n");
        printf("2.Display Name and Marks of the Students\n");
        printf("3.Complete Analysis of all the Students Marks\n");
        printf("4.Exit\n");
        
        printf("Enter Your Choice : ");  // Select your Options From here

        scanf("%d", &choice);

        if (choice == 1) {
            inputData();
        } 
        else if (choice == 2) {
            displayData();
        } 
        else if (choice == 3) {
            showReport();
        } 
        else if (choice == 4) {
            printf("Exiting the Program\n");
            break;
        } 
        else {
            printf("Invalid choice\n");
        }
    }

    return 0;
}

  // Input Data Function Definition
void inputData(){
    int flag =0;
    printf("Enter the number of Students information you want to store ?");
    scanf("%d",&n);
    if(n>0&&n<100){
        printf("Enter the names and marks of the respective Students :\n");
            for(int i=0;i<n;i++){
                scanf( "%s %d", name[i],&marks[i]);
                if(marks[i]<0){
                    flag=1;
                }
             }
             if(flag==1){
                 printf("Please Enter valid marks \n");
                 n=0;
        return;
             }  
            }
    printf("Data Successfully saved .\n");
}
    
// Display Data Function Definition
void displayData(){
    printf("Details Of the students with their respective marks :\n");
    for(int i=0;i<n;i++){
    printf("Student: %s, Marks: %d\n",name[i],marks[i]);
    }
}
 // Show Report Function Definition
void showReport(){
    int lowestmakrs=marks[0];
    int highestmarks=marks[0];
    int sum = 0;
    printf("Complete Analysis of all the Students Marks \n");
    for(int i=0;i<n;i++){
        if(lowestmakrs>marks[i])
        lowestmakrs=marks[i];
        else if(highestmarks<marks[i])
        highestmarks=marks[i];

        sum = sum+marks[i];
    }
    avg=(float)sum/n;
// Displaying the Final Report of all the Student Marks
    printf("Largest :%d\n",highestmarks);
    printf("Lowest :%d\n",lowestmakrs);
    printf("Average is :%.2f\n",avg);

}
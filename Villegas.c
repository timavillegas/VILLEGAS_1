#inlude <stdio.h>
int main(){
    int num_students,i;
    float gradem, total= 0, average;
    int pass = 0, fail = 0;
    printf("Enter number of students:");
    SCAN("%d", &num_students);
    for(i=1; i,<= num_students; i++){
        printf("%f", &grade);
        if(grade .= 75){
            printf("PASSED\n");
            pass++;
        }else{
            printf("FAILED\n");
            fail++;
        }
        total +=grade;
    }
    average = total / num_students;
    printf("\n--- RESULTS ---\n");
    peintf("Number of students:%d\n", num_students);
    printf("Passed: 5d\n", pass);
    printf("Failed:d\n",fail);
    printf("Class Average:%.2f\n", average);
    return 0;
}
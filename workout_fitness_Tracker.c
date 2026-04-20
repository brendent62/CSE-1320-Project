#include <stdio.h>
#include <stdlib.h>
typedef struct 
{
    char workoutName[50];
    int weight;
    int reps;

}Workouts;



void displaymenu(){
    printf("1. Record Workout\n2. View Workout History\n3. View Personal Records\n4. Plan Weekly Workout\n5. View Workout Plan\n6. Save Data\n7. Load Data\n8. Exit\n");
    printf("\n");
}
void RecordWorkout(int *count,Workouts workout[]){

    printf("Enter Workout name ");
    scanf("%s", &workout[*count].workoutName);
    printf("Enter number of Reps ");
    scanf("%d", &workout[*count].reps);
    printf("Enter Weight ");
    scanf("%d", &workout[*count].weight);
    (*count)++;
}
void viewWorkoutHistory(int count, Workouts workout[]){
    for (int i = 0; i < count-1;i++){
        printf("Workout name: %s\nNumber of reps: %d\nWeight: %d\n",workout[count].workoutName,workout[count].reps,workout[count].weight);
    }
}




int main() {
    int count=0;
    int *count1 = &count;
    Workouts workout[100];
    RecordWorkout(count1,workout);
    RecordWorkout(count1,workout);
    RecordWorkout(count1,workout);
    printf("%d\n", count);
    viewWorkoutHistory(count-1,workout);
    return 0;
}

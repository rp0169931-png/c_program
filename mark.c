// Program to calculate the grade of a student based on marks obtained in 5 subjects//

# include<stdio.h>
int main(void){
    float total=0 ,mark, persentage;
printf("Enter the mark of subject:maths,science,english,hindi,computer: ");
for(int i=0;i<5;i++){
    scanf("%f",&mark);
    total+=mark;
}
persentage=(total/500)*100;
if(persentage>=90){
    printf("Grade A");
}
else if(persentage>=75){
    printf("Grade B");
}
else if(persentage>=65){
    printf("Grade C");
}
else if(persentage>=40){
    printf("Grade D");
}
else{
    printf("Fail");
}
printf("\nPersentage: %.2f",persentage);
return 0;
}
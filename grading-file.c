#include<stdio.h>
char grade(double avg){
    if(avg >= 80) return 'S';
    if(avg >= 70) return 'A';
    if(avg >= 60) return 'M';
    if(avg >= 50) return 'B';
    if(avg >= 40) return 'C';
    return 'F';
}
int main(){
    FILE *fin = fopen("input.txt","r");
    FILE *fout = fopen("output.txt","w");

    if (fin == NULL || fout == NULL) {
        return 0;
    }

    int m1,m2,m3,m4,m5;

    while(fscanf(fin,"%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5)==5){
    double sum = (m1+m2+m3+m4+m5);
    double avg = sum/5.0;

    char g = grade(avg);

    if(g == 'S'){
        fprintf(fout,"A+\n");
    }
    else if (g == 'M'){
        fprintf(fout,"A-\n");
    }
    else{
        fprintf(fout,"%c\n",g);
    }
    }


    fclose(fin);
    fclose(fout);

    return 0;
}

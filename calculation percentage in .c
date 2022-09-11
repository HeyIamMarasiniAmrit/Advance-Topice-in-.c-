int calcapercentage (int science, int math, int sanskrit);

int main(){
    int sc = 98;
    int math = 95;
    int sanskrit = 98;

    printf("percentage is : %d", calcpercentage (sc, math, sanskrit));
    return 0;
}
int  calcapercentage (int science, int math, int sanskrit){
return(( science + math + sanskrit)/ 3);
}

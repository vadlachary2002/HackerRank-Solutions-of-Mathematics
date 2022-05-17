/*
Given integers  and , find the smallest integer , such that there exists a triangle of height , base , having an area of at least .
*/

int lowestTriangle(int trianglebase, int area) {
    float h=(2*area);
    h=h/trianglebase;
    int h1=(int)h;
    
    float h2=(float)h1;
    printf("%.2f %.2f\n",h,h2);
    if(h!=h2){
        return h1+1;
    }
    return h1;
    

}

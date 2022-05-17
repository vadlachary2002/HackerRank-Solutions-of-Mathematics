/*
Consider two points,  and . We consider the inversion or point reflection, , of point  across point  to be a  rotation of point  around .

Given  sets of points  and , find  for each pair of points and print two space-separated integers denoting the respective values of  and  on a new line.
*/

int* findPoint(int px, int py, int qx, int qy, int* result_count) {
    int *arr=malloc(sizeof(int)*2);
    *arr=2*qx-px;
    *(arr+1)=2*qy-py;
    *result_count=2;
    printf("%d %d\n",*arr,*(arr+1));
    return arr;
}

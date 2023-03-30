#include "COO.h"
TSMatrix ADD(TSMatrix A,TSMatrix B)
//返回矩阵A、B相加的结果
{
/************** begin *****************/
    TSMatrix ans;
    int max_i = 0, max_j = 0;
    int a = 1,b = 1,count = 1;
    while(a<=A.tu || b<=B.tu ){
        if(a > A.tu){
            ans.data[count] = B.data[b++];
        }
        else if (b > B.tu){
            ans.data[count] = A.data[a++];
        }
        else if(A.data[a].i != B.data[b].i || A.data[a].j != B.data[b].j){
            if(A.data[a].i != B.data[b].i){
                ans.data[count] = (A.data[a].i <= B.data[b].i) ? A.data[a++] : B.data[b++];
            }
            else{
                ans.data[count] = (A.data[a].j <= B.data[b].j) ? A.data[a++] : B.data[b++];
            }
        }
        else{
            if((A.data[a].e + B.data[b].e )== 0){
                a++;
                b++;
                continue;
            }
            else{
                ans.data[count] = A.data[a];
                ans.data[count].e += B.data[b].e;
            }
        }
        if(ans.data[count].i > max_i) max_i = ans.data[count].i;
        if(ans.data[count].j>max_j) max_j = ans.data[count].j;
        count++;
    }
    ans.mu = max_i;
    ans.nu = max_j;
    ans.tu = count;
    
    return ans;
/**************  end  *****************/
}

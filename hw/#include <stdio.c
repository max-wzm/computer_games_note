#include <stdio.h>
#include <time.h>

typedef struct
{
    int len;     // 向量长度，即元素的个数
    float *data; // 向量元素的存储地址
} vec;

/*获取向量长度*/
int vec_length(vec *v) { return v->len; }

/*获取向量中指定下标的元素值，保存在指针参数 val 中*/
int get_vec_element(vec *v, size_t idx, float *val)
{
    if (idx >= v->len)
        return 0;
    *val = v->data[idx];
    return 1;
}

void vector_sum(vec *v, float *sum){
    long int i;
    *sum = 0;
    for ( i = 0; i < vec_length(v); i++)
    {
        float val;
        get_vec_element(v, i, &val);
        *sum = *sum +val;
    }
}

void my_vector_sum(vec *v, float *sum){
    long int i;
    int len = vec_length(v);
    float my_sum = 0;
    float val;
    for ( i = 0; i < len; i++)
    {
        get_vec_element(v, i, &val);
        my_sum += val;
    }
    *sum = my_sum;
}

int main(){
    float data[1024];
    for (size_t i = 0; i < 1024; i++)
    {
        data[i] = (float) i;
    }
    vec v;
    v.len = 1024;
    v.data = data;
    float sum;
    int times = 100000;
    clock_t s = clock();
    for (size_t i = 0; i < times; i++)
    {
        my_vector_sum(&v, &sum);
    }
    clock_t e = clock();
    double my_time = (double)(e - s)/times;
    s = clock();
    for (size_t i = 0; i < times; i++)
    {
        vector_sum(&v, &sum);
    }
    e = clock();
    double his_time = (double)(e - s)/times;
    return 0;
}
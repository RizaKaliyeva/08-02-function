enum type_number { positive, negative, all };

int happy(char * arr);
int numb(type_number tn, int start = 1, int end = 10);
void sort_u(int *arr, int r);
void sort_d(int *arr, int r);
void sort(int*arr, int r,int n=1);

void create(int *arr, int r, int start, int end, type_number tn);
void print_arr(int *arr, int r);
void arr_d(int *arr, int  arr1[][4], int r);
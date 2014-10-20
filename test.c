/* test */

/*
 * 求1+2+..+n，要求不能使用乘除法、for、while、if、else、switch、case等关键字以及条件判断语句(A?B:C)。
 * 解法1：利用递归、&&运算符属性。
 */
int add1(int n)
{
  int sum = 0;
  
  n && (sum = add(n-1) + n);
  return sum;
}

/*
 * 求1+2+..+n，要求不能使用乘除法、for、while、if、else、switch、case等关键字以及条件判断语句(A?B:C)。
 * 解法2：利用递归、&&运算符、静态变量属性。
 */
int add2(int n)
{
  static int sum = 0;

  n && add2(n-1);
  return (sum += n);
}


/*
 * 判断该数组是不是某二元查找树的后序遍历的结果。
 * 输入: 数组a[low, high]
 */
int ispostorder(int a[], int low, int high)
{
  int i, middle;
  int ret = TRUE;

  for (i = low; i < high && a[i] < a[high]; i++)
    ;

  middle = i;

  for (; i < high; i++)
  {
    if (a[i] < a[high])
      return FALSE;
  }

  if (low < middle - 1)
    ret = ispostorder(a, low, middle - 1);

  if (FALSE == ret)
    return ret;

  if (middle < high - 1)
    ret = ispostorder(a, middle, high - 1);

  return ret;
}

/*
 * 不用加减乘除运算，求两个数之和。
 * a, b也可以为负数
 */
int add_without_arithmetic(int a, int b)
{
  char *p = (char *) a; /* char *步长为1，int *步长为4 */
  return (int) &p[b];   /* p[b] == *(p + b) */
}

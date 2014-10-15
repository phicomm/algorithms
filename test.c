/* test */

/*
 * 题目：求1+2+..+n，要求不能使用乘除法、for、while、if、else、switch、case等关键字以及条件判断语句(A?B:C)。
 * 解法1：利用递归、&&运算符属性。
 */
int add1(int n)
{
  int sum = 0;
  
  n && (sum = add(n-1) + n);
  return sum;
}

/*
 * 题目：求1+2+..+n，要求不能使用乘除法、for、while、if、else、switch、case等关键字以及条件判断语句(A?B:C)。
 * 解法2：利用递归、&&运算符、静态变量属性。
 */
int add2(int n)
{
  static int sum = 0;

  n && add2(n-1);
  return (sum += n);
}

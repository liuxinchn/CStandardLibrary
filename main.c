/*
 * @Description:
 * @Author: liuxin
 * @Institution: Shandong University(WeiHai)
 * @Email: 494113931@qq.com
 * @Date: 2022-11-01 22:44:52
 * @LastEditTime: 2022-11-01 23:23:38
 */
#include <stdio.h>

int main()
{
    FILE *fp = fopen("main.c", "r");
    if (fp == NULL)
    {
        printf("Can't open store file...\n");
    }

    char tmp[12];
    fread(tmp, 1, 12, fp);
    printf("tmp = %s\n", tmp);

    int ret = fclose(fp);

    return 0;
}
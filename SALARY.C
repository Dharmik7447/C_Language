 #include<stdio.h>
 #include<conio.h>
 main()
{
int baseSalary, ta, da, hra, grossSalary; clrscr();
printf("Please enter your Base Salary : ");
scanf("%d",&baseSalary);
ta =(8 * baseSalary)/100;
da = ( baseSalary * 5) / 100;
hra = (baseSalary * 10)/100; grossSalary = ta + da + hra + baseSalary;
printf("TA: %d\n",ta);
printf("DA: %d\n",da);
printf("HRA: %d\n",hra);
printf("Gross Salary is: %d\n",grossSalary);
getch();
return 0;
}
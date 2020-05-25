#!/bin/zsh #定义运行的shell
#这是一个练习shell script比较的脚本
#脚本使用方法
# chmod +x RH134-1-2_2.sh #增加可执行权限

aa=1;
bb=2;
[ ${aa} -eq ${bb} ] #变量前面要加$符号 
# 数字类型比较
## -eq 等于
## -ne 不等于
## -gt 大于
## -ge 大于等于
## -lt 小于
## -le 小于等于
echo $?

if [ $aa -eq $bb ] ; then
	echo '变量a和b相等'
else
	echo '变量a和b不相等'
fi

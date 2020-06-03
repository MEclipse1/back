#!/bin/zsh #定义运行的shell
#这是一个练习shell script比较的脚本
#脚本使用方法
# chmod +x RH134-1-2_2.sh #增加可执行权限

aa=1;
bb=2;
[ ${aa} -eq ${bb} ] #变量前面要加$符号 
echo $?

# 数字类型比较
## -eq 等于
## -ne 不等于
## -gt 大于
## -ge 大于等于
## -lt 小于
## -le 小于等于
if [ $aa -eq $bb ] ; then
	echo '变量a和b相等'
else
	echo '变量a和b不相等'
fi

# 字符类型比较 在bash中
## == 等于
## != 不等于
## > 大于
## <= 大于等于
## < 小于
## <= 小于等于
age=x123
#read -p  "你是否已经到了18岁?(y/n)" age
#note: read命令在mac zsh 环境下不好用，暂时还不知道如何通过read给一个变量赋值
if [ $age = y ];then #在zsh 语法中判断是否两个变量是否相等用一个等于号 不同于bash
	echo "恭喜你已经到了18岁"
elif [ $age = n ];then #elseif 的情况下要写elif 不同于java/php等语言
	echo "你还没有到18岁哦"
else
	echo "请输入y/n"
fi

# 在比较中使用通配符
if [[ $age == x* ]]; then 
	echo "匹配到了已x字符为开头的变量"
fi

# 在比较中使用正则表达式
number=123
if [[ $number =~ ^[0-9]+$  ]]; then
	echo "匹配到了数字"
fi

#使用正则表达式判断y Y yes Yes
# ^[yY](es){0,1} 只能匹配 y Y yes Yes
# ^[yY]([Ee][Ss]) 能匹配 y Y yes Yes yEs...等等

# 编写一个脚本只运训root用户使用
name=`whoami`
if [ $name = root ]; then #字符串判断不需要加引号
	echo "这个if分支只能是由root用户进入"
else
	echo "这个else分支由非root用户进入"
fi

# 判断一个文件的属性
# -w -r -x -e -l -f -d 判断文件是否 可写 可读 可执行 存在 链接 文件 目录
# -n 当串的长度不为为0时为真
# -z 当串的长度为0时为真(空串)  
# ! -w
# ! -r
# ....    判断文件是否 没有 可写 可读 等等权限

# 执行shell 脚本 的4种方式
# 1 ./shell.sh  #1和2 是在子shell中运行
# 2 sh shell.sh
# 3 . shell.sh #3和4 是在当前shell中运行
# 4 source shell.sh3

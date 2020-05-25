#/bin/zsh
#通过scp命令将sql语句传到远程机器上
scp ${1} vps:~/${1}
#执行mysql命令
#/usr/bin/mysql -u tenpoapp -ppHfas-a1w db_cpon2
ssh vps "/opt/lampp/bin/mysql -utenpoapp -ptenpoapp db_cpon2 < ${1} > ${2}"
#通过sco命令将sql语句结果保存到本地机器上
scp vps:~/${2} ${2}
#删除远程机器上的文件sql文件和sql语句结果文件
ssh vps "rm -rf ${1} ${2}"

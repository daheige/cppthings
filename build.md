 # c++编译运行步骤
 
    预处理：
    g++ -o hello.ii -E hello.cpp

    编译：将预处理文件转化为汇编文件
    g++ -o hello.s -S hello.ii


    汇编：形成目标文件
    g++ -o hello.o -c hello.s

    链接： 把函数库导入进来，生成可执行文件
    g++ -o helloworld hello.o

    执行：
    % ./helloworld
    hello,world
    a,b,c
    1
    12
    1.23

    汇总起来就是一个命令
    g++ -o helloworld hello.cpp

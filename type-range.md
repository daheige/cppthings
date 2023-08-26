# c++ 数字取值范围
![](int-range.jpg)

![](number-range.jpg)

上面所说的全部是有符号型的，short，int，long, long long都默认为有符号型，
其中long和int都占4个字节的空间大小，他们有什么区别呢？
1byte=8bit 不同的操作系统所占据的字节不一样
16位操作系统：long：4字节，int：2字节
32位操作系统：long：4字节，int：4字节
64位操作系统：long：8字节，int：4字节

C语言规定：无论什么平台都要保证long型占用字节数不小于int型, int型不小于short型。

## ConsoleLog
一个简单的控制台日志库

##### Version: 1.0.0

### 使用方式
* 将位于 `include` 目录中的 [xf_log_console.h](./include/xf_log_console.h) 头文件拷贝到自己的项目中，并在需要打印日志的源文件中引用它。
* 给自己的项目添加预定义宏 `_xf_log_console`。
* 使用宏 `_xfLog` 输出日志，就像使用 `printf` 函数一样，例如：
  ```c++
  _xfLog("a text");
  _xfLog("output: %s, number: %d", "string", 7);
  ```

### 特性
* 适用于简单的日志输出场景，利用宏 `_xf_log_console` 控制日志是否输出。即：对于 _xfLog 打印语句，在定义了该宏时生效，未定义时将被编译器忽略。
* _xfLog 打印语句是线程安全的，利用全局锁保证打印顺序。
* 默认输出当前时间，精确到毫秒，以及当前线程id。示例：`01:23:45.678(0x34321523)-> log text`。
* 单条日志最大长度不得超过1k，即1024个字符。
* 对于常量 `format` 字符串结合 `C++17` 特性，可以得到类似 `printf` 的编译期警告。例如：
  ```c++
  
  _xfLog("output: %s, number: %d", "string", 7);
  ```
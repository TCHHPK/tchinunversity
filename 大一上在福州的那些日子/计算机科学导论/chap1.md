# 第一章
## 复习题
1. 定义一个基于Turing model的计算机
>![圖片](https://hackmd.io/_uploads/SkbjB6QsR.png)

2. 定义一个基于Von Neumann Architecture的计算机
>![圖片](https://hackmd.io/_uploads/HJHhSpQj0.png)

3. 在基于Turing model的计算机中，程序的作用是什么
> 控制计算过程，状态转换的规则，实现可计算功能

4. 在基于Von Neumann Architecture的计算机中，程序的作用是什么
>指令存储与执行，控制流程，与硬件交互，实现抽象功能

5. 计算机中有哪些子系统
> 存储器、算数逻辑单元（ALU）、控制单元子系统、输入输出

6. 计算机中存储器子系统的功能是什么
> 用来存储的区域，在计算机的处理过程中用来存储数据和程序

7. 计算机中ALU子系统的功能是什么
> ALU是用来进行计算和逻辑运算的地方，亦可以对数据进行进行算术运算的地方。

8. 计算机中控制单元子系统的功能是什么
> 控制单元是对存储器、算数逻辑单元、输入输出等子系统进行控制操作的单元。

9. 计算机中输入/输出子系统的功能是什么
>  输入子系统负责从计算机外部接收输入数据，输出子系统负责将计算机的处理结果输出到计算机外部。

10. 简述五个时代的计算机
> 第一代以商用计算机的出现为主要特征，在这个时期只有专家们才能使用。
> 第二代使用晶体代替真空管，减小体积和开支，FORTRAN和COBOL的发明使得编程更加的容易
> 第三代集成电路的发明更加减少了计算机的成本和大小，开始出现在市场上，封装的程序（软件包），软件工业就此诞生
> 第四代出现微型计算机，电子工业的发展允许整个计算机子系统做在单块电路板上，这一代还出现了计算机网络
> 第五代见证了掌上计算机和台式计算机的诞生，并且直到今日尚未结束



## 练习题
1. 解释为什么计算机无法解决那些计算机外部世界无解决方法的问题
> 计算机是按照严格定义的算法和规则运行的。
> 计算机可以执行一系列定义明确的操作
> 但如果问题本身没有已知的算法或者规则（如某些哲学、伦理、或者未解的科学问题）
> 那么计算机无法找到解决方案。
> 《参考回答：CHATGPT》
>
2. 如果有一台小的便宜的计算机可以做大型昂贵的计算机同样能做的事情为什么人们需要大型的
> 大型计算机在处理速度、并行处理能力、存储容量、可靠性、扩展性和专用硬件支持方面具有显著优势
> 能够满足复杂和高要求的计算需求，这也是为什么在某些情况下仍然需要大型计算机的原因。
> 《参考回答：CHATGPT》
>
3. 研究Pascaline计算机，看看是否符合Turing Model
> Pascaline计算机有着输入输出和计算加法的计算器，故满足Turing Machine的定义
> [《参考资料》](https://zh.wikipedia.org/zh-tw/%E6%BB%BE%E8%BC%AA%E5%BC%8F%E5%8A%A0%E6%B3%95%E5%99%A8)[《参考资料》](https://pansci.asia/archives/186445)
>
4. 研究Leibnitz‘s Wheel，看看是否符合Turing Model
>  图灵机由一个无限长的纸带（相当于内存）、一个读写头、状态寄存器和一组指令构成。图灵机是一个通用计算模型，理论上能够执行任何可以算法化的问题，但leibnitz's wheel只可以进行四则运算，也就是turing model包含但不限于leibnitz's wheel。
> [《参考资料》](https://baike.baidu.hk/item/%E8%90%8A%E5%B8%83%E5%B0%BC%E8%8C%A8%E4%B9%98%E6%B3%95%E5%99%A8/3885233) [《参考资料》](https://www.computerhistory.org/revolution/calculators/1/49) 《参考回答：CHATGPT》
>
5. 研究Jacquard Loom，看看是否符合Turing Model
> 1801年，Joseph Marie Jacquard对Jacquard Loom的设计进行了改进，其中他使用了一系列打孔的纸卡片来作为编织复杂图案的程序。尽管Jacquard Loom的设计和操作方式与Turing Model有类似之处，但Jacquard Loom机并不具备Turing Model的计算能力。Turing Model是一个理论模型，用于证明计算的可行性和复杂性，而Jacquard Loom机则是一个具体的工业机器，用于特定的自动化任务。
> [《参考资料》](https://en.wikipedia.org/wiki/Jacquard_machine)《参考回答：CHATGPT》
>
6. 研究Analytical Engine，看看他是否符合Von Neumann Architecture
> 分析机：是机械计算机，设计上并不具备现代电子计算机的电子和数字特性。冯·诺依曼架构：基于电子计算机的设计，具有高速的数据处理能力和存储能力。故两者不相符合。
> [《参考资料》](https://en.wikipedia.org/wiki/Analytical_engine)《参考回答：CHATGPT》

7. 研究ABC计算机，看看他是否符合Von Neumann Architecture
> ABC電腦開創了現代電腦的重要元素，包括二進位算術和電子開關。但是因為缺乏儲存程序的機制，不符合Von Neumann Architecture的概念，但它在计算机历史上发挥了重要作用，为后来的计算机设计奠定了基础。
>[《参考资料》](https://zh.wikipedia.org/wiki/%E9%98%BF%E5%A1%94%E7%BA%B3%E7%B4%A2%E5%A4%AB-%E8%B4%9D%E7%91%9E%E8%AE%A1%E7%AE%97%E6%9C%BA)
>
8. 研究并找出键盘起源于哪一代计算机
> 起源：键盘的概念可以追溯到早期的电传打字机（Teletype），这些设备在第一代计算机中被用于输入数据。这些早期键盘与电传打字机直接相连，允许操作者通过键盘输入命令或数据。
> 《参考回答：CHATGPT》
>

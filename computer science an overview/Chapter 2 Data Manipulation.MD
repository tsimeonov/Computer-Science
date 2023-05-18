# 2.1 Computer Architecture
The circuitry in a computer that controls the manipulation of data is called 'central processing unit', or 'CPU' (often referred to as merely the processor).

## CPU Basics
A CPU consists of three parts: the `arithmetic/logic unit`, which contains the circuitry that performs operations on data (such as addition and substraction); the `control unit`, which contains the circuitry for coordinatiing the machine's activities; and the `register unit`, which contains data storage cells (similar to main memory cells), called `registers`, that are used for temporary storage of information within the CPU.

<em><img src="./images/cpu.png" height="250" width="400"> CPU and main memory connected via a bus</em>

Some of the registers within the register unit are considered `general-purpose registeres` whereas others are `special-purpose registers`. <br>
General purpose registers serve as temporary holding places for data being manipulated by the CPU. <br>
For the purpose of transfering bit patterns, a machine's CPU and main memory are connected by a collection of wires or traces called a `bus`.

## The Stored-Program Concept
A sequence of bits may represent instructions or data.<br>
Cache Memory - It is instructive to compare the memory facilities within a computer in relation to their functionality. Registers are used to hold the data immediately applicable to the operaion at hand; main memory is used to hold data that will be needed in the near future; and mass storage is used to hold data that will likely not be needed in the immediate future. Many machines are designed with an additional memory level, called cache memory. `Cache memory` is a portion (perhaps several hundred KB) of high-speed memory located within the CPU itself.

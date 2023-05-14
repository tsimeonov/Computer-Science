# Bits and Their Storage

- At the lowest level, all digital data are represented by bits.
- At a higher level, bits are grouped to represent abstractions, including but not limited to numbers, characters and color
- At one of the lowest level of abstrction, digital data is represented in binary (base 2) using only combinations of the digits an one.

## Boolean Opearions

Opearations that manipulate true/false values are called **Boolean operations**.

<em><img src="./boolean-operations.png" height="350" width="350" > The possible input and output values of Boolean operaions AND, OR, XOR (exclusive or)</em>

## Gates and Flip-Flops

Logic gate is an electronic circuit that performs a logical operation on one or more inout signals to produce an output signal. 
The input and output signals of a logic gate are binary in nature, meaning they can only have one of two possible states: 'on' or 'off', 
'high' or 'low', 'true' or 'false'.


<em><img src="./logic-gates.png" height="350" width="350"> A pictorial representaion of AND, OR, XOR, and NOT gates as well as their input and output values.</em>

A Flip flop is a type of digital electronic circuit that is used to store a single bit of information. The term 'flip-flop' comes from the fact that can be in one of two stable states, which can be flipped back and forth by applying an appropriate inout signal.

<em><img src="./flip flop circuit.png" height="100" width="400"> A simpe flip-flop circuit</em>


<em><img src="./output flip-flop.png" height="250" width="450"> Setting the output of a flip-flop to 1</em>
  
## Hexadecial Notaion
  
Hexadecimal (base 16) is used to represent digital data because hexadecimal representaion uses fewer digits than binary.
  
# Main Memory
  
## Memory Organization 
In computer science, memory organization refers to the way that a computer's memory is organized and managed. 
Memory is an essential component of a computer system, as it is used to store data and instructions that the computer needs to operate.
There are several levels of memory organization in a compute system, each with its own characteristics and performance characteristics.
`At the lowest level, memory is organized into individual bits, which are the smallest unit of information that a computer can store.
Bits are grouped together into bytes, which typically consist of eight bits and are used to represent a singe character or other small pieces of data.`

## Measuring Memory Capacity
In CS, memory capacity is typically measured in terms of the number if bits or bytes that a particular memory device can store.
The memory capacity is typically measured in powers of two, with the most common units of measurement being kilobytes (KB), megabytes (MB), gigabytes (GB), terabytes (TB).
For example, a memory device with a capacity of 1KB can store 1024 bytes of data, while a memory device with a capacity of 1GB can store 1024 megabytes or 1,073,741,824 bytes.
  
## Mass Storage
Due to the volatility and limited size of a computer's main memory, most computers have additional memory devices called `mass storage` (or secondary storage) systems,
including magnetic disks, CDs, DVDs, magnetic tapes, flash drives, and solid-state drives.
A major disadvantage of magnetic and optical mass storage systems is that they typically require mechanicl motion and therefore require significantly more time to store and 
retrieve data than a machine's main memory, where all activities are performed electronically.
 
### Magnetic Systems
The `bandwidth` of a system is a measure of bit rate - the amount of data (measured in bits) that can be sent in a fixed amount of time.
The `latency` of a system is the time elapsed between the transmission and the receipt of a request.

# Representiong Information as Bit Patterns

## Representing Text

- ASCII stands for `American Standard Code for Information Interchange`. It is a character encodinf standard that assigns unique value to each character commonly used in computer science communications, includind letters, numbers and punctuation marks.
- ISO stands for `International Organization for Standardization`. It is and independent, non-goverment international organization that develops and publishes various standards for various industries and products.
- Unicode is a universal character encoding standard that assigns a unique code point ir number to every charecter or symbol in writte language, including scripts used in languages aroud the world.
- A dile consisting of a long sequence of symbols encoded using ASCII or Unicode is often called `text file`.

## Representig Numbers
- Number bases, including binary, decimal and hexadecimal, are used to represent and investigate digital data.
- Numbers can be converted from any base to any other base. Binary notation (base 2), decimal notation (base 10), hezadecimal notation (base 16).

## Representing Images
One means of representing an image is to interpret the image as a collection of dots, each of which is called a `pixel`, short for 'picture element'. The appearance of each pixel is then encoded and the entire image is represented as a collection of these encoded pixels. Such a collection is called a `bit map`.
A disadvantage of representing images as bit maps is that an image cannot be rescaled easily to any arbitrary size. Essentially, the only way to enlarge the image is to make the pixels bigger, which leads to a grainy appearance.
An alternative way of representing images that avoids this scaling pronblem is to describe the image as a collection of geometric structures, such as lines and curves, that can be encoded using techniques of analytic geometry.

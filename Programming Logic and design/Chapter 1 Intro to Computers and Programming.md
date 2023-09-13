## 1.1 Introduction

A `program` is a set of instructions that a computer foloows to perfoem a task.
Programs are commonly referred to as `software`.

## 1.2 Hardware

The term `hardware` refers to all of the physical devices, or `components` that a computer is made of.

- The central processing unit (CPU) - The part of a computer that executes programs
- Main memory - a computers memory that stores programs while they are running, as well as the data the data the programs are working with.
  Main memory is commonly known as `random-access memory` or `RAM`.
- Secondary storage devices - A type of data that can hold memory for long periods of time, even when there is no power to the computer.
- Input devices - Any data that the computer collects from people or other devices.
- Output devices - Data the computer produces for people or other devices.

## 1.3 How computers store data

All data that is stored in a computer is converted to dequences of 0s and 1s.
A computers' memory is divided into tiny storage locations known as `bytes`. One byte is only enough memory to store a letter of the alphabet or a small number. Each byte is divided into eight smaller locations known as bits.

<img src="./img/bit representation.png" width="700">

---

<h6>Storing Numbers</h6>

A bit cvan be used in a very limited way to represent numbers. Depending on whether the bit is turned on or off, it can represent one of two fifferent values.

<img src="./img/determine the value of.png" width="250">

<img src="./img/using two bytes.png" width="700">

Two bytes used for large number

---

<h6>Storing Characters</h6>

Any piece of data that is stored in a computers' memory must be stored as a binary number. That includes characters, such as letters and punctuation marks. When a character is stored in memory, it is first converted to a numeric code.

<img src="./img/letter a representation.png" width="500">

---

<h6>Advanced Number Storage</h6>

Negative numbers are encoded using a technique known as `two's complement`, and real numbers are encoded in `floating-point notation`. These two encoding schemes are used to convert negative numbers and real numbers to binary format.

---

<h6>Other types of data</h6>

Computers are often referred to as digital devices. The term `digital` can be used to describe anything that uses binary numbers. Digital data is data that is stored in binary, and a `digital device` is any device that works with binary data.

## 1.4 How a Program works

A program is nothing more than a list of instructions that cause the CPU to perform operations.
CPU's only understand instructions that are written in `machine language` and machine language instructions are always written in binary.
The entire set of instructions that a CPU can execute is known as the CPU's `instruction set`.

When a CPU executes the instructions in a program, it is engaged in a process that us known as the `fetch-decode-execute cycle`.

1. `Fetch` - The first step of the cycle is to fetch, or read the next instruction from memory into the CPU.
2. `Decode` - In this step the CPU decodes the instruction that was just fetched from memory, to determine which operation it should perform.
3. `Execute` - The last step in the cylcle is to execute or perform the operation.

<img src="./img/fetch-decode-execute cylcle.png" width="600">

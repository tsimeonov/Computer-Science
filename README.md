# Week 1 

## How the web works

### How the internet works
The internet is a global network of computers and other devices that are connected to each other using a standardized communication protocol called the Internet Protocol (IP). The inter works by enabling these devices to communicate with each other, share information, and access resources that are stored on other devices connected to the network.

### What is a web server and how does it work?
A web server is a software program that runs on a computer or server and delivers content, such as web pages, to clients that request it via the internet using HTTP (Hypertext Transfer Protocol) protocol. 

### Web hosting
Web hosting is a service that allows individuals and organizations to make their websites accessible on the internet. In other words, it’s the process of renting space on a server to store website files and make them available to others to view online.
There are various types of web hosting services available, including shared hosting, dedicated hosting, cloud hosting and more.

## Core internet technologies

### Introduction to Internet Protocols
Internet protocols are standardized methods for communication between different devices and applications on the internet. They provide a set of procedures for transmitting and receiving data across networks.
There are many different internet protocols that are used for different purposes, but some of the most common ones include: 
1. IP (Internet Protocol) : This is the core protocol of the internet that enables communication between devices by routing data packets to networks.
2. TCP (Transmission Control Protocol): This protocol provides reliable, ordered and error-checked delivery of data between applications running on different devices.
3. HTTP (Hypertext Transfer Protocol): This is the protocol used for transmitting web pages and other resources over the internet.
4. FTP (File Transfer Protocol): This protocol is used for transferring files between computers over the internet.
5. SMTP (Simple Mail Transfer Protocol): This protocol is used for sending and receiving email messages over the internet.
6. DNS (Domain Name System): This protocol is used for translating human-readable domain names (such as www.example.com) into IP addresses that computers can use to locate services on the internet.

### Introduction to HTTP 

#### HTTP Methods

| HTTP Methods        | Description           | 
| ------------- |:-------------:| 
| GET     | The client requeres a resource on the web server | 
| POST      | The client submits data to a resource on the web server    | 
| PUT | The client replaces a resource on th web server     |  
| DELETE | The client deletes a resource on the web server     | 

#### HTTP Request Headers

Commmon headers are: 
```
Host: example.com
User-Agent: Mozilla/5.0 (Macintosh; Intel Mac OS X 10.9; rv:50.0) Gecko/20100101 Firefox/50.0
Accept: */*
Accept-Language: en
Content-type: text/json
```
- The **Host** header specifies the host of the server and indicates where the resource is requested from.
- The User-Agent header informs the web server of the application that is making the request. It often includes the operating system (Windows, Mac, Linux), version and application vendor.
- The Accept header informs the web server what type of content the client will accept as the response.
- The Accept-Language header indicates the language and optionally the locale that the client prefers.
- The Content-type header indicates the type of content being transmitted in the request body.


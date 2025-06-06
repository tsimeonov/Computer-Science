### Lesson 3.1: Networks

#### What is a computer network ?

A computer network id a group of connected computers and other devices (like printers, routers or servers) that can communicate and share resources woth each other.

#### Types of computer networks

|Type| Description|Example|
|:----:|:----:|:----:|
|LAN|Local Area Network - small area like an office| School or home|
|WAN|Wide Area Network - Large, scale, global coverage| The interner|
|MAN|Metropolian Area Network - city wide network|City hospital systems|
|PAN|Personal Area Network - very small, personal use|Bluethooth between phone & tablet|

#### Key Components
- Router – Connects different networks, like your home to the internet.
- Switch – Connects devices in a local network and directs traffic.
- Server – Provides data or services (like a website or file storage).
- Client – A device that uses the network (like your laptop or phone).

----

### Lesson 3.2: Security

A virus is a piece of software that copies itself from one computer to another without your knowledge, and is normally aimed at damaging your computer in some way. This could mean that it slows it down, or interferes in other ways with the working of your operating system, or it could perform specifically harmful actions like stealing your data, or hacking other machines on your network. 
One example of this is spyware, which records what you do on a computer and sends the information to a third party. 

Malicious software can also take the form of a Trojan horse which appears to be legitimate software, but performs harmful actions in secret. 
Another is that criminals can try and hack computer systems. That means getting access to a system that they would not normally have access to, so they can steal data. Hackers normally do this to web servers or other Internet servers that can contain lots of data rather than hacking anyone's individual computer. One way hackers do this is through a phishing attack. This is where people are fooled into giving away important data like passwords or bank details. This normally happens through a plausible looking email or website that looks like it's from your bank or similar site, but is actually controlled by criminals. 

---- 

### Encryption

#### What is encryption?

Encryption is the process of converting readable data (called plaintext) into an unreadable format (ciphertext) so that only authorized users can access the original information.
It protects sensitive data during storage or transmission, ensuring confidentiality, integrity, and security.

####  How It Works (Simplified)
1. Sender encrypts the data using an algorithm and a key.
2. The encrypted data is sent or stored.
3. Receiver decrypts it using the correct key.

####  Types of Encryption
1. Symmetric Encryption
- Same key is used for encryption and decryption.
- Fast, but key must be shared securely.
Example: AES (Advanced Encryption Standard)

2. Asymmetric Encryption
- Uses a public key to encrypt and a private key to decrypt.
- More secure for communication over untrusted networks.
Example: RSA

-----
### The internet

#### 🌐 What is the Internet?

-  The internet is a network of networks that enables communication between computers across the globe.
-  Routers connect different networks and forward messages, allowing communication across boundaries

#### 📶 Connecting to the Internet

- People usually connect through local networks (home, work, public places)
- These local networks connect to Internet Service Providers (ISPs)
- ISPs connect to larger international networks called the Internet Backbone.

#### ✉️ How Messages Travel
- Messages do not travel directly from sender to receiver.
- They pass through multiple routers and networks, possibly spanning countries and continents.
- Messages may also pass through platforms like Coursera, adding more network hops.

#### 📦 Protocols and Packets
- Communication uses multiple protocols at once (e.g., Wi-Fi, IP, TCP, HTTP).
- A protocol defines the rules for data exchange, like a virtual envelope.
- Messages are wrapped in multiple layers:
  - Application protocol (like email or web)
  - IP (Internet Protocol)
  - Network-specific protocols (like Wi-Fi)
 
#### 🧭 IP Addresses and Domain Names
- Every device has an IP address so routers can deliver data correctly.
- We use URLs (like www.example.com) instead of IPs for convenience.
- URLs are converted to IP addresses using DNS (Domain Name Service).

----

### Lesson 3.2: Security

#### `Security threats`

🦠 Types of Threats:
1. Malicious Software (Malware):
- Virus: Self-replicates and harms your system (slows it down, steals data, etc.).
- Spyware: Secretly records activity (e.g., keystrokes) and sends data to third parties.
- Trojan Horse: Disguised as legitimate software but secretly harmful.
2. Hacking:
- Unauthorized access to computer systems (typically servers) to steal data.
3. Phishing:
- Fake emails or websites trick users into giving up personal info (e.g., passwords, bank details).

#### `Encryption`

The Internet sends messages through many routers, which means others could intercept and read them. **Encryption** protects privacy by turning readable messages into coded ones that only the intended receiver can understand.

Encryption relies on two things:

* An **algorithm** (e.g., Caesar’s method of shifting letters).
* A **key** (a number that controls the algorithm).

Modern encryption is highly secure and often uses **public key encryption**, where anyone can encrypt a message, but only the receiver can decrypt it.

However, threats still exist—like **phishing attacks** or fake websites—that trick users into using the **wrong key**. To prevent this, browsers check **security certificates** issued by trusted authorities. If a certificate is invalid, users should take the warning seriously.

Encryption is a key part of staying secure online.

#### `Security defences`

There are various ways to protect against online security threats. **Antivirus software** helps detect and remove malware, while a **firewall** blocks suspicious traffic to and from your computer. **Access control** ensures that only authorized users can access certain parts of a system, using **usernames and passwords**.

Different users have different levels of access to prevent misuse—for example, learners can't view or change other people's grades. These systems rely on **passwords**, which are encrypted but often vulnerable if they're easy to guess.

To improve security, websites encourage **strong passwords** and use **two-factor authentication**, which adds a second step like a phone code. Understanding and using these protections can help keep your personal data safe online.




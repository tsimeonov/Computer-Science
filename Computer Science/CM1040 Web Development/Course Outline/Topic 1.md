## Topic 1: HTTP and HTML

Using information about the historical context of the Internet and HTTP, explain the design features of HTTP and the Internet.

- Describe the details of the HTTP protocol and use it to retrieve resources from web servers

- Discuss security issues with HTTP and how they are dealt with.

<br>

<details>
  <summary>🌐 Historical Context & Design Features</summary>
  
<br>

The Internet and the Hypertext Transfer Protocol (HTTP) were developed with fundamentally different design philosophies that shaped the world we use today.

`The Internet (TCP/IP) Design`

The core foundation of the Internet was designed in the 1970s and 80s to be robust, fault-tolerant, and decentralized. Its key features are driven by its original military and academic goals: to maintain communication even if large parts of the network failed.

- Packet Switching: Information is broken into small, individually addressed chunks called packets. These packets can take different routes to the destination. If one route is blocked, the packet can find another, ensuring resilience.

- Decentralization: There is no central control point. If one node (computer or router) fails, the rest of the network continues to operate. This is guaranteed by the core TCP/IP (Transmission Control Protocol/Internet Protocol) suite.

  - IP (Addressing): Handles the routing and addressing of packets across the network.

  - TCP (Reliability): Ensures that once packets arrive, they are reassembled correctly and that missing packets are requested again. This provides a reliable, ordered stream of bytes to applications, despite the underlying network being unreliable.

`The HTTP Design (World Wide Web)`

HTTP was designed in the late 1980s and early 1990s by Tim Berners-Lee to enable easy sharing of documents, primarily text, across the pre-existing Internet infrastructure.

- Statelessness: HTTP is stateless. This means that every single request from a client (like a browser) to a server is treated as an independent transaction. The server forgets everything about the client immediately after responding.

  - Rationale: This design choice simplifies server implementation and drastically increases scalability. Servers don't have to reserve memory or resources to track millions of ongoing user sessions.

  - The Catch: This required the invention of external mechanisms like cookies to maintain state (e.g., login sessions or shopping carts) when necessary.

- Simplicity and Readability: The protocol uses human-readable, plain text messages (requests and responses). This made it easy to debug, test, and implement in early, resource-constrained systems.

- Request-Response Paradigm: The client always initiates the transaction by sending a request, and the server always provides a response. This clear, synchronous structure is fundamental.

</details>

<br>

<details>
  <summary>⚙️ Details of the HTTP Protocol</summary>
  
<br>

HTTP is an application-layer protocol that rides on top of TCP. It defines how messages are formatted and transmitted between the client (usually a web browser) and the server.

`The HTTP Request`

A client sends a request that consists of three main parts:

1. Request Line: Defines the action and the target.

- Method (Verb): Specifies the action to be performed (e.g., GET, POST).

- Path: The location of the resource on the server (e.g., /index.html).

- HTTP Version: (e.g., HTTP/1.1 or HTTP/2.0).

2. Headers: Key-value pairs that provide metadata about the request.

- Examples: Host: www.example.com, User-Agent: Mozilla/5.0 (identifying the browser), Accept-Language: en-US.

3. Body (Optional): Used primarily with the POST method to send data (like form submissions or JSON data) to the serve

`The HTTP Response`

The server processes the request and sends a response with three main parts:

1. Status Line: Includes the HTTP version and a Status Code indicating the result.

Example: HTTP/1.1 200 OK

2. Headers: Key-value pairs providing metadata about the response.

Examples: Content-Type: text/html, Content-Length: 1024, Set-Cookie.

3. Body (Required): Contains the actual requested resource (e.g., the HTML file, an image, or JSON data).

`Retrieving Resources from Web Servers`

To retrieve a resource (like a web page), the process involves several steps executed by the browser:

1. DNS Lookup: The browser translates the human-readable domain name (e.g., example.com) into an IP address (e.g., 93.184.216.34).

2. TCP Connection: The browser opens a reliable connection to the web server's IP address, usually on port 80 (for HTTP) or port 443 (for HTTPS).

3. HTTP Request: The browser sends a GET request for the desired resource.

Example: GET /index.html HTTP/1.1

Note: The server uses the Host header to know which website the client is looking for, as a single IP address can host many different websites.

4. HTTP Response: The server processes the request and, if successful, returns an HTTP/1.1 200 OK status code along with the HTML content in the response body.

5. Rendering: The browser reads the content, sees references to other resources (like images, CSS, or JavaScript), and repeats steps 2–4 for each of those resources before assembling and displaying the final web page.

</details>

<br>

<details>🔒 Security Issues with HTTP and Solutions</summary>
  
<br>

The primary security issue with HTTP is its lack of encryption, which makes data vulnerable to interception.

1. Eavesdropping (Man-in-the-Middle Attacks)
   Since HTTP traffic is sent as plain, readable text, anyone monitoring the network between the client and the server (e.g., a hacker on a public Wi-Fi network or an ISP) can read the transmitted data—including passwords, credit card numbers, and private correspondence.

2. Data Tampering
   A malicious party can not only read the data but also actively modify the HTTP request or response as it travels across the network. For example, they could inject malicious JavaScript into an unencrypted HTTP page before it reaches the user's browser.

`The Solution: HTTPS (HTTP Secure)`

The security issues inherent to HTTP are dealt with by wrapping the entire HTTP protocol inside the TLS (Transport Layer Security) encryption protocol, creating HTTPS.

|   Feature    | HTTP (Unsecure) |              HTTPS (Secure)              |
| :----------: | :-------------: | :--------------------------------------: |
|   Protocol   |   HTTP alone    |              HTTP + TLS/SSL              |
|     Port     |       80        |                   443                    |
| Data Format  |   Plain Text    |            Encrypted/Ciphered            |
| Key Function |  Data Transfer  | Confidentiality (Prevents Eavesdropping) |

`How HTTPS Works`

1. Handshake: When a browser attempts to connect to an HTTPS server, they perform a TLS Handshake to agree on encryption keys and algorithms. The server presents a digital certificate (issued by a trusted third party) to verify its identity.

2. Encryption: Once the identity is verified and keys are established, all subsequent HTTP request and response messages are encrypted before transmission.

3. Integrity: TLS also ensures data integrity by attaching a message authentication code (MAC) to the data. If any byte of the data is altered during transit, the receiving party immediately detects the tampering and rejects the data.

</details>

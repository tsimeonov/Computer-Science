## Ecosystem of the internet: clients, servers, humans and machines

<details>
  <summary>🌐 An Ecosystem of Clients and Servers</summary>
  
<br>

The lecure explains that the internet is a complex "ecosystem" of a massive variety of "cliets" (which make requests) and "servers" (which answer them).

1. Clients and the user-agent

A client is any browser that issues a request. This includes:

- Browsers
- Web applications (code running in a browser tht makes background requests)
- Web Spiders / Crawlers (automated bots used by search engines or for training LLMs).

To indentify these different clients, the `User-Agent String` was added to the HTTP protocol in 1993.

- `Historical Purpose`: In the early web, browsers like Netscape and Internet Explorer had different capabilities. The user-agent string allowed a server to identify the client and send compatible HTML.
- `Use Today`: A 2023 study showed that while servers generally no longer send different initial HTML, about `10% of popular websites still use clinet-side JS` to check the User-Agent and change how the page renders.

2. The variety of servers

Like clients, there is a wide variety of server-side software. The video shows data (from 2024) on the most popular web servers:

- Nginx (the most common)
- Apache (formarly the most common)
- Cloudflare
- Micrisift-IIS

3. Security Threats

This complex ecosystem of thousands of different clients and servers creates uniques security vulnerabilities:

- Phishing - Malicious actors create a fake server (E.g a website that looks like your bank) to trick a user into givving up credentials

- DDos (Distributed Deniel of Service): An attacker uses a "botnet" (a huge network of infected clients) to flood a single server with millions of requests, overwhelming it.

- Man-in-the middle: An attacker positions themselves between a client and a server to intercept or alter the data being communicated.

</details>

## Hardware used to accces the internet

<details>
  <summary>📱 Hardware Diversity & Screen Size</summary>
  
<br>

Users access the web through a vast spectrum of devices, wach with different screen capabilities:

- Small: Smartwaches (too small for complex sites)
- Medium: Smartphones and Tablets
- Large: Laptops, Desktops
- Virtual: VR Headsets
- Non-Visual: Screen readers (headphones) for visually impaired users, which rely on text-to-speach.

</details>

<br>

<details>
  <summary>💻 Querying the Screen (JavaScript)</summary>
  
<br>

The lecture demostrates how to use JS to detect the user's screen context. Important objecs in the browser's namespace include:

- `window.innerWidth`: The width of the specific browser window.
- `screen.width`: The total resolution of the users' physical monitor
- `document.documentElement.clientWidth`: The width of the actual document content.

</details>

<br>

<details>
  <summary>🖱️ Interaction Modes</summary>
  
<br>

Developers must consider how users navigate the page. It isn't just about a mouse; users might employ:

- Touchscreens
- Stylus
- Trackpads
- Keyboards

</details>

<br>

<details>
  <summary>⚡ Power & Performance (CPU)</summary>
  
<br>

Not all devices have the same processing power. A complex webpage with heavy rendering might run smootly on high-end developer workstation but strugle on an older laptop or low-power smartwatch. Developers are advised to test on lower-end hardware to ensure usability.

</details>

<br>

<details>
  <summary>📶 Network Conditions</summary>
  
<br>

Internet acees is not always a "constant stream"

- Reliable: Fiber or 5G connections allow for data-heavy designs like video streaming.
- Unrealiable: Rural areas or unstable connection might function like a "drip" that cuts off occasionally.

</details>

<br>

## Server access logs

<details>
  <summary>The anatomy of a log entry</summary>
  
<br>

A server aceess log records every instance of a client (user) connecting to the server and making an HTTP request. A typical entry contains specific data points that allow administrators to track and identify users.

Key components of a single line entry include:

- `IP Address`: Identifies the user's location and tracks them across requests.

- `Date/Time`: When the request occurred.

- `HTTP Method`: The type of request made (e.g., GET, POST, PUT, DELETE).

- T`arget Path`: The specific section of the site accessed (e.g., /user/profile).

- `HTTP Version`: The protocol version used (e.g., 1.0 or 1.1).

- `Response Code`: The server's status response (e.g., 200 OK, 403 Forbidden, 304 Not Modified).

- `User Agent`: A string identifying the client's software, browser version, and operating system.

</details>

<br>

<details>
  <summary>Why Logs are important</summary>
  
<br>

Analyzing these logs provides critical insights for server management:

- Security Monitoring: Helps identify suspicious activity, such as automated scripts probing for vulnerabilities or insecure configuration files.

- Performance Optimization: Reveals which pages are most frequently accessed, allowing developers to prioritize optimization efforts where they matter most.

- Troubleshooting: Essential for diagnosing errors and verifying that requests are passing correctly through complex setups, such as reverse proxies and load balancers.

- Pattern Recognition: Highlights usage trends, such as peak traffic times, to assist with capacity planning.

</details>

<br>

<details>
  <summary>Tools for Analysis</summary>
  
<br>

The lecture highlights two specific command-line tools for working with log data:

1. Tail (tail -f) This command allows for real-time monitoring of the server log. By running tail -f /path/to/log, administrators can "hook" onto the file and see requests populate in the terminal the instant a client hits the website.

2. GoAccess GoAccess is a powerful log analyzer that converts raw text logs into an interactive, visual HTML dashboard. It is highly efficient, capable of processing gigabytes of data rapidly.

The dashboard provides high-level visualizations, including:

- Total requests and traffic timelines.

- Breakdowns of operating systems and browsers derived from User Agent strings.

- Status code distributions and identifying frequent visitors.

</details>

<br>

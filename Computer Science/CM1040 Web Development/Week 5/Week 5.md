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

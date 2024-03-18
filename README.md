


<!-- ABOUT THE PROJECT -->
## MINI_TALK

The purpose of this project is to code a small data exchange program
using UNIX signals.

Use the `MiniTalk.pdf` to get started.






<img width="887" alt="Screen Shot 2024-03-18 at 11 29 00 AM" src="https://github.com/HishamEltayb/MiniTalk/assets/138756079/70300f0a-abc0-49c6-a646-44ca27b58303">




### Installation


1. Clone the repo
   ```sh
   git clone git@github.com:HishamEltayb/MiniTalk.git
   ```
2. Makefile:
   ```js
   cd MiniTalk && make
   ```
3. Try in one terminal:
   ```js
   ./server
   ```
4. Try in another terminal:
   ```js
   ./client "$(ps -a | grep './server' | head -n 1 | awk '{print $1}')" "HELLO from the other side😁"
   ```

# 🔠 SpellSeeker - Word Guessing Game in C++

SpellSeeker is a terminal-based word guessing game built entirely in **C++**. It offers three exciting game modes — **Arcade**, **Survival**, and **Multiplayer** — and features multiple difficulty levels, hints, lives, and high score tracking. It’s an educational, fun, and interactive game that challenges your vocabulary and guessing skills!

---

## 🎮 Game Modes

1. **Arcade Mode**  
   - Progress through 5 difficulty levels (Very Easy to Very Hard)  
   - Each level gives 5 lives and a hint after 2 wrong guesses  
   - Words and hints are read from CSV files categorized by level

2. **Survival Mode**  
   - Start with 7 lives  
   - Guess as many words as possible  
   - Earn an extra life with every correct guess  
   - High scores are tracked

3. **Multiplayer Mode**  
   - Two-player turn-based mode  
   - One player sets a word and hint, the other guesses  
   - Each player gets 5 lives  
   - Scores tracked over multiple rounds

---

## 📂 File Structure
├── main.cpp # Main game logic (this file)
├── Very Easy.csv # Word & hint list for level 1
├── Easy.csv # Word & hint list for level 2
├── Medium.csv # Word & hint list for level 3
├── Hard.csv # Word & hint list for level 4
├── Very Hard.csv # Word & hint list for level 5
├── Survival_Database.csv # Word list for Survival Mode

## 🧠 Features

- File-based word selection from level-specific CSVs
- Terminal graphics using ASCII and color escape codes
- Hidden input for Multiplayer word entry using `_getch()`
- Hints after failed attempts
- Score tracking and high score feedback
- Vowel pre-fill in Arcade Mode
- Visual representation of remaining lives with hearts (♥)

---

## 💻 Technologies Used

- **C++ Standard Library**
  - `iostream`, `fstream`, `vector`, `cstring`, `cstdlib`, `sstream`, etc.
- **Platform-specific**
  - `conio.h` for hidden input (Windows only)
- Terminal coloring with ANSI escape codes

## ✅ How to Run

1. **Compile the program**  
   On Windows (e.g., using g++):  
g++ -o SpellSeeker main.cpp

2. **Run the executable**  
./SpellSeeker

> 📝 Make sure the required `.csv` files are in the same directory as the compiled executable.

---
## 📌 Notes

- This game is intended for Windows-based systems due to use of `<conio.h>`.
- ANSI escape codes may not display correctly in all terminals — use CMD or compatible terminal.
- Word files must be properly formatted: `serial_number,word,hint`

---

## 🚀 Demo

Welcome to the SPELLSEEKER.....

Which Mode Do You Want To Play?
<1> ARCADE MODE   <2> SURVIVAL MODE   <3> MULTIPLAYER MODE

LEVEL 1 : VERY EASY
_ A _ _ _

You have ♥ ♥ ♥ ♥ ♥ lives left...
Enter an Alphabet to Guess...


🤝 Contributing
Feel free to fork the repository and submit pull requests with:

Bug fixes

Additional difficulty levels

Improved UI/UX

Cross-platform compatibility

📜 License
This project is licensed under the MIT License.


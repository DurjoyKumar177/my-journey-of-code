# 🚀 VS Code Setup for C/C++ Development

Follow these step-by-step instructions to set up **Visual Studio Code** for writing and running **C/C++** programs on Windows.

---

## 1️⃣ Download Visual Studio Code

- Visit the official website: [https://code.visualstudio.com](https://code.visualstudio.com)
- Download the **Stable Build** for Windows.
- Install it using the default settings.

---

## 2️⃣ Install MinGW Compiler

- Download **MinGW** from the link provided in your resource document.
- After downloading:
  1. **Unzip** the MinGW folder.
  2. Rename the unzipped folder to `MinGW` (if not already).
  3. Move the folder to `C:\MinGW` for easy access.

---

## 3️⃣ Install Git and Git Bash

- Download Git from the official link in your resource document or from: [https://git-scm.com](https://git-scm.com)
- Install Git using default settings.
- This will also install **Git Bash**, which is useful for running C/C++ programs from the terminal.

---

## 4️⃣ Set Up Windows Environment Variables

To make MinGW accessible from any terminal:

1. Press `Windows + S` and search for **Environment Variables**.
2. Click on **"Edit the system environment variables"**.
3. In the **System Properties** window, click on **Environment Variables**.
4. Under **System Variables**, find and select `Path`, then click **Edit**.
5. Click **New** and add this path: C:\MinGW\bin

6. Click **OK** on all dialogs to save.

📌 **Tip:** You can check if it's working by typing `gcc --version` in Git Bash or Command Prompt.

---

## 5️⃣ Install Essential Extensions in VS Code

Open VS Code and go to the **Extensions (⇧+⌘+X or Ctrl+Shift+X)** sidebar, then install the following:

- 🔹 **C/C++** (by Microsoft)  
_Provides IntelliSense, debugging, and code browsing._

- 🔹 **Code Runner** (by Jun Han)  
_Easily run code snippets or files._

---

## 6️⃣ Configure Code Runner

To run C/C++ code with the correct configuration:

1. Open **VS Code**.
2. Go to **Settings → Extensions → Code Runner → Edit in `settings.json`**.
3. Replace or update the settings with the configuration provided in resource document.

✅ You're All Set!
Now you can:

Create a .c or .cpp file.

Write your code.

Click on the ▶️ Run button or press Ctrl+Alt+N to execute.
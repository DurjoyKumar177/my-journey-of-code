import pyautogui
import time

height = int(input())
time.sleep(5)

for i in range(1, height + 1):
        pyautogui.write('#' * i)
        pyautogui.write('\n')

          


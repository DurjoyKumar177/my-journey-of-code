import time

def warper(func):
    print("This is Before fun: ")
    start = time.time
    func()
    end = time.time
    print("This is after fun")
    #print(f"\n Time Needed= {end - start } mini Second.  ")
    return func

def mainfunction():
    print("THis is the main function")
    
warper(mainfunction)
    

from tkinter import *

class Calc:

    def __init__(self, master):
        frame = Frame(master)
        frame.pack()

        #shows what you have entered (0,0) 5 wide
        self.display = Entry(frame, text = "afdadsf", state = 'disabled')
        self.display.grid(row=0,columnspan=5,sticky="NESW")

        #( Button (1,0)
        self.leftParButton = Button(frame, text = "(", command=lambda:self.updateDisplay("("))
        self.leftParButton.grid(row=1,column=0,sticky="NESW")

        #) button (1,1)
        self.rightParButton = Button(frame, text = ")", command=lambda:self.updateDisplay(")"))
        self.rightParButton.grid(row=1,column=1,sticky="NESW")
        
        #(-) button (1,2)
        self.negativeButton = Button(frame, text = "(-)", command=lambda:self.updateDisplay("-"))
        self.negativeButton.grid(row=1,column=2,sticky="NESW")

        #del (delete) button (1,3)
        self.deleteButton = Button(frame, text = "del", command=self.deleteChar)
        self.deleteButton.grid(row=1,column=3,sticky="NESW")

        #clear button (1,4)
        self.clearButton = Button(frame, text = "clear", command=self.clear)
        self.clearButton.grid(row=1,column=4,sticky="NESW")

        #7 button (2,0)
        self.sevenButton = Button(frame, text = "7", command=lambda:self.updateDisplay(7))
        self.sevenButton.grid(row=2,column=0,sticky="NESW")

        #8 button (2,1)
        self.eightButton = Button(frame, text = "8", command=lambda:self.updateDisplay(8))
        self.eightButton.grid(row=2,column=1,sticky="NESW")

        #9 button (2,2)
        self.nineButton = Button(frame, text = "9", command=lambda:self.updateDisplay(9))
        self.nineButton.grid(row=2,column=2,sticky="NESW")

        #- button (2,3)
        self.minusButton = Button(frame, text = "-", command=lambda:self.updateDisplay("-"))
        self.minusButton.grid(row=2,column=3,sticky="NESW")

        #quit button (2,4)
        self.quitButton = Button(frame, text="quit", command=frame.quit)
        self.quitButton.grid(row=2,column=4,sticky="NESW")

        #4 button (3,0)
        self.fourButton = Button(frame, text = "4", command=lambda:self.updateDisplay(4))
        self.fourButton.grid(row=3,column=0,sticky="NESW")

        #5 button (3,1)
        self.fiveButton = Button(frame, text = "5", command=lambda:self.updateDisplay(5))
        self.fiveButton.grid(row=3,column=1,sticky="NESW")

        #6 button (3,2)
        self.sixButton = Button(frame, text = "6", command=lambda:self.updateDisplay(6))
        self.sixButton.grid(row=3,column=2,sticky="NESW")

        #+ button (3,3)
        self.plusButton = Button(frame, text = "+", command=lambda:self.updateDisplay("+"))
        self.plusButton.grid(row=3,column=3,sticky="NESW")

        #enter button (3,4) 3 tall  
        self.enterButton = Button(frame, text = "enter", command=self.calculate)
        self.enterButton.grid(row=3,column=4,rowspan=3,sticky="NESW")

        #1 button (4,0)
        self.oneButton = Button(frame, text = "1", command=lambda:self.updateDisplay(1))
        self.oneButton.grid(row=4,column=0,sticky="NESW")

        #2 button (4,1)
        self.twoButton = Button(frame, text = "2", command=lambda:self.updateDisplay(2))
        self.twoButton.grid(row=4,column=1,sticky="NESW")

        #3 button (4,2)
        self.threeButton = Button(frame, text = "3", command=lambda:self.updateDisplay(3))
        self.threeButton.grid(row=4,column=2,sticky="NESW")

        #x button (4,3)
        self.timesButton = Button(frame, text = "x", command=lambda:self.updateDisplay("x"))
        self.timesButton.grid(row=4,column=3,sticky="NESW")

        #0 button (5,0) 2 wide
        self.zeroButton = Button(frame, text = "0", command=lambda:self.updateDisplay(0))
        self.zeroButton.grid(row=5,column=0,columnspan=2,sticky="NESW")

        #. button (5,2)
        self.decimalButton = Button(frame, text = ".", command=lambda:self.updateDisplay("."))
        self.decimalButton.grid(row=5,column=2,sticky="NESW")

        #/ button (5,3)
        self.divideButton = Button(frame, text = "/", command=lambda:self.updateDisplay("/"))
        self.divideButton.grid(row=5,column=3,sticky="NESW")

        #update display function
    def updateDisplay(self,num):
        self.display['state']= "normal"
        self.display.insert('end',num)
        self.display['state']= "disabled"

    #delete function
    def deleteChar(self):
        char = len(self.display.get())
        self.display['state']= "normal"
        self.display.delete(char-1,'end')
        self.display['state']= "disabled"

        #calculate function called on when enter is pressed
    def calculate(self):
        equation = self.display.get()
        try:
            total=eval(equation)
            self.clear()
            self.updateDisplay(total)
        except:
            self.clear()
            self.updateDisplay("ERROR")

        #clear function
    def clear(self):
        self.display['state']= "normal"
        self.display.delete(0, 'end')
        self.display['state']= "disabled"

        #test button function
    def test(self):
        print("Wow, this actually worked!")

        #print display function prints string of display
    def printDisplay(self):
        print(self.display.get())
        text = self.display.get()
        for currentCharacter in range (0,len(text)):
            print(text[currentCharacter])

root = Tk()
#name window Calculator
root.title('CalculatorV2')
root.geometry("200x300")
c = Calc(root)
root.mainloop()
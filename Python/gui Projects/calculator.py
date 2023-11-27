from tkinter import *
from tkinter import messagebox


class Calc:

    def __init__(self, master):
        frame = Frame(master)
        frame.pack()

        #first int entry field
        self.firstNumber = Entry(frame)
        self.firstNumber.pack()

        #plus label
        self.plusLabel = Label(frame, text="Plus")
        self.plusLabel.pack()

        #second int entry field
        self.secondNumber = Entry(frame)
        self.secondNumber.pack()

        #equals label
        self.equalsLabel = Label(frame, text="Equals")
        self.equalsLabel.pack()

        #add button
        self.addButton = Button(frame, text = "Add", command=self.add)
        self.addButton.pack(side=LEFT)

        #clear button
        self.clearButton = Button(frame, text = "Clear", command=self.clear)
        self.clearButton.pack(side=LEFT)

        #quit button
        self.quitButton = Button(frame, text="Quit", command=frame.quit)
        self.quitButton.pack(side=LEFT)

        #add funtion
    def add(self):
        try:
            a= int(self.firstNumber.get())
            b=int(self.secondNumber.get())
            c= a+b
            self.equalsLabel["text"] = "Equals",c
        except:
            messagebox.showinfo("Error", "Enter in two integers")

        #clear function
    def clear(self):
        self.firstNumber.delete(0, 'end')
        self.secondNumber.delete(0, 'end')
        self.equalsLabel["text"] = "Equals"

root = Tk()
#name window Calculator
root.title('Calculator')
root.geometry("300x100")
c = Calc(root)
root.mainloop()
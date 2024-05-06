import tkinter as tk
from tkinter import messagebox

def calculate_sgpa():
    # Initialize total marks
    tot = 0
    
    # Assign marks based on grades entered
    grades = [e4.get(), e5.get(), e6.get(), e7.get()]
    for grade in grades:
        if grade == 'A':
            tot += 40
        elif grade == 'B':
            tot += 36
        elif grade == 'C':
            tot += 32
        elif grade == 'D':
            tot += 28
        elif grade == 'P':
            tot += 24
        elif grade == 'F':
            tot += 0
        else:
            messagebox.showerror("Error", f"Invalid grade entered: {grade}")
            return

    # Display total marks and SGPA
    total_marks_label.config(text=str(tot))
    sgpa_label.config(text=str(tot / 15))

# Create main window
master = tk.Tk()
master.title("MARKSHEET")
master.geometry("700x250")

# Labels and Entry widgets
tk.Label(master, text='Name').grid(row=0, column=0)
tk.Label(master, text='Reg. No.').grid(row=0, column=3)
tk.Label(master, text='Roll No.').grid(row=1, column=0)
tk.Label(master, text='Subject').grid(row=2, column=1)
tk.Label(master, text='Grade').grid(row=2, column=2)
tk.Label(master, text='Python').grid(row=3, column=1)
tk.Label(master, text='DSA').grid(row=4, column=1)
tk.Label(master, text='EG').grid(row=5, column=1)
tk.Label(master, text='EVS').grid(row=6, column=1)

e1 = tk.Entry(master)  # Name
e2 = tk.Entry(master)  # Reg. No.
e3 = tk.Entry(master)  # Roll No.
e4 = tk.Entry(master)  # Python Grade
e5 = tk.Entry(master)  # DSA Grade
e6 = tk.Entry(master)  # EG Grade
e7 = tk.Entry(master)  # EVS Grade

e1.grid(row=0, column=1)
e2.grid(row=0, column=4)
e3.grid(row=1, column=1)
e4.grid(row=3, column=2)
e5.grid(row=4, column=2)
e6.grid(row=5, column=2)
e7.grid(row=6, column=2)

# Submit Button
btn = tk.Button(master, text='Submit', bg='pink', command=calculate_sgpa)
btn.grid(row=8, column=1)

# Labels for displaying total marks and SGPA
tk.Label(master, text='Total Marks:').grid(row=7, column=3)
tk.Label(master, text='SGPA:').grid(row=8, column=3)
total_marks_label = tk.Label(master, text='')
sgpa_label = tk.Label(master, text='')
total_marks_label.grid(row=7, column=4)
sgpa_label.grid(row=8, column=4)

# Run the main event loop
master.mainloop()

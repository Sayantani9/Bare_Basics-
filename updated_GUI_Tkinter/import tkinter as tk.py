import tkinter as tk
from tkinter import messagebox

# Initialize main window
root = tk.Tk()
root.title("To-Do List App")
root.geometry("400x500")

tasks = []

# Functions
def add_task():
    task = task_entry.get()
    if task:
        tasks.append(task)
        update_listbox()
        task_entry.delete(0, tk.END)
    else:
        messagebox.showwarning("Input Error", "Please enter a task.")

def delete_task():
    try:
        selected = listbox.curselection()[0]
        tasks.pop(selected)
        update_listbox()
    except IndexError:
        messagebox.showwarning("Select Task", "Please select a task to delete.")

def update_listbox():
    listbox.delete(0, tk.END)
    for task in tasks:
        listbox.insert(tk.END, task)

def clear_tasks():
    confirm = messagebox.askyesno("Confirm", "Are you sure you want to clear all tasks?")
    if confirm:
        tasks.clear()
        update_listbox()

# UI Elements
title_label = tk.Label(root, text="📝 To-Do List", font=("Helvetica", 18, "bold"))
title_label.pack(pady=10)

task_entry = tk.Entry(root, width=30, font=("Helvetica", 14))
task_entry.pack(pady=10)

add_btn = tk.Button(root, text="Add Task", command=add_task, width=20)
add_btn.pack(pady=5)

delete_btn = tk.Button(root, text="Delete Task", command=delete_task, width=20)
delete_btn.pack(pady=5)

clear_btn = tk.Button(root, text="Clear All Tasks", command=clear_tasks, width=20)
clear_btn.pack(pady=5)

listbox = tk.Listbox(root, font=("Helvetica", 12), width=30, height=10)
listbox.pack(pady=20)

# Start the app
root.mainloop()

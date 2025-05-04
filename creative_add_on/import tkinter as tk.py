import tkinter as tk
from tkinter import messagebox

# Create the main application window
root = tk.Tk()
root.title("To-Do List")
root.geometry("400x500")

tasks = []

# === Functions ===
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
        removed = tasks.pop(selected)
        update_listbox()
    except IndexError:
        messagebox.showwarning("Selection Error", "No task selected.")

def update_listbox():
    listbox.delete(0, tk.END)
    for task in tasks:
        listbox.insert(tk.END, task)

def clear_all():
    confirm = messagebox.askyesno("Clear All", "Are you sure you want to delete all tasks?")
    if confirm:
        tasks.clear()
        update_listbox()

# === UI Elements ===
title_label = tk.Label(root, text="📝 To-Do List", font=("Helvetica", 18, "bold"))
title_label.pack(pady=10)

task_entry = tk.Entry(root, font=("Helvetica", 14), width=25)
task_entry.pack(pady=10)

add_button = tk.Button(root, text="Add Task", width=20, command=add_task)
add_button.pack(pady=5)

delete_button = tk.Button(root, text="Delete Selected Task", width=20, command=delete_task)
delete_button.pack(pady=5)

clear_button = tk.Button(root, text="Clear All Tasks", width=20, command=clear_all)
clear_button.pack(pady=5)

listbox = tk.Listbox(root, font=("Helvetica", 12), width=35, height=12)
listbox.pack(pady=20)

# Start the main loop
root.mainloop()

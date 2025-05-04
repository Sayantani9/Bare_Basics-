import os

tasks = []

def show_menu():
    print("\n==== TO-DO LIST MENU ====")
    print("1. Show Tasks")
    print("2. Add Task")
    print("3. Remove Task")
    print("4. Mark Task as Done")
    print("5. Exit")

def show_tasks():
    if not tasks:
        print("No tasks found.")
    else:
        print("\nYour Tasks:")
        for i, task in enumerate(tasks):
            status = "✔️" if task["done"] else "❌"
            print(f"{i+1}. {task['task']} [{status}]")

def add_task():
    task_name = input("Enter the task: ")
    tasks.append({"task": task_name, "done": False})
    print("✅ Task added!")

def remove_task():
    show_tasks()
    try:
        task_num = int(input("Enter the task number to remove: "))
        removed = tasks.pop(task_num - 1)
        print(f"🗑️ Removed: {removed['task']}")
    except (ValueError, IndexError):
        print("⚠️ Invalid task number.")

def mark_done():
    show_tasks()
    try:
        task_num = int(input("Enter the task number to mark as done: "))
        tasks[task_num - 1]["done"] = True
        print("✅ Task marked as done!")
    except (ValueError, IndexError):
        print("⚠️ Invalid task number.")

# Main loop
while True:
    show_menu()
    choice = input("Choose an option (1-5): ")

    if choice == "1":
        show_tasks()
    elif choice == "2":
        add_task()
    elif choice == "3":
        remove_task()
    elif choice == "4":
        mark_done()
    elif choice == "5":
        print("👋 Exiting To-Do List

import studentstools
menu_list=("1","2","3","4","5","6")
studentstools.showmenu()
while True:
    num=(input("请输入你想执行的操作:"))
    if num in menu_list:
        if num=="1":
            studentstools.inputstu()
        elif num=="2":
            studentstools.seek()
        elif num=="3":
            studentstools.dele()
        elif num=="4":
            studentstools.gather()
        elif num=="5":
            studentstools.change()
        elif num=="6":
            print("欢迎下次继续使用【学生管理系统】v1.0")
            break
    else:
        print("请输入1-6的数字！")




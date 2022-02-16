import  os
stulist=[]
def showmenu():
    """"菜单函数"""
    print("*" * 50)
    print("欢迎使用【学生管理系统】v1.0")
    print("————————————————————————————————————")
    print("           1.输入学生数据                 ")
    print("           2.查询界面                    ")
    print("           3.删除学生信息                 ")
    print("           4.信息汇总                    ")
    print("           5.修改学生数据                 ")
    print("           6.退出程序                    ")
    print("————————————————————————————————————")
def inputstu():
    print("-"*50)
    print("输入学生数据")
    name=input("请输入学生姓名:")
    ID=input("请输入学生学号:")
    grade=input("请输入学生成绩:")
    while True:
        sex = input("请输入学生性别:")
        if sex=="男" or sex=="女":
            break
        else:
            print("请输入正确的性别!")
    i=0 #计数器
    a=1 #判断条件
    for str2 in stulist:
        if str2["ID"]==ID:
            a=0
            break
    if a==0:
        print("输入学生学号重复，添加失败！")
    else:
        stu={"name":name,
             "ID":ID,
             "grade":grade,
             "sex":sex
             }
        stulist.append(stu)
        print("添加成功！")
def seek():
    os.system('cls')
    print("查询界面")
    print("-" * 50)
    print("1.按照学号查找")
    print("2.按照姓名查找")
    print("3.返回")
    while True:
        num = input("请输入数字:")
        if num=="1":
            id2=input("请输入学号:")
            for str8 in stulist:
                if str8['ID']==id2:
                    print("姓名\t\t学号\t\t成绩\t\t性别")
                    print("="*50)
                    print("%s\t\t%s\t\t%s\t\t%s"
                    %(str8["name"],
                      str8["ID"],
                      str8["grade"],
                      str8["sex"]))
                    break
            else:
                print("该学号不存在！")

        elif num=="2":
            str=input("请输入姓名:")
            for str8 in stulist:
                if str8['name'] ==str:
                    print("姓名\t\t学号\t\t成绩\t\t性别")
                    print("=" * 50)
                    print("%s\t\t%s\t\t%s\t\t%s"
                          % (str8["name"],
                             str8["ID"],
                             str8["grade"],
                             str8["sex"]))
                    break
            else:
                print("该姓名不存在！")
        elif num=="3":
            os.system('cls')
            showmenu()
            break
        else:
            print("请输入正确数字！")
def dele():
    os.system('cls')
    print("-"*50)
    print("删除学生信息")
    print("1.按照学号删除")
    print("2.按照姓名删除")
    print("3.返回")
    while True:
        i=0
        num = input("请输入数字:")
        if num=="1":
            id2=input("请输入学号:")
            for str8 in stulist:
                if str8['ID']==id2:
                    del stulist[i]
                    print("删除成功!")
                    break
                else:
                    i=i+1
            else:
                print("该学号不存在！")

        elif num=="2":
            str=input("请输入姓名:")
            for str8 in stulist:
                if str8['name'] ==str:
                    del stulist[i]
                    break
                else:
                    i=i+1
            else:
                print("该姓名不存在！")
        elif num=="3":
            os.system('cls')
            showmenu()
            break
        else:
            print("请输入正确数字！")
def gather():
    print("-" * 100)
    print("信息汇总")
    print("姓名\t\t学号\t\t成绩\t\t性别")
    for str8 in stulist:
        print("=" * 50)
        print("%s\t\t%s\t\t%s\t\t%s"
                  % (str8["name"],
                     str8["ID"],
                     str8["grade"],
                     str8["sex"]))

def change():
    os.system('cls')
    print("-" * 50)
    print("修改学生数据")
    print("1.按照学号修改")
    print("2.按照姓名修改")
    print("3.返回")
    while True:
        num = input("请输入数字:")
        if num == "1":
            str = input("请输入学号:")
            for str8 in stulist:
                if str8['ID'] == str:
                    name = input("请输入修改后学生姓名:")
                    ID = input("请输入修改后学生学号:")
                    grade = input("请输入修改后学生成绩:")
                    while True:
                        sex = input("请输入修改后学生性别:")
                        if sex == "男" or sex == "女":
                            break
                        else:
                            print("请输入正确的性别!")
                    a = 1  # 判断条件
                    for str2 in stulist:
                        if str2["ID"] == ID:
                            a = 0
                            break
                    if a == 0:
                        print("输入学生学号重复，修改失败！")
                    else:
                        str8["name"] = name
                        str8["ID"] = ID
                        str8["grade"] = grade
                        str8["sex"] = sex
                        print("修改成功！")
                        break

            else:
                print("该学号不存在！")


        elif num == "2":
            str = input("请输入姓名:")
            for str8 in stulist:
                if str8['name'] == str:
                    name = input("请输入修改后学生姓名:")
                    ID = input("请输入修改后学生学号:")
                    grade = input("请输入修改后学生成绩:")
                    while True:
                        sex = input("请输入修改后学生性别:")
                        if sex == "男" or sex == "女":
                            break
                        else:
                            print("请输入正确的性别!")
                    a = 1  # 判断条件
                    for str2 in stulist:
                        if str2["ID"] == ID:
                            a = 0
                            break
                    if a == 0:
                        print("输入学生学号重复，修改失败！")
                    else:
                        str8["name"]=name
                        str8["ID"]=ID
                        str8["grade"]=grade
                        str8["sex"]=sex
                        print("修改成功！")
                        break

            else:
                print("该姓名不存在！")
        elif num == "3":
            os.system('cls')
            showmenu()
            break
        else:
            print("请输入正确数字！")






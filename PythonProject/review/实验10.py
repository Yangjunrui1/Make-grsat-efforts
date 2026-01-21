# 初始化存储联系人的列表（每个元素是一个联系人字典）
person_info = []

# 打印功能菜单
print("=" * 20)
print("欢迎使用通讯录:")
print("1.添加联系人")
print("2.查看通讯录")
print("3.删除联系人")
print("4.修改联系人信息")
print("5.查找联系人")
print("6.退出")
print("=" * 20)

# 循环接收用户操作
while True:
    fun_num = input("请输入功能序号:")

    # 1. 添加联系人
    if fun_num == '1':
        per_dict = {}  # 单个联系人的字典
        per_dict["姓名"] = input("请输入联系人的姓名：")
        per_dict["手机号"] = input("请输入联系人的手机号：")
        per_dict["电子邮箱"] = input("请输入联系人的邮箱：")
        per_dict["联系地址"] = input("请输入联系人的地址：")
        person_info.append(per_dict)  # 添加到通讯录列表
        print("保存成功")

    # 2. 查看通讯录（遍历所有联系人）
    elif fun_num == '2':
        if len(person_info) == 0:
            print('通讯录无信息')
        else:
            for contact in person_info:  # 遍历每个联系人字典
                for title, info in contact.items():  # 遍历字典的键值对
                    print(f"{title}:{info}")
                print("-" * 10)  # 分隔不同联系人

    # 3. 删除联系人（按姓名匹配）
    elif fun_num == '3':
        if len(person_info) == 0:
            print("通讯录无信息")
        else:
            del_name = input("请输入要删除的联系人姓名:")
            # 标记是否找到联系人
            found = False
            for contact in person_info[:]:  # 遍历列表副本（避免删除时索引异常）
                if del_name == contact["姓名"]:
                    person_info.remove(contact)
                    found = True
                    print('删除成功')
                    break
            if not found:
                print("该联系人不在通讯录中")

    # 4. 修改联系人信息（按姓名匹配）
    elif fun_num == '4':
        if len(person_info) == 0:
            print("通讯录无信息")
        else:
            modi_name = input('请输入要修改联系人姓名:')
            found = False
            for contact in person_info:
                if modi_name == contact["姓名"]:
                    # 显示当前信息
                    print("当前联系人信息：")
                    for title, info in contact.items():
                        print(f"{title}:{info}")
                    # 接收新信息并更新
                    new_name = input('请输入新的姓名:')
                    new_phone = input("请输入新的手机号:")
                    new_email = input("请输入新的邮箱:")
                    new_addr = input("请输入新的地址:")
                    contact.update({
                        "姓名": new_name,
                        "手机号": new_phone,
                        "电子邮箱": new_email,
                        "联系地址": new_addr
                    })
                    print("修改成功")
                    print(f"更新后信息：{contact}")
                    found = True
                    break
            if not found:
                print("该联系人不在通讯录中")

    # 5. 查找联系人（按姓名匹配）
    elif fun_num == '5':
        if len(person_info) == 0:
            print("通讯录无信息")
        else:
            query_name = input('请输入要查找的联系人姓名:')
            found = False
            for contact in person_info:
                if query_name == contact["姓名"]:
                    print("查找结果：")
                    for title, info in contact.items():
                        print(f"{title}:{info}")
                    found = True
                    break
            if not found:
                print("该联系人不在通讯录中")

    # 6. 退出程序
    elif fun_num == '6':
        print("感谢使用通讯录，再见！")
        break

    # 输入无效序号
    else:
        print("输入的功能序号无效，请重新输入（1-6）！")
from Bank import BankClass, User, Admin
def main():
    print('------Program start----------')

    admin_1=Admin('kala Chan','kala@gmail.com','kala123')
    admin_1.loan_feature()

    User_1=User('Nayem','nayem@gmail.com','12nayem')
    User_1.Create_account(101,1000,User_1)
    User_1.deposit(100)
    User_1.withdrawal(200)

    User_2=User('Najim','najim@gmail.com','12najim')
    User_2.Create_account(102,2000,User_2)
    User_2.deposit(100)

    User_1.transfer_money(User_2)


    admin_1.user_featcher(User_1,User_2) 
    print('Bank Balance is ',admin_1.Bank_balance())
    print(User_1)
    print(User_2)

if __name__ =='__main__':
    main()
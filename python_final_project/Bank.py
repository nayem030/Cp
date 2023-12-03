
class BankClass:
    def __init__(self,name,email, password) -> None:
        self.name=name
        self.email=email
        self.__password=password
        self.__Bank_balance=0
        self.accounts={}
        self.__loan_amount=0

    @property
    def BankBalance(self):
        return self.__Bank_balance
    @BankBalance.setter
    def BankBalance(self,value):
        self.__Bank_balance+=value

    @property
    def LoanAmount(self):
        return self.__loan_amount
    @LoanAmount.setter
    def LoanAmount(self,value):
        self.__loan_amount+=value
    
class User(BankClass):
    def __init__(self, name, email, password) -> None:
        super().__init__(name, email, password)
        self.__user_balance=0
        self.transections={}
        
    def Create_account(self, account_number,initial_amount,account):
        self.BankBalance=initial_amount
        self.accounts[account_number]=account
        self.__user_balance=initial_amount

    def deposit(self,taka):
        if taka>0:
            self.__user_balance+=taka
            self.BankBalance=taka
            print(f'After deposit bank balance : {self.BankBalance}')
        else:
            print(f'Invalid amount !')
        self.transection_history(taka,'deposit')

    def withdrawal(self,taka):
        if taka < self.__user_balance:
            self.__user_balance-=taka
            self.BankBalance=-taka
        else:
            print(f'the bank is bankrupt')
        self.transection_history(taka,'Withdrawal')
    
    def Balance_user(self):
        return self.__user_balance

    def transection_history(self,taka,description):
        self.transections[description]=taka
    
    def transfer_money(self,other):
        amount=int(input('Enter the transfer amount : '))
        if self.__user_balance > amount and amount> 0:
            self.__user_balance-=amount
            other.__user_balance+=amount
        else:
            print(f'the bank is bankrupt')
        self.transection_history(amount, 'Trasfer money')
        other.transection_history(amount, 'add money from other account')

    def loan(self):
        if Admin.loan_feature()==False:
            return f'Do not get loan at that moment '
        else:

            if self.__user_balance*2 < self.BankBalance:
                self.BankBalance=-self.__user_balance*2
                self.LoanAmount=self.__user_balance*2
            else:
                print(f'{self.__user_balance*2 } taka does not contain in bank')

    def __repr__(self) -> str:
        for key, value in self.accounts.items():
            print(key , value.name , value.email)
        
        for key,value in self.transections.items():
            print(key, value)
        return ''

class Admin(BankClass):
    def __init__(self, name, email, password) -> None:
        super().__init__(name, email, password)
    
    def Create_account(self,account_number,account):
        self.accounts[account_number]=account
    
    def user_featcher(self,*args):
        for arg in args:
            self.BankBalance=arg.Balance_user()
            self.LoanAmount=arg.LoanAmount
    def Bank_balance(self):
        return self.BankBalance
    
    def Loan_amount(self):
        return self.LoanAmount
    
    def loan_feature(self):
        if self.BankBalance>100:
            return True
        else:
            return False
        
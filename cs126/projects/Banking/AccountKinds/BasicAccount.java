//BasicAccount.java is the base class of a package of bank accounts.
//
// Written by: Charles Hoot, for Hands On Java.
// Date: July 2000
// **************************************************************

package AccountKinds;
import AccountKinds.AccountDepositException;
import AccountKinds.AccountWithdrawException;
import AccountKinds.AccountBalanceException;

abstract class BasicAccount {
	
	private String myName;
	private double myBalance;
	private double myRate;
	
	// ***************************************************************
	// BasicAccount constructor
	//
	// Input: name of account holder
	// PostCondition: name has been set
	//				  balance is zero
	//				  interest rate is zero
	//****************************************************************
	public BasicAccount ( String name) {
		myBalance = 0.0;
		myRate = 0.0;
		myName = name;
	}

	// ***************************************************************
	// accessor
	//****************************************************************
	public String getName () {
		return myName;
	}

	// ***************************************************************
	// accessor
	//****************************************************************
	public double getBalance () {
		return myBalance;
	}
	
	// ***************************************************************
	// accessor
	//****************************************************************
	public double getRate () {
		return myRate;
	}
	
	// ***************************************************************
	// basic method to do a deposit
	// input: amount to deposit
	// 
	// will not be inherited
	//****************************************************************
	protected void deposit( double amount) {
		if(amount < 0.0)
			throw new AccountDepositException("Negative deposit amount");
		
		myBalance += amount;
	}
	
	// ***************************************************************
	// basic method to do a withdraw
	// input: amount to withdraw
	// 
	// will not be inherited
	//****************************************************************
	protected void withdraw( double amount) {
		if(amount < 0.0)
			throw new AccountWithdrawException("Negative withdraw amount");
		if(myBalance < amount)
			throw new AccountBalanceException("Overdraft");
		
		myBalance -= amount;
	}

	// ***************************************************************
	// basic method to change the interest rate
	// input: new rate
	//
	// Precondition: rate is positive
	// 
	// will not be inherited
	//****************************************************************
	protected void setRate( double rate) {
		myRate = rate;
	}

	// ***************************************************************
	// basic method to compute monthly fees and credits
	//
	//
	//****************************************************************
	public void monthly_update() {
		double adjustBy = computeInterest() - computeFees();
		
		myBalance += adjustBy;
	}
	
	// ***************************************************************
	// basic fee compututation
	//
	// All acounts are charged a basic fee of 10.00 or 10% of balance
	// whichever is smaller
	//****************************************************************
	public double computeFees() {
		//don't charge a fee if the balance is negative
		double tenPercent = Math.max(0.0, myBalance * .1);
		double fee = Math.min(10.00, tenPercent);
		return fee;
	}
	
	// ***************************************************************
	// basic interest compututation
	//
	// interest paid monthly
	// Don't give interest if balance is negative
	//****************************************************************
	public double computeInterest() {
		double monthRate = myRate/12;
		double interest = myBalance * monthRate;
		interest = Math.max(0.0, interest);
		return interest;
	}
	
	public String toString(){
		return  myName + " has balance " + myBalance;
	}
	
}

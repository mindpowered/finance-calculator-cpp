#pragma once
/*!
 * Copyright Mind Powered Corporation 2020
 * 
 * https://mindpowered.dev/
 */

#include <maglev/MagLev.h>
#include <maglev/MagLevCpp.h>
#include <maglev/CppCallbackPtr.h>
#include <maglev/CppAny.h>
#include <financecalculator/FinanceCalculator.h>
#include <haxecpp/haxe_thread.h>
#include <string>
#include <map>

void __boot_maglev();
void __boot_financecalculator();

/*!
 * A library for performing various finance calculations
 */
class FinanceCalculator {
public:
	FinanceCalculator()
	{
		run_haxe([](){
			__boot_maglev();
			__boot_financecalculator();
			::maglev::MagLev m0 = ::maglev::MagLev_obj::getInstance("default");
			auto o = new ::financecalculator::FinanceCalculator_obj();
			o->__construct(m0);
		});
	}
	~FinanceCalculator()
	{
	}

	/*!
	 * Calculate present value of future money
	 * @param futureValue Future Value
	 * @param numPeriods Number of Periods
	 * @param interestRate Interest Rate
	 * @return {std::map<std::string,::maglev::CppAny>} object containing Present Value and Total Interest
	*/
	std::map<std::string,::maglev::CppAny> PresentValueOfFutureMoney(double futureValue, double numPeriods, double interestRate)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,futureValue,numPeriods,interestRate](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setDouble(futureValue);
			myargs.push_back(param0);
			::maglev::CppAny param1 = new ::maglev::CppAny_obj();
			param1->setDouble(numPeriods);
			myargs.push_back(param1);
			::maglev::CppAny param2 = new ::maglev::CppAny_obj();
			param2->setDouble(interestRate);
			myargs.push_back(param2);
			bus->call("FinanceCalculator.PresentValueOfFutureMoney", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		std::map<std::string,::maglev::CppAny> retmap;
		return retmap;
	}

	/*!
	 * Calculate the present value of future deposits
	 * @param numPeriods Number of Periods
	 * @param interestRate Interest Rate
	 * @param depositAmount Periodic Deposit Amount
	 * @param depositAtBeginning Periodic Deposits made at beginning of period
	 * @return {std::map<std::string,::maglev::CppAny>} object containing Present Value, Total Principal, and Total Interest
	*/
	std::map<std::string,::maglev::CppAny> PresentValueOfDeposits(double numPeriods, double interestRate, double depositAmount, bool depositAtBeginning)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,numPeriods,interestRate,depositAmount,depositAtBeginning](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setDouble(numPeriods);
			myargs.push_back(param0);
			::maglev::CppAny param1 = new ::maglev::CppAny_obj();
			param1->setDouble(interestRate);
			myargs.push_back(param1);
			::maglev::CppAny param2 = new ::maglev::CppAny_obj();
			param2->setDouble(depositAmount);
			myargs.push_back(param2);
			::maglev::CppAny param3 = new ::maglev::CppAny_obj();
			param3->setBool(depositAtBeginning);
			myargs.push_back(param3);
			bus->call("FinanceCalculator.PresentValueOfDeposits", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		std::map<std::string,::maglev::CppAny> retmap;
		return retmap;
	}

	/*!
	 * Calculate the future value of money and/or deposits
	 * @param presentValue Present Value
	 * @param numPeriods Number of Periods
	 * @param interestRate Interest rate as a percentage
	 * @param timesCompoundedPerPeriod Times interest is compounded per period
	 * @param depositAmount Periodic Deposit Amount
	 * @param depositAtBeginning Periodic Deposits made at beginning of period
	 * @return {std::map<std::string,::maglev::CppAny>} object containing Future Value and Total Interest
	*/
	std::map<std::string,::maglev::CppAny> FutureValue(double presentValue, double numPeriods, double interestRate, double timesCompoundedPerPeriod, double depositAmount, bool depositAtBeginning)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,presentValue,numPeriods,interestRate,timesCompoundedPerPeriod,depositAmount,depositAtBeginning](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setDouble(presentValue);
			myargs.push_back(param0);
			::maglev::CppAny param1 = new ::maglev::CppAny_obj();
			param1->setDouble(numPeriods);
			myargs.push_back(param1);
			::maglev::CppAny param2 = new ::maglev::CppAny_obj();
			param2->setDouble(interestRate);
			myargs.push_back(param2);
			::maglev::CppAny param3 = new ::maglev::CppAny_obj();
			param3->setDouble(timesCompoundedPerPeriod);
			myargs.push_back(param3);
			::maglev::CppAny param4 = new ::maglev::CppAny_obj();
			param4->setDouble(depositAmount);
			myargs.push_back(param4);
			::maglev::CppAny param5 = new ::maglev::CppAny_obj();
			param5->setBool(depositAtBeginning);
			myargs.push_back(param5);
			bus->call("FinanceCalculator.FutureValue", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		std::map<std::string,::maglev::CppAny> retmap;
		return retmap;
	}

	/*!
	 * Calculate net present value
	 * @param initialInvestment Initial Investment
	 * @param discountRate Discount Rate (eg. Interest Rate)
	 * @param timesCompoundedPerPeriod Times discount/interest is compounded per period
	 * @param cashFlowsAtBeginning 
	 * @param cashFlow List of cash flows per period
	 * @return {double} Net Present Value
	*/
	double NetPresentValue(double initialInvestment, double discountRate, double timesCompoundedPerPeriod, double cashFlowsAtBeginning, std::vector<::maglev::CppAny> cashFlow)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,initialInvestment,discountRate,timesCompoundedPerPeriod,cashFlowsAtBeginning,cashFlow](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setDouble(initialInvestment);
			myargs.push_back(param0);
			::maglev::CppAny param1 = new ::maglev::CppAny_obj();
			param1->setDouble(discountRate);
			myargs.push_back(param1);
			::maglev::CppAny param2 = new ::maglev::CppAny_obj();
			param2->setDouble(timesCompoundedPerPeriod);
			myargs.push_back(param2);
			::maglev::CppAny param3 = new ::maglev::CppAny_obj();
			param3->setDouble(cashFlowsAtBeginning);
			myargs.push_back(param3);
			::maglev::CppAny param4 = new ::maglev::CppAny_obj();
			param4->makeArray();
			for(auto item: cashFlow)
			{
				param4->pushArray(item);
			}
			myargs.push_back(param4);
			bus->call("FinanceCalculator.NetPresentValue", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		return ret->getDouble();
	}

};


# trade-frame/lib/TFTrading
cmake_minimum_required (VERSION 3.13)

PROJECT(TFTrading)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_COMPILER_ARCHITECTURE_ID, "x64")
#set(CMAKE_EXE_LINKER_FLAGS "--trace --verbose")
#set(CMAKE_VERBOSE_MAKEFILE ON)

set(
  file_h
    AccountAdvisor.h
    Account.h
    AccountManager.h
    AccountOwner.h
    AlternateInstrumentNames.h
    CashAccount.h
    CashManager.h
    CashTransaction.h
    Currency.h
    DailyTradeTimeFrames.h
    Database.h
    DBOps.h
    Exchange.h
    Execution.h
    InstrumentData.h
    Instrument.h
#    InstrumentInformation.h
    InstrumentManager.h
    KeyTypes.h
    Managers.h
    MonitorOrder.h
    Order.h
    OrderManager.h
    OrdersOutstanding.h
    PortfolioGreek.h
    Portfolio.h
    PortfolioManager.h
    PositionCombo.h
    PositionGreek.h
    Position.h
    ProviderInterface.h
    ProviderManager.h
    RiskManager.h
    SpreadCandidate.h
    SpreadValidation.h
    Symbol.h
    TradingEnumerations.h
    Watch.h
  )

set(
  file_cpp
    AccountAdvisor.cpp
    Account.cpp
    AccountManager.cpp
    AccountOwner.cpp
    AlternateInstrumentNames.cpp
    CashAccount.cpp
    CashManager.cpp
    CashTransaction.cpp
    Currency.cpp
    DailyTradeTimeFrames.cpp
    Database.cpp
    DBOps.cpp
    Exchange.cpp
    Execution.cpp
    Instrument.cpp
    InstrumentData.cpp
#    InstrumentInformation.cpp
    InstrumentManager.cpp
    KeyTypes.cpp
    Managers.cpp
    MonitorOrder.cpp
    Order.cpp
    OrderManager.cpp
    OrdersOutstanding.cpp
    Portfolio.cpp
    PortfolioGreek.cpp
    PortfolioManager.cpp
    PositionCombo.cpp
    Position.cpp
    PositionGreek.cpp
    ProviderManager.cpp
    RiskManager.cpp
    SpreadCandidate.cpp
    SpreadValidation.cpp
    Symbol.cpp
    TradingEnumerations.cpp
    Watch.cpp
  )

add_library(
  ${PROJECT_NAME}
  ${file_h}
  ${file_cpp}
  )

target_compile_definitions(${PROJECT_NAME} PUBLIC BOOST_LOG_DYN_LINK )

target_include_directories(
  ${PROJECT_NAME} PUBLIC
    ".."
  )


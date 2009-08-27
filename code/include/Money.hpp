#ifndef MONEY_H
#define MONEY_H

#include <string>

class Money
{
public:
  Money( double amount, std::string currency )
    : m_amount( amount )
    , m_currency( m_currency )
  {
  }

  double getAmount() const
  {
    return m_amount;
  }

  std::string getCurrency() const
  {
    return m_currency;
  }

private:
  double m_amount;
  std::string m_currency;
};

#endif

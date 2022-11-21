#include <iostream>
#include <map>
#include <sstream>
#include <iomanip>
#include <string>
#include <cmath>

class FakeCantor {
    private:
        std::map<std::string, float> rates{{"USD", 1.0366f},
                                     {"GBP", 0.87063f},
                                     {"CHF", 0.9881f},
                                     {"JPY", 145.12f}};
    public:
        FakeCantor() = default;
        float EuroToRate(const std::string &currency) {
            return rates[currency];
        };
};

class Currency {
    public:
        virtual Currency *AddedCurrency(float value, std::string currency) = 0;
        virtual Currency *SubtractedCurrency(float value, std::string currency) = 0;
        virtual std::string Abbreviation() = 0;
        virtual std::string Symbol() = 0;
        virtual std::string Balance() = 0;
        virtual float DollarExchangeRate() = 0;
};

class Euro : public Currency {
    private:
        float value;
        FakeCantor cantor;

    public:
        Euro(float value, FakeCantor cantor)
        {
            this->value = value;
            this->cantor = cantor;
        }

        Euro *AddedCurrency(float value, std::string currency)
        {
            this->value += value / cantor.EuroToRate(currency);
            return this;
        }

        Euro *SubtractedCurrency(float value, std::string currency)
        {
            if (this->value - value / cantor.EuroToRate(currency) < 0)
            {
                std::cout << "Balance can not be lower than 0" << std::endl;
                return this;
            }
            this->value -= value / cantor.EuroToRate(currency);
            return this;
        }

        std::string Abbreviation()
        {
            return "EUR";
        }

        std::string Symbol()
        {
            return "€";
        }

        std::string Balance()
        {
            return std::to_string(this->value);
        }

        float DollarExchangeRate()
        {
            return cantor.EuroToRate("USD");
        }
    
};

int main() {
    
    FakeCantor cantor = FakeCantor();
    Euro euro = Euro(100.0, cantor);

    std::cout << "Abbreviation: " << euro.Abbreviation() << ", \nSymbol: " << euro.Symbol() << ", \nEuro to dolar rate: " << euro.DollarExchangeRate() << ", \nBalance: " << euro.Balance() << std::endl;

    euro = *euro.AddedCurrency(50.0, "USD");
    std::cout << "Balance after adding 50 USD" << euro.Balance() << std::endl;

    euro = *euro.SubtractedCurrency(50, "GBP");
    std::cout << "Balance after subtracting 50 GBP" << euro.Balance() << std::endl;

    return 0;
}

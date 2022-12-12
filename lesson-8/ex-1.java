class Ex1
{
    public static void main(String[] args) 
    {
        Forecast forecast = new Forecast.Fake();
        Weather celsius = new Weather(forecast, 0);
        Weather kelvin = celsius.todayTemperatureInKelvin();
        assert "273.15".equals(kelvin.toString());

    }
}

class Weather
{
    private Forecast forecast;
    private double temperature;

    public Weather(Forecast forecast, double temperature)
    {
        this.forecast = forecast;
        this.temperature = temperature;
    }

    public Weather todayTemperatureInKelvin()
    {
        return new Weather(this.forecast, this.temperature + 273.15);
    }

    @Override
    public String toString()
    {
        return Double.toString(temperature);
    }
}

interface Forecast
{
    double todayTemperatureInKelvin();

    final class Fake implements Forecast
    {
        //@Override
        public double todayTemperatureInKelvin()
        {
            return 0;
        }
    }
}
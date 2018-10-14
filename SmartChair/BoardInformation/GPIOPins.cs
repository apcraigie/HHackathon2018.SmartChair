using System.Collections.Generic;

namespace BoardInformation
{
    public enum GPIOPins
    {
        SitButton, Beeper, LiquidSensor, DistanceSensor, TemperatureSensor, SoundSensor
    };
    public static class PinInformation
    {
        public static Dictionary<GPIOPins, List<int>> PinMappings = new Dictionary<GPIOPins, List<int>>
        {
            { GPIOPins.SitButton, new List<int>{22} },
            { GPIOPins.Beeper, new List<int>{10} },
            { GPIOPins.LiquidSensor, new List<int>{9} },
            { GPIOPins.DistanceSensor, new List<int>{5, 6} },
            { GPIOPins.TemperatureSensor, new List<int>{19} },
            { GPIOPins.SoundSensor, new List<int>{21} }
        };
    }
}

using System.Collections.Generic;
using Windows.UI.Xaml.Controls;
using BoardInformation;

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

namespace MusicalChair
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public sealed partial class MainPage : Page
    {
        private List<int> _distancePins = PinInformation.PinMappings[GPIOPins.DistanceSensor];
        public MainPage()
        {
            this.InitializeComponent();
        }
    }
}

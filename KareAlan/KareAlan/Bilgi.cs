using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace KareAlan
{
    class Bilgi
    {
        public double kenarUzunlugu;

        public void EkrandanBilgiAl()
        {
            Console.Write("Karenin kenar uzunluğu: ");
            kenarUzunlugu = Convert.ToDouble(Console.ReadLine());
        }
    }
}

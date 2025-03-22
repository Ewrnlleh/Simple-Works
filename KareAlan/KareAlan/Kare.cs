using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace KareAlan
{
    class Kare
    {


        Bilgi b = new Bilgi();

        private double AlanHesapla(double kenarUzunlugu)
        {
            return kenarUzunlugu * kenarUzunlugu;
        }

        private double CevreHesapla(double kenarUzunlugu)
        {
            return 4 * kenarUzunlugu;
        }

        public void EkranaYazdır()
        {
            b.EkrandanBilgiAl();

            Console.WriteLine("Karenin Çevresi: " + CevreHesapla(b.kenarUzunlugu));
            Console.WriteLine("Karenin Alanı: "+ AlanHesapla(b.kenarUzunlugu));
            Console.WriteLine("////////////////////////////");
        }

       
    }
}

//Field(Alanlar)
//Properties(Özellikler)
//Methods(Metotlar)

//Delegates(Temsilciler)
//Events(Olaylar)

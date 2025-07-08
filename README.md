# ft_printf

`ft_printf`, C dilinde standart `printf` fonksiyonunun yeniden implementasyonudur. Bu proje, 42 okulu müfredatına uygun olarak yazılmıştır ve `variadic functions` kullanımıyla esnek bir biçimde veri formatlama sağlar.

## 🎯 Amaç

`printf` fonksiyonunun temel formatlama işlevlerini sıfırdan kodlayarak:
- Variadic argument kullanımı öğrenilir
- `write`, `va_start`, `va_arg`, `va_end` gibi sistem fonksiyonları kullanılır
- String, karakter, sayı ve pointer formatlaması gerçekleştirilir

## 🧩 Desteklenen Formatlar

| Format | Açıklama                            |
|--------|-------------------------------------|
| `%c`   | Tek karakter                        |
| `%s`   | String                              |
| `%p`   | Pointer adresi (hex format)         |
| `%d`   | Signed decimal integer              |
| `%i`   | Signed decimal integer              |
| `%u`   | Unsigned decimal integer            |
| `%x`   | Hexadecimal (küçük harf)            |
| `%X`   | Hexadecimal (büyük harf)            |
| `%%`   | Yüzde işareti                       |

## 📁 Dosya Yapısı

| Dosya             | Açıklama                                  |
|------------------|--------------------------------------------|
| `ft_printf.c`     | Ana `ft_printf` fonksiyonu                 |
| `ft_val_typ.c`    | Format karakterini algılayan fonksiyon     |
| `ft_putstr.c`     | String yazdırma fonksiyonu (`%s`)          |
| `ft_putchar.c`    | Tek karakter yazdırma (`%c`)               |
| `ft_putnbr.c`     | Signed integer yazdırma (`%d`, `%i`)       |
| `ft_putnbr_u.c`   | Unsigned integer yazdırma (`%u`)           |
| `ft_putptr.c`     | Pointer adres yazdırma (`%p`)              |
| `ft_puthexadec.c` | Hexadecimal yazdırma (`%x`, `%X`)          |
| `ft_base.c`       | Sayıları base'e göre dönüştüren yardımcılar|
| `libftprintf.h`   | Proje başlık dosyası                       |
| `Makefile`        | Derleme talimatları                        |

## 🔧 Derleme

Projeyi derlemek için terminalde:
```bash
make
```

Bu komut, `libftprintf.a` adında bir statik kütüphane oluşturur.

## 🧪 Test Etme (main.c ile)

Projenin test edilmesi için örnek bir `main.c` dosyası oluşturabilir ve şu şekilde derleyebilirsin:

```bash
cc main.c libftprintf.a
./a.out
```

> `main.c` içinde `#include "libftprintf.h"` satırı olmalı.

## 🧼 Temizlik Komutları

```bash
make clean    # .o dosyalarını siler
make fclean   # .o dosyalarını ve .a kütüphanesini siler
make re       # Baştan derler
```

## 📌 Kurallar

- Norme uygunluk zorunludur
- Bellek sızıntısı olmamalı (heap kullanılmadığı için risk zaten yok)
- `write` dışında sistem çağrıları yasaktır
- `malloc`, `free` gibi dinamik bellek işlemleri kullanılmamıştır
- `libft` kaynak kodları ayrı bir klasörde olmalıdır (eğer kullanılıyorsa)

## 📄 Örnek Kullanım

```c
#include "libftprintf.h"

int main(void)
{
    int len = ft_printf("Merhaba %% %s! Sayı: %d\n", "42", 2025);
    ft_printf("Yazdırılan karakter sayısı: %d\n", len);
    return (0);
}
```

## ✍️ Lisans

Bu proje 42 Network öğrencileri içindir. Açık kaynaklıdır ve eğitim amacıyla kullanılabilir.

---

Hazırlayan: [ArasBey22](https://github.com/ArasBey22)  

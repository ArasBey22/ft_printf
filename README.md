# Libft

Libft, C dilinde temel string ve bellek (memory) işlemleri ile çeşitli yardımcı fonksiyonların yeniden implemente edildiği bir kütüphanedir. Bu proje, 42 okulu müfredatına uygundur ve standart C fonksiyonlarının bazılarını kendi başına sıfırdan yazmanı sağlar.

## İçerik

### Karakter Kontrol Fonksiyonları

- `ft_isalpha`   : Karakterin alfabetik olup olmadığını kontrol eder.
- `ft_isdigit`   : Karakterin rakam olup olmadığını kontrol eder.
- `ft_isalnum`   : Karakterin alfabetik veya rakam olup olmadığını kontrol eder.
- `ft_isascii`   : Karakterin ASCII aralığında olup olmadığını kontrol eder.
- `ft_isprint`   : Karakterin yazdırılabilir olup olmadığını kontrol eder.
- `ft_toupper`   : Küçük harfi büyüğe çevirir.
- `ft_tolower`   : Büyük harfi küçüğe çevirir.

### String ve Bellek Fonksiyonları

- `ft_strlen`    : String uzunluğunu döner.
- `ft_memset`    : Belleği belirtilen değerle doldurur.
- `ft_bzero`     : Belleği sıfırlar.
- `ft_memcpy`    : Belleği kopyalar (overlap yoksa).
- `ft_memmove`   : Belleği güvenli şekilde kopyalar (overlap destekler).
- `ft_strlcpy`   : Stringi güvenli şekilde kopyalar (buffer taşmasını önler).
- `ft_strlcat`   : Stringleri güvenli şekilde birleştirir (buffer taşmasını önler).
- `ft_strdup`    : Stringin bir kopyasını oluşturur.
- `ft_calloc`    : Bellek ayırır ve sıfırlar.

### Arama ve Karşılaştırma Fonksiyonları

- `ft_strchr`    : String içinde karakter arar (ilk geçtiği yer).
- `ft_strrchr`   : String içinde karakter arar (son geçtiği yer).
- `ft_strncmp`   : İki stringi belirli uzunlukta karşılaştırır.
- `ft_memchr`    : Bellekte karakter arar.
- `ft_memcmp`    : Bellek bloklarını karşılaştırır.
- `ft_strnstr`   : String içinde substring arar.

### Diğer Fonksiyonlar

- `ft_atoi`      : Stringi tam sayıya çevirir.
- `ft_substr`    : Stringin belirli bir indeksinden itibaren alt string oluşturur.
- `ft_strjoin`   : İki stringi birleştirir.
- `ft_strtrim`   : Stringin başından ve sonundan belirli karakterleri kırpar.
- `ft_split`     : Stringi verilen ayırıcıya göre böler.
- `ft_itoa`      : Tam sayıyı stringe çevirir.
- `ft_strmapi`   : Her karaktere fonksiyon uygulayarak yeni string oluşturur.
- `ft_striteri`  : Her karakter üzerinde fonksiyon uygular (in-place).
- `ft_putchar_fd`: Karakteri belirtilen dosya tanımlayıcısına yazar.
- `ft_putstr_fd` : Stringi belirtilen dosya tanımlayıcısına yazar.
- `ft_putendl_fd`: Stringi yazıp sonuna yeni satır ekler.
- `ft_putnbr_fd` : Tam sayıyı belirtilen dosya tanımlayıcısına yazar.

## Proje Detayları

- **Kullanılan Dosyalar:** `Makefile`, `libft.h`, `ft_*.c`
- Tüm dosyalar proje ana klasöründe yer almalı.
- Kod, Norm kurallarına uygun olmalıdır. (Norm hatası = 0 puan)
- Global değişken kullanımı yasak. Yardımcı fonksiyonlar `static` olmalıdır.
- Derleme flag'leri: `-Wall -Wextra -Werror`
- Makefile hedefleri: `NAME`, `all`, `clean`, `fclean`, `re`
- Kütüphane, ar arşivi (`libft.a`) olarak oluşturulmalı.
- Libtool kullanımı yasak.
- `malloc` ile ayrılan bellek mutlaka `free` edilmelidir.
- Segfault, double free veya crash kabul edilmez.
- `libft.a` proje kökünde olmalıdır.
- Sadece git’e gönderilen dosyalar değerlendirilir.

### Sistem ve Test Notları

- Bazı fonksiyonlar (`strlcpy`, `strlcat`, `bzero`) GNU C Kütüphanesinde (glibc) standart değildir.
- Linux/glibc ortamında test için `<bsd/string.h>` dahil edilip, `-lbsd` ile derleme gerekebilir.

## Örnek Kullanım

```c
#include <fcntl.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
    int fd = open("cikti", O_CREAT | O_RDWR | O_TRUNC, 0777);
    if (fd == -1)
    {
        perror("Hata Çıktısı");
        return (1);
    }
    ft_putstr_fd("selam", fd);
    close(fd);
    return (0);
}
```

## Derleme

Projeyi derlemek için:
```sh
make
```

## Temizlik Komutları

```sh
make clean    # Nesne dosyalarını siler
make fclean   # Nesne dosyalarını ve libft.a'yı siler
make re       # Yeniden derler
```

## Lisans

Bu proje 42 okulu eğitim amaçlıdır ve açık kaynak lisansı ile dağıtılabilir. Kendi geliştirmelerinizi yaparken kaynak göstermeniz önerilir.

---

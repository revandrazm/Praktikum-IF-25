module SandiJurnal where

-- SANDI JURNAL
-- DEFINISI DAN SPESIFIKASI
isSandiValid :: Int -> Bool
-- isSandiValid sandi benar jika sandi terdiri dari tiga digit,
-- digit pertama dan terakhir sama, digit tengah berbeda,
-- dan jumlah ketiga digit habis dibagi tiga

-- REALISASI
isSandiValid sandi =
    let third = mod sandi 10 in
    let second = mod (div sandi 10) 10 in
    let first = div sandi 100
    in
        ((div sandi 1000) == 0) && (first /= 0) && (first == third) && ((mod (first + second + third) 3) == 0) && (second /= first)

-- APLIKASI
-- isSandiValid 252
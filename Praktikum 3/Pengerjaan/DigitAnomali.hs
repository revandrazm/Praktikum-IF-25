module DigitAnomali where

-- DIGIT ANOMALI
-- DEFINISI DAN SPESIFIKASI
hitungDigit :: Int -> Int -> Int
-- hitungDigit n d menghasilkan banyak kemunculan digit d dalam bilangan n.

-- REALISASI
hitungDigit n d
    | (n == 0) && (d == 0)          = 1
    | (n == 0)                      = 0
    | (div n 10) == 0 && (d == 0)   = 0
    | (mod n 10 == d)               = (hitungDigit (div n 10) d) + 1
    | otherwise                     = (hitungDigit (div n 10) d)

-- APLIKASI
-- hitungDigit 707070 7

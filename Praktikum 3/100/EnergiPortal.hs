module EnergiPortal where

-- ENERGI PORTAL
-- DEFINISI DAN SPESIFIKASI
jumlahAktivasi :: Int -> Int
-- jumlahAktivasi e menghasilkan banyak aktivasi sampai energi e menjadi nol.

-- REALISASI
jumlahAktivasi e
    | (e == 0)  = 0
    | otherwise = (jumlahAktivasi (div e 2)) + 1

-- APLIKASI
-- jumlahAktivasi 13

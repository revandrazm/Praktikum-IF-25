module KonversiWaktu where

-- KONVERSI WAKTU
-- DEFINISI TYPE
-- Tuliskan definisi tipe Jam dengan konstruktor Jm untuk jam, menit, dan detik.
-- Tambahkan deriving (Show, Read).
-- Lengkapi definisi tipe terlebih dahulu agar file dapat dimuat di GHCi.
data Jam = Jm Int Int Int
    deriving (Show, Read)

-- DEFINISI DAN SPESIFIKASI
detikKeJam :: Int -> Jam
-- detikKeJam total mengonversi detik menjadi Jam dalam siklus 24 jam.

-- REALISASI
detikKeJam total =
    Jm (mod (div total 3600) 24) 
    (div (total - (div total 3600) * 3600) 60)
    (mod total 60)

-- APLIKASI
-- detikKeJam 3665


-- 1 detik = 1/3600 jam
-- 1 detik = 1/60 menit
-- 1 detik = 1 detik
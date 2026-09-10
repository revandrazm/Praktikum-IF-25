module KoinMysteryShack where

-- KOIN MYSTERY SHACK
-- DEFINISI DAN SPESIFIKASI
hitungKoin :: Int -> Int -> Int -> Int -> (Int, Int)
-- hitungKoin quarter dime nickel penny menghasilkan pasangan
-- (dollar, sen) yang senilai dengan seluruh koin

-- REALISASI
hitungKoin 0 0 0 0 = (0, 0)
hitungKoin quarter dime nickel penny =
    let r = (quarter * 25 + dime * 10 + nickel * 5 + penny * 1)
    in
        (div r 100, mod r 100)

-- APLIKASI
-- hitungKoin 8 20 30 77
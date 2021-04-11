SELECT locations.identifier AS ville
FROM locations
WHERE identifier LIKE 'little%';


SELECT ASCII('R')  AS crypt, ASCII('E') AS crypt
FROM pokemon 
WHERE identifier = "regice";
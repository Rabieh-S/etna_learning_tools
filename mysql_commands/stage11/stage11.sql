SELECT AVG(pokemon.weight) AS Moyenne
FROM pokemon
WHERE identifier IN ("Suicune", "Entei", "Raikou");
SELECT w1.id
FROM Weather w
LEFT JOIN WEATHER w1
ON w.recordDate = DATE_SUB(w1.recordDate, INTERVAL 1 DAY)
WHERE w.temperature < w1.temperature
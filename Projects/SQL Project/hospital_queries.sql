USE HospitalDB;

-- Basic Queries (SELECT, WHERE, ORDER BY, DISTINCT)
-- 1. Show all doctors’ names and specialties.
SELECT Name, Specialty FROM DOCTOR;

-- 2. List all female patients.
SELECT Name, Gender FROM PATIENT WHERE Gender = 'Female';

-- 3. Show all unique blood groups in patients.
SELECT DISTINCT BloodGroup FROM PATIENT;

-- 4. Show patient names ordered by date of birth.
SELECT Name, DOB FROM PATIENT ORDER BY DOB ASC;

-- 5. Find the youngest patient.
SELECT Name, DOB 
FROM PATIENT
ORDER BY DOB DESC
LIMIT 1;

-- 6. List patients who have no insurance (NULL InsuranceID).
SELECT Name FROM PATIENT WHERE InsuranceID IS NULL;

-- 7. Show doctor with maximum years of experience.
SELECT Name, ExperienceYears 
FROM DOCTOR
ORDER BY ExperienceYears DESC
LIMIT 1;

-- 8. Find encounters that were “Emergency” type.
SELECT * FROM ENCOUNTER WHERE EncounterType = 'Emergency';

-- 9. Show prescriptions given on March 15, 2024.
SELECT * FROM PRESCRIPTION WHERE DispenseDate = '2024-03-15';

-- 10. List all procedures with charges more than ₹10,000.
SELECT ProcedureName, ProcedureCharge 
FROM MEDICAL_PROCEDURE
WHERE ProcedureCharge > 10000;

-- Intermediate Queries (JOINS, GROUP BY, Aggregates)
-- 11. Show patient name, doctor name, and encounter date.
SELECT p.Name AS Patient, d.Name AS Doctor, e.EncounterDate
FROM ENCOUNTER e
JOIN PATIENT p ON e.PatientID = p.PatientID
JOIN DOCTOR d ON e.DoctorID = d.DoctorID;

-- 12. Count how many patients each insurance company covers.
SELECT i.CompanyName, COUNT(p.PatientID) AS TotalPatients
FROM INSURANCE_COMPANY i
LEFT JOIN PATIENT p ON i.InsuranceID = p.InsuranceID
GROUP BY i.CompanyName;

-- 13. Find total number of encounters per month.
SELECT MONTH(EncounterDate) AS Month, COUNT(*) AS TotalEncounters
FROM ENCOUNTER
GROUP BY MONTH(EncounterDate);

-- 14. Show average procedure charge.
SELECT AVG(ProcedureCharge) AS AvgProcedureCost 
FROM MEDICAL_PROCEDURE;

-- 15. Find total bill amount collected by payment method.
SELECT PaymentMethod, SUM(TotalAmount) AS TotalCollected
FROM BILL
GROUP BY PaymentMethod;

-- 16. Show patients and their diagnosis.
SELECT p.Name, mh.Diagnosis
FROM PATIENT p
JOIN MEDICAL_HISTORY mh ON p.PatientID = mh.PatientID;

-- 17. Count how many patients have “Diabetes”.
SELECT COUNT(*) AS DiabeticPatients
FROM MEDICAL_HISTORY
WHERE Diagnosis LIKE '%Diabetes%';

-- 18. Show the insurance company that paid the highest amount.
SELECT i.CompanyName, SUM(b.InsurancePayable) AS TotalPaid
FROM BILL b
JOIN INSURANCE_COMPANY i ON b.InsuranceID = i.InsuranceID
GROUP BY i.CompanyName
ORDER BY TotalPaid DESC
LIMIT 1;

-- 19. Find how many prescriptions each doctor has given.
SELECT d.Name, COUNT(pr.PrescriptionID) AS TotalPrescriptions
FROM DOCTOR d
JOIN ENCOUNTER e ON d.DoctorID = e.DoctorID
JOIN PRESCRIPTION pr ON e.EncounterID = pr.EncounterID
GROUP BY d.Name;

-- 20. Find top 5 patients with highest total medical bills.
SELECT p.Name, SUM(b.TotalAmount) AS TotalSpent
FROM PATIENT p
JOIN ENCOUNTER e ON p.PatientID = e.PatientID
JOIN BILL b ON e.EncounterID = b.EncounterID
GROUP BY p.Name
ORDER BY TotalSpent DESC
LIMIT 5;

-- Advanced Queries (Subqueries, HAVING, Nested Joins, Analysis)
-- 21. Find doctors who treated more than 3 patients.
SELECT d.Name, COUNT(DISTINCT e.PatientID) AS PatientsTreated
FROM DOCTOR d
JOIN ENCOUNTER e ON d.DoctorID = e.DoctorID
GROUP BY d.Name
HAVING COUNT(DISTINCT e.PatientID) > 3;

-- 22. List patients who had both diagnostic tests and procedures.
SELECT DISTINCT p.Name
FROM PATIENT p
JOIN ENCOUNTER e ON p.PatientID = e.PatientID
WHERE e.EncounterID IN (SELECT EncounterID FROM DIAGNOSTIC_TEST)
  AND e.EncounterID IN (SELECT EncounterID FROM MEDICAL_PROCEDURE);

-- 23. Find patient who had the most diagnostic tests.
SELECT p.Name, COUNT(dt.TestID) AS TotalTests
FROM PATIENT p
JOIN ENCOUNTER e ON p.PatientID = e.PatientID
JOIN DIAGNOSTIC_TEST dt ON e.EncounterID = dt.EncounterID
GROUP BY p.Name
ORDER BY TotalTests DESC
LIMIT 1;

-- 24. Show doctors and the revenue generated from their patients.
SELECT d.Name, SUM(b.TotalAmount) AS Revenue
FROM DOCTOR d
JOIN ENCOUNTER e ON d.DoctorID = e.DoctorID
JOIN BILL b ON e.EncounterID = b.EncounterID
GROUP BY d.Name
ORDER BY Revenue DESC;

-- 25. Find patients who only paid by insurance (never out of pocket).
SELECT DISTINCT p.Name
FROM PATIENT p
JOIN ENCOUNTER e ON p.PatientID = e.PatientID
JOIN BILL b ON e.EncounterID = b.EncounterID
WHERE b.PatientPayable = 0;

-- 26. Get encounter details of patients diagnosed with “Asthma”.
SELECT e.EncounterID, p.Name, e.EncounterDate, d.Name AS Doctor
FROM ENCOUNTER e
JOIN PATIENT p ON e.PatientID = p.PatientID
JOIN DOCTOR d ON e.DoctorID = d.DoctorID
JOIN MEDICAL_HISTORY mh ON p.PatientID = mh.PatientID
WHERE mh.Diagnosis LIKE '%Asthma%';

-- 27. Find patients who had more than one doctor across encounters.
SELECT p.Name, COUNT(DISTINCT e.DoctorID) AS NumDoctors
FROM PATIENT p
JOIN ENCOUNTER e ON p.PatientID = e.PatientID
GROUP BY p.Name
HAVING COUNT(DISTINCT e.DoctorID) > 1;

-- 28. List procedures done in March 2024 with their patients.
SELECT p.Name, mp.ProcedureName, mp.ProcedureDate
FROM MEDICAL_PROCEDURE mp
JOIN ENCOUNTER e ON mp.EncounterID = e.EncounterID
JOIN PATIENT p ON e.PatientID = p.PatientID
WHERE mp.ProcedureDate BETWEEN '2024-03-01' AND '2024-03-31';

-- 29. Find the doctor who prescribed the most medications.
SELECT d.Name, COUNT(pr.PrescriptionID) AS TotalMeds
FROM DOCTOR d
JOIN ENCOUNTER e ON d.DoctorID = e.DoctorID
JOIN PRESCRIPTION pr ON e.EncounterID = pr.EncounterID
GROUP BY d.Name
ORDER BY TotalMeds DESC
LIMIT 1;

-- 30. Find average patient payable amount for each insurance company.
SELECT i.CompanyName, AVG(b.PatientPayable) AS AvgOutOfPocket
FROM BILL b
JOIN INSURANCE_COMPANY i ON b.InsuranceID = i.InsuranceID
GROUP BY i.CompanyName;

-- 31. Find patients who never had any diagnostic test.
SELECT p.Name
FROM PATIENT p
WHERE p.PatientID NOT IN (
  SELECT e.PatientID
  FROM ENCOUNTER e
  JOIN DIAGNOSTIC_TEST dt ON e.EncounterID = dt.EncounterID
);

-- 32. Get the doctor who had the highest number of emergency encounters.
SELECT d.Name, COUNT(*) AS EmergencyCases
FROM DOCTOR d
JOIN ENCOUNTER e ON d.DoctorID = e.DoctorID
WHERE e.EncounterType = 'Emergency'
GROUP BY d.Name
ORDER BY EmergencyCases DESC
LIMIT 1;

-- 33. Find the total revenue generated in April 2024.
SELECT SUM(TotalAmount) AS AprilRevenue
FROM BILL b
JOIN ENCOUNTER e ON b.EncounterID = e.EncounterID
WHERE e.EncounterDate BETWEEN '2024-04-01' AND '2024-04-30';

-- 34. Find patients who had more than one diagnosis in medical history.
SELECT p.Name, COUNT(mh.HistoryID) AS NumDiagnoses
FROM PATIENT p
JOIN MEDICAL_HISTORY mh ON p.PatientID = mh.PatientID
GROUP BY p.Name
HAVING COUNT(mh.HistoryID) > 1;

-- 35. Find unpaid bills and their patients.
SELECT b.BillID, p.Name, b.TotalAmount, b.PaymentStatus
FROM BILL b
JOIN ENCOUNTER e ON b.EncounterID = e.EncounterID
JOIN PATIENT p ON e.PatientID = p.PatientID
WHERE b.PaymentStatus = 'Pending';
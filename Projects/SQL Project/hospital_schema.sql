-- Hospital Management Database Schema

CREATE DATABASE IF NOT EXISTS HospitalDB;
USE HospitalDB;

-- 1. Insurance Company
CREATE TABLE INSURANCE_COMPANY (
    InsuranceID INT AUTO_INCREMENT PRIMARY KEY,
    CompanyName VARCHAR(200) NOT NULL,
    PolicyNumber VARCHAR(50) UNIQUE,
    ContactInfo VARCHAR(150)
);

-- 2. Patient
CREATE TABLE PATIENT (
    PatientID INT AUTO_INCREMENT PRIMARY KEY,
    Name VARCHAR(150) NOT NULL,
    DOB DATE,
    Gender ENUM('Male','Female','Other'),
    BloodGroup VARCHAR(5),
    Address VARCHAR(255),
    PhoneNo VARCHAR(20) UNIQUE,
    InsuranceID INT,
    FOREIGN KEY (InsuranceID) REFERENCES INSURANCE_COMPANY(InsuranceID)
        ON DELETE SET NULL
);

-- 3. Doctor
CREATE TABLE DOCTOR (
    DoctorID INT AUTO_INCREMENT PRIMARY KEY,
    Name VARCHAR(150) NOT NULL,
    Specialty VARCHAR(100),
    PhoneNo VARCHAR(20) UNIQUE,
    ExperienceYears INT CHECK (ExperienceYears >= 0)
);

-- 4. Encounter
CREATE TABLE ENCOUNTER (
    EncounterID INT AUTO_INCREMENT PRIMARY KEY,
    PatientID INT NOT NULL,
    DoctorID INT NOT NULL,
    EncounterType ENUM('Outpatient','Inpatient','Emergency'),
    EncounterDate DATE NOT NULL,
    FOREIGN KEY (PatientID) REFERENCES PATIENT(PatientID) ON DELETE CASCADE,
    FOREIGN KEY (DoctorID) REFERENCES DOCTOR(DoctorID) ON DELETE CASCADE
);

-- 5. Medical History
CREATE TABLE MEDICAL_HISTORY (
    HistoryID INT AUTO_INCREMENT PRIMARY KEY,
    PatientID INT NOT NULL,
    Diagnosis VARCHAR(200),
    Allergies VARCHAR(200),
    FOREIGN KEY (PatientID) REFERENCES PATIENT(PatientID) ON DELETE CASCADE
);

-- 6. Diagnostic Test
CREATE TABLE DIAGNOSTIC_TEST (
    TestID INT AUTO_INCREMENT PRIMARY KEY,
    EncounterID INT NOT NULL,
    TestType VARCHAR(100),
    Result VARCHAR(200),
    TestDate DATE,
    TestCharge DECIMAL(10,2),
    FOREIGN KEY (EncounterID) REFERENCES ENCOUNTER(EncounterID) ON DELETE CASCADE
);

-- 7. Prescription
CREATE TABLE PRESCRIPTION (
    PrescriptionID INT AUTO_INCREMENT PRIMARY KEY,
    EncounterID INT NOT NULL,
    MedicationName VARCHAR(100),
    Dosage VARCHAR(50),
    Instructions VARCHAR(255),
    DispenseDate DATE,
    Quantity INT,
    DurationDays INT,
    FOREIGN KEY (EncounterID) REFERENCES ENCOUNTER(EncounterID) ON DELETE CASCADE
);

-- 8. Medical Procedure
CREATE TABLE MEDICAL_PROCEDURE (
    ProcedureID INT AUTO_INCREMENT PRIMARY KEY,
    EncounterID INT NOT NULL,
    ProcedureName VARCHAR(200),
    ProcedureDate DATE,
    ProcedureCharge DECIMAL(10,2),
    Notes TEXT,
    FOREIGN KEY (EncounterID) REFERENCES ENCOUNTER(EncounterID) ON DELETE CASCADE
);

-- 9. Bill
CREATE TABLE BILL (
    BillID INT AUTO_INCREMENT PRIMARY KEY,
    EncounterID INT NOT NULL,
    TotalAmount DECIMAL(10,2),
    InsurancePayable DECIMAL(10,2),
    PatientPayable DECIMAL(10,2),
    PaymentMethod ENUM('Cash','Card','UPI','Insurance'),
    PaymentStatus ENUM('Paid','Pending','Partial') DEFAULT 'Pending',
    PaymentDate DATE,
    InsuranceID INT,
    FOREIGN KEY (EncounterID) REFERENCES ENCOUNTER(EncounterID) ON DELETE CASCADE,
    FOREIGN KEY (InsuranceID) REFERENCES INSURANCE_COMPANY(InsuranceID) ON DELETE SET NULL
);

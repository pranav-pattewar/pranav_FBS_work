USE HospitalDB;

-- Insert Insurance Companies

INSERT INTO INSURANCE_COMPANY (CompanyName, PolicyNumber, ContactInfo) VALUES
('LIC Health Insurance', 'LIC101', 'Pune'),
('ICICI Lombard', 'ICICI202', 'Mumbai'),
('HDFC ERGO', 'HDFC303', 'Nagpur'),
('Star Health', 'STAR404', 'Aurangabad'),
('Tata AIG', 'TATA505', 'Kolhapur'),
('Bajaj Allianz', 'BAJAJ606', 'Nashik'),
('SBI Health', 'SBI707', 'Solapur'),
('Oriental Insurance', 'ORI808', 'Satara'),
('New India Assurance', 'NIA909', 'Amravati'),
('United India Insurance', 'UII010', 'Jalgaon'),
('National Insurance', 'NI111', 'Pune'),
('Max Bupa', 'MAX212', 'Mumbai'),
('Care Health', 'CARE313', 'Nagpur'),
('Religare Health', 'REL414', 'Aurangabad'),
('Future Generali', 'FUT515', 'Nashik'),
('Kotak Mahindra Health', 'KOT616', 'Pune'),
('Aditya Birla Health', 'ABH717', 'Nagpur'),
('Reliance Health', 'REL818', 'Kolhapur'),
('Apollo Munich', 'APM919', 'Mumbai'),
('IFFCO Tokio', 'IFF2020', 'Aurangabad');

-- Insert Patients 

INSERT INTO PATIENT (Name, DOB, Gender, BloodGroup, Address, PhoneNo, InsuranceID) VALUES
('Rahul Patil', '1990-05-12', 'Male', 'B+', 'Shivaji Nagar, Pune', '9822012345', 1),
('Sneha Joshi', '1988-09-20', 'Female', 'O+', 'Mulund, Mumbai', '9876543210', 2),
('Amit Kulkarni', '1992-03-11', 'Male', 'A+', 'Civil Lines, Nagpur', '9764123456', 3),
('Priya Deshmukh', '1995-07-15', 'Female', 'AB+', 'CIDCO, Aurangabad', '9132123456', 4),
('Suresh Shinde', '1978-01-25', 'Male', 'O-', 'Gangapur Road, Nashik', '9876512345', 5),
('Pooja Jadhav', '1985-04-30', 'Female', 'B-', 'Rajarampuri, Kolhapur', '9833123456', 6),
('Anil Pawar', '1993-10-18', 'Male', 'A-', 'Thane West, Thane', '9822123456', 7),
('Kavita Rane', '1991-12-22', 'Female', 'O+', 'Latur City, Latur', '9866123456', 8),
('Vikas Sawant', '1987-02-14', 'Male', 'B+', 'Karve Nagar, Pune', '9812123456', 9),
('Meena Gaikwad', '1996-11-08', 'Female', 'AB-', 'Kalyan East, Thane', '9898123456', 10),
('Sunil More', '1989-06-19', 'Male', 'A+', 'Dadar, Mumbai', '9777123456', 11),
('Archana Chavan', '1994-08-05', 'Female', 'O-', 'Mahatma Nagar, Nashik', '9845123456', 12),
('Rohan Salunkhe', '1991-01-12', 'Male', 'B-', 'Shahu Nagar, Kolhapur', '9723123456', 13),
('Neha Khot', '1993-09-10', 'Female', 'O+', 'Nagpur City, Nagpur', '9768123456', 14),
('Mahesh Mane', '1980-05-17', 'Male', 'A-', 'Aurangabad Central', '9817123456', 15),
('Shital Lokhande', '1997-07-21', 'Female', 'B+', 'Sinhagad Road, Pune', '9799123456', 16),
('Ganesh Bhosale', '1986-03-29', 'Male', 'O-', 'Panvel, Navi Mumbai', '9856123456', 17),
('Smita Phadke', '1990-02-23', 'Female', 'A+', 'Kothrud, Pune', '9745123456', 18),
('Nitin Koli', '1982-04-16', 'Male', 'AB+', 'Nanded City, Nanded', '9829123456', 19),
('Manisha Nalawade', '1995-12-02', 'Female', 'O+', 'Chinchwad, Pune', '9756123456', 20);

-- Insert Doctors 

INSERT INTO DOCTOR (Name, Specialty, Qualification, ExperienceYears, PhoneNo) VALUES
('Dr. Ajay Khare', 'Cardiology', 'MBBS, MD', 15, '9822011111'),
('Dr. Seema Kulkarni', 'Gynecology', 'MBBS, MS', 12, '9822022222'),
('Dr. Prashant Desai', 'Orthopedics', 'MBBS, MS', 18, '9822033333'),
('Dr. Anjali Joshi', 'Pediatrics', 'MBBS, DCH', 10, '9822044444'),
('Dr. Nilesh Patil', 'Dermatology', 'MBBS, MD', 8, '9822055555'),
('Dr. Swati Jadhav', 'Psychiatry', 'MBBS, MD', 14, '9822066666'),
('Dr. Ramesh Pawar', 'Neurology', 'MBBS, DM', 20, '9822077777'),
('Dr. Kavita Sawant', 'ENT', 'MBBS, MS', 9, '9822088888'),
('Dr. Vinay Shinde', 'General Medicine', 'MBBS, MD', 16, '9822099999'),
('Dr. Rekha More', 'Ophthalmology', 'MBBS, MS', 11, '9822101010'),
('Dr. Sandeep Gaikwad', 'Oncology', 'MBBS, MD', 17, '9822111111'),
('Dr. Neeta Salunkhe', 'Anesthesiology', 'MBBS, DA', 13, '9822121212'),
('Dr. Rajesh Mane', 'Urology', 'MBBS, MS', 19, '9822131313'),
('Dr. Poonam Lokhande', 'Pathology', 'MBBS, MD', 7, '9822141414'),
('Dr. Yogesh Bhosale', 'Radiology', 'MBBS, MD', 12, '9822151515'),
('Dr. Smita Phadke', 'Endocrinology', 'MBBS, DM', 9, '9822161616'),
('Dr. Nikhil Koli', 'Nephrology', 'MBBS, DM', 21, '9822171717'),
('Dr. Manisha Nalawade', 'Gynecology', 'MBBS, MS', 10, '9822181818'),
('Dr. Atul Chavan', 'Orthopedics', 'MBBS, MS', 15, '9822191919'),
('Dr. Meera Joshi', 'General Medicine', 'MBBS, MD', 11, '9822202020');

-- Insert Encounters 

INSERT INTO ENCOUNTER (PatientID, DoctorID, EncounterType, EncounterDate) VALUES
(1, 1, 'Outpatient', '2024-01-05'),
(2, 2, 'Outpatient', '2024-01-10'),
(3, 3, 'Emergency', '2024-02-12'),
(4, 4, 'Inpatient', '2024-02-15'),
(5, 5, 'Outpatient', '2024-02-18'),
(6, 6, 'Emergency', '2024-02-20'),
(7, 7, 'Inpatient', '2024-02-25'),
(8, 8, 'Outpatient', '2024-03-01'),
(9, 9, 'Outpatient', '2024-03-05'),
(10, 10, 'Emergency', '2024-03-10'),
(11, 11, 'Outpatient', '2024-03-12'),
(12, 12, 'Inpatient', '2024-03-15'),
(13, 13, 'Outpatient', '2024-03-18'),
(14, 14, 'Emergency', '2024-03-20'),
(15, 15, 'Inpatient', '2024-03-25'),
(16, 16, 'Outpatient', '2024-03-28'),
(17, 17, 'Emergency', '2024-04-01'),
(18, 18, 'Inpatient', '2024-04-05'),
(19, 19, 'Outpatient', '2024-04-08'),
(20, 20, 'Outpatient', '2024-04-12');


-- Insert Medical History (20 rows)

INSERT INTO MEDICAL_HISTORY (PatientID, Diagnosis, Allergies) VALUES
(1, 'Hypertension', 'Penicillin'),
(2, 'Asthma', 'Dust'),
(3, 'Diabetes', 'None'),
(4, 'Migraine', 'Peanuts'),
(5, 'Heart Disease', 'None'),
(6, 'Thyroid Disorder', 'Sulfa Drugs'),
(7, 'Back Pain', 'None'),
(8, 'Skin Allergy', 'Pollen'),
(9, 'Hypertension', 'None'),
(10, 'PCOD', 'None'),
(11, 'Tuberculosis (past)', 'None'),
(12, 'Gallstones', 'Seafood'),
(13, 'Kidney Stones', 'None'),
(14, 'Chronic Bronchitis', 'Dust'),
(15, 'Arthritis', 'None'),
(16, 'Diabetes', 'Insulin'),
(17, 'High Cholesterol', 'Eggs'),
(18, 'Anemia', 'None'),
(19, 'Asthma', 'Dust, Pollen'),
(20, 'Depression', 'None');


-- Insert Diagnostic Tests (20 rows)


INSERT INTO DIAGNOSTIC_TEST (EncounterID, TestType, Result, TestDate, TestCharge) VALUES
(1, 'Blood Pressure', '140/90 mmHg', '2024-01-05', 300.00),
(2, 'Lung Function Test', 'Mild obstruction', '2024-01-10', 800.00),
(3, 'Blood Sugar', 'Fasting 160 mg/dl', '2024-02-12', 500.00),
(4, 'MRI Brain', 'Normal', '2024-02-15', 5500.00),
(5, 'ECG', 'Irregular heartbeat', '2024-02-18', 1000.00),
(6, 'Thyroid Profile', 'TSH High', '2024-02-20', 600.00),
(7, 'X-ray Spine', 'Disc bulge detected', '2024-02-25', 900.00),
(8, 'Allergy Test', 'Positive for pollen', '2024-03-01', 1200.00),
(9, 'Cholesterol Test', 'High LDL', '2024-03-05', 700.00),
(10, 'Ultrasound Abdomen', 'Normal', '2024-03-10', 2000.00),
(11, 'Chest X-ray', 'Healed lesion', '2024-03-12', 800.00),
(12, 'Ultrasound Gallbladder', 'Gallstones present', '2024-03-15', 2500.00),
(13, 'CT Scan Kidney', 'Stone 5mm', '2024-03-18', 4500.00),
(14, 'Spirometry', 'Reduced FEV1', '2024-03-20', 1000.00),
(15, 'Knee X-ray', 'Arthritic changes', '2024-03-25', 1100.00),
(16, 'HbA1c', '8.5%', '2024-03-28', 650.00),
(17, 'Lipid Profile', 'Triglycerides High', '2024-04-01', 700.00),
(18, 'CBC', 'Hemoglobin low', '2024-04-05', 400.00),
(19, 'Peak Flow Meter', 'Below normal', '2024-04-08', 500.00),
(20, 'Psychological Test', 'Mild depression', '2024-04-12', 1500.00);


-- Insert Prescriptions (20 rows)

INSERT INTO PRESCRIPTION (EncounterID, MedicationName, Dosage, Instructions, DispenseDate, Quantity, DurationDays) VALUES
(1, 'Amlodipine', '5mg', 'Once daily after breakfast', '2024-01-05', 30, 30),
(2, 'Salbutamol Inhaler', '2 puffs', 'As needed for breathlessness', '2024-01-10', 1, 30),
(3, 'Metformin', '500mg', 'Twice daily after meals', '2024-02-12', 60, 30),
(4, 'Sumatriptan', '50mg', 'When migraine starts', '2024-02-15', 10, 10),
(5, 'Aspirin', '75mg', 'Once daily after lunch', '2024-02-18', 30, 30),
(6, 'Levothyroxine', '100mcg', 'Morning on empty stomach', '2024-02-20', 30, 30),
(7, 'Ibuprofen', '400mg', 'Twice daily after meals', '2024-02-25', 20, 10),
(8, 'Cetirizine', '10mg', 'Once daily at night', '2024-03-01', 15, 15),
(9, 'Atorvastatin', '20mg', 'Once daily at bedtime', '2024-03-05', 30, 30),
(10, 'Pantoprazole', '40mg', 'Once daily before breakfast', '2024-03-10', 30, 30),
(11, 'Rifampicin', '600mg', 'Morning before food', '2024-03-12', 30, 30),
(12, 'Ursodeoxycholic Acid', '300mg', 'Twice daily after meals', '2024-03-15', 20, 10),
(13, 'Tamsulosin', '0.4mg', 'Once daily at night', '2024-03-18', 15, 15),
(14, 'Formoterol Inhaler', '2 puffs', 'Twice daily morning and night', '2024-03-20', 1, 30),
(15, 'Diclofenac', '50mg', 'Twice daily with meals', '2024-03-25', 20, 10),
(16, 'Insulin Injection', '10 units', 'Before dinner', '2024-03-28', 30, 30),
(17, 'Fenofibrate', '160mg', 'Once daily after meals', '2024-04-01', 30, 30),
(18, 'Iron Tablets', '100mg', 'Twice daily after meals', '2024-04-05', 60, 30),
(19, 'Montelukast', '10mg', 'Once daily at night', '2024-04-08', 15, 15),
(20, 'Sertraline', '50mg', 'Once daily in the morning', '2024-04-12', 30, 30);


-- Insert Procedures (20 rows)

INSERT INTO MEDICAL_PROCEDURE (EncounterID, ProcedureName, ProcedureDate, ProcedureCharge, Notes) VALUES
(1, 'ECG', '2024-01-05', 800.00, 'Mild arrhythmia detected'),
(2, 'Peak Flow Test', '2024-01-10', 500.00, 'Asthma monitoring'),
(3, 'Blood Sampling', '2024-02-12', 200.00, 'For sugar test'),
(4, 'MRI Scan', '2024-02-15', 5500.00, 'Headache evaluation'),
(5, 'Angiography', '2024-02-18', 12000.00, 'Heart condition check'),
(6, 'Thyroid Scan', '2024-02-20', 2000.00, 'Thyroid swelling check'),
(7, 'Spine X-ray', '2024-02-25', 900.00, 'Back pain evaluation'),
(8, 'Skin Prick Test', '2024-03-01', 1000.00, 'Allergy confirmation'),
(9, 'Lipid Profile Blood Test', '2024-03-05', 700.00, 'Cholesterol check'),
(10, 'Ultrasound Abdomen', '2024-03-10', 2000.00, 'Stomach pain'),
(11, 'Bronchoscopy', '2024-03-12', 3500.00, 'Chest evaluation'),
(12, 'Gallbladder Surgery', '2024-03-15', 25000.00, 'Gallstone removal'),
(13, 'Kidney Stone Removal', '2024-03-18', 30000.00, 'Stone extraction'),
(14, 'Spirometry', '2024-03-20', 1200.00, 'Breathing function test'),
(15, 'Knee Joint Aspiration', '2024-03-25', 1800.00, 'Fluid removal'),
(16, 'Insulin Titration Procedure', '2024-03-28', 600.00, 'Diabetes management'),
(17, 'Cardiac Stress Test', '2024-04-01', 2500.00, 'Heart check'),
(18, 'Blood Transfusion', '2024-04-05', 5000.00, 'Anemia management'),
(19, 'Asthma Inhalation Therapy', '2024-04-08', 700.00, 'Asthma treatment'),
(20, 'Counseling Session', '2024-04-12', 1000.00, 'Depression management');


-- Insert Bills (20 rows)

INSERT INTO BILL (EncounterID, TotalAmount, InsurancePayable, PatientPayable, PaymentMethod, PaymentStatus, PaymentDate, InsuranceID) VALUES
(1, 2000.00, 1500.00, 500.00, 'Cash', 'Paid', '2024-01-06', 1),
(2, 2500.00, 2000.00, 500.00, 'Insurance', 'Paid', '2024-01-11', 2),
(3, 3000.00, 1000.00, 2000.00, 'Card', 'Partial', '2024-02-13', 3),
(4, 7500.00, 5000.00, 2500.00, 'Insurance', 'Paid', '2024-02-16', 4),
(5, 13000.00, 8000.00, 5000.00, 'UPI', 'Paid', '2024-02-19', 5),
(6, 2600.00, 2000.00, 600.00, 'Cash', 'Paid', '2024-02-21', 6),
(7, 3900.00, 3000.00, 900.00, 'Card', 'Pending', '2024-02-26', 7),
(8, 2200.00, 1500.00, 700.00, 'Insurance', 'Paid', '2024-03-02', 8),
(9, 1700.00, 1200.00, 500.00, 'Cash', 'Paid', '2024-03-06', 9),
(10, 4000.00, 3000.00, 1000.00, 'UPI', 'Paid', '2024-03-11', 10),
(11, 4300.00, 3500.00, 800.00, 'Insurance', 'Paid', '2024-03-13', 11),
(12, 27500.00, 20000.00, 7500.00, 'Card', 'Paid', '2024-03-16', 12),
(13, 34500.00, 25000.00, 9500.00, 'Insurance', 'Pending', '2024-03-19', 13),
(14, 2200.00, 1500.00, 700.00, 'UPI', 'Paid', '2024-03-21', 14),
(15, 2900.00, 2000.00, 900.00, 'Cash', 'Paid', '2024-03-26', 15),
(16, 1250.00, 800.00, 450.00, 'UPI', 'Paid', '2024-03-29', 16),
(17, 3200.00, 2500.00, 700.00, 'Insurance', 'Paid', '2024-04-02', 17),
(18, 6000.00, 4000.00, 2000.00, 'Card', 'Paid', '2024-04-06', 18),
(19, 1500.00, 1000.00, 500.00, 'Cash', 'Paid', '2024-04-09', 19),
(20, 2200.00, 1500.00, 700.00, 'Insurance', 'Paid', '2024-04-13', 20);

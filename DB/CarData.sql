-- Create a table for accessing the car data
CREATE TABLE Car_Data (
    CompanyName VARCHAR(25) PRIMARY KEY,
    ModelName VARCHAR(25) NOT NULL,
    RegNumber VARCHAR(15) NOT NULL,
    FuelType VARCHAR(10) NOT NULL,
    FuelCapacity INT NOT NULL,
    EngineNumber VARCHAR(25) NOT NULL,
    EngineCapacity INT NOT NULL
);

-- Inserting sample data into the Customer table
INSERT INTO Car_Data (CompanyName, ModelName, RegNumber, FuelType, FuelCapacity, EngineNumber, EngineCapacity)
VALUES
    ('SUZUKI', 'Swift', 'KA 1234', 'CNG', 37, 'MCHV-KX987-OP654-I3210', 1197),
    ('SUZUKI', 'Baleno', 'TN 1234', 'Petrol', 43, 'MCHV-KX987-OP654-I3210', 1498),
    ('HYUNDAI', 'i20', 'AP 1234', 'Diesel', 43, 'MCHV-KX987-OP654-I3210', 1498),
    ('HYUNDAI', 'Venue', 'KL 1234', 'Diesel', 45, 'MCHV-KX987-OP654-I3210', 1798),
    ('HONDA', 'Jazz', 'AP 1234', 'Petrol', 40, 'MCHV-KX987-OP654-I3210', 1197),
    ('HONDA', 'Amaze', 'KL 1234', 'Petrol', 43, 'MCHV-KX987-OP654-I3210', 1397),
    ('RENAULT', 'KWID', 'AP 1234', 'Electric', 8, 'MCHV-KX987-OP654-I3210', 999),
    ('RENAULT', 'Pulse', 'KL 1234', 'Petrol', 43, 'MCHV-KX987-OP654-I3210', 1197),
    ('FORD', 'Figo', 'PY 1234', 'Petrol', 39, 'MCHV-KX987-OP654-I3210', 1197),
    ('FORD', 'Ecosport', 'GJ 1234', 'Diesel', 43, 'MCHV-KX987-OP654-I3210', 1498);

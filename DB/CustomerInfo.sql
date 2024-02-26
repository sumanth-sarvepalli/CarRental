-- Create a table for storing the customer info
CREATE TABLE Customer_Info (
    CustomerID INT PRIMARY KEY,
    FirstName VARCHAR(50) NOT NULL,
    LastName VARCHAR(50) NOT NULL,
    CustomerAge INT NOT NULL,
    PhoneNumber VARCHAR(15) NOT NULL,
    EmailAddress VARCHAR(25),
    Priority INT NOT NULL,
    CreateDate DATETIME NOT NULL
);

-- Inserting sample data into the Customer table
INSERT INTO Customer_Info (CustomerID, FirstName, LastName, PhoneNumber, EmailAddress, Priority, CreateDate)
VALUES
    (1, 'John', 'Doe', 32, '+1 123-456-7890', 'john.doe@example.com', 3, '2024-02-25 10:00:00'),
    (2, 'Jane', 'Smith', 28, '+1 987-654-3210', 'jane.smith@example.com', 2, '2024-02-25 11:30:00'),
    (3, 'Alice', 'Johnson', 20, '+1 555-123-4567', NULL, 1, '2024-02-25 12:45:00');

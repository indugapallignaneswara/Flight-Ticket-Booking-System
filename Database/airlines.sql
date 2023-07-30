CREATE TABLE airlines (
    FlightID int,
    Name varchar(255),
    StartingPoint varchar(255),
    Destination varchar(255),
    Scheduled_AT TIME
);


INSERT INTO airlines (FlightID, Name, StartingPoint, Destination, Scheduled_AT)
VALUES
    (1, 'Air India', 'Delhi', 'Mumbai', '08:30:00'),
    (2, 'IndiGo', 'Bangalore', 'Chennai', '09:15:00'),
    (3, 'SpiceJet', 'Mumbai', 'Kolkata', '11:00:00'),
    (4, 'Vistara', 'Delhi', 'Ahmedabad', '07:45:00'),
    (5, 'AirAsia India', 'Bangalore', 'Goa', '10:20:00'),
    (6, 'Air India', 'Mumbai', 'Chennai', '11:30:00'),
    (7, 'SpiceJet', 'Delhi', 'Jaipur', '12:15:00'),
    (8, 'IndiGo', 'Kolkata', 'Hyderabad', '13:10:00'),
    (9, 'GoAir', 'Bangalore', 'Mumbai', '14:30:00'),
    (10, 'AirAsia India', 'Delhi', 'Chandigarh', '15:40:00'),
    (11, 'Vistara', 'Mumbai', 'Kochi', '16:25:00'),
    (12, 'SpiceJet', 'Chennai', 'Mumbai', '17:15:00'),
    (13, 'IndiGo', 'Delhi', 'Guwahati', '18:05:00'),
    (14, 'Air India', 'Hyderabad', 'Delhi', '19:20:00'),
    (15, 'GoAir', 'Kolkata', 'Mumbai', '20:10:00'),
    (16, 'Vistara', 'Delhi', 'Bangalore', '21:45:00'),
    (17, 'AirAsia India', 'Chennai', 'Kolkata', '22:30:00'),
    (18, 'SpiceJet', 'Mumbai', 'Ahmedabad', '23:55:00'),
    (19, 'IndiGo', 'Delhi', 'Mumbai', '09:00:00'),
    (20, 'GoAir', 'Delhi', 'Patna', '14:45:00');

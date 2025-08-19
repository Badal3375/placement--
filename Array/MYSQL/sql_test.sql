use bds;
SHOW tables;
create database test_1;
use test_1;
show DATABASES;
use test_1;
create table customer(
     cust_id INT   PRIMARY KEY AUTO_INCREMENT,
     cust_name VARCHAR(255),
     cust_email VARCHAR(255)
)

desc customer;
insert into customer (cust_name,cust_email) values ('badal','badal.@example.com'),('John Doe','john.doe@example.com'),
('John  ','john. @example.com'),('  Doe',' don.doe@example.com'),(' rajesh  ','rajesh.doe@example.com'),(' suresh ',' suesh.doe@example.com');


create table orders (
    order_id INT PRIMARY KEY AUTO_INCREMENT,
    cust_id INT,
    order_date DATE,
    total DECIMAL(10,2),
    FOREIGN KEY (cust_id) REFERENCES customer(cust_id)

);
select * from customer;

select * from orders;
insert into orders values(101,1,'27/07/25',123.23);
select*from orders;
insert into orders values(103,1,'26/07/25',123.23);
use test_1;

select *from orders;
insert into orders values(103,1,'26/07/25',123.23);
select *from orders;
 use bds;
 show tables;
 select* from bds1;
 
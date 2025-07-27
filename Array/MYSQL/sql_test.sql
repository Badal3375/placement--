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
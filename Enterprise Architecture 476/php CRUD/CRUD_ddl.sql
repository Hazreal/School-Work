CREATE DATABASE college;

USE college;
CREATE TABLE person
(
  id int auto_increment PRIMARY KEY,
  name varchar(50),
  gender char(1),
  dob date
);

CREATE TABLE course
(
  id int auto_increment PRIMARY KEY,
  p_id int,
  cnum varchar(50),
  title varchar(50),
  hours int,
  FOREIGN KEY (p_id) references person(id)
);

CREATE TABLE users 
(
    id int primary key auto_increment, 
    username varchar(255), 
    password varchar(255) 
);

INSERT person (id, name,gender,dob) VALUES(1, 'Sami', 'm', '1995-01-10');
INSERT person (id, name,gender,dob) VALUES(2, 'Andrew', 'm', '1995-01-01');
INSERT person (id, name,gender,dob) VALUES(3, 'Jordan C.', 'm', '1995-02-02');
INSERT person (id, name,gender,dob) VALUES(4, 'Troy', 'm', '1995-04-04');
INSERT person (id, name,gender,dob) VALUES(5, 'Kyle', 'm', '1995-06-06');
INSERT person (id, name,gender,dob) VALUES(6, 'Ethan', 'm', '1995-08-08');
INSERT person (id, name,gender,dob) VALUES(7, 'Adam P.', 'm', '1995-12-12');
INSERT person (id, name,gender,dob) VALUES(8, 'Adam R.', 'm', '1996-02-02');
INSERT person (id, name,gender,dob) VALUES(9, 'Tanner', 'm', '1996-03-03');
INSERT person (id, name,gender,dob) VALUES(10, 'Jordan S.', 'm', '1996-04-04');
INSERT person (id, name,gender,dob) VALUES(11, 'Gage', 'm', '1996-05-05');

INSERT course (p_id, cnum, title, hours) VALUES(1, 'CIS 476', 'Enterprise Architecture', 3);
INSERT course (p_id, cnum, title, hours) VALUES(3, 'CIS 476', 'Enterprise Architecture', 3);
INSERT course (p_id, cnum, title, hours) VALUES(5, 'CIS 476', 'Enterprise Architecture', 3);
INSERT course (p_id, cnum, title, hours) VALUES(7, 'CIS 476', 'Enterprise Architecture', 3);
INSERT course (p_id, cnum, title, hours) VALUES(9, 'CIS 476', 'Enterprise Architecture', 3);
INSERT course (p_id, cnum, title, hours) VALUES(11, 'CIS 476', 'Enterprise Architecture', 3);



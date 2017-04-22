CREATE DATABASE college;

USE college;
CREATE TABLE person
(
  id bigint auto_increment PRIMARY KEY,
  name varchar(50),
  gender char(1),
  dob date
);

INSERT person (name,gender,dob) VALUES('Sami', 'm', '1995-01-10');
INSERT person (name,gender,dob) VALUES('Andrew', 'm', '1995-01-01');
INSERT person (name,gender,dob) VALUES('Jordan C.', 'm', '1995-02-02');
INSERT person (name,gender,dob) VALUES('Troy', 'm', '1995-04-04');
INSERT person (name,gender,dob) VALUES('Kyle C.', 'm', '1995-05-05');
INSERT person (name,gender,dob) VALUES('Kyle D.', 'm', '1995-06-06');
INSERT person (name,gender,dob) VALUES('Ethan', 'm', '1995-08-08');
INSERT person (name,gender,dob) VALUES('Ali', 'm', '1995-10-10');
INSERT person (name,gender,dob) VALUES('Adam P.', 'm', '1995-12-12');
INSERT person (name,gender,dob) VALUES('Adam R.', 'm', '1996-02-02');
INSERT person (name,gender,dob) VALUES('Tanner', 'm', '1996-03-03');
INSERT person (name,gender,dob) VALUES('Jordan S.', 'm', '1996-04-04');
INSERT person (name,gender,dob) VALUES('Gage', 'm', '1996-05-05');

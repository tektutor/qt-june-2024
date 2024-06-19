# Day 6

## Lab - Executing the Qt DB application

We need mysql db server, hence let's create a mysql docker container
```
docker run -d --name mysql --hostname -e MYSQL_ROOT_PASSWORD=root@123 mysql bitnami/mysql:latest
docker ps
docker inspect -f {{.NetworkSettings.IPAddress}} mysql
```

Let's get inside the mysql container shell. Type 'root@123' as password when prompted
```
docker exec -it mysql sh
mysql -u root -p
CREATE DATABASE tektutor;
USE tektutor;
CREATE TABLE training ( id INT NOT NULL, name VARCHAR(200) NOT NULL, duration VARCHAR(200) NOT NULL, PRIMARY KEY(id) );

INSERT INTO training VALUES ( 1, "DevOps", "5 Days" );
INSERT INTO training VALUES ( 2, "Qt HMI with C++", "5 Days");
INSERT INTO training VALUES ( 3, "Microservices using golang", "5 Days");

SELECT * FROM training;
DESCRIBE TABLE training;
```

cd ~/qt-june-2024
git pull
cd Day6/db

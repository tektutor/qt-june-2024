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

After runing qmake -project, you need to edit db.pro file and add QT += sql save it.
```
cd ~/qt-june-2024
git pull
cd Day6/db
qmake -project
qmake
make clean all
./db
```

Expected output
![image](https://github.com/tektutor/qt-june-2024/assets/12674043/b2ba88ce-fb83-4f77-a881-fc6d7735d9ab)
![image](https://github.com/tektutor/qt-june-2024/assets/12674043/a6aa9db1-33b0-42a4-b294-453bfc511e48)
![image](https://github.com/tektutor/qt-june-2024/assets/12674043/4f8044ef-466f-400f-9cb0-f25753409389)


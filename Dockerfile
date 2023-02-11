FROM anapsix/alpine-java
EXPOSE 8080
COPY /target/mav-project.jar /home/mav.project.jar
CMD ["java","-jar","/mav-project.jar"]

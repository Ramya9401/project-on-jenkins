FROM openjdk-11.0.17
EXPOSE 8080
COPY /target/mav-project.jar /home/mav.project.jar
CMD ["java","-jar","/mav-project.jar"]

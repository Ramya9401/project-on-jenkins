FROM openjdk 11.0.17
EXPOSE 8080
ADD target/mav-project.jar mav.project.jar
ENTRYPOINT ["jar","-jar","/mav-project.jar"]
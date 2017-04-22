/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javawebclient;

/**
 *
 * @author Haz
 */
public class JavaWebClient {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        System.out.println(helloWorld());
        
        
    }

    private static String helloWorld() {
        org.tempuri.Service1 service = new org.tempuri.Service1();
        org.tempuri.Service1Soap port = service.getService1Soap12();
        return port.helloWorld();
    }
    
}

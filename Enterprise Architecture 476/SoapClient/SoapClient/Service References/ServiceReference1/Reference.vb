﻿'------------------------------------------------------------------------------
' <auto-generated>
'     This code was generated by a tool.
'     Runtime Version:4.0.30319.42000
'
'     Changes to this file may cause incorrect behavior and will be lost if
'     the code is regenerated.
' </auto-generated>
'------------------------------------------------------------------------------

Option Strict On
Option Explicit On


Namespace ServiceReference1
    
    <System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "4.0.0.0"),  _
     System.ServiceModel.ServiceContractAttribute([Namespace]:="http://www.webserviceX.NET", ConfigurationName:="ServiceReference1.GlobalWeatherSoap")>  _
    Public Interface GlobalWeatherSoap
        
        <System.ServiceModel.OperationContractAttribute(Action:="http://www.webserviceX.NET/GetWeather", ReplyAction:="*"),  _
         System.ServiceModel.XmlSerializerFormatAttribute(SupportFaults:=true)>  _
        Function GetWeather(ByVal CityName As String, ByVal CountryName As String) As String
        
        <System.ServiceModel.OperationContractAttribute(Action:="http://www.webserviceX.NET/GetCitiesByCountry", ReplyAction:="*"),  _
         System.ServiceModel.XmlSerializerFormatAttribute(SupportFaults:=true)>  _
        Function GetCitiesByCountry(ByVal CountryName As String) As String
    End Interface
    
    <System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "4.0.0.0")>  _
    Public Interface GlobalWeatherSoapChannel
        Inherits ServiceReference1.GlobalWeatherSoap, System.ServiceModel.IClientChannel
    End Interface
    
    <System.Diagnostics.DebuggerStepThroughAttribute(),  _
     System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "4.0.0.0")>  _
    Partial Public Class GlobalWeatherSoapClient
        Inherits System.ServiceModel.ClientBase(Of ServiceReference1.GlobalWeatherSoap)
        Implements ServiceReference1.GlobalWeatherSoap
        
        Public Sub New()
            MyBase.New
        End Sub
        
        Public Sub New(ByVal endpointConfigurationName As String)
            MyBase.New(endpointConfigurationName)
        End Sub
        
        Public Sub New(ByVal endpointConfigurationName As String, ByVal remoteAddress As String)
            MyBase.New(endpointConfigurationName, remoteAddress)
        End Sub
        
        Public Sub New(ByVal endpointConfigurationName As String, ByVal remoteAddress As System.ServiceModel.EndpointAddress)
            MyBase.New(endpointConfigurationName, remoteAddress)
        End Sub
        
        Public Sub New(ByVal binding As System.ServiceModel.Channels.Binding, ByVal remoteAddress As System.ServiceModel.EndpointAddress)
            MyBase.New(binding, remoteAddress)
        End Sub
        
        Public Function GetWeather(ByVal CityName As String, ByVal CountryName As String) As String Implements ServiceReference1.GlobalWeatherSoap.GetWeather
            Return MyBase.Channel.GetWeather(CityName, CountryName)
        End Function
        
        Public Function GetCitiesByCountry(ByVal CountryName As String) As String Implements ServiceReference1.GlobalWeatherSoap.GetCitiesByCountry
            Return MyBase.Channel.GetCitiesByCountry(CountryName)
        End Function
    End Class
End Namespace
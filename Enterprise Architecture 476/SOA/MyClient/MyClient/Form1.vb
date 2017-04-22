Public Class Form1

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim client As ServiceReference1.Service1SoapClient

        Dim response As String

        client = New ServiceReference1.Service1SoapClient

        response = client.HelloWorld

        RichTextBox1.Text = response
    End Sub
End Class

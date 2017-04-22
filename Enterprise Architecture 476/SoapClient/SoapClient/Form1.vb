Public Class Form1

    Private Sub ComboBox1_SelectedIndexChanged(sender As Object, e As EventArgs) Handles ComboBox1.SelectedIndexChanged
        Dim client As ServiceReference1.GlobalWeatherSoapClient
        Dim response As String

        client = New ServiceReference1.GlobalWeatherSoapClient
        response = client.GetCitiesByCountry(ComboBox1.SelectedText)
        RichTextBox1.Text = response

    End Sub
End Class

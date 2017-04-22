Public Class Form1

    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load

    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        'MessageBox.Show("Hello, world.")
        'Add new product to drop down list

        cbProducts.Items.Add(tbNewProduct.Text)
        tbNewProduct.Clear()

    End Sub

    Private Sub ListBox1_SelectedIndexChanged(sender As Object, e As EventArgs) Handles lstOrder.SelectedIndexChanged

    End Sub

    Private Sub cbProducts_SelectedIndexChanged(sender As Object, e As EventArgs) Handles cbProducts.SelectedIndexChanged
        'Add this combo box item to the list box'
        lstOrder.Items.Add(cbProducts.SelectedItem)
    End Sub

    Private Sub TextBox1_TextChanged(sender As Object, e As EventArgs) Handles tbNewProduct.TextChanged

    End Sub

    Private Sub Label1_Click(sender As Object, e As EventArgs) Handles Label1.Click

    End Sub
End Class

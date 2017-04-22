<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Form1
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.Button1 = New System.Windows.Forms.Button()
        Me.Label1 = New System.Windows.Forms.Label()
        Me.tbNewProduct = New System.Windows.Forms.TextBox()
        Me.cbProducts = New System.Windows.Forms.ComboBox()
        Me.lstOrder = New System.Windows.Forms.ListBox()
        Me.SuspendLayout()
        '
        'Button1
        '
        Me.Button1.Location = New System.Drawing.Point(197, 25)
        Me.Button1.Name = "Button1"
        Me.Button1.Size = New System.Drawing.Size(75, 23)
        Me.Button1.TabIndex = 0
        Me.Button1.Text = "Add"
        Me.Button1.UseVisualStyleBackColor = True
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Location = New System.Drawing.Point(12, 35)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(72, 13)
        Me.Label1.TabIndex = 1
        Me.Label1.Text = "New Product:"
        '
        'tbNewProduct
        '
        Me.tbNewProduct.Location = New System.Drawing.Point(85, 28)
        Me.tbNewProduct.Name = "tbNewProduct"
        Me.tbNewProduct.Size = New System.Drawing.Size(106, 20)
        Me.tbNewProduct.TabIndex = 2
        '
        'cbProducts
        '
        Me.cbProducts.FormattingEnabled = True
        Me.cbProducts.Items.AddRange(New Object() {"Milk", "Bread", "Eggs"})
        Me.cbProducts.Location = New System.Drawing.Point(67, 83)
        Me.cbProducts.Name = "cbProducts"
        Me.cbProducts.Size = New System.Drawing.Size(121, 21)
        Me.cbProducts.TabIndex = 3
        '
        'lstOrder
        '
        Me.lstOrder.FormattingEnabled = True
        Me.lstOrder.Location = New System.Drawing.Point(15, 155)
        Me.lstOrder.Name = "lstOrder"
        Me.lstOrder.Size = New System.Drawing.Size(257, 95)
        Me.lstOrder.TabIndex = 4
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(284, 262)
        Me.Controls.Add(Me.lstOrder)
        Me.Controls.Add(Me.cbProducts)
        Me.Controls.Add(Me.tbNewProduct)
        Me.Controls.Add(Me.Label1)
        Me.Controls.Add(Me.Button1)
        Me.Name = "Form1"
        Me.Text = "Form1"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents Button1 As System.Windows.Forms.Button
    Friend WithEvents Label1 As System.Windows.Forms.Label
    Friend WithEvents tbNewProduct As System.Windows.Forms.TextBox
    Friend WithEvents cbProducts As System.Windows.Forms.ComboBox
    Friend WithEvents lstOrder As System.Windows.Forms.ListBox

End Class

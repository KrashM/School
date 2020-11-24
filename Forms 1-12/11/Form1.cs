using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _11
{
    public partial class Form1 : Form
    {

        public string username = "my username", password = "12345678";
        int br = 0;
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if(textBox1.Text == username && textBox2.Text == password) {

                textBox1.Visible = false;
                textBox2.Visible = false;
                button1.Visible = false;
                pictureBox1.Visible = true;

            }
            else {

                if(br == 2) {

                    MessageBox.Show("Достъпът отказа");
                    ActiveForm.Close();

                }

                MessageBox.Show("Грешно име или парола");
                textBox1.Text = "";
                textBox2.Text = "";
                br++;
            
            }
        }
    }
}

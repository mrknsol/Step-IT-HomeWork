namespace CalculatorProgram
{
    partial class MainForm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(MainForm));
            panel1 = new Panel();
            buttonDelete = new Button();
            textBox1 = new TextBox();
            buttonDivide = new Button();
            buttonDot = new Button();
            buttonClear = new Button();
            buttonNegative = new Button();
            buttonProcent = new Button();
            buttonMultiple = new Button();
            buttonMinus = new Button();
            buttonPlus = new Button();
            buttonEqual = new Button();
            button9 = new Button();
            button8 = new Button();
            button7 = new Button();
            button6 = new Button();
            button5 = new Button();
            button4 = new Button();
            button3 = new Button();
            button2 = new Button();
            button1 = new Button();
            button0 = new Button();
            panel1.SuspendLayout();
            SuspendLayout();
            // 
            // panel1
            // 
            panel1.BackColor = Color.Black;
            panel1.Controls.Add(buttonDelete);
            panel1.Controls.Add(textBox1);
            panel1.Controls.Add(buttonDivide);
            panel1.Controls.Add(buttonDot);
            panel1.Controls.Add(buttonClear);
            panel1.Controls.Add(buttonNegative);
            panel1.Controls.Add(buttonProcent);
            panel1.Controls.Add(buttonMultiple);
            panel1.Controls.Add(buttonMinus);
            panel1.Controls.Add(buttonPlus);
            panel1.Controls.Add(buttonEqual);
            panel1.Controls.Add(button9);
            panel1.Controls.Add(button8);
            panel1.Controls.Add(button7);
            panel1.Controls.Add(button6);
            panel1.Controls.Add(button5);
            panel1.Controls.Add(button4);
            panel1.Controls.Add(button3);
            panel1.Controls.Add(button2);
            panel1.Controls.Add(button1);
            panel1.Controls.Add(button0);
            panel1.Dock = DockStyle.Fill;
            panel1.Location = new Point(0, 0);
            panel1.Name = "panel1";
            panel1.Size = new Size(399, 405);
            panel1.TabIndex = 0;
            // 
            // buttonDelete
            // 
            buttonDelete.BackColor = Color.FromArgb(255, 128, 0);
            buttonDelete.Font = new Font("Segoe UI Variable Display", 15.75F, FontStyle.Bold, GraphicsUnit.Point);
            buttonDelete.Location = new Point(282, 22);
            buttonDelete.Name = "buttonDelete";
            buttonDelete.Size = new Size(78, 52);
            buttonDelete.TabIndex = 21;
            buttonDelete.Text = "⌦";
            buttonDelete.UseVisualStyleBackColor = false;
            buttonDelete.Click += buttonDelete_Click;
            // 
            // textBox1
            // 
            textBox1.BackColor = Color.Black;
            textBox1.BorderStyle = BorderStyle.None;
            textBox1.Font = new Font("Segoe UI Variable Small", 36F, FontStyle.Regular, GraphicsUnit.Point);
            textBox1.ForeColor = Color.White;
            textBox1.Location = new Point(30, 12);
            textBox1.Name = "textBox1";
            textBox1.Size = new Size(246, 64);
            textBox1.TabIndex = 20;
            textBox1.TextAlign = HorizontalAlignment.Right;
            // 
            // buttonDivide
            // 
            buttonDivide.BackColor = Color.FromArgb(255, 128, 0);
            buttonDivide.Font = new Font("Segoe UI Variable Small", 15.75F, FontStyle.Regular, GraphicsUnit.Point);
            buttonDivide.Location = new Point(282, 80);
            buttonDivide.Name = "buttonDivide";
            buttonDivide.Size = new Size(78, 52);
            buttonDivide.TabIndex = 18;
            buttonDivide.Text = "/";
            buttonDivide.UseVisualStyleBackColor = false;
            buttonDivide.Click += buttonDivide_Click;
            // 
            // buttonDot
            // 
            buttonDot.BackColor = Color.DimGray;
            buttonDot.Font = new Font("Segoe UI Variable Small Semibol", 18F, FontStyle.Bold, GraphicsUnit.Point);
            buttonDot.ForeColor = Color.Transparent;
            buttonDot.Location = new Point(198, 312);
            buttonDot.Name = "buttonDot";
            buttonDot.Size = new Size(78, 52);
            buttonDot.TabIndex = 17;
            buttonDot.Text = ",";
            buttonDot.UseVisualStyleBackColor = false;
            buttonDot.Click += buttonDot_Click;
            // 
            // buttonClear
            // 
            buttonClear.BackColor = Color.Silver;
            buttonClear.Font = new Font("Segoe UI Variable Small", 15.75F, FontStyle.Regular, GraphicsUnit.Point);
            buttonClear.Location = new Point(30, 80);
            buttonClear.Name = "buttonClear";
            buttonClear.Size = new Size(78, 52);
            buttonClear.TabIndex = 16;
            buttonClear.Text = "С";
            buttonClear.UseVisualStyleBackColor = false;
            buttonClear.Click += buttonClear_Click;
            // 
            // buttonNegative
            // 
            buttonNegative.BackColor = Color.Silver;
            buttonNegative.Font = new Font("Segoe UI Variable Small", 15.75F, FontStyle.Regular, GraphicsUnit.Point);
            buttonNegative.Location = new Point(114, 80);
            buttonNegative.Name = "buttonNegative";
            buttonNegative.Size = new Size(78, 52);
            buttonNegative.TabIndex = 15;
            buttonNegative.Text = "+/-";
            buttonNegative.UseVisualStyleBackColor = false;
            buttonNegative.Click += buttonNegative_Click;
            // 
            // buttonProcent
            // 
            buttonProcent.BackColor = Color.Silver;
            buttonProcent.Font = new Font("Segoe UI Variable Small", 15.75F, FontStyle.Regular, GraphicsUnit.Point);
            buttonProcent.Location = new Point(198, 80);
            buttonProcent.Name = "buttonProcent";
            buttonProcent.Size = new Size(78, 52);
            buttonProcent.TabIndex = 14;
            buttonProcent.Text = "%";
            buttonProcent.UseVisualStyleBackColor = false;
            buttonProcent.Click += buttonProcent_Click;
            // 
            // buttonMultiple
            // 
            buttonMultiple.BackColor = Color.FromArgb(255, 128, 0);
            buttonMultiple.Font = new Font("Segoe UI Variable Small", 15.75F, FontStyle.Regular, GraphicsUnit.Point);
            buttonMultiple.Location = new Point(282, 138);
            buttonMultiple.Name = "buttonMultiple";
            buttonMultiple.Size = new Size(78, 52);
            buttonMultiple.TabIndex = 13;
            buttonMultiple.Text = "x";
            buttonMultiple.UseVisualStyleBackColor = false;
            buttonMultiple.Click += buttonMultiple_Click;
            // 
            // buttonMinus
            // 
            buttonMinus.BackColor = Color.FromArgb(255, 128, 0);
            buttonMinus.Font = new Font("Segoe UI Variable Display", 15.75F, FontStyle.Bold, GraphicsUnit.Point);
            buttonMinus.Location = new Point(282, 196);
            buttonMinus.Name = "buttonMinus";
            buttonMinus.Size = new Size(78, 52);
            buttonMinus.TabIndex = 12;
            buttonMinus.Text = "-";
            buttonMinus.UseVisualStyleBackColor = false;
            buttonMinus.Click += buttonMinus_Click;
            // 
            // buttonPlus
            // 
            buttonPlus.BackColor = Color.FromArgb(255, 128, 0);
            buttonPlus.Font = new Font("Segoe UI Variable Display", 15.75F, FontStyle.Bold, GraphicsUnit.Point);
            buttonPlus.Location = new Point(282, 254);
            buttonPlus.Name = "buttonPlus";
            buttonPlus.Size = new Size(78, 52);
            buttonPlus.TabIndex = 11;
            buttonPlus.Text = "+";
            buttonPlus.UseVisualStyleBackColor = false;
            buttonPlus.Click += buttonPlus_Click;
            // 
            // buttonEqual
            // 
            buttonEqual.BackColor = Color.FromArgb(255, 128, 0);
            buttonEqual.Font = new Font("Segoe UI Variable Display", 15.75F, FontStyle.Bold, GraphicsUnit.Point);
            buttonEqual.Location = new Point(282, 312);
            buttonEqual.Name = "buttonEqual";
            buttonEqual.Size = new Size(78, 52);
            buttonEqual.TabIndex = 10;
            buttonEqual.Text = "=";
            buttonEqual.UseVisualStyleBackColor = false;
            buttonEqual.Click += ButtonEqual_Click;
            // 
            // button9
            // 
            button9.BackColor = Color.DimGray;
            button9.Font = new Font("Segoe UI Variable Small", 15.75F, FontStyle.Regular, GraphicsUnit.Point);
            button9.Location = new Point(198, 138);
            button9.Name = "button9";
            button9.Size = new Size(78, 52);
            button9.TabIndex = 9;
            button9.Text = "9";
            button9.UseVisualStyleBackColor = false;
            button9.Click += button9_Click;
            // 
            // button8
            // 
            button8.BackColor = Color.DimGray;
            button8.Font = new Font("Segoe UI Variable Small", 15.75F, FontStyle.Regular, GraphicsUnit.Point);
            button8.Location = new Point(114, 138);
            button8.Name = "button8";
            button8.Size = new Size(78, 52);
            button8.TabIndex = 8;
            button8.Text = "8";
            button8.UseVisualStyleBackColor = false;
            button8.Click += button8_Click;
            // 
            // button7
            // 
            button7.BackColor = Color.DimGray;
            button7.Font = new Font("Segoe UI Variable Small", 15.75F, FontStyle.Regular, GraphicsUnit.Point);
            button7.Location = new Point(30, 138);
            button7.Name = "button7";
            button7.Size = new Size(78, 52);
            button7.TabIndex = 7;
            button7.Text = "7";
            button7.UseVisualStyleBackColor = false;
            button7.Click += button7_Click;
            // 
            // button6
            // 
            button6.BackColor = Color.DimGray;
            button6.Font = new Font("Segoe UI Variable Small", 15.75F, FontStyle.Regular, GraphicsUnit.Point);
            button6.Location = new Point(198, 196);
            button6.Name = "button6";
            button6.Size = new Size(78, 52);
            button6.TabIndex = 6;
            button6.Text = "6";
            button6.UseVisualStyleBackColor = false;
            button6.Click += button6_Click;
            // 
            // button5
            // 
            button5.BackColor = Color.DimGray;
            button5.Font = new Font("Segoe UI Variable Small", 15.75F, FontStyle.Regular, GraphicsUnit.Point);
            button5.Location = new Point(114, 196);
            button5.Name = "button5";
            button5.Size = new Size(78, 52);
            button5.TabIndex = 5;
            button5.Text = "5";
            button5.UseVisualStyleBackColor = false;
            button5.Click += button5_Click;
            // 
            // button4
            // 
            button4.BackColor = Color.DimGray;
            button4.Font = new Font("Segoe UI Variable Small", 15.75F, FontStyle.Regular, GraphicsUnit.Point);
            button4.Location = new Point(30, 196);
            button4.Name = "button4";
            button4.Size = new Size(78, 52);
            button4.TabIndex = 4;
            button4.Text = "4";
            button4.UseVisualStyleBackColor = false;
            button4.Click += button4_Click;
            // 
            // button3
            // 
            button3.BackColor = Color.DimGray;
            button3.Font = new Font("Segoe UI Variable Small", 15.75F, FontStyle.Regular, GraphicsUnit.Point);
            button3.Location = new Point(198, 254);
            button3.Name = "button3";
            button3.Size = new Size(78, 52);
            button3.TabIndex = 3;
            button3.Text = "3";
            button3.UseVisualStyleBackColor = false;
            button3.Click += button3_Click;
            // 
            // button2
            // 
            button2.BackColor = Color.DimGray;
            button2.Font = new Font("Segoe UI Variable Small", 15.75F, FontStyle.Regular, GraphicsUnit.Point);
            button2.Location = new Point(114, 254);
            button2.Name = "button2";
            button2.Size = new Size(78, 52);
            button2.TabIndex = 2;
            button2.Text = "2";
            button2.UseVisualStyleBackColor = false;
            button2.Click += button2_Click;
            // 
            // button1
            // 
            button1.BackColor = Color.DimGray;
            button1.Font = new Font("Segoe UI Variable Small", 15.75F, FontStyle.Regular, GraphicsUnit.Point);
            button1.ForeColor = SystemColors.ControlText;
            button1.Location = new Point(30, 254);
            button1.Name = "button1";
            button1.Size = new Size(78, 52);
            button1.TabIndex = 1;
            button1.Text = "1";
            button1.UseVisualStyleBackColor = false;
            button1.Click += button1_Click;
            // 
            // button0
            // 
            button0.BackColor = Color.DimGray;
            button0.FlatAppearance.BorderSize = 0;
            button0.Font = new Font("Segoe UI Variable Display", 15.75F, FontStyle.Regular, GraphicsUnit.Point);
            button0.Location = new Point(30, 312);
            button0.Name = "button0";
            button0.Size = new Size(162, 52);
            button0.TabIndex = 0;
            button0.Text = "0";
            button0.UseVisualStyleBackColor = false;
            button0.Click += button0_Click;
            // 
            // MainForm
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(399, 405);
            Controls.Add(panel1);
            Icon = (Icon)resources.GetObject("$this.Icon");
            Name = "MainForm";
            StartPosition = FormStartPosition.CenterScreen;
            panel1.ResumeLayout(false);
            panel1.PerformLayout();
            ResumeLayout(false);
        }

        #endregion

        private Panel panel1;
        private Button buttonDivide;
        private Button buttonDot;
        private Button buttonClear;
        private Button buttonNegative;
        private Button buttonProcent;
        private Button buttonMultiple;
        private Button buttonMinus;
        private Button buttonPlus;
        private Button buttonEqual;
        private Button button9;
        private Button button8;
        private Button button7;
        private Button button6;
        private Button button5;
        private Button button4;
        private Button button3;
        private Button button2;
        private Button button1;
        private Button button0;
        private TextBox textBox1;
        private Button buttonDelete;
    }
}
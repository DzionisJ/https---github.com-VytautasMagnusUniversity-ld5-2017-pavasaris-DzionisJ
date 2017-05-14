#include "MyForm.h"
#include<string>
#include<cstring>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]//leave this as is
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew LD4_LD5_Jonas_Kuprescenkovas_If160099::MyForm);
}

/*
Veikimo principas: is MyForm.h iskvieciamos funkcijos esancios MyForm.cpp. Cia atlikus 
skaiciavimams informacija nusiunciama atgal i MyForm.h ir tada atsakymai atvaizduojami programoje
nustatytuose laukuose.

Si programa naudoja: combobox,listbox,textbox,label,messagebox,richtextbox,menustrip
savefiledialog,openfiledialog, checkbox.

combobox - cia naudojama kaip pasirinkimas is saraso, kuriame yra nustatytos paskaitos.
listbox - cia naudojama kaip pasirinkimu istorijos saugojimas.
textbox - cia naudojama kaip duomenu ivedimo, atsakymu isvedimo irankis.
label - cia naudojama kaip informacijos suteikimo priemone
messagebox - cia naudojama kaip error lenteliu, svarbiu pasirinkimu patvirtinimo irankis.
richtextbox - cia naudojama kaip texto saugojimo irankis, kurio pagalba kartu su 
savefiledialog,openfiledialog irankiais yra uzsaugomi i .txt faila arba iskvieciami (loaded)
i programa.
checkbox - cia naudojama kaip texto paslepimo irankis. Atsakymai tampa: " *** "

Programa skaiciuoja ivestu pazimiu vidurki,kaupiama bala,galutini bala bei maziausia bala, kurio
reikia, kad nebutu skolos.

Paspaudus mygtuka generuoti reikia pasirinktifaila "default text", kad richtextbox
turetu pradini texta. Tai reikia daryti tik po to kai yra paspaudziamas "valyti" mygtukas.
Jis visiskai isvalo richtextbox.
*/

//---------------------------------------------------------------------------------

class Counter
{
public:
	void setNumbers_Get_sum(int x1,int x2,int x3,int x4,int x5)
	{
		nr1 = x1; nr2 = x2; nr3 = x3; nr4 = x4; nr5 = x5;
		sum = (nr1 + nr2 + nr3 + nr4 + nr5);
	}
	~Counter(){	}
protected:
	int nr1, nr2, nr3, nr4, nr5 = 0; float sum = 0;
};

class average :public Counter
{//klase average paveldi klases Counter kintamuju informacija
public:
	float count_average()
	{
		return (sum /5);
	}
	~average() //dekonstruktorius
	{

	}
};

float LD4_LD5_Jonas_Kuprescenkovas_If160099::MyForm::vidurkis()
{
	int kntr1, kntr2, kntr3,kol,egz =0;

	//konvertuojami ivesti duomenys is string i int
	kntr1 = Convert::ToInt32(kontras1->Text);
	kntr2 = Convert::ToInt32(kontras2->Text);
	kntr3 = Convert::ToInt32(kontras3->Text);
	kol = Convert::ToInt32(Kolis->Text);
	egz = Convert::ToInt32(Egzas->Text);

	average average_output;//objektas
	//po konvertacijos issiunciami duomenys i class Counter {}, setNumbers_Get_sum() funkcija; 
	//joje protected tipo kintamieni prilyginami atsiustiems duomenis
	//tada suskaiciuojama ju suma
	//class average{}; paveldi Counter klases protected kintamuosius ir suskaiciuoja vidurki
	average_output.setNumbers_Get_sum(kntr1, kntr2, kntr3, kol, egz);

	//grazinamas vidurkis
	return average_output.count_average();
}

//---------------------------------------------------------------------------------

class Counter2
{
public:
	void setNumbers(int x1, int x2, int x3, int x4,
		int	proc1, int proc2, int proc3, int proc4)
	{
		nr1 = x1; nr2 = x2; nr3 = x3; nr4 = x4;
		p1 = proc1; p2 = proc2; p3 = proc3;p4 = proc4;

		//Skaiciuojami balai uz kontrolinius ir koli
		//ivestas skaicius dalinamas is 100 ir dauginamas is procentines dalies
		a = (nr1 / 100)*p1; b = (nr2 / 100)*p2;
		c = (nr3 / 100)*p3; d = (nr4 / 100)*p4;
	}
	~Counter2()
	{

	}
protected:
	float nr1, nr2, nr3, nr4 = 0; 
	int p1, p2, p3, p4 = 0;
	float a, b, c, d = 0;
};

class stack_grade :public Counter2
{//klase stack_grade paveldi klases Counter2 kintamuju informacija
public:
	float Count_stack_Grade()
	{
		//grazinamas kaupiamasis balas
		return (a + b + c + d);
	}
	~stack_grade()//dekonstruktorius
	{

	}
};

float LD4_LD5_Jonas_Kuprescenkovas_If160099::MyForm::kaupiamas()
{
	int kntr1, kntr2, kntr3, kol,proc1, proc2, proc3, proc4 = 0;

	/*
	konvertuojami ivesti duomenys is string i int
	Po konvertacijos issiunciami duomenys i class Counter2 {},setNumbers() funkcija;
	joje protected tipo kintamieni prilyginami atsiustiems duomenis
	tada suskaiciuojama ju suma
	class stack_grade{}; paveldi Counter2 klases protected kintamuosius ir suskaiciuoja vidurki
	*/
	kntr1 = Convert::ToInt32(kontras1->Text);
	kntr2 = Convert::ToInt32(kontras2->Text);
	kntr3 = Convert::ToInt32(kontras3->Text);
	kol = Convert::ToInt32(Kolis->Text);

	proc1 = Convert::ToInt32(procentas1->Text);
	proc2 = Convert::ToInt32(procentas2->Text);
	proc3 = Convert::ToInt32(procentas3->Text);
	proc4 = Convert::ToInt32(procentas4->Text);

	stack_grade grade;//OBJECT
	grade.setNumbers(kntr1, kntr2, kntr3, kol, proc1, proc2, proc3, proc4);

	//kaupiamasis balas
	return grade.Count_stack_Grade();
}

//---------------------------------------------------------------------------------

class Counter3
{
public:
	void setNumbers_final_grade(int x1, int x2, int x3, int x4,int x5,
		int	proc1, int proc2, int proc3, int proc4, int proc5)
	{
		nr1 = x1; nr2 = x2; nr3 = x3; nr4 = x4; nr5 = x5;
		p1 = proc1; p2 = proc2; p3 = proc3; p4 = proc4; p5 = proc5;

		//Skaiciuojami balai uz kontrolinius, koli ir egzamina
		//ivestas skaicius dalinamas is 100 ir dauginamas is procentines dalies
		a = (nr1 / 100)*p1; b = (nr2 / 100)*p2;
		c = (nr3 / 100)*p3; d = (nr4 / 100)*p4;
		f = (nr5 / 100)*p5;
	}
	~Counter3()
	{

	}

protected:
	float nr1, nr2, nr3, nr4, nr5= 0;
	int p1, p2, p3, p4, p5= 0;
	float a, b, c, d, f = 0;
};

class End_grade: public Counter3
{//klase End_grade paveldi klases Counter3 kintamuju informacija
public:
	float Final_grade()
	{
		//grazinamas galutinis balas
		return (a + b + c + d+ f);
	}
	~End_grade()
	{

	}
};

float LD4_LD5_Jonas_Kuprescenkovas_If160099::MyForm::galutinis()
{
	int kntr1, kntr2, kntr3, kol, egz, proc1, proc2, proc3, proc4, proc5 = 0;

	/*
	konvertuojami ivesti duomenys is string i int
	Po konvertacijos issiunciami duomenys i class Counter3 {},setNumbers_final_grade() funkcija;
	joje protected tipo kintamieni prilyginami atsiustiems duomenis
	tada suskaiciuojama ju suma
	class End_grade{}; paveldi Counter3 klases protected kintamuosius ir suskaiciuoja vidurki
	*/
	kntr1 = Convert::ToInt32(kontras1->Text);
	kntr2 = Convert::ToInt32(kontras2->Text);
	kntr3 = Convert::ToInt32(kontras3->Text);
	kol = Convert::ToInt32(Kolis->Text);
	egz = Convert::ToInt32(Egzas->Text);

	proc1 = Convert::ToInt32(procentas1->Text);
	proc2 = Convert::ToInt32(procentas2->Text);
	proc3 = Convert::ToInt32(procentas3->Text);
	proc4 = Convert::ToInt32(procentas4->Text);
	proc5 = Convert::ToInt32(procentas5->Text);

	End_grade final_Grade;//OBJECT
	final_Grade.setNumbers_final_grade(kntr1, kntr2, kntr3, kol, egz, proc1, proc2, proc3, proc4, proc5);

	//grazinamas galutinis balas
	return final_Grade.Final_grade();
}

//---------------------------------------------------------------------------------

class Counter4
{
public:
	void setNumbers_final_grade(int x1, int x2, int x3, int x4, int x5,
		int	proc1, int proc2, int proc3, int proc4, int proc5)
	{
		nr1 = x1; nr2 = x2; nr3 = x3; nr4 = x4; nr5 = x5;
		p1 = proc1; p2 = proc2; p3 = proc3; p4 = proc4; p5 = proc5;

		//Skaiciuojami balai uz kontrolinius, koli ir egzamina
		//ivestas skaicius dalinamas is 100 ir dauginamas is procentines dalies

		a = (nr1 / 100)*p1; b = (nr2 / 100)*p2;
		c = (nr3 / 100)*p3; d = (nr4 / 100)*p4;
		f = (nr5 / 100)*p5;
	}
	~Counter4()//dekonstruktorius
	{

	}

protected:
	float nr1, nr2, nr3, nr4, nr5 = 0;
	int p1, p2, p3, p4, p5 = 0;
	float a, b, c, d, f = 0;
};

class End_grade2 : public Counter4 
{//klase End_grade2 paveldi klases Counter4 kintamuju informacija
public:
	float Final_grade2()
	{
		check = (a + b + c + d + f);
		//kintamas check prilyginamas kintamuju a b c d f sumai

		if (check < 5 && nr5 <=10)
		{	
			do
			{	
				/*
				jei check yra < 5 o egzamino balas <= nei 10
				egzamino balas didinamas 1
				tada suskaiciuojamas naujas galutinis balas
				Jei balas siekia bent 5, skaiciavimai baigiami ir
				isvedamas maziausias reikalingas balas kuri turi gauti is egzamino, kad
				neiktu skola
				*/
				nr5++;
				change = (nr5/100)*p5;
				check = (a + b + c + d + change);
			} while (check < 5 && nr5 <= 10);
		}
		else
		{
			//Jei galutinis balas pakankamas, isvedama zinute i ekrana
			//ir atsakymo vietoje israsomas esamas balas
			MessageBox::Show("Jusu balas pakankamas", "Notification", MessageBoxButtons::OKCancel, MessageBoxIcon::Asterisk);
		}
		//grazinamas maziausias balas su kuriuo nelieka skolos
		return nr5;
	}
	~End_grade2()
	{

	}
	float check, change = 0;
};

int LD4_LD5_Jonas_Kuprescenkovas_If160099::MyForm::Kiek_gauti_kad_nebutu_skolos()
{
	int kntr1, kntr2, kntr3, kol, egz, proc1, proc2, proc3, proc4, proc5 = 0;

	/*
	konvertuojami ivesti duomenys is string i int
	Po konvertacijos issiunciami duomenys i class Counter4 {},setNumbers_final_grade() funkcija;
	joje protected tipo kintamieni prilyginami atsiustiems duomenis
	tada suskaiciuojama ju suma
	class End_grade2{}; paveldi Counter4 klases protected kintamuosius ir suskaiciuoja vidurki
	*/

	kntr1 = Convert::ToInt32(kontras1->Text);
	kntr2 = Convert::ToInt32(kontras2->Text);
	kntr3 = Convert::ToInt32(kontras3->Text);
	kol = Convert::ToInt32(Kolis->Text);
	egz = Convert::ToInt32(Egzas->Text);

	proc1 = Convert::ToInt32(procentas1->Text);
	proc2 = Convert::ToInt32(procentas2->Text);
	proc3 = Convert::ToInt32(procentas3->Text);
	proc4 = Convert::ToInt32(procentas4->Text);
	proc5 = Convert::ToInt32(procentas5->Text);

	End_grade2 final_Grade2;//OBJECT
	final_Grade2.setNumbers_final_grade(kntr1, kntr2, kntr3, kol, egz, proc1, proc2, 
			proc3, proc4, proc5);

	//grazinamas balas kuri reikia gauti kad nebutu skolos
	return final_Grade2.Final_grade2();
}

//---------------------------------------------------------------------------------




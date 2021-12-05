#pragma once


ref class DbCo
{
public:
	DbCo(void);
	System::Data::DataSet^ getRows(System::String^, System::String^);
	void actionRows(System::String^);
private:
	System::String^ sSql;
	System::String^ sCo;
	System::Data::SqlClient::SqlConnection^ oCo;
	System::Data::SqlClient::SqlCommand^ oCmd;
	System::Data::SqlClient::SqlDataAdapter^ oDa;
	System::Data::DataSet^ oDs;

};

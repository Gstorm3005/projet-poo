#include "DbCo.h"

DbCo::DbCo(void)
{
	this->sCo = "Data Source=ACER-PREDATOR\\MSSQL_MOHAMED;Initial Catalog=projet poo;Integrated Security=True;Connect Timeout=30;Encrypt=False;TrustServerCertificate=False;ApplicationIntent=ReadWrite;MultiSubnetFailover=False";

	this->sSql = "RIEN";

	this->oCo = gcnew System::Data::SqlClient::SqlConnection(this->sCo);
	this->oCmd = gcnew System::Data::SqlClient::SqlCommand(this->sSql, this->oCo);
	this->oDa = gcnew System::Data::SqlClient::SqlDataAdapter();
	this->oDs = gcnew System::Data::DataSet();

	this->oCmd->CommandType = System::Data::CommandType::Text;
}

System::Data::DataSet^ DbCo::getRows(System::String^ sSql, System::String^ sDataTableName)
{
	this->oDs->Clear();
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDa->SelectCommand = this->oCmd;
	this->oDa->Fill(this->oDs, sDataTableName);

	return this->oDs;
}

void DbCo::actionRows(System::String^ sSql)
{
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDa->SelectCommand = this->oCmd;
	this->oCo->Open();
	this->oCmd->ExecuteNonQuery();
	this->oCo->Close();

}
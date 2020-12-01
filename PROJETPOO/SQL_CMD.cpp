#include "pch.h"
#include "SQL_CMD.h"
#include <iostream>

    SQL_CMD::SQL_CMD()
    {
        this->rq_sql = "RIEN";
        this->credentials = "Data Source=PC-HUGO;" +
            "Initial Catalog=a;" +
            "Persist Security Info=True;" +
            "User ID=sa2;" +
            "Password=azerty123";
        this->cnx = gcnew SqlConnection(this->credentials);
        this->CMD = gcnew SqlCommand(this->rq_sql, cnx);
        this->CMD->CommandType = CommandType::Text;
    }
    void SQL_CMD::setSQL(String^ rq_sql)
    {
        this->rq_sql = rq_sql;
    }
    DataSet^ SQL_CMD::getRows(String^ rq_sql, String^ dataTableName)
    {
        setSQL(rq_sql);
        this->DA = gcnew SqlDataAdapter(this->CMD);
        this->CMD->CommandText = rq_sql;
        DataSet^ DS = gcnew DataSet();
        this->DA->Fill(DS, dataTableName);

        return DS;
    }
    int SQL_CMD::insert(String^ rq_sql)
    {
        setSQL(rq_sql);
        this->CMD->CommandText = this->rq_sql;
        this->cnx->Open();
        int res = Convert::ToInt32(this->CMD->ExecuteScalar());
        this->cnx->Close();
        return res;
    }
    void SQL_CMD::update(String^ rq_sql)
    {
        setSQL(rq_sql);
        this->CMD->CommandText = this->rq_sql;
        this->cnx->Open();
        this->CMD->ExecuteNonQuery();
        this->cnx->Close();
    }


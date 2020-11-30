#pragma once

    using namespace System::Data;
    using namespace System::Data::SqlClient;
    using namespace System;

    ref class SQL_CMD {
    private:
        String^ credentials;
        String^ rq_sql;
        SqlConnection^ cnx;
        SqlCommand^ CMD;
        SqlDataAdapter^ DA;
        DataSet^ DS;
        void setSQL(String^ rq_sql);
    public:
        SQL_CMD(void);
        DataSet^ getRows(String^ rq_sql, String^ dataTableName);
        int insert(String^ rq_sql);
        void update(String^ rq_sql);
    };


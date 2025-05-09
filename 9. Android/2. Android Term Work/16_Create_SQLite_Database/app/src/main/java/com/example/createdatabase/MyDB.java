package com.example.createdatabase;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

public class MyDB extends SQLiteOpenHelper {
    public static final String DATABASE_NAME = "ContactDB";
    public static final int DATABASE_VERSION = 1;
    public static final String TABLE_NAME = "Contacts";
    public static final String KEY_ID = "id";
    public static final String KEY_NAME = "name";
    public static final String KEY_PHONE_NO = "phone_no";

    public MyDB(Context context) {
        super(context, DATABASE_NAME, null, DATABASE_VERSION);
    }

    @Override
    public void onCreate(SQLiteDatabase db) {
            db.execSQL("CREATE TABLE" + TABLE_NAME + "(" + KEY_ID + "INTEGER PRIMARY KEY AUTOINCREMENT, " + KEY_NAME + "TEXT," + KEY_PHONE_NO + "TEXT" + ")");
    }

    @Override
    public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion) {
        db.execSQL("DROP TABLE IF EXISTS" + TABLE_NAME);
        onCreate(db);
    }
}

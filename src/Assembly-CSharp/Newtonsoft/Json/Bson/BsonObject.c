
/* Void Add(String, BsonToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonObject::BsonObject_Add
               (BsonObject *this,String *name,BsonToken *token,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonProperty);
    func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonString);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonProperty>__Add_Newtonsoft__Json__Bson__BsonProperty_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._children;
  value = (Object *)func_?(TypeInfo__Newtonsoft__Json__Bson__BsonProperty);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value_00 = (Object__Class *)func_?(TypeInfo__Newtonsoft__Json__Bson__BsonString);
    if (value_00 != (Object__Class *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)value_00,ExceptionArgument__Enum_obj,unaff_EDI);
      (value_00->_0).byval_arg.data.typeHandle = (Il2CppMetadataTypeHandle)name;
      func_?(&(value_00->_0).byval_arg,name);
      *(undefined1 *)&(value_00->_0).byval_arg.attrs = 2;
      *(undefined1 *)&(value_00->_0).this_arg.attrs = 0;
      value[1].klass = value_00;
      func_?(value + 1,value_00);
      value[1].monitor = (MonitorData *)token;
      func_?(&value[1].monitor,token);
      if (this_00 != (List_1_Newtonsoft_Json_Bson_BsonProperty_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)this_00,value,
                   MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonProperty>__Add_Newtonsoft__Json__Bson__BsonProperty_
                  );
        if (token != (BsonToken *)0x0) {
          (token->fields)._Parent_k__BackingField = (BsonToken *)this;
          func_?(&token->fields,this);
          return;
        }
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* IEnumerator`1[Newtonsoft.Json.Bson.BsonProperty] GetEnumerator() */

IEnumerator_1_Newtonsoft_Json_Bson_BsonProperty_ *
Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonObject::BsonObject_GetEnumerator
          (BsonObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__List_1_T___Enumerator<Newtonsoft::Json::Bson::BsonProperty>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonProperty>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._children;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_2,this_00,
                        MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonProperty>__GetEnumerator__
                       );
    pLStack_3 = pLVar1->_list;
    iStack_4 = pLVar1->_index;
    iStack_5 = pLVar1->_version;
    RStack_6 = pLVar1->_current;
    pIVar7 = (IEnumerator_1_Newtonsoft_Json_Bson_BsonProperty_ *)
             func_?(TypeInfo__System__Collections__Generic__List_1_T___Enumerator<Newtonsoft::Json::Bson::BsonProperty>
                             ,&pLStack_3);
    return pIVar7;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pIVar7 = (IEnumerator_1_Newtonsoft_Json_Bson_BsonProperty_ *)(*pcVar8)();
  return pIVar7;
}


/* IEnumerator System.Collections.IEnumerable.GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonObject::
BsonObject_System_Collections_IEnumerable_GetEnumerator(BsonObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__List_1_T___Enumerator<Newtonsoft::Json::Bson::BsonProperty>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonProperty>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._children;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_2,this_00,
                        MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonProperty>__GetEnumerator__
                       );
    pLStack_3 = pLVar1->_list;
    iStack_4 = pLVar1->_index;
    iStack_5 = pLVar1->_version;
    RStack_6 = pLVar1->_current;
    pIVar7 = (IEnumerator *)
             func_?(TypeInfo__System__Collections__Generic__List_1_T___Enumerator<Newtonsoft::Json::Bson::BsonProperty>
                             ,&pLStack_3);
    return pIVar7;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pIVar7 = (IEnumerator *)(*pcVar8)();
  return pIVar7;
}


/* BsonObject() */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonObject::BsonObject__ctor
               (BsonObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonProperty>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonProperty>
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_Newtonsoft_Json_Bson_BsonProperty_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonProperty>
                           );
  if (this_00 != (List_1_Newtonsoft_Json_Bson_BsonProperty_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonProperty>__List__
              );
    method_00 = (MethodInfo *)&(this->fields)._children;
    (this->fields)._children = this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* BsonType get_Type() */

BsonType__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonObject::BsonObject_get_Type
          (BsonObject *this,MethodInfo *method)

{
  return CONCAT31((int3)((uint)in_EAX >> 8),3);
}


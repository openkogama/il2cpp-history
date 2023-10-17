
/* Void Add(BsonToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonArray::BsonArray_Add
               (BsonArray *this,BsonToken *token,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonToken>__Add_Newtonsoft__Json__Bson__BsonToken_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._children;
  if (this_00 != (List_1_Newtonsoft_Json_Bson_BsonToken_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,(Object *)token,
               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonToken>__Add_Newtonsoft__Json__Bson__BsonToken_
              );
    if (token != (BsonToken *)0x0) {
      (token->fields)._Parent_k__BackingField = (BsonToken *)this;
      func_?(&token->fields,this);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* IEnumerator`1[Newtonsoft.Json.Bson.BsonToken] GetEnumerator() */

IEnumerator_1_Newtonsoft_Json_Bson_BsonToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonArray::BsonArray_GetEnumerator
          (BsonArray *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__List_1_T___Enumerator<Newtonsoft::Json::Bson::BsonToken>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonToken>__GetEnumerator__
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
                        MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonToken>__GetEnumerator__
                       );
    pLStack_3 = pLVar1->_list;
    iStack_4 = pLVar1->_index;
    iStack_5 = pLVar1->_version;
    RStack_6 = pLVar1->_current;
    pIVar7 = (IEnumerator_1_Newtonsoft_Json_Bson_BsonToken_ *)
             func_?(TypeInfo__System__Collections__Generic__List_1_T___Enumerator<Newtonsoft::Json::Bson::BsonToken>
                             ,&pLStack_3);
    return pIVar7;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pIVar7 = (IEnumerator_1_Newtonsoft_Json_Bson_BsonToken_ *)(*pcVar8)();
  return pIVar7;
}


/* IEnumerator System.Collections.IEnumerable.GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonArray::
BsonArray_System_Collections_IEnumerable_GetEnumerator(BsonArray *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__List_1_T___Enumerator<Newtonsoft::Json::Bson::BsonToken>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonToken>__GetEnumerator__
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
                        MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonToken>__GetEnumerator__
                       );
    pLStack_3 = pLVar1->_list;
    iStack_4 = pLVar1->_index;
    iStack_5 = pLVar1->_version;
    RStack_6 = pLVar1->_current;
    pIVar7 = (IEnumerator *)
             func_?(TypeInfo__System__Collections__Generic__List_1_T___Enumerator<Newtonsoft::Json::Bson::BsonToken>
                             ,&pLStack_3);
    return pIVar7;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pIVar7 = (IEnumerator *)(*pcVar8)();
  return pIVar7;
}


/* BsonArray() */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonArray::BsonArray__ctor
               (BsonArray *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonToken>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonToken>
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_Newtonsoft_Json_Bson_BsonToken_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonToken>
                           );
  if (this_00 != (List_1_Newtonsoft_Json_Bson_BsonToken_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonToken>__List__
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
Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonArray::BsonArray_get_Type
          (BsonArray *this,MethodInfo *method)

{
  return CONCAT31((int3)((uint)in_EAX >> 8),4);
}


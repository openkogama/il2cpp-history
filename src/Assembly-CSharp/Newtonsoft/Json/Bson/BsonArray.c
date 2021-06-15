
/* Void Add(BsonToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonArray::BsonArray_Add
               (BsonArray *this,BsonToken *token,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._children;
  if (this_00 != (List_1_Newtonsoft_Json_Bson_BsonToken_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)token,
               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonToken>__Add_Newtonsoft__Json__Bson__BsonToken_
              );
    if (token != (BsonToken *)0x0) {
      (token->fields)._Parent_k__BackingField = (BsonToken *)this;
      return;
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields)._children;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    pLVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_2,this_00,
                        MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonToken>__GetEnumerator__
                       );
    auStack_2._16_4_ = pLVar1->l;
    iStack_3 = pLVar1->next;
    iStack_4 = pLVar1->ver;
    iStack_5 = (pLVar1->current).rgba;
    pIVar6 = (IEnumerator_1_Newtonsoft_Json_Bson_BsonToken_ *)
             func_?(TypeInfo__System__Collections__Generic__List_1_T___Enumerator<Newtonsoft::Json::Bson::BsonToken>
                             ,auStack_2 + 0x10);
    return pIVar6;
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  pIVar6 = (IEnumerator_1_Newtonsoft_Json_Bson_BsonToken_ *)(*pcVar7)();
  return pIVar6;
}


/* IEnumerator System.Collections.IEnumerable.GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonArray::
BsonArray_System_Collections_IEnumerable_GetEnumerator(BsonArray *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields)._children;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    pLVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_2,this_00,
                        MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonToken>__GetEnumerator__
                       );
    auStack_2._16_4_ = pLVar1->l;
    iStack_3 = pLVar1->next;
    iStack_4 = pLVar1->ver;
    iStack_5 = (pLVar1->current).rgba;
    pIVar6 = (IEnumerator *)
             func_?(TypeInfo__System__Collections__Generic__List_1_T___Enumerator<Newtonsoft::Json::Bson::BsonToken>
                             ,auStack_2 + 0x10);
    return pIVar6;
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  pIVar6 = (IEnumerator *)(*pcVar7)();
  return pIVar6;
}


/* BsonArray() */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonArray::BsonArray__ctor
               (BsonArray *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonToken>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonToken>__List__
            );
  (this->fields)._children = (List_1_Newtonsoft_Json_Bson_BsonToken_ *)this_00;
  return;
}


/* BsonType get_Type() */

BsonType__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonArray::BsonArray_get_Type
          (BsonArray *this,MethodInfo *method)

{
  return CONCAT31((int3)((uint)in_EAX >> 8),4);
}


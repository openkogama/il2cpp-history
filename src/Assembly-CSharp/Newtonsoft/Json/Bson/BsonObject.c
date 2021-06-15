
/* Void Add(String, BsonToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonObject::BsonObject_Add
               (BsonObject *this,String *name,BsonToken *token,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._children;
  method_01 = TypeInfo__Newtonsoft__Json__Bson__BsonProperty;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_01);
  method_00 = TypeInfo__Newtonsoft__Json__Bson__BsonString;
  this_02 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,(MethodInfo *)method_00);
  (this_02->fields).originalScale.x = (float)name;
  *(undefined1 *)((int)&(this_02->fields).originalScale + 4) = 2;
  *(undefined1 *)&(this_02->fields).target = 0;
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields)._._._._.m_CachedPtr = this_02;
    (this_01->fields).state = (int32_t)token;
    if (this_00 != (List_1_Newtonsoft_Json_Bson_BsonProperty_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)this_01,
                 MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonProperty>__Add_Newtonsoft__Json__Bson__BsonProperty_
                );
      if (token != (BsonToken *)0x0) {
        (token->fields)._Parent_k__BackingField = (BsonToken *)this;
        return;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields)._children;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    pLVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_2,this_00,
                        MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonProperty>__GetEnumerator__
                       );
    auStack_2._16_4_ = pLVar1->l;
    iStack_3 = pLVar1->next;
    iStack_4 = pLVar1->ver;
    iStack_5 = (pLVar1->current).rgba;
    pIVar6 = (IEnumerator_1_Newtonsoft_Json_Bson_BsonProperty_ *)
             func_?(TypeInfo__System__Collections__Generic__List_1_T___Enumerator<Newtonsoft::Json::Bson::BsonProperty>
                             ,auStack_2 + 0x10);
    return pIVar6;
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  pIVar6 = (IEnumerator_1_Newtonsoft_Json_Bson_BsonProperty_ *)(*pcVar7)();
  return pIVar6;
}


/* IEnumerator System.Collections.IEnumerable.GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonObject::
BsonObject_System_Collections_IEnumerable_GetEnumerator(BsonObject *this,MethodInfo *method)

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
                        MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonProperty>__GetEnumerator__
                       );
    auStack_2._16_4_ = pLVar1->l;
    iStack_3 = pLVar1->next;
    iStack_4 = pLVar1->ver;
    iStack_5 = (pLVar1->current).rgba;
    pIVar6 = (IEnumerator *)
             func_?(TypeInfo__System__Collections__Generic__List_1_T___Enumerator<Newtonsoft::Json::Bson::BsonProperty>
                             ,auStack_2 + 0x10);
    return pIVar6;
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  pIVar6 = (IEnumerator *)(*pcVar7)();
  return pIVar6;
}


/* BsonObject() */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonObject::BsonObject__ctor
               (BsonObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonProperty>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonProperty>__List__
            );
  (this->fields)._children = (List_1_Newtonsoft_Json_Bson_BsonProperty_ *)this_00;
  return;
}



/* BsonRegex(String, String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonRegex::BsonRegex__ctor
               (BsonRegex *this,String *pattern,String *options,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonString);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  pBVar1 = (BsonString *)func_?(TypeInfo__Newtonsoft__Json__Bson__BsonString);
  if (pBVar1 != (BsonString *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pBVar1,ExceptionArgument__Enum_obj,unaff_EBP);
    (pBVar1->fields)._._value = (Object *)pattern;
    func_?(&(pBVar1->fields)._._value,pattern);
    (pBVar1->fields)._._type = 2;
    (pBVar1->fields)._IncludeLength_k__BackingField = 0;
    (this->fields)._Pattern_k__BackingField = pBVar1;
    func_?(&(this->fields)._Pattern_k__BackingField,pBVar1);
    pBVar1 = (BsonString *)func_?(TypeInfo__Newtonsoft__Json__Bson__BsonString);
    if (pBVar1 != (BsonString *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)pBVar1,ExceptionArgument__Enum_obj,unaff_EBP);
      (pBVar1->fields)._._value = (Object *)options;
      func_?(&(pBVar1->fields)._._value,options);
      (pBVar1->fields)._._type = 2;
      (pBVar1->fields)._IncludeLength_k__BackingField = 0;
      (this->fields)._Options_k__BackingField = pBVar1;
      func_?(&(this->fields)._Options_k__BackingField,pBVar1);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* BsonType get_Type() */

BsonType__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonRegex::BsonRegex_get_Type
          (BsonRegex *this,MethodInfo *method)

{
  return CONCAT31((int3)((uint)in_EAX >> 8),0xb);
}


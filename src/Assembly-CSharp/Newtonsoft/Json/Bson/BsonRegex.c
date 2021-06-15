
/* BsonRegex(String, String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonRegex::BsonRegex__ctor
               (BsonRegex *this,String *pattern,String *options,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  pBVar1 = TypeInfo__Newtonsoft__Json__Bson__BsonString;
  pSVar2 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar2,0.0,(MethodInfo *)pBVar1);
  (pSVar2->fields).originalScale.x = (float)pattern;
  *(undefined1 *)&(pSVar2->fields).originalScale.y = 2;
  *(undefined1 *)&(pSVar2->fields).target = 0;
  (this->fields)._Pattern_k__BackingField = (BsonString *)pSVar2;
  pBVar1 = TypeInfo__Newtonsoft__Json__Bson__BsonString;
  pSVar2 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar2,0.0,(MethodInfo *)pBVar1);
  (pSVar2->fields).originalScale.x = (float)options;
  *(undefined1 *)&(pSVar2->fields).originalScale.y = 2;
  *(undefined1 *)&(pSVar2->fields).target = 0;
  (this->fields)._Options_k__BackingField = (BsonString *)pSVar2;
  return;
}


/* BsonType get_Type() */

BsonType__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonRegex::BsonRegex_get_Type
          (BsonRegex *this,MethodInfo *method)

{
  return CONCAT31((int3)((uint)in_EAX >> 8),0xb);
}


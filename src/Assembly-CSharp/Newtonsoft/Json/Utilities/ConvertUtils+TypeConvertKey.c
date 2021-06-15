
/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils+TypeConvertKey::
     ConvertUtils_TypeConvertKey_Equals
               (ConvertUtils_TypeConvertKey *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ConvertUtils_TypeConvertKey__Class *)obj->klass ==
        TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if ((((ConvertUtils_TypeConvertKey__Class *)obj->klass)->_0).element_class !=
          (TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey->_0).element_class) {
        func_?(obj,TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey);
        pcVar2 = (code *)swi(3);
        bVar3 = (*pcVar2)();
        return bVar3;
      }
      piVar4 = (int *)func_?(obj);
      if (this[1]._initialType == (Type *)*piVar4) {
        return this[1]._targetType == (Type *)piVar4[1];
      }
    }
  }
  return 0;
}


/* Boolean Equals(ConvertUtils+TypeConvertKey) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils+TypeConvertKey::
     ConvertUtils_TypeConvertKey_Equals_1
               (ConvertUtils_TypeConvertKey *this,ConvertUtils_TypeConvertKey other,
               MethodInfo *method)

{
  if (this[1]._initialType != other._initialType) {
    return 0;
  }
  return this[1]._targetType == other._targetType;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils+TypeConvertKey::
        ConvertUtils_TypeConvertKey_GetHashCode
                  (ConvertUtils_TypeConvertKey *this,MethodInfo *method)

{
  pTVar1 = this[1]._initialType;
  if (pTVar1 != (Type *)0x0) {
    uVar2 = (*(code *)(pTVar1->klass->vtable).GetHashCode.method)
                      (pTVar1,(pTVar1->klass->vtable).ToString.methodPtr);
    pTVar1 = this[1]._targetType;
    if (pTVar1 != (Type *)0x0) {
      uVar3 = (*(code *)(pTVar1->klass->vtable).GetHashCode.method)
                        (pTVar1,(pTVar1->klass->vtable).ToString.methodPtr);
      return uVar3 ^ uVar2;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


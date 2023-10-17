
/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils+TypeConvertKey::
     ConvertUtils_TypeConvertKey_Equals
               (ConvertUtils_TypeConvertKey *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ConvertUtils_TypeConvertKey__Class *)obj->klass ==
        TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if ((obj->klass->_0).element_class ==
          (TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey->_0).element_class) {
        pCVar2 = (ConvertUtils_TypeConvertKey *)func_?(obj);
        bVar3 = ConvertUtils_TypeConvertKey_Equals_1(this,*pCVar2,(MethodInfo *)0x0);
        return bVar3;
      }
      func_?(obj,TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey);
      pcVar4 = (code *)swi(3);
      bVar3 = (*pcVar4)();
      return bVar3;
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  pTVar1 = this->_initialType;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  bVar2 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                    ((Object **)pTVar1,(Object **)other._initialType,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return 0;
  }
  pTVar1 = this->_targetType;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  bVar2 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                    ((Object **)pTVar1,(Object **)other._targetType,(MethodInfo *)0x0);
  return bVar2;
}


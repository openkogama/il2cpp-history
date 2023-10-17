
/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::ResolverContractKey::
     ResolverContractKey_Equals(ResolverContractKey *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__ResolverContractKey);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ResolverContractKey__Class *)obj->klass ==
        TypeInfo__Newtonsoft__Json__Serialization__ResolverContractKey) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if ((obj->klass->_0).element_class ==
          (TypeInfo__Newtonsoft__Json__Serialization__ResolverContractKey->_0).element_class) {
        pRVar2 = (ResolverContractKey *)func_?(obj);
        bVar3 = ResolverContractKey_Equals_1(this,*pRVar2,(MethodInfo *)0x0);
        return bVar3;
      }
      func_?(obj,TypeInfo__Newtonsoft__Json__Serialization__ResolverContractKey);
      pcVar4 = (code *)swi(3);
      bVar3 = (*pcVar4)();
      return bVar3;
    }
  }
  return 0;
}


/* Boolean Equals(ResolverContractKey) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::ResolverContractKey::
     ResolverContractKey_Equals_1
               (ResolverContractKey *this,ResolverContractKey other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  pTVar1 = this->_resolverType;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  bVar2 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                    ((Object **)pTVar1,(Object **)other._resolverType,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return 0;
  }
  pTVar1 = this->_contractType;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  bVar2 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                    ((Object **)pTVar1,(Object **)other._contractType,(MethodInfo *)0x0);
  return bVar2;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Serialization::ResolverContractKey::
        ResolverContractKey_GetHashCode(ResolverContractKey *this,MethodInfo *method)

{
  pTVar1 = this->_resolverType;
  if (pTVar1 != (Type *)0x0) {
    uVar2 = (*(pTVar1->klass->vtable).GetHashCode.methodPtr)
                      (pTVar1,(pTVar1->klass->vtable).GetHashCode.method);
    pTVar1 = this->_contractType;
    if (pTVar1 != (Type *)0x0) {
      uVar3 = (*(pTVar1->klass->vtable).GetHashCode.methodPtr)
                        (pTVar1,(pTVar1->klass->vtable).GetHashCode.method);
      return uVar3 ^ uVar2;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}



/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::ResolverContractKey::
     ResolverContractKey_Equals(ResolverContractKey *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ResolverContractKey__Class *)obj->klass ==
        TypeInfo__Newtonsoft__Json__Serialization__ResolverContractKey) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if ((((ResolverContractKey__Class *)obj->klass)->_0).element_class !=
          (TypeInfo__Newtonsoft__Json__Serialization__ResolverContractKey->_0).element_class) {
        func_?(obj,TypeInfo__Newtonsoft__Json__Serialization__ResolverContractKey);
        pcVar2 = (code *)swi(3);
        bVar3 = (*pcVar2)();
        return bVar3;
      }
      piVar4 = (int *)func_?(obj);
      if (this[1]._resolverType == (Type *)*piVar4) {
        return this[1]._contractType == (Type *)piVar4[1];
      }
    }
  }
  return 0;
}


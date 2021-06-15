
/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultSerializationBinder+TypeNameKey::
     DefaultSerializationBinder_TypeNameKey_Equals
               (DefaultSerializationBinder_TypeNameKey *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((DefaultSerializationBinder_TypeNameKey__Class *)obj->klass ==
        TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if ((((DefaultSerializationBinder_TypeNameKey__Class *)obj->klass)->_0).element_class ==
          (TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey->_0).
          element_class) {
        puVar2 = (undefined4 *)func_?(obj);
        bVar3 = func_?(this + 1,*puVar2,puVar2[1],0);
        return bVar3;
      }
      func_?(obj,
                      TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey
                     );
      pcVar4 = (code *)swi(3);
      bVar3 = (*pcVar4)();
      return bVar3;
    }
  }
  return 0;
}


/* Boolean Equals(DefaultSerializationBinder+TypeNameKey) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultSerializationBinder+TypeNameKey::
     DefaultSerializationBinder_TypeNameKey_Equals_1
               (DefaultSerializationBinder_TypeNameKey *this,
               DefaultSerializationBinder_TypeNameKey other,MethodInfo *method)

{
  bVar1 = func_?(this + 1,other.AssemblyName,other.TypeName,method);
  return bVar1;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultSerializationBinder+TypeNameKey
        ::DefaultSerializationBinder_TypeNameKey_GetHashCode
                  (DefaultSerializationBinder_TypeNameKey *this,MethodInfo *method)

{
  pSVar1 = this[1].AssemblyName;
  if (pSVar1 == (String *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)(pSVar1->klass->vtable).GetHashCode.method)
                      (pSVar1,(pSVar1->klass->vtable).ToString.methodPtr);
  }
  pSVar1 = this[1].TypeName;
  if (pSVar1 == (String *)0x0) {
    return uVar2;
  }
  uVar3 = (*(code *)(pSVar1->klass->vtable).GetHashCode.method)
                    (pSVar1,(pSVar1->klass->vtable).ToString.methodPtr);
  return uVar3 ^ uVar2;
}


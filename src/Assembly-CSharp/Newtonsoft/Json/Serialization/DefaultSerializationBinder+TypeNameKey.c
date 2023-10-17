
/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultSerializationBinder+TypeNameKey::
     DefaultSerializationBinder_TypeNameKey_Equals
               (DefaultSerializationBinder_TypeNameKey *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey
                   );
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((DefaultSerializationBinder_TypeNameKey__Class *)obj->klass ==
        TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if ((obj->klass->_0).element_class !=
          (TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey->_0).
          element_class) {
        func_?(obj,
                        TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey
                       );
        pcVar2 = (code *)swi(3);
        bVar3 = (*pcVar2)();
        return bVar3;
      }
      puVar4 = (undefined4 *)func_?(obj);
      b = (String *)puVar4[1];
      bVar3 = mscorlib.dll::System::String::String_op_Equality
                        (this->AssemblyName,(String *)*puVar4,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        return 0;
      }
      bVar3 = mscorlib.dll::System::String::String_op_Equality(this->TypeName,b,(MethodInfo *)0x0);
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
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (this->AssemblyName,other.AssemblyName,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return 0;
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (this->TypeName,other.TypeName,(MethodInfo *)0x0);
  return bVar1;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultSerializationBinder+TypeNameKey
        ::DefaultSerializationBinder_TypeNameKey_GetHashCode
                  (DefaultSerializationBinder_TypeNameKey *this,MethodInfo *method)

{
  if (this->AssemblyName == (String *)0x0) {
    uVar1 = 0;
  }
  else {
    pSVar2 = this->AssemblyName->klass;
    uVar1 = (*(pSVar2->vtable).GetHashCode.methodPtr)
                      (this->AssemblyName,(pSVar2->vtable).GetHashCode.method);
  }
  if (this->TypeName != (String *)0x0) {
    pSVar2 = this->TypeName->klass;
    uVar3 = (*(pSVar2->vtable).GetHashCode.methodPtr)
                      (this->TypeName,(pSVar2->vtable).GetHashCode.method);
    return uVar3 ^ uVar1;
  }
  return uVar1;
}


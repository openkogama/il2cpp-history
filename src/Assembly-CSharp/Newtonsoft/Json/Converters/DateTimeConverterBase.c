
/* Boolean CanConvert(Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Converters::DateTimeConverterBase::
     DateTimeConverterBase_CanConvert
               (DateTimeConverterBase *this,Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__System__DateTimeOffset);
    func_?(&TypeRef__System__DateTime);
    func_?(&TypeRef__System__Nullable<System::DateTimeOffset>);
    func_?(&TypeRef__System__Nullable<System::DateTime>);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  pIVar1 = TypeRef__System__DateTime;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
  bVar3 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                    ((Object **)objectType,(Object **)pTVar2,(MethodInfo *)0x0);
  pIVar1 = TypeRef__System__Nullable<System::DateTime>;
  if (bVar3 == 0) {
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
    bVar3 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                      ((Object **)objectType,(Object **)pTVar2,(MethodInfo *)0x0);
    pIVar1 = TypeRef__System__DateTimeOffset;
    if (bVar3 == 0) {
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
      bVar3 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                        ((Object **)objectType,(Object **)pTVar2,(MethodInfo *)0x0);
      pIVar1 = TypeRef__System__Nullable<System::DateTimeOffset>;
      if (bVar3 == 0) {
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
        bVar3 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                          ((Object **)objectType,(Object **)pTVar2,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          return 0;
        }
      }
    }
  }
  return 1;
}



/* Boolean CanConvert(Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Converters::DateTimeConverterBase::
     DateTimeConverterBase_CanConvert
               (DateTimeConverterBase *this,Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = TypeRef__System__DateTime;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
  pIVar1 = TypeRef__System__Nullable<System::DateTime>;
  if (objectType != pTVar2) {
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
    pIVar1 = TypeRef__System__DateTimeOffset;
    if (objectType != pTVar2) {
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?();
      }
      pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
      pIVar1 = TypeRef__System__Nullable<System::DateTimeOffset>;
      if (objectType != pTVar2) {
        if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Type->_1).cctor_started == 0)) {
          func_?();
        }
        pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
        if (objectType != pTVar2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


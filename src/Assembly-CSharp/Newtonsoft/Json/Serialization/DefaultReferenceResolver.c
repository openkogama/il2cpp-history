
/* Void AddReference(Object, String, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultReferenceResolver::
     DefaultReferenceResolver_AddReference
               (DefaultReferenceResolver *this,Object *context,String *reference,Object *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::Object>__Add_System__String__System__Object_
                   );
    cRam_? = '\x01';
  }
  this_00 = DefaultReferenceResolver_GetMappings(this,context,(MethodInfo *)0x0);
  if (this_00 != (BidirectionalDictionary_2_System_String_System_Object_ *)0x0) {
    Json::Utilities::BidirectionalDictionary`2[System::Object,System::Object]::
    BidirectionalDictionary_2_System_Object_System_Object__Add
              ((BidirectionalDictionary_2_System_Object_System_Object_ *)this_00,(Object *)reference
               ,value,
               MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::Object>__Add_System__String__System__Object_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffffc);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* BidirectionalDictionary`2[System.String,System.Object] GetMappings(Object) */

BidirectionalDictionary_2_System_String_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultReferenceResolver::
DefaultReferenceResolver_GetMappings
          (DefaultReferenceResolver *this,Object *context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalBase);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerProxy);
    cRam_? = '\x01';
  }
  if (context == (Object *)0x0) {
code_?:
    uVar1 = func_?(&TypeInfo__System__Exception);
    context = (Object *)func_?(uVar1);
    func_?(context);
    method_00 = (MethodInfo *)0x0;
    message = (String *)func_?(&StringLiteral_The_DefaultReferenceResolver_can);
    mscorlib.dll::System::Exception::Exception__ctor_1((Exception *)context,message,method_00);
    uVar1 = func_?(&
                            MethodInfo__Newtonsoft__Json__Serialization__DefaultReferenceResolver__GetMappings_System__Object_
                           );
    func_?(context,uVar1);
    pJVar2 = extraout_EDX;
  }
  else {
    pOVar3 = context->klass;
    if (((pOVar3->_1).typeHierarchyDepth <
         (TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalBase->_1).
         typeHierarchyDepth) ||
       ((pOVar3->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalBase->_1).
         typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalBase)) {
      if (((pOVar3->_1).typeHierarchyDepth <
           (TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerProxy->_1).typeHierarchyDepth)
         || ((JsonSerializerProxy__Class *)
             (pOVar3->_1).typeHierarchy
             [(TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerProxy->_1).
              typeHierarchyDepth - 1] !=
             TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerProxy)) goto code_?;
      pJVar2 = TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerProxy;
      if (((TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerProxy->_1).typeHierarchyDepth
           <= (pOVar3->_1).typeHierarchyDepth) &&
         ((JsonSerializerProxy__Class *)
          (pOVar3->_1).typeHierarchy
          [(TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerProxy->_1).typeHierarchyDepth -
           1] == TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerProxy)) {
        context = (Object *)
                  JsonSerializerProxy::JsonSerializerProxy_GetInternalSerializer
                            ((JsonSerializerProxy *)context,(MethodInfo *)0x0);
        if ((JsonSerializerInternalBase *)context != (JsonSerializerInternalBase *)0x0)
        goto code_?;
        goto code_?;
      }
    }
    else {
      pJVar2 = (JsonSerializerProxy__Class *)
               TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalBase;
      if (((TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalBase->_1).
           typeHierarchyDepth <= (pOVar3->_1).typeHierarchyDepth) &&
         ((pOVar3->_1).typeHierarchy
          [(TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalBase->_1).
           typeHierarchyDepth - 1] ==
          (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalBase)) {
code_?:
        pBVar4 = JsonSerializerInternalBase::JsonSerializerInternalBase_get_DefaultReferenceMappings
                           ((JsonSerializerInternalBase *)context,(MethodInfo *)0x0);
        return pBVar4;
      }
    }
  }
  func_?(context,pJVar2);
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pBVar4 = (BidirectionalDictionary_2_System_String_System_Object_ *)(*pcVar5)();
  return pBVar4;
}


/* String GetReference(Object, Object) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultReferenceResolver::
         DefaultReferenceResolver_GetReference
                   (DefaultReferenceResolver *this,Object *context,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::Object>__Add_System__String__System__Object_
                   );
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::Object>__TryGetBySecond_System__Object__System__String__
                   );
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    cRam_? = '\x01';
  }
  this_00 = DefaultReferenceResolver_GetMappings(this,context,(MethodInfo *)0x0);
  if (this_00 != (BidirectionalDictionary_2_System_String_System_Object_ *)0x0) {
    pMVar1 = 
    MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::Object>__TryGetBySecond_System__Object__System__String__
    ;
    bVar2 = Json::Utilities::BidirectionalDictionary`2[System::Object,System::Object]::
            BidirectionalDictionary_2_System_Object_System_Object__TryGetBySecond
                      ((BidirectionalDictionary_2_System_Object_System_Object_ *)this_00,value,
                       (Object **)&stack0xfffffff8,
                       MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::Object>__TryGetBySecond_System__Object__System__String__
                      );
    if (bVar2 == 0) {
      (this->fields)._referenceCount = (this->fields)._referenceCount + 1;
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::Int32::Int32_ToString_2
                         ((Int32 *)&this->fields,(IFormatProvider *)provider,(MethodInfo *)0x0);
      pMVar1 = (MethodInfo *)&UNK_?;
      Json::Utilities::BidirectionalDictionary`2[System::Object,System::Object]::
      BidirectionalDictionary_2_System_Object_System_Object__Add
                ((BidirectionalDictionary_2_System_Object_System_Object_ *)this_00,(Object *)pSVar3,
                 value,
                 MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::Object>__Add_System__String__System__Object_
                );
    }
    return (String *)pMVar1;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar4)();
  return pSVar3;
}


/* Boolean IsReferenced(Object, Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultReferenceResolver::
     DefaultReferenceResolver_IsReferenced
               (DefaultReferenceResolver *this,Object *context,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::Object>__TryGetBySecond_System__Object__System__String__
                   );
    cRam_? = '\x01';
  }
  this_00 = DefaultReferenceResolver_GetMappings(this,context,(MethodInfo *)0x0);
  if (this_00 != (BidirectionalDictionary_2_System_String_System_Object_ *)0x0) {
    bVar1 = Json::Utilities::BidirectionalDictionary`2[System::Object,System::Object]::
            BidirectionalDictionary_2_System_Object_System_Object__TryGetBySecond
                      ((BidirectionalDictionary_2_System_Object_System_Object_ *)this_00,value,
                       (Object **)&stack0xfffffff8,
                       MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::Object>__TryGetBySecond_System__Object__System__String__
                      );
    return bVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Object ResolveReference(Object, String) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultReferenceResolver::
         DefaultReferenceResolver_ResolveReference
                   (DefaultReferenceResolver *this,Object *context,String *reference,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::Object>__TryGetByFirst_System__String__System__Object__
                   );
    cRam_? = '\x01';
  }
  this_00 = DefaultReferenceResolver_GetMappings(this,context,(MethodInfo *)0x0);
  if (this_00 != (BidirectionalDictionary_2_System_String_System_Object_ *)0x0) {
    Json::Utilities::BidirectionalDictionary`2[System::Object,System::Object]::
    BidirectionalDictionary_2_System_Object_System_Object__TryGetByFirst
              ((BidirectionalDictionary_2_System_Object_System_Object_ *)this_00,(Object *)reference
               ,(Object **)&stack0xfffffff8,
               MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::Object>__TryGetByFirst_System__String__System__Object__
              );
    return (Object *)reference;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar1)();
  return pOVar2;
}


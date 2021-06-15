
/* Void AddReference(Object, String, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultReferenceResolver::
     DefaultReferenceResolver_AddReference
               (DefaultReferenceResolver *this,Object *context,String *reference,Object *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = DefaultReferenceResolver_GetMappings(this,context,(MethodInfo *)0x0);
  if (this_00 != (BidirectionalDictionary_2_System_String_System_Object_ *)0x0) {
    Json::Utilities::BidirectionalDictionary`2[System::String,System::Object]::
    BidirectionalDictionary_2_System_String_System_Object__Add
              (this_00,reference,value,
               MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::Object>__Add_System__String__System__Object_
              );
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* BidirectionalDictionary`2[System.String,System.Object] GetMappings(Object) */

BidirectionalDictionary_2_System_String_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultReferenceResolver::
DefaultReferenceResolver_GetMappings
          (DefaultReferenceResolver *this,Object *context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (context == (Object *)0x0) {
code_?:
    context = (Object *)func_?(TypeInfo__System__Exception);
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1
              ((IsolatedStorageException *)context,StringLiteral_The_DefaultReferenceResolver_can,
               (MethodInfo *)0x0);
    func_?(context,0,
                    MethodInfo__Newtonsoft__Json__Serialization__DefaultReferenceResolver__GetMappings_System__Object_
                   );
  }
  else {
    pOVar1 = context->klass;
    bVar2 = (pOVar1->_1).naturalAligment;
    bVar3 = (TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalBase->_1).
            naturalAligment;
    if ((bVar2 < bVar3) ||
       ((pOVar1->_1).typeHierarchy[bVar3 - 1] !=
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalBase)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    pOVar5 = (Object *)0x0;
    if (bVar4) {
      pOVar5 = context;
    }
    if (pOVar5 == (Object *)0x0) {
      bVar3 = (TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerProxy->_1).naturalAligment;
      if ((bVar2 < bVar3) ||
         ((JsonSerializerProxy__Class *)(pOVar1->_1).typeHierarchy[bVar3 - 1] !=
          TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerProxy)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      pOVar5 = (Object *)0x0;
      if (bVar4) {
        pOVar5 = context;
      }
      if (pOVar5 == (Object *)0x0) goto code_?;
      iVar6 = func_?(context,TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerProxy
                             );
      if (iVar6 != 0) {
        method_00 = (MethodInfo *)context;
        this_00 = (JsonSerializerProxy *)
                  func_?(context,
                                  TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerProxy,0);
        pJVar7 = JsonSerializerProxy::JsonSerializerProxy_GetInternalSerializer(this_00,method_00);
        goto code_?;
      }
    }
    else {
      bVar3 = (TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalBase->_1).
              naturalAligment;
      if ((bVar2 < bVar3) ||
         ((pOVar1->_1).typeHierarchy[bVar3 - 1] !=
          (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalBase)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      pJVar7 = (JsonSerializerInternalBase *)0x0;
      if (bVar4) {
        pJVar7 = (JsonSerializerInternalBase *)context;
      }
      pJVar8 = TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalBase;
      if (pJVar7 == (JsonSerializerInternalBase *)0x0) goto code_?;
code_?:
      if (pJVar7 != (JsonSerializerInternalBase *)0x0) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        pBVar9 = (pJVar7->fields)._mappings;
        if (pBVar9 == (BidirectionalDictionary_2_System_String_System_Object_ *)0x0) {
          if ((((uint)(TypeInfo__System__Collections__Generic__EqualityComparer<System::String>->
                      vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Collections__Generic__EqualityComparer<System::String>->_1).
              cctor_started == 0)) {
            func_?(TypeInfo__System__Collections__Generic__EqualityComparer<System::String>
                           );
          }
          firstEqualityComparer =
               mscorlib.dll::System::Collections::Generic::EqualityComparer`1[WinningConditionType]
               ::EqualityComparer_1_WinningConditionType__get_Default
                         (
                         MethodInfo__System__Collections__Generic__EqualityComparer<System::String>__get_Default__
                         );
          method_01 = 
          TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer
          ;
          this_01 = (ScaleAnimationBase *)func_?();
          ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_01);
          pBVar9 = (BidirectionalDictionary_2_System_String_System_Object_ *)
                   func_?(
                                  TypeInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::Object>
                                  );
          Json::Utilities::BidirectionalDictionary`2[System::String,System::Object]::
          BidirectionalDictionary_2_System_String_System_Object___ctor
                    (pBVar9,(IEqualityComparer_1_System_String_ *)firstEqualityComparer,
                     (IEqualityComparer_1_System_Object_ *)this_01,
                     MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::Object>__BidirectionalDictionary_System__Collections__Generic__IEqualityComparer<System::String>__System__Collections__Generic__IEqualityComparer<System::Object>_
                    );
          (pJVar7->fields)._mappings = pBVar9;
        }
        return pBVar9;
      }
    }
  }
  func_?(0);
  pJVar8 = extraout_EDX;
code_?:
  func_?(context,pJVar8);
  pcVar10 = (code *)swi(3);
  pBVar9 = (BidirectionalDictionary_2_System_String_System_Object_ *)(*pcVar10)();
  return pBVar9;
}


/* String GetReference(Object, Object) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultReferenceResolver::
         DefaultReferenceResolver_GetReference
                   (DefaultReferenceResolver *this,Object *context,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = DefaultReferenceResolver_GetMappings(this,context,(MethodInfo *)0x0);
  if (this_00 != (BidirectionalDictionary_2_System_String_System_Object_ *)0x0) {
    pMVar1 = 
    MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::Object>__TryGetBySecond_System__Object__System__String__
    ;
    bVar2 = Json::Utilities::BidirectionalDictionary`2[System::String,System::Object]::
            BidirectionalDictionary_2_System_String_System_Object__TryGetBySecond
                      (this_00,value,(String **)&stack0xfffffff8,
                       MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::Object>__TryGetBySecond_System__Object__System__String__
                      );
    if (bVar2 == 0) {
      (this->fields)._referenceCount = (this->fields)._referenceCount + 1;
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?();
      }
      mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                ((MethodInfo *)0x0);
      pSVar3 = (String *)func_?();
      Json::Utilities::BidirectionalDictionary`2[System::String,System::Object]::
      BidirectionalDictionary_2_System_String_System_Object__Add
                (this_00,pSVar3,value,
                 MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::Object>__Add_System__String__System__Object_
                );
      pMVar1 = (MethodInfo *)value;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = DefaultReferenceResolver_GetMappings(this,context,(MethodInfo *)0x0);
  if (this_00 != (BidirectionalDictionary_2_System_String_System_Object_ *)0x0) {
    bVar1 = Json::Utilities::BidirectionalDictionary`2[System::String,System::Object]::
            BidirectionalDictionary_2_System_String_System_Object__TryGetBySecond
                      (this_00,value,(String **)&stack0xfffffff8,
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = DefaultReferenceResolver_GetMappings(this,context,(MethodInfo *)0x0);
  if (this_00 != (BidirectionalDictionary_2_System_String_System_Object_ *)0x0) {
    Json::Utilities::BidirectionalDictionary`2[System::String,System::Object]::
    BidirectionalDictionary_2_System_String_System_Object__TryGetByFirst
              (this_00,reference,(Object **)&stack0xfffffff8,
               MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::Object>__TryGetByFirst_System__String__System__Object__
              );
    return (Object *)reference;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar1)();
  return pOVar2;
}


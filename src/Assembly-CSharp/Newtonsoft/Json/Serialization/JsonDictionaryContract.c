
/* IWrappedDictionary CreateWrapper(Object) */

IWrappedDictionary *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonDictionaryContract::
JsonDictionaryContract_CreateWrapper
          (JsonDictionaryContract *this,Object *dictionary,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = func_?(dictionary,TypeInfo__System__Collections__IDictionary);
  handle = TypeRef__Newtonsoft__Json__Utilities__DictionaryWrapper;
  if ((iVar1 == 0) ||
     (((this->fields)._DictionaryValueType_k__BackingField != (Type *)0x0 &&
      ((this->fields)._isDictionaryValueTypeNullableType != 0)))) {
    if ((this->fields)._genericWrapperType == (Type *)0x0) {
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Type);
      }
      pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      innerTypes = (IDictionary__Class *)func_?(TypeInfo__System__Type,2);
      pTVar3 = (this->fields)._DictionaryKeyType_k__BackingField;
      if (innerTypes == (IDictionary__Class *)0x0) goto code_?;
      if ((pTVar3 != (Type *)0x0) &&
         (iVar1 = func_?(pTVar3,((innerTypes->_0).image)->codeGenModule), iVar1 == 0))
      goto code_?;
      if ((innerTypes->_0).namespaze == (char *)0x0) goto code_?;
      (innerTypes->_0).byval_arg.data.dummy = pTVar3;
      pTVar3 = (this->fields)._DictionaryValueType_k__BackingField;
      if ((pTVar3 != (Type *)0x0) &&
         (iVar1 = func_?(pTVar3,((innerTypes->_0).image)->codeGenModule), iVar1 == 0))
      goto code_?;
      if ((innerTypes->_0).namespaze < (char *)0x2) goto code_?;
      *(Type **)&(innerTypes->_0).byval_arg.attrs = pTVar3;
      pTVar2 = Json::Utilities::ReflectionUtils::ReflectionUtils_MakeGenericType
                         (pTVar2,(Type__Array *)innerTypes,(MethodInfo *)0x0);
      (this->fields)._genericWrapperType = pTVar2;
      innerTypes = (IDictionary__Class *)func_?(TypeInfo__System__Type,1);
      pTVar3 = (this->fields)._genericCollectionDefinitionType;
      if (innerTypes == (IDictionary__Class *)0x0) goto code_?;
      if ((pTVar3 != (Type *)0x0) &&
         (iVar1 = func_?(pTVar3,((innerTypes->_0).image)->codeGenModule), iVar1 == 0))
      goto code_?;
      if ((innerTypes->_0).namespaze != (char *)0x0) {
        (innerTypes->_0).byval_arg.data.dummy = pTVar3;
        if (pTVar2 != (Type *)0x0) {
          pCVar4 = mscorlib.dll::System::Type::Type_GetConstructor
                             (pTVar2,(Type__Array *)innerTypes,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
                      methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)
             ) {
            func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
          }
          pRVar5 = JsonTypeReflector::JsonTypeReflector_get_ReflectionDelegateFactory
                             ((MethodInfo *)0x0);
          if (pRVar5 != (ReflectionDelegateFactory *)0x0) {
            puVar6 = (undefined4 *)
                     func_?((&(pRVar5->klass->vtable).Finalize)
                                     [Newtonsoft__Json__Utilities__MethodCall<System::Object,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateMethodCall<System::Object>_System__Reflection__MethodBase_
                                      ->flags].methodPtr,
                                     Newtonsoft__Json__Utilities__MethodCall<System::Object,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateMethodCall<System::Object>_System__Reflection__MethodBase_
                                    );
            pMVar7 = (MethodCall_2_System_Object_System_Object_ *)
                     (*(code *)*puVar6)(pRVar5,pCVar4,puVar6);
            (this->fields)._genericWrapperCreator = pMVar7;
            goto code_?;
          }
        }
        goto code_?;
      }
      goto code_?;
    }
code_?:
    pMVar7 = (this->fields)._genericWrapperCreator;
    innerTypes = (IDictionary__Class *)func_?(TypeInfo__System__Object,1);
    if (innerTypes == (IDictionary__Class *)0x0) {
code_?:
      func_?(0);
      goto code_?;
    }
    if ((dictionary != (Object *)0x0) &&
       (iVar1 = func_?(dictionary,((innerTypes->_0).image)->codeGenModule), iVar1 == 0))
    goto code_?;
    if ((innerTypes->_0).namespaze != (char *)0x0) {
      (innerTypes->_0).byval_arg.data.typeHandle = (Il2CppMetadataTypeHandle)dictionary;
      if (pMVar7 != (MethodCall_2_System_Object_System_Object_ *)0x0) {
        innerTypes = (IDictionary__Class *)
                     Json::Utilities::MethodCall`2[System::Object,System::Object]::
                     MethodCall_2_System_Object_System_Object__Invoke
                               (pMVar7,(Object *)0x0,(Object__Array *)innerTypes,
                                MethodInfo__Newtonsoft__Json__Utilities__MethodCall<System::Object,_System::Object>__Invoke_System__Object__System__Object____
                               );
        if (innerTypes == (IDictionary__Class *)0x0) {
          return (IWrappedDictionary *)0x0;
        }
        pIVar8 = (IWrappedDictionary *)func_?(innerTypes);
        if (pIVar8 != (IWrappedDictionary *)0x0) {
          return pIVar8;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  else {
    this_00 = (DictionaryWrapper_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__Newtonsoft__Json__Utilities__DictionaryWrapper<System::Object,_System::Object>
                             );
    innerTypes = TypeInfo__System__Collections__IDictionary;
    if (dictionary == (Object *)0x0) {
      dictionary_00 = (IDictionary *)0x0;
code_?:
      Json::Utilities::DictionaryWrapper`2[System::Object,System::Object]::
      DictionaryWrapper_2_System_Object_System_Object___ctor
                (this_00,dictionary_00,
                 MethodInfo__Newtonsoft__Json__Utilities__DictionaryWrapper<System::Object,_System::Object>__DictionaryWrapper_System__Collections__IDictionary_
                );
      return (IWrappedDictionary *)this_00;
    }
    dictionary_00 =
         (IDictionary *)func_?(dictionary,TypeInfo__System__Collections__IDictionary);
    if (dictionary_00 != (IDictionary *)0x0) goto code_?;
code_?:
    func_?(dictionary,innerTypes);
code_?:
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar9 = func_?(0);
    func_?(uVar9);
code_?:
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar9 = func_?(0,0);
    func_?(uVar9);
  }
  uVar9 = func_?(0,0);
  func_?(uVar9);
code_?:
  func_?(innerTypes);
  pcVar10 = (code *)swi(3);
  pIVar8 = (IWrappedDictionary *)(*pcVar10)();
  return pIVar8;
}


/* Boolean IsTypeGenericDictionaryInterface(Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonDictionaryContract::
     JsonDictionaryContract_IsTypeGenericDictionaryInterface
               (JsonDictionaryContract *this,Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (type != (Type *)0x0) {
    cVar1 = (*(code *)(type->klass->vtable).get_IsGenericType.method)
                      (type,(type->klass->vtable).MakeGenericType.methodPtr);
    if (cVar1 != '\0') {
      pTVar2 = (Type *)(*(code *)(type->klass->vtable).GetGenericTypeDefinition.method)
                                 (type,(type->klass->vtable).get_IsGenericType.methodPtr);
      handle = TypeRef__System__Collections__Generic__IDictionary;
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Type);
      }
      pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      return pTVar2 == pTVar3;
    }
    return 0;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* JsonDictionaryContract(Type) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonDictionaryContract::
     JsonDictionaryContract__ctor
               (JsonDictionaryContract *this,Type *underlyingType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)underlyingType,StringLiteral_underlyingType,(MethodInfo *)0x0);
  (this->fields)._._UnderlyingType_k__BackingField = underlyingType;
  (this->fields)._._CreatedType_k__BackingField = underlyingType;
  pIVar1 = TypeRef__System__Collections__Generic__IDictionary;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?();
  }
  pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
  pTVar3 = (Type *)0x0;
  implementingType = &(this->fields)._genericCollectionDefinitionType;
  pTVar4 = (Type *)implementingType;
  bVar5 = Json::Utilities::ReflectionUtils::ReflectionUtils_ImplementsGenericDefinition_1
                    (underlyingType,pTVar2,implementingType,(MethodInfo *)0x0);
  if (bVar5 == 0) {
    Json::Utilities::ReflectionUtils::ReflectionUtils_GetDictionaryKeyValueTypes
              ((this->fields)._._UnderlyingType_k__BackingField,(Type **)&stack0xfffffff8,
               (Type **)&stack0xfffffff4,(MethodInfo *)0x0);
code_?:
    (this->fields)._DictionaryKeyType_k__BackingField = pTVar3;
    (this->fields)._DictionaryValueType_k__BackingField = pTVar4;
    if (pTVar4 != (Type *)0x0) {
      bVar5 = Json::Utilities::ReflectionUtils::ReflectionUtils_IsNullableType
                        (pTVar4,(MethodInfo *)0x0);
      (this->fields)._isDictionaryValueTypeNullableType = bVar5;
    }
    pTVar2 = (this->fields)._._UnderlyingType_k__BackingField;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (pTVar2 == (Type *)0x0) {
code_?:
      func_?();
code_?:
      func_?();
      func_?();
      goto code_?;
    }
    cVar6 = (*(code *)(pTVar2->klass->vtable).get_IsGenericType.method)();
    if (cVar6 == '\0') {
code_?:
      pIVar1 = TypeRef__System__Collections__IDictionary;
      pTVar3 = (this->fields)._._UnderlyingType_k__BackingField;
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?();
      }
      pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
      pIVar1 = TypeRef__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if (pTVar3 != pTVar4) {
        return;
      }
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?();
      }
      pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
      (this->fields)._._CreatedType_k__BackingField = pTVar3;
      return;
    }
    pTVar2 = (Type *)(*(code *)(pTVar2->klass->vtable).GetGenericTypeDefinition.method)();
    pIVar1 = TypeRef__System__Collections__Generic__IDictionary;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    pTVar7 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
    pIVar1 = TypeRef__System__Collections__Generic__Dictionary;
    if (pTVar2 != pTVar7) goto code_?;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
    innerTypes = (Type__Array *)func_?();
    if (innerTypes == (Type__Array *)0x0) goto code_?;
    if ((pTVar3 != (Type *)0x0) && (iVar8 = func_?(), iVar8 == 0)) goto code_?;
    if (innerTypes->max_length == 0) goto code_?;
    innerTypes->vector[0] = pTVar3;
    if ((pTVar4 == (Type *)0x0) || (iVar8 = func_?(), iVar8 != 0)) {
      if (1 < innerTypes->max_length) {
        innerTypes->vector[1] = pTVar4;
        pTVar3 = Json::Utilities::ReflectionUtils::ReflectionUtils_MakeGenericType
                           (pTVar2,innerTypes,(MethodInfo *)0x0);
        (this->fields)._._CreatedType_k__BackingField = pTVar3;
        return;
      }
      goto code_?;
    }
  }
  else {
    if ((*implementingType == (Type *)0x0) ||
       (iVar8 = (*(code *)((*implementingType)->klass->vtable).GetGenericArguments.method)(),
       iVar8 == 0)) goto code_?;
    if (*(int *)(iVar8 + 0xc) == 0) goto code_?;
    pTVar3 = *(Type **)(iVar8 + 0x10);
    if ((*implementingType == (Type *)0x0) ||
       (iVar8 = (*(code *)((*implementingType)->klass->vtable).GetGenericArguments.method)(),
       iVar8 == 0)) goto code_?;
    if (1 < *(uint *)(iVar8 + 0xc)) {
      pTVar4 = *(Type **)(iVar8 + 0x14);
      goto code_?;
    }
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


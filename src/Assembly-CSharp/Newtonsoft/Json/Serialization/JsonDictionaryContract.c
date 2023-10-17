
/* IWrappedDictionary CreateWrapper(Object) */

IWrappedDictionary *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonDictionaryContract::
JsonDictionaryContract_CreateWrapper
          (JsonDictionaryContract *this,Object *dictionary,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__DictionaryWrapper<System::Object,_System::Object>__DictionaryWrapper_System__Collections__IDictionary_
                   );
    func_?(&TypeRef__Newtonsoft__Json__Utilities__DictionaryWrapper);
    func_?(&
                    TypeInfo__Newtonsoft__Json__Utilities__DictionaryWrapper<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Collections__IDictionary);
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__IWrappedDictionary);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    func_?(&TypeInfo__System__Object);
    func_?(&
                    Newtonsoft__Json__Utilities__MethodCall<System::Object,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateMethodCall<System::Object>_System__Reflection__MethodBase_
                   );
    func_?(&TypeInfo__System__Type);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  iVar1 = func_?(dictionary,TypeInfo__System__Collections__IDictionary);
  if (iVar1 == 0) {
code_?:
    pTVar2 = (this->fields)._genericWrapperType;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    bVar3 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                      ((Object **)pTVar2,(Object **)0x0,(MethodInfo *)0x0);
    handle = TypeRef__Newtonsoft__Json__Utilities__DictionaryWrapper;
    if (bVar3 == 0) {
code_?:
      this = (JsonDictionaryContract *)(this->fields)._genericWrapperCreator;
      innerTypes = (Type__Array *)func_?(TypeInfo__System__Object,1);
      if (innerTypes == (Type__Array *)0x0) {
code_?:
        pIVar4 = (IDictionary__Class *)this;
        func_?();
        goto code_?;
      }
      if ((dictionary == (Object *)0x0) ||
         (iVar1 = func_?(dictionary,
                                  (((DictionaryWrapper_2_System_Object_System_Object___Class *)
                                   innerTypes->klass)->_0).element_class), iVar1 != 0)) {
        if ((IDictionary_2_System_Object_System_Object_ *)innerTypes->max_length ==
            (IDictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        innerTypes->vector[0] = (Type *)dictionary;
        func_?(innerTypes->vector,dictionary);
        if ((IDictionary__Class *)this != (IDictionary__Class *)0x0) {
          uVar5._0_2_ = (((IDictionary__Class *)this)->_0).byval_arg.attrs;
          uVar5._2_1_ = (((IDictionary__Class *)this)->_0).byval_arg.type;
          uVar5._3_1_ = (((IDictionary__Class *)this)->_0).byval_arg.field_0x7;
          innerTypes = (Type__Array *)
                       (*(code *)(((IDictionary__Class *)this)->_0).namespaze)
                                 ((((IDictionary__Class *)this)->_0).element_class,0,innerTypes,
                                  uVar5);
          dictionary = (Object *)TypeInfo__Newtonsoft__Json__Utilities__IWrappedDictionary;
          if (innerTypes == (Type__Array *)0x0) {
            return (IWrappedDictionary *)0x0;
          }
          pIVar6 = (IWrappedDictionary *)
                   func_?(innerTypes,
                                   TypeInfo__Newtonsoft__Json__Utilities__IWrappedDictionary);
          if (pIVar6 != (IWrappedDictionary *)0x0) {
            return pIVar6;
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    pTStack_7 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    innerTypes = (Type__Array *)func_?(TypeInfo__System__Type,2);
    pTVar2 = (this->fields)._DictionaryKeyType_k__BackingField;
    if (innerTypes == (Type__Array *)0x0) goto code_?;
    if ((pTVar2 != (Type *)0x0) &&
       (iVar1 = func_?(pTVar2,(innerTypes->klass->_0).element_class), iVar1 == 0))
    goto code_?;
    if (innerTypes->max_length != 0) {
      innerTypes->vector[0] = pTVar2;
      func_?(innerTypes->vector,pTVar2);
      pTVar2 = (this->fields)._DictionaryValueType_k__BackingField;
      if ((pTVar2 != (Type *)0x0) &&
         (iVar1 = func_?(pTVar2,(innerTypes->klass->_0).element_class), iVar1 == 0))
      goto code_?;
      if (innerTypes->max_length < 2) goto code_?;
      innerTypes->vector[1] = pTVar2;
      func_?(innerTypes->vector + 1,pTVar2);
      pTVar2 = Json::Utilities::ReflectionUtils::ReflectionUtils_MakeGenericType
                         (pTStack_7,innerTypes,(MethodInfo *)0x0);
      (this->fields)._genericWrapperType = pTVar2;
      func_?(&(this->fields)._genericWrapperType,pTVar2);
      pTStack_7 = (this->fields)._genericWrapperType;
      innerTypes = (Type__Array *)func_?(TypeInfo__System__Type,1);
      pTVar2 = (this->fields)._genericCollectionDefinitionType;
      if (innerTypes == (Type__Array *)0x0) goto code_?;
      if ((pTVar2 == (Type *)0x0) ||
         (iVar1 = func_?(pTVar2,(innerTypes->klass->_0).element_class), iVar1 != 0)) {
        if (innerTypes->max_length == 0) goto code_?;
        innerTypes->vector[0] = pTVar2;
        func_?(innerTypes->vector,pTVar2);
        if (pTStack_7 != (Type *)0x0) {
          pCVar8 = mscorlib.dll::System::Type::Type_GetConstructor
                             (pTStack_7,innerTypes,(MethodInfo *)0x0);
          if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
          }
          pRVar9 = JsonTypeReflector::JsonTypeReflector_get_ReflectionDelegateFactory
                             ((MethodInfo *)0x0);
          innerTypes = (Type__Array *)0x0;
          if (pRVar9 != (ReflectionDelegateFactory *)0x0) {
            func_?((&(pRVar9->klass->vtable).Equals)
                            [Newtonsoft__Json__Utilities__MethodCall<System::Object,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateMethodCall<System::Object>_System__Reflection__MethodBase_
                             ->slot].method,
                            Newtonsoft__Json__Utilities__MethodCall<System::Object,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateMethodCall<System::Object>_System__Reflection__MethodBase_
                            ,&pcStack_10);
            pMVar11 = (MethodCall_2_System_Object_System_Object_ *)
                     (*pcStack_10)(pRVar9,pCVar8,pTStack_7);
            (this->fields)._genericWrapperCreator = pMVar11;
            func_?(&(this->fields)._genericWrapperCreator,pMVar11);
            goto code_?;
          }
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  else {
    pTVar2 = (this->fields)._DictionaryValueType_k__BackingField;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    bVar3 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                      ((Object **)pTVar2,(Object **)0x0,(MethodInfo *)0x0);
    if ((bVar3 == 0) && ((this->fields)._isDictionaryValueTypeNullableType != 0))
    goto code_?;
    innerTypes = (Type__Array *)
                 func_?(
                                TypeInfo__Newtonsoft__Json__Utilities__DictionaryWrapper<System::Object,_System::Object>
                                );
    method_00 = 
    MethodInfo__Newtonsoft__Json__Utilities__DictionaryWrapper<System::Object,_System::Object>__DictionaryWrapper_System__Collections__IDictionary_
    ;
    pIVar4 = TypeInfo__System__Collections__IDictionary;
    if (innerTypes == (Type__Array *)0x0) goto code_?;
    if (dictionary == (Object *)0x0) {
      dictionary_00 = (IDictionary *)0x0;
code_?:
      Json::Utilities::DictionaryWrapper`2[System::Object,System::Object]::
      DictionaryWrapper_2_System_Object_System_Object___ctor_1
                ((DictionaryWrapper_2_System_Object_System_Object_ *)innerTypes,dictionary_00,
                 method_00);
      return (IWrappedDictionary *)innerTypes;
    }
    dictionary_00 =
         (IDictionary *)func_?(dictionary,TypeInfo__System__Collections__IDictionary);
    if (dictionary_00 != (IDictionary *)0x0) goto code_?;
code_?:
    func_?(dictionary,pIVar4);
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
  }
code_?:
  func_?();
code_?:
  func_?(innerTypes,dictionary);
  pcVar12 = (code *)swi(3);
  pIVar6 = (IWrappedDictionary *)(*pcVar12)();
  return pIVar6;
}


/* Boolean IsTypeGenericDictionaryInterface(Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonDictionaryContract::
     JsonDictionaryContract_IsTypeGenericDictionaryInterface
               (JsonDictionaryContract *this,Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__System__Collections__Generic__IDictionary);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (type != (Type *)0x0) {
    cVar1 = (*(type->klass->vtable).get_IsGenericType.methodPtr)
                      (type,(type->klass->vtable).get_IsGenericType.method);
    if (cVar1 != '\0') {
      left = (Object **)
             (*(type->klass->vtable).GetGenericTypeDefinition.methodPtr)
                       (type,(type->klass->vtable).GetGenericTypeDefinition.method);
      handle = TypeRef__System__Collections__Generic__IDictionary;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Type);
      }
      right = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      bVar2 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                        (left,(Object **)right,(MethodInfo *)0x0);
      return bVar2;
    }
    return 0;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* JsonDictionaryContract(Type) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonDictionaryContract::
     JsonDictionaryContract__ctor
               (JsonDictionaryContract *this,Type *underlyingType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeRef__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeRef__System__Collections__Generic__Dictionary);
    func_?(&TypeRef__System__Collections__Generic__IDictionary);
    func_?(&TypeRef__System__Collections__IDictionary);
    func_?(&TypeInfo__System__Type);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&StringLiteral_underlyingType);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (underlyingType == (Type *)0x0) {
    paramName = StringLiteral_underlyingType;
    uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
    this_00 = (ArgumentNullException *)func_?(uVar1);
    func_?(this_00);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_00,paramName,(MethodInfo *)0x0);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                   );
    func_?(this_00);
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    (this->fields)._._UnderlyingType_k__BackingField = underlyingType;
    func_?(&this->fields,underlyingType);
    (this->fields)._._CreatedType_k__BackingField = underlyingType;
    func_?(&(this->fields)._._CreatedType_k__BackingField,underlyingType);
    pIVar2 = TypeRef__System__Collections__Generic__IDictionary;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
    bVar4 = Json::Utilities::ReflectionUtils::ReflectionUtils_ImplementsGenericDefinition_1
                      (underlyingType,pTVar3,&(this->fields)._genericCollectionDefinitionType,
                       (MethodInfo *)0x0);
    if (bVar4 == 0) {
      pTVar5 = (Type__Class *)&stack0xfffffff8;
      pTVar3 = (this->fields)._._UnderlyingType_k__BackingField;
      Json::Utilities::ReflectionUtils::ReflectionUtils_GetDictionaryKeyValueTypes
                (pTVar3,(Type **)pTVar5,(Type **)&stack0xfffffff4,(MethodInfo *)0x0);
code_?:
      (this->fields)._DictionaryKeyType_k__BackingField = (Type *)pTVar5;
      func_?();
      (this->fields)._DictionaryValueType_k__BackingField = pTVar3;
      func_?();
      left._source = (CancellationTokenSource *)(this->fields)._DictionaryValueType_k__BackingField;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar4 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                        (left,(CancellationToken)0x0,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        bVar4 = Json::Utilities::ReflectionUtils::ReflectionUtils_IsNullableType
                          ((this->fields)._DictionaryValueType_k__BackingField,(MethodInfo *)0x0);
        (this->fields)._isDictionaryValueTypeNullableType = bVar4;
      }
      pTVar3 = (this->fields)._._UnderlyingType_k__BackingField;
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      if (pTVar3 == (Type *)0x0) goto code_?;
      cVar6 = (*(pTVar3->klass->vtable).get_IsGenericType.methodPtr)();
      if (cVar6 == '\0') {
code_?:
        pIVar2 = TypeRef__System__Collections__IDictionary;
        pTVar3 = (this->fields)._._UnderlyingType_k__BackingField;
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        right = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
        bVar4 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                          ((Object **)pTVar3,(Object **)right,(MethodInfo *)0x0);
        pIVar2 = TypeRef__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (bVar4 == 0) {
          return;
        }
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
        (this->fields)._._CreatedType_k__BackingField = pTVar3;
        func_?();
        return;
      }
      pTVar3 = (Type *)(*(pTVar3->klass->vtable).GetGenericTypeDefinition.methodPtr)();
      pIVar2 = TypeRef__System__Collections__Generic__IDictionary;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pTVar5 = (Type__Class *)
               mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
      bVar4 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                        ((Object **)pTVar3,(Object **)pTVar5,(MethodInfo *)0x0);
      pIVar2 = TypeRef__System__Collections__Generic__Dictionary;
      if (bVar4 == 0) goto code_?;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      mscorlib.dll::System::Type::Type_GetTypeFromHandle
                ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
      innerTypes = (Type__Array *)func_?();
      if (innerTypes == (Type__Array *)0x0) goto code_?;
      if ((pTVar5 != (Type__Class *)0x0) && (iVar7 = func_?(), iVar7 == 0))
      goto code_?;
      if (innerTypes->max_length != 0) {
        innerTypes->vector[0] = (Type *)pTVar5;
        func_?();
        if ((pTVar3 != (Type *)0x0) && (iVar7 = func_?(), iVar7 == 0))
        goto code_?;
        if (1 < innerTypes->max_length) {
          innerTypes->vector[1] = pTVar3;
          func_?();
          pTVar3 = Json::Utilities::ReflectionUtils::ReflectionUtils_MakeGenericType
                             ((Type *)0x0,innerTypes,(MethodInfo *)0x0);
          (this->fields)._._CreatedType_k__BackingField = pTVar3;
          func_?();
          return;
        }
      }
    }
    else {
      pTVar3 = (this->fields)._genericCollectionDefinitionType;
      if ((pTVar3 == (Type *)0x0) ||
         (iVar7 = (*(pTVar3->klass->vtable).GetGenericArguments.methodPtr)(), iVar7 == 0))
      goto code_?;
      if (*(int *)(iVar7 + 0xc) != 0) {
        pTVar3 = (this->fields)._genericCollectionDefinitionType;
        pTVar5 = *(Type__Class **)(iVar7 + 0x10);
        if ((pTVar3 == (Type *)0x0) ||
           (iVar7 = (*(pTVar3->klass->vtable).GetGenericArguments.methodPtr)(), iVar7 == 0))
        goto code_?;
        if (1 < *(uint *)(iVar7 + 0xc)) {
          pTVar3 = *(Type **)(iVar7 + 0x14);
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


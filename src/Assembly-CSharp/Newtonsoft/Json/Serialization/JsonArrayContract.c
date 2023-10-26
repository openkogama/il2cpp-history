
/* IWrappedCollection CreateWrapper(Object) */

IWrappedCollection *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonArrayContract::
JsonArrayContract_CreateWrapper(JsonArrayContract *this,Object *list,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__CollectionWrapper<System::Object>__CollectionWrapper_System__Collections__IList_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__CollectionWrapper<System::Object>);
    func_?(&
                    System__Collections__Generic__IEnumerable<System::Object>_MethodInfo__System__Linq__Enumerable__Cast<System::Object>_System__Collections__IEnumerable_
                   );
    func_?(&
                    System__Collections__Generic__List<System::Object>_MethodInfo__System__Linq__Enumerable__ToList<System::Object>_System__Collections__Generic__IEnumerable<System::Object>_
                   );
    func_?(&TypeInfo__System__Collections__ICollection);
    func_?(&TypeInfo__System__Collections__IEnumerable);
    func_?(&TypeInfo__System__Collections__IList);
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__IWrappedCollection);
    func_?(&TypeInfo__System__Object);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  iVar1 = func_?(list,TypeInfo__System__Collections__IList);
  if (iVar1 == 0) {
code_?:
    this_00 = (this->fields)._._UnderlyingType_k__BackingField;
    if (this_00 == (Type *)0x0) goto code_?;
    bVar2 = mscorlib.dll::System::Type::Type_get_IsArray(this_00,(MethodInfo *)0x0);
    if (bVar2 != 0) goto code_?;
    CVar3._source = (CancellationTokenSource *)(this->fields)._genericCollectionDefinitionType;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    bVar2 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                      (CVar3,(CancellationToken)0x0,(MethodInfo *)0x0);
    pMVar4 = 
    System__Collections__Generic__IEnumerable<System::Object>_MethodInfo__System__Linq__Enumerable__Cast<System::Object>_System__Collections__IEnumerable_
    ;
    pIVar5 = (IList__Class *)TypeInfo__System__Collections__IEnumerable;
    if (bVar2 == 0) {
      if (list == (Object *)0x0) {
        source = (IEnumerable *)0x0;
      }
      else {
        source = (IEnumerable *)func_?(list,TypeInfo__System__Collections__IEnumerable);
        if (source == (IEnumerable *)0x0) goto code_?;
      }
      source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_4(source,pMVar4);
      unaff_EBX = (IList__Class *)
                  System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_5
                            (source_00,
                             System__Collections__Generic__List<System::Object>_MethodInfo__System__Linq__Enumerable__ToList<System::Object>_System__Collections__Generic__IEnumerable<System::Object>_
                            );
      CVar3._source = (CancellationTokenSource *)(this->fields)._CollectionItemType_k__BackingField;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Type);
      }
      bVar2 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                        (CVar3,(CancellationToken)0x0,(MethodInfo *)0x0);
      pIVar5 = unaff_EBX;
      pIVar6 = (IList__Class *)this;
      if (bVar2 != 0) {
        list = (Object *)(this->fields)._CollectionItemType_k__BackingField;
        if (unaff_EBX == (IList__Class *)0x0) goto code_?;
        length = func_?(1,TypeInfo__System__Collections__ICollection,unaff_EBX);
        pIVar5 = (IList__Class *)
                 mscorlib.dll::System::Array::Array_CreateInstance_1
                           ((Type *)list,length,(MethodInfo *)0x0);
        for (list = (Object *)0x0;
            iVar1 = func_?(1,TypeInfo__System__Collections__ICollection),
            this = (JsonArrayContract *)TypeInfo__System__Collections__IList,
            pIVar6 = (IList__Class *)list, (int)list < iVar1;
            list = (Object *)((int)&(((IList__Class *)list)->_0).image + 1)) {
          pIVar7 = (unaff_EBX->_0).image;
          uVar8 = 0;
          uVar9 = *(ushort *)((int)&pIVar7[4].name + 2);
          if (uVar9 != 0) {
            do {
              if (*(IList__Class **)(pIVar7[2].name + (uint)uVar8 * 8) ==
                  TypeInfo__System__Collections__IList) {
                pIVar7 = (unaff_EBX->_0).image;
                puVar10 = &pIVar7[4].typeCount + *(int *)(pIVar7[2].name + (uint)uVar8 * 8 + 4) * 2
                ;
                goto code_?;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar9);
          }
          puVar10 = (uint32_t *)func_?(unaff_EBX,TypeInfo__System__Collections__IList,0);
code_?:
          value = (Object *)(*(code *)*puVar10)(unaff_EBX,list,puVar10[1]);
          if (pIVar5 == (IList__Class *)0x0) goto code_?;
          mscorlib.dll::System::Array::Array_SetValue_5
                    ((Array *)pIVar5,value,(int32_t)list,(MethodInfo *)0x0);
        }
      }
      this = (JsonArrayContract *)pIVar6;
      unaff_EBX = pIVar5;
      this_01 = (CollectionWrapper_1_System_Object_ *)
                func_?(
                               TypeInfo__Newtonsoft__Json__Utilities__CollectionWrapper<System::Object>
                               );
      list = (Object *)0x0;
      if (this_01 != (CollectionWrapper_1_System_Object_ *)0x0) {
        Json::Utilities::CollectionWrapper`1[System::Object]::
        CollectionWrapper_1_System_Object___ctor_1
                  (this_01,(IList *)unaff_EBX,
                   MethodInfo__Newtonsoft__Json__Utilities__CollectionWrapper<System::Object>__CollectionWrapper_System__Collections__IList_
                  );
        return (IWrappedCollection *)this_01;
      }
code_?:
      func_?();
      pIVar5 = unaff_EBX;
      goto code_?;
    }
    JsonArrayContract_EnsureGenericWrapperCreator(this,(MethodInfo *)0x0);
    unaff_EBX = (IList__Class *)(this->fields)._genericWrapperCreator;
    this = (JsonArrayContract *)func_?(TypeInfo__System__Object,1);
    if ((IList__Class *)this == (IList__Class *)0x0) goto code_?;
    if ((list != (Object *)0x0) &&
       (iVar1 = func_?(list,(((Type__Class *)(((IList__Class *)this)->_0).image)->_0).
                                     element_class), iVar1 == 0)) goto code_?;
    if ((((IList__Class *)this)->_0).namespaze != (char *)0x0) {
      (((IList__Class *)this)->_0).byval_arg.data.typeHandle = (Il2CppMetadataTypeHandle)list;
      func_?(&(((IList__Class *)this)->_0).byval_arg,list);
      if (unaff_EBX != (IList__Class *)0x0) {
        uVar11._0_2_ = (unaff_EBX->_0).byval_arg.attrs;
        uVar11._2_1_ = (unaff_EBX->_0).byval_arg.type;
        uVar11._3_1_ = (unaff_EBX->_0).byval_arg.field_0x7;
        list = (Object *)
               (*(code *)(unaff_EBX->_0).namespaze)((unaff_EBX->_0).element_class,0,this,uVar11);
        this = (JsonArrayContract *)TypeInfo__Newtonsoft__Json__Utilities__IWrappedCollection;
        if ((IList__Class *)list == (IList__Class *)0x0) {
          return (IWrappedCollection *)0x0;
        }
        pIVar12 = (IWrappedCollection *)
                  func_?(list,TypeInfo__Newtonsoft__Json__Utilities__IWrappedCollection);
        if (pIVar12 != (IWrappedCollection *)0x0) {
          return pIVar12;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  else {
    unaff_EBX = (IList__Class *)(this->fields)._CollectionItemType_k__BackingField;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    bVar2 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                      ((Object **)unaff_EBX,(Object **)0x0,(MethodInfo *)0x0);
    if ((bVar2 == 0) && ((this->fields)._isCollectionItemTypeNullableType != 0))
    goto code_?;
code_?:
    this = (JsonArrayContract *)
           func_?(TypeInfo__Newtonsoft__Json__Utilities__CollectionWrapper<System::Object>)
    ;
    pMVar4 = 
    MethodInfo__Newtonsoft__Json__Utilities__CollectionWrapper<System::Object>__CollectionWrapper_System__Collections__IList_
    ;
    pIVar5 = TypeInfo__System__Collections__IList;
    if ((IList__Class *)this == (IList__Class *)0x0) goto code_?;
    if (list == (Object *)0x0) {
      Json::Utilities::CollectionWrapper`1[System::Object]::
      CollectionWrapper_1_System_Object___ctor_1
                ((CollectionWrapper_1_System_Object_ *)this,(IList *)0x0,
                 MethodInfo__Newtonsoft__Json__Utilities__CollectionWrapper<System::Object>__CollectionWrapper_System__Collections__IList_
                );
      return (IWrappedCollection *)(IList__Class *)this;
    }
    list_00 = (IList *)func_?(list,TypeInfo__System__Collections__IList);
    if (list_00 != (IList *)0x0) {
      Json::Utilities::CollectionWrapper`1[System::Object]::
      CollectionWrapper_1_System_Object___ctor_1
                ((CollectionWrapper_1_System_Object_ *)this,list_00,pMVar4);
      return (IWrappedCollection *)(IList__Class *)this;
    }
code_?:
    func_?(list,pIVar5);
code_?:
    uVar11 = func_?(0);
    func_?(uVar11);
  }
  func_?();
code_?:
  func_?(list,this);
  pcVar13 = (code *)swi(3);
  pIVar12 = (IWrappedCollection *)(*pcVar13)();
  return pIVar12;
}


/* Void EnsureGenericWrapperCreator() */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonArrayContract::
     JsonArrayContract_EnsureGenericWrapperCreator(JsonArrayContract *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__Newtonsoft__Json__Utilities__CollectionWrapper);
    func_?(&TypeRef__System__Collections__Generic__ICollection);
    func_?(&TypeRef__System__Collections__Generic__IEnumerable);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    func_?(&TypeRef__System__Collections__Generic__List);
    func_?(&
                    Newtonsoft__Json__Utilities__MethodCall<System::Object,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateMethodCall<System::Object>_System__Reflection__MethodBase_
                   );
    func_?(&TypeInfo__System__Type);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  pJVar1 = this;
  pTVar2 = (this->fields)._genericWrapperType;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  bVar3 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                    ((Object **)pTVar2,(Object **)0x0,(MethodInfo *)0x0);
  pIVar4 = TypeRef__Newtonsoft__Json__Utilities__CollectionWrapper;
  if (bVar3 == 0) {
    return;
  }
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = (JsonArrayContract *)
         mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)pIVar4,(MethodInfo *)0x0);
  pTVar5 = (Type__Array *)func_?(TypeInfo__System__Type,1);
  pTVar2 = (pJVar1->fields)._CollectionItemType_k__BackingField;
  if (pTVar5 == (Type__Array *)0x0) goto code_?;
  if ((pTVar2 == (Type *)0x0) || (iVar6 = func_?(), iVar6 != 0)) {
    if (pTVar5->max_length == 0) goto code_?;
    pTVar5->vector[0] = pTVar2;
    func_?();
    pTVar2 = Json::Utilities::ReflectionUtils::ReflectionUtils_MakeGenericType
                       ((Type *)this,pTVar5,(MethodInfo *)0x0);
    (pJVar1->fields)._genericWrapperType = pTVar2;
    func_?(&(pJVar1->fields)._genericWrapperType,pTVar2);
    pTVar2 = (pJVar1->fields)._genericCollectionDefinitionType;
    this = (JsonArrayContract *)0x0;
    genericClassDefinition =
         mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)TypeRef__System__Collections__Generic__List,(MethodInfo *)0x0
                   );
    bVar3 = Json::Utilities::ReflectionUtils::ReflectionUtils_InheritsGenericDefinition_1
                      (pTVar2,genericClassDefinition,(Type **)&this,(MethodInfo *)0x0);
    if (bVar3 != 0) {
code_?:
      pIVar4 = TypeRef__System__Collections__Generic__ICollection;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      this = (JsonArrayContract *)
             mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar4,(MethodInfo *)0x0);
      pTVar5 = (Type__Array *)func_?();
      pTVar2 = (pJVar1->fields)._CollectionItemType_k__BackingField;
      if (pTVar5 == (Type__Array *)0x0) goto code_?;
      if ((pTVar2 == (Type *)0x0) || (iVar6 = func_?(), iVar6 != 0)) {
        if (pTVar5->max_length == 0) goto code_?;
        pTVar5->vector[0] = pTVar2;
        func_?();
        pTVar2 = Json::Utilities::ReflectionUtils::ReflectionUtils_MakeGenericType
                           ((Type *)this,pTVar5,(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
    pTVar2 = (pJVar1->fields)._genericCollectionDefinitionType;
    if (pTVar2 == (Type *)0x0) goto code_?;
    left = (Object **)(*(pTVar2->klass->vtable).GetGenericTypeDefinition.methodPtr)();
    pIVar4 = TypeRef__System__Collections__Generic__IEnumerable;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar4,(MethodInfo *)0x0);
    bVar3 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                      (left,(Object **)pTVar2,(MethodInfo *)0x0);
    if (bVar3 != 0) goto code_?;
    pTVar2 = (pJVar1->fields)._genericCollectionDefinitionType;
code_?:
    this = (JsonArrayContract *)(pJVar1->fields)._genericWrapperType;
    pTVar5 = (Type__Array *)func_?();
    if (pTVar5 == (Type__Array *)0x0) {
code_?:
      func_?();
      goto code_?;
    }
    if ((pTVar2 == (Type *)0x0) || (iVar6 = func_?(), iVar6 != 0)) {
      if (pTVar5->max_length == 0) goto code_?;
      pTVar5->vector[0] = pTVar2;
      func_?();
      if (this != (JsonArrayContract *)0x0) {
        pCVar7 = mscorlib.dll::System::Type::Type_GetConstructor
                           ((Type *)this,pTVar5,(MethodInfo *)0x0);
        if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pRVar8 = JsonTypeReflector::JsonTypeReflector_get_ReflectionDelegateFactory
                           ((MethodInfo *)0x0);
        if (pRVar8 != (ReflectionDelegateFactory *)0x0) {
          puVar9 = &stack0xfffffff4;
          pMVar10 = 
          Newtonsoft__Json__Utilities__MethodCall<System::Object,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateMethodCall<System::Object>_System__Reflection__MethodBase_
          ;
          func_?((&(pRVar8->klass->vtable).Equals)
                          [Newtonsoft__Json__Utilities__MethodCall<System::Object,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateMethodCall<System::Object>_System__Reflection__MethodBase_
                           ->slot].method);
          pMVar11 = (MethodCall_2_System_Object_System_Object_ *)
                    (*(code *)pMVar10)(pRVar8,pCVar7,puVar9);
          (pJVar1->fields)._genericWrapperCreator = pMVar11;
          func_?(&(pJVar1->fields)._genericWrapperCreator,pMVar11);
          return;
        }
      }
      goto code_?;
    }
  }
  else {
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
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Boolean IsTypeGenericCollectionInterface(Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonArrayContract::
     JsonArrayContract_IsTypeGenericCollectionInterface
               (JsonArrayContract *this,Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__System__Collections__Generic__ICollection);
    func_?(&TypeRef__System__Collections__Generic__IEnumerable);
    func_?(&TypeRef__System__Collections__Generic__IList);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (type == (Type *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  cVar3 = (*(type->klass->vtable).get_IsGenericType.methodPtr)
                    (type,(type->klass->vtable).get_IsGenericType.method);
  if (cVar3 == '\0') {
    return 0;
  }
  left = (Object **)
         (*(type->klass->vtable).GetGenericTypeDefinition.methodPtr)
                   (type,(type->klass->vtable).GetGenericTypeDefinition.method);
  pIVar4 = TypeRef__System__Collections__Generic__IList;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  pTVar5 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)pIVar4,(MethodInfo *)0x0);
  bVar2 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                    (left,(Object **)pTVar5,(MethodInfo *)0x0);
  pIVar4 = TypeRef__System__Collections__Generic__ICollection;
  if (bVar2 == 0) {
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar5 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar4,(MethodInfo *)0x0);
    bVar2 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                      (left,(Object **)pTVar5,(MethodInfo *)0x0);
    pIVar4 = TypeRef__System__Collections__Generic__IEnumerable;
    if (bVar2 == 0) {
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pTVar5 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar4,(MethodInfo *)0x0);
      bVar2 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                        (left,(Object **)pTVar5,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  return 1;
}


/* JsonArrayContract(Type) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonArrayContract::
     JsonArrayContract__ctor(JsonArrayContract *this,Type *underlyingType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__System__Collections__Generic__HashSet);
    func_?(&TypeRef__System__Collections__Generic__ICollection);
    func_?(&TypeRef__System__Collections__Generic__IEnumerable);
    func_?(&TypeRef__System__Collections__Generic__List);
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
    uVar1 = func_?(&
                            MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                           );
    func_?(this_00,uVar1);
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
    pIVar2 = TypeRef__System__Collections__Generic__ICollection;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
    bVar4 = Json::Utilities::ReflectionUtils::ReflectionUtils_ImplementsGenericDefinition_1
                      (underlyingType,pTVar3,&(this->fields)._genericCollectionDefinitionType,
                       (MethodInfo *)0x0);
    if (bVar4 == 0) {
      cVar5 = (*(underlyingType->klass->vtable).get_IsGenericType.methodPtr)();
      if (cVar5 != '\0') {
        ppOVar6 = (Object **)
                  (*(underlyingType->klass->vtable).GetGenericTypeDefinition.methodPtr)
                            (underlyingType);
        pIVar2 = TypeRef__System__Collections__Generic__IEnumerable;
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Type);
        }
        pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
        bVar4 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                          (ppOVar6,(Object **)pTVar3,(MethodInfo *)0x0);
        pIVar2 = TypeRef__System__Collections__Generic__IEnumerable;
        if (bVar4 != 0) {
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
          (this->fields)._genericCollectionDefinitionType = pTVar3;
          func_?(&(this->fields)._genericCollectionDefinitionType);
          iVar7 = (*(underlyingType->klass->vtable).GetGenericArguments.methodPtr)
                            (underlyingType,
                             (underlyingType->klass->vtable).GetGenericArguments.method);
          goto code_?;
        }
      }
      pTVar3 = Json::Utilities::ReflectionUtils::ReflectionUtils_GetCollectionItemType
                         ((this->fields)._._UnderlyingType_k__BackingField,(MethodInfo *)0x0);
code_?:
      (this->fields)._CollectionItemType_k__BackingField = pTVar3;
      func_?();
      left._source = (CancellationTokenSource *)(this->fields)._CollectionItemType_k__BackingField;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Type);
      }
      bVar4 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                        (left,(CancellationToken)0x0,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        bVar4 = Json::Utilities::ReflectionUtils::ReflectionUtils_IsNullableType
                          ((this->fields)._CollectionItemType_k__BackingField,(MethodInfo *)0x0);
        (this->fields)._isCollectionItemTypeNullableType = bVar4;
      }
      pTVar3 = (this->fields)._._UnderlyingType_k__BackingField;
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?(&TypeInfo__System__Type);
        cRam_? = '\x01';
      }
      if (pTVar3 == (Type *)0x0) goto code_?;
      cVar5 = (*(pTVar3->klass->vtable).get_IsGenericType.methodPtr)();
      if (cVar5 == '\0') {
code_?:
        pIVar2 = TypeRef__System__Collections__Generic__HashSet;
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
        if (pTVar3 == (Type *)0x0) goto code_?;
        cVar5 = (*(pTVar3->klass->vtable).IsAssignableFrom.methodPtr)();
        pIVar2 = TypeRef__System__Collections__Generic__HashSet;
        if (cVar5 == '\0') {
code_?:
          pTVar3 = (this->fields)._._UnderlyingType_k__BackingField;
          if (pTVar3 != (Type *)0x0) {
            bVar4 = mscorlib.dll::System::Type::Type_get_IsArray(pTVar3,(MethodInfo *)0x0);
            if (bVar4 == 0) {
              (this->fields)._IsMultidimensionalArray_k__BackingField = 0;
              return;
            }
            pTVar3 = (this->fields)._._UnderlyingType_k__BackingField;
            if (pTVar3 != (Type *)0x0) {
              pTVar8 = pTVar3->klass;
              pMStack9 = (pTVar8->vtable).GetArrayRank.method;
              iVar7 = (*(pTVar8->vtable).GetArrayRank.methodPtr)();
              (this->fields)._IsMultidimensionalArray_k__BackingField = 1 < iVar7;
              return;
            }
          }
          goto code_?;
        }
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        mscorlib.dll::System::Type::Type_GetTypeFromHandle
                  ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
        innerTypes = (Type__Array *)func_?();
        pTVar3 = (this->fields)._CollectionItemType_k__BackingField;
        if (innerTypes == (Type__Array *)0x0) goto code_?;
        if ((pTVar3 == (Type *)0x0) || (iVar7 = func_?(), iVar7 != 0))
        goto code_?;
        goto code_?;
      }
      ppOVar6 = (Object **)(*(pTVar3->klass->vtable).GetGenericTypeDefinition.methodPtr)(pTVar3);
      pIVar2 = TypeRef__System__Collections__Generic__IList;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Type);
      }
      pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
      bVar4 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                        (ppOVar6,(Object **)pTVar3,(MethodInfo *)0x0);
      pIVar2 = TypeRef__System__Collections__Generic__ICollection;
      if (bVar4 == 0) {
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
        bVar4 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                          (ppOVar6,(Object **)pTVar3,(MethodInfo *)0x0);
        pIVar2 = TypeRef__System__Collections__Generic__IEnumerable;
        if (bVar4 == 0) {
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
          bVar4 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                            (ppOVar6,(Object **)pTVar3,(MethodInfo *)0x0);
          if (bVar4 == 0) goto code_?;
        }
      }
      pIVar2 = TypeRef__System__Collections__Generic__List;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      mscorlib.dll::System::Type::Type_GetTypeFromHandle
                ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
      innerTypes = (Type__Array *)func_?(TypeInfo__System__Type);
      pTVar3 = (this->fields)._CollectionItemType_k__BackingField;
      if (innerTypes == (Type__Array *)0x0) goto code_?;
      if ((pTVar3 != (Type *)0x0) && (iVar7 = func_?(), iVar7 == 0)) goto code_?;
code_?:
      if (innerTypes->max_length != 0) {
        innerTypes->vector[0] = pTVar3;
        func_?();
        pTVar3 = Json::Utilities::ReflectionUtils::ReflectionUtils_MakeGenericType
                           (pTVar3,innerTypes,(MethodInfo *)0x0);
        (this->fields)._._CreatedType_k__BackingField = pTVar3;
        func_?(&(this->fields)._._CreatedType_k__BackingField);
        goto code_?;
      }
    }
    else {
      pTVar3 = (this->fields)._genericCollectionDefinitionType;
      if (pTVar3 == (Type *)0x0) goto code_?;
      iVar7 = (*(pTVar3->klass->vtable).GetGenericArguments.methodPtr)();
code_?:
      if (iVar7 == 0) goto code_?;
      if (*(int *)(iVar7 + 0xc) != 0) {
        pTVar3 = *(Type **)(iVar7 + 0x10);
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


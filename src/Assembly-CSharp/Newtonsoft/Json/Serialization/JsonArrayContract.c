
/* IWrappedCollection CreateWrapper(Object) */

IWrappedCollection *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonArrayContract::
JsonArrayContract_CreateWrapper(JsonArrayContract *this,Object *list,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = func_?(list,TypeInfo__System__Collections__IList);
  if ((iVar1 != 0) &&
     (((this->fields)._CollectionItemType_k__BackingField == (Type *)0x0 ||
      ((this->fields)._isCollectionItemTypeNullableType == 0)))) {
code_?:
    pCVar2 = (CollectionWrapper_1_System_Object_ *)
             func_?(
                            TypeInfo__Newtonsoft__Json__Utilities__CollectionWrapper<System::Object>
                            );
    if (list == (Object *)0x0) {
      list_01 = (IList *)0x0;
code_?:
      Json::Utilities::CollectionWrapper`1[System::Object]::CollectionWrapper_1_System_Object___ctor
                (pCVar2,list_01,
                 MethodInfo__Newtonsoft__Json__Utilities__CollectionWrapper<System::Object>__CollectionWrapper_System__Collections__IList_
                );
      return (IWrappedCollection *)pCVar2;
    }
    list_01 = (IList *)func_?();
    if (list_01 != (IList *)0x0) goto code_?;
    goto code_?;
  }
  this_00 = (MVSimpleOneSeatVehicle *)(this->fields)._._UnderlyingType_k__BackingField;
  if (this_00 == (MVSimpleOneSeatVehicle *)0x0) goto code_?;
  MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_DeSelect(this_00,(MethodInfo *)0x0);
  unaff_EBX = TypeInfo__System__Collections__IEnumerable;
  if (extraout_AL != '\0') goto code_?;
  if ((this->fields)._genericCollectionDefinitionType == (Type *)0x0) {
    if (list == (Object *)0x0) {
      source = (IEnumerable *)0x0;
code_?:
      source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_8
                            (source,
                             System__Collections__Generic__IEnumerable<System::Object>_MethodInfo__System__Linq__Enumerable__Cast<System::Object>_System__Collections__IEnumerable_
                            );
      unaff_EBX = (IEnumerable__Class *)
                  System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
                            ((IEnumerable_1_UseInteractor_ *)source_00,
                             System__Collections__Generic__List<System::Object>_MethodInfo__System__Linq__Enumerable__ToList<System::Object>_System__Collections__Generic__IEnumerable<System::Object>_
                            );
      list = (Object *)(this->fields)._CollectionItemType_k__BackingField;
      list_00 = unaff_EBX;
      if ((Type *)list == (Type *)0x0) {
code_?:
        pCVar2 = (CollectionWrapper_1_System_Object_ *)
                 func_?(
                                TypeInfo__Newtonsoft__Json__Utilities__CollectionWrapper<System::Object>
                                );
        Json::Utilities::CollectionWrapper`1[System::Object]::
        CollectionWrapper_1_System_Object___ctor
                  (pCVar2,(IList *)list_00,
                   MethodInfo__Newtonsoft__Json__Utilities__CollectionWrapper<System::Object>__CollectionWrapper_System__Collections__IList_
                  );
        return (IWrappedCollection *)pCVar2;
      }
      if (unaff_EBX != (IEnumerable__Class *)0x0) {
        length = func_?(0,TypeInfo__System__Collections__ICollection,unaff_EBX);
        list_00 = (IEnumerable__Class *)
                  mscorlib.dll::System::Array::Array_CreateInstance
                            ((Type *)list,length,(MethodInfo *)0x0);
        for (list = (Object *)0x0; iVar1 = func_?(), (int)list < iVar1;
            list = (Object *)((int)&((Type *)list)->klass + 1)) {
          pMVar3 = (MethodCall_2_System_Object_System_Object___Class *)(unaff_EBX->_0).image;
          uVar4 = 0;
          uVar5._0_1_ = (pMVar3->_1).rank;
          uVar5._1_1_ = (pMVar3->_1).minimumAlignment;
          if (uVar5 != 0) {
            do {
              if (pMVar3->interfaceOffsets[uVar4].interfaceType ==
                  (Il2CppClass *)TypeInfo__System__Collections__IList) {
                ppMVar6 = &(&(pMVar3->vtable).GetHashCode)[pMVar3->interfaceOffsets[uVar4].offset].
                           method;
                goto code_?;
              }
              uVar4 = uVar4 + 1;
            } while (uVar4 < uVar5);
          }
          ppMVar6 = (MethodInfo **)func_?(unaff_EBX,TypeInfo__System__Collections__IList,2)
          ;
code_?:
          this_01 = (Array *)ppMVar6[1];
          pOVar7 = (Object *)(*(code *)*ppMVar6)(unaff_EBX,list);
          if (this_01 == (Array *)0x0) goto code_?;
          list_00 = (IEnumerable__Class *)0x0;
          mscorlib.dll::System::Array::Array_SetValue_4
                    (this_01,pOVar7,(int32_t)list,(MethodInfo *)0x0);
        }
        goto code_?;
      }
      goto code_?;
    }
    source = (IEnumerable *)func_?(list,TypeInfo__System__Collections__IEnumerable);
    if (source != (IEnumerable *)0x0) goto code_?;
code_?:
    func_?(list,unaff_EBX);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
  }
  else {
    JsonArrayContract_EnsureGenericWrapperCreator(this,(MethodInfo *)0x0);
    unaff_EBX = (IEnumerable__Class *)(this->fields)._genericWrapperCreator;
    args = (Object__Array *)func_?(TypeInfo__System__Object,1);
    if (args == (Object__Array *)0x0) {
code_?:
      func_?(0);
      goto code_?;
    }
    if ((list != (Object *)0x0) &&
       (iVar1 = func_?(list,(args->klass->_0).element_class), iVar1 == 0))
    goto code_?;
    if (args->max_length != 0) {
      args->vector[0] = list;
      if (unaff_EBX != (IEnumerable__Class *)0x0) {
        pOVar7 = Json::Utilities::MethodCall`2[System::Object,System::Object]::
                 MethodCall_2_System_Object_System_Object__Invoke
                           ((MethodCall_2_System_Object_System_Object_ *)unaff_EBX,(Object *)0x0,
                            args,
                            MethodInfo__Newtonsoft__Json__Utilities__MethodCall<System::Object,_System::Object>__Invoke_System__Object__System__Object____
                           );
        if (pOVar7 == (Object *)0x0) {
          return (IWrappedCollection *)0x0;
        }
        pIVar9 = (IWrappedCollection *)func_?();
        if (pIVar9 != (IWrappedCollection *)0x0) {
          return pIVar9;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  uVar8 = func_?(0,0);
  func_?(uVar8);
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  pIVar9 = (IWrappedCollection *)(*pcVar10)();
  return pIVar9;
}


/* Void EnsureGenericWrapperCreator() */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonArrayContract::
     JsonArrayContract_EnsureGenericWrapperCreator(JsonArrayContract *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = TypeRef__Newtonsoft__Json__Utilities__CollectionWrapper;
  if ((this->fields)._genericWrapperType != (Type *)0x0) {
    return;
  }
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
  pTVar3 = (Type__Array *)func_?(TypeInfo__System__Type,1);
  pTVar4 = (this->fields)._CollectionItemType_k__BackingField;
  if (pTVar3 == (Type__Array *)0x0) goto code_?;
  if ((pTVar4 == (Type *)0x0) ||
     (iVar5 = func_?(pTVar4,(pTVar3->klass->_0).element_class), iVar5 != 0)) {
    if (pTVar3->max_length == 0) goto code_?;
    pTVar3->vector[0] = pTVar4;
    pTVar2 = Json::Utilities::ReflectionUtils::ReflectionUtils_MakeGenericType
                       (pTVar2,pTVar3,(MethodInfo *)0x0);
    pTVar4 = (this->fields)._genericCollectionDefinitionType;
    (this->fields)._genericWrapperType = pTVar2;
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)TypeRef__System__Collections__Generic__List,
                        (MethodInfo *)0x0);
    bVar6 = Json::Utilities::ReflectionUtils::ReflectionUtils_InheritsGenericDefinition
                      (pTVar4,pTVar2,(MethodInfo *)0x0);
    if (bVar6 != 0) {
code_?:
      pIVar1 = TypeRef__System__Collections__Generic__ICollection;
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?();
      }
      pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
      pTVar3 = (Type__Array *)func_?(TypeInfo__System__Type);
      pTVar4 = (this->fields)._CollectionItemType_k__BackingField;
      if (pTVar3 == (Type__Array *)0x0) goto code_?;
      if ((pTVar4 != (Type *)0x0) &&
         (iVar5 = func_?(pTVar4,(pTVar3->klass->_0).element_class), iVar5 == 0))
      goto code_?;
      if (pTVar3->max_length != 0) {
        pTVar3->vector[0] = pTVar4;
        pTVar4 = Json::Utilities::ReflectionUtils::ReflectionUtils_MakeGenericType
                           (pTVar2,pTVar3,(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
    pTVar4 = (this->fields)._genericCollectionDefinitionType;
    if (pTVar4 == (Type *)0x0) goto code_?;
    pTVar4 = (Type *)(*(code *)(pTVar4->klass->vtable).GetGenericTypeDefinition.method)();
    pIVar1 = TypeRef__System__Collections__Generic__IEnumerable;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
    if (pTVar4 == pTVar2) goto code_?;
    pTVar4 = (this->fields)._genericCollectionDefinitionType;
code_?:
    pTVar2 = (this->fields)._genericWrapperType;
    pTVar3 = (Type__Array *)func_?(TypeInfo__System__Type);
    if (pTVar3 == (Type__Array *)0x0) {
code_?:
      func_?(0);
      goto code_?;
    }
    if ((pTVar4 == (Type *)0x0) ||
       (iVar5 = func_?(pTVar4,(pTVar3->klass->_0).element_class), iVar5 != 0)) {
      if (pTVar3->max_length == 0) goto code_?;
      pTVar3->vector[0] = pTVar4;
      if (pTVar2 != (Type *)0x0) {
        pCVar7 = mscorlib.dll::System::Type::Type_GetConstructor(pTVar2,pTVar3,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0))
        {
          func_?();
        }
        pRVar8 = JsonTypeReflector::JsonTypeReflector_get_ReflectionDelegateFactory
                           ((MethodInfo *)0x0);
        if (pRVar8 != (ReflectionDelegateFactory *)0x0) {
          puVar9 = (undefined4 *)
                    func_?((&(pRVar8->klass->vtable).Finalize)
                                    [Newtonsoft__Json__Utilities__MethodCall<System::Object,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateMethodCall<System::Object>_System__Reflection__MethodBase_
                                     ->flags].methodPtr,
                                    Newtonsoft__Json__Utilities__MethodCall<System::Object,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateMethodCall<System::Object>_System__Reflection__MethodBase_
                                   );
          pMVar10 = (MethodCall_2_System_Object_System_Object_ *)
                    (*(code *)*puVar9)(pRVar8,pCVar7,puVar9);
          (this->fields)._genericWrapperCreator = pMVar10;
          return;
        }
      }
      goto code_?;
    }
  }
  else {
code_?:
    uVar11 = func_?(0,0);
    func_?(uVar11);
code_?:
    uVar11 = func_?(0);
    func_?(uVar11);
code_?:
    uVar11 = func_?(0,0);
    func_?(uVar11);
code_?:
    uVar11 = func_?(0);
    func_?(uVar11);
  }
  uVar11 = func_?(0,0);
  func_?(uVar11);
code_?:
  uVar11 = func_?(0,0);
  func_?(uVar11);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (type == (Type *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  cVar3 = (*(code *)(type->klass->vtable).get_IsGenericType.method)
                    (type,(type->klass->vtable).MakeGenericType.methodPtr);
  if (cVar3 == '\0') {
    return 0;
  }
  pTVar4 = (Type *)(*(code *)(type->klass->vtable).GetGenericTypeDefinition.method)
                             (type,(type->klass->vtable).get_IsGenericType.methodPtr);
  pIVar5 = TypeRef__System__Collections__Generic__IList;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  pTVar6 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)pIVar5,(MethodInfo *)0x0);
  pIVar5 = TypeRef__System__Collections__Generic__ICollection;
  if (pTVar4 != pTVar6) {
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    pTVar6 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar5,(MethodInfo *)0x0);
    pIVar5 = TypeRef__System__Collections__Generic__IEnumerable;
    if (pTVar4 != pTVar6) {
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?();
      }
      pTVar6 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar5,(MethodInfo *)0x0);
      return pTVar4 == pTVar6;
    }
  }
  return 1;
}


/* JsonArrayContract(Type) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonArrayContract::
     JsonArrayContract__ctor(JsonArrayContract *this,Type *underlyingType,MethodInfo *method)

{
  pJVar1 = this;
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
  pIVar2 = TypeRef__System__Collections__Generic__ICollection;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?();
  }
  pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
  implementingType = &(this->fields)._genericCollectionDefinitionType;
  bVar4 = Json::Utilities::ReflectionUtils::ReflectionUtils_ImplementsGenericDefinition_1
                    (underlyingType,pTVar3,implementingType,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    if (underlyingType == (Type *)0x0) {
code_?:
      func_?();
code_?:
      func_?();
      func_?();
      goto code_?;
    }
    cVar5 = (*(code *)(underlyingType->klass->vtable).get_IsGenericType.method)();
    if (cVar5 != '\0') {
      (*(code *)(underlyingType->klass->vtable).GetGenericTypeDefinition.method)();
      pIVar2 = TypeRef__System__Collections__Generic__IEnumerable;
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?();
      }
      pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
      handle = TypeRef__System__Collections__Generic__IEnumerable;
      if ((Type *)pIVar2 != pTVar3) goto code_?;
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?();
      }
      pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      (this->fields)._genericCollectionDefinitionType = pTVar3;
      iVar6 = (*(code *)(underlyingType->klass->vtable).GetGenericArguments.method)();
      if (iVar6 == 0) goto code_?;
      if (*(int *)(iVar6 + 0xc) != 0) goto code_?;
      goto code_?;
    }
code_?:
    pTVar3 = Json::Utilities::ReflectionUtils::ReflectionUtils_GetCollectionItemType
                       ((this->fields)._._UnderlyingType_k__BackingField,(MethodInfo *)0x0);
code_?:
    (this->fields)._CollectionItemType_k__BackingField = pTVar3;
    if (pTVar3 != (Type *)0x0) {
      bVar4 = Json::Utilities::ReflectionUtils::ReflectionUtils_IsNullableType
                        (pTVar3,(MethodInfo *)0x0);
      (this->fields)._isCollectionItemTypeNullableType = bVar4;
    }
    pTVar3 = (this->fields)._._UnderlyingType_k__BackingField;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (pTVar3 == (Type *)0x0) goto code_?;
    cVar5 = (*(code *)(pTVar3->klass->vtable).get_IsGenericType.method)();
    if (cVar5 == '\0') {
code_?:
      pIVar2 = TypeRef__System__Collections__Generic__HashSet;
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?();
      }
      pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
      if (pTVar3 != (Type *)0x0) {
        cVar5 = (*(code *)(pTVar3->klass->vtable).IsAssignableFrom.method)();
        pIVar2 = TypeRef__System__Collections__Generic__HashSet;
        if (cVar5 == '\0') {
code_?:
          this_00 = (MVSimpleOneSeatVehicle *)(pJVar1->fields)._._UnderlyingType_k__BackingField;
          if (this_00 != (MVSimpleOneSeatVehicle *)0x0) {
            MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_DeSelect(this_00,(MethodInfo *)0x0);
            if (extraout_AL == '\0') {
              (pJVar1->fields)._IsMultidimensionalArray_k__BackingField = 0;
              return;
            }
            pTStack7 = (pJVar1->fields)._._UnderlyingType_k__BackingField;
            if (pTStack7 != (Type *)0x0) {
              pIStack8 = (pTStack7->klass->vtable).__unknown_12.methodPtr;
              iVar6 = (*(code *)(pTStack7->klass->vtable).GetArrayRank.method)();
              (pJVar1->fields)._IsMultidimensionalArray_k__BackingField = 1 < iVar6;
              return;
            }
          }
        }
        else {
          if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Type->_1).cctor_started == 0)) {
            func_?();
          }
          pJVar9 = (JsonArrayContract *)
                   mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
          innerTypes = (Type__Array *)func_?();
          pTVar3 = (this->fields)._CollectionItemType_k__BackingField;
          if (innerTypes != (Type__Array *)0x0) {
            this = pJVar9;
            if ((pTVar3 != (Type *)0x0) && (iVar6 = func_?(), iVar6 == 0))
            goto code_?;
            goto code_?;
          }
        }
      }
      goto code_?;
    }
    pTVar3 = (Type *)(*(code *)(pTVar3->klass->vtable).GetGenericTypeDefinition.method)();
    pIVar2 = TypeRef__System__Collections__Generic__IList;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    pTVar10 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
    pIVar2 = TypeRef__System__Collections__Generic__ICollection;
    if (pTVar3 == pTVar10) {
code_?:
      bVar11 = true;
    }
    else {
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?();
      }
      pTVar10 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
      pIVar2 = TypeRef__System__Collections__Generic__IEnumerable;
      if (pTVar3 == pTVar10) goto code_?;
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?();
      }
      pTVar10 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
      bVar11 = pTVar3 == pTVar10;
    }
    pIVar2 = TypeRef__System__Collections__Generic__List;
    if (!bVar11) goto code_?;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    pJVar9 = (JsonArrayContract *)
             mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
    innerTypes = (Type__Array *)func_?();
    pTVar3 = (this->fields)._CollectionItemType_k__BackingField;
    if (innerTypes == (Type__Array *)0x0) goto code_?;
    this = pJVar9;
    if ((pTVar3 != (Type *)0x0) && (iVar6 = func_?(), iVar6 == 0)) goto code_?;
code_?:
    if (innerTypes->max_length != 0) {
      innerTypes->vector[0] = pTVar3;
      pTVar3 = Json::Utilities::ReflectionUtils::ReflectionUtils_MakeGenericType
                         ((Type *)this,innerTypes,(MethodInfo *)0x0);
      (pJVar1->fields)._._CreatedType_k__BackingField = pTVar3;
      goto code_?;
    }
  }
  else {
    pTVar3 = *implementingType;
    if ((pTVar3 == (Type *)0x0) ||
       (iVar6 = (*(code *)(pTVar3->klass->vtable).GetGenericArguments.method)(), iVar6 == 0))
    goto code_?;
    if (*(int *)(iVar6 + 0xc) != 0) {
code_?:
      pTVar3 = *(Type **)(iVar6 + 0x10);
      goto code_?;
    }
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
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


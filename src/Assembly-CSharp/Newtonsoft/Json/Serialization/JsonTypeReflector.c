
/* Type GetAssociateMetadataTypeFromAttribute(Type) */

Type * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonTypeReflector::
       JsonTypeReflector_GetAssociateMetadataTypeFromAttribute(Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  if (TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->static_fields->
      _cachedMetadataTypeAttributeType == (Type *)0x0) {
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    typeName = StringLiteral_System_ComponentModel_DataAnnota;
    typeName_00 = (String *)
                  func_?(StringLiteral_System_ComponentModel_DataAnnota,&UNK_?);
    pTVar1 = mscorlib.dll::System::Type::Type_GetType(typeName_00,(MethodInfo *)0x0);
    if ((pTVar1 == (Type *)0x0) &&
       (pTVar1 = mscorlib.dll::System::Type::Type_GetType(typeName,(MethodInfo *)0x0),
       pTVar1 == (Type *)0x0)) {
      return (Type *)0x0;
    }
    if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
      func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    }
    TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->static_fields->
    _cachedMetadataTypeAttributeType = pTVar1;
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  pTVar1 = TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->static_fields->
           _cachedMetadataTypeAttributeType;
  if (pTVar1 != (Type *)0x0) {
    if (type == (Type *)0x0) {
      func_?(0);
      pcVar2 = (code *)swi(3);
      pTVar1 = (Type *)(*pcVar2)();
      return pTVar1;
    }
    source = (IEnumerable_1_System_Reflection_MemberInfo_ *)
             (*(code *)(type->klass->vtable).__unknown_4.method)
                       (type,pTVar1,1,(type->klass->vtable).__unknown_5.methodPtr);
    pMVar3 = System.Core.dll::System::Linq::Enumerable::Enumerable_SingleOrDefault_5
                       (source,
                        System__Object_MethodInfo__System__Linq__Enumerable__SingleOrDefault<System::Object>_System__Collections__Generic__IEnumerable<System::Object>_
                       );
    if (pMVar3 != (MemberInfo_1 *)0x0) {
      method_00 = TypeInfo__Newtonsoft__Json__Serialization__LateBoundMetadataTypeAttribute;
      this = (ScaleAnimationBase *)func_?();
      ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
      (this->fields)._._._._.m_CachedPtr = pMVar3;
      pSVar4 = this->klass;
      uVar5 = 0;
      uVar6._0_1_ = (pSVar4->_1).rank;
      uVar6._1_1_ = (pSVar4->_1).minimumAlignment;
      if (uVar6 != 0) {
        do {
          if (pSVar4->interfaceOffsets[uVar5].interfaceType ==
              (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__IMetadataTypeAttribute) {
            iVar7 = pSVar4->interfaceOffsets[uVar5].offset;
            pTVar1 = (Type *)(*(code *)(&(this->klass->vtable).Equals)[iVar7].method)
                                       (this,(&(this->klass->vtable).Finalize)[iVar7].methodPtr);
            return pTVar1;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
      puVar8 = (undefined4 *)
               func_?(this,
                               TypeInfo__Newtonsoft__Json__Serialization__IMetadataTypeAttribute,0);
      pTVar1 = (Type *)(*(code *)*puVar8)(this,puVar8[1]);
      return pTVar1;
    }
  }
  return (Type *)0x0;
}


/* Type GetAssociatedMetadataType(Type) */

Type * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonTypeReflector::
       JsonTypeReflector_GetAssociatedMetadataType(Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  this = TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->static_fields->
         AssociatedMetadataTypesCache;
  if (this != (ThreadSafeStore_2_System_Type_System_Type_ *)0x0) {
    pTVar1 = Json::Utilities::ThreadSafeStore`2[System::Type,System::Type]::
             ThreadSafeStore_2_System_Type_System_Type__Get
                       (this,type,
                        MethodInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<System::Type,_System::Type>__Get_System__Type_
                       );
    return pTVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pTVar1 = (Type *)(*pcVar2)();
  return pTVar1;
}


/* Object GetAttribute[Object](Type) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonTypeReflector::
         JsonTypeReflector_GetAttribute(Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  pTVar1 = JsonTypeReflector_GetAssociatedMetadataType(type,(MethodInfo *)0x0);
  if (((pTVar1 != (Type *)0x0) &&
      (pOVar2 = (Object *)(*(code *)(*method->parameters)->data)(pTVar1,1,*method->parameters),
      pOVar2 != (Object *)0x0)) ||
     (pOVar2 = (Object *)(*(code *)(*method->parameters)->data)(type,1,*method->parameters),
     pOVar2 != (Object *)0x0)) {
    return pOVar2;
  }
  if (type != (Type *)0x0) {
    iVar3 = (*(code *)(type->klass->vtable).__unknown_11.method)
                      (type,(type->klass->vtable).IsAssignableFrom.methodPtr);
    uVar4 = 0;
    if (iVar3 != 0) {
      puVar5 = (undefined4 *)(iVar3 + 0x10);
      while( true ) {
        if ((int)*(uint *)(iVar3 + 0xc) <= (int)uVar4) {
          if ((method->parameters[1][0x17].type & 1) == 0) {
            func_?(method->parameters[1]);
          }
          return (Object *)0x0;
        }
        if (*(uint *)(iVar3 + 0xc) <= uVar4) break;
        pOVar2 = (Object *)(*(code *)(*method->parameters)->data)(*puVar5,1,*method->parameters);
        if (pOVar2 != (Object *)0x0) {
          return pOVar2;
        }
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  uVar6 = func_?(0,0);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar7)();
  return pOVar2;
}


/* Object GetAttribute[Object](MemberInfo) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonTypeReflector::
         JsonTypeReflector_GetAttribute_1(MemberInfo_1 *memberInfo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (memberInfo != (MemberInfo_1 *)0x0) {
    pTVar1 = (Type *)(*(code *)(memberInfo->klass->vtable).__unknown.method)
                               (memberInfo,(memberInfo->klass->vtable).__unknown_1.methodPtr);
    if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
      func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    }
    pTVar1 = JsonTypeReflector_GetAssociatedMetadataType(pTVar1,(MethodInfo *)0x0);
    if (((pTVar1 != (Type *)0x0) &&
        (pMVar2 = Json::Utilities::ReflectionUtils::ReflectionUtils_GetMemberInfoFromType
                            (pTVar1,memberInfo,(MethodInfo *)0x0), pMVar2 != (MemberInfo_1 *)0x0))
       && (pOVar3 = (Object *)(*(code *)(*method->parameters)->data)(pMVar2),
          pOVar3 != (Object *)0x0)) {
      return pOVar3;
    }
    pOVar3 = (Object *)(*(code *)(*method->parameters)->data)(memberInfo);
    if (pOVar3 != (Object *)0x0) {
      return pOVar3;
    }
    piVar4 = (int *)(*(code *)(memberInfo->klass->vtable).__unknown.method)();
    if (piVar4 != (int *)0x0) {
      iVar5 = (**(code **)(*piVar4 + 0x200))(piVar4,*(undefined4 *)(*piVar4 + 0x204));
      uVar6 = 0;
      if (iVar5 != 0) {
        puVar7 = (undefined4 *)(iVar5 + 0x10);
        while( true ) {
          if ((int)*(uint *)(iVar5 + 0xc) <= (int)uVar6) {
            if ((method->parameters[1][0x17].type & 1) == 0) {
              func_?(method->parameters[1]);
            }
            return (Object *)0x0;
          }
          if (*(uint *)(iVar5 + 0xc) <= uVar6) break;
          pMVar2 = Json::Utilities::ReflectionUtils::ReflectionUtils_GetMemberInfoFromType
                             ((Type *)*puVar7,memberInfo,(MethodInfo *)0x0);
          if ((pMVar2 != (MemberInfo_1 *)0x0) &&
             (pOVar3 = (Object *)
                       (*(code *)(*method->parameters)->data)(pMVar2,1,*method->parameters),
             pOVar3 != (Object *)0x0)) {
            return pOVar3;
          }
          uVar6 = uVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        goto code_?;
      }
    }
  }
  func_?(0);
code_?:
  uVar8 = func_?(0);
  func_?(uVar8);
  pcVar9 = (code *)swi(3);
  pOVar3 = (Object *)(*pcVar9)();
  return pOVar3;
}


/* JsonConverterAttribute GetAttribute[JsonConverterAttribute](ICustomAttributeProvider) */

JsonConverterAttribute *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonTypeReflector::
JsonTypeReflector_GetAttribute_7(ICustomAttributeProvider *attributeProvider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = func_?(attributeProvider,TypeInfo__System__Type);
  if (iVar1 == 0) {
    iVar1 = func_?(attributeProvider,TypeInfo__System__Reflection__MemberInfo);
    if (iVar1 == 0) {
      pJVar2 = (JsonConverterAttribute *)
               (*(code *)method->parameters[2]->data)(attributeProvider,1,method->parameters[2]);
      return pJVar2;
    }
    if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
      func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    }
    pJVar2 = (JsonConverterAttribute *)
             (*(code *)method->parameters[1]->data)(iVar1,method->parameters[1]);
    return pJVar2;
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  pJVar2 = (JsonConverterAttribute *)
           (*(code *)(*method->parameters)->data)(iVar1,*method->parameters);
  return pJVar2;
}


/* DataContractAttribute GetDataContractAttribute(Type) */

DataContractAttribute *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonTypeReflector::
JsonTypeReflector_GetDataContractAttribute(Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  do {
    if (type == (Type *)0x0) {
      return (DataContractAttribute *)0x0;
    }
    if ((((uint)(
                TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataContractAttribute>
                ->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((
        TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataContractAttribute>
        ->_1).cctor_started == 0)) {
      func_?(
                     TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataContractAttribute>
                     );
    }
    pDVar1 = CachedAttributeGetter`1[System::Runtime::Serialization::DataMemberAttribute]::
             CachedAttributeGetter_1_System_Runtime_Serialization_DataMemberAttribute__GetAttribute
                       ((ICustomAttributeProvider *)type,
                        MethodInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataContractAttribute>__GetAttribute_System__Reflection__ICustomAttributeProvider_
                       );
    type = (Type *)func_?(0x11,type);
  } while (pDVar1 == (DataMemberAttribute *)0x0);
  return (DataContractAttribute *)pDVar1;
}


/* DataMemberAttribute GetDataMemberAttribute(MemberInfo) */

DataMemberAttribute *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonTypeReflector::
JsonTypeReflector_GetDataMemberAttribute(MemberInfo_1 *memberInfo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (memberInfo == (MemberInfo_1 *)0x0) {
    func_?(0);
    pPVar1 = extraout_EDX;
  }
  else {
    iVar2 = (*(code *)(memberInfo->klass->vtable).__unknown_1.method)
                      (memberInfo,(memberInfo->klass->vtable).__unknown_2.methodPtr);
    if (iVar2 == 4) {
      if ((((uint)(
                  TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataMemberAttribute>
                  ->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((
          TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataMemberAttribute>
          ->_1).cctor_started == 0)) {
        func_?(
                       TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataMemberAttribute>
                       );
      }
      pDVar3 = CachedAttributeGetter`1[System::Runtime::Serialization::DataMemberAttribute]::
               CachedAttributeGetter_1_System_Runtime_Serialization_DataMemberAttribute__GetAttribute
                         ((ICustomAttributeProvider *)memberInfo,
                          MethodInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataMemberAttribute>__GetAttribute_System__Reflection__ICustomAttributeProvider_
                         );
      return pDVar3;
    }
    bVar4 = (TypeInfo__System__Reflection__PropertyInfo->_1).naturalAligment;
    if (((memberInfo->klass->_1).naturalAligment < bVar4) ||
       ((memberInfo->klass->_1).typeHierarchy[bVar4 - 1] !=
        (Il2CppClass *)TypeInfo__System__Reflection__PropertyInfo)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pPVar6 = (PropertyInfo_1 *)0x0;
    if (bVar5) {
      pPVar6 = (PropertyInfo_1 *)memberInfo;
    }
    pPVar1 = TypeInfo__System__Reflection__PropertyInfo;
    if (pPVar6 != (PropertyInfo_1 *)0x0) {
      if ((((uint)(
                  TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataMemberAttribute>
                  ->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((
          TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataMemberAttribute>
          ->_1).cctor_started == 0)) {
        func_?(
                       TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataMemberAttribute>
                       );
      }
      pDVar3 = CachedAttributeGetter`1[System::Runtime::Serialization::DataMemberAttribute]::
               CachedAttributeGetter_1_System_Runtime_Serialization_DataMemberAttribute__GetAttribute
                         ((ICustomAttributeProvider *)pPVar6,
                          MethodInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataMemberAttribute>__GetAttribute_System__Reflection__ICustomAttributeProvider_
                         );
      if ((pDVar3 == (DataMemberAttribute *)0x0) &&
         (bVar7 = Json::Utilities::ReflectionUtils::ReflectionUtils_IsVirtual
                            (pPVar6,(MethodInfo *)0x0), bVar7 != 0)) {
        targetType = (Type *)(*(code *)(pPVar6->klass->vtable).__unknown.method)
                                       (pPVar6,(pPVar6->klass->vtable).get_MemberType.methodPtr);
        memberInfo = (MemberInfo_1 *)pPVar6;
        do {
          if (targetType == (Type *)0x0) {
            return pDVar3;
          }
          pMVar8 = Json::Utilities::ReflectionUtils::ReflectionUtils_GetMemberInfoFromType
                             (targetType,memberInfo,(MethodInfo *)0x0);
          pPVar6 = (PropertyInfo_1 *)
                   func_?(pMVar8,TypeInfo__System__Reflection__PropertyInfo);
          if ((pPVar6 != (PropertyInfo_1 *)0x0) &&
             (bVar7 = Json::Utilities::ReflectionUtils::ReflectionUtils_IsVirtual
                                (pPVar6,(MethodInfo *)0x0), memberInfo = (MemberInfo_1 *)pPVar6,
             bVar7 != 0)) {
            if ((((uint)(
                        TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataMemberAttribute>
                        ->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((
                TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataMemberAttribute>
                ->_1).cctor_started == 0)) {
              func_?();
            }
            pDVar3 = CachedAttributeGetter`1[System::Runtime::Serialization::DataMemberAttribute]::
                     CachedAttributeGetter_1_System_Runtime_Serialization_DataMemberAttribute__GetAttribute
                               ((ICustomAttributeProvider *)pPVar6,
                                MethodInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataMemberAttribute>__GetAttribute_System__Reflection__ICustomAttributeProvider_
                               );
          }
          targetType = (Type *)func_?();
        } while (pDVar3 == (DataMemberAttribute *)0x0);
      }
      return pDVar3;
    }
  }
  func_?(memberInfo,pPVar1);
  pcVar9 = (code *)swi(3);
  pDVar3 = (DataMemberAttribute *)(*pcVar9)();
  return pDVar3;
}


/* JsonArrayAttribute GetJsonArrayAttribute(Type) */

JsonArrayAttribute *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonTypeReflector::
JsonTypeReflector_GetJsonArrayAttribute(Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(
              TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
              ->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((
      TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
      ->_1).cctor_started == 0)) {
    func_?(
                   TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
                   );
  }
  pJVar1 = (JsonArrayAttribute *)
           CachedAttributeGetter`1[System::Runtime::Serialization::DataMemberAttribute]::
           CachedAttributeGetter_1_System_Runtime_Serialization_DataMemberAttribute__GetAttribute
                     ((ICustomAttributeProvider *)type,
                      MethodInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>__GetAttribute_System__Reflection__ICustomAttributeProvider_
                     );
  pJVar2 = (JsonArrayAttribute *)0x0;
  if ((pJVar1 != (JsonArrayAttribute *)0x0) &&
     (pJVar1->klass == TypeInfo__Newtonsoft__Json__JsonArrayAttribute)) {
    pJVar2 = pJVar1;
  }
  return pJVar2;
}


/* JsonContainerAttribute GetJsonContainerAttribute(Type) */

JsonContainerAttribute *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonTypeReflector::
JsonTypeReflector_GetJsonContainerAttribute(Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(
              TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
              ->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((
      TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
      ->_1).cctor_started == 0)) {
    func_?(
                   TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
                   );
  }
  pJVar1 = (JsonContainerAttribute *)
           CachedAttributeGetter`1[System::Runtime::Serialization::DataMemberAttribute]::
           CachedAttributeGetter_1_System_Runtime_Serialization_DataMemberAttribute__GetAttribute
                     ((ICustomAttributeProvider *)type,
                      MethodInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>__GetAttribute_System__Reflection__ICustomAttributeProvider_
                     );
  return pJVar1;
}


/* JsonConverter GetJsonConverter(ICustomAttributeProvider, Type) */

JsonConverter *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonTypeReflector::
JsonTypeReflector_GetJsonConverter
          (ICustomAttributeProvider *attributeProvider,Type *targetConvertedType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  this = TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->static_fields->
         JsonConverterTypeCache;
  if (this != (ThreadSafeStore_2_System_Reflection_ICustomAttributeProvider_System_Type_ *)0x0) {
    pTVar1 = Json::Utilities::ThreadSafeStore`2[System::Type,System::Type]::
             ThreadSafeStore_2_System_Type_System_Type__Get
                       ((ThreadSafeStore_2_System_Type_System_Type_ *)this,(Type *)attributeProvider
                        ,
                        MethodInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<System::Reflection::ICustomAttributeProvider,_System::Type>__Get_System__Reflection__ICustomAttributeProvider_
                       );
    if (pTVar1 == (Type *)0x0) {
      return (JsonConverter *)0x0;
    }
    unaff_ESI = JsonConverterAttribute::JsonConverterAttribute_CreateJsonConverterInstance
                          (pTVar1,(MethodInfo *)0x0);
    if (unaff_ESI != (JsonConverter *)0x0) {
      cVar2 = (*(code *)(unaff_ESI->klass->vtable).__unknown_2.method)
                        (unaff_ESI,targetConvertedType);
      if (cVar2 != '\0') {
        return unaff_ESI;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?();
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object);
  func_?(unaff_ESI,0);
  pTVar1 = mscorlib.dll::System::Object::Object_GetType((Object *)unaff_ESI,(MethodInfo *)0x0);
  func_?(pTVar1,0);
  uVar3 = func_?(8,pTVar1);
  func_?(args,0);
  func_?(args,uVar3);
  func_?();
  func_?();
  func_?(args,0);
  func_?();
  func_?(0,0);
  uVar3 = func_?(8,0);
  func_?(args,0);
  func_?(args,uVar3);
  func_?(2,uVar3);
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_JsonConverter__0__on__1__is_not_,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  this_00 = (JsonSchemaException *)
            func_?(TypeInfo__Newtonsoft__Json__JsonSerializationException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(this_00,message,(MethodInfo *)0x0);
  pMStack4 =
       MethodInfo__Newtonsoft__Json__Serialization__JsonTypeReflector__GetJsonConverter_System__Reflection__ICustomAttributeProvider__System__Type_
  ;
  func_?();
  pcVar5 = (code *)swi(3);
  pJVar6 = (JsonConverter *)(*pcVar5)();
  return pJVar6;
}


/* Type GetJsonConverterType(ICustomAttributeProvider) */

Type * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonTypeReflector::
       JsonTypeReflector_GetJsonConverterType
                 (ICustomAttributeProvider *attributeProvider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  this = TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->static_fields->
         JsonConverterTypeCache;
  if (this != (ThreadSafeStore_2_System_Reflection_ICustomAttributeProvider_System_Type_ *)0x0) {
    pTVar1 = Json::Utilities::ThreadSafeStore`2[System::Type,System::Type]::
             ThreadSafeStore_2_System_Type_System_Type__Get
                       ((ThreadSafeStore_2_System_Type_System_Type_ *)this,(Type *)attributeProvider
                        ,
                        MethodInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<System::Reflection::ICustomAttributeProvider,_System::Type>__Get_System__Reflection__ICustomAttributeProvider_
                       );
    return pTVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pTVar1 = (Type *)(*pcVar2)();
  return pTVar1;
}


/* Type GetJsonConverterTypeFromAttribute(ICustomAttributeProvider) */

Type * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonTypeReflector::
       JsonTypeReflector_GetJsonConverterTypeFromAttribute
                 (ICustomAttributeProvider *attributeProvider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  pJVar1 = JsonTypeReflector_GetAttribute_7
                     (attributeProvider,
                      Newtonsoft__Json__JsonConverterAttribute_MethodInfo__Newtonsoft__Json__Serialization__JsonTypeReflector__GetAttribute<Newtonsoft::Json::JsonConverterAttribute>_System__Reflection__ICustomAttributeProvider_
                     );
  if (pJVar1 == (JsonConverterAttribute *)0x0) {
    return (Type *)0x0;
  }
  return *(Type **)(in_stack_2 + 8);
}


/* JsonObjectAttribute GetJsonObjectAttribute(Type) */

JsonObjectAttribute *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonTypeReflector::
JsonTypeReflector_GetJsonObjectAttribute(Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(
              TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
              ->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((
      TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
      ->_1).cctor_started == 0)) {
    func_?(
                   TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
                   );
  }
  pJVar1 = (JsonObjectAttribute *)
           CachedAttributeGetter`1[System::Runtime::Serialization::DataMemberAttribute]::
           CachedAttributeGetter_1_System_Runtime_Serialization_DataMemberAttribute__GetAttribute
                     ((ICustomAttributeProvider *)type,
                      MethodInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>__GetAttribute_System__Reflection__ICustomAttributeProvider_
                     );
  pJVar2 = (JsonObjectAttribute *)0x0;
  if ((pJVar1 != (JsonObjectAttribute *)0x0) &&
     (pJVar1->klass == TypeInfo__Newtonsoft__Json__JsonObjectAttribute)) {
    pJVar2 = pJVar1;
  }
  return pJVar2;
}


/* Type GetMetadataTypeAttributeType() */

Type * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonTypeReflector::
       JsonTypeReflector_GetMetadataTypeAttributeType(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  if (TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->static_fields->
      _cachedMetadataTypeAttributeType == (Type *)0x0) {
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    typeName = StringLiteral_System_ComponentModel_DataAnnota;
    typeName_00 = (String *)
                  func_?(StringLiteral_System_ComponentModel_DataAnnota,&UNK_?);
    pTVar1 = mscorlib.dll::System::Type::Type_GetType(typeName_00,(MethodInfo *)0x0);
    bVar2 = false;
    if (pTVar1 == (Type *)0x0) {
      pTVar1 = mscorlib.dll::System::Type::Type_GetType(typeName,(MethodInfo *)0x0);
      bVar2 = pTVar1 == (Type *)0x0;
    }
    if (bVar2) {
      return (Type *)0x0;
    }
    if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
      func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    }
    TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->static_fields->
    _cachedMetadataTypeAttributeType = pTVar1;
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  return TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->static_fields->
         _cachedMetadataTypeAttributeType;
}


/* MemberSerialization GetObjectMemberSerialization(Type) */

MemberSerialization__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonTypeReflector::
JsonTypeReflector_GetObjectMemberSerialization(Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(
              TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
              ->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((
      TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
      ->_1).cctor_started == 0)) {
    func_?(
                   TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
                   );
  }
  pDVar1 = CachedAttributeGetter`1[System::Runtime::Serialization::DataMemberAttribute]::
           CachedAttributeGetter_1_System_Runtime_Serialization_DataMemberAttribute__GetAttribute
                     ((ICustomAttributeProvider *)objectType,
                      MethodInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>__GetAttribute_System__Reflection__ICustomAttributeProvider_
                     );
  if (pDVar1 != (DataMemberAttribute *)0x0) {
    pDVar2 = (DataMemberAttribute *)0x0;
    if ((JsonObjectAttribute__Class *)pDVar1->klass ==
        TypeInfo__Newtonsoft__Json__JsonObjectAttribute) {
      pDVar2 = pDVar1;
    }
    if (pDVar2 != (DataMemberAttribute *)0x0) {
      return *(MemberSerialization__Enum *)(in_stack_3 + 0x18);
    }
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  do {
    if (objectType == (Type *)0x0) {
      return MemberSerialization__Enum_OptOut;
    }
    if ((((uint)(
                TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataContractAttribute>
                ->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((
        TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataContractAttribute>
        ->_1).cctor_started == 0)) {
      func_?(
                     TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataContractAttribute>
                     );
    }
    pDVar1 = CachedAttributeGetter`1[System::Runtime::Serialization::DataMemberAttribute]::
             CachedAttributeGetter_1_System_Runtime_Serialization_DataMemberAttribute__GetAttribute
                       ((ICustomAttributeProvider *)objectType,
                        MethodInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataContractAttribute>__GetAttribute_System__Reflection__ICustomAttributeProvider_
                       );
    objectType = (Type *)func_?(0x11,objectType);
  } while (pDVar1 == (DataMemberAttribute *)0x0);
  return MemberSerialization__Enum_OptIn;
}


/* TypeConverter GetTypeConverter(Type) */

TypeConverter *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonTypeReflector::
JsonTypeReflector_GetTypeConverter(Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__ComponentModel__TypeDescriptor->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__System__ComponentModel__TypeDescriptor->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__ComponentModel__TypeDescriptor);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?,unaff_EBP);
    cRam_? = '\x01';
  }
  if (type == (Type *)0x0) {
    this_00 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_00,StringLiteral_type,(MethodInfo *)0x0);
    piVar1 = (int *)func_?(this_00,0,
                                    MethodInfo__System__ComponentModel__TypeDescriptor__GetConverter_System__Type_
                                   );
    pTVar2 = extraout_ECX;
code_?:
    func_?(piVar1,pTVar2);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar4 = 0;
    uVar3 = func_?(0,0);
    func_?(uVar3);
  }
  else {
    if ((((uint)(TypeInfo__System__ComponentModel__TypeDescriptor->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__System__ComponentModel__TypeDescriptor->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__ComponentModel__TypeDescriptor);
    }
    pAVar5 = System.dll::System::ComponentModel::TypeDescriptor::TypeDescriptor_GetAttributes
                       (type,(MethodInfo *)0x0);
    pIVar6 = TypeRef__System__ComponentModel__TypeConverterAttribute;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    pTVar7 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
    if (pAVar5 == (AttributeCollection *)0x0) goto code_?;
    piVar1 = (int *)(*(code *)(pAVar5->klass->vtable).get_Item.method)
                              (pAVar5,pTVar7,pAVar5->klass[1]._0.image);
    if (piVar1 == (int *)0x0) goto code_?;
    piVar8 = (int *)0x0;
    if ((TypeConverterAttribute__Class *)*piVar1 ==
        TypeInfo__System__ComponentModel__TypeConverterAttribute) {
      piVar8 = piVar1;
    }
    pTVar2 = TypeInfo__System__ComponentModel__TypeConverterAttribute;
    if (piVar8 == (int *)0x0) goto code_?;
    if ((Collection_1_VoxelHit_ *)piVar8[2] == (Collection_1_VoxelHit_ *)0x0)
    goto code_?;
    pIVar9 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items
                       ((Collection_1_VoxelHit_ *)piVar8[2],(MethodInfo *)0x0);
    if ((int)pIVar9 < 1) {
code_?:
      if ((((uint)(TypeInfo__System__ComponentModel__TypeDescriptor->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__ComponentModel__TypeDescriptor->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__ComponentModel__TypeDescriptor);
      }
      pTVar7 = System.dll::System::ComponentModel::TypeDescriptor::
               TypeDescriptor_FindDefaultConverterType(type,(MethodInfo *)0x0);
      if (pTVar7 == (Type *)0x0) {
        return (TypeConverter *)0x0;
      }
    }
    else {
      typeName = (String *)piVar8[2];
      if ((((uint)(TypeInfo__System__ComponentModel__TypeDescriptor->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__ComponentModel__TypeDescriptor->_1).cctor_started == 0)) {
        func_?();
      }
      pTVar7 = System.dll::System::ComponentModel::TypeDescriptor::TypeDescriptor_GetTypeFromName
                         ((IComponent *)0x0,typeName,(MethodInfo *)0x0);
      if (pTVar7 == (Type *)0x0) goto code_?;
    }
    types = (Type__Array *)func_?();
    pIVar6 = TypeRef__System__Type;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    pTVar10 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
    if (types == (Type__Array *)0x0) goto code_?;
    if (pTVar10 != (Type *)0x0) {
      iVar11 = func_?(pTVar10,(types->klass->_0).element_class);
      if (iVar11 == 0) goto code_?;
    }
    if (types->max_length == 0) goto code_?;
    types->vector[0] = pTVar10;
    if (pTVar7 == (Type *)0x0) goto code_?;
    this = mscorlib.dll::System::Type::Type_GetConstructor(pTVar7,types,(MethodInfo *)0x0);
    pOVar12 = TypeInfo__System__Object;
    if (this == (ConstructorInfo *)0x0) {
      mscorlib.dll::System::Activator::Activator_CreateInstance(pTVar7,(MethodInfo *)0x0);
      pTVar13 = (TypeConverter *)func_?();
      return pTVar13;
    }
    parameters = (Object__Array *)func_?();
    if (parameters == (Object__Array *)0x0) goto code_?;
    func_?(parameters,pOVar12);
    uVar4 = 0;
    if (parameters->max_length != 0) {
      parameters->vector[0] = (Object *)pOVar12;
      pOVar14 = mscorlib.dll::System::Reflection::ConstructorInfo::ConstructorInfo_Invoke
                          (this,parameters,(MethodInfo *)0x0);
      pTVar13 = (TypeConverter *)
                func_?(pOVar14,TypeInfo__System__ComponentModel__TypeConverter);
      return pTVar13;
    }
  }
  uVar3 = func_?(0,uVar4);
  func_?(uVar3);
code_?:
  func_?(0);
  pcVar15 = (code *)swi(3);
  pTVar13 = (TypeConverter *)(*pcVar15)();
  return pTVar13;
}


/* JsonTypeReflector() */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonTypeReflector::
     JsonTypeReflector__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->static_fields->__f__mg_cache0 ==
      (Func_2_System_Reflection_ICustomAttributeProvider_Type_ *)0x0) {
    pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__System__Func<System::Reflection::ICustomAttributeProvider,_System::Type>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar1,(Object *)0x0,
               MethodInfo__Newtonsoft__Json__Serialization__JsonTypeReflector__GetJsonConverterTypeFromAttribute_System__Reflection__ICustomAttributeProvider_
               ,
               MethodInfo__System__Func<System::Reflection::ICustomAttributeProvider,_System::Type>__Func_System__Object__void__
              );
    TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->static_fields->__f__mg_cache0 =
         (Func_2_System_Reflection_ICustomAttributeProvider_Type_ *)pUVar1;
  }
  pFVar2 = (Func_2_Type_Type_ *)
           TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->static_fields->
           __f__mg_cache0;
  this = (ThreadSafeStore_2_System_Reflection_ICustomAttributeProvider_System_Type_ *)
         func_?(
                        TypeInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<System::Reflection::ICustomAttributeProvider,_System::Type>
                        );
  Json::Utilities::ThreadSafeStore`2[System::Type,System::Type]::
  ThreadSafeStore_2_System_Type_System_Type___ctor
            ((ThreadSafeStore_2_System_Type_System_Type_ *)this,pFVar2,
             MethodInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<System::Reflection::ICustomAttributeProvider,_System::Type>__ThreadSafeStore_System__Func<System::Reflection::ICustomAttributeProvider,_System::Type>_
            );
  TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->static_fields->
  JsonConverterTypeCache = this;
  if (TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->static_fields->__f__mg_cache1 ==
      (Func_2_Type_Type_ *)0x0) {
    pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar1,(Object *)0x0,
               MethodInfo__Newtonsoft__Json__Serialization__JsonTypeReflector__GetAssociateMetadataTypeFromAttribute_System__Type_
               ,MethodInfo__System__Func<System::Type,_System::Type>__Func_System__Object__void__);
    TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->static_fields->__f__mg_cache1 =
         (Func_2_Type_Type_ *)pUVar1;
  }
  pFVar2 = TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->static_fields->
           __f__mg_cache1;
  this_00 = (ThreadSafeStore_2_System_Type_System_Type_ *)func_?();
  Json::Utilities::ThreadSafeStore`2[System::Type,System::Type]::
  ThreadSafeStore_2_System_Type_System_Type___ctor
            (this_00,pFVar2,
             MethodInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<System::Type,_System::Type>__ThreadSafeStore_System__Func<System::Type,_System::Type>_
            );
  TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->static_fields->
  AssociatedMetadataTypesCache = this_00;
  return;
}


/* Boolean get_DynamicCodeGeneration() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonTypeReflector::
     JsonTypeReflector_get_DynamicCodeGeneration(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  aNStack_1[0].value = 0;
  aNStack_1[0].has_value = 0;
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  aNStack_1[0] = TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->static_fields->
                 _dynamicCodeGeneration;
  cVar2 = func_?(aNStack_1,MethodInfo__System__Nullable<bool>__get_HasValue__);
  if (cVar2 == '\0') {
    aNStack_3[0].value = 0;
    aNStack_3[0].has_value = 0;
    func_?(aNStack_3,0,MethodInfo__System__Nullable<bool>__Nullable_bool_);
    if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
      func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    }
    TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->static_fields->
    _dynamicCodeGeneration = aNStack_3[0];
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  bVar4 = func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->
                           static_fields->_dynamicCodeGeneration,
                          MethodInfo__System__Nullable<bool>__get_Value__);
  return bVar4;
}


/* ReflectionDelegateFactory get_ReflectionDelegateFactory() */

ReflectionDelegateFactory *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonTypeReflector::
JsonTypeReflector_get_ReflectionDelegateFactory(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Utilities__LateBoundReflectionDelegateFactory->vtable).
              Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Utilities__LateBoundReflectionDelegateFactory->_1).cctor_started
      == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Utilities__LateBoundReflectionDelegateFactory);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Utilities__LateBoundReflectionDelegateFactory->vtable).
              Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Utilities__LateBoundReflectionDelegateFactory->_1).cctor_started
      == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Utilities__LateBoundReflectionDelegateFactory);
  }
  return (ReflectionDelegateFactory *)
         TypeInfo__Newtonsoft__Json__Utilities__LateBoundReflectionDelegateFactory->static_fields->
         _instance;
}



/* Type GetAssociateMetadataTypeFromAttribute(Type) */

Type * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonTypeReflector::
       JsonTypeReflector_GetAssociateMetadataTypeFromAttribute(Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Object_MethodInfo__System__Linq__Enumerable__SingleOrDefault<System::Object>_System__Collections__Generic__IEnumerable<System::Object>_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__IMetadataTypeAttribute);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__LateBoundMetadataTypeAttribute);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Newtonsoft__Json__Serialization__JsonTypeReflector__GetMetadataTypeAttributeType__
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    func_?(&MethodInfo__System__Type__GetType_System__String_);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_System_ComponentModel_DataAnnota);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  pTVar1 = TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->static_fields->
           _cachedMetadataTypeAttributeType;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  bVar2 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                    ((Object **)pTVar1,(Object **)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    left._source = (CancellationTokenSource *)
                   func_?(StringLiteral_System_ComponentModel_DataAnnota,
                                   MethodInfo__System__Type__GetType_System__String_,
                                   MethodInfo__Newtonsoft__Json__Serialization__JsonTypeReflector__GetMetadataTypeAttributeType__
                                  );
    bVar2 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                      (left,(CancellationToken)0x0,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pTVar1 = (Type *)0x0;
      goto code_?;
    }
    if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    }
    TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->static_fields->
    _cachedMetadataTypeAttributeType = (Type *)left._source;
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->static_fields->
                     _cachedMetadataTypeAttributeType,left._source);
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  pTVar1 = TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->static_fields->
           _cachedMetadataTypeAttributeType;
code_?:
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  bVar2 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                    ((Object **)pTVar1,(Object **)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return (Type *)0x0;
  }
  if (type != (Type *)0x0) {
    source = (IEnumerable_1_System_Object_ *)(*(type->klass->vtable).__unknown_3.methodPtr)(type);
    pOVar3 = (Object__Class *)
             System.Core.dll::System::Linq::Enumerable::Enumerable_SingleOrDefault_1
                       (source,
                        System__Object_MethodInfo__System__Linq__Enumerable__SingleOrDefault<System::Object>_System__Collections__Generic__IEnumerable<System::Object>_
                       );
    if (pOVar3 == (Object__Class *)0x0) {
      return (Type *)0x0;
    }
    value = (Object *)func_?();
    if (value != (Object *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (value,ExceptionArgument__Enum_obj,unaff_EBX);
      value[1].klass = pOVar3;
      func_?();
      uVar4 = 0;
      uVar5 = (value->klass->_1).interface_offsets_count;
      if (uVar5 != 0) {
        do {
          if (value->klass->interfaceOffsets[uVar4].interfaceType ==
              (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__IMetadataTypeAttribute) {
            pTVar1 = (Type *)(*(&(value->klass->vtable).Equals)
                               [value->klass->interfaceOffsets[uVar4].offset].methodPtr)();
            return pTVar1;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      puVar6 = (undefined4 *)func_?();
      pTVar1 = (Type *)(*(code *)*puVar6)();
      return pTVar1;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pTVar1 = (Type *)(*pcVar7)();
  return pTVar1;
}


/* Type GetAssociatedMetadataType(Type) */

Type * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonTypeReflector::
       JsonTypeReflector_GetAssociatedMetadataType(Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  this = (ThreadSafeStore_2_System_Object_System_Object_ *)
         TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->static_fields->
         AssociatedMetadataTypesCache;
  if (this != (ThreadSafeStore_2_System_Object_System_Object_ *)0x0) {
    pTVar1 = (Type *)Json::Utilities::ThreadSafeStore`2[System::Object,System::Object]::
                     ThreadSafeStore_2_System_Object_System_Object__Get
                               (this,(Object *)type,
                                MethodInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<System::Type,_System::Type>__Get_System__Type_
                               );
    return pTVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pTVar1 = (Type *)(*pcVar3)();
  return pTVar1;
}


/* Object GetAttribute[Object](ICustomAttributeProvider) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonTypeReflector::
         JsonTypeReflector_GetAttribute
                   (ICustomAttributeProvider *attributeProvider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    func_?(&TypeInfo__System__Reflection__MemberInfo);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (attributeProvider == (ICustomAttributeProvider *)0x0) {
    left._source = (CancellationTokenSource *)0x0;
  }
  else {
    if (((attributeProvider->klass->_1).typeHierarchyDepth <
         (TypeInfo__System__Type->_1).typeHierarchyDepth) ||
       ((Type__Class *)
        (attributeProvider->klass->_1).typeHierarchy
        [(TypeInfo__System__Type->_1).typeHierarchyDepth - 1] != TypeInfo__System__Type)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    left._source = (CancellationTokenSource *)0x0;
    if (bVar1) {
      left._source = (CancellationTokenSource *)attributeProvider;
    }
  }
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  bVar2 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                    (left,(CancellationToken)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    }
    pOVar3 = (Object *)
             (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                       (left._source,((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
    return pOVar3;
  }
  if (attributeProvider == (ICustomAttributeProvider *)0x0) {
    left_00 = (MemberInfo_1 *)0x0;
  }
  else {
    if (((attributeProvider->klass->_1).typeHierarchyDepth <
         (TypeInfo__System__Reflection__MemberInfo->_1).typeHierarchyDepth) ||
       ((attributeProvider->klass->_1).typeHierarchy
        [(TypeInfo__System__Reflection__MemberInfo->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__System__Reflection__MemberInfo)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    left_00 = (MemberInfo_1 *)0x0;
    if (bVar1) {
      left_00 = (MemberInfo_1 *)attributeProvider;
    }
  }
  bVar2 = mscorlib.dll::System::Reflection::MemberInfo::MemberInfo_1_op_Inequality
                    (left_00,(MemberInfo_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pOVar3 = (Object *)(*((method->field7_0x1c).rgctx_data[2].method)->virtualMethodPointer)();
    return pOVar3;
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_finished_or_no_cctor
      == 0) {
    method = (MethodInfo *)TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector;
    func_?();
  }
  pOVar3 = (Object *)(*((method->field7_0x1c).rgctx_data[1].method)->virtualMethodPointer)();
  return pOVar3;
}


/* Object GetAttribute[Object](MemberInfo) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonTypeReflector::
         JsonTypeReflector_GetAttribute_1(MemberInfo_1 *memberInfo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (memberInfo != (MemberInfo_1 *)0x0) {
    type = (Type *)(*(memberInfo->klass->vtable).__unknown_2.methodPtr)
                             (memberInfo,(memberInfo->klass->vtable).__unknown_2.method);
    if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    }
    left._source = (CancellationTokenSource *)
                   JsonTypeReflector_GetAssociatedMetadataType(type,(MethodInfo *)0x0);
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    bVar1 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                      (left,(CancellationToken)0x0,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pMVar2 = Json::Utilities::ReflectionUtils::ReflectionUtils_GetMemberInfoFromType
                         ((Type *)left._source,memberInfo,(MethodInfo *)0x0);
      bVar1 = mscorlib.dll::System::Reflection::MemberInfo::MemberInfo_1_op_Inequality
                        (pMVar2,(MemberInfo_1 *)0x0,(MethodInfo *)0x0);
      if ((bVar1 != 0) &&
         (pOVar3 = (Object *)(*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)(),
         pOVar3 != (Object *)0x0)) {
        return pOVar3;
      }
    }
    pOVar3 = (Object *)(*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)();
    if (pOVar3 != (Object *)0x0) {
      return pOVar3;
    }
    piVar4 = (int *)(*(memberInfo->klass->vtable).__unknown_2.methodPtr)();
    if (piVar4 != (int *)0x0) {
      pMVar2 = (MemberInfo_1 *)
               (**(code **)(*piVar4 + 0x444))(piVar4,*(undefined4 *)(*piVar4 + 0x448));
      pMVar5 = (MonitorData *)0x0;
      if (pMVar2 != (MemberInfo_1 *)0x0) {
        pMVar6 = pMVar2 + 2;
        while( true ) {
          if ((int)pMVar2[1].monitor <= (int)pMVar5) {
            return (Object *)0x0;
          }
          if (pMVar2[1].monitor <= pMVar5) break;
          left_00 = Json::Utilities::ReflectionUtils::ReflectionUtils_GetMemberInfoFromType
                              ((Type *)pMVar6->klass,memberInfo,(MethodInfo *)0x0);
          bVar1 = mscorlib.dll::System::Reflection::MemberInfo::MemberInfo_1_op_Inequality
                            (left_00,(MemberInfo_1 *)0x0,(MethodInfo *)0x0);
          if ((bVar1 != 0) &&
             (pOVar3 = (Object *)(**(code **)(*_UNK_? + 4))(left_00,1), pMVar2 = left_00,
             pOVar3 != (Object *)0x0)) {
            return pOVar3;
          }
          pMVar5 = pMVar5 + 1;
          pMVar6 = (MemberInfo_1 *)&pMVar6->monitor;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  pOVar3 = (Object *)(*pcVar7)();
  return pOVar3;
}


/* Object GetAttribute[Object](Type) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonTypeReflector::
         JsonTypeReflector_GetAttribute_2(Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  left._source = (CancellationTokenSource *)
                 JsonTypeReflector_GetAssociatedMetadataType(type,(MethodInfo *)0x0);
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  bVar1 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                    (left,(CancellationToken)0x0,(MethodInfo *)0x0);
  if ((bVar1 != 0) &&
     (pOVar2 = (Object *)
               (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)(left._source,1),
     pOVar2 != (Object *)0x0)) {
    return pOVar2;
  }
  pOVar2 = (Object *)(*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)(type,1);
  if (pOVar2 != (Object *)0x0) {
    return pOVar2;
  }
  if (type != (Type *)0x0) {
    iVar3 = (*(type->klass->vtable).__unknown_31.methodPtr)(type);
    uVar4 = 0;
    if (iVar3 != 0) {
      puVar5 = (undefined4 *)(iVar3 + 0x10);
      while( true ) {
        if (*(int *)(iVar3 + 0xc) <= (int)uVar4) {
          return (Object *)0x0;
        }
        if (*(uint *)(iVar3 + 0xc) <= uVar4) break;
        pOVar2 = (Object *)
                 (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)(*puVar5,1);
        if (pOVar2 != (Object *)0x0) {
          return pOVar2;
        }
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar6)();
  return pOVar2;
}


/* DataContractAttribute GetDataContractAttribute(Type) */

DataContractAttribute *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonTypeReflector::
JsonTypeReflector_GetDataContractAttribute(Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataContractAttribute>__GetAttribute_System__Reflection__ICustomAttributeProvider_
                   );
    func_?(&
                    TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataContractAttribute>
                   );
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  while( true ) {
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    bVar1 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                      ((CancellationToken)type,(CancellationToken)0x0,(MethodInfo *)0x0);
    if (bVar1 == 0) break;
    if ((
        TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataContractAttribute>
        ->_1).cctor_finished_or_no_cctor == 0) {
      func_?(
                     TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataContractAttribute>
                     );
    }
    pDVar2 = (DataContractAttribute *)
             CachedAttributeGetter`1[System::Object]::
             CachedAttributeGetter_1_System_Object__GetAttribute
                       ((ICustomAttributeProvider *)type,
                        MethodInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataContractAttribute>__GetAttribute_System__Reflection__ICustomAttributeProvider_
                       );
    if ((CancellationTokenSource *)type == (CancellationTokenSource *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      pDVar2 = (DataContractAttribute *)(*pcVar3)();
      return pDVar2;
    }
    type = (Type *)(*(code *)((CancellationTokenSource *)type)->klass[4]._1.actualSize)();
    if (pDVar2 != (DataContractAttribute *)0x0) {
      return pDVar2;
    }
  }
  return (DataContractAttribute *)0x0;
}


/* DataMemberAttribute GetDataMemberAttribute(MemberInfo) */

DataMemberAttribute *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonTypeReflector::
JsonTypeReflector_GetDataMemberAttribute(MemberInfo_1 *memberInfo,MethodInfo *method)

{
  memberInfo_00 = memberInfo;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataMemberAttribute>__GetAttribute_System__Reflection__ICustomAttributeProvider_
                   );
    func_?(&
                    TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataMemberAttribute>
                   );
    func_?(&TypeInfo__System__Reflection__PropertyInfo);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (memberInfo == (MemberInfo_1 *)0x0) {
code_?:
    func_?();
    pPVar1 = extraout_EDX;
code_?:
    func_?(unaff_ESI,pPVar1);
    pPVar1 = extraout_EDX_00;
  }
  else {
    iVar2 = (*(memberInfo->klass->vtable).__unknown.methodPtr)
                      (memberInfo,(memberInfo->klass->vtable).__unknown.method);
    if (iVar2 == 4) {
      if ((
          TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataMemberAttribute>
          ->_1).cctor_finished_or_no_cctor == 0) {
        func_?(
                       TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataMemberAttribute>
                       );
      }
      pDVar3 = (DataMemberAttribute *)
               CachedAttributeGetter`1[System::Object]::
               CachedAttributeGetter_1_System_Object__GetAttribute
                         ((ICustomAttributeProvider *)memberInfo,
                          MethodInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataMemberAttribute>__GetAttribute_System__Reflection__ICustomAttributeProvider_
                         );
      return pDVar3;
    }
    pPVar1 = TypeInfo__System__Reflection__PropertyInfo;
    if (((TypeInfo__System__Reflection__PropertyInfo->_1).typeHierarchyDepth <=
         (memberInfo->klass->_1).typeHierarchyDepth) &&
       ((memberInfo->klass->_1).typeHierarchy
        [(TypeInfo__System__Reflection__PropertyInfo->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__System__Reflection__PropertyInfo)) {
      if ((
          TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataMemberAttribute>
          ->_1).cctor_finished_or_no_cctor == 0) {
        func_?(
                       TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataMemberAttribute>
                       );
      }
      pDVar3 = (DataMemberAttribute *)
               CachedAttributeGetter`1[System::Object]::
               CachedAttributeGetter_1_System_Object__GetAttribute
                         ((ICustomAttributeProvider *)memberInfo,
                          MethodInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataMemberAttribute>__GetAttribute_System__Reflection__ICustomAttributeProvider_
                         );
      if ((pDVar3 == (DataMemberAttribute *)0x0) &&
         (bVar4 = Json::Utilities::ReflectionUtils::ReflectionUtils_IsVirtual
                            ((PropertyInfo_1 *)memberInfo,(MethodInfo *)0x0), bVar4 != 0)) {
        left._source = (CancellationTokenSource *)
                       (*(memberInfo->klass->vtable).__unknown_2.methodPtr)
                                 (memberInfo,(memberInfo->klass->vtable).__unknown_2.method);
        memberInfo = (MemberInfo_1 *)pDVar3;
        do {
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Type);
          }
          bVar4 = mscorlib.dll::System::Threading::CancellationToken::
                  CancellationToken_op_Inequality(left,(CancellationToken)0x0,(MethodInfo *)0x0);
          if (bVar4 == 0) {
            return (DataMemberAttribute *)memberInfo;
          }
          unaff_ESI = (PropertyInfo_1 *)
                      Json::Utilities::ReflectionUtils::ReflectionUtils_GetMemberInfoFromType
                                ((Type *)left._source,memberInfo_00,(MethodInfo *)0x0);
          if ((unaff_ESI != (PropertyInfo_1 *)0x0) &&
             ((pPVar1 = TypeInfo__System__Reflection__PropertyInfo,
              (unaff_ESI->klass->_1).typeHierarchyDepth <
              (TypeInfo__System__Reflection__PropertyInfo->_1).typeHierarchyDepth ||
              ((unaff_ESI->klass->_1).typeHierarchy
               [(TypeInfo__System__Reflection__PropertyInfo->_1).typeHierarchyDepth - 1] !=
               (Il2CppClass *)TypeInfo__System__Reflection__PropertyInfo)))) goto code_?;
          bVar4 = mscorlib.dll::System::Reflection::PropertyInfo::PropertyInfo_1_op_Inequality
                            (unaff_ESI,(PropertyInfo_1 *)0x0,(MethodInfo *)0x0);
          if ((bVar4 != 0) &&
             (bVar4 = Json::Utilities::ReflectionUtils::ReflectionUtils_IsVirtual
                                (unaff_ESI,(MethodInfo *)0x0), bVar4 != 0)) {
            if ((
                TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataMemberAttribute>
                ->_1).cctor_finished_or_no_cctor == 0) {
              func_?(
                             TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataMemberAttribute>
                             );
            }
            memberInfo = (MemberInfo_1 *)
                         CachedAttributeGetter`1[System::Object]::
                         CachedAttributeGetter_1_System_Object__GetAttribute
                                   ((ICustomAttributeProvider *)unaff_ESI,
                                    MethodInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataMemberAttribute>__GetAttribute_System__Reflection__ICustomAttributeProvider_
                                   );
          }
          unaff_ESI = (PropertyInfo_1 *)memberInfo;
          if (left._source == (CancellationTokenSource *)0x0) goto code_?;
          left._source = (CancellationTokenSource *)func_?(0x6f,left._source);
          pDVar3 = (DataMemberAttribute *)memberInfo;
        } while (memberInfo == (MemberInfo_1 *)0x0);
      }
      return pDVar3;
    }
  }
  func_?(memberInfo_00,pPVar1);
  pcVar5 = (code *)swi(3);
  pDVar3 = (DataMemberAttribute *)(*pcVar5)();
  return pDVar3;
}


/* JsonArrayAttribute GetJsonArrayAttribute(Type) */

JsonArrayAttribute *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonTypeReflector::
JsonTypeReflector_GetJsonArrayAttribute(Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonArrayAttribute);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>__GetAttribute_System__Reflection__ICustomAttributeProvider_
                   );
    func_?(&
                    TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
                   );
    cRam_? = '\x01';
  }
  if ((
      TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
      ->_1).cctor_finished_or_no_cctor == 0) {
    func_?(
                   TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
                   );
  }
  pJVar1 = (JsonArrayAttribute *)
           CachedAttributeGetter`1[System::Object]::
           CachedAttributeGetter_1_System_Object__GetAttribute
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
    func_?(&
                    MethodInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>__GetAttribute_System__Reflection__ICustomAttributeProvider_
                   );
    func_?(&
                    TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
                   );
    cRam_? = '\x01';
  }
  if ((
      TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
      ->_1).cctor_finished_or_no_cctor == 0) {
    func_?(
                   TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
                   );
  }
  pJVar1 = (JsonContainerAttribute *)
           CachedAttributeGetter`1[System::Object]::
           CachedAttributeGetter_1_System_Object__GetAttribute
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
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<System::Reflection::ICustomAttributeProvider,_System::Type>__Get_System__Reflection__ICustomAttributeProvider_
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  this = (ThreadSafeStore_2_System_Object_System_Object_ *)
         TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->static_fields->
         JsonConverterTypeCache;
  if (this != (ThreadSafeStore_2_System_Object_System_Object_ *)0x0) {
    left._source = (CancellationTokenSource *)
                   Json::Utilities::ThreadSafeStore`2[System::Object,System::Object]::
                   ThreadSafeStore_2_System_Object_System_Object__Get
                             (this,(Object *)attributeProvider,
                              MethodInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<System::Reflection::ICustomAttributeProvider,_System::Type>__Get_System__Reflection__ICustomAttributeProvider_
                             );
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    bVar1 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                      (left,(CancellationToken)0x0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return (JsonConverter *)0x0;
    }
    unaff_ESI = JsonConverterAttribute::JsonConverterAttribute_CreateJsonConverterInstance
                          ((Type *)left._source,(MethodInfo *)0x0);
    if (unaff_ESI != (JsonConverter *)0x0) {
      cVar2 = (*(unaff_ESI->klass->vtable).__unknown_2.methodPtr)
                        (unaff_ESI,targetConvertedType,(unaff_ESI->klass->vtable).__unknown_2.method
                        );
      if (cVar2 != '\0') {
        return unaff_ESI;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  uVar3 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar3);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar3 = func_?(&TypeInfo__System__Object,3);
  args = (Object__Array *)func_?(uVar3);
  func_?(unaff_ESI);
  pTVar4 = mscorlib.dll::System::Object::Object_GetType((Object *)unaff_ESI,(MethodInfo *)0x0);
  func_?(pTVar4);
  uVar3 = func_?(7,pTVar4);
  func_?(args);
  func_?(args,uVar3);
  func_?(0,uVar3);
  func_?(args);
  func_?(args,attributeProvider);
  func_?(1,attributeProvider);
  func_?(targetConvertedType);
  uVar3 = func_?(7,targetConvertedType);
  func_?(args);
  func_?(args,uVar3);
  func_?(2,uVar3);
  method_00 = (MethodInfo *)0x0;
  pSVar5 = (String *)func_?(&StringLiteral_JsonConverter__0__on__1__is_not_);
  pSVar5 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar5,(IFormatProvider *)provider,args,method_00);
  uVar3 = func_?(&TypeInfo__Newtonsoft__Json__JsonSerializationException);
  this_00 = (JsonSerializationException *)func_?(uVar3);
  func_?(this_00);
  JsonSerializationException::JsonSerializationException__ctor_1(this_00,pSVar5,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Serialization__JsonTypeReflector__GetJsonConverter_System__Reflection__ICustomAttributeProvider__System__Type_
                 );
  func_?(this_00);
  pcVar6 = (code *)swi(3);
  pJVar7 = (JsonConverter *)(*pcVar6)();
  return pJVar7;
}


/* Type GetJsonConverterType(ICustomAttributeProvider) */

Type * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonTypeReflector::
       JsonTypeReflector_GetJsonConverterType
                 (ICustomAttributeProvider *attributeProvider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  this = (ThreadSafeStore_2_System_Object_System_Object_ *)
         TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->static_fields->
         JsonConverterTypeCache;
  if (this != (ThreadSafeStore_2_System_Object_System_Object_ *)0x0) {
    pTVar1 = (Type *)Json::Utilities::ThreadSafeStore`2[System::Object,System::Object]::
                     ThreadSafeStore_2_System_Object_System_Object__Get
                               (this,(Object *)attributeProvider,
                                MethodInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<System::Reflection::ICustomAttributeProvider,_System::Type>__Get_System__Reflection__ICustomAttributeProvider_
                               );
    return pTVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pTVar1 = (Type *)(*pcVar3)();
  return pTVar1;
}


/* Type GetJsonConverterTypeFromAttribute(ICustomAttributeProvider) */

Type * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonTypeReflector::
       JsonTypeReflector_GetJsonConverterTypeFromAttribute
                 (ICustomAttributeProvider *attributeProvider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    Newtonsoft__Json__JsonConverterAttribute_MethodInfo__Newtonsoft__Json__Serialization__JsonTypeReflector__GetAttribute<Newtonsoft::Json::JsonConverterAttribute>_System__Reflection__ICustomAttributeProvider_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  pOVar1 = JsonTypeReflector_GetAttribute
                     (attributeProvider,
                      Newtonsoft__Json__JsonConverterAttribute_MethodInfo__Newtonsoft__Json__Serialization__JsonTypeReflector__GetAttribute<Newtonsoft::Json::JsonConverterAttribute>_System__Reflection__ICustomAttributeProvider_
                     );
  if (pOVar1 != (Object *)0x0) {
    return (Type *)pOVar1[1].klass;
  }
  return (Type *)0x0;
}


/* JsonObjectAttribute GetJsonObjectAttribute(Type) */

JsonObjectAttribute *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonTypeReflector::
JsonTypeReflector_GetJsonObjectAttribute(Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonObjectAttribute);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>__GetAttribute_System__Reflection__ICustomAttributeProvider_
                   );
    func_?(&
                    TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
                   );
    cRam_? = '\x01';
  }
  if ((
      TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
      ->_1).cctor_finished_or_no_cctor == 0) {
    func_?(
                   TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
                   );
  }
  pJVar1 = (JsonObjectAttribute *)
           CachedAttributeGetter`1[System::Object]::
           CachedAttributeGetter_1_System_Object__GetAttribute
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
    func_?(&
                    MethodInfo__Newtonsoft__Json__Serialization__JsonTypeReflector__GetMetadataTypeAttributeType__
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    func_?(&MethodInfo__System__Type__GetType_System__String_);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_System_ComponentModel_DataAnnota);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  left = TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->static_fields->
         _cachedMetadataTypeAttributeType;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  bVar1 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                    ((Object **)left,(Object **)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    left_00._source =
         (CancellationTokenSource *)func_?(StringLiteral_System_ComponentModel_DataAnnota);
    bVar1 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                      (left_00,(CancellationToken)0x0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return (Type *)0x0;
    }
    if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->static_fields->
    _cachedMetadataTypeAttributeType = (Type *)left_00._source;
    func_?();
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
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
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonObjectAttribute);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>__GetAttribute_System__Reflection__ICustomAttributeProvider_
                   );
    func_?(&
                    TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
                   );
    cRam_? = '\x01';
  }
  if ((
      TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
      ->_1).cctor_finished_or_no_cctor == 0) {
    func_?(
                   TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>
                   );
  }
  pOVar1 = CachedAttributeGetter`1[System::Object]::
           CachedAttributeGetter_1_System_Object__GetAttribute
                     ((ICustomAttributeProvider *)objectType,
                      MethodInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<Newtonsoft::Json::JsonContainerAttribute>__GetAttribute_System__Reflection__ICustomAttributeProvider_
                     );
  if (pOVar1 != (Object *)0x0) {
    pOVar2 = (Object *)0x0;
    if ((JsonObjectAttribute__Class *)pOVar1->klass ==
        TypeInfo__Newtonsoft__Json__JsonObjectAttribute) {
      pOVar2 = pOVar1;
    }
    if (pOVar2 != (Object *)0x0) {
      return (MemberSerialization__Enum)pOVar2[3].klass;
    }
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataContractAttribute>__GetAttribute_System__Reflection__ICustomAttributeProvider_
                   );
    func_?(&
                    TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataContractAttribute>
                   );
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  while( true ) {
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    bVar3 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                      ((CancellationToken)objectType,(CancellationToken)0x0,(MethodInfo *)0x0);
    if (bVar3 == 0) break;
    if ((
        TypeInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataContractAttribute>
        ->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar1 = CachedAttributeGetter`1[System::Object]::
             CachedAttributeGetter_1_System_Object__GetAttribute
                       ((ICustomAttributeProvider *)objectType,
                        MethodInfo__Newtonsoft__Json__Serialization__CachedAttributeGetter<System::Runtime::Serialization::DataContractAttribute>__GetAttribute_System__Reflection__ICustomAttributeProvider_
                       );
    if ((CancellationTokenSource *)objectType == (CancellationTokenSource *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      MVar5 = (*pcVar4)();
      return MVar5;
    }
    objectType = (Type *)(*(code *)((CancellationTokenSource *)objectType)->klass[4]._1.actualSize)
                                   ();
    if (pOVar1 != (Object *)0x0) {
      return MemberSerialization__Enum_OptIn;
    }
  }
  return MemberSerialization__Enum_OptOut;
}


/* TypeConverter GetTypeConverter(Type) */

TypeConverter *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonTypeReflector::
JsonTypeReflector_GetTypeConverter(Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__ComponentModel__TypeDescriptor);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__ComponentModel__TypeDescriptor->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__ComponentModel__TypeDescriptor);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__ComponentModel__ICustomTypeDescriptor);
    func_?(&TypeInfo__System__ComponentModel__TypeDescriptor);
    func_?(&StringLiteral_type);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__ComponentModel__TypeDescriptor->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__ComponentModel__TypeDescriptor);
  }
  pIVar1 = System.dll::System::ComponentModel::TypeDescriptor::TypeDescriptor_GetDescriptor
                     (type,StringLiteral_type,(MethodInfo *)0x0);
  if (pIVar1 != (ICustomTypeDescriptor *)0x0) {
    pTVar2 = (TypeConverter *)func_?();
    return pTVar2;
  }
  uVar3 = func_?(&stack0xfffffffc);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  pTVar2 = (TypeConverter *)(*pcVar4)();
  return pTVar2;
}


/* JsonTypeReflector() */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonTypeReflector::
     JsonTypeReflector__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Func<System::Type,_System::Type>);
    func_?(&
                    TypeInfo__System__Func<System::Reflection::ICustomAttributeProvider,_System::Type>
                   );
    func_?(&
                    MethodInfo__Newtonsoft__Json__Serialization__JsonTypeReflector__GetAssociateMetadataTypeFromAttribute_System__Type_
                   );
    func_?(&
                    MethodInfo__Newtonsoft__Json__Serialization__JsonTypeReflector__GetJsonConverterTypeFromAttribute_System__Reflection__ICustomAttributeProvider_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<System::Reflection::ICustomAttributeProvider,_System::Type>__ThreadSafeStore_System__Func<System::Reflection::ICustomAttributeProvider,_System::Type>_
                   );
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<System::Type,_System::Type>__ThreadSafeStore_System__Func<System::Type,_System::Type>_
                   );
    func_?(&
                    TypeInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<System::Type,_System::Type>
                   );
    func_?(&
                    TypeInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<System::Reflection::ICustomAttributeProvider,_System::Type>
                   );
    cRam_? = '\x01';
  }
  pRVar1 = (RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)
           func_?(
                          TypeInfo__System__Func<System::Reflection::ICustomAttributeProvider,_System::Type>
                          );
  if (pRVar1 != (RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Reflection::RuntimePropertyInfo+Getter`2[System::Object,System::Object]::
    RuntimePropertyInfo_Getter_2_System_Object_System_Object___ctor
              (pRVar1,(Object *)0x0,
               MethodInfo__Newtonsoft__Json__Serialization__JsonTypeReflector__GetJsonConverterTypeFromAttribute_System__Reflection__ICustomAttributeProvider_
               ,(MethodInfo *)0x0);
    pTVar2 = (ThreadSafeStore_2_System_Object_System_Object_ *)
             func_?(
                            TypeInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<System::Reflection::ICustomAttributeProvider,_System::Type>
                            );
    if (pTVar2 != (ThreadSafeStore_2_System_Object_System_Object_ *)0x0) {
      Json::Utilities::ThreadSafeStore`2[System::Object,System::Object]::
      ThreadSafeStore_2_System_Object_System_Object___ctor
                (pTVar2,(Func_2_Object_Object_ *)pRVar1,
                 MethodInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<System::Reflection::ICustomAttributeProvider,_System::Type>__ThreadSafeStore_System__Func<System::Reflection::ICustomAttributeProvider,_System::Type>_
                );
      TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->static_fields->
      JsonConverterTypeCache =
           (ThreadSafeStore_2_System_Reflection_ICustomAttributeProvider_System_Type_ *)pTVar2;
      func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->static_fields,
                      pTVar2);
      pRVar1 = (RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)
               func_?(TypeInfo__System__Func<System::Type,_System::Type>);
      if (pRVar1 != (RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)0x0) {
        mscorlib.dll::System::Reflection::RuntimePropertyInfo+Getter`2[System::Object,System::
        Object]::RuntimePropertyInfo_Getter_2_System_Object_System_Object___ctor
                  (pRVar1,(Object *)0x0,
                   MethodInfo__Newtonsoft__Json__Serialization__JsonTypeReflector__GetAssociateMetadataTypeFromAttribute_System__Type_
                   ,(MethodInfo *)0x0);
        pTVar2 = (ThreadSafeStore_2_System_Object_System_Object_ *)
                 func_?(
                                TypeInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<System::Type,_System::Type>
                                );
        if (pTVar2 != (ThreadSafeStore_2_System_Object_System_Object_ *)0x0) {
          Json::Utilities::ThreadSafeStore`2[System::Object,System::Object]::
          ThreadSafeStore_2_System_Object_System_Object___ctor
                    (pTVar2,(Func_2_Object_Object_ *)pRVar1,
                     MethodInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<System::Type,_System::Type>__ThreadSafeStore_System__Func<System::Type,_System::Type>_
                    );
          TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->static_fields->
          AssociatedMetadataTypesCache = (ThreadSafeStore_2_System_Type_System_Type_ *)pTVar2;
          func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->
                           static_fields->AssociatedMetadataTypesCache,pTVar2);
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean get_DynamicCodeGeneration() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonTypeReflector::
     JsonTypeReflector_get_DynamicCodeGeneration(MethodInfo *method)

{
  uStack_1 = in_ECX;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    func_?(&MethodInfo__System__Nullable<bool>__Nullable_bool_);
    func_?(&MethodInfo__System__Nullable<bool>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<bool>__get_Value__);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->static_fields->
      _dynamicCodeGeneration).hasValue == 0) {
    uStack_1 = uStack_1 & 0xffff0000;
    mscorlib.dll::System::Nullable`1[SByte]::Nullable_1_SByte___ctor
              ((Nullable_1_SByte_ *)&uStack_1,0,MethodInfo__System__Nullable<bool>__Nullable_bool_);
    if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->static_fields->
    _dynamicCodeGeneration = uStack_1._0_2_;
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  bVar2 = mscorlib.dll::System::Nullable`1[SByte]::Nullable_1_SByte__get_Value
                    ((Nullable_1_SByte_ *)
                     &TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->static_fields->
                      _dynamicCodeGeneration,MethodInfo__System__Nullable<bool>__get_Value__);
  return bVar2;
}


/* ReflectionDelegateFactory get_ReflectionDelegateFactory() */

ReflectionDelegateFactory *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonTypeReflector::
JsonTypeReflector_get_ReflectionDelegateFactory(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__LateBoundReflectionDelegateFactory);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__Utilities__LateBoundReflectionDelegateFactory->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Utilities__LateBoundReflectionDelegateFactory);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__LateBoundReflectionDelegateFactory);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__Utilities__LateBoundReflectionDelegateFactory->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Utilities__LateBoundReflectionDelegateFactory);
  }
  return (ReflectionDelegateFactory *)
         TypeInfo__Newtonsoft__Json__Utilities__LateBoundReflectionDelegateFactory->static_fields->
         _instance;
}


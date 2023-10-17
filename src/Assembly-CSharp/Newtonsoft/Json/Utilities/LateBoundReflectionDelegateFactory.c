
/* Func`1[Object] CreateDefaultConstructor[Object](Type) */

Func_1_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::
LateBoundReflectionDelegateFactory_CreateDefaultConstructor
          (LateBoundReflectionDelegateFactory *this,Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_type);
    cRam_? = '\x01';
  }
  pvVar1 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
    pvVar1 = (void *)func_?(pvVar1);
  }
  iVar2 = func_?(pvVar1);
  if (iVar2 != 0) {
    (*((method->field7_0x1c).rgctx_data[1].method)->virtualMethodPointer)
              (iVar2,(method->field7_0x1c).rgctx_data[1].method);
    *(Type **)(iVar2 + 8) = type;
    func_?(iVar2 + 8,type);
    ValidationUtils::ValidationUtils_ArgumentNotNull
              (*(Object **)(iVar2 + 8),StringLiteral_type,(MethodInfo *)0x0);
    if (*(Type **)(iVar2 + 8) != (Type *)0x0) {
      bVar3 = mscorlib.dll::System::Type::Type_get_IsValueType
                        (*(Type **)(iVar2 + 8),(MethodInfo *)0x0);
      if (bVar3 == 0) {
        pCVar4 = ReflectionUtils::ReflectionUtils_GetDefaultConstructor_1
                           (*(Type **)(iVar2 + 8),1,(MethodInfo *)0x0);
        *(ConstructorInfo **)(iVar2 + 0xc) = pCVar4;
        func_?(iVar2 + 0xc,pCVar4);
        if ((*(byte *)((int)(method->field7_0x1c).rgctx_data[3].rgctxDataDummy + 0xba) & 1) == 0) {
          func_?();
        }
        pFVar5 = (Func_1_Object_ *)func_?();
        if (pFVar5 != (Func_1_Object_ *)0x0) {
          pMVar6 = (method->field7_0x1c).rgctx_data[4].method;
          (*pMVar6->virtualMethodPointer)
                    (pFVar5,iVar2,(method->field7_0x1c).rgctx_data[5].rgctxDataDummy,pMVar6);
          return pFVar5;
        }
      }
      else {
        pvVar1 = (method->field7_0x1c).rgctx_data[3].rgctxDataDummy;
        if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
          pvVar1 = (void *)func_?(pvVar1);
        }
        pFVar5 = (Func_1_Object_ *)func_?(pvVar1);
        if (pFVar5 != (Func_1_Object_ *)0x0) {
          pMVar6 = (method->field7_0x1c).rgctx_data[4].method;
          (*pMVar6->virtualMethodPointer)
                    (pFVar5,iVar2,(method->field7_0x1c).rgctx_data[2].rgctxDataDummy,pMVar6);
          return pFVar5;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pFVar5 = (Func_1_Object_ *)(*pcVar7)();
  return pFVar5;
}


/* Func`2[Object,Object] CreateGet[Object](FieldInfo) */

Func_2_Object_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::
LateBoundReflectionDelegateFactory_CreateGet
          (LateBoundReflectionDelegateFactory *this,FieldInfo_1 *fieldInfo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_fieldInfo);
    cRam_? = '\x01';
  }
  pvVar1 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
    pvVar1 = (void *)func_?(pvVar1);
  }
  iVar2 = func_?(pvVar1);
  if (iVar2 != 0) {
    (*((method->field7_0x1c).rgctx_data[1].method)->virtualMethodPointer)
              (iVar2,(method->field7_0x1c).rgctx_data[1].method);
    *(FieldInfo_1 **)(iVar2 + 8) = fieldInfo;
    func_?(iVar2 + 8,fieldInfo);
    ValidationUtils::ValidationUtils_ArgumentNotNull
              (*(Object **)(iVar2 + 8),StringLiteral_fieldInfo,(MethodInfo *)0x0);
    pvVar1 = (method->field7_0x1c).rgctx_data[3].rgctxDataDummy;
    if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
      pvVar1 = (void *)func_?(pvVar1);
    }
    pFVar3 = (Func_2_Object_Object_ *)func_?(pvVar1);
    if (pFVar3 != (Func_2_Object_Object_ *)0x0) {
      pMVar4 = (method->field7_0x1c).rgctx_data[4].method;
      (*pMVar4->virtualMethodPointer)
                (pFVar3,iVar2,(method->field7_0x1c).rgctx_data[2].rgctxDataDummy,pMVar4);
      return pFVar3;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pFVar3 = (Func_2_Object_Object_ *)(*pcVar5)();
  return pFVar3;
}


/* Func`2[Object,Object] CreateGet[Object](PropertyInfo) */

Func_2_Object_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::
LateBoundReflectionDelegateFactory_CreateGet_1
          (LateBoundReflectionDelegateFactory *this,PropertyInfo_1 *propertyInfo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_propertyInfo);
    cRam_? = '\x01';
  }
  pvVar1 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
    pvVar1 = (void *)func_?(pvVar1);
  }
  iVar2 = func_?(pvVar1);
  if (iVar2 != 0) {
    (*((method->field7_0x1c).rgctx_data[1].method)->virtualMethodPointer)
              (iVar2,(method->field7_0x1c).rgctx_data[1].method);
    *(PropertyInfo_1 **)(iVar2 + 8) = propertyInfo;
    func_?(iVar2 + 8,propertyInfo);
    ValidationUtils::ValidationUtils_ArgumentNotNull
              (*(Object **)(iVar2 + 8),StringLiteral_propertyInfo,(MethodInfo *)0x0);
    pvVar1 = (method->field7_0x1c).rgctx_data[3].rgctxDataDummy;
    if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
      pvVar1 = (void *)func_?(pvVar1);
    }
    pFVar3 = (Func_2_Object_Object_ *)func_?(pvVar1);
    if (pFVar3 != (Func_2_Object_Object_ *)0x0) {
      pMVar4 = (method->field7_0x1c).rgctx_data[4].method;
      (*pMVar4->virtualMethodPointer)
                (pFVar3,iVar2,(method->field7_0x1c).rgctx_data[2].rgctxDataDummy,pMVar4);
      return pFVar3;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pFVar3 = (Func_2_Object_Object_ *)(*pcVar5)();
  return pFVar3;
}


/* MethodCall`2[System.Object,System.Object] CreateMethodCall[Object](MethodBase) */

MethodCall_2_System_Object_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::
LateBoundReflectionDelegateFactory_CreateMethodCall
          (LateBoundReflectionDelegateFactory *this,MethodBase *method_1,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Reflection__ConstructorInfo);
    func_?(&StringLiteral_method);
    cRam_? = '\x01';
  }
  pvVar1 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
    pvVar1 = (void *)func_?(pvVar1);
  }
  iVar2 = func_?(pvVar1);
  if (iVar2 != 0) {
    (*((method->field7_0x1c).rgctx_data[1].method)->virtualMethodPointer)
              (iVar2,(method->field7_0x1c).rgctx_data[1].method);
    *(MethodBase **)(iVar2 + 0xc) = method_1;
    func_?(iVar2 + 0xc,method_1);
    ValidationUtils::ValidationUtils_ArgumentNotNull
              (*(Object **)(iVar2 + 0xc),StringLiteral_method,(MethodInfo *)0x0);
    piVar3 = *(int **)(iVar2 + 0xc);
    if (piVar3 == (int *)0x0) {
      *(undefined4 *)(iVar2 + 8) = 0;
      piVar4 = (int *)0x0;
    }
    else {
      if ((*(byte *)(*piVar3 + 0xb4) <
           (TypeInfo__System__Reflection__ConstructorInfo->_1).typeHierarchyDepth) ||
         (*(ConstructorInfo__Class **)
           (*(int *)(*piVar3 + 100) + -4 +
           (uint)(TypeInfo__System__Reflection__ConstructorInfo->_1).typeHierarchyDepth * 4) !=
          TypeInfo__System__Reflection__ConstructorInfo)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      piVar4 = (int *)0x0;
      if (bVar5) {
        piVar4 = piVar3;
      }
      *(int **)(iVar2 + 8) = piVar4;
      if ((*(byte *)(*piVar3 + 0xb4) <
           (TypeInfo__System__Reflection__ConstructorInfo->_1).typeHierarchyDepth) ||
         (*(ConstructorInfo__Class **)
           (*(int *)(*piVar3 + 100) + -4 +
           (uint)(TypeInfo__System__Reflection__ConstructorInfo->_1).typeHierarchyDepth * 4) !=
          TypeInfo__System__Reflection__ConstructorInfo)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      piVar4 = (int *)0x0;
      if (bVar5) {
        piVar4 = piVar3;
      }
    }
    func_?(iVar2 + 8,piVar4);
    left = *(ConstructorInfo **)(iVar2 + 8);
    if ((TypeInfo__System__Reflection__ConstructorInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Reflection__ConstructorInfo);
    }
    bVar6 = mscorlib.dll::System::Reflection::ConstructorInfo::ConstructorInfo_op_Inequality
                      (left,(ConstructorInfo *)0x0,(MethodInfo *)0x0);
    if (bVar6 == 0) {
      if ((*(byte *)((int)(method->field7_0x1c).rgctx_data[3].rgctxDataDummy + 0xba) & 1) == 0) {
        func_?();
      }
      pMVar7 = (MethodCall_2_System_Object_System_Object_ *)func_?();
      if (pMVar7 != (MethodCall_2_System_Object_System_Object_ *)0x0) {
        pMVar8 = (method->field7_0x1c).rgctx_data[4].method;
        (*pMVar8->virtualMethodPointer)
                  (pMVar7,iVar2,(method->field7_0x1c).rgctx_data[5].rgctxDataDummy,pMVar8);
        return pMVar7;
      }
    }
    else {
      if ((*(byte *)((int)(method->field7_0x1c).rgctx_data[3].rgctxDataDummy + 0xba) & 1) == 0) {
        func_?();
      }
      pMVar7 = (MethodCall_2_System_Object_System_Object_ *)func_?();
      if (pMVar7 != (MethodCall_2_System_Object_System_Object_ *)0x0) {
        pMVar8 = (method->field7_0x1c).rgctx_data[4].method;
        (*pMVar8->virtualMethodPointer)
                  (pMVar7,iVar2,(method->field7_0x1c).rgctx_data[2].rgctxDataDummy,pMVar8);
        return pMVar7;
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  pMVar7 = (MethodCall_2_System_Object_System_Object_ *)(*pcVar9)();
  return pMVar7;
}


/* Action`2[Object,Object] CreateSet[Object](FieldInfo) */

Action_2_Object_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::
LateBoundReflectionDelegateFactory_CreateSet
          (LateBoundReflectionDelegateFactory *this,FieldInfo_1 *fieldInfo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_fieldInfo);
    cRam_? = '\x01';
  }
  pvVar1 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
    pvVar1 = (void *)func_?(pvVar1);
  }
  iVar2 = func_?(pvVar1);
  if (iVar2 != 0) {
    (*((method->field7_0x1c).rgctx_data[1].method)->virtualMethodPointer)
              (iVar2,(method->field7_0x1c).rgctx_data[1].method);
    *(FieldInfo_1 **)(iVar2 + 8) = fieldInfo;
    func_?(iVar2 + 8,fieldInfo);
    ValidationUtils::ValidationUtils_ArgumentNotNull
              (*(Object **)(iVar2 + 8),StringLiteral_fieldInfo,(MethodInfo *)0x0);
    pvVar1 = (method->field7_0x1c).rgctx_data[3].rgctxDataDummy;
    if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
      pvVar1 = (void *)func_?(pvVar1);
    }
    pAVar3 = (Action_2_Object_Object_ *)func_?(pvVar1);
    if (pAVar3 != (Action_2_Object_Object_ *)0x0) {
      pMVar4 = (method->field7_0x1c).rgctx_data[4].method;
      (*pMVar4->virtualMethodPointer)
                (pAVar3,iVar2,(method->field7_0x1c).rgctx_data[2].rgctxDataDummy,pMVar4);
      return pAVar3;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pAVar3 = (Action_2_Object_Object_ *)(*pcVar5)();
  return pAVar3;
}


/* Action`2[Object,Object] CreateSet[Object](PropertyInfo) */

Action_2_Object_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::
LateBoundReflectionDelegateFactory_CreateSet_1
          (LateBoundReflectionDelegateFactory *this,PropertyInfo_1 *propertyInfo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_propertyInfo);
    cRam_? = '\x01';
  }
  pvVar1 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
    pvVar1 = (void *)func_?(pvVar1);
  }
  iVar2 = func_?(pvVar1);
  if (iVar2 != 0) {
    (*((method->field7_0x1c).rgctx_data[1].method)->virtualMethodPointer)
              (iVar2,(method->field7_0x1c).rgctx_data[1].method);
    *(PropertyInfo_1 **)(iVar2 + 8) = propertyInfo;
    func_?(iVar2 + 8,propertyInfo);
    ValidationUtils::ValidationUtils_ArgumentNotNull
              (*(Object **)(iVar2 + 8),StringLiteral_propertyInfo,(MethodInfo *)0x0);
    pvVar1 = (method->field7_0x1c).rgctx_data[3].rgctxDataDummy;
    if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
      pvVar1 = (void *)func_?(pvVar1);
    }
    pAVar3 = (Action_2_Object_Object_ *)func_?(pvVar1);
    if (pAVar3 != (Action_2_Object_Object_ *)0x0) {
      pMVar4 = (method->field7_0x1c).rgctx_data[4].method;
      (*pMVar4->virtualMethodPointer)
                (pAVar3,iVar2,(method->field7_0x1c).rgctx_data[2].rgctxDataDummy,pMVar4);
      return pAVar3;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pAVar3 = (Action_2_Object_Object_ *)(*pcVar5)();
  return pAVar3;
}


/* LateBoundReflectionDelegateFactory() */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::
     LateBoundReflectionDelegateFactory__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__LateBoundReflectionDelegateFactory);
    cRam_? = '\x01';
  }
  value = (LateBoundReflectionDelegateFactory *)
          func_?(TypeInfo__Newtonsoft__Json__Utilities__LateBoundReflectionDelegateFactory)
  ;
  if (value != (LateBoundReflectionDelegateFactory *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__Newtonsoft__Json__Utilities__LateBoundReflectionDelegateFactory->static_fields->
    _instance = value;
    func_?(TypeInfo__Newtonsoft__Json__Utilities__LateBoundReflectionDelegateFactory->
                    static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* ReflectionDelegateFactory get_Instance() */

ReflectionDelegateFactory *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::
LateBoundReflectionDelegateFactory_get_Instance(MethodInfo *method)

{
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



/* IJEnumerable`1[JToken] Ancestors[Object](IEnumerable`1[System.Object]) */

IJEnumerable_1_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Ancestors
          (IEnumerable_1_System_Object_ *source,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_source);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)source,StringLiteral_source,(MethodInfo *)0x0);
  iVar1 = *(int *)(method->field7_0x1c).methodMetadataHandle;
  if ((*(byte *)(iVar1 + 0xba) & 1) == 0) {
    iVar1 = func_?(iVar1);
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_?(iVar1);
  }
  iVar1 = *(int *)(method->field7_0x1c).methodMetadataHandle;
  if ((*(byte *)(iVar1 + 0xba) & 1) == 0) {
    iVar1 = func_?(iVar1);
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar1 == 0) {
    iVar1 = *(int *)(method->field7_0x1c).methodMetadataHandle;
    if ((*(byte *)(iVar1 + 0xba) & 1) == 0) {
      iVar1 = func_?(iVar1);
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_?(iVar1);
    }
    iVar1 = *(int *)(method->field7_0x1c).methodMetadataHandle;
    if ((*(byte *)(iVar1 + 0xba) & 1) == 0) {
      iVar1 = func_?(iVar1);
    }
    uVar2 = **(undefined4 **)(iVar1 + 0x5c);
    pvVar3 = (method->field7_0x1c).rgctx_data[2].rgctxDataDummy;
    if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
      pvVar3 = (void *)func_?(pvVar3);
    }
    iVar1 = func_?(pvVar3);
    if (iVar1 == 0) {
      func_?();
      pcVar4 = (code *)swi(3);
      pIVar5 = (IJEnumerable_1_JToken_ *)(*pcVar4)();
      return pIVar5;
    }
    pMVar6 = (method->field7_0x1c).rgctx_data[3].method;
    (*pMVar6->virtualMethodPointer)
              (iVar1,uVar2,(method->field7_0x1c).rgctx_data[1].rgctxDataDummy,pMVar6);
    iVar7 = *(int *)(method->field7_0x1c).methodMetadataHandle;
    if ((*(byte *)(iVar7 + 0xba) & 1) == 0) {
      iVar7 = func_?(iVar7);
    }
    *(int *)(*(int *)(iVar7 + 0x5c) + 4) = iVar1;
    iVar7 = *(int *)(method->field7_0x1c).methodMetadataHandle;
    if ((*(byte *)(iVar7 + 0xba) & 1) == 0) {
      iVar7 = func_?(iVar7);
    }
    func_?(*(int *)(iVar7 + 0x5c) + 4,iVar1);
  }
  (*((method->field7_0x1c).rgctx_data[4].method)->virtualMethodPointer)
            (source,iVar1,(method->field7_0x1c).rgctx_data[4].rgctxDataDummy);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pIVar8 = LinqExtensions_AsJEnumerable_1
                     (in_stack_9,
                      Newtonsoft__Json__Linq__IJEnumerable<Newtonsoft::Json::Linq::JToken>_MethodInfo__Newtonsoft__Json__Linq__LinqExtensions__AsJEnumerable<Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>_
                     );
  return (IJEnumerable_1_JToken_ *)pIVar8;
}


/* IJEnumerable`1[JToken] AsJEnumerable(IEnumerable`1[Newtonsoft.Json.Linq.JToken]) */

IJEnumerable_1_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_AsJEnumerable
          (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *source,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    Newtonsoft__Json__Linq__IJEnumerable<Newtonsoft::Json::Linq::JToken>_MethodInfo__Newtonsoft__Json__Linq__LinqExtensions__AsJEnumerable<Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>_
                   );
    cRam_? = '\x01';
  }
  pIVar1 = LinqExtensions_AsJEnumerable_1
                     ((IEnumerable_1_System_Object_ *)source,
                      Newtonsoft__Json__Linq__IJEnumerable<Newtonsoft::Json::Linq::JToken>_MethodInfo__Newtonsoft__Json__Linq__LinqExtensions__AsJEnumerable<Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>_
                     );
  return (IJEnumerable_1_JToken_ *)pIVar1;
}


/* IJEnumerable`1[System.Object] AsJEnumerable[Object](IEnumerable`1[System.Object]) */

IJEnumerable_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_AsJEnumerable_1
          (IEnumerable_1_System_Object_ *source,MethodInfo *method)

{
  pMVar1 = method;
  enumerable = source;
  if (source == (IEnumerable_1_System_Object_ *)0x0) {
    return (IJEnumerable_1_System_Object_ *)0x0;
  }
  pvVar2 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
    pvVar2 = (void *)func_?(pvVar2);
  }
  pIVar3 = (IEnumerable_1_System_Object_ *)func_?(enumerable,pvVar2);
  pIVar4 = (pMVar1->field7_0x1c).rgctx_data;
  if (pIVar3 == (IEnumerable_1_System_Object_ *)0x0) {
    source = pIVar3;
    JEnumerable`1[System::Object]::JEnumerable_1_System_Object___ctor
              ((JEnumerable_1_System_Object_ *)&source,enumerable,pIVar4[2].method);
    ppuStack_5 = (pMVar1->field7_0x1c).rgctx_data[1].rgctxDataDummy;
    if ((*(byte *)((int)ppuStack_5 + 0xba) & 1) == 0) {
      ppuStack_5 = (undefined4 **)func_?();
    }
    ppuVar6 = ppuStack_5;
    ppuStack_5 = &ppuStack_5;
    pIVar7 = (IJEnumerable_1_System_Object_ *)func_?(ppuVar6);
  }
  else {
    pvVar2 = pIVar4->rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    pIVar7 = (IJEnumerable_1_System_Object_ *)func_?(enumerable,pvVar2);
    if (pIVar7 == (IJEnumerable_1_System_Object_ *)0x0) {
      func_?(enumerable,pvVar2);
      pcVar8 = (code *)swi(3);
      pIVar7 = (IJEnumerable_1_System_Object_ *)(*pcVar8)();
      return pIVar7;
    }
  }
  return pIVar7;
}


/* IJEnumerable`1[JToken] Children[Object](IEnumerable`1[System.Object]) */

IJEnumerable_1_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Children
          (IEnumerable_1_System_Object_ *source,MethodInfo *method)

{
  source_00 = (IEnumerable_1_System_Object_ *)
              (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                        (source,((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
  if (cRam_? == '\0') {
    func_?(&
                    Newtonsoft__Json__Linq__IJEnumerable<Newtonsoft::Json::Linq::JToken>_MethodInfo__Newtonsoft__Json__Linq__LinqExtensions__AsJEnumerable<Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>_
                    ,unaff_EBP);
    cRam_? = '\x01';
  }
  pIVar1 = LinqExtensions_AsJEnumerable_1
                     (source_00,
                      Newtonsoft__Json__Linq__IJEnumerable<Newtonsoft::Json::Linq::JToken>_MethodInfo__Newtonsoft__Json__Linq__LinqExtensions__AsJEnumerable<Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>_
                     );
  return (IJEnumerable_1_JToken_ *)pIVar1;
}


/* IEnumerable`1[System.Object] Children[Object,Object](IEnumerable`1[System.Object]) */

IEnumerable_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Children_1
          (IEnumerable_1_System_Object_ *source,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_source);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)source,StringLiteral_source,(MethodInfo *)0x0);
  iVar1 = *(int *)(method->field7_0x1c).methodMetadataHandle;
  if ((*(byte *)(iVar1 + 0xba) & 1) == 0) {
    iVar1 = func_?(iVar1);
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_?(iVar1);
  }
  iVar1 = *(int *)(method->field7_0x1c).methodMetadataHandle;
  if ((*(byte *)(iVar1 + 0xba) & 1) == 0) {
    iVar1 = func_?(iVar1);
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar1 == 0) {
    iVar1 = *(int *)(method->field7_0x1c).methodMetadataHandle;
    if ((*(byte *)(iVar1 + 0xba) & 1) == 0) {
      iVar1 = func_?(iVar1);
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_?(iVar1);
    }
    iVar1 = *(int *)(method->field7_0x1c).methodMetadataHandle;
    if ((*(byte *)(iVar1 + 0xba) & 1) == 0) {
      iVar1 = func_?(iVar1);
    }
    uVar2 = **(undefined4 **)(iVar1 + 0x5c);
    pvVar3 = (method->field7_0x1c).rgctx_data[2].rgctxDataDummy;
    if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
      pvVar3 = (void *)func_?(pvVar3);
    }
    iVar1 = func_?(pvVar3);
    if (iVar1 == 0) {
      func_?();
      pcVar4 = (code *)swi(3);
      pIVar5 = (IEnumerable_1_System_Object_ *)(*pcVar4)();
      return pIVar5;
    }
    pMVar6 = (method->field7_0x1c).rgctx_data[3].method;
    (*pMVar6->virtualMethodPointer)
              (iVar1,uVar2,(method->field7_0x1c).rgctx_data[1].rgctxDataDummy,pMVar6);
    iVar7 = *(int *)(method->field7_0x1c).methodMetadataHandle;
    if ((*(byte *)(iVar7 + 0xba) & 1) == 0) {
      iVar7 = func_?(iVar7);
    }
    *(int *)(*(int *)(iVar7 + 0x5c) + 4) = iVar1;
    iVar7 = *(int *)(method->field7_0x1c).methodMetadataHandle;
    if ((*(byte *)(iVar7 + 0xba) & 1) == 0) {
      iVar7 = func_?(iVar7);
    }
    func_?(*(int *)(iVar7 + 0x5c) + 4,iVar1);
  }
  uVar2 = (*((method->field7_0x1c).rgctx_data[4].method)->virtualMethodPointer)
                    (source,iVar1,(method->field7_0x1c).rgctx_data[4].rgctxDataDummy);
  pIVar5 = (IEnumerable_1_System_Object_ *)
           (*((method->field7_0x1c).rgctx_data[5].method)->virtualMethodPointer)
                     (uVar2,(method->field7_0x1c).rgctx_data[5].rgctxDataDummy);
  return pIVar5;
}


/* Object Convert[Object,Object](Object) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Convert
                   (Object *token,MethodInfo *method)

{
  pMVar1 = method;
  pOVar2 = (Object__Class *)token;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeRef__System__IComparable);
    func_?(&TypeRef__System__IFormattable);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (token == (Object *)0x0) {
code_?:
    pOVar3 = (Object *)0x0;
  }
  else {
    pvVar4 = (method->field7_0x1c).rgctx_data[1].rgctxDataDummy;
    if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
      pvVar4 = (void *)func_?(pvVar4);
    }
    iVar5 = func_?(token,pvVar4);
    if (iVar5 == 0) {
code_?:
      if (((((Object *)pOVar2)->klass->_1).typeHierarchyDepth <
           (TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth) ||
         ((((Object *)pOVar2)->klass->_1).typeHierarchy
          [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] !=
          (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
        uVar6 = func_?(&TypeInfo__System__Globalization__CultureInfo);
        func_?(uVar6);
        pOVar2 = (Object__Class *)
                  mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
        uVar6 = func_?(&TypeInfo__System__Object,2);
        args = (Object__Array *)func_?(uVar6);
        func_?(token);
        pTVar7 = mscorlib.dll::System::Object::Object_GetType(token,(MethodInfo *)0x0);
        func_?(args);
        func_?(args,pTVar7);
        func_?(0,pTVar7);
        handle.value = (void *)func_?((method->field7_0x1c).rgctx_data,3);
        uVar6 = func_?(&TypeInfo__System__Type);
        func_?(uVar6);
        pTVar7 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
        func_?(args);
        func_?(args,pTVar7);
        func_?(1,pTVar7);
        pMVar1 = (MethodInfo *)0x0;
        pOVar8 = pOVar2;
        pSVar9 = (String *)func_?(&StringLiteral_Cannot_cast__0__to__1__);
        pSVar9 = Json::Utilities::StringUtils::StringUtils_FormatWith
                           (pSVar9,(IFormatProvider *)pOVar8,args,pMVar1);
        uVar6 = func_?(&TypeInfo__System__InvalidCastException);
        this = (InvalidCastException *)func_?(uVar6);
        func_?(this);
        mscorlib.dll::System::InvalidCastException::InvalidCastException__ctor_1
                  (this,pSVar9,(MethodInfo *)0x0);
        func_?(&
                        System__Object_MethodInfo__Newtonsoft__Json__Linq__LinqExtensions__Convert<System::Object,_System::Object>_System__Object_
                       );
        func_?();
        goto code_?;
      }
      pOVar8 = ((Object *)((int)pOVar2 + 0x28))->klass;
      pvVar4 = (pMVar1->field7_0x1c).rgctx_data[1].rgctxDataDummy;
      if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
        pvVar4 = (void *)func_?(pvVar4);
      }
      iVar5 = func_?(pOVar8,pvVar4);
      if (iVar5 == 0) {
        IVar10 = (pMVar1->field7_0x1c).rgctx_data[2];
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Type);
        }
        pTVar7 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                            ((RuntimeTypeHandle)IVar10,(MethodInfo *)0x0);
        bVar11 = Json::Utilities::ReflectionUtils::ReflectionUtils_IsNullableType
                          (pTVar7,(MethodInfo *)0x0);
        if (bVar11 != 0) {
          if (((Object *)((int)pOVar2 + 0x28))->klass == (Object__Class *)0x0)
          goto code_?;
          pTVar7 = mscorlib.dll::System::Nullable::Nullable_GetUnderlyingType
                              (pTVar7,(MethodInfo *)0x0);
        }
        if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        value = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pOVar2 = (Object__Class *)
                  mscorlib.dll::System::Convert::Convert_ChangeType_1
                            ((Object *)value,pTVar7,(IFormatProvider *)value,(MethodInfo *)0x0);
        pSVar9 = (pMVar1->field7_0x1c).rgctx_data[1].rgctxDataDummy;
      }
      else {
        pOVar2 = ((Object *)((int)pOVar2 + 0x28))->klass;
        pSVar9 = (pMVar1->field7_0x1c).rgctx_data[1].rgctxDataDummy;
      }
      if ((pSVar9[0xb].fields._stringLength & 0x10000) == 0) {
        pSVar9 = (String *)func_?(pSVar9);
      }
      if (pOVar2 == (Object__Class *)0x0) goto code_?;
    }
    else {
      IVar10 = (method->field7_0x1c).rgctx_data[2];
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Type);
      }
      CVar12._source =
           (CancellationTokenSource *)
           mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)IVar10,(MethodInfo *)0x0);
      CVar13._source =
           (CancellationTokenSource *)
           mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)TypeRef__System__IComparable,(MethodInfo *)0x0);
      bVar11 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                        (CVar12,CVar13,(MethodInfo *)0x0);
      if (bVar11 == 0) goto code_?;
      IVar10 = (method->field7_0x1c).rgctx_data[2];
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        method = (MethodInfo *)TypeInfo__System__Type;
        token = (Object *)&UNK_?;
        func_?();
      }
      CVar12._source =
           (CancellationTokenSource *)
           mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)IVar10,(MethodInfo *)0x0);
      CVar13._source =
           (CancellationTokenSource *)
           mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)TypeRef__System__IFormattable,(MethodInfo *)0x0);
      bVar11 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                        (CVar12,CVar13,(MethodInfo *)0x0);
      if (bVar11 == 0) goto code_?;
      pSVar9 = (pMVar1->field7_0x1c).rgctx_data[1].rgctxDataDummy;
      if ((pSVar9[0xb].fields._stringLength & 0x10000) == 0) {
        pSVar9 = (String *)func_?(pSVar9);
      }
    }
    pOVar3 = (Object *)func_?(pOVar2,pSVar9);
    if (pOVar3 == (Object *)0x0) {
code_?:
      func_?(pOVar2,pSVar9);
      pcVar14 = (code *)swi(3);
      pOVar3 = (Object *)(*pcVar14)();
      return pOVar3;
    }
  }
  return pOVar3;
}


/* IEnumerable`1[System.Object] Convert[Object,Object](IEnumerable`1[System.Object]) */

IEnumerable_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Convert_1
          (IEnumerable_1_System_Object_ *source,MethodInfo *method)

{
  pvVar1 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
    pvVar1 = (void *)func_?(pvVar1);
  }
  pIVar2 = (IEnumerable_1_System_Object_ *)func_?(pvVar1);
  if (pIVar2 != (IEnumerable_1_System_Object_ *)0x0) {
    (*((method->field7_0x1c).rgctx_data[1].method)->virtualMethodPointer)
              (pIVar2,0xfffffffe,(method->field7_0x1c).rgctx_data[1].method);
    pIVar2[3].klass = (IEnumerable_1_System_Object___Class *)source;
    func_?(pIVar2 + 3,source);
    return pIVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pIVar2 = (IEnumerable_1_System_Object_ *)(*pcVar3)();
  return pIVar2;
}


/* IJEnumerable`1[JToken] Descendants[Object](IEnumerable`1[System.Object]) */

IJEnumerable_1_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Descendants
          (IEnumerable_1_System_Object_ *source,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_source);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)source,StringLiteral_source,(MethodInfo *)0x0);
  iVar1 = *(int *)(method->field7_0x1c).methodMetadataHandle;
  if ((*(byte *)(iVar1 + 0xba) & 1) == 0) {
    iVar1 = func_?(iVar1);
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_?(iVar1);
  }
  iVar1 = *(int *)(method->field7_0x1c).methodMetadataHandle;
  if ((*(byte *)(iVar1 + 0xba) & 1) == 0) {
    iVar1 = func_?(iVar1);
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar1 == 0) {
    iVar1 = *(int *)(method->field7_0x1c).methodMetadataHandle;
    if ((*(byte *)(iVar1 + 0xba) & 1) == 0) {
      iVar1 = func_?(iVar1);
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_?(iVar1);
    }
    iVar1 = *(int *)(method->field7_0x1c).methodMetadataHandle;
    if ((*(byte *)(iVar1 + 0xba) & 1) == 0) {
      iVar1 = func_?(iVar1);
    }
    uVar2 = **(undefined4 **)(iVar1 + 0x5c);
    pvVar3 = (method->field7_0x1c).rgctx_data[2].rgctxDataDummy;
    if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
      pvVar3 = (void *)func_?(pvVar3);
    }
    iVar1 = func_?(pvVar3);
    if (iVar1 == 0) {
      func_?();
      pcVar4 = (code *)swi(3);
      pIVar5 = (IJEnumerable_1_JToken_ *)(*pcVar4)();
      return pIVar5;
    }
    pMVar6 = (method->field7_0x1c).rgctx_data[3].method;
    (*pMVar6->virtualMethodPointer)
              (iVar1,uVar2,(method->field7_0x1c).rgctx_data[1].rgctxDataDummy,pMVar6);
    iVar7 = *(int *)(method->field7_0x1c).methodMetadataHandle;
    if ((*(byte *)(iVar7 + 0xba) & 1) == 0) {
      iVar7 = func_?(iVar7);
    }
    *(int *)(*(int *)(iVar7 + 0x5c) + 4) = iVar1;
    iVar7 = *(int *)(method->field7_0x1c).methodMetadataHandle;
    if ((*(byte *)(iVar7 + 0xba) & 1) == 0) {
      iVar7 = func_?(iVar7);
    }
    func_?(*(int *)(iVar7 + 0x5c) + 4,iVar1);
  }
  (*((method->field7_0x1c).rgctx_data[4].method)->virtualMethodPointer)
            (source,iVar1,(method->field7_0x1c).rgctx_data[4].rgctxDataDummy);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pIVar8 = LinqExtensions_AsJEnumerable_1
                     (in_stack_9,
                      Newtonsoft__Json__Linq__IJEnumerable<Newtonsoft::Json::Linq::JToken>_MethodInfo__Newtonsoft__Json__Linq__LinqExtensions__AsJEnumerable<Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>_
                     );
  return (IJEnumerable_1_JToken_ *)pIVar8;
}


/* IJEnumerable`1[JProperty] Properties(IEnumerable`1[Newtonsoft.Json.Linq.JObject]) */

IJEnumerable_1_JProperty_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Properties
          (IEnumerable_1_Newtonsoft_Json_Linq_JObject_ *source,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JProperty>_MethodInfo__System__Linq__Enumerable__SelectMany<Newtonsoft::Json::Linq::JObject,_Newtonsoft::Json::Linq::JProperty>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JObject>__System__Func<Newtonsoft::Json::Linq::JObject,_System::Collections::Generic::IEnumerable<Newtonsoft::Json::Linq::JProperty>_>_
                   );
    func_?(&
                    TypeInfo__System__Func<Newtonsoft::Json::Linq::JObject,_System::Collections::Generic::IEnumerable<Newtonsoft::Json::Linq::JProperty>_>
                   );
    func_?(&
                    Newtonsoft__Json__Linq__IJEnumerable<Newtonsoft::Json::Linq::JProperty>_MethodInfo__Newtonsoft__Json__Linq__LinqExtensions__AsJEnumerable<Newtonsoft::Json::Linq::JProperty>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JProperty>_
                   );
    func_?(&
                    MethodInfo__Newtonsoft__Json__Linq__LinqExtensions____c___Properties_b__2_0_Newtonsoft__Json__Linq__JObject_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Linq__LinqExtensions____c);
    func_?(&StringLiteral_source);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)source,StringLiteral_source,(MethodInfo *)0x0);
  if ((TypeInfo__Newtonsoft__Json__Linq__LinqExtensions____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = TypeInfo__Newtonsoft__Json__Linq__LinqExtensions____c->static_fields->__9__2_0;
  if (this == (Func_2_Newtonsoft_Json_Linq_JObject_System_Collections_Generic_IEnumerable_1_Newtonsoft_Json_Linq_JProperty_
               *)0x0) {
    if ((TypeInfo__Newtonsoft__Json__Linq__LinqExtensions____c->_1).cctor_finished_or_no_cctor == 0)
    {
      func_?();
    }
    object = TypeInfo__Newtonsoft__Json__Linq__LinqExtensions____c->static_fields->__9;
    this = (Func_2_Newtonsoft_Json_Linq_JObject_System_Collections_Generic_IEnumerable_1_Newtonsoft_Json_Linq_JProperty_
            *)func_?(
                             TypeInfo__System__Func<Newtonsoft::Json::Linq::JObject,_System::Collections::Generic::IEnumerable<Newtonsoft::Json::Linq::JProperty>_>
                             );
    if (this == (Func_2_Newtonsoft_Json_Linq_JObject_System_Collections_Generic_IEnumerable_1_Newtonsoft_Json_Linq_JProperty_
                 *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      pIVar2 = (IJEnumerable_1_JProperty_ *)(*pcVar1)();
      return pIVar2;
    }
    mscorlib.dll::System::Reflection::RuntimePropertyInfo+Getter`2[System::Object,System::Object]::
    RuntimePropertyInfo_Getter_2_System_Object_System_Object___ctor
              ((RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)this,(Object *)object,
               MethodInfo__Newtonsoft__Json__Linq__LinqExtensions____c___Properties_b__2_0_Newtonsoft__Json__Linq__JObject_
               ,(MethodInfo *)0x0);
    TypeInfo__Newtonsoft__Json__Linq__LinqExtensions____c->static_fields->__9__2_0 = this;
    func_?(&TypeInfo__Newtonsoft__Json__Linq__LinqExtensions____c->static_fields->__9__2_0,
                    this);
  }
  source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_SelectMany
                        (unaff_ESI,
                         (Func_2_Object_System_Collections_Generic_IEnumerable_1_System_Object_ *)
                         this,
                         System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JProperty>_MethodInfo__System__Linq__Enumerable__SelectMany<Newtonsoft::Json::Linq::JObject,_Newtonsoft::Json::Linq::JProperty>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JObject>__System__Func<Newtonsoft::Json::Linq::JObject,_System::Collections::Generic::IEnumerable<Newtonsoft::Json::Linq::JProperty>_>_
                        );
  pIVar3 = LinqExtensions_AsJEnumerable_1
                     (source_00,
                      Newtonsoft__Json__Linq__IJEnumerable<Newtonsoft::Json::Linq::JProperty>_MethodInfo__Newtonsoft__Json__Linq__LinqExtensions__AsJEnumerable<Newtonsoft::Json::Linq::JProperty>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JProperty>_
                     );
  return (IJEnumerable_1_JProperty_ *)pIVar3;
}


/* Object Value[Object](IEnumerable`1[Newtonsoft.Json.Linq.JToken]) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Value
                   (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *value,MethodInfo *method)

{
  pOVar1 = (Object *)
           (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                     (value,((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
  return pOVar1;
}


/* Object Value[Object,Object](IEnumerable`1[System.Object]) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Value_1
                   (IEnumerable_1_System_Object_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JToken);
    func_?(&StringLiteral_source);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)value,StringLiteral_source,(MethodInfo *)0x0);
  if (value != (IEnumerable_1_System_Object_ *)0x0) {
    if (((TypeInfo__Newtonsoft__Json__Linq__JToken->_1).typeHierarchyDepth <=
         (value->klass->_1).typeHierarchyDepth) &&
       ((value->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JToken->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JToken)) {
      pOVar1 = (Object *)(*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)(value);
      return pOVar1;
    }
  }
  uVar2 = func_?(&TypeInfo__System__ArgumentException);
  this = (ArgumentException *)func_?(uVar2);
  func_?(this);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Source_value_must_be_a_JToken_);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,message,method_00);
  func_?(&
                  System__Object_MethodInfo__Newtonsoft__Json__Linq__LinqExtensions__Value<System::Object,_System::Object>_System__Collections__Generic__IEnumerable<System::Object>_
                 );
  func_?();
  pcVar3 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar3)();
  return pOVar1;
}


/* IJEnumerable`1[JToken] Values(IEnumerable`1[Newtonsoft.Json.Linq.JToken], Object) */

IJEnumerable_1_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values
          (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *source,Object *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>_MethodInfo__Newtonsoft__Json__Linq__LinqExtensions__Values<Newtonsoft::Json::Linq::JToken,_Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>__System__Object_
                   );
    cRam_? = '\x01';
  }
  source_00 = LinqExtensions_Values_4
                        ((IEnumerable_1_System_Object_ *)source,key,
                         System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>_MethodInfo__Newtonsoft__Json__Linq__LinqExtensions__Values<Newtonsoft::Json::Linq::JToken,_Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>__System__Object_
                        );
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pIVar1 = LinqExtensions_AsJEnumerable_1
                     (source_00,
                      Newtonsoft__Json__Linq__IJEnumerable<Newtonsoft::Json::Linq::JToken>_MethodInfo__Newtonsoft__Json__Linq__LinqExtensions__AsJEnumerable<Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>_
                     );
  return (IJEnumerable_1_JToken_ *)pIVar1;
}


/* IJEnumerable`1[JToken] Values(IEnumerable`1[Newtonsoft.Json.Linq.JToken]) */

IJEnumerable_1_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_1
          (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *source,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>_MethodInfo__Newtonsoft__Json__Linq__LinqExtensions__Values<Newtonsoft::Json::Linq::JToken,_Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>__System__Object_
                   );
    cRam_? = '\x01';
  }
  source_00 = LinqExtensions_Values_4
                        ((IEnumerable_1_System_Object_ *)source,(Object *)0x0,
                         System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>_MethodInfo__Newtonsoft__Json__Linq__LinqExtensions__Values<Newtonsoft::Json::Linq::JToken,_Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>__System__Object_
                        );
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pIVar1 = LinqExtensions_AsJEnumerable_1
                     (source_00,
                      Newtonsoft__Json__Linq__IJEnumerable<Newtonsoft::Json::Linq::JToken>_MethodInfo__Newtonsoft__Json__Linq__LinqExtensions__AsJEnumerable<Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>_
                     );
  return (IJEnumerable_1_JToken_ *)pIVar1;
}


/* IEnumerable`1[System.Object] Values[Object](IEnumerable`1[Newtonsoft.Json.Linq.JToken]) */

IEnumerable_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
          (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *source,MethodInfo *method)

{
  pIVar1 = (IEnumerable_1_System_Object_ *)
           (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                     (source,0,((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
  return pIVar1;
}


/* IEnumerable`1[System.Object] Values[Object](IEnumerable`1[Newtonsoft.Json.Linq.JToken], Object)
    */

IEnumerable_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_3
          (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *source,Object *key,MethodInfo *method)

{
  pIVar1 = (IEnumerable_1_System_Object_ *)
           (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                     (source,key,((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
  return pIVar1;
}


/* IEnumerable`1[System.Object] Values[Object,Object](IEnumerable`1[System.Object], Object) */

IEnumerable_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_4
          (IEnumerable_1_System_Object_ *source,Object *key,MethodInfo *method)

{
  pvVar1 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
    pvVar1 = (void *)func_?(pvVar1);
  }
  pIVar2 = (IEnumerable_1_System_Object_ *)func_?(pvVar1);
  if (pIVar2 != (IEnumerable_1_System_Object_ *)0x0) {
    (*((method->field7_0x1c).rgctx_data[1].method)->virtualMethodPointer)
              (pIVar2,0xfffffffe,(method->field7_0x1c).rgctx_data[1].method);
    pIVar2[3].klass = (IEnumerable_1_System_Object___Class *)source;
    func_?(pIVar2 + 3,source);
    pIVar2[4].klass = (IEnumerable_1_System_Object___Class *)key;
    func_?(pIVar2 + 4,key);
    return pIVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pIVar2 = (IEnumerable_1_System_Object_ *)(*pcVar3)();
  return pIVar2;
}


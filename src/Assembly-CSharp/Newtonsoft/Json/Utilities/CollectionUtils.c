
/* Boolean AddDistinct[Object](IList`1[System.Object], Object, IEqualityComparer`1[System.Object])
    */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
     CollectionUtils_AddDistinct_1
               (IList_1_System_Object_ *list,Object *value,
               IEqualityComparer_1_System_Object_ *comparer,MethodInfo *method)

{
  cVar1 = (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                    (list,value,comparer,((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
  if (cVar1 != '\0') {
    return 0;
  }
  if (list != (IList_1_System_Object_ *)0x0) {
    pvVar2 = (method->field7_0x1c).rgctx_data[1].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    func_?(2,pvVar2,list,value);
    return 1;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void AddRange(IList, IEnumerable) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::CollectionUtils_AddRange
               (IList *initial,IEnumerable *collection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    void_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__AddRange<System::Object>_System__Collections__Generic__IList<System::Object>__System__Collections__Generic__IEnumerable<System::Object>_
                   );
    func_?(&
                    System__Collections__Generic__IEnumerable<System::Object>_MethodInfo__System__Linq__Enumerable__Cast<System::Object>_System__Collections__IEnumerable_
                   );
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__ListWrapper<System::Object>__ListWrapper_System__Collections__IList_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__ListWrapper<System::Object>);
    func_?(&StringLiteral_initial);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_initial;
  if (initial == (IList *)0x0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
    this_00 = (ArgumentNullException *)func_?(uVar1);
    func_?(this_00);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_00,paramName,(MethodInfo *)0x0);
    uVar1 = func_?(&
                            MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                           );
    func_?(this_00,uVar1);
  }
  else {
    this = (ListWrapper_1_System_Object_ *)
           func_?(TypeInfo__Newtonsoft__Json__Utilities__ListWrapper<System::Object>);
    if (this != (ListWrapper_1_System_Object_ *)0x0) {
      ListWrapper`1[System::Object]::ListWrapper_1_System_Object___ctor_1
                (this,initial,
                 MethodInfo__Newtonsoft__Json__Utilities__ListWrapper<System::Object>__ListWrapper_System__Collections__IList_
                );
      collection_00 =
           System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_4
                     (collection,
                      System__Collections__Generic__IEnumerable<System::Object>_MethodInfo__System__Linq__Enumerable__Cast<System::Object>_System__Collections__IEnumerable_
                     );
      CollectionUtils_AddRange_1
                ((IList_1_System_Object_ *)this,collection_00,
                 void_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__AddRange<System::Object>_System__Collections__Generic__IList<System::Object>__System__Collections__Generic__IEnumerable<System::Object>_
                );
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean AddRangeDistinct[Object](IList`1[System.Object], IEnumerable`1[System.Object],
   IEqualityComparer`1[System.Object]) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
     CollectionUtils_AddRangeDistinct_1
               (IList_1_System_Object_ *list,IEnumerable_1_System_Object_ *values,
               IEqualityComparer_1_System_Object_ *comparer,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    cRam_? = '\x01';
  }
  bStack_4 = 1;
  if (values != (IEnumerable_1_System_Object_ *)0x0) {
    pvVar5 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
    if ((*(byte *)((int)pvVar5 + 0xba) & 1) == 0) {
      pvVar5 = (void *)func_?(pvVar5);
    }
    piVar6 = (int *)func_?(0,pvVar5,values);
    uStack_1 = 1;
    while (piVar6 != (int *)0x0) {
      cVar7 = func_?(0,TypeInfo__System__Collections__IEnumerator,piVar6);
      if (cVar7 == '\0') {
        uStack_1 = 0xffffffff;
        if (piVar6 == (int *)0x0) {
          *unaff_FS_OFFSET = uStack_3;
          return bStack_4;
        }
        func_?(0,TypeInfo__System__IDisposable,piVar6);
        *unaff_FS_OFFSET = uStack_3;
        return bStack_4;
      }
      if (piVar6 == (int *)0x0) break;
      pvVar5 = (method->field7_0x1c).rgctx_data[2].rgctxDataDummy;
      if ((*(byte *)((int)pvVar5 + 0xba) & 1) == 0) {
        pvVar5 = (void *)func_?(pvVar5);
      }
      iVar8 = *piVar6;
      uVar9 = 0;
      if (*(ushort *)(iVar8 + 0xb2) != 0) {
        do {
          if (*(void **)(*(int *)(iVar8 + 0x58) + (uint)uVar9 * 8) == pvVar5) {
            puVar10 = (undefined4 *)
                     (iVar8 + 0xbc + *(int *)(*(int *)(iVar8 + 0x58) + 4 + (uint)uVar9 * 8) * 8);
            goto code_?;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(ushort *)(iVar8 + 0xb2));
      }
      puVar10 = (undefined4 *)func_?(piVar6,pvVar5,0);
code_?:
      uVar11 = (*(code *)*puVar10)(piVar6,puVar10[1]);
      cVar7 = (*((method->field7_0x1c).rgctx_data[4].method)->virtualMethodPointer)
                        (list,uVar11,comparer,(method->field7_0x1c).rgctx_data[4].rgctxDataDummy);
      if (cVar7 == '\0') {
        bStack_4 = 0;
      }
    }
  }
  uVar11 = func_?();
  func_?(uVar11);
  pcVar12 = (code *)swi(3);
  bVar13 = (*pcVar12)();
  return bVar13;
}


/* Void AddRange[Object](IList`1[System.Object], IEnumerable`1[System.Object]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::CollectionUtils_AddRange_1
               (IList_1_System_Object_ *initial,IEnumerable_1_System_Object_ *collection,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    cRam_? = '\x01';
  }
  if (initial == (IList_1_System_Object_ *)0x0) {
    uVar4 = func_?(&TypeInfo__System__ArgumentNullException);
    this = (ArgumentNullException *)func_?(uVar4);
    func_?(this);
    method_00 = (MethodInfo *)0x0;
    paramName = (String *)func_?(&StringLiteral_initial);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,paramName,method_00);
    func_?(&
                    void_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__AddRange<System::Object>_System__Collections__Generic__IList<System::Object>__System__Collections__Generic__IEnumerable<System::Object>_
                   );
    func_?();
  }
  else {
    if (collection == (IEnumerable_1_System_Object_ *)0x0) {
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    pvVar5 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
    if ((*(byte *)((int)pvVar5 + 0xba) & 1) == 0) {
      pvVar5 = (void *)func_?(pvVar5);
    }
    piVar6 = (int *)func_?(0,pvVar5,collection);
    uStack_1 = 1;
    while( true ) {
      if (piVar6 == (int *)0x0) break;
      cVar7 = func_?(0,TypeInfo__System__Collections__IEnumerator,piVar6);
      if (cVar7 == '\0') {
        uStack_1 = 0xffffffff;
        if (piVar6 != (int *)0x0) {
          func_?(0,TypeInfo__System__IDisposable,piVar6);
        }
        goto code_?;
      }
      if (piVar6 == (int *)0x0) break;
      pvVar5 = (method->field7_0x1c).rgctx_data[2].rgctxDataDummy;
      if ((*(byte *)((int)pvVar5 + 0xba) & 1) == 0) {
        pvVar5 = (void *)func_?(pvVar5);
      }
      uVar8 = 0;
      uVar9 = *(ushort *)(*piVar6 + 0xb2);
      if (uVar9 != 0) {
        do {
          if (*(void **)(*(int *)(*piVar6 + 0x58) + (uint)uVar8 * 8) == pvVar5) {
            puVar10 = (undefined4 *)
                     (*(int *)(*(int *)(*piVar6 + 0x58) + 4 + (uint)uVar8 * 8) * 8 + 0xbc + *piVar6
                     );
            goto code_?;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar9);
      }
      puVar10 = (undefined4 *)func_?(piVar6,pvVar5,0);
code_?:
      uVar4 = (*(code *)*puVar10)(piVar6,puVar10[1]);
      pIVar11 = (method->field7_0x1c).rgctx_data[4].rgctxDataDummy;
      if (pIVar11->initialized_and_no_error == 0) {
        pIVar11 = (Il2CppClass *)func_?(pIVar11);
      }
      uVar8 = 0;
      uVar9 = (initial->klass->_1).interface_offsets_count;
      if (uVar9 != 0) {
        do {
          if (initial->klass->interfaceOffsets[uVar8].interfaceType == pIVar11) {
            pVVar12 = &(initial->klass->vtable).IndexOf +
                     initial->klass->interfaceOffsets[uVar8].offset;
            goto code_?;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar9);
      }
      pVVar12 = (VirtualInvokeData *)func_?(initial,pIVar11,2);
code_?:
      (*pVVar12->methodPtr)(initial,uVar4,pVVar12->method);
    }
  }
  uVar4 = func_?();
  func_?(uVar4);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* IEnumerable`1[System.Object] CastValid[Object](IEnumerable) */

IEnumerable_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::CollectionUtils_CastValid
          (IEnumerable *enumerable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Collections__Generic__IEnumerable<System::Object>_MethodInfo__System__Linq__Enumerable__Cast<System::Object>_System__Collections__IEnumerable_
                   );
    func_?(&
                    System__Collections__Generic__IEnumerable<System::Object>_MethodInfo__System__Linq__Enumerable__Where<System::Object>_System__Collections__Generic__IEnumerable<System::Object>__System__Func<System::Object,_bool>_
                   );
    func_?(&TypeInfo__System__Func<System::Object,_bool>);
    func_?(&StringLiteral_enumerable);
    cRam_? = '\x01';
  }
  ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)enumerable,StringLiteral_enumerable,(MethodInfo *)0x0);
  System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_4
            (enumerable,
             System__Collections__Generic__IEnumerable<System::Object>_MethodInfo__System__Linq__Enumerable__Cast<System::Object>_System__Collections__IEnumerable_
            );
  pIVar1 = ((method->field7_0x1c).rgctx_data)->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    pIVar1 = (Il2CppClass *)func_?();
  }
  if (pIVar1->cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pIVar1 = ((method->field7_0x1c).rgctx_data)->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    pIVar1 = (Il2CppClass *)func_?();
  }
  this = *(Func_2_Object_Boolean_ **)((int)pIVar1->static_fields + 4);
  if (this == (Func_2_Object_Boolean_ *)0x0) {
    pIVar1 = ((method->field7_0x1c).rgctx_data)->klass;
    if (pIVar1->initialized_and_no_error == 0) {
      pIVar1 = (Il2CppClass *)func_?();
    }
    if (pIVar1->cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pIVar1 = ((method->field7_0x1c).rgctx_data)->klass;
    if (pIVar1->initialized_and_no_error == 0) {
      pIVar1 = (Il2CppClass *)func_?();
    }
    object = *(Object **)pIVar1->static_fields;
    this = (Func_2_Object_Boolean_ *)func_?();
    if (this == (Func_2_Object_Boolean_ *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      pIVar3 = (IEnumerable_1_System_Object_ *)(*pcVar2)();
      return pIVar3;
    }
    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
              (this,object,(method->field7_0x1c).rgctx_data[1].rgctxDataDummy,(MethodInfo *)0x0);
    pIVar1 = ((method->field7_0x1c).rgctx_data)->klass;
    if (pIVar1->initialized_and_no_error == 0) {
      pIVar1 = (Il2CppClass *)func_?();
    }
    *(Func_2_Object_Boolean_ **)((int)pIVar1->static_fields + 4) = this;
    if ((*(byte *)((int)((method->field7_0x1c).rgctx_data)->rgctxDataDummy + 0xba) & 1) == 0) {
      func_?();
    }
    func_?();
  }
  System.Core.dll::System::Linq::Enumerable::Enumerable_Where_4
            ((IEnumerable_1_System_Object_ *)
             System__Collections__Generic__IEnumerable<System::Object>_MethodInfo__System__Linq__Enumerable__Where<System::Object>_System__Collections__Generic__IEnumerable<System::Object>__System__Func<System::Object,_bool>_
             ,this,
             System__Collections__Generic__IEnumerable<System::Object>_MethodInfo__System__Linq__Enumerable__Where<System::Object>_System__Collections__Generic__IEnumerable<System::Object>__System__Func<System::Object,_bool>_
            );
  pIVar3 = (IEnumerable_1_System_Object_ *)
           (*((method->field7_0x1c).rgctx_data[2].method)->virtualMethodPointer)();
  return pIVar3;
}


/* Boolean ContainsValue[Object](IEnumerable`1[System.Object], Object,
   IEqualityComparer`1[System.Object]) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
     CollectionUtils_ContainsValue
               (IEnumerable_1_System_Object_ *source,Object *value,
               IEqualityComparer_1_System_Object_ *comparer,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    cRam_? = '\x01';
  }
  if (comparer == (IEqualityComparer_1_System_Object_ *)0x0) {
    comparer = (IEqualityComparer_1_System_Object_ *)
               (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                         (((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
  }
  if (source == (IEnumerable_1_System_Object_ *)0x0) {
    uVar4 = func_?(&TypeInfo__System__ArgumentNullException);
    this = (ArgumentNullException *)func_?(uVar4);
    func_?(this);
    method_00 = (MethodInfo *)0x0;
    paramName = (String *)func_?(&StringLiteral_source);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,paramName,method_00);
    func_?(&
                    bool_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__ContainsValue<System::Object>_System__Collections__Generic__IEnumerable<System::Object>__System__Object__System__Collections__Generic__IEqualityComparer<System::Object>_
                   );
    func_?();
  }
  else {
    pvVar5 = (method->field7_0x1c).rgctx_data[2].rgctxDataDummy;
    if ((*(byte *)((int)pvVar5 + 0xba) & 1) == 0) {
      pvVar5 = (void *)func_?(pvVar5);
    }
    iVar6 = func_?(0,pvVar5,source);
    uStack_1 = 1;
    while (iVar6 != 0) {
      cVar7 = func_?(0,TypeInfo__System__Collections__IEnumerator,iVar6);
      if (cVar7 == '\0') {
        uStack_1 = 0xffffffff;
        if (iVar6 != 0) {
          func_?(0,TypeInfo__System__IDisposable,iVar6);
        }
        *unaff_FS_OFFSET = uStack_3;
        return 0;
      }
      if (iVar6 == 0) break;
      pvVar5 = (method->field7_0x1c).rgctx_data[4].rgctxDataDummy;
      if ((*(byte *)((int)pvVar5 + 0xba) & 1) == 0) {
        pvVar5 = (void *)func_?(pvVar5);
      }
      uVar4 = func_?(0,pvVar5,iVar6);
      if (comparer == (IEqualityComparer_1_System_Object_ *)0x0) break;
      pvVar5 = (method->field7_0x1c).rgctx_data[6].rgctxDataDummy;
      if ((*(byte *)((int)pvVar5 + 0xba) & 1) == 0) {
        pvVar5 = (void *)func_?(pvVar5);
      }
      cVar7 = func_?(0,pvVar5,comparer,uVar4,value);
      if (cVar7 != '\0') {
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return 1;
      }
    }
  }
  uVar4 = func_?();
  func_?(uVar4);
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Void CopyFromJaggedToMultidimensionalArray(IList, Array, Int32[]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
     CollectionUtils_CopyFromJaggedToMultidimensionalArray
               (IList *values,Array *multidimensionalArray,Int32__Array *indices,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__ICollection);
    func_?(&TypeInfo__System__Collections__IList);
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  if ((indices == (Int32__Array *)0x0) ||
     (dimension = (MonitorData *)indices->max_length, multidimensionalArray == (Array *)0x0)) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    pMVar1 = (MonitorData *)
             mscorlib.dll::System::Array::Array_GetRank(multidimensionalArray,(MethodInfo *)0x0);
    if (dimension == pMVar1) {
      pOVar2 = CollectionUtils_JaggedArrayGetValue(values,indices,(MethodInfo *)0x0);
      mscorlib.dll::System::Array::Array_SetValue_4
                (multidimensionalArray,pOVar2,indices,(MethodInfo *)0x0);
      return;
    }
    iVar3 = mscorlib.dll::System::Array::Array_GetLength
                      (multidimensionalArray,(int32_t)dimension,(MethodInfo *)0x0);
    pOVar2 = CollectionUtils_JaggedArrayGetValue(values,indices,(MethodInfo *)0x0);
    if (pOVar2 == (Object *)0x0) goto code_?;
    iVar4 = func_?();
    if ((iVar4 == 0) || (iVar4 = func_?(), iVar4 == 0)) goto code_?;
    iVar4 = func_?();
    if (iVar4 == iVar3) {
      multidimensionalArray = (Array *)(dimension + 1);
      indices_00 = (IList *)func_?();
      pMVar1 = (MonitorData *)0x0;
      if (0 < (int)dimension) {
        pIVar5 = indices_00 + 2;
        do {
          if ((MonitorData *)indices->max_length <= pMVar1) goto code_?;
          if (indices_00 == (IList *)0x0) goto code_?;
          if (indices_00[1].monitor <= pMVar1) goto code_?;
          pMVar1 = pMVar1 + 1;
          pIVar5->klass = *(IList__Class **)(((int)indices - (int)indices_00) + (int)pIVar5);
          pIVar5 = (IList *)&pIVar5->monitor;
        } while ((int)pMVar1 < (int)dimension);
      }
      pIVar6 = (IList__Class *)0x0;
      while( true ) {
        iVar3 = mscorlib.dll::System::Array::Array_GetLength
                          (multidimensionalArray,(int32_t)dimension,(MethodInfo *)0x0);
        if (iVar3 <= (int)pIVar6) {
          return;
        }
        if (indices_00 == (IList *)0x0) break;
        if (indices_00[1].monitor <= dimension) goto code_?;
        multidimensionalArray = (Array *)0x0;
        (&indices_00[2].klass)[(int)dimension] = pIVar6;
        CollectionUtils_CopyFromJaggedToMultidimensionalArray
                  (indices_00,(Array *)0x0,(Int32__Array *)indices_00,(MethodInfo *)0x0);
        pIVar6 = (IList__Class *)((int)&(pIVar6->_0).image + 1);
      }
      goto code_?;
    }
  }
  func_?();
  this = (Exception *)func_?();
  func_?();
  message = (String *)func_?();
  mscorlib.dll::System::Exception::Exception__ctor_1(this,message,(MethodInfo *)0x0);
  func_?();
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Object CreateAndPopulateList(Type, Action`2[System.Collections.IList,Boolean]) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
         CollectionUtils_CreateAndPopulateList
                   (Type *listType,Action_2_System_Collections_IList_Boolean_ *populateList,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__System__Collections__BitArray);
    func_?(&TypeInfo__System__Collections__BitArray);
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeRef__System__Collections__Generic__ICollection);
    func_?(&
                    TypeInfo__System__Collections__Generic__ICollection<System::Reflection::ParameterInfo>
                   );
    func_?(&TypeInfo__System__Collections__ICollection);
    func_?(&TypeRef__System__Collections__Generic__IEnumerable);
    func_?(&
                    TypeInfo__System__Collections__Generic__IList<System::Reflection::ParameterInfo>
                   );
    func_?(&TypeRef__System__Collections__IList);
    func_?(&TypeInfo__System__Collections__IList);
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__IWrappedCollection);
    func_?(&MethodInfo__System__Collections__Generic__List<System::Object>__ToArray__);
    func_?(&MethodInfo__System__Collections__Generic__List<System::Object>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<System::Object>);
    func_?(&TypeInfo__System__Object);
    func_?(&TypeRef__System__Collections__ObjectModel__ReadOnlyCollection);
    func_?(&TypeInfo__System__Type);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_populateList);
    func_?(&StringLiteral_listType);
    cRam_? = '\x01';
  }
  pTVar1 = (Type__Class *)listType;
  this = (Type__Class *)StringLiteral_populateList;
  pTVar2 = (Type *)0x0;
  pTVar3 = (Type__Class *)StringLiteral_listType;
  if ((listType == (Type *)0x0) ||
     (pTVar3 = (Type__Class *)StringLiteral_populateList,
     populateList == (Action_2_System_Collections_IList_Boolean_ *)0x0)) {
    this = pTVar3;
    uVar4 = func_?(&TypeInfo__System__ArgumentNullException);
    args = (Type__Class *)func_?(uVar4);
    func_?(args);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              ((ArgumentNullException *)args,(String *)this,(MethodInfo *)0x0);
    iVar5 = func_?(&
                            MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                           );
    pTVar3 = args;
    goto code_?;
  }
  listType = (Type *)((uint)listType & 0xffffff00);
  bVar6 = mscorlib.dll::System::Type::Type_get_IsArray((Type *)pTVar1,(MethodInfo *)0x0);
  pIVar7 = (IList__Class *)TypeRef__System__Collections__ObjectModel__ReadOnlyCollection;
  if (bVar6 != 0) {
code_?:
    this = (Type__Class *)
           func_?(TypeInfo__System__Collections__Generic__List<System::Object>);
    if (this == (Type__Class *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this,
               MethodInfo__System__Collections__Generic__List<System::Object>__List__);
    listType = (Type *)CONCAT31(listType._1_3_,1);
    goto code_?;
  }
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  genericClassDefinition =
       mscorlib.dll::System::Type::Type_GetTypeFromHandle
                 ((RuntimeTypeHandle)pIVar7,(MethodInfo *)0x0);
  bVar6 = ReflectionUtils::ReflectionUtils_InheritsGenericDefinition_1
                    ((Type *)pTVar1,genericClassDefinition,(Type **)&stack0xfffffff8,
                     (MethodInfo *)0x0);
  pIVar8 = TypeRef__System__Collections__IList;
  if (bVar6 == 0) {
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)pIVar8,(MethodInfo *)0x0);
    if (pTVar2 == (Type *)0x0) goto code_?;
    cVar9 = (*(pTVar2->klass->vtable).IsAssignableFrom.methodPtr)
                      (pTVar2,pTVar1,(pTVar2->klass->vtable).IsAssignableFrom.method);
    pIVar8 = TypeRef__System__Collections__Generic__ICollection;
    if (cVar9 == '\0') {
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Type);
      }
      pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)pIVar8,(MethodInfo *)0x0);
      bVar6 = ReflectionUtils::ReflectionUtils_ImplementsGenericDefinition_1
                        ((Type *)pTVar1,pTVar2,(Type **)&stack0xfffffff0,(MethodInfo *)0x0);
      pIVar8 = TypeRef__System__Collections__BitArray;
      if (bVar6 == 0) {
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          in_stack_10 = TypeInfo__System__Type;
          func_?(TypeInfo__System__Type);
        }
        pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                            ((RuntimeTypeHandle)pIVar8,(MethodInfo *)0x0);
        bVar6 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                          ((Object **)pTVar1,(Object **)pTVar2,(MethodInfo *)0x0);
        if (bVar6 != 0) goto code_?;
      }
      else {
        in_stack_10 = (Type__Class *)0x0;
        bVar6 = ReflectionUtils::ReflectionUtils_IsInstantiatableType
                          ((Type *)pTVar1,(MethodInfo *)0x0);
        if (bVar6 != 0) {
          in_stack_11 =
               (Type__Class *)
               mscorlib.dll::System::Activator::Activator_CreateInstance_4
                         ((Type *)pTVar1,(MethodInfo *)0x0);
          in_stack_10 = (Type__Class *)&UNK_?;
          this = (Type__Class *)
                 CollectionUtils_CreateCollectionWrapper
                           ((Object *)in_stack_11,(MethodInfo *)0x0);
code_?:
          if (this != (Type__Class *)0x0) goto code_?;
        }
      }
code_?:
      uVar4 = func_?(&TypeInfo__System__Globalization__CultureInfo);
      func_?(uVar4);
      provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
      uVar4 = func_?(&TypeInfo__System__Object,1);
      args_00 = (Object__Array *)func_?(uVar4);
      func_?(args_00);
      func_?(args_00,pTVar1);
      func_?(0,pTVar1);
      ppSVar12 = &StringLiteral_Cannot_create_and_populate_list_;
      goto code_?;
    }
    bVar6 = ReflectionUtils::ReflectionUtils_IsInstantiatableType((Type *)pTVar1,(MethodInfo *)0x0)
    ;
    pIVar8 = TypeRef__System__Collections__IList;
    if (bVar6 != 0) {
      pOVar13 = mscorlib.dll::System::Activator::Activator_CreateInstance_4
                          ((Type *)pTVar1,(MethodInfo *)0x0);
      if (pOVar13 != (Object *)0x0) {
        pIVar7 = TypeInfo__System__Collections__IList;
        this = (Type__Class *)func_?(pOVar13,TypeInfo__System__Collections__IList);
        if (this == (Type__Class *)0x0) {
          func_?(pOVar13,pIVar7);
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)pIVar8,(MethodInfo *)0x0);
    bVar6 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                      ((Object **)pTVar1,(Object **)pTVar2,(MethodInfo *)0x0);
    if (bVar6 == 0) goto code_?;
    in_stack_11 = (Type__Class *)TypeInfo__System__Collections__Generic__List<System::Object>;
    this = (Type__Class *)func_?();
    if (this == (Type__Class *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this,
               MethodInfo__System__Collections__Generic__List<System::Object>__List__);
code_?:
    (*(populateList->fields)._._.invoke_impl)
              ((populateList->fields)._._.method_code,this,listType,
               (populateList->fields)._._.method);
    if ((char)listType == '\0') {
      iVar5 = func_?(this,TypeInfo__Newtonsoft__Json__Utilities__IWrappedCollection);
      pIVar7 = (IList__Class *)TypeInfo__Newtonsoft__Json__Utilities__IWrappedCollection;
      if (iVar5 == 0) {
        return (Object *)this;
      }
      iVar5 = func_?(this,TypeInfo__Newtonsoft__Json__Utilities__IWrappedCollection);
      pIVar14 = TypeInfo__Newtonsoft__Json__Utilities__IWrappedCollection;
      if ((iVar5 != 0) &&
         (iVar5 = func_?(this,TypeInfo__Newtonsoft__Json__Utilities__IWrappedCollection),
         pIVar7 = (IList__Class *)pIVar14, iVar5 != 0)) {
        pOVar13 = (Object *)
                  func_?(0,TypeInfo__Newtonsoft__Json__Utilities__IWrappedCollection,iVar5)
        ;
        return pOVar13;
      }
      goto code_?;
    }
    bVar6 = mscorlib.dll::System::Type::Type_get_IsArray((Type *)pTVar1,(MethodInfo *)0x0);
    pIVar8 = TypeRef__System__Collections__ObjectModel__ReadOnlyCollection;
    if (bVar6 == 0) {
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Type);
      }
      listType = (Type *)0x0;
      pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)pIVar8,(MethodInfo *)0x0);
      in_stack_10 = (Type__Class *)0x0;
      bVar6 = ReflectionUtils::ReflectionUtils_InheritsGenericDefinition_1
                        ((Type *)pTVar1,pTVar2,&listType,(MethodInfo *)0x0);
      pIVar8 = TypeRef__System__Collections__BitArray;
      if (bVar6 == 0) {
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                            ((RuntimeTypeHandle)pIVar8,(MethodInfo *)0x0);
        bVar6 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                          ((Object **)pTVar1,(Object **)pTVar2,(MethodInfo *)0x0);
        if (bVar6 == 0) {
          return (Object *)this;
        }
        in_stack_15 = TypeInfo__System__Collections__ICollection;
        method = (MethodInfo *)0x1;
        populateList = (Action_2_System_Collections_IList_Boolean_ *)&UNK_?;
        in_stack_16 = this;
        iVar17 = func_?();
        populateList = (Action_2_System_Collections_IList_Boolean_ *)
                       TypeInfo__System__Collections__BitArray;
        listType = (Type *)&UNK_?;
        this_00 = (BitArray *)func_?();
        if (this_00 != (BitArray *)0x0) {
          mscorlib.dll::System::Collections::BitArray::BitArray__ctor
                    (this_00,iVar17,(MethodInfo *)0x0);
          pTVar1 = (Type__Class *)0x0;
          do {
            listType = (Type *)pTVar1;
            iVar5 = func_?(1,TypeInfo__System__Collections__ICollection,this);
            pIVar7 = TypeInfo__System__Collections__IList;
            if (iVar5 <= (int)pTVar1) {
              return (Object *)this_00;
            }
            pIVar18 = (this->_0).image;
            uVar19 = 0;
            uVar20 = *(ushort *)((int)&pIVar18[4].name + 2);
            if (uVar20 != 0) {
              do {
                pTVar1 = (Type__Class *)listType;
                if (*(IList__Class **)(pIVar18[2].name + (uint)uVar19 * 8) ==
                    TypeInfo__System__Collections__IList) {
                  pIVar18 = (this->_0).image;
                  puVar21 = &pIVar18[4].typeCount +
                            *(int *)(pIVar18[2].name + (uint)uVar19 * 8 + 4) * 2;
                  goto code_?;
                }
                uVar19 = uVar19 + 1;
              } while (uVar19 < uVar20);
            }
            puVar21 = (uint32_t *)func_?(this,TypeInfo__System__Collections__IList,0,0);
code_?:
            piVar22 = (int *)(*(code *)*puVar21)(this,pTVar1,puVar21[1]);
            uVar23 = CONCAT44(TypeInfo__System__Boolean,piVar22);
            if (piVar22 == (int *)0x0) break;
            if (*(Il2CppClass **)(*piVar22 + 0x20) != (TypeInfo__System__Boolean->_0).element_class)
            goto code_?;
            pbVar24 = (bool *)func_?(piVar22);
            mscorlib.dll::System::Collections::BitArray::BitArray_set_Item
                      (this_00,(int32_t)pTVar1,*pbVar24,(MethodInfo *)0x0);
            pTVar1 = (Type__Class *)((int)&(pTVar1->_0).image + 1);
          } while( true );
        }
        goto code_?;
      }
      args = (Type__Class *)func_?();
      if (args == (Type__Class *)0x0) goto code_?;
      iVar5 = func_?(this,((args->_0).image)->codeGenModule);
      if (iVar5 == 0) {
        pTVar3 = (Type__Class *)func_?(0);
        goto code_?;
      }
      func_?(0,this);
      if (cRam_? == '\0') {
        func_?(&StringLiteral_type);
        cRam_? = '\x01';
      }
      pIVar7 = (IList__Class *)
                mscorlib.dll::System::Activator::Activator_CreateInstance_2
                          ((Type *)pTVar1,(Object__Array *)args,(MethodInfo *)0x0);
      pTVar1 = (Type__Class *)TypeInfo__System__Collections__IList;
      if (pIVar7 == (IList__Class *)0x0) {
        return (Object *)0x0;
      }
      pOVar13 = (Object *)func_?(pIVar7,TypeInfo__System__Collections__IList);
      this = (Type__Class *)0x0;
      if (pOVar13 != (Object *)0x0) {
        return pOVar13;
      }
      goto code_?;
    }
    in_stack_10 = (Type__Class *)(((Type *)pTVar1)->klass->vtable).GetArrayRank.method;
    iVar5 = (*(((Type *)pTVar1)->klass->vtable).GetArrayRank.methodPtr)(pTVar1,in_stack_10);
    if (1 < iVar5) {
      pTVar2 = ReflectionUtils::ReflectionUtils_GetCollectionItemType
                          ((Type *)pTVar1,(MethodInfo *)0x0);
      iVar17 = (*(((Type *)pTVar1)->klass->vtable).GetArrayRank.methodPtr)
                         (pTVar1,(((Type *)pTVar1)->klass->vtable).GetArrayRank.method);
      pAVar25 = CollectionUtils_ToMultidimensionalArray
                          ((IList *)this,pTVar2,iVar17,(MethodInfo *)0x0);
      return (Object *)pAVar25;
    }
    pIVar18 = (this->_0).image;
    pLVar26 = TypeInfo__System__Collections__Generic__List<System::Object>;
    if ((((TypeInfo__System__Collections__Generic__List<System::Object>->_1).typeHierarchyDepth <=
          *(byte *)&pIVar18[4].nameNoExt) &&
        (uVar27 = pIVar18[2].typeCount,
        *(List_1_System_Object___Class **)
         ((uVar27 - 4) +
         (uint)(TypeInfo__System__Collections__Generic__List<System::Object>->_1).typeHierarchyDepth
         * 4) == TypeInfo__System__Collections__Generic__List<System::Object>)) &&
       (*(List_1_System_Object___Class **)
         ((uVar27 - 4) +
         (uint)(TypeInfo__System__Collections__Generic__List<System::Object>->_1).typeHierarchyDepth
         * 4) == TypeInfo__System__Collections__Generic__List<System::Object>)) {
      this_01 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                UnitySynchronizationContext+WorkRequest]::
                List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                          ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,
                           MethodInfo__System__Collections__Generic__List<System::Object>__ToArray__
                          );
      this = (Type__Class *)
             ReflectionUtils::ReflectionUtils_GetCollectionItemType
                       ((Type *)pTVar1,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Type);
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Type);
      }
      bVar6 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                        ((Object **)this,(Object **)0x0,(MethodInfo *)0x0);
      if (bVar6 == 0) {
        if (this_01 != (UnitySynchronizationContext_WorkRequest__Array *)0x0) {
          iVar17 = mscorlib.dll::System::Array::Array_get_Length((Array *)this_01,(MethodInfo *)0x0)
          ;
          pAVar25 = mscorlib.dll::System::Array::Array_CreateInstance_1
                              ((Type *)this,iVar17,(MethodInfo *)0x0);
          iVar17 = mscorlib.dll::System::Array::Array_get_Length((Array *)this_01,(MethodInfo *)0x0)
          ;
          mscorlib.dll::System::Array::Array_Copy_3
                    ((Array *)this_01,0,pAVar25,0,iVar17,(MethodInfo *)0x0);
          return (Object *)pAVar25;
        }
        goto code_?;
      }
      uVar4 = func_?(&TypeInfo__System__ArgumentNullException);
      args = (Type__Class *)func_?(uVar4);
      func_?(args);
      pMVar28 = (MethodInfo *)0x0;
      pSVar29 = (String *)func_?(&StringLiteral_type);
      mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                ((ArgumentNullException *)args,pSVar29,pMVar28);
      iVar5 = func_?(&
                              MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__ToArray_System__Array__System__Type_
                             );
      pTVar3 = args;
      goto code_?;
    }
  }
  else {
    if ((pTVar2 == (Type *)0x0) ||
       (iVar5 = (*(pTVar2->klass->vtable).GetGenericArguments.methodPtr)(),
       pIVar8 = TypeRef__System__Collections__Generic__IEnumerable, iVar5 == 0))
    goto code_?;
    if (*(int *)(iVar5 + 0xc) != 0) {
      this = *(Type__Class **)(iVar5 + 0x10);
      in_stack_10 = this;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Type);
      }
      pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)pIVar8,(MethodInfo *)0x0);
      pIVar7 = (IList__Class *)func_?(TypeInfo__System__Type,1);
      if (pIVar7 == (IList__Class *)0x0) goto code_?;
      if ((this != (Type__Class *)0x0) &&
         (iVar5 = func_?(this,((pIVar7->_0).image)->codeGenModule), iVar5 == 0)) {
code_?:
        uVar4 = func_?(0);
        func_?(uVar4);
        goto code_?;
      }
      if ((pIVar7->_0).namespaze == (char *)0x0) goto code_?;
      (pIVar7->_0).byval_arg.data.dummy = this;
      func_?(&(pIVar7->_0).byval_arg,this);
      pTVar3 = (Type__Class *)
                ReflectionUtils::ReflectionUtils_MakeGenericType
                          (pTVar2,(Type__Array *)pIVar7,(MethodInfo *)0x0);
      in_stack_11 =
           (Type__Class *)
           mscorlib.dll::System::Type::Type_GetConstructors((Type *)pTVar1,(MethodInfo *)0x0);
      pIVar7 = (IList__Class *)0x0;
      if (in_stack_11 == (Type__Class *)0x0) goto code_?;
      pIVar8 = &(in_stack_11->_0).byval_arg;
      for (; (int)pIVar7 < (int)(in_stack_11->_0).namespaze;
          pIVar7 = (IList__Class *)((int)&(pIVar7->_0).image + 1)) {
        if ((IList__Class *)(in_stack_11->_0).namespaze <= pIVar7) goto code_?;
        pIVar30 = (pIVar8->data).array;
        if ((pIVar30 == (Il2CppArrayType *)0x0) ||
           (this = (Type__Class *)
                   (**(code **)&pIVar30->etype[0x26].attrs)(pIVar30,pIVar30->etype[0x27].data.dummy),
           this == (Type__Class *)0x0)) goto code_?;
        iVar5 = func_?(0,
                                TypeInfo__System__Collections__Generic__ICollection<System::Reflection::ParameterInfo>
                                ,this);
        if (iVar5 == 1) {
          iVar5 = func_?(0,
                                  TypeInfo__System__Collections__Generic__IList<System::Reflection::ParameterInfo>
                                  ,this,0);
          if ((iVar5 == 0) ||
             (this = pTVar3, uVar4 = func_?(10,iVar5), this == (Type__Class *)0x0))
          goto code_?;
          pTVar3 = this;
          cVar9 = func_?(0x15,this,uVar4);
          if (cVar9 != '\0') {
            if (cRam_? == '\0') {
              func_?(&
                              System__Object__MethodInfo__System__Array__Empty<System::Object>______
                             );
              func_?(&TypeInfo__System__Collections__IList);
              func_?(&TypeRef__System__Collections__Generic__List);
              func_?(&TypeInfo__System__Type);
              func_?(&StringLiteral_listType);
              cRam_? = '\x01';
            }
            pIVar8 = TypeRef__System__Collections__Generic__List;
            this = (Type__Class *)0x0;
            in_stack_11 = (Type__Class *)StringLiteral_listType;
            if (in_stack_10 == (Type__Class *)0x0) goto code_?;
            if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__System__Type);
            }
            pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                ((RuntimeTypeHandle)pIVar8,(MethodInfo *)0x0);
            pMVar28 = System__Object__MethodInfo__System__Array__Empty<System::Object>______;
            iVar5 = *(int *)(System__Object__MethodInfo__System__Array__Empty<System::Object>______
                            ->field7_0x1c).methodMetadataHandle;
            if ((*(byte *)(iVar5 + 0xba) & 1) == 0) {
              iVar5 = func_?(iVar5);
            }
            if (*(int *)(iVar5 + 0x74) == 0) {
              func_?(iVar5);
            }
            iVar5 = *(int *)(pMVar28->field7_0x1c).methodMetadataHandle;
            if ((*(byte *)(iVar5 + 0xba) & 1) == 0) {
              iVar5 = func_?(iVar5);
            }
            args = (Type__Class *)
                   ReflectionUtils::ReflectionUtils_CreateGeneric
                             (pTVar2,(Type *)in_stack_10,
                              (Object__Array *)**(undefined4 **)(iVar5 + 0x5c),(MethodInfo *)0x0);
            if (args == (Type__Class *)0x0) {
              this = (Type__Class *)0x0;
              in_stack_10 = (Type__Class *)TypeInfo__System__Collections__IList;
            }
            else {
              in_stack_10 = (Type__Class *)&UNK_?;
              in_stack_11 = args;
              this = (Type__Class *)func_?();
              if (this == (Type__Class *)0x0) goto code_?;
            }
            listType = (Type *)CONCAT31(listType._1_3_,1);
            goto code_?;
          }
        }
        pIVar8 = (Il2CppType *)&pIVar8->attrs;
      }
      uVar4 = func_?(&TypeInfo__System__Globalization__CultureInfo);
      func_?(uVar4);
      provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
      uVar4 = func_?(&TypeInfo__System__Object,2);
      args_00 = (Object__Array *)func_?(uVar4);
      func_?(args_00);
      func_?(args_00,pTVar1);
      func_?(0,pTVar1);
      pTVar1 = pTVar3;
      func_?(args_00);
      func_?(args_00,pTVar1);
      func_?(1,pTVar1);
      ppSVar12 = &StringLiteral_Read_only_type__0__does_not_have;
code_?:
      pMVar28 = (MethodInfo *)0x0;
      pSVar29 = (String *)func_?(ppSVar12);
      args = (Type__Class *)
             StringUtils::StringUtils_FormatWith
                       (pSVar29,(IFormatProvider *)provider,args_00,pMVar28);
      uVar4 = func_?(&TypeInfo__System__Exception);
      this = (Type__Class *)func_?(uVar4);
      func_?(this);
      mscorlib.dll::System::Exception::Exception__ctor_1
                ((Exception *)this,(String *)args,(MethodInfo *)0x0);
      iVar5 = func_?(&
                              MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__CreateAndPopulateList_System__Type__System__Action<System::Collections::IList,_bool>_
                             );
      pTVar3 = this;
code_?:
      func_?(pTVar3,iVar5);
code_?:
      func_?(args,in_stack_10);
code_?:
      uVar4 = func_?(&TypeInfo__System__ArgumentNullException);
      pIVar7 = (IList__Class *)func_?(uVar4);
      func_?(pIVar7);
      mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                ((ArgumentNullException *)pIVar7,(String *)in_stack_11,(MethodInfo *)0x0);
      uVar4 = func_?(&
                               MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                              );
      func_?(pIVar7,uVar4);
    }
code_?:
    func_?();
code_?:
    uVar23 = func_?(this,pIVar7);
code_?:
    func_?(uVar23);
code_?:
    func_?(pIVar7,pTVar1);
    pLVar26 = extraout_EDX;
  }
  func_?(this,pLVar26);
code_?:
  func_?();
  pcVar31 = (code *)swi(3);
  pOVar13 = (Object *)(*pcVar31)();
  return pOVar13;
}


/* IWrappedCollection CreateCollectionWrapper(Object) */

IWrappedCollection *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
CollectionUtils_CreateCollectionWrapper(Object *list,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__CollectionWrapper<System::Object>__CollectionWrapper_System__Collections__IList_
                   );
    func_?(&TypeRef__Newtonsoft__Json__Utilities__CollectionWrapper);
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__CollectionWrapper<System::Object>);
    func_?(&
                    TypeInfo__System__Func<System::Type,_System::Collections::Generic::IList<System::Object>,_System::Object>
                   );
    func_?(&TypeRef__System__Collections__Generic__ICollection);
    func_?(&TypeInfo__System__Collections__IList);
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__IWrappedCollection);
    func_?(&TypeInfo__System__Object);
    func_?(&TypeInfo__System__Type);
    func_?(&TypeInfo__System__Type);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils____c__DisplayClass25_0___CreateCollectionWrapper_b__0_System__Type__System__Collections__Generic__IList<System::Object>_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__CollectionUtils____c__DisplayClass25_0);
    func_?(&StringLiteral_list);
    cRam_? = '\x01';
  }
  paramName = (IList__Class *)
              func_?(
                             TypeInfo__Newtonsoft__Json__Utilities__CollectionUtils____c__DisplayClass25_0
                             );
  genericTypeDefinition = paramName;
  if (paramName == (IList__Class *)0x0) goto code_?;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)paramName,ExceptionArgument__Enum_obj,unaff_EDI);
  (paramName->_0).namespaze = (char *)list;
  func_?(&(paramName->_0).namespaze,list);
  this_00 = (IWrappedCollection__Class *)StringLiteral_list;
  if ((paramName->_0).namespaze == (char *)0x0) goto code_?;
  pTVar1 = mscorlib.dll::System::Object::Object_GetType
                     ((Object *)(paramName->_0).namespaze,(MethodInfo *)0x0);
  handle = TypeRef__System__Collections__Generic__ICollection;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  genericInterfaceDefinition =
       mscorlib.dll::System::Type::Type_GetTypeFromHandle
                 ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  bVar2 = ReflectionUtils::ReflectionUtils_ImplementsGenericDefinition_1
                    (pTVar1,genericInterfaceDefinition,(Type **)&(paramName->_0).name,
                     (MethodInfo *)0x0);
  if (bVar2 == 0) {
    iVar3 = func_?();
    if (iVar3 == 0) {
code_?:
      func_?();
      func_?();
      paramName = (IList__Class *)
                  mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
      func_?();
      args = (Object__Array *)func_?();
      func_?();
      this = (Object *)(genericTypeDefinition->_0).namespaze;
      func_?();
      pTVar1 = mscorlib.dll::System::Object::Object_GetType(this,(MethodInfo *)0x0);
      func_?(args);
      func_?(args,pTVar1);
      func_?();
      pSVar4 = (String *)func_?();
      pSVar4 = StringUtils::StringUtils_FormatWith
                         (pSVar4,(IFormatProvider *)paramName,args,(MethodInfo *)0x0);
      func_?();
      this_00 = (IWrappedCollection__Class *)func_?();
      func_?();
      mscorlib.dll::System::Exception::Exception__ctor_1
                ((Exception *)this_00,pSVar4,(MethodInfo *)0x0);
      func_?();
      func_?();
    }
    else {
      pSVar4 = (String *)(paramName->_0).namespaze;
      this_00 = (IWrappedCollection__Class *)func_?();
      paramName = TypeInfo__System__Collections__IList;
      if (this_00 == (IWrappedCollection__Class *)0x0) goto code_?;
      pMVar5 = 
      MethodInfo__Newtonsoft__Json__Utilities__CollectionWrapper<System::Object>__CollectionWrapper_System__Collections__IList_
      ;
      if (pSVar4 == (String *)0x0) {
        list_00 = (IList *)0x0;
code_?:
        CollectionWrapper`1[System::Object]::CollectionWrapper_1_System_Object___ctor_1
                  ((CollectionWrapper_1_System_Object_ *)this_00,list_00,pMVar5);
        return (IWrappedCollection *)this_00;
      }
      list_00 = (IList *)func_?(pSVar4,TypeInfo__System__Collections__IList);
      if (list_00 != (IList *)0x0) goto code_?;
    }
    func_?(pSVar4,paramName);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    func_?(pSVar4);
code_?:
    uVar6 = func_?(&TypeInfo__System__ArgumentNullException);
    pAVar7 = (ArgumentNullException *)func_?(uVar6);
    func_?(pAVar7);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (pAVar7,(String *)paramName,(MethodInfo *)0x0);
    uVar6 = func_?(&
                            MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                           );
    func_?(pAVar7,uVar6);
  }
  else {
    pTVar1 = ReflectionUtils::ReflectionUtils_GetCollectionItemType
                       ((Type *)((String__Fields *)&(paramName->_0).name)->_stringLength,
                        (MethodInfo *)0x0);
    this_01 = (MethodCall_2_System_Object_System_Object_ *)func_?();
    if (this_01 == (MethodCall_2_System_Object_System_Object_ *)0x0) {
code_?:
      func_?();
      goto code_?;
    }
    MethodCall`2[System::Object,System::Object]::MethodCall_2_System_Object_System_Object___ctor
              (this_01,(Object *)paramName,
               MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils____c__DisplayClass25_0___CreateCollectionWrapper_b__0_System__Type__System__Collections__Generic__IList<System::Object>_
               ,(MethodInfo *)0x0);
    pSVar4 = (String *)TypeRef__Newtonsoft__Json__Utilities__CollectionWrapper;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    genericTypeDefinition =
         (IList__Class *)
         mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)pSVar4,(MethodInfo *)0x0);
    iVar3 = 1;
    this_00 = (IWrappedCollection__Class *)func_?(TypeInfo__System__Type);
    if (this_00 == (IWrappedCollection__Class *)0x0) goto code_?;
    if ((pTVar1 != (Type *)0x0) &&
       (iVar8 = func_?(pTVar1,((this_00->_0).image)->codeGenModule), iVar8 == 0))
    goto code_?;
    if ((this_00->_0).namespaze != (char *)0x0) {
      (this_00->_0).byval_arg.data.dummy = pTVar1;
      func_?(&(this_00->_0).byval_arg,pTVar1);
      pSVar4 = (String *)func_?(TypeInfo__System__Object,1);
      paramName = (IList__Class *)(paramName->_0).namespaze;
      if (pSVar4 == (String *)0x0) goto code_?;
      if ((paramName != (IList__Class *)0x0) &&
         (iVar8 = func_?(paramName,
                                  *(undefined4 *)
                                   (((_union_86 *)&pSVar4->klass)->__klassIndex + 0x20)), iVar8 == 0
         )) goto code_?;
      if (*(int *)&(pSVar4->fields)._firstChar == 0) goto code_?;
      ((_union_86 *)&pSVar4[1].klass)->typeHandle = (Il2CppMetadataTypeHandle)paramName;
      func_?(pSVar4 + 1,paramName);
      if (cRam_? == '\0') {
        func_?(&
                        System__Type__MethodInfo__System__Linq__Enumerable__ToArray<System::Type>_System__Collections__Generic__IEnumerable<System::Type>_____
                       );
        func_?(&
                        void_MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNullOrEmpty<System::Type>_System__Collections__Generic__ICollection<System::Type>__System__String_
                       );
        func_?(&StringLiteral_genericTypeDefinition);
        func_?(&StringLiteral_createInstance);
        func_?(&StringLiteral_innerTypes);
        cRam_? = '\x01';
      }
      paramName = (IList__Class *)StringLiteral_genericTypeDefinition;
      if (genericTypeDefinition != (IList__Class *)0x0) {
        ValidationUtils::ValidationUtils_ArgumentNotNullOrEmpty_3
                  ((ICollection_1_System_Object_ *)this_00,StringLiteral_innerTypes,
                   void_MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNullOrEmpty<System::Type>_System__Collections__Generic__ICollection<System::Type>__System__String_
                  );
        innerTypes = (Type__Array *)
                     System.Core.dll::System::Linq::Enumerable::Enumerable_ToArray_2
                               ((IEnumerable_1_System_Object_ *)this_00,
                                System__Type__MethodInfo__System__Linq__Enumerable__ToArray<System::Type>_System__Collections__Generic__IEnumerable<System::Type>_____
                               );
        pTVar1 = ReflectionUtils::ReflectionUtils_MakeGenericType
                           ((Type *)genericTypeDefinition,innerTypes,(MethodInfo *)0x0);
        pSVar4 = (String *)
                 (**(code **)(iVar3 + 0xc))
                           (*(undefined4 *)(iVar3 + 0x20),pTVar1,pSVar4,
                            *(undefined4 *)(iVar3 + 0x14));
        this_00 = TypeInfo__Newtonsoft__Json__Utilities__IWrappedCollection;
        if (pSVar4 == (String *)0x0) {
          return (IWrappedCollection *)0x0;
        }
        pIVar9 = (IWrappedCollection *)func_?(pSVar4);
        if (pIVar9 != (IWrappedCollection *)0x0) {
          return pIVar9;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  uVar6 = func_?(&TypeInfo__System__ArgumentNullException);
  pAVar7 = (ArgumentNullException *)func_?(uVar6);
  func_?(pAVar7);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (pAVar7,(String *)this_00,(MethodInfo *)0x0);
  uVar6 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                         );
  func_?(pAVar7,uVar6);
  pcVar10 = (code *)swi(3);
  pIVar9 = (IWrappedCollection *)(*pcVar10)();
  return pIVar9;
}


/* IWrappedDictionary CreateDictionaryWrapper(Object) */

IWrappedDictionary *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
CollectionUtils_CreateDictionaryWrapper(Object *dictionary,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__DictionaryWrapper<System::Object,_System::Object>__DictionaryWrapper_System__Collections__IDictionary_
                   );
    func_?(&TypeRef__Newtonsoft__Json__Utilities__DictionaryWrapper);
    func_?(&
                    TypeInfo__Newtonsoft__Json__Utilities__DictionaryWrapper<System::Object,_System::Object>
                   );
    func_?(&
                    TypeInfo__System__Func<System::Type,_System::Collections::Generic::IList<System::Object>,_System::Object>
                   );
    func_?(&TypeRef__System__Collections__Generic__IDictionary);
    func_?(&TypeInfo__System__Collections__IDictionary);
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__IWrappedDictionary);
    func_?(&TypeInfo__System__Object);
    func_?(&TypeInfo__System__Type);
    func_?(&TypeInfo__System__Type);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils____c__DisplayClass27_0___CreateDictionaryWrapper_b__0_System__Type__System__Collections__Generic__IList<System::Object>_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__CollectionUtils____c__DisplayClass27_0);
    func_?(&StringLiteral_dictionary);
    cRam_? = '\x01';
  }
  paramName.dummy =
       (void *)func_?(
                              TypeInfo__Newtonsoft__Json__Utilities__CollectionUtils____c__DisplayClass27_0
                              );
  if (paramName.dummy == (IDictionary__Class *)0x0) goto code_?;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)paramName.typeHandle,ExceptionArgument__Enum_obj,unaff_EDI);
  (paramName.generic_class)->cached_class = (Il2CppClass *)dictionary;
  func_?(&(paramName.array)->lobounds,dictionary);
  _Var6 = (_union_86)StringLiteral_dictionary;
  if ((paramName.array)->lobounds == (int *)0x0) goto code_?;
  pTVar1 = mscorlib.dll::System::Object::Object_GetType
                     ((Object *)(paramName.generic_class)->cached_class,(MethodInfo *)0x0);
  pIVar2 = TypeRef__System__Collections__Generic__IDictionary;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  genericInterfaceDefinition =
       mscorlib.dll::System::Type::Type_GetTypeFromHandle
                 ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
  bVar3 = ReflectionUtils::ReflectionUtils_ImplementsGenericDefinition_1
                    (pTVar1,genericInterfaceDefinition,(Type **)&(paramName.array)->sizes,
                     (MethodInfo *)0x0);
  if (bVar3 == 0) {
    iVar4 = func_?();
    if (iVar4 == 0) {
code_?:
      func_?();
      func_?();
      pcVar5 = &UNK_?;
      paramName.typeHandle =
           (Il2CppMetadataTypeHandle)
           mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
      func_?();
      args = (Object__Array *)func_?();
      func_?();
      this = *(Object **)(pcVar5 + 0xc);
      func_?();
      mscorlib.dll::System::Object::Object_GetType(this,(MethodInfo *)0x0);
      func_?();
      pOStack_6 = args;
      func_?();
      func_?();
      pMVar7 = (MethodInfo *)0x0;
      _Var6.typeHandle = paramName.typeHandle;
      pSVar8 = (String *)func_?();
      pSVar8 = StringUtils::StringUtils_FormatWith
                         (pSVar8,(IFormatProvider *)_Var6.typeHandle,args,pMVar7);
      func_?();
      _Var6.dummy = (void *)func_?();
      func_?();
      mscorlib.dll::System::Exception::Exception__ctor_1
                ((Exception *)_Var6.typeHandle,pSVar8,(MethodInfo *)0x0);
      func_?();
      func_?();
    }
    else {
      pSVar8 = (String *)(paramName.array)->lobounds;
      _Var6.dummy = (void *)func_?();
      paramName = (_union_86)TypeInfo__System__Collections__IDictionary;
      if (_Var6.dummy == (IWrappedDictionary__Class *)0x0) goto code_?;
      pMVar7 = 
      MethodInfo__Newtonsoft__Json__Utilities__DictionaryWrapper<System::Object,_System::Object>__DictionaryWrapper_System__Collections__IDictionary_
      ;
      if (pSVar8 == (String *)0x0) {
        dictionary_00 = (IDictionary *)0x0;
code_?:
        DictionaryWrapper`2[System::Object,System::Object]::
        DictionaryWrapper_2_System_Object_System_Object___ctor_1
                  ((DictionaryWrapper_2_System_Object_System_Object_ *)_Var6.typeHandle,
                   dictionary_00,pMVar7);
        return _Var6.dummy;
      }
      dictionary_00 =
           (IDictionary *)func_?(pSVar8,TypeInfo__System__Collections__IDictionary);
      if (dictionary_00 != (IDictionary *)0x0) goto code_?;
    }
    func_?(pSVar8,paramName.dummy);
code_?:
    uVar9 = func_?(0);
    func_?(uVar9);
code_?:
    uVar9 = func_?(0);
    func_?(uVar9);
code_?:
    uVar9 = func_?(0);
    func_?(uVar9);
code_?:
    func_?();
code_?:
    uVar9 = func_?(&TypeInfo__System__ArgumentNullException);
    pAVar10 = (ArgumentNullException *)func_?(uVar9);
    func_?(pAVar10);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (pAVar10,(String *)paramName.typeHandle,(MethodInfo *)0x0);
    uVar9 = func_?(&
                            MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                           );
    func_?(pAVar10,uVar9);
  }
  else {
    ReflectionUtils::ReflectionUtils_GetDictionaryKeyValueTypes
              ((((Type__Fields *)&((paramName.generic_class)->context).method_inst)->_impl).value,
               (Type **)&stack0xfffffff8,(Type **)&stack0xffffffec,(MethodInfo *)0x0);
    pOStack_6 = (Object__Array *)0x0;
    keyType.dummy = &pOStack_6;
    ReflectionUtils::ReflectionUtils_GetDictionaryKeyValueTypes
              ((((Type__Fields *)&((paramName.generic_class)->context).method_inst)->_impl).value,
               keyType.dummy,(Type **)&stack0xfffffff4,(MethodInfo *)0x0);
    _Var6.dummy = &UNK_?;
    this_00 = (MethodCall_2_System_Object_System_Object_ *)func_?();
    if (this_00 == (MethodCall_2_System_Object_System_Object_ *)0x0) {
code_?:
      func_?();
      goto code_?;
    }
    MethodCall`2[System::Object,System::Object]::MethodCall_2_System_Object_System_Object___ctor
              (this_00,(Object *)paramName.typeHandle,
               MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils____c__DisplayClass27_0___CreateDictionaryWrapper_b__0_System__Type__System__Collections__Generic__IList<System::Object>_
               ,(MethodInfo *)0x0);
    pIVar2 = TypeRef__Newtonsoft__Json__Utilities__DictionaryWrapper;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
    iVar4 = 2;
    collection = (ICollection_1_System_Object_ *)func_?(TypeInfo__System__Type);
    if (collection == (ICollection_1_System_Object_ *)0x0) goto code_?;
    if ((_Var6.dummy != (IWrappedDictionary__Class *)0x0) &&
       (iVar11 = func_?(_Var6.dummy,(collection->klass->_0).element_class), iVar11 == 0))
    goto code_?;
    if (collection[1].monitor != (MonitorData *)0x0) {
      ((_union_86 *)(collection + 2))->typeHandle = (Il2CppMetadataTypeHandle)_Var6;
      func_?(collection + 2,_Var6.dummy);
      _Var6 = keyType;
      if ((_Var6.dummy != (IWrappedDictionary__Class *)0x0) &&
         (iVar11 = func_?(_Var6.dummy,(collection->klass->_0).element_class), iVar11 == 0))
      goto code_?;
      if (collection[1].monitor < (MonitorData *)0x2) goto code_?;
      collection[2].monitor = (MonitorData *)_Var6;
      func_?(&collection[2].monitor,_Var6.dummy);
      _Var6.dummy = (void *)func_?(TypeInfo__System__Object,1);
      paramName = (_union_86)(paramName.generic_class)->cached_class;
      if (_Var6.dummy == (IWrappedDictionary__Class *)0x0) goto code_?;
      if ((paramName.dummy != (IDictionary__Class *)0x0) &&
         (iVar11 = func_?(paramName.dummy,
                                  ((Il2CppClass_0 *)&(_Var6.array)->etype)->image->codeGenModule),
         iVar11 == 0)) goto code_?;
      if ((_Var6.array)->lobounds == (int *)0x0) goto code_?;
      ((_union_86 *)(_Var6.__klassIndex + 0x10))->typeHandle = (Il2CppMetadataTypeHandle)paramName;
      func_?((Il2CppType *)(_Var6.__klassIndex + 0x10),paramName.dummy);
      if (cRam_? == '\0') {
        func_?(&
                        System__Type__MethodInfo__System__Linq__Enumerable__ToArray<System::Type>_System__Collections__Generic__IEnumerable<System::Type>_____
                       );
        func_?(&
                        void_MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNullOrEmpty<System::Type>_System__Collections__Generic__ICollection<System::Type>__System__String_
                       );
        func_?(&StringLiteral_genericTypeDefinition);
        func_?(&StringLiteral_createInstance);
        func_?(&StringLiteral_innerTypes);
        cRam_? = '\x01';
      }
      paramName = (_union_86)StringLiteral_genericTypeDefinition;
      if (pTVar1 != (Type *)0x0) {
        ValidationUtils::ValidationUtils_ArgumentNotNullOrEmpty_3
                  (collection,StringLiteral_innerTypes,
                   void_MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNullOrEmpty<System::Type>_System__Collections__Generic__ICollection<System::Type>__System__String_
                  );
        innerTypes = (Type__Array *)
                     System.Core.dll::System::Linq::Enumerable::Enumerable_ToArray_2
                               ((IEnumerable_1_System_Object_ *)collection,
                                System__Type__MethodInfo__System__Linq__Enumerable__ToArray<System::Type>_System__Collections__Generic__IEnumerable<System::Type>_____
                               );
        pTVar1 = ReflectionUtils::ReflectionUtils_MakeGenericType
                           (pTVar1,innerTypes,(MethodInfo *)0x0);
        iVar4 = (**(code **)(iVar4 + 0xc))
                          (*(undefined4 *)(iVar4 + 0x20),pTVar1,_Var6.dummy,
                           *(undefined4 *)(iVar4 + 0x14));
        _Var6 = (_union_86)TypeInfo__Newtonsoft__Json__Utilities__IWrappedDictionary;
        if (iVar4 == 0) {
          return (IWrappedDictionary *)0x0;
        }
        pIVar12 = (IWrappedDictionary *)func_?();
        if (pIVar12 != (IWrappedDictionary *)0x0) {
          return pIVar12;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  uVar9 = func_?(&TypeInfo__System__ArgumentNullException);
  pAVar10 = (ArgumentNullException *)func_?(uVar9);
  func_?(pAVar10);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (pAVar10,(String *)_Var6.typeHandle,(MethodInfo *)0x0);
  pOStack_6 = (Object__Array *)
               func_?(&
                               MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                              );
  func_?(pAVar10);
  pcVar13 = (code *)swi(3);
  pIVar12 = (IWrappedDictionary *)(*pcVar13)();
  return pIVar12;
}


/* IDictionary CreateGenericDictionary(Type, Type) */

IDictionary *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
CollectionUtils_CreateGenericDictionary(Type *keyType,Type *valueType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__System__Collections__Generic__Dictionary);
    func_?(&TypeInfo__System__Collections__IDictionary);
    func_?(&TypeInfo__System__Object);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_valueType);
    func_?(&StringLiteral_keyType);
    cRam_? = '\x01';
  }
  handle = TypeRef__System__Collections__Generic__Dictionary;
  pSVar1 = StringLiteral_keyType;
  if (keyType == (Type *)0x0) {
    uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
    pAVar3 = (ArgumentNullException *)func_?(uVar2);
    func_?(pAVar3);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (pAVar3,pSVar1,(MethodInfo *)0x0);
    pSVar1 = (String *)
             func_?(&
                             MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                            );
    func_?(pAVar3);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    pSVar1 = StringLiteral_valueType;
    if (valueType == (Type *)0x0) goto code_?;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    pSVar1 = (String *)
             mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    args = (Object__Array *)func_?(TypeInfo__System__Object,1);
    if (args != (Object__Array *)0x0) {
      iVar4 = func_?(valueType,(args->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
      if (args->max_length == 0) goto code_?;
      args->vector[0] = (Object *)valueType;
      func_?(args->vector,valueType);
      pOVar5 = ReflectionUtils::ReflectionUtils_CreateGeneric
                         ((Type *)pSVar1,keyType,args,(MethodInfo *)0x0);
      if (pOVar5 == (Object *)0x0) {
        return (IDictionary *)0x0;
      }
      pIVar6 = (IDictionary *)func_?();
      if (pIVar6 != (IDictionary *)0x0) {
        return pIVar6;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
  pAVar3 = (ArgumentNullException *)func_?(uVar2);
  func_?(pAVar3);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (pAVar3,pSVar1,(MethodInfo *)0x0);
  uVar2 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                         );
  func_?(pAVar3,uVar2);
  pcVar7 = (code *)swi(3);
  pIVar6 = (IDictionary *)(*pcVar7)();
  return pIVar6;
}


/* IList CreateGenericList(Type) */

IList * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
        CollectionUtils_CreateGenericList(Type *listType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&System__Object__MethodInfo__System__Array__Empty<System::Object>______);
    func_?(&TypeInfo__System__Collections__IList);
    func_?(&TypeRef__System__Collections__Generic__List);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_listType);
    cRam_? = '\x01';
  }
  handle = TypeRef__System__Collections__Generic__List;
  paramName = StringLiteral_listType;
  if (listType == (Type *)0x0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
    this = (ArgumentNullException *)func_?(uVar1);
    func_?(this);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,paramName,(MethodInfo *)0x0);
    uVar1 = func_?(&
                            MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                           );
    func_?(this,uVar1);
  }
  else {
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    genericTypeDefinition =
         mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    pMVar2 = System__Object__MethodInfo__System__Array__Empty<System::Object>______;
    iVar3 = *(int *)(System__Object__MethodInfo__System__Array__Empty<System::Object>______->
                    field7_0x1c).methodMetadataHandle;
    if ((*(byte *)(iVar3 + 0xba) & 1) == 0) {
      iVar3 = func_?(iVar3);
    }
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_?(iVar3);
    }
    iVar3 = *(int *)(pMVar2->field7_0x1c).methodMetadataHandle;
    if ((*(byte *)(iVar3 + 0xba) & 1) == 0) {
      iVar3 = func_?(iVar3);
    }
    pOVar4 = ReflectionUtils::ReflectionUtils_CreateGeneric
                       (genericTypeDefinition,listType,
                        (Object__Array *)**(undefined4 **)(iVar3 + 0x5c),(MethodInfo *)0x0);
    if (pOVar4 == (Object *)0x0) {
      return (IList *)0x0;
    }
    pIVar5 = (IList *)func_?();
    if (pIVar5 != (IList *)0x0) {
      return pIVar5;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pIVar5 = (IList *)(*pcVar6)();
  return pIVar5;
}


/* IWrappedList CreateListWrapper(Object) */

IWrappedList *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::CollectionUtils_CreateListWrapper
          (Object *list,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Func<System::Type,_System::Collections::Generic::IList<System::Object>,_System::Object>
                   );
    func_?(&TypeRef__System__Collections__Generic__IList);
    func_?(&TypeInfo__System__Collections__IList);
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__IWrappedList);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__ListWrapper<System::Object>__ListWrapper_System__Collections__IList_
                   );
    func_?(&TypeRef__Newtonsoft__Json__Utilities__ListWrapper);
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__ListWrapper<System::Object>);
    func_?(&TypeInfo__System__Object);
    func_?(&TypeInfo__System__Type);
    func_?(&TypeInfo__System__Type);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils____c__DisplayClass26_0___CreateListWrapper_b__0_System__Type__System__Collections__Generic__IList<System::Object>_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__CollectionUtils____c__DisplayClass26_0);
    func_?(&StringLiteral_list);
    cRam_? = '\x01';
  }
  paramName = (IList__Class *)
              func_?(
                             TypeInfo__Newtonsoft__Json__Utilities__CollectionUtils____c__DisplayClass26_0
                             );
  genericTypeDefinition = paramName;
  if (paramName == (IList__Class *)0x0) goto code_?;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)paramName,ExceptionArgument__Enum_obj,unaff_EDI);
  (paramName->_0).namespaze = (char *)list;
  func_?(&(paramName->_0).namespaze,list);
  this_00 = (IWrappedList__Class *)StringLiteral_list;
  if ((paramName->_0).namespaze == (char *)0x0) goto code_?;
  pTVar1 = mscorlib.dll::System::Object::Object_GetType
                     ((Object *)(paramName->_0).namespaze,(MethodInfo *)0x0);
  handle = TypeRef__System__Collections__Generic__IList;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  genericInterfaceDefinition =
       mscorlib.dll::System::Type::Type_GetTypeFromHandle
                 ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  bVar2 = ReflectionUtils::ReflectionUtils_ImplementsGenericDefinition_1
                    (pTVar1,genericInterfaceDefinition,(Type **)&(paramName->_0).name,
                     (MethodInfo *)0x0);
  if (bVar2 == 0) {
    iVar3 = func_?();
    if (iVar3 == 0) {
code_?:
      func_?();
      func_?();
      paramName = (IList__Class *)
                  mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
      func_?();
      args = (Object__Array *)func_?();
      func_?();
      this = (Object *)(genericTypeDefinition->_0).namespaze;
      func_?();
      pTVar1 = mscorlib.dll::System::Object::Object_GetType(this,(MethodInfo *)0x0);
      func_?(args);
      func_?(args,pTVar1);
      func_?();
      pSVar4 = (String *)func_?();
      pSVar4 = StringUtils::StringUtils_FormatWith
                         (pSVar4,(IFormatProvider *)paramName,args,(MethodInfo *)0x0);
      func_?();
      this_00 = (IWrappedList__Class *)func_?();
      func_?();
      mscorlib.dll::System::Exception::Exception__ctor_1
                ((Exception *)this_00,pSVar4,(MethodInfo *)0x0);
      func_?();
      func_?();
    }
    else {
      pSVar4 = (String *)(paramName->_0).namespaze;
      this_00 = (IWrappedList__Class *)func_?();
      paramName = TypeInfo__System__Collections__IList;
      if (this_00 == (IWrappedList__Class *)0x0) goto code_?;
      pMVar5 = 
      MethodInfo__Newtonsoft__Json__Utilities__ListWrapper<System::Object>__ListWrapper_System__Collections__IList_
      ;
      if (pSVar4 == (String *)0x0) {
        list_00 = (IList *)0x0;
code_?:
        ListWrapper`1[System::Object]::ListWrapper_1_System_Object___ctor_1
                  ((ListWrapper_1_System_Object_ *)this_00,list_00,pMVar5);
        return (IWrappedList *)this_00;
      }
      list_00 = (IList *)func_?(pSVar4,TypeInfo__System__Collections__IList);
      if (list_00 != (IList *)0x0) goto code_?;
    }
    func_?(pSVar4,paramName);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    func_?(pSVar4);
code_?:
    uVar6 = func_?(&TypeInfo__System__ArgumentNullException);
    pAVar7 = (ArgumentNullException *)func_?(uVar6);
    func_?(pAVar7);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (pAVar7,(String *)paramName,(MethodInfo *)0x0);
    uVar6 = func_?(&
                            MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                           );
    func_?(pAVar7,uVar6);
  }
  else {
    pTVar1 = ReflectionUtils::ReflectionUtils_GetCollectionItemType
                       ((Type *)((String__Fields *)&(paramName->_0).name)->_stringLength,
                        (MethodInfo *)0x0);
    this_01 = (MethodCall_2_System_Object_System_Object_ *)func_?();
    if (this_01 == (MethodCall_2_System_Object_System_Object_ *)0x0) {
code_?:
      func_?();
      goto code_?;
    }
    MethodCall`2[System::Object,System::Object]::MethodCall_2_System_Object_System_Object___ctor
              (this_01,(Object *)paramName,
               MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils____c__DisplayClass26_0___CreateListWrapper_b__0_System__Type__System__Collections__Generic__IList<System::Object>_
               ,(MethodInfo *)0x0);
    pSVar4 = (String *)TypeRef__Newtonsoft__Json__Utilities__ListWrapper;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    genericTypeDefinition =
         (IList__Class *)
         mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)pSVar4,(MethodInfo *)0x0);
    iVar3 = 1;
    this_00 = (IWrappedList__Class *)func_?(TypeInfo__System__Type);
    if (this_00 == (IWrappedList__Class *)0x0) goto code_?;
    if ((pTVar1 != (Type *)0x0) &&
       (iVar8 = func_?(pTVar1,((this_00->_0).image)->codeGenModule), iVar8 == 0))
    goto code_?;
    if ((this_00->_0).namespaze != (char *)0x0) {
      (this_00->_0).byval_arg.data.dummy = pTVar1;
      func_?(&(this_00->_0).byval_arg,pTVar1);
      pSVar4 = (String *)func_?(TypeInfo__System__Object,1);
      paramName = (IList__Class *)(paramName->_0).namespaze;
      if (pSVar4 == (String *)0x0) goto code_?;
      if ((paramName != (IList__Class *)0x0) &&
         (iVar8 = func_?(paramName,
                                  *(undefined4 *)
                                   (((_union_86 *)&pSVar4->klass)->__klassIndex + 0x20)), iVar8 == 0
         )) goto code_?;
      if (*(int *)&(pSVar4->fields)._firstChar == 0) goto code_?;
      ((_union_86 *)&pSVar4[1].klass)->typeHandle = (Il2CppMetadataTypeHandle)paramName;
      func_?(pSVar4 + 1,paramName);
      if (cRam_? == '\0') {
        func_?(&
                        System__Type__MethodInfo__System__Linq__Enumerable__ToArray<System::Type>_System__Collections__Generic__IEnumerable<System::Type>_____
                       );
        func_?(&
                        void_MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNullOrEmpty<System::Type>_System__Collections__Generic__ICollection<System::Type>__System__String_
                       );
        func_?(&StringLiteral_genericTypeDefinition);
        func_?(&StringLiteral_createInstance);
        func_?(&StringLiteral_innerTypes);
        cRam_? = '\x01';
      }
      paramName = (IList__Class *)StringLiteral_genericTypeDefinition;
      if (genericTypeDefinition != (IList__Class *)0x0) {
        ValidationUtils::ValidationUtils_ArgumentNotNullOrEmpty_3
                  ((ICollection_1_System_Object_ *)this_00,StringLiteral_innerTypes,
                   void_MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNullOrEmpty<System::Type>_System__Collections__Generic__ICollection<System::Type>__System__String_
                  );
        innerTypes = (Type__Array *)
                     System.Core.dll::System::Linq::Enumerable::Enumerable_ToArray_2
                               ((IEnumerable_1_System_Object_ *)this_00,
                                System__Type__MethodInfo__System__Linq__Enumerable__ToArray<System::Type>_System__Collections__Generic__IEnumerable<System::Type>_____
                               );
        pTVar1 = ReflectionUtils::ReflectionUtils_MakeGenericType
                           ((Type *)genericTypeDefinition,innerTypes,(MethodInfo *)0x0);
        pSVar4 = (String *)
                 (**(code **)(iVar3 + 0xc))
                           (*(undefined4 *)(iVar3 + 0x20),pTVar1,pSVar4,
                            *(undefined4 *)(iVar3 + 0x14));
        this_00 = TypeInfo__Newtonsoft__Json__Utilities__IWrappedList;
        if (pSVar4 == (String *)0x0) {
          return (IWrappedList *)0x0;
        }
        pIVar9 = (IWrappedList *)func_?(pSVar4);
        if (pIVar9 != (IWrappedList *)0x0) {
          return pIVar9;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  uVar6 = func_?(&TypeInfo__System__ArgumentNullException);
  pAVar7 = (ArgumentNullException *)func_?(uVar6);
  func_?(pAVar7);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (pAVar7,(String *)this_00,(MethodInfo *)0x0);
  uVar6 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                         );
  func_?(pAVar7,uVar6);
  pcVar10 = (code *)swi(3);
  pIVar9 = (IWrappedList *)(*pcVar10)();
  return pIVar9;
}


/* List`1[System.Object] CreateList[Object](ICollection) */

List_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::CollectionUtils_CreateList_1
          (ICollection *collection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__ICollection);
    cRam_? = '\x01';
  }
  if (collection == (ICollection *)0x0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
    this = (ArgumentNullException *)func_?(uVar1);
    func_?(this);
    method_00 = (MethodInfo *)0x0;
    paramName = (String *)func_?(&StringLiteral_collection);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,paramName,method_00);
    uVar1 = func_?(&
                            System__Collections__Generic__List<System::Object>_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__CreateList<System::Object>_System__Collections__ICollection_
                           );
    func_?(this,uVar1);
  }
  else {
    uVar1 = func_?(1,TypeInfo__System__Collections__ICollection,collection);
    pvVar2 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    uVar1 = func_?(pvVar2,uVar1);
    uVar3 = 0;
    uVar4 = (collection->klass->_1).interface_offsets_count;
    if (uVar4 != 0) {
      do {
        if (collection->klass->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__System__Collections__ICollection) {
          pVVar5 = &(collection->klass->vtable).CopyTo +
                   collection->klass->interfaceOffsets[uVar3].offset;
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    pVVar5 = (VirtualInvokeData *)
             func_?(collection,TypeInfo__System__Collections__ICollection,0);
code_?:
    (*pVVar5->methodPtr)(collection,uVar1,0,pVVar5->method);
    pvVar2 = (method->field7_0x1c).rgctx_data[1].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    pLVar6 = (List_1_System_Object_ *)func_?(pvVar2);
    if (pLVar6 != (List_1_System_Object_ *)0x0) {
      (*((method->field7_0x1c).rgctx_data[2].method)->virtualMethodPointer)
                (pLVar6,uVar1,(method->field7_0x1c).rgctx_data[2].method);
      return pLVar6;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pLVar6 = (List_1_System_Object_ *)(*pcVar7)();
  return pLVar6;
}


/* List`1[System.Object] Distinct[Object](List`1[System.Object]) */

List_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::CollectionUtils_Distinct
          (List_1_System_Object_ *collection,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  LStack_4._list = (List_1_System_Object_ *)0x0;
  LStack_4._index = 0;
  LStack_4._version = 0;
  LStack_4._current = (Object *)0x0;
  puStack_5 = &stack0xffffffb8;
  pvVar6 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
  puVar7 = &stack0xffffffb8;
  if ((*(byte *)((int)pvVar6 + 0xba) & 1) == 0) {
    pvVar6 = (void *)func_?(pvVar6);
    puVar7 = puStack_5;
  }
  puStack_5 = puVar7;
  pLVar8 = (List_1_System_Object_ *)func_?(pvVar6);
  if (pLVar8 != (List_1_System_Object_ *)0x0) {
    (*((method->field7_0x1c).rgctx_data[1].method)->virtualMethodPointer)
              (pLVar8,(method->field7_0x1c).rgctx_data[1].rgctxDataDummy);
    pLStack_9 = pLVar8;
    if (collection != (List_1_System_Object_ *)0x0) {
      puVar10 = (undefined4 *)
               (*((method->field7_0x1c).rgctx_data[2].method)->virtualMethodPointer)
                         (auStack_11,collection,(method->field7_0x1c).rgctx_data[2].rgctxDataDummy);
      ppMStack_12 = &method;
      LStack_4._list = (List_1_System_Object_ *)*puVar10;
      LStack_4._index = puVar10[1];
      LStack_4._version = puVar10[2];
      LStack_4._current = (Object *)puVar10[3];
      pLStack_13 = &LStack_4;
      uStack_14 = 0;
      uStack_1 = 1;
      while( true ) {
        bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_4,(method->field7_0x1c).rgctx_data[6].method);
        pOVar16 = LStack_4._current;
        if (bVar15 == 0) break;
        cVar17 = (*((method->field7_0x1c).rgctx_data[4].method)->virtualMethodPointer)(pLVar8);
        if (cVar17 == '\0') {
          (*((method->field7_0x1c).rgctx_data[5].method)->virtualMethodPointer)
                    (pLVar8,pOVar16,(method->field7_0x1c).rgctx_data[5].rgctxDataDummy);
        }
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&LStack_4,(ExceptionArgument__Enum)(method->field7_0x1c).rgctx_data[8],
                 unaff_EBX);
      *unaff_FS_OFFSET = uStack_3;
      return pLVar8;
    }
  }
  uVar18 = func_?();
  func_?(uVar18);
  pcVar19 = (code *)swi(3);
  pLVar8 = (List_1_System_Object_ *)(*pcVar19)();
  return pLVar8;
}


/* List`1[List`1[System.Object]] Flatten[Object](IList`1[System.Object][]) */

List_1_List_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::CollectionUtils_Flatten
          (IList_1_System_Object___Array *lists,MethodInfo *method)

{
  pvVar1 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
    pvVar1 = (void *)func_?(pvVar1);
  }
  pLVar2 = (List_1_List_1_System_Object_ *)func_?(pvVar1);
  if (pLVar2 != (List_1_List_1_System_Object_ *)0x0) {
    (*((method->field7_0x1c).rgctx_data[1].method)->virtualMethodPointer)
              (pLVar2,(method->field7_0x1c).rgctx_data[1].method);
    pvVar1 = (method->field7_0x1c).rgctx_data[2].rgctxDataDummy;
    if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
      pvVar1 = (void *)func_?(pvVar1);
    }
    iVar3 = func_?(pvVar1);
    if (iVar3 != 0) {
      (*((method->field7_0x1c).rgctx_data[3].method)->virtualMethodPointer)
                (iVar3,(method->field7_0x1c).rgctx_data[3].method);
      pvVar1 = (method->field7_0x1c).rgctx_data[4].rgctxDataDummy;
      if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
        pvVar1 = (void *)func_?(pvVar1);
      }
      iVar4 = func_?(pvVar1);
      if (iVar4 != 0) {
        (*((method->field7_0x1c).rgctx_data[5].method)->virtualMethodPointer)
                  (iVar4,lists,(method->field7_0x1c).rgctx_data[5].method);
        (*((method->field7_0x1c).rgctx_data[6].method)->virtualMethodPointer)
                  (iVar4,0,iVar3,pLVar2,(method->field7_0x1c).rgctx_data[6].method);
        return pLVar2;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pLVar2 = (List_1_List_1_System_Object_ *)(*pcVar5)();
  return pLVar2;
}


/* IList`1[System.Int32] GetDimensions(IList) */

IList_1_System_Int32_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::CollectionUtils_GetDimensions
          (IList *values,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__Generic__ICollection<int>);
    func_?(&TypeInfo__System__Collections__ICollection);
    func_?(&TypeInfo__System__Collections__IList);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    cRam_? = '\x01';
  }
  this = (LowLevelList_1_System_Object_ *)
         func_?(TypeInfo__System__Collections__Generic__List<int>);
  if ((this == (LowLevelList_1_System_Object_ *)0x0) ||
     (mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                (this,MethodInfo__System__Collections__Generic__List<int>__List__),
     values == (IList *)0x0)) {
code_?:
    func_?();
  }
  else {
    do {
      uVar1 = 0;
      uVar2 = (values->klass->_1).interface_offsets_count;
      if (uVar2 != 0) {
        do {
          if (values->klass->interfaceOffsets[uVar1].interfaceType ==
              (Il2CppClass *)TypeInfo__System__Collections__ICollection) {
            ppIVar3 = &(&(values->klass->vtable).set_Item)
                       [values->klass->interfaceOffsets[uVar1].offset].methodPtr;
            goto code_?;
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 < uVar2);
      }
      ppIVar3 = (Il2CppMethodPointer *)
                func_?(values,TypeInfo__System__Collections__ICollection,1);
code_?:
      uVar4 = (**ppIVar3)(values,(MethodInfo *)ppIVar3[1]);
      unaff_EBX = (IList__Class *)0x0;
      uVar1 = 0;
      uVar2 = (this->klass->_1).interface_offsets_count;
      unaff_EDI = (uint)uVar2;
      if (uVar2 != 0) {
        unaff_EBX = (IList__Class *)this->klass->interfaceOffsets;
        do {
          if ((ICollection_1_System_Int32___Class *)(&(unaff_EBX->_0).image)[(uint)uVar1 * 2] ==
              TypeInfo__System__Collections__Generic__ICollection<int>) {
            ppIVar3 = &(&(this->klass->vtable).GetHashCode)
                       [this->klass->interfaceOffsets[uVar1].offset].methodPtr;
            goto code_?;
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 < uVar2);
      }
      ppIVar3 = (Il2CppMethodPointer *)
                func_?(this,TypeInfo__System__Collections__Generic__ICollection<int>,2);
code_?:
      (**ppIVar3)(this,uVar4,(MethodInfo *)ppIVar3[1]);
      if (values == (IList *)0x0) goto code_?;
      uVar1 = 0;
      uVar2 = (values->klass->_1).interface_offsets_count;
      if (uVar2 != 0) {
        do {
          if (values->klass->interfaceOffsets[uVar1].interfaceType ==
              (Il2CppClass *)TypeInfo__System__Collections__ICollection) {
            ppIVar3 = &(&(values->klass->vtable).set_Item)
                       [values->klass->interfaceOffsets[uVar1].offset].methodPtr;
            goto code_?;
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 < uVar2);
      }
      ppIVar3 = (Il2CppMethodPointer *)
                func_?(values,TypeInfo__System__Collections__ICollection,1);
code_?:
      iVar5 = (**ppIVar3)(values,(MethodInfo *)ppIVar3[1]);
      if (iVar5 == 0) {
        return (IList_1_System_Int32_ *)this;
      }
      uVar1 = 0;
      uVar2 = (values->klass->_1).interface_offsets_count;
      if (uVar2 != 0) {
        do {
          if (values->klass->interfaceOffsets[uVar1].interfaceType ==
              (Il2CppClass *)TypeInfo__System__Collections__IList) {
            ppIVar3 = &(&(values->klass->vtable).get_Item)
                       [values->klass->interfaceOffsets[uVar1].offset].methodPtr;
            goto code_?;
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 < uVar2);
      }
      ppIVar3 = (Il2CppMethodPointer *)
                func_?(values,TypeInfo__System__Collections__IList,0);
code_?:
      unaff_EDI = (**ppIVar3)(values,0,(MethodInfo *)ppIVar3[1]);
      iVar5 = func_?(unaff_EDI,TypeInfo__System__Collections__IList);
      unaff_EBX = TypeInfo__System__Collections__IList;
      if (iVar5 == 0) {
        return (IList_1_System_Int32_ *)this;
      }
      if (unaff_EDI == 0) goto code_?;
      values = (IList *)func_?(unaff_EDI,TypeInfo__System__Collections__IList);
    } while (values != (IList *)0x0);
  }
  func_?(unaff_EDI,unaff_EBX);
  pcVar6 = (code *)swi(3);
  pIVar7 = (IList_1_System_Int32_ *)(*pcVar6)();
  return pIVar7;
}


/* Object GetSingleItem[Object](IList`1[System.Object], Boolean) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
         CollectionUtils_GetSingleItem_1
                   (IList_1_System_Object_ *list,bool returnDefaultIfEmpty,MethodInfo *method)

{
  if (list == (IList_1_System_Object_ *)0x0) {
    func_?();
  }
  else {
    pvVar1 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
    if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
      pvVar1 = (void *)func_?(pvVar1);
    }
    iVar2 = func_?(0,pvVar1,list);
    if (iVar2 == 1) {
      pvVar1 = (method->field7_0x1c).rgctx_data[2].rgctxDataDummy;
      if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
        pvVar1 = (void *)func_?(pvVar1);
      }
      pOVar3 = (Object *)func_?(0,pvVar1,list,0);
      return pOVar3;
    }
    unaff_ESI = method;
    if (returnDefaultIfEmpty != 0) {
      pvVar1 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
      if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
        pvVar1 = (void *)func_?(pvVar1);
      }
      iVar2 = func_?(0,pvVar1,list);
      if (iVar2 == 0) {
        return (Object *)0x0;
      }
    }
  }
  uVar4 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar4);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar4 = func_?(&TypeInfo__System__Object,2);
  args = (Object__Array *)func_?(uVar4);
  handle.value = (void *)func_?((unaff_ESI->field7_0x1c).rgctx_data,4);
  uVar4 = func_?(&TypeInfo__System__Type);
  func_?(uVar4);
  pTVar5 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pTVar5);
  func_?(0,pTVar5);
  func_?(list);
  uVar4 = func_?((method->field7_0x1c).rgctx_data,0,list);
  puStack_6 = (undefined *)func_?(0,uVar4);
  uVar4 = func_?(&TypeInfo__System__Int32,&puStack_6);
  uVar4 = func_?(uVar4);
  func_?(args);
  func_?(args,uVar4);
  func_?(1,uVar4);
  method_00 = (MethodInfo *)0x0;
  pSVar7 = (String *)func_?(&StringLiteral_Expected_single__0__in_list_but_);
  pSVar7 = StringUtils::StringUtils_FormatWith(pSVar7,(IFormatProvider *)provider,args,method_00);
  uVar4 = func_?(&TypeInfo__System__Exception);
  this = (Exception *)func_?(uVar4);
  func_?(this);
  mscorlib.dll::System::Exception::Exception__ctor_1(this,pSVar7,(MethodInfo *)0x0);
  func_?(&
                  System__Object_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__GetSingleItem<System::Object>_System__Collections__Generic__IList<System::Object>__bool_
                 );
  func_?();
  pcVar8 = (code *)swi(3);
  pOVar3 = (Object *)(*pcVar8)();
  return pOVar3;
}


/* Dictionary`2[System.Object,List`1[System.Object]]
   GroupBy[Object,Object](ICollection`1[System.Object], Func`2[Object,Object]) */

Dictionary_2_System_Object_List_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::CollectionUtils_GroupBy
          (ICollection_1_System_Object_ *source,Func_2_Object_Object_ *keySelector,
          MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  if (keySelector == (Func_2_Object_Object_ *)0x0) {
    uVar7 = func_?(&TypeInfo__System__ArgumentNullException);
    this = (ArgumentNullException *)func_?(uVar7);
    func_?(this);
    method_00 = (MethodInfo *)0x0;
    paramName = (String *)func_?(&StringLiteral_keySelector);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,paramName,method_00);
    func_?(&
                    System__Collections__Generic__Dictionary<System::Object,_System::Collections::Generic::List<System::Object>_>_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__GroupBy<System::Object,_System::Object>_System__Collections__Generic__ICollection<System::Object>__System__Func<System::Object,_System::Object>_
                   );
    func_?();
  }
  else {
    pvVar8 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
    if ((*(byte *)((int)pvVar8 + 0xba) & 1) == 0) {
      pvVar8 = (void *)func_?(pvVar8);
    }
    pDVar9 = (Dictionary_2_System_Object_List_1_System_Object_ *)func_?(pvVar8);
    if (pDVar9 != (Dictionary_2_System_Object_List_1_System_Object_ *)0x0) {
      (*((method->field7_0x1c).rgctx_data[1].method)->virtualMethodPointer)
                (pDVar9,(method->field7_0x1c).rgctx_data[1].rgctxDataDummy);
      if (source != (ICollection_1_System_Object_ *)0x0) {
        pvVar8 = (method->field7_0x1c).rgctx_data[2].rgctxDataDummy;
        if ((*(byte *)((int)pvVar8 + 0xba) & 1) == 0) {
          pvVar8 = (void *)func_?(pvVar8);
        }
        piStack_10 = (int *)func_?(0,pvVar8,source);
        uStack_1 = 1;
        while( true ) {
          if (piStack_10 == (int *)0x0) break;
          cVar11 = func_?(0,TypeInfo__System__Collections__IEnumerator,piStack_10);
          piVar12 = piStack_10;
          if (cVar11 == '\0') {
            uStack_1 = 0xffffffff;
            if (piStack_10 != (int *)0x0) {
              func_?(0,TypeInfo__System__IDisposable,piStack_10);
            }
            *unaff_FS_OFFSET = uStack_3;
            return pDVar9;
          }
          if (piStack_10 == (int *)0x0) break;
          pvVar8 = (method->field7_0x1c).rgctx_data[4].rgctxDataDummy;
          if ((*(byte *)((int)pvVar8 + 0xba) & 1) == 0) {
            pvVar8 = (void *)func_?(pvVar8);
          }
          iVar13 = *piVar12;
          uVar14 = 0;
          if (*(ushort *)(iVar13 + 0xb2) != 0) {
            do {
              if (*(void **)(*(int *)(iVar13 + 0x58) + (uint)uVar14 * 8) == pvVar8) {
                puVar15 = (undefined4 *)
                         (*(int *)(*(int *)(iVar13 + 0x58) + 4 + (uint)uVar14 * 8) * 8 + 0xbc +
                         iVar13);
                goto code_?;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < *(ushort *)(iVar13 + 0xb2));
          }
          puVar15 = (undefined4 *)func_?(piVar12,pvVar8,0);
code_?:
          uVar7 = (*(code *)*puVar15)(piVar12,puVar15[1]);
          uVar16 = (*((method->field7_0x1c).rgctx_data[7].method)->virtualMethodPointer)
                            (keySelector,uVar7,(method->field7_0x1c).rgctx_data[7].rgctxDataDummy);
          cVar11 = (*((method->field7_0x1c).rgctx_data[8].method)->virtualMethodPointer)
                            (pDVar9,uVar16,&iStack_6,
                             (method->field7_0x1c).rgctx_data[8].rgctxDataDummy);
          if (cVar11 == '\0') {
            uVar17 = func_?((method->field7_0x1c).rgctx_data,9);
            iVar13 = func_?(uVar17);
            if (iVar13 == 0) break;
            (*((method->field7_0x1c).rgctx_data[10].method)->virtualMethodPointer)
                      (iVar13,(method->field7_0x1c).rgctx_data[10].rgctxDataDummy);
            iStack_6 = iVar13;
            (*((method->field7_0x1c).rgctx_data[0xb].method)->virtualMethodPointer)
                      (pDVar9,uVar16,iVar13,(method->field7_0x1c).rgctx_data[0xb].rgctxDataDummy);
          }
          if (iStack_6 == 0) break;
          (*((method->field7_0x1c).rgctx_data[0xc].method)->virtualMethodPointer)
                    (iStack_6,uVar7,(method->field7_0x1c).rgctx_data[0xc].rgctxDataDummy);
        }
      }
    }
  }
  uVar7 = func_?();
  func_?(uVar7);
  pcVar18 = (code *)swi(3);
  pDVar9 = (Dictionary_2_System_Object_List_1_System_Object_ *)(*pcVar18)();
  return pDVar9;
}


/* Int32 IndexOf[Object](IEnumerable`1[System.Object], Object) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::CollectionUtils_IndexOf
                  (IEnumerable_1_System_Object_ *list,Object *value,MethodInfo *method)

{
  uVar1 = (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                    (((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
  iVar2 = (*((method->field7_0x1c).rgctx_data[2].method)->virtualMethodPointer)
                    (list,value,uVar1,(method->field7_0x1c).rgctx_data[2].rgctxDataDummy);
  return iVar2;
}


/* Int32 IndexOf[Object](IEnumerable`1[System.Object], Func`2[Object,Boolean]) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::CollectionUtils_IndexOf_1
                  (IEnumerable_1_System_Object_ *collection,Func_2_Object_Boolean_ *predicate,
                  MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    cRam_? = '\x01';
  }
  iVar4 = 0;
  if (collection != (IEnumerable_1_System_Object_ *)0x0) {
    pvVar5 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
    if ((*(byte *)((int)pvVar5 + 0xba) & 1) == 0) {
      pvVar5 = (void *)func_?(pvVar5);
    }
    iVar6 = func_?(0,pvVar5,collection);
    uStack_1 = 1;
    while (iVar6 != 0) {
      cVar7 = func_?(0,TypeInfo__System__Collections__IEnumerator,iVar6);
      if (cVar7 == '\0') {
        uStack_1 = 0xffffffff;
        if (iVar6 != 0) {
          func_?(0,TypeInfo__System__IDisposable,iVar6);
        }
        *unaff_FS_OFFSET = uStack_3;
        return -1;
      }
      if (iVar6 == 0) break;
      pvVar5 = (method->field7_0x1c).rgctx_data[2].rgctxDataDummy;
      if ((*(byte *)((int)pvVar5 + 0xba) & 1) == 0) {
        pvVar5 = (void *)func_?(pvVar5);
      }
      uVar8 = func_?(0,pvVar5,iVar6);
      if (predicate == (Func_2_Object_Boolean_ *)0x0) break;
      cVar7 = (*((method->field7_0x1c).rgctx_data[5].method)->virtualMethodPointer)
                        (predicate,uVar8,(method->field7_0x1c).rgctx_data[5].rgctxDataDummy);
      if (cVar7 != '\0') {
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return iVar4;
      }
      iVar4 = iVar4 + 1;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  iVar10 = (*pcVar9)();
  return iVar10;
}


/* Int32 IndexOf[Object](IEnumerable`1[System.Object], Object, IEqualityComparer`1[System.Object])
    */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::CollectionUtils_IndexOf_2
                  (IEnumerable_1_System_Object_ *list,Object *value,
                  IEqualityComparer_1_System_Object_ *comparer,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    cRam_? = '\x01';
  }
  iVar4 = 0;
  if (list != (IEnumerable_1_System_Object_ *)0x0) {
    pvVar5 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
    if ((*(byte *)((int)pvVar5 + 0xba) & 1) == 0) {
      pvVar5 = (void *)func_?(pvVar5);
    }
    iVar6 = func_?(0,pvVar5,list);
    uStack_1 = 1;
    while (iVar6 != 0) {
      cVar7 = func_?(0,TypeInfo__System__Collections__IEnumerator,iVar6);
      if (cVar7 == '\0') {
        uStack_1 = 0xffffffff;
        if (iVar6 != 0) {
          func_?(0,TypeInfo__System__IDisposable,iVar6);
        }
        *unaff_FS_OFFSET = uStack_3;
        return -1;
      }
      if (iVar6 == 0) break;
      pvVar5 = (method->field7_0x1c).rgctx_data[2].rgctxDataDummy;
      if ((*(byte *)((int)pvVar5 + 0xba) & 1) == 0) {
        pvVar5 = (void *)func_?(pvVar5);
      }
      uVar8 = func_?(0,pvVar5,iVar6);
      if (comparer == (IEqualityComparer_1_System_Object_ *)0x0) break;
      pvVar5 = (method->field7_0x1c).rgctx_data[4].rgctxDataDummy;
      if ((*(byte *)((int)pvVar5 + 0xba) & 1) == 0) {
        pvVar5 = (void *)func_?(pvVar5);
      }
      cVar7 = func_?(0,pvVar5,comparer,uVar8,value);
      if (cVar7 != '\0') {
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return iVar4;
      }
      iVar4 = iVar4 + 1;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  iVar10 = (*pcVar9)();
  return iVar10;
}


/* Boolean IsCollectionType(Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
     CollectionUtils_IsCollectionType(Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__System__Collections__Generic__ICollection);
    func_?(&TypeRef__System__Collections__ICollection);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_type);
    cRam_? = '\x01';
  }
  type_00 = type;
  paramName = StringLiteral_type;
  if (type != (Type *)0x0) {
    bVar1 = mscorlib.dll::System::Type::Type_get_IsArray(type,(MethodInfo *)0x0);
    pIVar2 = TypeRef__System__Collections__ICollection;
    if (bVar1 == 0) {
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Type);
      }
      pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
      if (pTVar3 == (Type *)0x0) goto code_?;
      cVar4 = (*(pTVar3->klass->vtable).IsAssignableFrom.methodPtr)
                        (pTVar3,type_00,(pTVar3->klass->vtable).IsAssignableFrom.method);
      pIVar2 = TypeRef__System__Collections__Generic__ICollection;
      if (cVar4 == '\0') {
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Type);
        }
        type = (Type *)0x0;
        pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
        bVar1 = ReflectionUtils::ReflectionUtils_ImplementsGenericDefinition_1
                          (type_00,pTVar3,&type,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          return 0;
        }
      }
    }
    return 1;
  }
  uVar5 = func_?(&TypeInfo__System__ArgumentNullException);
  this = (ArgumentNullException *)func_?(uVar5);
  func_?(this);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,paramName,(MethodInfo *)0x0);
  uVar5 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                         );
  func_?(this,uVar5);
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  bVar1 = (*pcVar6)();
  return bVar1;
}


/* Boolean IsDictionaryType(Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
     CollectionUtils_IsDictionaryType(Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__System__Collections__Generic__IDictionary);
    func_?(&TypeRef__System__Collections__IDictionary);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_type);
    cRam_? = '\x01';
  }
  type_00 = type;
  paramName = StringLiteral_type;
  pIVar1 = TypeRef__System__Collections__IDictionary;
  if (type == (Type *)0x0) {
    uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
    this = (ArgumentNullException *)func_?(uVar2);
    func_?(this);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,paramName,(MethodInfo *)0x0);
    uVar2 = func_?(&
                            MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                           );
    func_?(this,uVar2);
  }
  else {
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
    if (pTVar3 != (Type *)0x0) {
      cVar4 = (*(pTVar3->klass->vtable).IsAssignableFrom.methodPtr)
                        (pTVar3,type_00,(pTVar3->klass->vtable).IsAssignableFrom.method);
      pIVar1 = TypeRef__System__Collections__Generic__IDictionary;
      if (cVar4 == '\0') {
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Type);
        }
        type = (Type *)0x0;
        pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
        bVar5 = ReflectionUtils::ReflectionUtils_ImplementsGenericDefinition_1
                          (type_00,pTVar3,&type,(MethodInfo *)0x0);
        if (bVar5 == 0) {
          return 0;
        }
      }
      return 1;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Boolean IsListType(Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::CollectionUtils_IsListType
               (Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__System__Collections__Generic__IList);
    func_?(&TypeRef__System__Collections__IList);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_type);
    cRam_? = '\x01';
  }
  type_00 = type;
  paramName = StringLiteral_type;
  if (type != (Type *)0x0) {
    bVar1 = mscorlib.dll::System::Type::Type_get_IsArray(type,(MethodInfo *)0x0);
    pIVar2 = TypeRef__System__Collections__IList;
    if (bVar1 == 0) {
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Type);
      }
      pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
      if (pTVar3 == (Type *)0x0) goto code_?;
      cVar4 = (*(pTVar3->klass->vtable).IsAssignableFrom.methodPtr)
                        (pTVar3,type_00,(pTVar3->klass->vtable).IsAssignableFrom.method);
      pIVar2 = TypeRef__System__Collections__Generic__IList;
      if (cVar4 == '\0') {
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Type);
        }
        type = (Type *)0x0;
        pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
        bVar1 = ReflectionUtils::ReflectionUtils_ImplementsGenericDefinition_1
                          (type_00,pTVar3,&type,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          return 0;
        }
      }
    }
    return 1;
  }
  uVar5 = func_?(&TypeInfo__System__ArgumentNullException);
  this = (ArgumentNullException *)func_?(uVar5);
  func_?(this);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,paramName,(MethodInfo *)0x0);
  uVar5 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                         );
  func_?(this,uVar5);
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  bVar1 = (*pcVar6)();
  return bVar1;
}


/* Boolean IsNullOrEmpty(ICollection) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
     CollectionUtils_IsNullOrEmpty(ICollection *collection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__ICollection);
    cRam_? = '\x01';
  }
  if (collection == (ICollection *)0x0) {
    return 1;
  }
  iVar1 = func_?(1,TypeInfo__System__Collections__ICollection,collection);
  return iVar1 == 0;
}


/* Boolean IsNullOrEmptyOrDefault[Object](IList`1[System.Object]) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
     CollectionUtils_IsNullOrEmptyOrDefault(IList_1_System_Object_ *list,MethodInfo *method)

{
  cVar1 = (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                    (list,((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
  if (cVar1 == '\0') {
    bVar2 = (*((method->field7_0x1c).rgctx_data[1].method)->virtualMethodPointer)
                      (list,(method->field7_0x1c).rgctx_data[1].rgctxDataDummy);
    return bVar2;
  }
  return 1;
}


/* Boolean IsNullOrEmpty[Object](ICollection`1[System.Object]) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
     CollectionUtils_IsNullOrEmpty_1(ICollection_1_System_Object_ *collection,MethodInfo *method)

{
  if (collection == (ICollection_1_System_Object_ *)0x0) {
    return 1;
  }
  pvVar1 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
    pvVar1 = (void *)func_?(pvVar1);
  }
  iVar2 = func_?(0,pvVar1,collection);
  return iVar2 == 0;
}


/* Object JaggedArrayGetValue(IList, Int32[]) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
         CollectionUtils_JaggedArrayGetValue(IList *values,Int32__Array *indices,MethodInfo *method)

{
  pIVar1 = indices;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IList);
    cRam_? = '\x01';
  }
  uVar2 = 0;
  if (indices == (Int32__Array *)0x0) {
code_?:
    func_?();
code_?:
    func_?(indices,unaff_EDI);
  }
  else {
    piVar3 = indices->vector;
    while( true ) {
      if ((int)pIVar1->max_length <= (int)uVar2) {
        return (Object *)values;
      }
      if (pIVar1->max_length <= uVar2) break;
      unaff_EDI = TypeInfo__System__Collections__IList;
      if (values == (IList *)0x0) goto code_?;
      if (uVar2 == pIVar1->max_length - 1) {
        pOVar4 = (Object *)func_?(0,TypeInfo__System__Collections__IList,values,*piVar3);
        return pOVar4;
      }
      indices = (Int32__Array *)
                func_?(0,TypeInfo__System__Collections__IList,values,*piVar3);
      unaff_EDI = TypeInfo__System__Collections__IList;
      if (indices == (Int32__Array *)0x0) {
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 1;
        values = (IList *)0x0;
      }
      else {
        values = (IList *)func_?(indices,TypeInfo__System__Collections__IList);
        if (values == (IList *)0x0) goto code_?;
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 1;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pOVar4 = (Object *)(*pcVar5)();
  return pOVar4;
}


/* Boolean ListEquals[Object](IList`1[System.Object], IList`1[System.Object]) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::CollectionUtils_ListEquals
               (IList_1_System_Object_ *a,IList_1_System_Object_ *b,MethodInfo *method)

{
  if (a == (IList_1_System_Object_ *)0x0) {
    return b == (IList_1_System_Object_ *)0x0;
  }
  if (b == (IList_1_System_Object_ *)0x0) {
    return 0;
  }
  pvVar1 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
    pvVar1 = (void *)func_?(pvVar1);
  }
  iVar2 = func_?(0,pvVar1,a);
  pvVar1 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
    pvVar1 = (void *)func_?(pvVar1);
  }
  iVar3 = func_?(0,pvVar1,b);
  if (iVar2 == iVar3) {
    piVar4 = (int *)(*((method->field7_0x1c).rgctx_data[2].method)->virtualMethodPointer)
                              ((method->field7_0x1c).rgctx_data[2].rgctxDataDummy);
    iVar2 = 0;
    while( true ) {
      pvVar1 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
      if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
        pvVar1 = (void *)func_?(pvVar1);
      }
      iVar3 = func_?(0,pvVar1,a);
      if (iVar3 <= iVar2) {
        return 1;
      }
      pvVar1 = (method->field7_0x1c).rgctx_data[4].rgctxDataDummy;
      if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
        pvVar1 = (void *)func_?(pvVar1);
      }
      uVar5 = func_?(0,pvVar1,a,iVar2);
      pvVar1 = (method->field7_0x1c).rgctx_data[4].rgctxDataDummy;
      if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
        pvVar1 = (void *)func_?(pvVar1);
      }
      uVar6 = func_?(0,pvVar1,b,iVar2);
      if (piVar4 == (int *)0x0) {
        func_?();
        pcVar7 = (code *)swi(3);
        bVar8 = (*pcVar7)();
        return bVar8;
      }
      cVar9 = (**(code **)(*piVar4 + 0xfc))(piVar4,uVar5,uVar6,*(undefined4 *)(*piVar4 + 0x100));
      if (cVar9 == '\0') break;
      iVar2 = iVar2 + 1;
    }
  }
  return 0;
}


/* IList`1[System.Object] Minus[Object](IList`1[System.Object], IList`1[System.Object]) */

IList_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::CollectionUtils_Minus
          (IList_1_System_Object_ *list,IList_1_System_Object_ *minus,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&StringLiteral_list);
    cRam_? = '\x01';
  }
  ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)list,StringLiteral_list,(MethodInfo *)0x0);
  if (list != (IList_1_System_Object_ *)0x0) {
    if ((*(byte *)((int)((method->field7_0x1c).rgctx_data)->rgctxDataDummy + 0xba) & 1) == 0) {
      func_?();
    }
    func_?();
    if ((*(byte *)((int)(method->field7_0x1c).rgctx_data[2].rgctxDataDummy + 0xba) & 1) == 0) {
      func_?();
    }
    pIVar4 = (IList_1_System_Object_ *)func_?();
    if (pIVar4 != (IList_1_System_Object_ *)0x0) {
      (*((method->field7_0x1c).rgctx_data[3].method)->virtualMethodPointer)();
      if ((*(byte *)((int)(method->field7_0x1c).rgctx_data[4].rgctxDataDummy + 0xba) & 1) == 0) {
        func_?();
      }
      piVar5 = (int *)func_?();
      uStack_1 = 1;
code_?:
      if (piVar5 != (int *)0x0) {
        cVar6 = func_?();
        if (cVar6 == '\0') {
          uStack_1 = 0xffffffff;
          if (piVar5 == (int *)0x0) {
            *unaff_FS_OFFSET = uStack_3;
            return pIVar4;
          }
          func_?();
          *unaff_FS_OFFSET = uStack_3;
          return pIVar4;
        }
        if (piVar5 != (int *)0x0) {
          pvVar7 = (method->field7_0x1c).rgctx_data[6].rgctxDataDummy;
          if ((*(byte *)((int)pvVar7 + 0xba) & 1) == 0) {
            pvVar7 = (void *)func_?();
          }
          uVar8 = 0;
          uVar9 = *(ushort *)(*piVar5 + 0xb2);
          if (uVar9 != 0) {
            do {
              if (*(void **)(*(int *)(*piVar5 + 0x58) + (uint)uVar8 * 8) == pvVar7) {
                puVar10 = (undefined4 *)
                         (*(int *)(*(int *)(*piVar5 + 0x58) + 4 + (uint)uVar8 * 8) * 8 + 0xbc +
                         *piVar5);
                goto code_?;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar9);
          }
          puVar10 = (undefined4 *)func_?();
code_?:
          (*(code *)*puVar10)();
          if (minus != (IList_1_System_Object_ *)0x0) goto code_?;
          goto code_?;
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar11 = (code *)swi(3);
  pIVar4 = (IList_1_System_Object_ *)(*pcVar11)();
  return pIVar4;
code_?:
  func_?();
  cVar6 = func_?(4);
  if (cVar6 == '\0') {
code_?:
    (*((method->field7_0x1c).rgctx_data[9].method)->virtualMethodPointer)();
  }
  goto code_?;
}


/* Void Recurse[Object](IList`1[IList`1[System.Object]], Int32,
   Dictionary`2[System.Int32,System.Object], List`1[List`1[System.Object]]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::CollectionUtils_Recurse
               (IList_1_IList_1_System_Object_ *global,int32_t current,
               Dictionary_2_System_Int32_System_Object_ *currentSet,
               List_1_List_1_System_Object_ *flattenedResult,MethodInfo *method)

{
  if (global != (IList_1_IList_1_System_Object_ *)0x0) {
    pvVar1 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
    if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
      pvVar1 = (void *)func_?(pvVar1);
    }
    iVar2 = func_?(0,pvVar1,global,current);
    iStack_3 = 0;
    if (iVar2 != 0) {
      while( true ) {
        while( true ) {
          pvVar1 = (method->field7_0x1c).rgctx_data[0x10].rgctxDataDummy;
          if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
            pvVar1 = (void *)func_?(pvVar1);
          }
          iVar4 = func_?(0,pvVar1,iVar2);
          if (iVar4 <= iStack_3) {
            return;
          }
          pvVar1 = (method->field7_0x1c).rgctx_data[2].rgctxDataDummy;
          if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
            pvVar1 = (void *)func_?(pvVar1);
          }
          uVar5 = func_?(0,pvVar1,iVar2,iStack_3);
          if (currentSet == (Dictionary_2_System_Int32_System_Object_ *)0x0) goto code_?;
          (*((method->field7_0x1c).rgctx_data[5].method)->virtualMethodPointer)
                    (currentSet,current,uVar5,(method->field7_0x1c).rgctx_data[5].method);
          pvVar1 = (method->field7_0x1c).rgctx_data[6].rgctxDataDummy;
          if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
            pvVar1 = (void *)func_?(pvVar1);
          }
          iVar4 = func_?(0,pvVar1,global);
          if (current == iVar4 + -1) break;
          (*((method->field7_0x1c).rgctx_data[0xf].method)->virtualMethodPointer)
                    (global,current + 1,currentSet,flattenedResult,
                     (method->field7_0x1c).rgctx_data[0xf].rgctxDataDummy);
          iStack_3 = iStack_3 + 1;
        }
        uVar5 = func_?((method->field7_0x1c).rgctx_data,8);
        iVar4 = func_?(uVar5);
        if (iVar4 == 0) break;
        (*((method->field7_0x1c).rgctx_data[9].method)->virtualMethodPointer)
                  (iVar4,(method->field7_0x1c).rgctx_data[9].method);
        for (iVar6 = 0;
            iVar7 = (*((method->field7_0x1c).rgctx_data[0xc].method)->virtualMethodPointer)
                              (currentSet,(method->field7_0x1c).rgctx_data[0xc].rgctxDataDummy),
            iVar6 < iVar7; iVar6 = iVar6 + 1) {
          uVar5 = (*((method->field7_0x1c).rgctx_data[10].method)->virtualMethodPointer)
                            (currentSet,iVar6,(method->field7_0x1c).rgctx_data[10].rgctxDataDummy);
          (*((method->field7_0x1c).rgctx_data[0xb].method)->virtualMethodPointer)
                    (iVar4,uVar5,(method->field7_0x1c).rgctx_data[0xb].method);
        }
        if (flattenedResult == (List_1_List_1_System_Object_ *)0x0) break;
        (*((method->field7_0x1c).rgctx_data[0xe].method)->virtualMethodPointer)
                  (flattenedResult,iVar4,(method->field7_0x1c).rgctx_data[0xe].method);
        iStack_3 = iStack_3 + 1;
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* IList`1[System.Object] Slice[Object](IList`1[System.Object], Nullable`1[Int32],
   Nullable`1[Int32]) */

IList_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::CollectionUtils_Slice
          (IList_1_System_Object_ *list,Nullable_1_Int32_ start,Nullable_1_Int32_ end,
          MethodInfo *method)

{
  pIVar1 = (IList_1_System_Object_ *)
           (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                     (list,start._0_4_,start.value,end._0_4_,end.value,0,0,
                      ((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
  return pIVar1;
}


/* IList`1[System.Object] Slice[Object](IList`1[System.Object], Nullable`1[Int32],
   Nullable`1[Int32], Nullable`1[Int32]) */

IList_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::CollectionUtils_Slice_1
          (IList_1_System_Object_ *list,Nullable_1_Int32_ start,Nullable_1_Int32_ end,
          Nullable_1_Int32_ step,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    func_?(&MethodInfo__System__Nullable<int>__GetValueOrDefault__);
    func_?(&MethodInfo__System__Nullable<int>__get_HasValue__);
    cRam_? = '\x01';
  }
  if (list == (IList_1_System_Object_ *)0x0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
    this = (ArgumentNullException *)func_?(uVar1);
    func_?(this);
    pMVar2 = (MethodInfo *)0x0;
    pSVar3 = (String *)func_?(&StringLiteral_list);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1(this,pSVar3,pMVar2);
    uVar1 = func_?(&
                             System__Collections__Generic__IList<System::Object>_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__Slice<System::Object>_System__Collections__Generic__IList<System::Object>__System__Nullable<int>__System__Nullable<int>__System__Nullable<int>_
                            );
    func_?(this,uVar1);
  }
  else {
    if ((step.hasValue & step.value == 0) != 0) goto code_?;
    pvVar4 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
    if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
      pvVar4 = (void *)func_?(pvVar4);
    }
    pMVar2 = (MethodInfo *)func_?(pvVar4);
    if (pMVar2 != (MethodInfo *)0x0) {
      (*((method->field7_0x1c).rgctx_data[1].method)->virtualMethodPointer)
                (pMVar2,(method->field7_0x1c).rgctx_data[1].method);
      pvVar4 = (method->field7_0x1c).rgctx_data[2].rgctxDataDummy;
      if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
        pvVar4 = (void *)func_?(pvVar4);
      }
      iVar5 = func_?(0,pvVar4,list);
      if (iVar5 != 0) {
        if (end.hasValue == 0) {
          pvVar4 = (method->field7_0x1c).rgctx_data[2].rgctxDataDummy;
          if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
            pvVar4 = (void *)func_?(pvVar4);
          }
          end.value = func_?(0,pvVar4,list);
        }
        if ((longlong)start < 0) {
          pvVar4 = (method->field7_0x1c).rgctx_data[2].rgctxDataDummy;
          if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
            pvVar4 = (void *)func_?(pvVar4);
          }
          iVar5 = func_?(0,pvVar4,list);
          start.value = iVar5 + start.value;
        }
        if (end.value < 0) {
          pvVar4 = (method->field7_0x1c).rgctx_data[2].rgctxDataDummy;
          if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
            pvVar4 = (void *)func_?(pvVar4);
          }
          iVar5 = func_?(0,pvVar4,list);
          end.value = iVar5 + end.value;
        }
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Math);
        }
        iVar6 = mscorlib.dll::System::Math::Math_Max_2(start.value,0,(MethodInfo *)0x0);
        pvVar4 = (method->field7_0x1c).rgctx_data[2].rgctxDataDummy;
        if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
          pvVar4 = (void *)func_?(pvVar4);
        }
        iVar5 = func_?(0,pvVar4,list);
        iVar7 = mscorlib.dll::System::Math::Math_Min_1(end.value,iVar5 + -1,(MethodInfo *)0x0);
        if (iVar6 < iVar7) {
          do {
            pIVar8 = (method->field7_0x1c).rgctx_data[4].rgctxDataDummy;
            if (pIVar8->initialized_and_no_error == 0) {
              pIVar8 = (Il2CppClass *)func_?(pIVar8);
            }
            pIVar9 = list->klass;
            uVar10 = 0;
            uVar11 = (pIVar9->_1).interface_offsets_count;
            if (uVar11 != 0) {
              do {
                if (pIVar9->interfaceOffsets[uVar10].interfaceType == pIVar8) {
                  pVVar12 = &(pIVar9->vtable).get_Item + pIVar9->interfaceOffsets[uVar10].offset;
                  goto code_?;
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < uVar11);
            }
            pVVar12 = (VirtualInvokeData *)func_?(list,pIVar8,0);
code_?:
            pMVar2 = pVVar12->method;
            pIVar13 = list;
            iVar5 = iVar6;
            uVar1 = (*pVVar12->methodPtr)();
            (*((method->field7_0x1c).rgctx_data[6].method)->virtualMethodPointer)
                      (pMVar2,uVar1,(method->field7_0x1c).rgctx_data[6].method);
            iVar6 = (int)&pIVar13->klass + iVar6;
          } while (iVar6 < iVar5);
        }
      }
      return (IList_1_System_Object_ *)pMVar2;
    }
  }
  func_?();
code_?:
  uVar1 = func_?(&TypeInfo__System__ArgumentException);
  this_00 = (ArgumentException *)func_?(uVar1);
  func_?(this_00);
  pSVar3 = (String *)func_?(&StringLiteral_step);
  message = (String *)func_?(&StringLiteral_Step_cannot_be_zero_);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_4
            (this_00,message,pSVar3,(MethodInfo *)0x0);
  uVar1 = func_?(&
                           System__Collections__Generic__IList<System::Object>_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__Slice<System::Object>_System__Collections__Generic__IList<System::Object>__System__Nullable<int>__System__Nullable<int>__System__Nullable<int>_
                          );
  func_?(this_00,uVar1);
  pcVar14 = (code *)swi(3);
  pIVar13 = (IList_1_System_Object_ *)(*pcVar14)();
  return pIVar13;
}


/* Array ToArray(Array, Type) */

Array * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::CollectionUtils_ToArray
                  (Array *initial,Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  bVar1 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                    ((Object **)type,(Object **)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (initial != (Array *)0x0) {
      iVar2 = mscorlib.dll::System::Array::Array_get_Length(initial,(MethodInfo *)0x0);
      pAVar3 = mscorlib.dll::System::Array::Array_CreateInstance_1(type,iVar2,(MethodInfo *)0x0);
      iVar2 = mscorlib.dll::System::Array::Array_get_Length(initial,(MethodInfo *)0x0);
      mscorlib.dll::System::Array::Array_Copy_3(initial,0,pAVar3,0,iVar2,(MethodInfo *)0x0);
      return pAVar3;
    }
  }
  else {
    uVar4 = func_?(&TypeInfo__System__ArgumentNullException);
    this = (ArgumentNullException *)func_?(uVar4);
    func_?(this);
    method_00 = (MethodInfo *)0x0;
    paramName = (String *)func_?(&StringLiteral_type);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,paramName,method_00);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__ToArray_System__Array__System__Type_
                   );
    func_?();
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pAVar3 = (Array *)(*pcVar5)();
  return pAVar3;
}


/* Array ToMultidimensionalArray(IList, Type, Int32) */

Array * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
        CollectionUtils_ToMultidimensionalArray
                  (IList *values,Type *type,int32_t rank,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Int32__MethodInfo__System__Linq__Enumerable__ToArray<int>_System__Collections__Generic__IEnumerable<int>_____
                   );
    func_?(&TypeInfo__System__Collections__Generic__ICollection<int>);
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  source = CollectionUtils_GetDimensions(values,(MethodInfo *)0x0);
  if (source == (IList_1_System_Int32_ *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    pAVar2 = (Array *)(*pcVar1)();
    return pAVar2;
  }
code_?:
  do {
    uVar3 = 0;
    uVar4 = (source->klass->_1).interface_offsets_count;
    if (uVar4 != 0) {
      do {
        if (source->klass->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__System__Collections__Generic__ICollection<int>) {
          pVVar5 = &(source->klass->vtable).get_Item + source->klass->interfaceOffsets[uVar3].offset
          ;
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    pVVar5 = (VirtualInvokeData *)
             func_?(source,TypeInfo__System__Collections__Generic__ICollection<int>,0);
code_?:
    iVar6 = (*pVVar5->methodPtr)(source,pVVar5->method);
    if (rank <= iVar6) {
      pIVar7 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToArray_1
                         ((IEnumerable_1_System_Int32_ *)source,
                          System__Int32__MethodInfo__System__Linq__Enumerable__ToArray<int>_System__Collections__Generic__IEnumerable<int>_____
                         );
      pAVar2 = mscorlib.dll::System::Array::Array_CreateInstance_4(type,pIVar7,(MethodInfo *)0x0);
      pIVar7 = (Int32__Array *)func_?(TypeInfo__System__Int32,0);
      CollectionUtils_CopyFromJaggedToMultidimensionalArray(values,pAVar2,pIVar7,(MethodInfo *)0x0);
      return pAVar2;
    }
    uVar3 = 0;
    uVar4 = (source->klass->_1).interface_offsets_count;
    if (uVar4 != 0) {
      do {
        if (source->klass->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__System__Collections__Generic__ICollection<int>) {
          pVVar5 = &(source->klass->vtable).IndexOf + source->klass->interfaceOffsets[uVar3].offset;
          (*pVVar5->methodPtr)(source,0,pVVar5->method);
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    puVar8 = (undefined4 *)
             func_?(source,TypeInfo__System__Collections__Generic__ICollection<int>,2);
    (*(code *)*puVar8)(source,0,puVar8[1]);
  } while( true );
}


/* Boolean TryGetSingleItem[Object](IList`1[System.Object], Object ByRef) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
     CollectionUtils_TryGetSingleItem
               (IList_1_System_Object_ *list,Object **value,MethodInfo *method)

{
  bVar1 = (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                    (list,0,value,((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
  return bVar1;
}


/* Boolean TryGetSingleItem[Object](IList`1[System.Object], Boolean, Object ByRef) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
     CollectionUtils_TryGetSingleItem_1
               (IList_1_System_Object_ *list,bool returnDefaultIfEmpty,Object **value,
               MethodInfo *method)

{
  pvVar1 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
    pvVar1 = (void *)func_?(pvVar1);
  }
  iVar2 = func_?(pvVar1);
  if (iVar2 != 0) {
    (*((method->field7_0x1c).rgctx_data[1].method)->virtualMethodPointer)
              (iVar2,(method->field7_0x1c).rgctx_data[1].method);
    *(IList_1_System_Object_ **)(iVar2 + 8) = list;
    func_?(iVar2 + 8,list);
    *(bool *)(iVar2 + 0xc) = returnDefaultIfEmpty;
    pvVar1 = (method->field7_0x1c).rgctx_data[3].rgctxDataDummy;
    if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
      pvVar1 = (void *)func_?(pvVar1);
    }
    iVar3 = func_?(pvVar1);
    if (iVar3 != 0) {
      pMVar4 = (method->field7_0x1c).rgctx_data[4].method;
      (*pMVar4->virtualMethodPointer)
                (iVar3,iVar2,(method->field7_0x1c).rgctx_data[2].rgctxDataDummy,pMVar4);
      bVar5 = (*((method->field7_0x1c).rgctx_data[5].method)->virtualMethodPointer)
                        (iVar3,value,(method->field7_0x1c).rgctx_data[5].rgctxDataDummy);
      return bVar5;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


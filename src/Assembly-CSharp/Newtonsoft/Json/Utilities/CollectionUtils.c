
/* Boolean AddDistinct[Object](IList`1[System.Object], Object, IEqualityComparer`1[System.Object])
    */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
     CollectionUtils_AddDistinct_1
               (IList_1_System_Object_ *list,Object *value,
               IEqualityComparer_1_System_Object_ *comparer,MethodInfo *method)

{
  cVar1 = (*(code *)(*method->parameters)->data)(list,value,comparer,*method->parameters);
  if (cVar1 != '\0') {
    return 0;
  }
  if (list == (IList_1_System_Object_ *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  pIVar4 = (Il2CppClass *)method->parameters[1];
  if (((uint)pIVar4->vtable[0].methodPtr & 0x10000) == 0) {
    func_?(pIVar4);
  }
  pIVar5 = list->klass;
  uVar6 = 0;
  uVar7._0_1_ = (pIVar5->_1).rank;
  uVar7._1_1_ = (pIVar5->_1).minimumAlignment;
  if (uVar7 != 0) {
    do {
      if (pIVar5->interfaceOffsets[uVar6].interfaceType == pIVar4) {
        ppMVar8 = &(&(list->klass->vtable).RemoveAt)[pIVar5->interfaceOffsets[uVar6].offset].method;
        goto code_?;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar7);
  }
  ppMVar8 = (MethodInfo **)func_?(list,pIVar4,2);
code_?:
  (*(code *)*ppMVar8)(list,value,ppMVar8[1]);
  return 1;
}


/* Boolean AddDistinct[String](IList`1[System.String], String) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
     CollectionUtils_AddDistinct_2(IList_1_System_String_ *list,String *value,MethodInfo *method)

{
  pIVar1 = method->parameters[1];
  if ((pIVar1[0x17].type & 1) == 0) {
    func_?(pIVar1);
  }
  if ((pIVar1[0x17].num_mods & 2) != 0) {
    pIVar1 = method->parameters[1];
    if ((pIVar1[0x17].type & 1) == 0) {
      func_?(pIVar1);
    }
    if (pIVar1[0xe].data.dummy == (void *)0x0) {
      pIVar1 = method->parameters[1];
      if ((pIVar1[0x17].type & 1) == 0) {
        func_?(pIVar1);
      }
      func_?(pIVar1);
    }
  }
  uVar2 = (*(code *)(*method->parameters)->data)(*method->parameters);
  bVar3 = (*(code *)method->parameters[2]->data)(list,value,uVar2,method->parameters[2]);
  return bVar3;
}


/* Void AddRange(IList, IEnumerable) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::CollectionUtils_AddRange
               (IList *initial,IEnumerable *collection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_initial;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (initial != (IList *)0x0) {
    this = (ListWrapper_1_System_Object_ *)
           func_?(TypeInfo__Newtonsoft__Json__Utilities__ListWrapper<System::Object>);
    ListWrapper`1[System::Object]::ListWrapper_1_System_Object___ctor
              (this,initial,
               MethodInfo__Newtonsoft__Json__Utilities__ListWrapper<System::Object>__ListWrapper_System__Collections__IList_
              );
    collection_00 =
         System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_8
                   (collection,
                    System__Collections__Generic__IEnumerable<System::Object>_MethodInfo__System__Linq__Enumerable__Cast<System::Object>_System__Collections__IEnumerable_
                   );
    CollectionUtils_AddRange_4
              ((IList_1_System_Reflection_MemberInfo_ *)this,
               (IEnumerable_1_System_Reflection_MemberInfo_ *)collection_00,
               void_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__AddRange<System::Object>_System__Collections__Generic__IList<System::Object>__System__Collections__Generic__IEnumerable<System::Object>_
              );
    return;
  }
  this_00 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,paramName,(MethodInfo *)0x0);
  func_?(this_00,0,
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                 );
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean AddRangeDistinct[JToken](IList`1[Newtonsoft.Json.Linq.JToken],
   IEnumerable`1[Newtonsoft.Json.Linq.JToken], IEqualityComparer`1[Newtonsoft.Json.Linq.JToken]) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
     CollectionUtils_AddRangeDistinct_2
               (IList_1_Newtonsoft_Json_Linq_JToken_ *list,
               IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *values,
               IEqualityComparer_1_Newtonsoft_Json_Linq_JToken_ *comparer,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  bStack_4 = 1;
  if (values != (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
    unaff_ESI = *method->parameters;
    if ((unaff_ESI[0x17].type & 1) == 0) {
      func_?(unaff_ESI);
    }
    piVar5 = (int *)func_?(0,unaff_ESI,values);
    uStack_1 = 0;
    while (piVar5 != (int *)0x0) {
      cVar6 = func_?(1,TypeInfo__System__Collections__IEnumerator,piVar5);
      if (cVar6 == '\0') {
        uStack_1 = 0xffffffff;
        if (piVar5 != (int *)0x0) {
          func_?(0,TypeInfo__System__IDisposable,piVar5);
        }
        *unaff_FS_OFFSET = uStack_3;
        return bStack_4;
      }
      unaff_ESI = method->parameters[1];
      if ((unaff_ESI[0x17].type & 1) == 0) {
        func_?(unaff_ESI);
      }
      uVar7 = 0;
      uVar8 = *(ushort *)(*piVar5 + 0xb6);
      if (uVar8 != 0) {
        iVar9 = *(int *)(*piVar5 + 0x58);
        do {
          if (*(Il2CppType **)(iVar9 + (uint)uVar7 * 8) == unaff_ESI) {
            puVar10 = (undefined4 *)(*piVar5 + (*(int *)(iVar9 + 4 + (uint)uVar7 * 8) + 0x18) * 8);
            goto code_?;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar8);
      }
      puVar10 = (undefined4 *)func_?(piVar5,unaff_ESI,0);
code_?:
      uVar11 = (*(code *)*puVar10)(piVar5,puVar10[1]);
      cVar6 = (*(code *)method->parameters[2]->data)(list,uVar11,comparer,method->parameters[2]);
      if (cVar6 == '\0') {
        bStack_4 = 0;
      }
    }
  }
  func_?(0);
  func_?(unaff_ESI,0,0);
  pcVar12 = (code *)swi(3);
  bVar13 = (*pcVar12)();
  return bVar13;
}


/* Void AddRange[MemberInfo](IList`1[System.Reflection.MemberInfo],
   IEnumerable`1[System.Reflection.MemberInfo]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::CollectionUtils_AddRange_4
               (IList_1_System_Reflection_MemberInfo_ *initial,
               IEnumerable_1_System_Reflection_MemberInfo_ *collection,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if (initial != (IList_1_System_Reflection_MemberInfo_ *)0x0) {
    if (collection == (IEnumerable_1_System_Reflection_MemberInfo_ *)0x0) {
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    pIVar4 = (Il2CppClass *)*method->parameters;
    if (((uint)pIVar4->vtable[0].methodPtr & 0x10000) == 0) {
      func_?(pIVar4);
    }
    piVar5 = (int *)func_?(0,pIVar4,collection);
    uStack_1 = 0;
code_?:
    if (piVar5 != (int *)0x0) {
      cVar6 = func_?(1,TypeInfo__System__Collections__IEnumerator,piVar5);
      if (cVar6 == '\0') {
        uStack_1 = 0xffffffff;
        if (piVar5 != (int *)0x0) {
          func_?(0,TypeInfo__System__IDisposable,piVar5);
        }
        goto code_?;
      }
      pIVar7 = method->parameters[1];
      if ((pIVar7[0x17].type & 1) == 0) {
        func_?(pIVar7);
      }
      uVar8 = 0;
      uVar9 = *(ushort *)(*piVar5 + 0xb6);
      if (uVar9 != 0) {
        iVar10 = *(int *)(*piVar5 + 0x58);
        do {
          if (*(Il2CppType **)(iVar10 + (uint)uVar8 * 8) == pIVar7) {
            puVar11 = (undefined4 *)(*piVar5 + (*(int *)(iVar10 + 4 + (uint)uVar8 * 8) + 0x18) * 8);
            goto code_?;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar9);
      }
      puVar11 = (undefined4 *)func_?(piVar5,pIVar7,0);
code_?:
      uVar12 = (*(code *)*puVar11)(piVar5,puVar11[1]);
      pIVar4 = (Il2CppClass *)method->parameters[2];
      if (((uint)pIVar4->vtable[0].methodPtr & 0x10000) == 0) {
        func_?(pIVar4);
      }
      pIVar13 = initial->klass;
      uVar8 = 0;
      uVar9._0_1_ = (pIVar13->_1).rank;
      uVar9._1_1_ = (pIVar13->_1).minimumAlignment;
      if (uVar9 != 0) {
        do {
          if (pIVar13->interfaceOffsets[uVar8].interfaceType == pIVar4) {
            iVar10 = pIVar13->interfaceOffsets[uVar8].offset;
            (*(code *)(&(initial->klass->vtable).RemoveAt)[iVar10].method)
                      (initial,uVar12,(&(initial->klass->vtable).get_Item)[iVar10].methodPtr);
            goto code_?;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar9);
      }
      puVar11 = (undefined4 *)func_?(initial,pIVar4,2);
      (*(code *)*puVar11)(initial,uVar12,puVar11[1]);
      goto code_?;
    }
    func_?(0);
    func_?(pIVar4,0,0);
  }
  this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,StringLiteral_initial,(MethodInfo *)0x0);
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* IEnumerable`1[System.Object] CastValid[Object](IEnumerable) */

IEnumerable_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::CollectionUtils_CastValid
          (IEnumerable *enumerable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)enumerable,StringLiteral_enumerable,(MethodInfo *)0x0);
  pMVar1 = 
  System__Collections__Generic__IEnumerable<System::Object>_MethodInfo__System__Linq__Enumerable__Cast<System::Object>_System__Collections__IEnumerable_
  ;
  System.Core.dll::System::Linq::Check::Check_Source((Object *)enumerable,(MethodInfo *)0x0);
  if (((*pMVar1->parameters)[0x17].type & 1) == 0) {
    func_?();
  }
  pIVar2 = (IEnumerable *)func_?(enumerable);
  if (pIVar2 == (IEnumerable *)0x0) {
    pIVar2 = (IEnumerable *)(*(code *)pMVar1->parameters[1]->data)(enumerable);
  }
  enumerable = pIVar2;
  this = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
         func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this,(Object *)0x0,*method->parameters,
             MethodInfo__System__Func<System::Object,_bool>__Func_System__Object__void__);
  pMVar1 = 
  System__Collections__Generic__IEnumerable<System::Object>_MethodInfo__System__Linq__Enumerable__Where<System::Object>_System__Collections__Generic__IEnumerable<System::Object>__System__Func<System::Object,_bool>_
  ;
  System.Core.dll::System::Linq::Check::Check_SourceAndPredicate
            ((Object *)enumerable,(Object *)this,(MethodInfo *)0x0);
  (*(code *)(*pMVar1->parameters)->data)(enumerable,this,*pMVar1->parameters);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar3 = (IEnumerable_1_System_Object_ *)(*(code *)method->parameters[1]->data)();
  return pIVar3;
}


/* Boolean ContainsValue[JToken](IEnumerable`1[Newtonsoft.Json.Linq.JToken], JToken,
   IEqualityComparer`1[Newtonsoft.Json.Linq.JToken]) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
     CollectionUtils_ContainsValue_1
               (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *source,JToken *value,
               IEqualityComparer_1_Newtonsoft_Json_Linq_JToken_ *comparer,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bStack_4 = 0;
  func_?();
  if (comparer == (IEqualityComparer_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
    ppIVar5 = method->parameters;
    pIVar6 = ppIVar5[1];
    if ((pIVar6[0x17].type & 1) == 0) {
      func_?(pIVar6);
      ppIVar5 = method->parameters;
    }
    if ((pIVar6[0x17].num_mods & 2) != 0) {
      pIVar6 = ppIVar5[1];
      if ((pIVar6[0x17].type & 1) == 0) {
        func_?(pIVar6);
        ppIVar5 = method->parameters;
      }
      if (pIVar6[0xe].data.dummy == (void *)0x0) {
        pIVar6 = ppIVar5[1];
        if ((pIVar6[0x17].type & 1) == 0) {
          func_?(pIVar6);
        }
        func_?(pIVar6);
      }
    }
    comparer = (IEqualityComparer_1_Newtonsoft_Json_Linq_JToken_ *)
               (*(code *)(*method->parameters)->data)(*method->parameters);
  }
  if (source == (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
    this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,StringLiteral_source,(MethodInfo *)0x0);
    func_?();
  }
  else {
    pIVar6 = method->parameters[2];
    if ((pIVar6[0x17].type & 1) == 0) {
      func_?(pIVar6);
    }
    iVar7 = func_?(0,pIVar6,source);
    uStack_1 = 0;
    while (iVar7 != 0) {
      cVar8 = func_?(1,TypeInfo__System__Collections__IEnumerator,iVar7);
      if (cVar8 == '\0') {
        iVar9 = 0x62;
        goto code_?;
      }
      pIVar6 = method->parameters[3];
      if ((pIVar6[0x17].type & 1) == 0) {
        func_?(pIVar6);
      }
      uVar10 = func_?(0,pIVar6,iVar7);
      if (comparer == (IEqualityComparer_1_Newtonsoft_Json_Linq_JToken_ *)0x0) break;
      pIVar11 = (Il2CppClass *)method->parameters[4];
      if (((uint)pIVar11->vtable[0].methodPtr & 0x10000) == 0) {
        func_?(pIVar11);
      }
      pIVar12 = comparer->klass;
      uVar13 = 0;
      uVar14._0_1_ = (pIVar12->_1).rank;
      uVar14._1_1_ = (pIVar12->_1).minimumAlignment;
      if (uVar14 != 0) {
        do {
          if (pIVar12->interfaceOffsets[uVar13].interfaceType == pIVar11) {
            ppMVar15 = &(&(comparer->klass->vtable).Equals)[pIVar12->interfaceOffsets[uVar13].offset].
                        method;
            goto code_?;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar14);
      }
      ppMVar15 = (MethodInfo **)func_?(comparer,pIVar11,0);
code_?:
      cVar8 = (*(code *)*ppMVar15)(comparer,uVar10,value,ppMVar15[1]);
      if (cVar8 != '\0') {
        bStack_4 = 1;
        iVar9 = 100;
code_?:
        uStack_1 = 0xffffffff;
        if (iVar7 != 0) {
          func_?(0,TypeInfo__System__IDisposable,iVar7);
        }
        if (iVar9 != 100) {
          *unaff_FS_OFFSET = uStack_3;
          return 0;
        }
        *unaff_FS_OFFSET = uStack_3;
        return bStack_4;
      }
    }
  }
  uVar10 = func_?(0);
  func_?(uVar10,0,0);
  pcVar16 = (code *)swi(3);
  bVar17 = (*pcVar16)();
  return bVar17;
}


/* Void CopyFromJaggedToMultidimensionalArray(IList, Array, Int32[]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
     CollectionUtils_CopyFromJaggedToMultidimensionalArray
               (IList *values,Array *multidimensionalArray,Int32__Array *indices,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((indices == (Int32__Array *)0x0) ||
     (dimension = indices->max_length, multidimensionalArray == (Array *)0x0)) {
code_?:
    func_?();
code_?:
    uVar1 = func_?();
    func_?(uVar1);
  }
  else {
    uVar2 = mscorlib.dll::System::Array::Array_GetRank(multidimensionalArray,(MethodInfo *)0x0);
    if (dimension == uVar2) {
      pOVar3 = CollectionUtils_JaggedArrayGetValue(values,indices,(MethodInfo *)0x0);
      mscorlib.dll::System::Array::Array_SetValue
                (multidimensionalArray,pOVar3,indices,(MethodInfo *)0x0);
      return;
    }
    iVar4 = mscorlib.dll::System::Array::Array_GetLength
                      (multidimensionalArray,dimension,(MethodInfo *)0x0);
    pOVar3 = CollectionUtils_JaggedArrayGetValue(values,indices,(MethodInfo *)0x0);
    if (pOVar3 == (Object *)0x0) goto code_?;
    iVar5 = func_?();
    if (iVar5 == 0) goto code_?;
    puVar6 = (uint *)&UNK_?;
    iVar5 = func_?(0);
    if (iVar5 == iVar4) {
      indices_00 = (Int32__Array *)func_?();
      uVar2 = 0;
      if (0 < (int)dimension) {
        piVar7 = indices_00->vector;
        do {
          if (*puVar6 <= uVar2) goto code_?;
          if (indices_00 == (Int32__Array *)0x0) goto code_?;
          if (indices_00->max_length <= uVar2) goto code_?;
          uVar2 = uVar2 + 1;
          *piVar7 = *(int32_t *)(((int)indices - (int)indices_00) + (int)piVar7);
          piVar7 = piVar7 + 1;
        } while ((int)uVar2 < (int)dimension);
      }
      iVar5 = 0;
      while( true ) {
        iVar4 = mscorlib.dll::System::Array::Array_GetLength
                          (multidimensionalArray,dimension,(MethodInfo *)0x0);
        if (iVar4 <= iVar5) {
          return;
        }
        if (indices_00 == (Int32__Array *)0x0) break;
        if (indices_00->max_length <= dimension) goto code_?;
        indices_00->vector[dimension] = iVar5;
        CollectionUtils_CopyFromJaggedToMultidimensionalArray
                  ((IList *)0x0,multidimensionalArray,indices_00,(MethodInfo *)0x0);
        iVar5 = iVar5 + 1;
      }
      goto code_?;
    }
  }
  this = (IsolatedStorageException *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this,StringLiteral_Cannot_deserialize_non_cubical_a,(MethodInfo *)0x0);
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Object CreateAndPopulateList(Type, Action`2[System.Collections.IList,Boolean]) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
         CollectionUtils_CreateAndPopulateList
                   (Type *listType,Action_2_System_Collections_IList_Boolean_ *populateList,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (Type__Array *)StringLiteral_listType;
  pTStack_2 = (Type *)0x0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar3 = listType;
  this_03 = (Type__Array *)StringLiteral_populateList;
  if (listType == (Type *)0x0) {
code_?:
    pAVar4 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (pAVar4,(String *)pTVar1,(MethodInfo *)0x0);
    func_?(pAVar4,0,
                    MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                   );
    pTVar1 = in_stack_5;
code_?:
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar6 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
    pOVar7 = (Object__Array *)func_?(TypeInfo__System__Object,2);
    func_?(pOVar7,0);
    func_?(pOVar7,pTVar3);
    func_?(0,pTVar3);
    func_?(pOVar7,0);
    func_?(pOVar7,pTVar1);
    func_?(1,pTVar1);
    message = StringUtils::StringUtils_FormatWith
                        (StringLiteral_Read_only_type__0__does_not_have,(IFormatProvider *)pCVar6,
                         pOVar7,(MethodInfo *)0x0);
    this_04 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1(this_04,message,(MethodInfo *)0x0);
    func_?(this_04,0,
                    MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__CreateAndPopulateList_System__Type__System__Action<System::Collections::IList,_bool>_
                   );
code_?:
    uVar8 = func_?();
code_?:
    func_?(uVar8);
  }
  else {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_05 = populateList;
    pTVar1 = this_03;
    if (populateList == (Action_2_System_Collections_IList_Boolean_ *)0x0) goto code_?;
    pIStack_9 = (IList_1_System_Int32_ *)((uint)pIStack_9 & 0xffffff00);
    MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_DeSelect
              ((MVSimpleOneSeatVehicle *)pTVar3,(MethodInfo *)0x0);
    in_stack_5 = (Type__Array *)TypeRef__System__Collections__ObjectModel__ReadOnlyCollection
    ;
    if (extraout_AL != '\0') {
      this = (List_1_UnityEngine_Vector4_ *)
             func_?(TypeInfo__System__Collections__Generic__List<System::Object>);
      listType = (Type *)this;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
      List_1_UnityEngine_Vector4___ctor
                (this,MethodInfo__System__Collections__Generic__List<System::Object>__List__);
code_?:
      pIStack_9 = (IList_1_System_Int32_ *)CONCAT31(pIStack_9._1_3_,1);
      goto code_?;
    }
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    pTVar10 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)in_stack_5,(MethodInfo *)0x0);
    bVar11 = ReflectionUtils::ReflectionUtils_InheritsGenericDefinition_1
                      (pTVar3,pTVar10,&pTStack_2,(MethodInfo *)0x0);
    pIVar12 = TypeRef__System__Collections__IList;
    if (bVar11 != 0) {
      if ((pTStack_2 == (Type *)0x0) ||
         (iVar13 = (*(code *)(pTStack_2->klass->vtable).GetGenericArguments.method)
                             (pTStack_2,
                              (pTStack_2->klass->vtable).get_ContainsGenericParameters.methodPtr),
         pIVar12 = TypeRef__System__Collections__Generic__IEnumerable, iVar13 == 0))
      goto code_?;
      if (*(int *)(iVar13 + 0xc) == 0) goto code_?;
      this_03 = *(Type__Array **)(iVar13 + 0x10);
      innerType = this_03;
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Type);
      }
      listType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)pIVar12,(MethodInfo *)0x0);
      in_stack_5 = (Type__Array *)func_?(TypeInfo__System__Type,1);
      if (in_stack_5 == (Type__Array *)0x0) goto code_?;
      if ((this_03 != (Type__Array *)0x0) &&
         (iVar13 = func_?(this_03,(in_stack_5->klass->_0).element_class),
         iVar13 == 0)) goto code_?;
      pTVar1 = this_03;
      if (in_stack_5->max_length == 0) goto code_?;
      in_stack_5->vector[0] = (Type *)this_03;
      pTVar1 = (Type__Array *)
                ReflectionUtils::ReflectionUtils_MakeGenericType
                          (listType,in_stack_5,(MethodInfo *)0x0);
      in_stack_14 =
           mscorlib.dll::System::Type::Type_GetConstructors(pTVar3,(MethodInfo *)0x0);
      in_stack_5 = (Type__Array *)0x0;
      if (in_stack_14 == (ConstructorInfo__Array *)0x0) goto code_?;
      listType = (Type *)in_stack_14->vector;
      for (; (int)in_stack_5 < (int)in_stack_14->max_length;
          in_stack_5 = (Type__Array *)((int)&in_stack_5->klass + 1)) {
        if ((Type__Array *)in_stack_14->max_length <= in_stack_5)
        goto code_?;
        pTVar15 = listType->klass;
        if ((pTVar15 == (Type__Class *)0x0) ||
           (pCVar16 = (ConstructorInfo__Class *)(pTVar15->_0).image,
           this_03 = (Type__Array *)
                     (*(code *)(pCVar16->vtable).__unknown_6.method)
                               (pTVar15,(pCVar16->vtable).GetParameterCount.methodPtr),
           this_03 == (Type__Array *)0x0)) goto code_?;
        iVar13 = func_?(0,
                                 TypeInfo__System__Collections__Generic__ICollection<System::Reflection::ParameterInfo>
                                 ,this_03);
        if (iVar13 == 1) {
          iVar13 = func_?(3,
                                   TypeInfo__System__Collections__Generic__IList<System::Reflection::ParameterInfo>
                                   ,this_03,0);
          if ((iVar13 == 0) ||
             (this_03 = pTVar1, uVar17 = func_?(6,iVar13), this_03 == (Type__Array *)0x0))
          goto code_?;
          pTVar1 = this_03;
          cVar18 = func_?(0x29,this_03,uVar17);
          if (cVar18 != '\0') {
            in_stack_5 = pTVar1;
            if (cRam_? == '\0') {
              func_?(_UNK_?);
              cRam_? = '\x01';
              in_stack_5 = pTVar1;
            }
            pTVar1 = (Type__Array *)StringLiteral_listType;
            if (cRam_? == '\0') {
              func_?(_UNK_?);
              cRam_? = '\x01';
            }
            pIVar12 = TypeRef__System__Collections__Generic__List;
            if (innerType == (Type__Array *)0x0) goto code_?;
            if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Type->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__Type);
            }
            pTVar10 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                ((RuntimeTypeHandle)pIVar12,(MethodInfo *)0x0);
            pOVar7 = (Object__Array *)func_?(TypeInfo__System__Object,0);
            in_stack_5 =
                 (Type__Array *)
                 ReflectionUtils::ReflectionUtils_CreateGeneric
                           (pTVar10,(Type *)innerType,pOVar7,(MethodInfo *)0x0);
            if (in_stack_5 == (Type__Array *)0x0) {
              this = (List_1_UnityEngine_Vector4_ *)0x0;
              listType = (Type *)0x0;
              pIStack_9 = (IList_1_System_Int32_ *)CONCAT31(pIStack_9._1_3_,1);
              this_05 = populateList;
            }
            else {
              in_stack_14 = (ConstructorInfo__Array *)&UNK_?;
              this = (List_1_UnityEngine_Vector4_ *)
                     func_?(in_stack_5,TypeInfo__System__Collections__IList);
              pTVar1 = (Type__Array *)0x0;
              listType = (Type *)this;
              if (this == (List_1_UnityEngine_Vector4_ *)0x0) goto code_?;
              pIStack_9 = (IList_1_System_Int32_ *)CONCAT31(pIStack_9._1_3_,1);
              this_05 = populateList;
            }
            goto code_?;
          }
        }
        listType = (Type *)&listType->monitor;
      }
      goto code_?;
    }
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    pTVar10 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)pIVar12,(MethodInfo *)0x0);
    if (pTVar10 == (Type *)0x0) goto code_?;
    cVar18 = (*(code *)(pTVar10->klass->vtable).IsAssignableFrom.method)
                      (pTVar10,pTVar3,(pTVar10->klass->vtable).IsInstanceOfType.methodPtr);
    pIVar12 = TypeRef__System__Collections__Generic__ICollection;
    if (cVar18 == '\0') {
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Type);
      }
      listType = (Type *)0x0;
      pTVar10 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)pIVar12,(MethodInfo *)0x0);
      bVar11 = ReflectionUtils::ReflectionUtils_ImplementsGenericDefinition_1
                        (pTVar3,pTVar10,&listType,(MethodInfo *)0x0);
      pIVar12 = TypeRef__System__Collections__BitArray;
      if (bVar11 == 0) {
        if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Type->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Type);
        }
        pTVar10 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                            ((RuntimeTypeHandle)pIVar12,(MethodInfo *)0x0);
        if (pTVar3 == pTVar10) {
          this = (List_1_UnityEngine_Vector4_ *)
                 func_?(TypeInfo__System__Collections__Generic__List<System::Object>);
          listType = (Type *)this;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
          List_1_UnityEngine_Vector4___ctor
                    (this,MethodInfo__System__Collections__Generic__List<System::Object>__List__);
          this_05 = populateList;
          goto code_?;
        }
      }
      else {
        bVar11 = ReflectionUtils::ReflectionUtils_IsInstantiatableType(pTVar3,(MethodInfo *)0x0);
        if (bVar11 != 0) {
          pOVar19 = mscorlib.dll::System::Activator::Activator_CreateInstance
                              (pTVar3,(MethodInfo *)0x0);
          this = (List_1_UnityEngine_Vector4_ *)
                 CollectionUtils_CreateCollectionWrapper(pOVar19,(MethodInfo *)0x0);
          this_05 = populateList;
          listType = (Type *)this;
          goto code_?;
        }
      }
code_?:
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar6 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      pOVar7 = (Object__Array *)func_?(TypeInfo__System__Object,1);
      func_?(pOVar7,0);
      func_?(pOVar7,pTVar3);
      pTStack_2 = pTVar3;
      func_?(0);
      in_stack_5 =
           (Type__Array *)
           StringUtils::StringUtils_FormatWith
                     (StringLiteral_Cannot_create_and_populate_list_,(IFormatProvider *)pCVar6,
                      pOVar7,(MethodInfo *)0x0);
      this_03 = (Type__Array *)func_?(TypeInfo__System__Exception);
      in_stack_14 = (ConstructorInfo__Array *)0x0;
      mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
      IsolatedStorageException__ctor_1
                ((IsolatedStorageException *)this_03,(String *)in_stack_5,(MethodInfo *)0x0);
      populateList = (Action_2_System_Collections_IList_Boolean_ *)
                     MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__CreateAndPopulateList_System__Type__System__Action<System::Collections::IList,_bool>_
      ;
      listType = (Type *)0x0;
      func_?();
code_?:
      uVar17 = func_?(0,0);
      func_?(uVar17);
code_?:
      uVar17 = func_?(0,0);
      func_?(uVar17);
      pTVar1 = this_03;
code_?:
      uVar17 = func_?(0);
      func_?(uVar17);
code_?:
      func_?(in_stack_5,in_stack_14);
      goto code_?;
    }
    bVar11 = ReflectionUtils::ReflectionUtils_IsInstantiatableType(pTVar3,(MethodInfo *)0x0);
    pIVar12 = TypeRef__System__Collections__IList;
    if (bVar11 == 0) {
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Type);
      }
      pTVar10 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)pIVar12,(MethodInfo *)0x0);
      if (pTVar3 != pTVar10) goto code_?;
      this = (List_1_UnityEngine_Vector4_ *)
             func_?(TypeInfo__System__Collections__Generic__List<System::Object>);
      listType = (Type *)this;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
      List_1_UnityEngine_Vector4___ctor
                (this,MethodInfo__System__Collections__Generic__List<System::Object>__List__);
      this_05 = populateList;
    }
    else {
      pOVar19 = mscorlib.dll::System::Activator::Activator_CreateInstance(pTVar3,(MethodInfo *)0x0)
      ;
      this = (List_1_UnityEngine_Vector4_ *)
             func_?(pOVar19,TypeInfo__System__Collections__IList);
      this_05 = populateList;
      listType = (Type *)this;
    }
code_?:
    if (this == (List_1_UnityEngine_Vector4_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,MV::WorldObject::
    KogamaDataType]::UnityAction_2_System_Object_MV_WorldObject_KogamaDataType__Invoke
              ((UnityAction_2_System_Object_MV_WorldObject_KogamaDataType_ *)this_05,(Object *)this,
               (KogamaDataType__Enum)pIStack_9,
               MethodInfo__System__Action<System::Collections::IList,_bool>__Invoke_System__Collections__IList__bool_
              );
    if ((char)pIStack_9 == '\0') {
      iVar13 = func_?();
      if (iVar13 == 0) {
        return (Object *)this;
      }
      iVar13 = func_?();
      if (iVar13 != 0) {
        iVar13 = func_?();
        if (iVar13 != 0) {
          pIStack_9 = (IList_1_System_Int32_ *)0x0;
          pOVar19 = (Object *)func_?();
          return pOVar19;
        }
      }
      goto code_?;
    }
    MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_DeSelect
              ((MVSimpleOneSeatVehicle *)pTVar3,(MethodInfo *)0x0);
    if (extraout_AL_00 == '\0') {
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        populateList = (Action_2_System_Collections_IList_Boolean_ *)TypeInfo__System__Type;
        listType = (Type *)&UNK_?;
        func_?();
      }
      populateList = (Action_2_System_Collections_IList_Boolean_ *)0x0;
      listType = (Type *)0x0;
      pTVar10 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)0x0,(MethodInfo *)0x0);
      populateList = (Action_2_System_Collections_IList_Boolean_ *)0x0;
      listType = (Type *)&listType;
      bVar11 = ReflectionUtils::ReflectionUtils_InheritsGenericDefinition_1
                        (pTVar3,pTVar10,(Type **)listType,(MethodInfo *)0x0);
      pIVar12 = TypeRef__System__Collections__BitArray;
      if (bVar11 == 0) {
        if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Type->_1).cctor_started == 0)) {
          func_?();
        }
        pTVar10 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                            ((RuntimeTypeHandle)pIVar12,(MethodInfo *)0x0);
        if (pTVar3 != pTVar10) {
          return (Object *)this;
        }
        iVar20 = func_?();
        this_00 = (BitArray *)func_?();
        method = (MethodInfo *)&UNK_?;
        mscorlib.dll::System::Collections::BitArray::BitArray__ctor_2
                  (this_00,iVar20,(MethodInfo *)0x0);
        pTVar3 = (Type *)0x0;
        do {
          listType = pTVar3;
          iVar13 = func_?();
          if (iVar13 <= (int)pTVar3) {
            return (Object *)this_00;
          }
          pLVar21 = this->klass;
          uVar22 = 0;
          uVar23._0_1_ = (pLVar21->_1).rank;
          uVar23._1_1_ = (pLVar21->_1).minimumAlignment;
          if (uVar23 != 0) {
            do {
              pTVar3 = listType;
              if (pLVar21->interfaceOffsets[uVar22].interfaceType ==
                  (Il2CppClass *)TypeInfo__System__Collections__IList) {
                ppMVar24 = &(&(this->klass->vtable).GetHashCode)
                            [pLVar21->interfaceOffsets[uVar22].offset].method;
                this_06 = this_00;
                goto code_?;
              }
              uVar22 = uVar22 + 1;
            } while (uVar22 < uVar23);
          }
          ppMVar24 = (MethodInfo **)func_?();
          this_06 = this_00;
code_?:
          piVar25 = (int *)(*(code *)*ppMVar24)();
          uVar8 = CONCAT44(TypeInfo__System__Boolean,piVar25);
          if ((this_06 == (BitArray *)0x0) || (piVar25 == (int *)0x0)) goto code_?;
          if (*(Il2CppClass **)(*piVar25 + 0x20) != (TypeInfo__System__Boolean->_0).element_class)
          goto code_?;
          this_00 = this_06;
          pbVar26 = (bool *)func_?(piVar25);
          mscorlib.dll::System::Collections::BitArray::BitArray_Set
                    (this_06,(int32_t)pTVar3,*pbVar26,(MethodInfo *)0x0);
          pTVar3 = (Type *)((int)&pTVar3->klass + 1);
        } while( true );
      }
      pOVar7 = (Object__Array *)func_?();
      if (pOVar7 != (Object__Array *)0x0) {
        func_?(pOVar7,this);
        func_?(0,this);
        pOVar19 = ReflectionUtils::ReflectionUtils_CreateInstance(pTVar3,pOVar7,(MethodInfo *)0x0)
        ;
        pOVar19 = (Object *)func_?(pOVar19,TypeInfo__System__Collections__IList);
        return pOVar19;
      }
      goto code_?;
    }
    populateList = (Action_2_System_Collections_IList_Boolean_ *)
                   (pTVar3->klass->vtable).__unknown_12.methodPtr;
    listType = pTVar3;
    iVar13 = (*(code *)(pTVar3->klass->vtable).GetArrayRank.method)();
    if (1 < iVar13) {
      populateList = (Action_2_System_Collections_IList_Boolean_ *)0x0;
      listType = pTVar3;
      pTVar10 = ReflectionUtils::ReflectionUtils_GetCollectionItemType(pTVar3,(MethodInfo *)0x0);
      populateList = (Action_2_System_Collections_IList_Boolean_ *)
                     (pTVar3->klass->vtable).__unknown_12.methodPtr;
      listType = pTVar3;
      iVar13 = (*(code *)(pTVar3->klass->vtable).GetArrayRank.method)();
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pIVar27 = CollectionUtils_GetDimensions((IList *)this,(MethodInfo *)0x0);
      pIStack_9 = pIVar27;
      if (pIVar27 != (IList_1_System_Int32_ *)0x0) {
code_?:
        do {
          pIVar28 = pIVar27->klass;
          uVar23 = 0;
          uVar22._0_1_ = (pIVar28->_1).rank;
          uVar22._1_1_ = (pIVar28->_1).minimumAlignment;
          if (uVar22 != 0) {
            do {
              if (pIVar28->interfaceOffsets[uVar23].interfaceType ==
                  (Il2CppClass *)TypeInfo__System__Collections__Generic__ICollection<int>) {
                ppMVar24 = &(&(pIVar28->vtable).IndexOf)[pIVar28->interfaceOffsets[uVar23].offset].
                            method;
                source = pIStack_9;
                goto code_?;
              }
              uVar23 = uVar23 + 1;
              pIVar27 = pIStack_9;
            } while (uVar23 < uVar22);
          }
          ppMVar24 = (MethodInfo **)
                     func_?(pIVar27,
                                     TypeInfo__System__Collections__Generic__ICollection<int>,0);
          source = pIVar27;
code_?:
          iVar29 = (*(code *)*ppMVar24)(source,ppMVar24[1]);
          pIVar27 = pIStack_9;
          if (iVar13 <= iVar29) {
            lengths = System.Core.dll::System::Linq::Enumerable::Enumerable_ToArray_9
                                ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)source
                                 ,
                                 System__Int32__MethodInfo__System__Linq__Enumerable__ToArray<int>_System__Collections__Generic__IEnumerable<int>_____
                                );
            pAVar30 = mscorlib.dll::System::Array::Array_CreateInstance_3
                                (pTVar10,(Int32__Array *)lengths,(MethodInfo *)0x0);
            indices = (Int32__Array *)func_?(TypeInfo__System__Int32,0);
            CollectionUtils_CopyFromJaggedToMultidimensionalArray
                      ((IList *)listType,pAVar30,indices,(MethodInfo *)0x0);
            return (Object *)pAVar30;
          }
          pIVar28 = source->klass;
          uVar23 = 0;
          uVar31._0_1_ = (pIVar28->_1).rank;
          uVar31._1_1_ = (pIVar28->_1).minimumAlignment;
          if (uVar31 != 0) {
            do {
              if (pIVar28->interfaceOffsets[uVar23].interfaceType ==
                  (Il2CppClass *)TypeInfo__System__Collections__Generic__ICollection<int>) {
                iVar29 = pIVar28->interfaceOffsets[uVar23].offset;
                (*(code *)(&(pIVar28->vtable).RemoveAt)[iVar29].method)
                          (pIStack_9,0,(&(pIVar28->vtable).get_Item)[iVar29].methodPtr);
                goto code_?;
              }
              uVar23 = uVar23 + 1;
              source = pIStack_9;
            } while (uVar23 < uVar31);
          }
          puVar32 = (undefined4 *)
                    func_?(source,TypeInfo__System__Collections__Generic__ICollection<int>,
                                    2);
          (*(code *)*puVar32)(source,0,puVar32[1]);
          pIVar27 = source;
        } while( true );
      }
      goto code_?;
    }
    populateList = (Action_2_System_Collections_IList_Boolean_ *)
                   TypeInfo__System__Collections__Generic__List<System::Object>;
    listType = (Type *)this;
    iVar13 = func_?();
    method_00 = MethodInfo__System__Collections__Generic__List<System::Object>__ToArray__;
    if (iVar13 == 0) goto code_?;
    this_01 = (List_1_VoxelHit_ *)
              func_?(this,TypeInfo__System__Collections__Generic__List<System::Object>);
    this_02 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__ToArray
                        (this_01,method_00);
    pTVar3 = ReflectionUtils::ReflectionUtils_GetCollectionItemType(pTVar3,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if (pTVar3 != (Type *)0x0) {
      if (this_02 != (VoxelHit__Array *)0x0) {
        iVar20 = mscorlib.dll::System::Array::Array_get_Length((Array *)this_02,(MethodInfo *)0x0);
        pAVar30 = mscorlib.dll::System::Array::Array_CreateInstance
                            (pTVar3,iVar20,(MethodInfo *)0x0);
        iVar20 = mscorlib.dll::System::Array::Array_get_Length((Array *)this_02,(MethodInfo *)0x0);
        mscorlib.dll::System::Array::Array_Copy_1
                  ((Array *)this_02,0,pAVar30,0,iVar20,(MethodInfo *)0x0);
        return (Object *)pAVar30;
      }
      goto code_?;
    }
  }
  pAVar4 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (pAVar4,StringLiteral_type,(MethodInfo *)0x0);
  func_?(pAVar4,0,
                  MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__ToArray_System__Array__System__Type_
                 );
code_?:
  func_?(0);
  pcVar33 = (code *)swi(3);
  pOVar19 = (Object *)(*pcVar33)();
  return pOVar19;
}


/* IWrappedCollection CreateCollectionWrapper(Object) */

IWrappedCollection *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
CollectionUtils_CreateCollectionWrapper(Object *list,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__Newtonsoft__Json__Utilities__CollectionUtils___CreateCollectionWrapper_c__AnonStorey1;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  if (this == (ScaleAnimationBase *)0x0) {
code_?:
    func_?(0);
code_?:
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?();
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    pOVar1 = (Object__Array *)func_?();
    func_?();
    pOVar2 = (Object *)func_?();
    func_?();
    mscorlib.dll::System::Object::Object_GetType(pOVar2,(MethodInfo *)0x0);
    func_?();
    func_?(pOVar1);
    func_?();
    message = StringUtils::StringUtils_FormatWith
                        (StringLiteral_Can_not_create_ListWrapper_for_t,(IFormatProvider *)provider,
                         pOVar1,(MethodInfo *)0x0);
    this_02 = (IList__Class *)func_?();
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1((IsolatedStorageException *)this_02,message,(MethodInfo *)0x0);
    func_?();
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
  }
  else {
    bVar4 = cRam_? == '\0';
    (this->fields).state = (int32_t)list;
    this_02 = (IList__Class *)StringLiteral_list;
    if (bVar4) {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if (list == (Object *)0x0) goto code_?;
    pOVar2 = (Object *)(this->fields).state;
    if (pOVar2 == (Object *)0x0) goto code_?;
    pTVar5 = mscorlib.dll::System::Object::Object_GetType(pOVar2,(MethodInfo *)0x0);
    pIVar6 = TypeRef__System__Collections__Generic__ICollection;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    genericInterfaceDefinition =
         mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
    bVar7 = ReflectionUtils::ReflectionUtils_ImplementsGenericDefinition_1
                      (pTVar5,genericInterfaceDefinition,(Type **)&this->fields,(MethodInfo *)0x0);
    if (bVar7 != 0) {
      ReflectionUtils::ReflectionUtils_GetCollectionItemType
                ((this->fields)._._._._.m_CachedPtr,(MethodInfo *)0x0);
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      pMVar8 = 
      MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils___CreateCollectionWrapper_c__AnonStorey1____m__0_System__Type__System__Collections__Generic__IList<System::Object>_
      ;
      instanceCreator =
           (Func_3_Type_System_Collections_Generic_IList_1_System_Object_Object_ *)&UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)this,
                 MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils___CreateCollectionWrapper_c__AnonStorey1____m__0_System__Type__System__Collections__Generic__IList<System::Object>_
                 ,
                 MethodInfo__System__Func<System::Type,_System::Collections::Generic::IList<System::Object>,_System::Object>__Func_System__Object__void__
                );
      pIVar6 = TypeRef__Newtonsoft__Json__Utilities__CollectionWrapper;
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?();
      }
      pTVar5 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
      this_02 = (IList__Class *)func_?();
      if (this_02 == (IList__Class *)0x0) goto code_?;
      if ((pMVar8 != (MethodInfo *)0x0) &&
         (iVar9 = func_?(pMVar8,((this_02->_0).image)->codeGenModule), iVar9 == 0))
      goto code_?;
      if ((this_02->_0).namespaze == (char *)0x0) goto code_?;
      (this_02->_0).byval_arg.data.typeHandle = (Il2CppMetadataTypeHandle)pMVar8;
      pOVar1 = (Object__Array *)func_?(TypeInfo__System__Object,1);
      pOVar2 = (Object *)(this->fields).state;
      if (pOVar1 == (Object__Array *)0x0) goto code_?;
      if ((pOVar2 != (Object *)0x0) &&
         (iVar9 = func_?(pOVar2,(pOVar1->klass->_0).element_class), iVar9 == 0))
      goto code_?;
      if (pOVar1->max_length != 0) {
        pOVar1->vector[0] = pOVar2;
        pOVar2 = ReflectionUtils::ReflectionUtils_CreateGeneric_2
                           (pTVar5,(IList_1_System_Type_ *)this_02,instanceCreator,pOVar1,
                            (MethodInfo *)0x0);
        this_02 = (IList__Class *)TypeInfo__Newtonsoft__Json__Utilities__IWrappedCollection;
        if (pOVar2 == (Object *)0x0) {
          return (IWrappedCollection *)0x0;
        }
        pIVar10 = (IWrappedCollection *)func_?(pOVar2);
        if (pIVar10 != (IWrappedCollection *)0x0) {
          return pIVar10;
        }
        goto code_?;
      }
      goto code_?;
    }
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    iVar9 = (this->fields).state;
    this_00 = (CollectionWrapper_1_System_Object_ *)func_?();
    this_02 = TypeInfo__System__Collections__IList;
    if (iVar9 == 0) {
      list_00 = (IList *)0x0;
code_?:
      CollectionWrapper`1[System::Object]::CollectionWrapper_1_System_Object___ctor
                (this_00,list_00,
                 MethodInfo__Newtonsoft__Json__Utilities__CollectionWrapper<System::Object>__CollectionWrapper_System__Collections__IList_
                );
      return (IWrappedCollection *)this_00;
    }
    list_00 = (IList *)func_?();
    if (list_00 != (IList *)0x0) goto code_?;
  }
code_?:
  func_?();
code_?:
  this_03 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_03,(String *)this_02,(MethodInfo *)0x0);
  func_?(this_03,0,
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                 );
  pcVar11 = (code *)swi(3);
  pIVar10 = (IWrappedCollection *)(*pcVar11)();
  return pIVar10;
}


/* IWrappedDictionary CreateDictionaryWrapper(Object) */

IWrappedDictionary *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
CollectionUtils_CreateDictionaryWrapper(Object *dictionary,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__Newtonsoft__Json__Utilities__CollectionUtils___CreateDictionaryWrapper_c__AnonStorey3;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  pOVar1 = dictionary;
  if (this == (ScaleAnimationBase *)0x0) {
code_?:
    func_?(0);
code_?:
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      method = (MethodInfo *)TypeInfo__System__Globalization__CultureInfo;
      dictionary = (Object *)&UNK_?;
      func_?();
    }
    method = (MethodInfo *)0x0;
    dictionary = (Object *)&UNK_?;
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    method = (MethodInfo *)0x1;
    dictionary = (Object *)TypeInfo__System__Object;
    args_00 = (Object__Array *)func_?();
    func_?();
    this_01 = (MethodInfo *)func_?();
    dictionary = (Object *)&UNK_?;
    method = this_01;
    func_?();
    dictionary = (Object *)0x0;
    mscorlib.dll::System::Object::Object_GetType((Object *)this_01,(MethodInfo *)0x0);
    dictionary = (Object *)0x0;
    func_?();
    pFStack_2 = (Func_3_Type_System_Collections_Generic_IList_1_System_Object_Object_ *)
                &UNK_?;
    func_?();
    func_?();
    dictionary = (Object *)provider;
    method = (MethodInfo *)args_00;
    message = StringUtils::StringUtils_FormatWith
                        (StringLiteral_Can_not_create_DictionaryWrapper,(IFormatProvider *)provider,
                         args_00,(MethodInfo *)0x0);
    method = (MethodInfo *)&UNK_?;
    this_02 = (IDictionary__Class *)func_?();
    method = (MethodInfo *)0x0;
    dictionary = (Object *)message;
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1((IsolatedStorageException *)this_02,message,(MethodInfo *)0x0);
    func_?();
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    args = this_02;
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
  }
  else {
    bVar4 = cRam_? == '\0';
    (this->fields).state = (int32_t)dictionary;
    args = (IDictionary__Class *)StringLiteral_dictionary;
    if (bVar4) {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if (pOVar1 == (Object *)0x0) goto code_?;
    pOVar1 = (Object *)(this->fields).state;
    if (pOVar1 == (Object *)0x0) goto code_?;
    pTVar5 = mscorlib.dll::System::Object::Object_GetType(pOVar1,(MethodInfo *)0x0);
    pIVar6 = TypeRef__System__Collections__Generic__IDictionary;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    genericInterfaceDefinition =
         mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
    implementingType = &this->fields;
    bVar7 = ReflectionUtils::ReflectionUtils_ImplementsGenericDefinition_1
                      (pTVar5,genericInterfaceDefinition,(Type **)implementingType,(MethodInfo *)0x0
                      );
    if (bVar7 != 0) {
      method = (MethodInfo *)0x0;
      dictionary = (Object *)&stack0xfffffff8;
      ReflectionUtils::ReflectionUtils_GetDictionaryKeyValueTypes
                ((implementingType->_)._._._.m_CachedPtr,(Type **)&dictionary,(Type **)dictionary,
                 (MethodInfo *)0x0);
      method = (MethodInfo *)0x0;
      dictionary = (Object *)&stack0xfffffff8;
      pFStack_2 = (Func_3_Type_System_Collections_Generic_IList_1_System_Object_Object_ *)0x0;
      ReflectionUtils::ReflectionUtils_GetDictionaryKeyValueTypes
                ((implementingType->_)._._._.m_CachedPtr,(Type **)&pFStack_2,(Type **)dictionary,
                 (MethodInfo *)0x0);
      method = (MethodInfo *)
               TypeInfo__System__Func<System::Type,_System::Collections::Generic::IList<System::Object>,_System::Object>
      ;
      dictionary = (Object *)&UNK_?;
      args = (IDictionary__Class *)func_?();
      dictionary = (Object *)
                   MethodInfo__System__Func<System::Type,_System::Collections::Generic::IList<System::Object>,_System::Object>__Func_System__Object__void__
      ;
      pFStack_2 = (Func_3_Type_System_Collections_Generic_IList_1_System_Object_Object_ *)
                  &UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                ((UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)args,(Object *)this,
                 MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils___CreateDictionaryWrapper_c__AnonStorey3____m__0_System__Type__System__Collections__Generic__IList<System::Object>_
                 ,
                 MethodInfo__System__Func<System::Type,_System::Collections::Generic::IList<System::Object>,_System::Object>__Func_System__Object__void__
                );
      pIVar6 = TypeRef__Newtonsoft__Json__Utilities__DictionaryWrapper;
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?();
      }
      pTVar5 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
      message = (String *)func_?();
      this_02 = (IDictionary__Class *)dictionary;
      if (message == (String *)0x0) goto code_?;
      if ((dictionary != (Object *)0x0) &&
         (iVar8 = func_?(dictionary,(message->klass->_0).element_class), iVar8 == 0))
      goto code_?;
      if (*(int *)&(message->fields).start_char == 0) goto code_?;
      message[1].klass = (String__Class *)this_02;
      if ((args != (IDictionary__Class *)0x0) &&
         (iVar8 = func_?(args,(message->klass->_0).element_class), iVar8 == 0))
      goto code_?;
      if (*(uint *)&(message->fields).start_char < 2) goto code_?;
      message[1].monitor = (MonitorData *)args;
      args = (IDictionary__Class *)func_?(TypeInfo__System__Object,1);
      pvVar9 = (void *)(this->fields).state;
      if (args == (IDictionary__Class *)0x0) goto code_?;
      if ((pvVar9 != (void *)0x0) &&
         (iVar8 = func_?(pvVar9,((args->_0).image)->codeGenModule), iVar8 == 0))
      goto code_?;
      if ((args->_0).namespaze != (char *)0x0) {
        (args->_0).byval_arg.data.dummy = pvVar9;
        message = (String *)
                  ReflectionUtils::ReflectionUtils_CreateGeneric_2
                            (pTVar5,(IList_1_System_Type_ *)message,pFStack_2,(Object__Array *)args,
                             (MethodInfo *)0x0);
        args = (IDictionary__Class *)TypeInfo__Newtonsoft__Json__Utilities__IWrappedDictionary;
        if (message == (String *)0x0) {
          return (IWrappedDictionary *)0x0;
        }
        pFStack_2 = (Func_3_Type_System_Collections_Generic_IList_1_System_Object_Object_ *)
                    &UNK_?;
        pIVar10 = (IWrappedDictionary *)func_?();
        if (pIVar10 != (IWrappedDictionary *)0x0) {
          return pIVar10;
        }
        goto code_?;
      }
      goto code_?;
    }
    method = (MethodInfo *)TypeInfo__System__Collections__IDictionary;
    dictionary = (Object *)(this->fields).state;
    iVar8 = func_?();
    if (iVar8 == 0) goto code_?;
    method = (MethodInfo *)
             TypeInfo__Newtonsoft__Json__Utilities__DictionaryWrapper<System::Object,_System::Object>
    ;
    message = (String *)(this->fields).state;
    dictionary = (Object *)&UNK_?;
    this_00 = (DictionaryWrapper_2_System_Object_System_Object_ *)func_?();
    args = TypeInfo__System__Collections__IDictionary;
    if (message == (String *)0x0) {
      dictionary = (Object *)0x0;
code_?:
      method = 
      MethodInfo__Newtonsoft__Json__Utilities__DictionaryWrapper<System::Object,_System::Object>__DictionaryWrapper_System__Collections__IDictionary_
      ;
      DictionaryWrapper`2[System::Object,System::Object]::
      DictionaryWrapper_2_System_Object_System_Object___ctor
                (this_00,(IDictionary *)dictionary,
                 MethodInfo__Newtonsoft__Json__Utilities__DictionaryWrapper<System::Object,_System::Object>__DictionaryWrapper_System__Collections__IDictionary_
                );
      return (IWrappedDictionary *)this_00;
    }
    method = (MethodInfo *)TypeInfo__System__Collections__IDictionary;
    dictionary = (Object *)message;
    dictionary = (Object *)func_?();
    if ((IDictionary *)dictionary != (IDictionary *)0x0) goto code_?;
  }
code_?:
  dictionary = (Object *)message;
  method = (MethodInfo *)args;
  func_?();
code_?:
  this_03 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_03,(String *)args,(MethodInfo *)0x0);
  pFStack_2 = (Func_3_Type_System_Collections_Generic_IList_1_System_Object_Object_ *)
              MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
  ;
  func_?(this_03,0);
  pcVar11 = (code *)swi(3);
  pIVar10 = (IWrappedDictionary *)(*pcVar11)();
  return pIVar10;
}


/* IDictionary CreateGenericDictionary(Type, Type) */

IDictionary *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
CollectionUtils_CreateGenericDictionary(Type *keyType,Type *valueType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_keyType;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (keyType == (Type *)0x0) {
    this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    goto code_?;
  }
  paramName = StringLiteral_valueType;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  handle = TypeRef__System__Collections__Generic__Dictionary;
  if (valueType != (Type *)0x0) {
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    paramName = (String *)
                mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    args = (Object__Array *)func_?(TypeInfo__System__Object,1);
    if (args != (Object__Array *)0x0) {
      iVar1 = func_?(valueType,(args->klass->_0).element_class);
      if (iVar1 == 0) {
        uVar2 = func_?(0);
        func_?(uVar2);
code_?:
        uVar2 = func_?(0);
        func_?(uVar2);
      }
      else {
        if (args->max_length == 0) goto code_?;
        args->vector[0] = (Object *)valueType;
        pOVar3 = ReflectionUtils::ReflectionUtils_CreateGeneric
                           ((Type *)paramName,keyType,args,(MethodInfo *)0x0);
        if (pOVar3 == (Object *)0x0) {
          return (IDictionary *)0x0;
        }
        pIVar4 = (IDictionary *)func_?();
        if (pIVar4 != (IDictionary *)0x0) {
          return pIVar4;
        }
      }
      func_?();
    }
    func_?(0);
  }
  this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
code_?:
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,paramName,(MethodInfo *)0x0);
  func_?(this,0,
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                 );
  pcVar5 = (code *)swi(3);
  pIVar4 = (IDictionary *)(*pcVar5)();
  return pIVar4;
}


/* IList CreateGenericList(Type) */

IList * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
        CollectionUtils_CreateGenericList(Type *listType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_listType;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  handle = TypeRef__System__Collections__Generic__List;
  if (listType == (Type *)0x0) {
    this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,paramName,(MethodInfo *)0x0);
    func_?(this,0,
                    MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                   );
  }
  else {
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    genericTypeDefinition =
         mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    args = (Object__Array *)func_?(TypeInfo__System__Object,0);
    pOVar1 = ReflectionUtils::ReflectionUtils_CreateGeneric
                       (genericTypeDefinition,listType,args,(MethodInfo *)0x0);
    if (pOVar1 == (Object *)0x0) {
      return (IList *)0x0;
    }
    pIVar2 = (IList *)func_?();
    if (pIVar2 != (IList *)0x0) {
      return pIVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pIVar2 = (IList *)(*pcVar3)();
  return pIVar2;
}


/* List`1[System.Object] CreateList[Object](Object[]) */

List_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::CollectionUtils_CreateList
          (Object__Array *values,MethodInfo *method)

{
  pIVar1 = *method->parameters;
  if ((pIVar1[0x17].type & 1) == 0) {
    func_?(pIVar1);
  }
  pLVar2 = (List_1_System_Object_ *)func_?(pIVar1);
  (*(code *)method->parameters[1]->data)(pLVar2,values,method->parameters[1]);
  return pLVar2;
}


/* IWrappedList CreateListWrapper(Object) */

IWrappedList *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::CollectionUtils_CreateListWrapper
          (Object *list,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__Newtonsoft__Json__Utilities__CollectionUtils___CreateListWrapper_c__AnonStorey2;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  if (this == (ScaleAnimationBase *)0x0) {
code_?:
    func_?(0);
code_?:
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?();
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    pOVar1 = (Object__Array *)func_?();
    func_?();
    pOVar2 = (Object *)func_?();
    func_?();
    mscorlib.dll::System::Object::Object_GetType(pOVar2,(MethodInfo *)0x0);
    func_?();
    func_?(pOVar1);
    func_?();
    message = StringUtils::StringUtils_FormatWith
                        (StringLiteral_Can_not_create_ListWrapper_for_t,(IFormatProvider *)provider,
                         pOVar1,(MethodInfo *)0x0);
    this_02 = (IList__Class *)func_?();
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1((IsolatedStorageException *)this_02,message,(MethodInfo *)0x0);
    func_?();
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
  }
  else {
    bVar4 = cRam_? == '\0';
    (this->fields).state = (int32_t)list;
    this_02 = (IList__Class *)StringLiteral_list;
    if (bVar4) {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if (list == (Object *)0x0) goto code_?;
    pOVar2 = (Object *)(this->fields).state;
    if (pOVar2 == (Object *)0x0) goto code_?;
    pTVar5 = mscorlib.dll::System::Object::Object_GetType(pOVar2,(MethodInfo *)0x0);
    pIVar6 = TypeRef__System__Collections__Generic__IList;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    genericInterfaceDefinition =
         mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
    bVar7 = ReflectionUtils::ReflectionUtils_ImplementsGenericDefinition_1
                      (pTVar5,genericInterfaceDefinition,(Type **)&this->fields,(MethodInfo *)0x0);
    if (bVar7 != 0) {
      ReflectionUtils::ReflectionUtils_GetCollectionItemType
                ((this->fields)._._._._.m_CachedPtr,(MethodInfo *)0x0);
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      pMVar8 = 
      MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils___CreateListWrapper_c__AnonStorey2____m__0_System__Type__System__Collections__Generic__IList<System::Object>_
      ;
      instanceCreator =
           (Func_3_Type_System_Collections_Generic_IList_1_System_Object_Object_ *)&UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)this,
                 MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils___CreateListWrapper_c__AnonStorey2____m__0_System__Type__System__Collections__Generic__IList<System::Object>_
                 ,
                 MethodInfo__System__Func<System::Type,_System::Collections::Generic::IList<System::Object>,_System::Object>__Func_System__Object__void__
                );
      pIVar6 = TypeRef__Newtonsoft__Json__Utilities__ListWrapper;
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?();
      }
      pTVar5 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
      this_02 = (IList__Class *)func_?();
      if (this_02 == (IList__Class *)0x0) goto code_?;
      if ((pMVar8 != (MethodInfo *)0x0) &&
         (iVar9 = func_?(pMVar8,((this_02->_0).image)->codeGenModule), iVar9 == 0))
      goto code_?;
      if ((this_02->_0).namespaze == (char *)0x0) goto code_?;
      (this_02->_0).byval_arg.data.typeHandle = (Il2CppMetadataTypeHandle)pMVar8;
      pOVar1 = (Object__Array *)func_?(TypeInfo__System__Object,1);
      pOVar2 = (Object *)(this->fields).state;
      if (pOVar1 == (Object__Array *)0x0) goto code_?;
      if ((pOVar2 != (Object *)0x0) &&
         (iVar9 = func_?(pOVar2,(pOVar1->klass->_0).element_class), iVar9 == 0))
      goto code_?;
      if (pOVar1->max_length != 0) {
        pOVar1->vector[0] = pOVar2;
        pOVar2 = ReflectionUtils::ReflectionUtils_CreateGeneric_2
                           (pTVar5,(IList_1_System_Type_ *)this_02,instanceCreator,pOVar1,
                            (MethodInfo *)0x0);
        this_02 = (IList__Class *)TypeInfo__Newtonsoft__Json__Utilities__IWrappedList;
        if (pOVar2 == (Object *)0x0) {
          return (IWrappedList *)0x0;
        }
        pIVar10 = (IWrappedList *)func_?(pOVar2);
        if (pIVar10 != (IWrappedList *)0x0) {
          return pIVar10;
        }
        goto code_?;
      }
      goto code_?;
    }
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    iVar9 = (this->fields).state;
    this_00 = (ListWrapper_1_System_Object_ *)func_?();
    this_02 = TypeInfo__System__Collections__IList;
    if (iVar9 == 0) {
      list_00 = (IList *)0x0;
code_?:
      ListWrapper`1[System::Object]::ListWrapper_1_System_Object___ctor
                (this_00,list_00,
                 MethodInfo__Newtonsoft__Json__Utilities__ListWrapper<System::Object>__ListWrapper_System__Collections__IList_
                );
      return (IWrappedList *)this_00;
    }
    list_00 = (IList *)func_?();
    if (list_00 != (IList *)0x0) goto code_?;
  }
code_?:
  func_?();
code_?:
  this_03 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_03,(String *)this_02,(MethodInfo *)0x0);
  func_?(this_03,0,
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                 );
  pcVar11 = (code *)swi(3);
  pIVar10 = (IWrappedList *)(*pcVar11)();
  return pIVar10;
}


/* List`1[System.Object] CreateList[Object](ICollection) */

List_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::CollectionUtils_CreateList_1
          (ICollection *collection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (collection == (ICollection *)0x0) {
    this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,StringLiteral_collection,(MethodInfo *)0x0);
    func_?(this,0,
                    System__Collections__Generic__List<System::Object>_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__CreateList<System::Object>_System__Collections__ICollection_
                   );
    pcVar1 = (code *)swi(3);
    pLVar2 = (List_1_System_Object_ *)(*pcVar1)();
    return pLVar2;
  }
  uVar3 = func_?(0,TypeInfo__System__Collections__ICollection,collection);
  pIVar4 = *method->parameters;
  if ((pIVar4[0x17].type & 1) == 0) {
    func_?(pIVar4);
  }
  uVar3 = func_?(pIVar4,uVar3);
  pIVar5 = collection->klass;
  uVar6 = 0;
  uVar7._0_1_ = (pIVar5->_1).rank;
  uVar7._1_1_ = (pIVar5->_1).minimumAlignment;
  if (uVar7 != 0) {
    do {
      if (pIVar5->interfaceOffsets[uVar6].interfaceType ==
          (Il2CppClass *)TypeInfo__System__Collections__ICollection) {
        ppMVar8 = &(&(collection->klass->vtable).CopyTo)[pIVar5->interfaceOffsets[uVar6].offset].
                   method;
        goto code_?;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar7);
  }
  ppMVar8 = (MethodInfo **)func_?(collection,TypeInfo__System__Collections__ICollection,3);
code_?:
  (*(code *)*ppMVar8)(collection,uVar3,0,ppMVar8[1]);
  pIVar4 = method->parameters[1];
  if ((pIVar4[0x17].type & 1) == 0) {
    func_?(pIVar4);
  }
  pLVar2 = (List_1_System_Object_ *)func_?(pIVar4);
  (*(code *)method->parameters[2]->data)(pLVar2,uVar3,method->parameters[2]);
  return pLVar2;
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
  puStack_4 = &stack0xffffff94;
  puVar5 = &stack0xffffff94;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_7.monitor = (MonitorData *)0x0;
  CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_7.fields.syncRoot = (Object *)0x0;
  func_?();
  pIVar8 = *method->parameters;
  puStack_9 = (undefined4 *)&stack0xffffff94;
  puStack_4 = &stack0xffffff94;
  if ((pIVar8[0x17].type & 1) == 0) {
    puStack_9 = (undefined4 *)&stack0xffffff94;
    puStack_4 = &stack0xffffff94;
    func_?(pIVar8);
  }
  pLVar10 = (List_1_System_Object_ *)func_?(pIVar8);
  pLStack_11 = pLVar10;
  (*(code *)method->parameters[1]->data)(pLVar10,method->parameters[1]);
  pLStack_12 = pLVar10;
  if (collection == (List_1_System_Object_ *)0x0) {
code_?:
    iVar13 = func_?(0);
  }
  else {
    puVar14 = (undefined4 *)
             (*(code *)method->parameters[2]->data)(auStack_15,collection,method->parameters[2]);
    CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)*puVar14;
    CStack_7.monitor = (MonitorData *)puVar14[1];
    CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)puVar14[2];
    CStack_7.fields.syncRoot = (Object *)puVar14[3];
    uStack_1 = 0;
    while (cVar16 = func_?(&CStack_7,method->parameters[6]), cVar16 != '\0') {
      pOVar17 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_7,(MethodInfo *)method->parameters[3]);
      if (pLVar10 == (List_1_System_Object_ *)0x0) goto code_?;
      cVar16 = (*(code *)method->parameters[4]->data)(pLVar10,pOVar17,method->parameters[4]);
      if (cVar16 == '\0') {
        (*(code *)method->parameters[5]->data)(pLVar10,pOVar17,method->parameters[5]);
      }
    }
    *puStack_9 = 0x4c;
    uStack_1 = 0xffffffff;
    pIStack_18 = method->parameters[7];
    if ((pIStack_18[0x17].type & 1) == 0) {
      func_?(pIStack_18);
    }
    uStack_19 = 0xffffffff;
    uVar20 = 0;
    pCStack_21 = CStack_7.klass;
    pMStack_22 = CStack_7.monitor;
    pIStack_23 = CStack_7.fields.list;
    pOStack_24 = CStack_7.fields.syncRoot;
    if (*(short *)&pIStack_18[0x16].type != 0) {
      do {
        pLVar10 = pLStack_11;
        if (*(IDisposable__Class **)((int)pIStack_18[0xb].data.dummy + (uint)uVar20 * 8) ==
            TypeInfo__System__IDisposable) {
          pIVar8 = pIStack_18 + *(int *)&pIStack_18[0xb].data.type[uVar20].attrs + 0x18;
          goto code_?;
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < *(ushort *)&pIStack_18[0x16].type);
    }
    pIVar8 = (Il2CppType *)func_?(&pIStack_18,TypeInfo__System__IDisposable,0);
code_?:
    uVar25._0_2_ = pIVar8->attrs;
    uVar25._2_1_ = pIVar8->type;
    uVar25._3_1_ = pIVar8->field_0x7;
    (*(code *)pIVar8->data)(&pIStack_18,uVar25);
    CStack_7.klass = pCStack_21;
    CStack_7.monitor = pMStack_22;
    CStack_7.fields.list = pIStack_23;
    CStack_7.fields.syncRoot = pOStack_24;
    iVar13 = iStack_6;
    if (iStack_6 == 0) {
      *unaff_FS_OFFSET = uStack_3;
      return pLVar10;
    }
  }
  func_?(iVar13,0,0);
  pcVar26 = (code *)swi(3);
  pLVar10 = (List_1_System_Object_ *)(*pcVar26)();
  return pLVar10;
}


/* List`1[List`1[System.Object]] Flatten[Object](IList`1[System.Object][]) */

List_1_List_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::CollectionUtils_Flatten
          (IList_1_System_Object___Array *lists,MethodInfo *method)

{
  pIVar1 = *method->parameters;
  if ((pIVar1[0x17].type & 1) == 0) {
    func_?(pIVar1);
  }
  pLVar2 = (List_1_List_1_System_Object_ *)func_?(pIVar1);
  (*(code *)method->parameters[1]->data)(pLVar2,method->parameters[1]);
  pIVar1 = method->parameters[2];
  if ((pIVar1[0x17].type & 1) == 0) {
    func_?(pIVar1);
  }
  uVar3 = func_?(pIVar1);
  (*(code *)method->parameters[3]->data)(uVar3,method->parameters[3]);
  pIVar1 = method->parameters[4];
  if ((pIVar1[0x17].type & 1) == 0) {
    func_?(pIVar1);
  }
  uVar4 = func_?(pIVar1);
  (*(code *)method->parameters[5]->data)(uVar4,lists,method->parameters[5]);
  (*(code *)method->parameters[6]->data)(uVar4,0,uVar3,pLVar2,method->parameters[6]);
  return pLVar2;
}


/* IList`1[System.Int32] GetDimensions(IList) */

IList_1_System_Int32_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::CollectionUtils_GetDimensions
          (IList *values,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_Vector4_ *)
         func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this,MethodInfo__System__Collections__Generic__List<int>__List__);
  if (values == (IList *)0x0) {
code_?:
    func_?(0);
  }
  else {
    do {
      pLVar1 = ((List_1_UnityEngine_Vector4_ *)values)->klass;
      unaff_EDI = (IList__Class *)0x0;
      uVar2 = 0;
      uVar3._0_1_ = (pLVar1->_1).rank;
      uVar3._1_1_ = (pLVar1->_1).minimumAlignment;
      if (uVar3 != 0) {
        unaff_EDI = (IList__Class *)pLVar1->interfaceOffsets;
        do {
          if ((ICollection__Class *)(&(unaff_EDI->_0).image)[(uint)uVar2 * 2] ==
              TypeInfo__System__Collections__ICollection) {
            ppMVar4 = &(&(pLVar1->vtable).Equals)[(int)(&(unaff_EDI->_0).gc_desc)[(uint)uVar2 * 2]].
                       method;
            goto code_?;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar3);
      }
      ppMVar4 = (MethodInfo **)func_?(values,TypeInfo__System__Collections__ICollection,0);
code_?:
      uVar5 = (*(code *)*ppMVar4)(values,ppMVar4[1]);
      unaff_ESI = (List_1_UnityEngine_Vector4_ *)values;
      if (this == (List_1_UnityEngine_Vector4_ *)0x0) goto code_?;
      pLVar1 = this->klass;
      unaff_EDI = (IList__Class *)0x0;
      uVar3 = 0;
      uVar2._0_1_ = (pLVar1->_1).rank;
      uVar2._1_1_ = (pLVar1->_1).minimumAlignment;
      if (uVar2 != 0) {
        unaff_EDI = (IList__Class *)pLVar1->interfaceOffsets;
        do {
          if ((ICollection_1_System_Int32___Class *)(&(unaff_EDI->_0).image)[(uint)uVar3 * 2] ==
              TypeInfo__System__Collections__Generic__ICollection<int>) {
            ppMVar4 = &(&(this->klass->vtable).GetHashCode)
                       [(int)(&(unaff_EDI->_0).gc_desc)[(uint)uVar3 * 2]].method;
            goto code_?;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar2);
      }
      ppMVar4 = (MethodInfo **)
                func_?(this,TypeInfo__System__Collections__Generic__ICollection<int>,2);
code_?:
      (*(code *)*ppMVar4)(this,uVar5,ppMVar4[1]);
      unaff_ESI = this;
      if ((List_1_UnityEngine_Vector4_ *)values == (List_1_UnityEngine_Vector4_ *)0x0)
      goto code_?;
      pLVar1 = ((List_1_UnityEngine_Vector4_ *)values)->klass;
      uVar3 = 0;
      uVar6._0_1_ = (pLVar1->_1).rank;
      uVar6._1_1_ = (pLVar1->_1).minimumAlignment;
      if (uVar6 != 0) {
        do {
          if (pLVar1->interfaceOffsets[uVar3].interfaceType ==
              (Il2CppClass *)TypeInfo__System__Collections__ICollection) {
            ppMVar4 = &(&(((List_1_UnityEngine_Vector4_ *)values)->klass->vtable).Equals)
                       [pLVar1->interfaceOffsets[uVar3].offset].method;
            goto code_?;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar6);
      }
      ppMVar4 = (MethodInfo **)func_?(values,TypeInfo__System__Collections__ICollection,0);
code_?:
      iVar7 = (*(code *)*ppMVar4)(values,ppMVar4[1]);
      if (iVar7 == 0) {
        return (IList_1_System_Int32_ *)this;
      }
      pLVar1 = ((List_1_UnityEngine_Vector4_ *)values)->klass;
      uVar3 = 0;
      uVar8._0_1_ = (pLVar1->_1).rank;
      uVar8._1_1_ = (pLVar1->_1).minimumAlignment;
      if (uVar8 != 0) {
        do {
          if (pLVar1->interfaceOffsets[uVar3].interfaceType ==
              (Il2CppClass *)TypeInfo__System__Collections__IList) {
            ppMVar4 = &(&(((List_1_UnityEngine_Vector4_ *)values)->klass->vtable).GetHashCode)
                       [pLVar1->interfaceOffsets[uVar3].offset].method;
            goto code_?;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar8);
      }
      ppMVar4 = (MethodInfo **)func_?(values,TypeInfo__System__Collections__IList,2);
code_?:
      unaff_ESI = (List_1_UnityEngine_Vector4_ *)(*(code *)*ppMVar4)(values,0,ppMVar4[1]);
      iVar7 = func_?(unaff_ESI,TypeInfo__System__Collections__IList);
      unaff_EDI = TypeInfo__System__Collections__IList;
      if (iVar7 == 0) {
        return (IList_1_System_Int32_ *)this;
      }
      if (unaff_ESI == (List_1_UnityEngine_Vector4_ *)0x0) goto code_?;
      values = (IList *)func_?(unaff_ESI,TypeInfo__System__Collections__IList);
    } while ((List_1_UnityEngine_Vector4_ *)values != (List_1_UnityEngine_Vector4_ *)0x0);
  }
  func_?(unaff_ESI,unaff_EDI);
  pcVar9 = (code *)swi(3);
  pIVar10 = (IList_1_System_Int32_ *)(*pcVar9)();
  return pIVar10;
}


/* Object GetSingleItem[Object](IList`1[System.Object], Boolean) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
         CollectionUtils_GetSingleItem_1
                   (IList_1_System_Object_ *list,bool returnDefaultIfEmpty,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (list == (IList_1_System_Object_ *)0x0) {
    func_?(0);
    method = unaff_EBX;
  }
  else {
    pIVar1 = *method->parameters;
    if ((pIVar1[0x17].type & 1) == 0) {
      func_?(pIVar1);
    }
    iVar2 = func_?(0,pIVar1,list);
    if (iVar2 == 1) {
      pIVar3 = (Il2CppClass *)method->parameters[1];
      if (((uint)pIVar3->vtable[0].methodPtr & 0x10000) == 0) {
        func_?(pIVar3);
      }
      pIVar4 = list->klass;
      uVar5 = 0;
      uVar6._0_1_ = (pIVar4->_1).rank;
      uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
      if (uVar6 != 0) {
        do {
          if (pIVar4->interfaceOffsets[uVar5].interfaceType == pIVar3) {
            iVar2 = pIVar4->interfaceOffsets[uVar5].offset;
            pOVar7 = (Object *)
                      (*(code *)(&(list->klass->vtable).get_Item)[iVar2].method)
                                (list,0,(&(list->klass->vtable).set_Item)[iVar2].methodPtr);
            return pOVar7;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
      puVar8 = (undefined4 *)func_?(list,pIVar3,3);
      pOVar7 = (Object *)(*(code *)*puVar8)(list,0,puVar8[1]);
      return pOVar7;
    }
    if (returnDefaultIfEmpty != 0) {
      pIVar1 = *method->parameters;
      if ((pIVar1[0x17].type & 1) == 0) {
        func_?(pIVar1);
      }
      iVar2 = func_?(0,pIVar1,list);
      if (iVar2 == 0) {
        return (Object *)0x0;
      }
    }
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,2);
  handle.value = method->parameters[2];
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  pTVar9 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pTVar9);
  func_?(0,pTVar9);
  func_?(list,0);
  uVar10 = func_?(*method->parameters,list);
  uStack_11 = func_?(0,uVar10);
  uVar10 = func_?(TypeInfo__System__Int32,&uStack_11);
  func_?(args,0);
  func_?(args,uVar10);
  func_?(1,uVar10);
  message = StringUtils::StringUtils_FormatWith
                      (StringLiteral_Expected_single__0__in_list_but_,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  this = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this,message,(MethodInfo *)0x0);
  uStack_11 = 0;
  func_?(this);
  pcVar12 = (code *)swi(3);
  pOVar7 = (Object *)(*pcVar12)();
  return pOVar7;
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
  puStack_4 = &stack0xffffffc0;
  puVar5 = &stack0xffffffc0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  func_?();
  if (keySelector == (Func_2_Object_Object_ *)0x0) {
    puStack_4 = &stack0xffffffc0;
    this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,StringLiteral_keySelector,(MethodInfo *)0x0);
    func_?();
    method = unaff_EDI;
  }
  else {
    pIVar7 = *method->parameters;
    puStack_4 = &stack0xffffffc0;
    if ((pIVar7[0x17].type & 1) == 0) {
      puStack_4 = &stack0xffffffc0;
      func_?(pIVar7);
    }
    pDVar8 = (Dictionary_2_System_Object_List_1_System_Object_ *)func_?(pIVar7);
    (*(code *)method->parameters[1]->data)(pDVar8,method->parameters[1]);
    if (source != (ICollection_1_System_Object_ *)0x0) {
      pIVar7 = method->parameters[2];
      if ((pIVar7[0x17].type & 1) == 0) {
        func_?(pIVar7);
      }
      piVar9 = (int *)func_?(0,pIVar7,source);
      uStack_1 = 0;
      while (piVar9 != (int *)0x0) {
        cVar10 = func_?(1,TypeInfo__System__Collections__IEnumerator,piVar9);
        if (cVar10 == '\0') {
          uStack_1 = 0xffffffff;
          if (piVar9 != (int *)0x0) {
            func_?(0,TypeInfo__System__IDisposable,piVar9);
          }
          *unaff_FS_OFFSET = uStack_3;
          return pDVar8;
        }
        pIVar7 = method->parameters[3];
        if ((pIVar7[0x17].type & 1) == 0) {
          func_?(pIVar7);
        }
        uVar11 = 0;
        uVar12 = *(ushort *)(*piVar9 + 0xb6);
        if (uVar12 != 0) {
          iVar13 = *(int *)(*piVar9 + 0x58);
          do {
            if (*(Il2CppType **)(iVar13 + (uint)uVar11 * 8) == pIVar7) {
              puVar14 = (undefined4 *)(*piVar9 + (*(int *)(iVar13 + 4 + (uint)uVar11 * 8) + 0x18) * 8)
              ;
              goto code_?;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar12);
        }
        puVar14 = (undefined4 *)func_?(piVar9,pIVar7,0);
code_?:
        uVar15 = (*(code *)*puVar14)(piVar9,puVar14[1]);
        uVar16 = (*(code *)method->parameters[4]->data)(keySelector,uVar15,method->parameters[4]);
        if (pDVar8 == (Dictionary_2_System_Object_List_1_System_Object_ *)0x0) break;
        cVar10 = (*(code *)method->parameters[5]->data)
                          (pDVar8,uVar16,&iStack_6,method->parameters[5]);
        if (cVar10 == '\0') {
          uVar17 = func_?(method->parameters[6]);
          iVar13 = func_?(uVar17);
          (*(code *)method->parameters[7]->data)(iVar13,method->parameters[7]);
          iStack_6 = iVar13;
          (*(code *)method->parameters[8]->data)(pDVar8,uVar16,iVar13,method->parameters[8]);
        }
        if (iStack_6 == 0) break;
        (*(code *)method->parameters[9]->data)(iStack_6,uVar15,method->parameters[9]);
      }
    }
  }
  func_?(0);
  func_?(method,0,0);
  pcVar18 = (code *)swi(3);
  pDVar8 = (Dictionary_2_System_Object_List_1_System_Object_ *)(*pcVar18)();
  return pDVar8;
}


/* Int32 IndexOf[JToken](IEnumerable`1[Newtonsoft.Json.Linq.JToken], JToken,
   IEqualityComparer`1[Newtonsoft.Json.Linq.JToken]) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::CollectionUtils_IndexOf_3
                  (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *list,JToken *value,
                  IEqualityComparer_1_Newtonsoft_Json_Linq_JToken_ *comparer,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_4 = 0;
  func_?();
  iVar5 = 0;
  if (list != (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
    pIVar6 = *method->parameters;
    if ((pIVar6[0x17].type & 1) == 0) {
      func_?(pIVar6);
    }
    iVar7 = func_?(0,pIVar6,list);
    uStack_1 = 0;
    while (iVar7 != 0) {
      cVar8 = func_?(1,TypeInfo__System__Collections__IEnumerator,iVar7);
      if (cVar8 == '\0') {
        iVar9 = 0x4a;
code_?:
        uStack_1 = 0xffffffff;
        if (iVar7 != 0) {
          func_?(0,TypeInfo__System__IDisposable,iVar7);
        }
        if (iVar9 == 0x4c) {
          *unaff_FS_OFFSET = uStack_3;
          return iStack_4;
        }
        *unaff_FS_OFFSET = uStack_3;
        return -1;
      }
      pIVar6 = method->parameters[1];
      if ((pIVar6[0x17].type & 1) == 0) {
        func_?(pIVar6);
      }
      uVar10 = func_?(0,pIVar6,iVar7);
      if (comparer == (IEqualityComparer_1_Newtonsoft_Json_Linq_JToken_ *)0x0) break;
      pIVar6 = method->parameters[2];
      if ((pIVar6[0x17].type & 1) == 0) {
        func_?(pIVar6);
      }
      cVar8 = func_?(0,pIVar6,comparer,uVar10,value);
      if (cVar8 != '\0') {
        iVar9 = 0x4c;
        iStack_4 = iVar5;
        goto code_?;
      }
      iVar5 = iVar5 + 1;
    }
  }
  uVar10 = func_?(0);
  func_?(uVar10,0,0);
  pcVar11 = (code *)swi(3);
  iVar12 = (*pcVar11)();
  return iVar12;
}


/* Int32 IndexOf[PropertyInfo](IEnumerable`1[System.Reflection.PropertyInfo],
   Func`2[System.Reflection.PropertyInfo,Boolean]) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::CollectionUtils_IndexOf_4
                  (IEnumerable_1_System_Reflection_PropertyInfo_ *collection,
                  Func_2_System_Reflection_PropertyInfo_Boolean_ *predicate,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_4 = 0;
  func_?();
  iVar5 = 0;
  if (collection != (IEnumerable_1_System_Reflection_PropertyInfo_ *)0x0) {
    pIVar6 = *method->parameters;
    if ((pIVar6[0x17].type & 1) == 0) {
      func_?(pIVar6);
    }
    iVar7 = func_?(0,pIVar6,collection);
    uStack_1 = 0;
    while (iVar7 != 0) {
      cVar8 = func_?(1,TypeInfo__System__Collections__IEnumerator,iVar7);
      if (cVar8 == '\0') {
        iVar9 = 0x49;
code_?:
        uStack_1 = 0xffffffff;
        if (iVar7 != 0) {
          func_?(0,TypeInfo__System__IDisposable,iVar7);
        }
        if (iVar9 == 0x4b) {
          *unaff_FS_OFFSET = uStack_3;
          return iStack_4;
        }
        *unaff_FS_OFFSET = uStack_3;
        return -1;
      }
      pIVar6 = method->parameters[1];
      if ((pIVar6[0x17].type & 1) == 0) {
        func_?(pIVar6);
      }
      uVar10 = func_?(0,pIVar6,iVar7);
      if (predicate == (Func_2_System_Reflection_PropertyInfo_Boolean_ *)0x0) break;
      cVar8 = (*(code *)method->parameters[2]->data)(predicate,uVar10,method->parameters[2]);
      if (cVar8 != '\0') {
        iVar9 = 0x4b;
        iStack_4 = iVar5;
        goto code_?;
      }
      iVar5 = iVar5 + 1;
    }
  }
  uVar10 = func_?(0);
  func_?(uVar10,0,0);
  pcVar11 = (code *)swi(3);
  iVar12 = (*pcVar11)();
  return iVar12;
}


/* Boolean IsCollectionType(Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
     CollectionUtils_IsCollectionType(Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_type;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  type_00 = type;
  if (type != (Type *)0x0) {
    MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_DeSelect
              ((MVSimpleOneSeatVehicle *)type,(MethodInfo *)0x0);
    pIVar1 = TypeRef__System__Collections__ICollection;
    if (extraout_AL == '\0') {
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Type);
      }
      pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
      if (pTVar2 == (Type *)0x0) goto code_?;
      cVar3 = (*(code *)(pTVar2->klass->vtable).IsAssignableFrom.method)
                        (pTVar2,type_00,(pTVar2->klass->vtable).IsInstanceOfType.methodPtr);
      pIVar1 = TypeRef__System__Collections__Generic__ICollection;
      if (cVar3 == '\0') {
        if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Type->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Type);
        }
        type = (Type *)0x0;
        pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
        bVar4 = ReflectionUtils::ReflectionUtils_ImplementsGenericDefinition_1
                          (type_00,pTVar2,&type,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          return 0;
        }
      }
    }
    return 1;
  }
  this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,paramName,(MethodInfo *)0x0);
  func_?(this,0,
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                 );
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean IsDictionaryType(Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
     CollectionUtils_IsDictionaryType(Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_type;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  type_00 = type;
  pIVar1 = TypeRef__System__Collections__IDictionary;
  if (type == (Type *)0x0) {
    this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,paramName,(MethodInfo *)0x0);
    func_?(this,0,
                    MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                   );
  }
  else {
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Type *)0x0) {
      cVar3 = (*(code *)(pTVar2->klass->vtable).IsAssignableFrom.method)
                        (pTVar2,type_00,(pTVar2->klass->vtable).IsInstanceOfType.methodPtr);
      pIVar1 = TypeRef__System__Collections__Generic__IDictionary;
      if (cVar3 == '\0') {
        if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Type->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Type);
        }
        type = (Type *)0x0;
        pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
        bVar4 = ReflectionUtils::ReflectionUtils_ImplementsGenericDefinition_1
                          (type_00,pTVar2,&type,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          return 0;
        }
      }
      return 1;
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean IsListType(Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::CollectionUtils_IsListType
               (Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_type;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  type_00 = type;
  if (type != (Type *)0x0) {
    MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_DeSelect
              ((MVSimpleOneSeatVehicle *)type,(MethodInfo *)0x0);
    pIVar1 = TypeRef__System__Collections__IList;
    if (extraout_AL == '\0') {
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Type);
      }
      pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
      if (pTVar2 == (Type *)0x0) goto code_?;
      cVar3 = (*(code *)(pTVar2->klass->vtable).IsAssignableFrom.method)
                        (pTVar2,type_00,(pTVar2->klass->vtable).IsInstanceOfType.methodPtr);
      pIVar1 = TypeRef__System__Collections__Generic__IList;
      if (cVar3 == '\0') {
        if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Type->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Type);
        }
        type = (Type *)0x0;
        pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
        bVar4 = ReflectionUtils::ReflectionUtils_ImplementsGenericDefinition_1
                          (type_00,pTVar2,&type,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          return 0;
        }
      }
    }
    return 1;
  }
  this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,paramName,(MethodInfo *)0x0);
  func_?(this,0,
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                 );
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean IsNullOrEmpty(ICollection) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
     CollectionUtils_IsNullOrEmpty(ICollection *collection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (collection == (ICollection *)0x0) {
    return 1;
  }
  iVar1 = func_?(0,TypeInfo__System__Collections__ICollection,collection);
  return iVar1 == 0;
}


/* Boolean IsNullOrEmptyOrDefault[Object](IList`1[System.Object]) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
     CollectionUtils_IsNullOrEmptyOrDefault(IList_1_System_Object_ *list,MethodInfo *method)

{
  cVar1 = (*(code *)(*method->parameters)->data)(list,*method->parameters);
  if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar2 = (*(code *)method->parameters[1]->data)();
    return bVar2;
  }
  return 1;
}


/* Boolean IsNullOrEmpty[ParameterInfo](ICollection`1[System.Reflection.ParameterInfo]) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
     CollectionUtils_IsNullOrEmpty_5
               (ICollection_1_System_Reflection_ParameterInfo_ *collection,MethodInfo *method)

{
  if (collection == (ICollection_1_System_Reflection_ParameterInfo_ *)0x0) {
    return 1;
  }
  pIVar1 = *method->parameters;
  if ((pIVar1[0x17].type & 1) == 0) {
    func_?(pIVar1);
  }
  iVar2 = func_?(0,pIVar1,collection);
  return iVar2 == 0;
}


/* Object JaggedArrayGetValue(IList, Int32[]) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
         CollectionUtils_JaggedArrayGetValue(IList *values,Int32__Array *indices,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  if (indices == (Int32__Array *)0x0) {
code_?:
    func_?(0);
  }
  else {
    piVar2 = indices->vector;
    while( true ) {
      uVar3 = indices->max_length;
      if ((int)uVar3 <= (int)uVar1) {
        return (Object *)values;
      }
      if (uVar3 <= uVar1) break;
      if (values == (IList *)0x0) goto code_?;
      if (uVar1 == uVar3 - 1) {
        pOVar4 = (Object *)func_?(2,TypeInfo__System__Collections__IList,values,*piVar2);
        return pOVar4;
      }
      uVar5 = func_?(2,TypeInfo__System__Collections__IList,values,*piVar2);
      values = (IList *)func_?(uVar5,TypeInfo__System__Collections__IList);
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    }
  }
  uVar5 = func_?(0,0);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  pOVar4 = (Object *)(*pcVar6)();
  return pOVar4;
}


/* Boolean ListEquals[Object](IList`1[System.Object], IList`1[System.Object]) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::CollectionUtils_ListEquals
               (IList_1_System_Object_ *a,IList_1_System_Object_ *b,MethodInfo *method)

{
  if (a == (IList_1_System_Object_ *)0x0) {
    return b == (IList_1_System_Object_ *)0x0;
  }
  if (b != (IList_1_System_Object_ *)0x0) {
    pIVar1 = *method->parameters;
    if ((pIVar1[0x17].type & 1) == 0) {
      func_?(pIVar1);
    }
    iVar2 = func_?(0,pIVar1,a);
    pIVar1 = *method->parameters;
    if ((pIVar1[0x17].type & 1) == 0) {
      func_?(pIVar1);
    }
    iVar3 = func_?(0,pIVar1,b);
    if (iVar2 == iVar3) {
      ppIVar4 = method->parameters;
      pIVar1 = ppIVar4[2];
      if ((pIVar1[0x17].type & 1) == 0) {
        func_?(pIVar1);
        ppIVar4 = method->parameters;
      }
      if ((pIVar1[0x17].num_mods & 2) != 0) {
        pIVar1 = ppIVar4[2];
        if ((pIVar1[0x17].type & 1) == 0) {
          func_?(pIVar1);
          ppIVar4 = method->parameters;
        }
        if (pIVar1[0xe].data.dummy == (void *)0x0) {
          pIVar1 = ppIVar4[2];
          if ((pIVar1[0x17].type & 1) == 0) {
            func_?(pIVar1);
          }
          func_?(pIVar1);
        }
      }
      piVar5 = (int *)(*(code *)method->parameters[1]->data)(method->parameters[1]);
      iVar2 = 0;
      while( true ) {
        pIVar1 = *method->parameters;
        if ((pIVar1[0x17].type & 1) == 0) {
          func_?(pIVar1);
        }
        iVar3 = func_?(0,pIVar1,a);
        if (iVar3 <= iVar2) {
          return 1;
        }
        pIVar1 = method->parameters[3];
        if ((pIVar1[0x17].type & 1) == 0) {
          func_?(pIVar1);
        }
        uVar6 = func_?(3,pIVar1,a,iVar2);
        pIVar1 = method->parameters[3];
        if ((pIVar1[0x17].type & 1) == 0) {
          func_?(pIVar1);
        }
        uVar7 = func_?(3,pIVar1,b,iVar2);
        if (piVar5 == (int *)0x0) {
          func_?(0);
          pcVar8 = (code *)swi(3);
          bVar9 = (*pcVar8)();
          return bVar9;
        }
        cVar10 = (**(code **)(*piVar5 + 0x108))(piVar5,uVar6,uVar7,*(undefined4 *)(*piVar5 + 0x10c))
        ;
        if (cVar10 == '\0') break;
        iVar2 = iVar2 + 1;
      }
    }
    return 0;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)list,StringLiteral_list,(MethodInfo *)0x0);
  if (list != (IList_1_System_Object_ *)0x0) {
    if (((*method->parameters)[0x17].type & 1) == 0) {
      func_?();
    }
    func_?();
    if ((method->parameters[1][0x17].type & 1) == 0) {
      func_?();
    }
    pIVar4 = (IList_1_System_Object_ *)func_?();
    (*(code *)method->parameters[2]->data)(pIVar4);
    if ((method->parameters[3][0x17].type & 1) == 0) {
      func_?();
    }
    piVar5 = (int *)func_?();
    uStack_1 = 0;
code_?:
    if (piVar5 != (int *)0x0) {
      cVar6 = func_?();
      if (cVar6 == '\0') {
        uStack_1 = 0xffffffff;
        if (piVar5 != (int *)0x0) {
          func_?();
        }
        *unaff_FS_OFFSET = uStack_3;
        return pIVar4;
      }
      pIVar7 = method->parameters[4];
      if ((pIVar7[0x17].type & 1) == 0) {
        func_?();
      }
      uVar8 = 0;
      uVar9 = *(ushort *)(*piVar5 + 0xb6);
      if (uVar9 != 0) {
        iVar10 = *(int *)(*piVar5 + 0x58);
        do {
          if (*(Il2CppType **)(iVar10 + (uint)uVar8 * 8) == pIVar7) {
            puVar11 = (undefined4 *)(*piVar5 + (*(int *)(iVar10 + 4 + (uint)uVar8 * 8) + 0x18) * 8);
            goto code_?;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar9);
      }
      puVar11 = (undefined4 *)func_?();
code_?:
      (*(code *)*puVar11)();
      if (minus != (IList_1_System_Object_ *)0x0) goto code_?;
      goto code_?;
    }
  }
code_?:
  func_?();
  func_?();
  pcVar12 = (code *)swi(3);
  pIVar4 = (IList_1_System_Object_ *)(*pcVar12)();
  return pIVar4;
code_?:
  func_?();
  cVar6 = func_?(4);
  if (cVar6 == '\0') {
code_?:
    if (pIVar4 == (IList_1_System_Object_ *)0x0) goto code_?;
    (*(code *)method->parameters[5]->data)();
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
    pIVar1 = *method->parameters;
    if ((pIVar1[0x17].type & 1) == 0) {
      func_?(pIVar1);
    }
    iVar2 = func_?(3,pIVar1,global,current);
    iStack_3 = 0;
    if (iVar2 != 0) {
      while( true ) {
        pIVar1 = method->parameters[0xb];
        if ((pIVar1[0x17].type & 1) == 0) {
          func_?(pIVar1);
        }
        iVar4 = func_?(0,pIVar1,iVar2);
        if (iVar4 <= iStack_3) {
          return;
        }
        pIVar1 = method->parameters[1];
        if ((pIVar1[0x17].type & 1) == 0) {
          func_?(pIVar1);
        }
        uVar5 = func_?(3,pIVar1,iVar2,iStack_3);
        if (currentSet == (Dictionary_2_System_Int32_System_Object_ *)0x0) break;
        (*(code *)method->parameters[2]->data)(currentSet,current,uVar5,method->parameters[2]);
        pIVar1 = method->parameters[3];
        if ((pIVar1[0x17].type & 1) == 0) {
          func_?(pIVar1);
        }
        iVar4 = func_?(0,pIVar1,global);
        if (current == iVar4 + -1) {
          uVar5 = func_?(method->parameters[4]);
          iVar4 = func_?(uVar5);
          (*(code *)method->parameters[5]->data)(iVar4,method->parameters[5]);
          for (iVar6 = 0;
              iVar7 = (*(code *)method->parameters[8]->data)(currentSet,method->parameters[8]),
              iVar6 < iVar7; iVar6 = iVar6 + 1) {
            uVar5 = (*(code *)method->parameters[6]->data)(currentSet,iVar6,method->parameters[6]);
            if (iVar4 == 0) goto code_?;
            (*(code *)method->parameters[7]->data)(iVar4,uVar5,method->parameters[7]);
          }
          if (flattenedResult == (List_1_List_1_System_Object_ *)0x0) break;
          (*(code *)method->parameters[9]->data)(flattenedResult,iVar4,method->parameters[9]);
          iStack_3 = iStack_3 + 1;
        }
        else {
          pIVar1 = method->parameters[10];
          (*(code *)pIVar1->data)(global,current + 1,currentSet,flattenedResult,pIVar1);
          iStack_3 = iStack_3 + 1;
        }
      }
    }
  }
code_?:
  func_?(0);
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
           (*(code *)(*method->parameters)->data)
                     (list,start.value,start._4_4_,end.value,end._4_4_,0,0,*method->parameters);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (list == (IList_1_System_Object_ *)0x0) {
    this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,StringLiteral_list,(MethodInfo *)0x0);
    func_?(this,0,
                    System__Collections__Generic__IList<System::Object>_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__Slice<System::Object>_System__Collections__Generic__IList<System::Object>__System__Nullable<int>__System__Nullable<int>__System__Nullable<int>_
                   );
  }
  else {
    iVar1 = func_?(&step,MethodInfo__System__Nullable<int>__GetValueOrDefault__);
    if ((iVar1 != 0) ||
       (cVar2 = func_?(&step,MethodInfo__System__Nullable<int>__get_HasValue__),
       cVar2 == '\0')) {
      pIVar3 = *method->parameters;
      if ((pIVar3[0x17].type & 1) == 0) {
        func_?(pIVar3);
      }
      pIVar4 = (IList_1_System_Object_ *)func_?(pIVar3);
      (*(code *)method->parameters[1]->data)(pIVar4,method->parameters[1]);
      pIVar3 = method->parameters[2];
      if ((pIVar3[0x17].type & 1) == 0) {
        func_?(pIVar3);
      }
      iVar1 = func_?(0,pIVar3,list);
      if (iVar1 == 0) {
        return pIVar4;
      }
      cVar2 = func_?(&step,MethodInfo__System__Nullable<int>__get_HasValue__);
      if (cVar2 != '\0') {
        func_?(&step,MethodInfo__System__Nullable<int>__get_Value__);
      }
      cVar2 = func_?(&start,MethodInfo__System__Nullable<int>__get_HasValue__);
      if (cVar2 == '\0') {
        iVar1 = 0;
      }
      else {
        iVar1 = func_?(&start,MethodInfo__System__Nullable<int>__get_Value__);
      }
      cVar2 = func_?(&end,MethodInfo__System__Nullable<int>__get_HasValue__);
      if (cVar2 == '\0') {
        pIVar3 = method->parameters[2];
        if ((pIVar3[0x17].type & 1) == 0) {
          func_?(pIVar3);
        }
        a = func_?(0,pIVar3,list);
      }
      else {
        a = func_?(&end,MethodInfo__System__Nullable<int>__get_Value__);
      }
      if (iVar1 < 0) {
        pIVar3 = method->parameters[2];
        if ((pIVar3[0x17].type & 1) == 0) {
          func_?(pIVar3);
        }
        iVar5 = func_?(0,pIVar3,list);
        iVar1 = iVar1 + iVar5;
      }
      if (a < 0) {
        pIVar3 = method->parameters[2];
        if ((pIVar3[0x17].type & 1) == 0) {
          func_?(pIVar3);
        }
        iVar5 = func_?(0,pIVar3,list);
        a = a + iVar5;
      }
      pIVar6 = (Il2CppClass *)
               UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max_2
                         (iVar1,0,(MethodInfo *)0x0);
      pIVar3 = method->parameters[2];
      pIVar7 = pIVar6;
      if ((pIVar3[0x17].type & 1) == 0) {
        func_?(pIVar3,pIVar3);
      }
      iVar1 = func_?(0,pIVar3,list);
      iVar8 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min_1
                         (a,iVar1 + -1,(MethodInfo *)0x0);
      if (iVar8 <= (int)pIVar6) {
        return pIVar4;
      }
      do {
        pIVar6 = (Il2CppClass *)method->parameters[3];
        if (((uint)pIVar6->vtable[0].methodPtr & 0x10000) == 0) {
          pIVar7 = (Il2CppClass *)&UNK_?;
          func_?(pIVar6);
        }
        pIVar9 = list->klass;
        uVar10 = 0;
        uVar11._0_1_ = (pIVar9->_1).rank;
        uVar11._1_1_ = (pIVar9->_1).minimumAlignment;
        if (uVar11 != 0) {
          do {
            if (pIVar9->interfaceOffsets[uVar10].interfaceType == pIVar6) {
              ppMVar12 = &(&(list->klass->vtable).get_Item)[pIVar9->interfaceOffsets[uVar10].offset].
                          method;
              goto code_?;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar11);
        }
        ppMVar12 = (MethodInfo **)func_?(list,pIVar6,3);
        pIVar7 = pIVar6;
code_?:
        uVar13 = (*(code *)*ppMVar12)(list,pIVar7,ppMVar12[1]);
        if (pIVar4 == (IList_1_System_Object_ *)0x0) goto code_?;
        pIVar3 = method->parameters[4];
        pIVar14 = pIVar4;
        (*(code *)pIVar3->data)(pIVar4,uVar13);
        pIVar7 = (Il2CppClass *)((int)&pIVar3->data + (int)&pIVar7->image);
        if ((int)pIVar14 <= (int)pIVar7) {
          return pIVar4;
        }
      } while( true );
    }
  }
  this_00 = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_3
            (this_00,StringLiteral_Step_cannot_be_zero_,StringLiteral_step,(MethodInfo *)0x0);
  func_?(this_00,0,
                  System__Collections__Generic__IList<System::Object>_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__Slice<System::Object>_System__Collections__Generic__IList<System::Object>__System__Nullable<int>__System__Nullable<int>__System__Nullable<int>_
                 );
code_?:
  func_?(0);
  pcVar15 = (code *)swi(3);
  pIVar4 = (IList_1_System_Object_ *)(*pcVar15)();
  return pIVar4;
}


/* Array ToArray(Array, Type) */

Array * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::CollectionUtils_ToArray
                  (Array *initial,Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (type == (Type *)0x0) {
    this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,StringLiteral_type,(MethodInfo *)0x0);
    func_?(this,0,
                    MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__ToArray_System__Array__System__Type_
                   );
  }
  else if (initial != (Array *)0x0) {
    iVar1 = mscorlib.dll::System::Array::Array_get_Length(initial,(MethodInfo *)0x0);
    pAVar2 = mscorlib.dll::System::Array::Array_CreateInstance(type,iVar1,(MethodInfo *)0x0);
    iVar1 = mscorlib.dll::System::Array::Array_get_Length(initial,(MethodInfo *)0x0);
    mscorlib.dll::System::Array::Array_Copy_1(initial,0,pAVar2,0,iVar1,(MethodInfo *)0x0);
    return pAVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pAVar2 = (Array *)(*pcVar3)();
  return pAVar2;
}


/* Array ToMultidimensionalArray(IList, Type, Int32) */

Array * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
        CollectionUtils_ToMultidimensionalArray
                  (IList *values,Type *type,int32_t rank,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  source = CollectionUtils_GetDimensions(values,(MethodInfo *)0x0);
  if (source == (IList_1_System_Int32_ *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    pAVar2 = (Array *)(*pcVar1)();
    return pAVar2;
  }
code_?:
  do {
    pIVar3 = source->klass;
    uVar4 = 0;
    uVar5._0_1_ = (pIVar3->_1).rank;
    uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
    if (uVar5 != 0) {
      do {
        if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
            (Il2CppClass *)TypeInfo__System__Collections__Generic__ICollection<int>) {
          ppMVar6 = &(&(source->klass->vtable).IndexOf)[pIVar3->interfaceOffsets[uVar4].offset].
                     method;
          goto code_?;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
    ppMVar6 = (MethodInfo **)
              func_?(source,TypeInfo__System__Collections__Generic__ICollection<int>,0);
code_?:
    iVar7 = (*(code *)*ppMVar6)(source,ppMVar6[1]);
    if (rank <= iVar7) {
      lengths = System.Core.dll::System::Linq::Enumerable::Enumerable_ToArray_9
                          ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)source,
                           System__Int32__MethodInfo__System__Linq__Enumerable__ToArray<int>_System__Collections__Generic__IEnumerable<int>_____
                          );
      pAVar2 = mscorlib.dll::System::Array::Array_CreateInstance_3
                         (type,(Int32__Array *)lengths,(MethodInfo *)0x0);
      indices = (Int32__Array *)func_?(TypeInfo__System__Int32,0);
      CollectionUtils_CopyFromJaggedToMultidimensionalArray(values,pAVar2,indices,(MethodInfo *)0x0)
      ;
      return pAVar2;
    }
    pIVar3 = source->klass;
    uVar5 = 0;
    uVar4._0_1_ = (pIVar3->_1).rank;
    uVar4._1_1_ = (pIVar3->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar3->interfaceOffsets[uVar5].interfaceType ==
            (Il2CppClass *)TypeInfo__System__Collections__Generic__ICollection<int>) {
          iVar7 = pIVar3->interfaceOffsets[uVar5].offset;
          (*(code *)(&(source->klass->vtable).RemoveAt)[iVar7].method)
                    (source,0,(&(source->klass->vtable).get_Item)[iVar7].methodPtr);
          goto code_?;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar4);
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
  bVar1 = (*(code *)(*method->parameters)->data)(list,0,value,*method->parameters);
  return bVar1;
}


/* Boolean TryGetSingleItem[Object](IList`1[System.Object], Boolean, Object ByRef) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
     CollectionUtils_TryGetSingleItem_1
               (IList_1_System_Object_ *list,bool returnDefaultIfEmpty,Object **value,
               MethodInfo *method)

{
  pIVar1 = *method->parameters;
  if ((pIVar1[0x17].type & 1) == 0) {
    func_?(pIVar1);
  }
  iVar2 = func_?(pIVar1);
  (*(code *)method->parameters[1]->data)(iVar2,method->parameters[1]);
  if (iVar2 != 0) {
    *(IList_1_System_Object_ **)(iVar2 + 8) = list;
    *(bool *)(iVar2 + 0xc) = returnDefaultIfEmpty;
    pIVar1 = method->parameters[3];
    if ((pIVar1[0x17].type & 1) == 0) {
      func_?(pIVar1);
    }
    uVar3 = func_?(pIVar1);
    pIVar1 = method->parameters[4];
    (*(code *)pIVar1->data)(uVar3,iVar2,method->parameters[2],pIVar1);
    bVar4 = (*(code *)method->parameters[5]->data)(uVar3,value,method->parameters[5]);
    return bVar4;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean <CastValid`1>m__0[Object](Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionUtils::
     CollectionUtils__CastValid_1_m__0(Object *o,MethodInfo *method)

{
  pIVar1 = *method->parameters;
  if ((pIVar1[0x17].type & 1) == 0) {
    func_?(pIVar1);
  }
  iVar2 = func_?(o,pIVar1);
  return iVar2 != 0;
}



/* Void OnDestroy() */

void Assembly-CSharp.dll::CullingApiTest::CullingApiTest_OnDestroy
               (CullingApiTest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__CullingApiWrapper->static_fields->cullingGroup == (CullingGroup *)0x0) {
    return;
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  pCVar1 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
  if (pCVar1 != (CullingGroup *)0x0) {
    bVar2 = iRam_? != 0;
    (pCVar1->fields).m_OnStateChanged = (CullingGroup_StateChanged *)0x0;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(pCVar1->fields).m_OnStateChanged >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (ulonglong)(uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pCVar1 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
    if (pCVar1 != (CullingGroup *)0x0) {
      pvVar7 = (pCVar1->fields).m_Ptr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar1,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      (*pcRam_?)(pvVar7);
      (pCVar1->fields).m_Ptr = (void *)0x0;
      TypeInfo__CullingApiWrapper->static_fields->cullingGroup = (CullingGroup *)0x0;
      if (iRam_? == 0) {
        return;
      }
      uVar3 = (uint)((ulonglong)&TypeInfo__CullingApiWrapper->static_fields->cullingGroup >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::CullingApiTest::CullingApiTest_Start
               (CullingApiTest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).mainCamera = pCVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).mainCamera >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pCVar1 = (this->fields).mainCamera;
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  CullingApiWrapper::CullingApiWrapper_Init
            (0,pCVar1,TypeInfo__CullingApiWrapper->static_fields->baseDistance,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__Add_CullingApiTest__TestClass_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CullingApiTest__TestClass);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar7 = (this->fields).testClasses;
  item = (Object *)FUN_?(TypeInfo__CullingApiTest__TestClass);
  pMVar8 = 
  MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__Add_CullingApiTest__TestClass_
  ;
  if (pLVar7 == (List_1_CullingApiTest_TestClass_ *)0x0) {
code_?:
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  piVar10 = &(pLVar7->fields)._version;
  *piVar10 = *piVar10 + 1;
  pCVar11 = (pLVar7->fields)._items;
  if (pCVar11 == (CullingApiTest_TestClass__Array *)0x0) goto code_?;
  uVar3 = (pLVar7->fields)._size;
  if (uVar3 < (uint)pCVar11->max_length) {
    (pLVar7->fields)._size = uVar3 + 1;
    FUN_?(pCVar11,(longlong)(int)uVar3,item);
  }
  else {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object__AddWithResize
              ((List_1_System_Object_ *)pLVar7,item,pMVar8->klass->rgctx_data[0xe].method);
  }
  pLVar7 = (this->fields).testClasses;
  if (pLVar7 == (List_1_CullingApiTest_TestClass_ *)0x0) goto code_?;
  iVar12 = (pLVar7->fields)._size;
  if ((uint)(pLVar7->fields)._size <= iVar12 - 1U) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
              ((MethodInfo *)0x0);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pCVar11 = (pLVar7->fields)._items;
  if (pCVar11 == (CullingApiTest_TestClass__Array *)0x0) goto code_?;
  if ((uint)pCVar11->max_length <= iVar12 - 1U) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  value = pCVar11->vector[(longlong)iVar12 + -1];
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void_MethodInfo__System__Array__Resize<UnityEngine::BoundingSphere>_UnityEngine__BoundingSphere___int_
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__Add_int__ICullingSubscriber_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ICullingSubscriber);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CullingApiWrapper);
  }
  pBVar13 = TypeInfo__CullingApiWrapper->static_fields->spheres;
  if (pBVar13 == (BoundingSphere__Array *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CullingApiWrapper);
  }
  if ((int)pBVar13->max_length ==
      TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField) {
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__CullingApiWrapper);
    }
    pBVar13 = TypeInfo__CullingApiWrapper->static_fields->spheres;
    if (pBVar13 == (BoundingSphere__Array *)0x0) goto code_?;
    mscorlib.dll::System::Array::Array_Resize_105
              ((BindingRestrictions_TestBuilder_AndNode__Array **)
               &TypeInfo__CullingApiWrapper->static_fields->spheres,(int)pBVar13->max_length + 1000,
               void_MethodInfo__System__Array__Resize<UnityEngine::BoundingSphere>_UnityEngine__BoundingSphere___int_
              );
    obj = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
    if (obj == (CullingGroup *)0x0) goto code_?;
    pvVar14 = (obj->fields).m_Ptr;
    if (pvVar14 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pBVar13 = TypeInfo__CullingApiWrapper->static_fields->spheres;
    pcVar9 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
      uVar15 = func_?(&UNK_?);
      FUN_?(uVar15,0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pcRam_? = pcVar9;
    (*pcRam_?)(pvVar14,pBVar13);
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CullingApiWrapper);
  }
  this_00 = (Dictionary_2_System_Int32_System_Object_ *)
            TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CullingApiWrapper);
  }
  if (this_00 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryInsert
              (this_00,TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField,
               (Object *)value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)item >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__Add_int__ICullingSubscriber_
               ->klass->rgctx_data[0x22].method);
    CullingApiWrapper::CullingApiWrapper_AddBoundingSphere((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CullingApiWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__CullingApiWrapper);
    }
    if (value != (CullingApiTest_TestClass *)0x0) {
      pIVar16 = (Il2CppRuntimeInterfaceOffsetPair *)
                (ulonglong)
                (TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField - 1);
      uVar17 = 0;
      pCVar18 = value->klass;
      uVar19._0_1_ = (pCVar18->_1).rank;
      uVar19._1_1_ = (pCVar18->_1).minimumAlignment;
      pIVar20 = pIVar16;
      if (uVar19 != 0) {
        pIVar20 = pCVar18->interfaceOffsets;
        do {
          if (pIVar20[uVar17].interfaceType == (Il2CppClass *)TypeInfo__ICullingSubscriber) {
            pVVar21 = &(pCVar18->vtable).Equals + (pIVar20[uVar17].offset + 2);
            goto code_?;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar19);
      }
      pVVar21 = (VirtualInvokeData *)
                FUN_?(value,TypeInfo__ICullingSubscriber,2,pIVar20,unaff_RDI);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar21->methodPtr)(value,pIVar16,pVVar21->method,pVVar21->methodPtr);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Subscribe() */

void Assembly-CSharp.dll::CullingApiTest::CullingApiTest_Subscribe
               (CullingApiTest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__Add_CullingApiTest__TestClass_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CullingApiTest__TestClass);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).testClasses;
  item = (Object *)FUN_?(TypeInfo__CullingApiTest__TestClass);
  pMVar2 = 
  MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__Add_CullingApiTest__TestClass_
  ;
  if (pLVar1 == (List_1_CullingApiTest_TestClass_ *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  piVar4 = &(pLVar1->fields)._version;
  *piVar4 = *piVar4 + 1;
  pCVar5 = (pLVar1->fields)._items;
  if (pCVar5 == (CullingApiTest_TestClass__Array *)0x0) goto code_?;
  uVar6 = (pLVar1->fields)._size;
  if (uVar6 < (uint)pCVar5->max_length) {
    (pLVar1->fields)._size = uVar6 + 1;
    FUN_?(pCVar5,(longlong)(int)uVar6,item);
  }
  else {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object__AddWithResize
              ((List_1_System_Object_ *)pLVar1,item,pMVar2->klass->rgctx_data[0xe].method);
  }
  pLVar1 = (this->fields).testClasses;
  if (pLVar1 == (List_1_CullingApiTest_TestClass_ *)0x0) goto code_?;
  iVar7 = (pLVar1->fields)._size;
  if ((uint)(pLVar1->fields)._size <= iVar7 - 1U) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
              ((MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pCVar5 = (pLVar1->fields)._items;
  if (pCVar5 == (CullingApiTest_TestClass__Array *)0x0) goto code_?;
  if ((uint)pCVar5->max_length <= iVar7 - 1U) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  value = pCVar5->vector[(longlong)iVar7 + -1];
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void_MethodInfo__System__Array__Resize<UnityEngine::BoundingSphere>_UnityEngine__BoundingSphere___int_
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__Add_int__ICullingSubscriber_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ICullingSubscriber);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CullingApiWrapper);
  }
  pBVar8 = TypeInfo__CullingApiWrapper->static_fields->spheres;
  if (pBVar8 == (BoundingSphere__Array *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CullingApiWrapper);
  }
  if ((int)pBVar8->max_length ==
      TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField) {
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__CullingApiWrapper);
    }
    pBVar8 = TypeInfo__CullingApiWrapper->static_fields->spheres;
    if (pBVar8 == (BoundingSphere__Array *)0x0) goto code_?;
    mscorlib.dll::System::Array::Array_Resize_105
              ((BindingRestrictions_TestBuilder_AndNode__Array **)
               &TypeInfo__CullingApiWrapper->static_fields->spheres,(int)pBVar8->max_length + 1000,
               void_MethodInfo__System__Array__Resize<UnityEngine::BoundingSphere>_UnityEngine__BoundingSphere___int_
              );
    obj = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
    if (obj == (CullingGroup *)0x0) goto code_?;
    pvVar9 = (obj->fields).m_Ptr;
    if (pvVar9 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pBVar8 = TypeInfo__CullingApiWrapper->static_fields->spheres;
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar9,pBVar8);
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CullingApiWrapper);
  }
  this_00 = (Dictionary_2_System_Int32_System_Object_ *)
            TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CullingApiWrapper);
  }
  if (this_00 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryInsert
              (this_00,TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField,
               (Object *)value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)item >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__Add_int__ICullingSubscriber_
               ->klass->rgctx_data[0x22].method);
    CullingApiWrapper::CullingApiWrapper_AddBoundingSphere((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CullingApiWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__CullingApiWrapper);
    }
    if (value != (CullingApiTest_TestClass *)0x0) {
      iVar7 = TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField;
      uVar11 = 0;
      pCVar12 = value->klass;
      uVar13._0_1_ = (pCVar12->_1).rank;
      uVar13._1_1_ = (pCVar12->_1).minimumAlignment;
      if (uVar13 != 0) {
        do {
          if (pCVar12->interfaceOffsets[uVar11].interfaceType ==
              (Il2CppClass *)TypeInfo__ICullingSubscriber) {
            pVVar14 = &(pCVar12->vtable).Equals + (pCVar12->interfaceOffsets[uVar11].offset + 2);
            goto code_?;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar13);
      }
      pVVar14 = (VirtualInvokeData *)FUN_?(value);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar14->methodPtr)(value,(ulonglong)(iVar7 - 1),pVVar14->method,pVVar14->methodPtr);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UnSubscribe() */

void Assembly-CSharp.dll::CullingApiTest::CullingApiTest_UnSubscribe
               (CullingApiTest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__RemoveAt_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).testClasses;
  if (pLVar1 != (List_1_CullingApiTest_TestClass_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    index = (*pcRam_?)(0);
    pLVar1 = (this->fields).testClasses;
    if (pLVar1 != (List_1_CullingApiTest_TestClass_ *)0x0) {
      if ((uint)(pLVar1->fields)._size <= index) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pCVar4 = (pLVar1->fields)._items;
      if (pCVar4 != (CullingApiTest_TestClass__Array *)0x0) {
        if ((uint)pCVar4->max_length <= index) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        unSubscriber = pCVar4->vector[(int)index];
        if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
          FUN_?();
        }
        CullingApiWrapper::CullingApiWrapper_UnSubscribe
                  ((ICullingSubscriber *)unSubscriber,(MethodInfo *)0x0);
        pLVar1 = (this->fields).testClasses;
        if (pLVar1 != (List_1_CullingApiTest_TestClass_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__RemoveAt
                    ((List_1_System_Object_ *)pLVar1,index,
                     MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__RemoveAt_int_
                    );
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::CullingApiTest::CullingApiTest_Update
               (CullingApiTest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).addBoundingSphere != 0) {
    CullingApiTest_Subscribe(this,(MethodInfo *)0x0);
    (this->fields).addBoundingSphere = 0;
  }
  if ((this->fields).unSubscribe != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CullingApiWrapper);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__RemoveAt_int_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__get_Count__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar1 = (this->fields).testClasses;
    if (pLVar1 == (List_1_CullingApiTest_TestClass_ *)0x0) goto code_?;
    if ((pLVar1->fields)._size != 0) {
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      uVar4 = (*pcRam_?)(0);
      pLVar1 = (this->fields).testClasses;
      if (pLVar1 == (List_1_CullingApiTest_TestClass_ *)0x0) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((uint)(pLVar1->fields)._size <= uVar4) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pCVar5 = (pLVar1->fields)._items;
      if (pCVar5 == (CullingApiTest_TestClass__Array *)0x0) goto code_?;
      if ((uint)pCVar5->max_length <= uVar4) goto code_?;
      unSubscriber = pCVar5->vector[(int)uVar4];
      if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      CullingApiWrapper::CullingApiWrapper_UnSubscribe
                ((ICullingSubscriber *)unSubscriber,(MethodInfo *)0x0);
      pLVar1 = (this->fields).testClasses;
      if (pLVar1 == (List_1_CullingApiTest_TestClass_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAt
                ((List_1_System_Object_ *)pLVar1,uVar4,
                 MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__RemoveAt_int_
                );
    }
    (this->fields).unSubscribe = 0;
  }
  if ((this->fields).distancesChange != 0) {
    camera = (this->fields).mainCamera;
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    CullingApiWrapper::CullingApiWrapper_ChangeDistances(_UNK_?,camera,(MethodInfo *)0x0);
    (this->fields).distancesChange = 0;
  }
  uVar4 = 0;
  lVar6 = 0;
  while( true ) {
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CullingApiWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField <= (int)uVar4)
    {
      return;
    }
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    pBVar7 = TypeInfo__CullingApiWrapper->static_fields->spheres;
    if ((pBVar7 == (BoundingSphere__Array *)0x0) ||
       (obj = (this->fields).movingTransform, obj == (Transform *)0x0)) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar8 = (obj->fields)._._.m_CachedPtr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar8);
    if ((uint)pBVar7->max_length <= uVar4) break;
    *(undefined8 *)((longlong)&pBVar7->vector[0].position.x + lVar6) = 0;
    *(undefined4 *)((longlong)&pBVar7->vector[0].position.z + lVar6) = 0;
    pBVar7 = TypeInfo__CullingApiWrapper->static_fields->spheres;
    if (pBVar7 == (BoundingSphere__Array *)0x0) goto code_?;
    if ((uint)pBVar7->max_length <= uVar4) break;
    uVar4 = uVar4 + 1;
    *(undefined4 *)((longlong)&pBVar7->vector[0].radius + lVar6) = 0x40000000;
    lVar6 = lVar6 + 0x10;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* CullingApiTest() */

void Assembly-CSharp.dll::CullingApiTest::CullingApiTest__ctor
               (CullingApiTest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<CullingApiTest::TestClass>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_CullingApiTest_TestClass_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<CullingApiTest::TestClass>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).testClasses = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).testClasses >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}


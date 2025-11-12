
/* AABB CalculateBounds() */

AABB * Assembly-CSharp.dll::RTG::RTScene::RTScene_CalculateBounds
                 (AABB *__return_storage_ptr__,RTScene *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GameObjectEx);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  LStack_1._list = (List_1_System_Object_ *)0x0;
  LStack_1._index = 0;
  LStack_1._version = 0;
  LStack_1._current = (Object *)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  SVar2 = UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
           SceneManager_GetActiveScene((MethodInfo *)0x0);
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    FUN_?();
  }
  else {
    pcRam_? = pcVar3;
    capacity = (*pcRam_?)(SVar2.m_Handle);
    if (capacity < 10) {
      capacity = 10;
    }
    pLVar5 = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
               *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>
                              );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
    RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
    List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo___ctor_2
              (pLVar5,capacity,
               MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_int_);
    aSStackX_20[0] =
         UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
         SceneManager_GetActiveScene((MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::Scene::Scene_GetRootGameObjects
              (aSStackX_20,(List_1_UnityEngine_GameObject_ *)pLVar5,(MethodInfo *)0x0);
    uStack_6 = 0;
    uStack_7 = 0;
    uStack_8 = 0;
    fStack_9 = 0.0;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar11 = (pVVar10->zeroVector).x;
    uVar12 = (pVVar10->zeroVector).y;
    fStack_9 = (pVVar10->zeroVector).z;
    uStack_6 = 5;
    (__return_storage_ptr__->_size).x = 0.0;
    (__return_storage_ptr__->_size).y = 0.0;
    *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
    (__return_storage_ptr__->_center).y = 0.0;
    (__return_storage_ptr__->_center).z = 0.0;
    *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
    uStack_7 = uVar11;
    uStack_8 = uVar12;
    if (pLVar5 ==
        (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
         *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      pAVar13 = (AABB *)(*pcVar3)();
      return pAVar13;
    }
    if (iRam_? != 0) {
      uVar14 = (uint)((ulonglong)&AStack_15 >> 0xc);
      lVar16 = (ulonglong)((uVar14 & 0x1fffff) >> 6) * 8;
      do {
        uVar17 = *(ulonglong *)(lVar16 + 0xADDR);
        puVar18 = (ulonglong *)(lVar16 + 0xADDR);
        LOCK();
        bVar19 = uVar17 == *puVar18;
        if (bVar19) {
          *puVar18 = uVar17 | 1L << (uVar14 & 0x3f);
        }
        UNLOCK();
      } while (!bVar19);
    }
    AStack_15._8_8_ = (ulonglong)(uint)(pLVar5->fields)._version << 0x20;
    AStack_15._center.y = 0.0;
    AStack_15._center.z = 0.0;
    LStack_20._index = (int32_t)AStack_15._size.z;
    LStack_20._version = (int32_t)AStack_15._center.x;
    LStack_20._current = (Object *)0x0;
    uStack_21 = 0;
    pLStack_22 = &LStack_20;
    pLVar23 = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
              *)CONCAT44(uVar11,5);
    lVar16 = CONCAT44(fStack_9,uVar12);
    AStack_15._size._0_8_ = pLVar5;
    LStack_20._list = (List_1_System_Object_ *)pLVar5;
    while( true ) {
      bVar24 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
               List_1_T_Enumerator_System_Object__MoveNext
                         (&LStack_20,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                         );
      pOVar25 = LStack_20._current;
      if (bVar24 == 0) {
        return __return_storage_ptr__;
      }
      if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
        FUN_?();
      }
      pLVar5 = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                 *)GameObjectEx::GameObjectEx_GetAllChildrenAndSelf
                             ((GameObject *)pOVar25,(MethodInfo *)0x0);
      if (pLVar5 ==
          (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
           *)0x0) break;
      if (iRam_? != 0) {
        uVar14 = (uint)((ulonglong)&AStack_15 >> 0xc);
        lVar26 = (ulonglong)((uVar14 & 0x1fffff) >> 6) * 8;
        do {
          uVar17 = *(ulonglong *)(lVar26 + 0xADDR);
          puVar18 = (ulonglong *)(lVar26 + 0xADDR);
          LOCK();
          bVar19 = uVar17 == *puVar18;
          if (bVar19) {
            *puVar18 = uVar17 | 1L << (uVar14 & 0x3f);
          }
          UNLOCK();
        } while (!bVar19);
      }
      AStack_15._8_8_ = (ulonglong)(uint)(pLVar5->fields)._version << 0x20;
      AStack_15._center.y = 0.0;
      AStack_15._center.z = 0.0;
      LStack_1._index = (int32_t)AStack_15._size.z;
      LStack_1._version = (int32_t)AStack_15._center.x;
      LStack_1._current = (Object *)0x0;
      uStack_27 = 0;
      pLStack_28 = &LStack_1;
      AStack_15._size._0_8_ = pLVar5;
      LStack_1._list = (List_1_System_Object_ *)pLVar5;
      while (bVar24 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                      Object]::List_1_T_Enumerator_System_Object__MoveNext
                                (&LStack_1,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                                ), pOVar25 = LStack_1._current, bVar24 != 0) {
        if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
          FUN_?();
        }
        AStack_15._size._0_8_ = pLVar23;
        AStack_15._8_8_ = lVar16;
        pAVar13 = ObjectBounds::ObjectBounds_CalcWorldAABB
                            (&AStack_29,(GameObject *)pOVar25,(ObjectBounds_QueryConfig *)&AStack_15
                             ,(MethodInfo *)0x0);
        lVar26 = *(longlong *)&(pAVar13->_size).z;
        uVar4._0_4_ = (pAVar13->_center).y;
        uVar4._4_4_ = (pAVar13->_center).z;
        uVar30._0_1_ = pAVar13->_isValid;
        uVar30._1_3_ = *(undefined3 *)&pAVar13->field_0x19;
        if ((bool)uVar30 != 0) {
          if (__return_storage_ptr__->_isValid == 0) {
            *(List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
              **)&__return_storage_ptr__->_size =
                 *(List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                   **)&pAVar13->_size;
            *(longlong *)&(__return_storage_ptr__->_size).z = lVar26;
            (__return_storage_ptr__->_center).y = (float)uVar4;
            (__return_storage_ptr__->_center).z = uVar4._4_4_;
            __return_storage_ptr__->_isValid = (bool)uVar30;
            *(undefined3 *)&__return_storage_ptr__->field_0x19 = uVar30._1_3_;
          }
          else {
            AStack_15._size._0_8_ =
                 *(List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                   **)&pAVar13->_size;
            AStack_15._8_8_ = lVar26;
            AStack_15._center._4_8_ = uVar4;
            AStack_15._24_4_ = uVar30;
            AABB::AABB_Encapsulate_2(__return_storage_ptr__,&AStack_15,(MethodInfo *)0x0);
          }
        }
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar3 = (code *)swi(3);
  pAVar13 = (AABB *)(*pcVar3)();
  return pAVar13;
}


/* List`1[UnityEngine.EventSystems.RaycastResult] GetHoveredUIElements() */

List_1_UnityEngine_EventSystems_RaycastResult_ *
Assembly-CSharp.dll::RTG::RTScene::RTScene_GetHoveredUIElements(RTScene *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__EventSystem);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IInputDevice);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::EventSystems::RaycastResult>__RemoveAll_System__Predicate<UnityEngine::EventSystems::RaycastResult>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::EventSystems::RaycastResult>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<UnityEngine::EventSystems::RaycastResult>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__PointerEventData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<UnityEngine::EventSystems::RaycastResult>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__RTScene____c___GetHoveredUIElements_b__15_0_UnityEngine__EventSystems__RaycastResult_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__RTScene____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
    FUN_?();
  }
  pEVar1 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                     ((MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pEVar1 == (EventSystem *)0x0) {
DAT_?:
    pLVar2 = (List_1_UnityEngine_EventSystems_RaycastResult_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__List<UnityEngine::EventSystems::RaycastResult>
                           );
    FUN_?(pLVar2,
                  MethodInfo__System__Collections__Generic__List<UnityEngine::EventSystems::RaycastResult>__List__
                 );
    return pLVar2;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if ((pEVar1->fields)._._._._._.m_CachedPtr == (void *)0x0) goto DAT_?;
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar3 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
  if ((pOVar3 == (Object *)0x0) || (pOVar3[2].klass == (Object__Class *)0x0))
  goto code_?;
  cVar4 = FUN_?(8,TypeInfo__RTG__IInputDevice,pOVar3[2].klass);
  if (cVar4 == '\0') {
    pLVar2 = (List_1_UnityEngine_EventSystems_RaycastResult_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__List<UnityEngine::EventSystems::RaycastResult>
                           );
    FUN_?(pLVar2,
                  MethodInfo__System__Collections__Generic__List<UnityEngine::EventSystems::RaycastResult>__List__
                 );
    return pLVar2;
  }
  puVar5 = (undefined8 *)FUN_?(auStack_6,7);
  uVar7 = *puVar5;
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
    FUN_?();
  }
  pEVar1 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                     ((MethodInfo *)0x0);
  this_00 = (PointerEventData *)FUN_?(TypeInfo__UnityEngine__EventSystems__PointerEventData)
  ;
  UnityEngine.UI.dll::UnityEngine::EventSystems::PointerEventData::PointerEventData__ctor
            (this_00,pEVar1,(MethodInfo *)0x0);
  if (this_00 == (PointerEventData *)0x0) goto code_?;
  fStack_8 = (float)uVar7;
  fStack_9 = (float)((ulonglong)uVar7 >> 0x20);
  (this_00->fields)._position_k__BackingField.x = fStack_8;
  (this_00->fields)._position_k__BackingField.y = fStack_9;
  pLVar2 = (List_1_UnityEngine_EventSystems_RaycastResult_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<UnityEngine::EventSystems::RaycastResult>
                         );
  FUN_?(pLVar2,
                MethodInfo__System__Collections__Generic__List<UnityEngine::EventSystems::RaycastResult>__List__
               );
  pEVar1 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                     ((MethodInfo *)0x0);
  if (pEVar1 == (EventSystem *)0x0) goto code_?;
  UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_RaycastAll
            (pEVar1,this_00,pLVar2,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__RTG__RTScene____c->_1).field_0x1c == 0) {
    FUN_?();
  }
  match = TypeInfo__RTG__RTScene____c->static_fields->__9__15_0;
  if (match == (Predicate_1_UnityEngine_EventSystems_RaycastResult_ *)0x0) {
    if (*(int *)&(TypeInfo__RTG__RTScene____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    pRVar10 = TypeInfo__RTG__RTScene____c->static_fields->__9;
    match = (Predicate_1_UnityEngine_EventSystems_RaycastResult_ *)
            FUN_?(TypeInfo__System__Predicate<UnityEngine::EventSystems::RaycastResult>);
    pMVar11 = 
    MethodInfo__RTG__RTScene____c___GetHoveredUIElements_b__15_0_UnityEngine__EventSystems__RaycastResult_
    ;
    bVar12 = iRam_? != 0;
    (match->fields)._._.method_ptr =
         MethodInfo__RTG__RTScene____c___GetHoveredUIElements_b__15_0_UnityEngine__EventSystems__RaycastResult_
         ->virtualMethodPointer;
    (match->fields)._._.method = pMVar11;
    (match->fields)._._.m_target = (Object *)pRVar10;
    if (bVar12) {
      uVar13 = (uint)((ulonglong)&(match->fields)._._.m_target >> 0xc);
      uVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
      do {
        uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
        puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
        LOCK();
        bVar12 = uVar15 == *puVar16;
        if (bVar12) {
          *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
        }
        UNLOCK();
      } while (!bVar12);
    }
    uVar17 = pMVar11->parameters_count;
    (match->fields)._._.method_code = match;
    if ((pMVar11->flags & 0x10) == 0) {
      if (pRVar10 == (RTScene_c *)0x0) {
        uVar7 = func_?();
        FUN_?(uVar7,0);
        pcVar18 = (code *)swi(3);
        pLVar2 = (List_1_UnityEngine_EventSystems_RaycastResult_ *)(*pcVar18)();
        return pLVar2;
      }
code_?:
      (match->fields)._._.method_code = (match->fields)._._.m_target;
      pcVar18 = (match->fields)._._.method_ptr;
    }
    else {
      if (uVar17 != 1) goto code_?;
      pcVar18 = FUN_?;
    }
    (match->fields)._._.invoke_impl = pcVar18;
    (match->fields)._._.extra_arg = FUN_?;
    TypeInfo__RTG__RTScene____c->static_fields->__9__15_0 = match;
    func_?(&TypeInfo__RTG__RTScene____c->static_fields->__9__15_0);
  }
  if (pLVar2 != (List_1_UnityEngine_EventSystems_RaycastResult_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::RaycastResult]::
    List_1_UnityEngine_EventSystems_RaycastResult__RemoveAll
              (pLVar2,match,
               MethodInfo__System__Collections__Generic__List<UnityEngine::EventSystems::RaycastResult>__RemoveAll_System__Predicate<UnityEngine::EventSystems::RaycastResult>_
              );
    return pLVar2;
  }
code_?:
  FUN_?();
  pcVar18 = (code *)swi(3);
  pLVar2 = (List_1_UnityEngine_EventSystems_RaycastResult_ *)(*pcVar18)();
  return pLVar2;
}


/* GameObject[] GetSceneObjects() */

GameObject__Array *
Assembly-CSharp.dll::RTG::RTScene::RTScene_GetSceneObjects(RTScene *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__GameObject__MethodInfo__UnityEngine__Object__FindObjectsByType<UnityEngine::GameObject>_UnityEngine__FindObjectsSortMode_____
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar1 = 
  UnityEngine__GameObject__MethodInfo__UnityEngine__Object__FindObjectsByType<UnityEngine::GameObject>_UnityEngine__FindObjectsSortMode_____
  ;
  if ((
      UnityEngine__GameObject__MethodInfo__UnityEngine__Object__FindObjectsByType<UnityEngine::GameObject>_UnityEngine__FindObjectsSortMode_____
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    if ((pMVar1->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar1);
    }
  }
  pvVar2 = ((pMVar1->field7_0x38).rgctx_data)->rgctxDataDummy;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  uVar3 = 0;
  if (pvVar2 != (void *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar4 = FUN_?(pvVar2,1);
    uVar3 = FUN_?(lVar4 + 0x20);
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar5 = (code *)swi(3);
    pGVar6 = (GameObject__Array *)(*pcVar5)();
    return pGVar6;
  }
  pcRam_? = pcVar5;
  lVar4 = (*pcRam_?)(uVar3,0,0);
  pMVar1 = (pMVar1->field7_0x38).rgctx_data[1].method;
  if ((pMVar1->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(pMVar1);
  }
  if (lVar4 == 0) {
    pGVar6 = (GameObject__Array *)0x0;
  }
  else {
    uVar7 = *(undefined4 *)(lVar4 + 0x18);
    pvVar2 = ((pMVar1->field7_0x38).rgctx_data)->rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
      pvVar2 = (void *)FUN_?(pvVar2);
    }
    pGVar6 = (GameObject__Array *)FUN_?(pvVar2,uVar7);
    uVar8 = 0;
    if (pGVar6 == (GameObject__Array *)0x0) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      pGVar6 = (GameObject__Array *)(*pcVar5)();
      return pGVar6;
    }
    ppGVar9 = pGVar6->vector;
    for (; (int)uVar8 < (int)pGVar6->max_length; uVar8 = uVar8 + 1) {
      if (*(uint *)(lVar4 + 0x18) <= uVar8) {
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        pGVar6 = (GameObject__Array *)(*pcVar5)();
        return pGVar6;
      }
      lVar10 = *(longlong *)((lVar4 - (longlong)pGVar6) + (longlong)ppGVar9);
      pvVar2 = (pMVar1->field7_0x38).rgctx_data[1].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
        pvVar2 = (void *)FUN_?(pvVar2);
      }
      if (lVar10 == 0) {
        pGVar11 = (GameObject *)0x0;
      }
      else {
        pGVar11 = (GameObject *)FUN_?(lVar10,pvVar2);
        if (pGVar11 == (GameObject *)0x0) {
          FUN_?(lVar10,pvVar2);
          pcVar5 = (code *)swi(3);
          pGVar6 = (GameObject__Array *)(*pcVar5)();
          return pGVar6;
        }
      }
      if ((uint)pGVar6->max_length <= uVar8) goto code_?;
      bVar12 = iRam_? != 0;
      *ppGVar9 = pGVar11;
      if (bVar12) {
        uVar13 = (uint)((ulonglong)(pGVar6->vector + (int)uVar8) >> 0xc);
        puVar14 = (ulonglong *)((ulonglong)((uVar13 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar15 = *puVar14;
          LOCK();
          uVar16 = *puVar14;
          if (uVar15 == uVar16) {
            *puVar14 = uVar15 | 1L << (uVar13 & 0x3f);
          }
          UNLOCK();
        } while (uVar15 != uVar16);
      }
      ppGVar9 = ppGVar9 + 1;
    }
  }
  return pGVar6;
}


/* Boolean IsAnySceneEntityHovered() */

bool Assembly-CSharp.dll::RTG::RTScene::RTScene_IsAnySceneEntityHovered
               (RTScene *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IHoverableSceneEntityContainer>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IHoverableSceneEntityContainer>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IHoverableSceneEntityContainer>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IHoverableSceneEntityContainer);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_System_Object_ *)(this->fields)._hoverableSceneEntityContainers;
  if (pLVar1 != (List_1_System_Object_ *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    pLStack_7 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
    uStack_8 = 0;
    LStack_9._8_8_ = pLStack_7;
    LStack_9._current = (Object *)0x0;
    uStack_3 = 0;
    pLStack_7 = &LStack_9;
    LStack_9._list = pLVar1;
    while (bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_9,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IHoverableSceneEntityContainer>__MoveNext__
                             ), bVar10 != 0) {
      if (LStack_9._current == (Object *)0x0) goto code_?;
      cVar11 = FUN_?(0,TypeInfo__RTG__IHoverableSceneEntityContainer);
      if (cVar11 != '\0') {
        return 1;
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::EventSystems::RaycastResult>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar12 = RTScene_GetHoveredUIElements(this,(MethodInfo *)0x0);
    if (pLVar12 != (List_1_UnityEngine_EventSystems_RaycastResult_ *)0x0) {
      return (pLVar12->fields)._size != 0;
    }
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar13 = (code *)swi(3);
  bVar10 = (*pcVar13)();
  return bVar10;
}


/* Boolean IsAnyUIElementHovered() */

bool Assembly-CSharp.dll::RTG::RTScene::RTScene_IsAnyUIElementHovered
               (RTScene *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::EventSystems::RaycastResult>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = RTScene_GetHoveredUIElements(this,(MethodInfo *)0x0);
  if (pLVar1 != (List_1_UnityEngine_EventSystems_RaycastResult_ *)0x0) {
    return (pLVar1->fields)._size != 0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void OnGameObjectWillBeDestroyed(GameObject) */

void Assembly-CSharp.dll::RTG::RTScene::RTScene_OnGameObjectWillBeDestroyed
               (RTScene *this,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GameObjectEx);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Contains_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._settings;
  if (pSVar1 != (SceneSettings *)0x0) {
    if ((pSVar1->fields)._physicsMode == 2) {
      this_00 = (this->fields)._ignoredRootObjects;
      if (this_00 == (HashSet_1_UnityEngine_GameObject_ *)0x0) goto code_?;
      bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
              HashSet_1_System_Object__Contains
                        ((HashSet_1_System_Object_ *)this_00,(Object *)gameObject,
                         MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Contains_UnityEngine__GameObject_
                        );
      if (bVar2 == 0) {
        pLVar3 = (this->fields)._childrenAndSelfBuffer;
        if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
          FUN_?();
        }
        GameObjectEx::GameObjectEx_GetAllChildrenAndSelf_1(gameObject,pLVar3,(MethodInfo *)0x0);
        pLVar3 = (this->fields)._childrenAndSelfBuffer;
        if (pLVar3 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
        iVar4 = (pLVar3->fields)._size;
        uVar5 = 0;
        if (0 < iVar4) {
          lVar6 = 0;
          lVar7 = 0x20;
          do {
            pLVar3 = (this->fields)._childrenAndSelfBuffer;
            if (pLVar3 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
            if ((uint)(pLVar3->fields)._size <= uVar5) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pGVar9 = (pLVar3->fields)._items;
            if (pGVar9 == (GameObject__Array *)0x0) goto code_?;
            if ((uint)pGVar9->max_length <= uVar5) {
              FUN_?();
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            this_01 = (this->fields)._sceneTree;
            gameObject_00 = *(GameObject **)((longlong)pGVar9->vector + lVar7 + -0x20);
            if (this_01 == (SceneTree *)0x0) goto code_?;
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__Remove_UnityEngine__GameObject_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__get_Item_UnityEngine__GameObject_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__RTG__SphereTree<UnityEngine::GameObject>__RemoveNode_RTG__SphereTreeNode<UnityEngine::GameObject>_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            bVar2 = SceneTree::SceneTree_IsObjectRegistered(this_01,gameObject_00,(MethodInfo *)0x0)
            ;
            if (bVar2 != 0) {
              pDVar10 = (this_01->fields)._objectToNode;
              this_02 = (this_01->fields)._objectTree;
              if (pDVar10 == (Dictionary_2_UnityEngine_GameObject_RTG_SphereTreeNode_1_UnityEngine_GameObject_
                             *)0x0) goto code_?;
              node = (SphereTreeNode_1_System_Object_ *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               ((Dictionary_2_System_Object_System_Object_ *)pDVar10,
                                (Object *)gameObject_00,
                                MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__get_Item_UnityEngine__GameObject_
                               );
              if (this_02 == (SphereTree_1_UnityEngine_GameObject_ *)0x0) goto code_?;
              SphereTree`1[System::Object]::SphereTree_1_System_Object__RemoveNode
                        ((SphereTree_1_System_Object_ *)this_02,node,
                         MethodInfo__RTG__SphereTree<UnityEngine::GameObject>__RemoveNode_RTG__SphereTreeNode<UnityEngine::GameObject>_
                        );
              pDVar10 = (this_01->fields)._objectToNode;
              if (pDVar10 == (Dictionary_2_UnityEngine_GameObject_RTG_SphereTreeNode_1_UnityEngine_GameObject_
                             *)0x0) goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Remove
                        ((Dictionary_2_System_Object_System_Object_ *)pDVar10,(Object *)gameObject_00
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__Remove_UnityEngine__GameObject_
                        );
              if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).field_0x1c == 0) {
                FUN_?();
              }
              pOVar11 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                                 (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
              if (pOVar11 == (Object *)0x0) goto code_?;
              *(undefined1 *)&pOVar11[9].klass = 1;
            }
            uVar5 = uVar5 + 1;
            lVar6 = lVar6 + 1;
            lVar7 = lVar7 + 8;
          } while (lVar6 < iVar4);
        }
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean OverlapBox(OBB, List`1[UnityEngine.GameObject]) */

bool Assembly-CSharp.dll::RTG::RTScene::RTScene_OverlapBox
               (RTScene *this,OBB *obb,List_1_UnityEngine_GameObject_ *gameObjects,
               MethodInfo *method)

{
  uVar1 = (uint)((ulonglong)in_stack_2 >> 0x20);
  pOStackX_10 = obb;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Clear__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Physics2D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Physics);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aOStack_3[0]._center.y = 0.0;
  aOStack_3[0]._center.z = 0.0;
  aOStack_3[0]._rotation._0_8_ = (ulonglong)(uint)aOStack_3[0]._rotation.y << 0x20;
  pSVar4 = (this->fields)._settings;
  aOStack_3[0]._size.x = 0.0;
  aOStack_3[0]._size.y = 0.0;
  aOStack_3[0]._size.z = 0.0;
  aOStack_3[0]._center.x = 0.0;
  if (pSVar4 != (SceneSettings *)0x0) {
    if ((pSVar4->fields)._physicsMode == 1) {
      if (gameObjects != (List_1_UnityEngine_GameObject_ *)0x0) {
        length = (gameObjects->fields)._size;
        uVar5 = 0;
        piVar6 = &(gameObjects->fields)._version;
        *piVar6 = *piVar6 + 1;
        (gameObjects->fields)._size = 0;
        if (0 < length) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(gameObjects->fields)._items,0,length,(MethodInfo *)0x0);
        }
        fVar7 = _UNK_?;
        PStack_8.m_Normal.x = (obb->_size).x;
        PStack_8.m_Normal.y = (obb->_size).y;
        fVar9 = PStack_8.m_Normal.y * _UNK_?;
        fVar10 = PStack_8.m_Normal.x * _UNK_?;
        fVar11 = (obb->_size).z * _UNK_?;
        if (*(int *)&(TypeInfo__UnityEngine__Physics->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Physics);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Physics->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Physics);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Physics->_1).field_0x1c == 0) {
          FUN_?();
        }
        uStackX_8 = 0x100000000;
        uStack_12._0_4_ = (obb->_rotation).x;
        uStack_12._4_4_ = (obb->_rotation).y;
        uStack_13._0_4_ = (obb->_rotation).z;
        uStack_13._4_4_ = (obb->_rotation).w;
        PStack_8.m_Normal.z = (obb->_center).z;
        PStack_8.m_Normal.x = (obb->_center).x;
        PStack_8.m_Normal.y = (obb->_center).y;
        VStack_14.y = fVar9;
        VStack_14.x = fVar10;
        VStack_14.z = fVar11;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Physics);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Physics->_1).field_0x1c == 0) {
          FUN_?();
        }
        pcVar15 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
          uVar16 = func_?(&UNK_?);
          FUN_?(uVar16,0);
          pcVar15 = (code *)swi(3);
          bVar17 = (*pcVar15)();
          return bVar17;
        }
        pcRam_? = pcVar15;
        lVar18 = (*pcRam_?)
                           (&uStackX_8,&PStack_8,&VStack_14,&uStack_12,0xffffffff,
                            (ulonglong)uVar1 << 0x20);
        if (lVar18 != 0) {
          puVar19 = (undefined8 *)(lVar18 + 0x20);
          uVar1 = uVar5;
          while ((int)uVar1 < *(int *)(lVar18 + 0x18)) {
            if (*(uint *)(lVar18 + 0x18) <= uVar1) goto code_?;
            pOVar20 = (Object *)*puVar19;
            if (pOVar20 == (Object *)0x0) goto code_?;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pOVar21 = pOVar20[1].klass;
            if (pOVar21 == (Object__Class *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException(pOVar20,(MethodInfo *)0x0);
              pcVar15 = (code *)swi(3);
              bVar17 = (*pcVar15)();
              return bVar17;
            }
            pcVar15 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
              uVar16 = func_?(&UNK_?);
              FUN_?(uVar16,0);
              pcVar15 = (code *)swi(3);
              bVar17 = (*pcVar15)();
              return bVar17;
            }
            pcRam_? = pcVar15;
            pvVar22 = (void *)(*pcRam_?)(pOVar21);
            pOVar20 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                      Unmarshal_UnmarshalUnityObject
                                (pvVar22,
                                 UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                );
            pMVar23 = 
            MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
            ;
            pGVar24 = (gameObjects->fields)._items;
            piVar6 = &(gameObjects->fields)._version;
            *piVar6 = *piVar6 + 1;
            if (pGVar24 == (GameObject__Array *)0x0) goto code_?;
            uVar25 = (gameObjects->fields)._size;
            if (uVar25 < (uint)pGVar24->max_length) {
              (gameObjects->fields)._size = uVar25 + 1;
              FUN_?(pGVar24);
              uVar1 = uVar1 + 1;
              puVar19 = puVar19 + 1;
            }
            else {
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__AddWithResize
                        ((List_1_System_Object_ *)gameObjects,pOVar20,
                         pMVar23->klass->rgctx_data[0xe].method);
              uVar1 = uVar1 + 1;
              puVar19 = puVar19 + 1;
            }
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
          VStack_14.x = (pVVar26->forwardVector).x;
          VStack_14.y = (pVVar26->forwardVector).y;
          fVar9 = (pVVar26->forwardVector).z;
          PStack_8.m_Normal._0_8_ = VStack_14._0_8_;
          PStack_8.m_Normal.z = fVar9;
          fVar10 = (float)FUN_?(&PStack_8);
          if (_UNK_? < fVar10) {
            fVar11 = VStack_14.x / fVar10;
            fVar27 = VStack_14.y / fVar10;
            fVar9 = fVar9 / fVar10;
          }
          else {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
            fVar11 = (pVVar26->zeroVector).x;
            fVar27 = (pVVar26->zeroVector).y;
            fVar9 = (pVVar26->zeroVector).z;
          }
          VStack_14.y = fVar27;
          VStack_14.x = fVar11;
          pLVar28 = OBB::OBB_GetCornerPoints(pOStackX_10,(MethodInfo *)0x0);
          PStack_8.m_Normal.x = VStack_14.x;
          PStack_8.m_Normal.y = VStack_14.y;
          PStack_8.m_Distance = 0.0;
          PStack_8.m_Normal.z = fVar9;
          pLVar28 = PlaneEx::PlaneEx_ProjectAllPoints(&PStack_8,pLVar28,(MethodInfo *)0x0);
          AABB::AABB__ctor_2((AABB *)aOStack_3,(IEnumerable_1_UnityEngine_Vector3_ *)pLVar28,
                             (MethodInfo *)0x0);
          fVar10 = aOStack_3[0]._center.x - aOStack_3[0]._size.x * fVar7;
          fVar11 = aOStack_3[0]._center.y - aOStack_3[0]._size.y * fVar7;
          fVar9 = aOStack_3[0]._size.x * fVar7 + aOStack_3[0]._center.x;
          fVar7 = aOStack_3[0]._size.y * fVar7 + aOStack_3[0]._center.y;
          if (*(int *)&(TypeInfo__UnityEngine__Physics2D->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Physics2D);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Physics2D->_1).field_0x1c == 0) {
            FUN_?();
          }
          pointA.y = fVar11;
          pointA.x = fVar10;
          pointB.y = fVar7;
          pointB.x = fVar9;
          pCVar29 = UnityEngine.Physics2DModule.dll::UnityEngine::Physics2D::
                    Physics2D_OverlapAreaAllToBox_Internal
                              (pointA,pointB,-5,_UNK_?,_UNK_?,(MethodInfo *)0x0);
          if (pCVar29 != (Collider2D__Array *)0x0) {
            ppCVar30 = pCVar29->vector;
            do {
              if ((int)pCVar29->max_length <= (int)uVar5) {
                return (gameObjects->fields)._size != 0;
              }
              if ((uint)pCVar29->max_length <= uVar5) {
code_?:
                FUN_?();
                pcVar15 = (code *)swi(3);
                bVar17 = (*pcVar15)();
                return bVar17;
              }
              obj = *ppCVar30;
              if (obj == (Collider2D *)0x0) break;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar22 = (obj->fields)._._._.m_CachedPtr;
              if (pvVar22 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                pcVar15 = (code *)swi(3);
                bVar17 = (*pcVar15)();
                return bVar17;
              }
              pcVar15 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
                uVar16 = func_?(&UNK_?);
                FUN_?(uVar16,0);
                pcVar15 = (code *)swi(3);
                bVar17 = (*pcVar15)();
                return bVar17;
              }
              pcRam_? = pcVar15;
              pvVar22 = (void *)(*pcRam_?)(pvVar22);
              pOVar20 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                        Unmarshal_UnmarshalUnityObject
                                  (pvVar22,
                                   UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                  );
              pMVar23 = 
              MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
              ;
              pGVar24 = (gameObjects->fields)._items;
              piVar6 = &(gameObjects->fields)._version;
              *piVar6 = *piVar6 + 1;
              if (pGVar24 == (GameObject__Array *)0x0) break;
              uVar1 = (gameObjects->fields)._size;
              if (uVar1 < (uint)pGVar24->max_length) {
                (gameObjects->fields)._size = uVar1 + 1;
                FUN_?(pGVar24,(longlong)(int)uVar1,pOVar20);
                uVar5 = uVar5 + 1;
                ppCVar30 = ppCVar30 + 1;
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__AddWithResize
                          ((List_1_System_Object_ *)gameObjects,pOVar20,
                           pMVar23->klass->rgctx_data[0xe].method);
                uVar5 = uVar5 + 1;
                ppCVar30 = ppCVar30 + 1;
              }
            } while( true );
          }
        }
      }
    }
    else {
      this_00 = (this->fields)._sceneTree;
      if (this_00 != (SceneTree *)0x0) {
        aOStack_3[0]._size.x = (obb->_size).x;
        aOStack_3[0]._size.y = (obb->_size).y;
        aOStack_3[0]._8_8_ = *(undefined8 *)&(obb->_size).z;
        aOStack_3[0]._isValid = obb->_isValid;
        aOStack_3[0]._41_3_ = *(undefined3 *)&obb->field_0x29;
        aOStack_3[0]._center.y = (obb->_center).y;
        aOStack_3[0]._center.z = (obb->_center).z;
        aOStack_3[0]._rotation.x = (obb->_rotation).x;
        aOStack_3[0]._rotation.y = (obb->_rotation).y;
        aOStack_3[0]._rotation.z = (obb->_rotation).z;
        aOStack_3[0]._rotation.w = (obb->_rotation).w;
        bVar17 = SceneTree::SceneTree_OverlapBox(this_00,aOStack_3,gameObjects,(MethodInfo *)0x0);
        return bVar17;
      }
    }
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  bVar17 = (*pcVar15)();
  return bVar17;
}


/* Boolean OverlapBox(OBB, SceneOverlapFilter, List`1[UnityEngine.GameObject]) */

bool Assembly-CSharp.dll::RTG::RTScene::RTScene_OverlapBox_1
               (RTScene *this,OBB *obb,SceneOverlapFilter *overlapFilter,
               List_1_UnityEngine_GameObject_ *gameObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  OStack_1._size.x = (obb->_size).x;
  OStack_1._size.y = (obb->_size).y;
  OStack_1._8_8_ = *(undefined8 *)&(obb->_size).z;
  OStack_1._isValid = obb->_isValid;
  OStack_1._41_3_ = *(undefined3 *)&obb->field_0x29;
  OStack_1._center.y = (obb->_center).y;
  OStack_1._center.z = (obb->_center).z;
  OStack_1._rotation.x = (obb->_rotation).x;
  OStack_1._rotation.y = (obb->_rotation).y;
  OStack_1._rotation.z = (obb->_rotation).z;
  OStack_1._rotation.w = (obb->_rotation).w;
  RTScene_OverlapBox(this,&OStack_1,gameObjects,(MethodInfo *)0x0);
  if (overlapFilter != (SceneOverlapFilter *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__RemoveAll_System__Predicate<UnityEngine::GameObject>_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__System__Predicate<UnityEngine::GameObject>);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__RTG__SceneOverlapFilter___FilterOverlaps_b__10_0_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (Predicate_1_Object_ *)
              FUN_?(TypeInfo__System__Predicate<UnityEngine::GameObject>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              (this_00,(Object *)overlapFilter,
               MethodInfo__RTG__SceneOverlapFilter___FilterOverlaps_b__10_0_UnityEngine__GameObject_
               ,(MethodInfo *)0x0);
    if (gameObjects != (List_1_UnityEngine_GameObject_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAll
                ((List_1_System_Object_ *)gameObjects,this_00,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__RemoveAll_System__Predicate<UnityEngine::GameObject>_
                );
      return (gameObjects->fields)._size != 0;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* SceneRaycastHit Raycast(Ray, SceneRaycastPrecision, SceneRaycastFilter) */

SceneRaycastHit *
Assembly-CSharp.dll::RTG::RTScene::RTScene_Raycast
          (RTScene *this,Ray *ray,SceneRaycastPrecision__Enum rtRaycastPrecision,
          SceneRaycastFilter *raycastFilter,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__SceneRaycastHit);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  RStack_1.m_Origin.x = (ray->m_Origin).x;
  RStack_1.m_Origin.y = (ray->m_Origin).y;
  RStack_1._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  RStack_1.m_Direction.y = (ray->m_Direction).y;
  RStack_1.m_Direction.z = (ray->m_Direction).z;
  pGVar2 = (GameObjectRayHit *)0x0;
  RTScene_RaycastAllObjectsSorted_1
            (this,&RStack_1,rtRaycastPrecision,raycastFilter,(this->fields)._objectHitBuffer,
             (MethodInfo *)0x0);
  pLVar3 = (this->fields)._objectHitBuffer;
  if (pLVar3 == (List_1_RTG_GameObjectRayHit_ *)0x0) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    pSVar5 = (SceneRaycastHit *)(*pcVar4)();
    return pSVar5;
  }
  iVar6 = (pLVar3->fields)._size;
  if (iVar6 != 0) {
    if (iVar6 == 0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      pSVar5 = (SceneRaycastHit *)(*pcVar4)();
      return pSVar5;
    }
    pGVar7 = (pLVar3->fields)._items;
    if (pGVar7 == (GameObjectRayHit__Array *)0x0) goto code_?;
    if ((int)pGVar7->max_length == 0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      pSVar5 = (SceneRaycastHit *)(*pcVar4)();
      return pSVar5;
    }
    pGVar2 = pGVar7->vector[0];
  }
  RStack_1.m_Origin.x = (ray->m_Origin).x;
  RStack_1.m_Origin.y = (ray->m_Origin).y;
  RStack_1._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  RStack_1.m_Direction.y = (ray->m_Direction).y;
  RStack_1.m_Direction.z = (ray->m_Direction).z;
  pXVar8 = RTScene_RaycastSceneGridIfVisible(this,&RStack_1,(MethodInfo *)0x0);
  pSVar5 = (SceneRaycastHit *)FUN_?(TypeInfo__RTG__SceneRaycastHit);
  iVar6 = iRam_?;
  (pSVar5->fields)._objectHit = pGVar2;
  if (iVar6 != 0) {
    uVar9 = (uint)((ulonglong)&pSVar5->fields >> 0xc);
    lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
    do {
      uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
      puVar12 = (ulonglong *)(lVar10 + 0xADDR);
      LOCK();
      bVar13 = uVar11 == *puVar12;
      if (bVar13) {
        *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
      iVar6 = iRam_?;
    } while (!bVar13);
  }
  (pSVar5->fields)._gridHit = pXVar8;
  if (iVar6 != 0) {
    uVar9 = (uint)((ulonglong)&(pSVar5->fields)._gridHit >> 0xc);
    lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
    do {
      uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
      puVar12 = (ulonglong *)(lVar10 + 0xADDR);
      LOCK();
      bVar13 = uVar11 == *puVar12;
      if (bVar13) {
        *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
    } while (!bVar13);
  }
  return pSVar5;
}


/* Boolean RaycastAllObjects(Ray, SceneRaycastPrecision, List`1[RTG.GameObjectRayHit]) */

bool Assembly-CSharp.dll::RTG::RTScene::RTScene_RaycastAllObjects
               (RTScene *this,Ray *ray,SceneRaycastPrecision__Enum rtRaycastPrecision,
               List_1_RTG_GameObjectRayHit_ *hits,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Physics2D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Physics);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._settings;
  if (pSVar1 != (SceneSettings *)0x0) {
    if ((pSVar1->fields)._physicsMode == 1) {
      if (hits == (List_1_RTG_GameObjectRayHit_ *)0x0) goto DAT_?;
      length = (hits->fields)._size;
      piVar2 = &(hits->fields)._version;
      *piVar2 = *piVar2 + 1;
      (hits->fields)._size = 0;
      if (0 < length) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(hits->fields)._items,0,length,(MethodInfo *)0x0);
      }
      if (*(int *)&(TypeInfo__UnityEngine__Physics->_1).field_0x1c == 0) {
        FUN_?();
      }
      uVar3._0_4_ = (ray->m_Origin).x;
      uVar3._4_4_ = (ray->m_Origin).y;
      RStack_4.m_Origin.x = (ray->m_Origin).x;
      RStack_4.m_Origin.y = (ray->m_Origin).y;
      fVar5 = (ray->m_Origin).z;
      RStack_4.m_Direction.x = (ray->m_Direction).x;
      uVar6 = (ray->m_Direction).y;
      uVar7 = (ray->m_Direction).z;
      RStack_4.m_Origin.z = fVar5;
      RStack_4.m_Direction.y = (float)uVar6;
      RStack_4.m_Direction.z = (float)uVar7;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Physics);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Physics->_1).field_0x1c == 0) {
        FUN_?();
      }
      VStack_8.y = RStack_4.m_Direction.y;
      VStack_8.x = RStack_4.m_Direction.x;
      VStack_8.z = RStack_4.m_Direction.z;
      RStack_4.m_Origin._0_8_ = uVar3;
      RStack_4.m_Origin.z = fVar5;
      hits3D = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_RaycastAll
                         (&RStack_4.m_Origin,&VStack_8,_UNK_?,-5,
                          QueryTriggerInteraction__Enum_UseGlobal,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Physics2D->_1).field_0x1c == 0) {
        FUN_?();
      }
      uVar9._0_4_ = (ray->m_Origin).x;
      uVar9._4_4_ = (ray->m_Origin).y;
      VStack_8.x = (ray->m_Origin).x;
      VStack_8.y = (ray->m_Origin).y;
      fVar5 = (ray->m_Origin).z;
      fStack_10 = (ray->m_Direction).x;
      uVar11 = (ray->m_Direction).y;
      uVar12 = (ray->m_Direction).z;
      VStack_8.z = fVar5;
      fStack_13 = (float)uVar11;
      fStack_14 = (float)uVar12;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Physics2D);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Physics2D->_1).field_0x1c == 0) {
        FUN_?();
      }
      RStack_4.m_Origin.y = fStack_13;
      RStack_4.m_Origin.x = fStack_10;
      RStack_4.m_Origin.z = fStack_14;
      VStack_8._0_8_ = uVar9;
      VStack_8.z = fVar5;
      hits2D = UnityEngine.Physics2DModule.dll::UnityEngine::Physics2D::
               Physics2D_GetRayIntersectionAll_Internal
                         ((PhysicsScene2D)0x0,&VStack_8,&RStack_4.m_Origin,_UNK_?,-5,
                          (MethodInfo *)0x0);
      aRStack_15[0].m_Origin.x = (ray->m_Origin).x;
      aRStack_15[0].m_Origin.y = (ray->m_Origin).y;
      aRStack_15[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
      aRStack_15[0].m_Direction.y = (ray->m_Direction).y;
      aRStack_15[0].m_Direction.z = (ray->m_Direction).z;
      GameObjectRayHit::GameObjectRayHit_Store
                (aRStack_15,(IEnumerable_1_UnityEngine_RaycastHit2D_ *)hits2D,
                 (IEnumerable_1_UnityEngine_RaycastHit_ *)hits3D,hits,(MethodInfo *)0x0);
      bVar16 = (hits->fields)._size != 0;
    }
    else {
      this_00 = (this->fields)._sceneTree;
      if (this_00 == (SceneTree *)0x0) goto DAT_?;
      RStack_4.m_Origin.x = (ray->m_Origin).x;
      RStack_4.m_Origin.y = (ray->m_Origin).y;
      uVar3 = *(undefined8 *)&(ray->m_Origin).z;
      uVar17 = (ray->m_Direction).y;
      uVar18 = (ray->m_Direction).z;
      RStack_4.m_Origin.z = (float)uVar3;
      RStack_4.m_Direction.x = (float)((ulonglong)uVar3 >> 0x20);
      RStack_4.m_Direction.y = (float)uVar17;
      RStack_4.m_Direction.z = (float)uVar18;
      bVar16 = SceneTree::SceneTree_RaycastAll
                         (this_00,&RStack_4,rtRaycastPrecision,hits,(MethodInfo *)0x0);
    }
    return bVar16;
  }
DAT_?:
  FUN_?();
  pcVar19 = (code *)swi(3);
  bVar16 = (*pcVar19)();
  return bVar16;
}


/* Boolean RaycastAllObjectsSorted(Ray, SceneRaycastPrecision, List`1[RTG.GameObjectRayHit]) */

bool Assembly-CSharp.dll::RTG::RTScene::RTScene_RaycastAllObjectsSorted
               (RTScene *this,Ray *ray,SceneRaycastPrecision__Enum raycastPresicion,
               List_1_RTG_GameObjectRayHit_ *hits,MethodInfo *method)

{
  RStack_1.m_Origin.x = (ray->m_Origin).x;
  RStack_1.m_Origin.y = (ray->m_Origin).y;
  RStack_1._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  RStack_1.m_Direction.y = (ray->m_Direction).y;
  RStack_1.m_Direction.z = (ray->m_Direction).z;
  bVar2 = RTScene_RaycastAllObjects(this,&RStack_1,raycastPresicion,hits,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Comparison<RTG::GameObjectRayHit>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Sort_System__Comparison<RTG::GameObjectRayHit>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__GameObjectRayHit____c___SortByHitDistance_b__18_0_RTG__GameObjectRayHit__RTG__GameObjectRayHit_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GameObjectRayHit____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__GameObjectRayHit____c->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = TypeInfo__RTG__GameObjectRayHit____c->static_fields->__9__18_0;
  if (this_00 == (Comparison_1_RTG_GameObjectRayHit_ *)0x0) {
    if (*(int *)&(TypeInfo__RTG__GameObjectRayHit____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    object = TypeInfo__RTG__GameObjectRayHit____c->static_fields->__9;
    this_00 = (Comparison_1_RTG_GameObjectRayHit_ *)
              FUN_?(TypeInfo__System__Comparison<RTG::GameObjectRayHit>);
    mscorlib.dll::System::Func`3[Object,Object,Int32]::Func_3_Object_Object_Int32___ctor
              ((Func_3_Object_Object_Int32_ *)this_00,(Object *)object,
               MethodInfo__RTG__GameObjectRayHit____c___SortByHitDistance_b__18_0_RTG__GameObjectRayHit__RTG__GameObjectRayHit_
               ,(MethodInfo *)0x0);
    TypeInfo__RTG__GameObjectRayHit____c->static_fields->__9__18_0 = this_00;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&TypeInfo__RTG__GameObjectRayHit____c->static_fields->__9__18_0 >>
                    0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
  }
  if (hits == (List_1_RTG_GameObjectRayHit_ *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    bVar2 = (*pcVar7)();
    return bVar2;
  }
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Sort_1
            ((List_1_System_Object_ *)hits,(Comparison_1_Object_ *)this_00,
             MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Sort_System__Comparison<RTG::GameObjectRayHit>_
            );
  return bVar2;
}


/* Boolean RaycastAllObjectsSorted(Ray, SceneRaycastPrecision, SceneRaycastFilter,
   List`1[RTG.GameObjectRayHit]) */

bool Assembly-CSharp.dll::RTG::RTScene::RTScene_RaycastAllObjectsSorted_1
               (RTScene *this,Ray *ray,SceneRaycastPrecision__Enum rtRaycastPrecision,
               SceneRaycastFilter *raycastFilter,List_1_RTG_GameObjectRayHit_ *hits,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (hits != (List_1_RTG_GameObjectRayHit_ *)0x0) {
    length = (hits->fields)._size;
    piVar1 = &(hits->fields)._version;
    *piVar1 = *piVar1 + 1;
    (hits->fields)._size = 0;
    if (0 < length) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(hits->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if (raycastFilter != (SceneRaycastFilter *)0x0) {
      pLVar2 = (raycastFilter->fields)._allowedObjectTypes;
      if (pLVar2 == (List_1_RTG_GameObjectType_ *)0x0) goto code_?;
      if ((pLVar2->fields)._size == 0) {
        return 0;
      }
    }
    RStack_3.m_Origin.x = (ray->m_Origin).x;
    RStack_3.m_Origin.y = (ray->m_Origin).y;
    RStack_3._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
    RStack_3.m_Direction.y = (ray->m_Direction).y;
    RStack_3.m_Direction.z = (ray->m_Direction).z;
    RTScene_RaycastAllObjects(this,&RStack_3,rtRaycastPrecision,hits,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Comparison<RTG::GameObjectRayHit>);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Sort_System__Comparison<RTG::GameObjectRayHit>_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__RTG__GameObjectRayHit____c___SortByHitDistance_b__18_0_RTG__GameObjectRayHit__RTG__GameObjectRayHit_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__RTG__GameObjectRayHit____c);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__RTG__GameObjectRayHit____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_00 = TypeInfo__RTG__GameObjectRayHit____c->static_fields->__9__18_0;
    if (this_00 == (Comparison_1_RTG_GameObjectRayHit_ *)0x0) {
      if (*(int *)&(TypeInfo__RTG__GameObjectRayHit____c->_1).field_0x1c == 0) {
        FUN_?();
      }
      object = TypeInfo__RTG__GameObjectRayHit____c->static_fields->__9;
      this_00 = (Comparison_1_RTG_GameObjectRayHit_ *)
                FUN_?(TypeInfo__System__Comparison<RTG::GameObjectRayHit>);
      mscorlib.dll::System::Func`3[Object,Object,Int32]::Func_3_Object_Object_Int32___ctor
                ((Func_3_Object_Object_Int32_ *)this_00,(Object *)object,
                 MethodInfo__RTG__GameObjectRayHit____c___SortByHitDistance_b__18_0_RTG__GameObjectRayHit__RTG__GameObjectRayHit_
                 ,(MethodInfo *)0x0);
      TypeInfo__RTG__GameObjectRayHit____c->static_fields->__9__18_0 = this_00;
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)&TypeInfo__RTG__GameObjectRayHit____c->static_fields->__9__18_0 >>
                      0xc);
        puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar6 = *puVar5;
          LOCK();
          uVar7 = *puVar5;
          if (uVar6 == uVar7) {
            *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (uVar6 != uVar7);
      }
    }
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Sort_1
              ((List_1_System_Object_ *)hits,(Comparison_1_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Sort_System__Comparison<RTG::GameObjectRayHit>_
              );
    if (raycastFilter != (SceneRaycastFilter *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__RemoveAll_System__Predicate<RTG::GameObjectRayHit>_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Predicate<RTG::GameObjectRayHit>);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__RTG__SceneRaycastFilter___FilterHits_b__10_0_RTG__GameObjectRayHit_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_01 = (Predicate_1_Object_ *)
                FUN_?(TypeInfo__System__Predicate<RTG::GameObjectRayHit>);
      mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                (this_01,(Object *)raycastFilter,
                 MethodInfo__RTG__SceneRaycastFilter___FilterHits_b__10_0_RTG__GameObjectRayHit_,
                 (MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAll
                ((List_1_System_Object_ *)hits,this_01,
                 MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__RemoveAll_System__Predicate<RTG::GameObjectRayHit>_
                );
    }
    return (hits->fields)._size != 0;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* GameObjectRayHit RaycastMeshObject(Ray, GameObject) */

GameObjectRayHit *
Assembly-CSharp.dll::RTG::RTScene::RTScene_RaycastMeshObject
          (RTScene *this,Ray *ray,GameObject *meshObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GameObjectRayHit);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__MeshCollider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshCollider>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  RStack_1.m_UV.x = 0.0;
  RStack_1.m_UV.y = 0.0;
  RStack_1.m_Collider = 0;
  pSVar2 = (this->fields)._settings;
  RStack_1.m_Point.x = 0.0;
  RStack_1.m_Point.y = 0.0;
  RStack_1.m_Point.z = 0.0;
  RStack_1.m_Normal.x = 0.0;
  RStack_1.m_Normal.y = 0.0;
  RStack_1.m_Normal.z = 0.0;
  RStack_1.m_FaceID = 0;
  RStack_1.m_Distance = 0.0;
  if (pSVar2 == (SceneSettings *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    pGVar4 = (GameObjectRayHit *)(*pcVar3)();
    return pGVar4;
  }
  if ((pSVar2->fields)._physicsMode != 1) {
    this_00 = (this->fields)._sceneTree;
    if (this_00 != (SceneTree *)0x0) {
      RStack_5.m_Origin.x = (ray->m_Origin).x;
      RStack_5.m_Origin.y = (ray->m_Origin).y;
      RStack_5._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
      RStack_5.m_Direction.y = (ray->m_Direction).y;
      RStack_5.m_Direction.z = (ray->m_Direction).z;
      pGVar4 = SceneTree::SceneTree_RaycastMeshObject
                         (this_00,&RStack_5,meshObject,(MethodInfo *)0x0);
      return pGVar4;
    }
    goto code_?;
  }
  if (meshObject == (GameObject *)0x0) goto code_?;
  pCVar6 = (Collider *)
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                     (meshObject,
                      UnityEngine__MeshCollider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshCollider>__
                     );
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (Collider *)0x0;
  if (pCVar6 != (Collider *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pCVar6->fields)._._.m_CachedPtr != (void *)0x0) {
      this_01 = pCVar6;
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this_01 != (Collider *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((this_01->fields)._._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  this_01 = (Collider *)
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                      (meshObject,
                       UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                      );
code_?:
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this_01 != (Collider *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((this_01->fields)._._.m_CachedPtr != (void *)0x0) {
      RStack_5.m_Origin.x = (ray->m_Origin).x;
      RStack_5.m_Origin.y = (ray->m_Origin).y;
      RStack_5._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
      RStack_5.m_Direction.y = (ray->m_Direction).y;
      RStack_5.m_Direction.z = (ray->m_Direction).z;
      bVar7 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_Raycast_1
                        (this_01,&RStack_5,&RStack_1,_UNK_?,(MethodInfo *)0x0);
      if (bVar7 != 0) {
        pGVar4 = (GameObjectRayHit *)FUN_?(TypeInfo__RTG__GameObjectRayHit);
        RStack_8.m_Collider = RStack_1.m_Collider;
        RStack_8.m_Point.x = RStack_1.m_Point.x;
        RStack_8.m_Point.y = RStack_1.m_Point.y;
        RStack_8.m_Point.z = RStack_1.m_Point.z;
        RStack_8.m_Normal.x = RStack_1.m_Normal.x;
        RStack_8.m_UV = RStack_1.m_UV;
        RStack_5.m_Origin.x = (ray->m_Origin).x;
        RStack_5.m_Origin.y = (ray->m_Origin).y;
        RStack_5._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
        RStack_8.m_Normal.y = RStack_1.m_Normal.y;
        RStack_8.m_Normal.z = RStack_1.m_Normal.z;
        RStack_8.m_FaceID = RStack_1.m_FaceID;
        RStack_8.m_Distance = RStack_1.m_Distance;
        RStack_5.m_Direction.y = (ray->m_Direction).y;
        RStack_5.m_Direction.z = (ray->m_Direction).z;
        GameObjectRayHit::GameObjectRayHit__ctor(pGVar4,&RStack_5,&RStack_8,(MethodInfo *)0x0);
        return pGVar4;
      }
    }
  }
  return (GameObjectRayHit *)0x0;
}


/* GameObjectRayHit RaycastMeshObjectReverseIfFail(Ray, GameObject) */

GameObjectRayHit *
Assembly-CSharp.dll::RTG::RTScene::RTScene_RaycastMeshObjectReverseIfFail
          (RTScene *this,Ray *ray,GameObject *meshObject,MethodInfo *method)

{
  aRStack_1[0].m_Origin.x = (ray->m_Origin).x;
  aRStack_1[0].m_Origin.y = (ray->m_Origin).y;
  aRStack_1[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  aRStack_1[0].m_Direction.y = (ray->m_Direction).y;
  aRStack_1[0].m_Direction.z = (ray->m_Direction).z;
  pGVar2 = RTScene_RaycastMeshObject(this,aRStack_1,meshObject,(MethodInfo *)0x0);
  if (pGVar2 == (GameObjectRayHit *)0x0) {
    uVar3 = (ray->m_Direction).x;
    uVar4 = (ray->m_Direction).y;
    fVar5 = (float)(uVar3 ^ _UNK_?);
    fVar6 = (float)(uVar4 ^ _UNK_?);
    fVar7 = (float)((uint)(ray->m_Direction).z ^ _UNK_?);
    aRStack_1[0].m_Origin.x = (ray->m_Origin).x;
    aRStack_1[0].m_Origin.y = (ray->m_Origin).y;
    uStack_8 = CONCAT44(fVar6,fVar5);
    aRStack_1[0].m_Origin.z = (ray->m_Origin).z;
    fStack_9 = fVar7;
    fVar10 = (float)FUN_?(&uStack_8);
    if (_UNK_? < fVar10) {
      fVar7 = fVar7 / fVar10;
      uStack_8 = CONCAT44(fVar6 / fVar10,fVar5 / fVar10);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_8._0_4_ = (pVVar11->zeroVector).x;
      uStack_8._4_4_ = (pVVar11->zeroVector).y;
      fVar7 = (pVVar11->zeroVector).z;
    }
    fVar10 = (float)aRStack_1[0]._8_8_;
    aRStack_1[0].m_Direction.x = (float)uStack_8;
    aRStack_1[0].m_Origin.z = fVar10;
    aRStack_1[0].m_Direction.z = fVar7;
    aRStack_1[0].m_Direction.y = uStack_8._4_4_;
    pGVar2 = RTScene_RaycastMeshObject(this,aRStack_1,meshObject,(MethodInfo *)0x0);
  }
  return pGVar2;
}


/* XZGridRayHit RaycastSceneGridIfVisible(Ray) */

XZGridRayHit *
Assembly-CSharp.dll::RTG::RTScene::RTScene_RaycastSceneGridIfVisible
          (RTScene *this,Ray *ray,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTSceneGrid>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTSceneGrid>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__XZGridRayHit);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  afStackX_20[0] = 0.0;
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTSceneGrid>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTSceneGrid>__get_Get__);
  if ((pOVar1 != (Object *)0x0) && (pOVar1[2].monitor != (MonitorData *)0x0)) {
    if (pOVar1[2].monitor[0x28] == (MonitorData)0x0) {
      return (XZGridRayHit *)0x0;
    }
    if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTSceneGrid>->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_00 = (RTSceneGrid *)
              MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                        (MethodInfo__RTG__MonoSingleton<RTG::RTSceneGrid>__get_Get__);
    if (this_00 != (RTSceneGrid *)0x0) {
      pPVar2 = RTSceneGrid::RTSceneGrid_get_WorldPlane(&PStack_3,this_00,(MethodInfo *)0x0);
      aRStack_4[0].m_Origin.x = (ray->m_Origin).x;
      aRStack_4[0].m_Origin.y = (ray->m_Origin).y;
      aRStack_4[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
      PStack_3.m_Normal.x = (pPVar2->m_Normal).x;
      PStack_3.m_Normal.y = (pPVar2->m_Normal).y;
      PStack_3._8_8_ = *(undefined8 *)&(pPVar2->m_Normal).z;
      aRStack_4[0].m_Direction.y = (ray->m_Direction).y;
      aRStack_4[0].m_Direction.z = (ray->m_Direction).z;
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                        (&PStack_3,aRStack_4,afStackX_20,in_R9);
      if (bVar5 == 0) {
        return (XZGridRayHit *)0x0;
      }
      if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTSceneGrid>->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                         (MethodInfo__RTG__MonoSingleton<RTG::RTSceneGrid>__get_Get__);
      hitEnter = afStackX_20[0];
      uVar6 = (ray->m_Direction).x;
      uVar7 = (ray->m_Direction).y;
      PStack_3.m_Normal.x = (ray->m_Origin).x;
      PStack_3.m_Normal.y = (ray->m_Origin).y;
      if ((pOVar1 != (Object *)0x0) && (pMVar8 = pOVar1[2].monitor, pMVar8 != (MonitorData *)0x0)) {
        PStack_3.m_Normal.z = (ray->m_Direction).z * afStackX_20[0] + (ray->m_Origin).z;
        PStack_3.m_Normal.y = (float)uVar7 * afStackX_20[0] + PStack_3.m_Normal.y;
        PStack_3.m_Normal.x = (float)uVar6 * afStackX_20[0] + PStack_3.m_Normal.x;
        hitCell = XZGridCell::XZGridCell_FromPoint
                            (&PStack_3.m_Normal,*(float *)(pMVar8 + 0x2c),*(float *)(pMVar8 + 0x30)
                             ,(IXZGrid *)pOVar1,(MethodInfo *)0x0);
        pXVar9 = (XZGridRayHit *)FUN_?(TypeInfo__RTG__XZGridRayHit);
        aRStack_4[0].m_Origin.x = (ray->m_Origin).x;
        aRStack_4[0].m_Origin.y = (ray->m_Origin).y;
        aRStack_4[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
        aRStack_4[0].m_Direction.y = (ray->m_Direction).y;
        aRStack_4[0].m_Direction.z = (ray->m_Direction).z;
        XZGridRayHit::XZGridRayHit__ctor(pXVar9,aRStack_4,hitCell,hitEnter,(MethodInfo *)0x0);
        return pXVar9;
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  pXVar9 = (XZGridRayHit *)(*pcVar10)();
  return pXVar9;
}


/* GameObjectRayHit RaycastSpriteObject(Ray, GameObject) */

GameObjectRayHit *
Assembly-CSharp.dll::RTG::RTScene::RTScene_RaycastSpriteObject
          (RTScene *this,Ray *ray,GameObject *spriteObject,MethodInfo *method)

{
  this_00 = (this->fields)._sceneTree;
  if (this_00 != (SceneTree *)0x0) {
    RStack_1.m_Origin.x = (ray->m_Origin).x;
    RStack_1.m_Origin.y = (ray->m_Origin).y;
    RStack_1._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
    RStack_1.m_Direction.y = (ray->m_Direction).y;
    RStack_1.m_Direction.z = (ray->m_Direction).z;
    pGVar2 = SceneTree::SceneTree_RaycastSpriteObject
                       (this_00,&RStack_1,spriteObject,(MethodInfo *)0x0);
    return pGVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pGVar2 = (GameObjectRayHit *)(*pcVar3)();
  return pGVar2;
}


/* Void RegisterHoverableSceneEntityContainer(IHoverableSceneEntityContainer) */

void Assembly-CSharp.dll::RTG::RTScene::RTScene_RegisterHoverableSceneEntityContainer
               (RTScene *this,IHoverableSceneEntityContainer *container,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::IHoverableSceneEntityContainer>__Add_RTG__IHoverableSceneEntityContainer_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::IHoverableSceneEntityContainer>__Contains_RTG__IHoverableSceneEntityContainer_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._hoverableSceneEntityContainers;
  if (pLVar1 != (List_1_RTG_IHoverableSceneEntityContainer_ *)0x0) {
    if (((pLVar1->fields)._size != 0) &&
       (iVar2 = mscorlib.dll::System::Array::Array_IndexOf_69
                          ((Object__Array *)(pLVar1->fields)._items,(Object *)container,0,
                           (pLVar1->fields)._size,
                           (MethodInfo__System__Collections__Generic__List<RTG::IHoverableSceneEntityContainer>__Contains_RTG__IHoverableSceneEntityContainer_
                            ->klass->rgctx_data[0x17].method)->klass->rgctx_data[0x27].method),
       iVar2 != -1)) {
      return;
    }
    pMVar3 = 
    MethodInfo__System__Collections__Generic__List<RTG::IHoverableSceneEntityContainer>__Add_RTG__IHoverableSceneEntityContainer_
    ;
    this_00 = (List_1_System_Object_ *)(this->fields)._hoverableSceneEntityContainers;
    if (this_00 != (List_1_System_Object_ *)0x0) {
      piVar4 = &(this_00->fields)._version;
      *piVar4 = *piVar4 + 1;
      pOVar5 = (this_00->fields)._items;
      if (pOVar5 != (Object__Array *)0x0) {
        uVar6 = (this_00->fields)._size;
        if ((uint)pOVar5->max_length <= uVar6) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddWithResize
                    (this_00,(Object *)container,pMVar3->klass->rgctx_data[0xe].method);
          return;
        }
        (this_00->fields)._size = uVar6 + 1;
        if (uVar6 < (uint)pOVar5->max_length) {
          bVar7 = iRam_? != 0;
          pOVar5->vector[(int)uVar6] = (Object *)container;
          if (bVar7) {
            uVar6 = (uint)((ulonglong)(pOVar5->vector + (int)uVar6) >> 0xc);
            puVar8 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar9 = *puVar8;
              LOCK();
              uVar10 = *puVar8;
              if (uVar9 == uVar10) {
                *puVar8 = uVar9 | 1L << (uVar6 & 0x3f);
              }
              UNLOCK();
            } while (uVar9 != uVar10);
          }
          return;
        }
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SetRootObjectIgnored(GameObject, Boolean) */

void Assembly-CSharp.dll::RTG::RTScene::RTScene_SetRootObjectIgnored
               (RTScene *this,GameObject *root,bool ignored,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Remove_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._settings;
  if (pSVar1 == (SceneSettings *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pSVar1->fields)._physicsMode != 2) {
    return;
  }
  this_00 = (this->fields)._ignoredRootObjects;
  if (this_00 == (HashSet_1_UnityEngine_GameObject_ *)0x0) goto code_?;
  if (ignored == 0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__Remove
              ((HashSet_1_System_Object_ *)this_00,(Object *)root,
               MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Remove_UnityEngine__GameObject_
              );
    return;
  }
  pMVar3 = MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
           ->klass->rgctx_data[0x15].method;
  if ((this_00->fields)._buckets == (Int32__Array *)0x0) {
    FUN_?(this_00,0);
  }
  iVar4 = 0;
  if (root == (GameObject *)0x0) {
    uVar5 = 0;
  }
  else {
    pIVar6 = (IEqualityComparer_1_System_Object_ *)(this_00->fields)._comparer;
    if (pIVar6 == (IEqualityComparer_1_System_Object_ *)0x0) goto code_?;
    pvVar7 = (pMVar3->klass->rgctx_data[0x16].method)->klass->rgctx_data[4].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar7 + 0x135) & 1) == 0) {
      pvVar7 = (void *)FUN_?(pvVar7);
    }
    uVar5 = FUN_?(1,pvVar7,pIVar6,root);
    uVar5 = uVar5 & 0x7fffffff;
  }
  pIVar8 = (this_00->fields)._buckets;
  if (pIVar8 == (Int32__Array *)0x0) goto code_?;
  pHVar9 = (this_00->fields)._slots;
  uVar10 = (int)uVar5 % (int)pIVar8->max_length;
  if (uVar10 < (uint)pIVar8->max_length) {
    uVar11 = pIVar8->vector[(int)uVar10] - 1;
    if (-1 < (int)uVar11) {
      if (pHVar9 == (HashSet_1_T_Slot_UnityEngine_GameObject___Array *)0x0)
      goto code_?;
      do {
        if ((uint)pHVar9->max_length <= uVar11) goto code_?;
        if (pHVar9->vector[(int)uVar11].hashCode == uVar5) {
          pIVar6 = (IEqualityComparer_1_System_Object_ *)(this_00->fields)._comparer;
          pGVar12 = pHVar9->vector[(int)uVar11].value;
          if (pIVar6 == (IEqualityComparer_1_System_Object_ *)0x0) goto code_?;
          pvVar7 = pMVar3->klass->rgctx_data[4].rgctxDataDummy;
          if ((*(byte *)((longlong)pvVar7 + 0x135) & 1) == 0) {
            pvVar7 = (void *)FUN_?(pvVar7);
          }
          cVar13 = FUN_?(0,pvVar7,pIVar6,pGVar12,root);
          if (cVar13 != '\0') {
            return;
          }
        }
        if ((int)pHVar9->max_length <= iVar4) {
          uVar14 = func_?(&TypeInfo__System__InvalidOperationException);
          this_01 = (ProtocolViolationException *)func_?(uVar14);
          pSVar15 = (String *)func_?(&StringLiteral_Operations_that_change_non_concu);
          System.dll::System::Net::ProtocolViolationException::ProtocolViolationException__ctor_1
                    (this_01,pSVar15,(MethodInfo *)0x0);
          FUN_?(this_01,pMVar3);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar4 = iVar4 + 1;
        if ((uint)pHVar9->max_length <= uVar11) goto code_?;
        uVar11 = pHVar9->vector[(int)uVar11].next;
      } while (-1 < (int)uVar11);
    }
    if ((this_00->fields)._freeList < 0) {
      if (pHVar9 == (HashSet_1_T_Slot_UnityEngine_GameObject___Array *)0x0)
      goto code_?;
      if ((this_00->fields)._lastIndex == (int)pHVar9->max_length) {
        pMVar3 = pMVar3->klass->rgctx_data[0x2b].method;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Collections__HashHelpers);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        iVar16 = (this_00->fields)._count;
        if (*(int *)&(TypeInfo__System__Collections__HashHelpers->_1).field_0x1c == 0) {
          FUN_?();
        }
        iVar16 = mscorlib.dll::System::Collections::HashHelpers::HashHelpers_1_ExpandPrime
                           (iVar16,(MethodInfo *)0x0);
        if (iVar16 <= (this_00->fields)._count) {
          uVar14 = func_?(&TypeInfo__System__ArgumentException);
          this_02 = (InvalidEnumArgumentException *)func_?(uVar14);
          pSVar15 = (String *)func_?(&StringLiteral_HashSet_capacity_is_too_big_);
          System.dll::System::ComponentModel::InvalidEnumArgumentException::
          InvalidEnumArgumentException__ctor_1(this_02,pSVar15,(MethodInfo *)0x0);
          FUN_?(this_02,pMVar3);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
        HashSet_1_System_Object__SetCapacity
                  ((HashSet_1_System_Object_ *)this_00,iVar16,pMVar3->klass->rgctx_data[0x2a].method
                  );
        pIVar8 = (this_00->fields)._buckets;
        pHVar9 = (this_00->fields)._slots;
        if (pIVar8 == (Int32__Array *)0x0) goto code_?;
        uVar10 = (int)uVar5 % (int)pIVar8->max_length;
      }
      uVar11 = (this_00->fields)._lastIndex;
      piVar17 = &(this_00->fields)._lastIndex;
      *piVar17 = *piVar17 + 1;
      if (pHVar9 == (HashSet_1_T_Slot_UnityEngine_GameObject___Array *)0x0)
      goto code_?;
    }
    else {
      uVar11 = (this_00->fields)._freeList;
      if (pHVar9 == (HashSet_1_T_Slot_UnityEngine_GameObject___Array *)0x0)
      goto code_?;
      if ((uint)pHVar9->max_length <= uVar11) goto code_?;
      (this_00->fields)._freeList = pHVar9->vector[(int)uVar11].next;
    }
    if (((uVar11 < (uint)pHVar9->max_length) &&
        (pHVar9->vector[(int)uVar11].hashCode = uVar5, uVar11 < (uint)pHVar9->max_length)) &&
       (pHVar9->vector[(int)uVar11].value = root, uVar11 < (uint)pHVar9->max_length)) {
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)&pHVar9->vector[(int)uVar11].value >> 0xc);
        puVar18 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar19 = *puVar18;
          LOCK();
          uVar20 = *puVar18;
          if (uVar19 == uVar20) {
            *puVar18 = uVar19 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (uVar19 != uVar20);
      }
      pIVar8 = (this_00->fields)._buckets;
      if (pIVar8 == (Int32__Array *)0x0) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((uVar10 < (uint)pIVar8->max_length) && (uVar11 < (uint)pHVar9->max_length)) {
        pHVar9->vector[(int)uVar11].next = pIVar8->vector[(int)uVar10] + -1;
        pIVar8 = (this_00->fields)._buckets;
        if (pIVar8 == (Int32__Array *)0x0) goto code_?;
        if (uVar10 < (uint)pIVar8->max_length) {
          pIVar8->vector[(int)uVar10] = uVar11 + 1;
          piVar17 = &(this_00->fields)._count;
          *piVar17 = *piVar17 + 1;
          piVar17 = &(this_00->fields)._version;
          *piVar17 = *piVar17 + 1;
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update_SystemCall() */

void Assembly-CSharp.dll::RTG::RTScene::RTScene_Update_SystemCall(RTScene *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GameObjectEx);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Contains_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Capacity__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__set_Capacity_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._settings;
  if (pSVar1 == (SceneSettings *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pSVar1->fields)._physicsMode == 2) {
    if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    SVar3 = UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
            SceneManager_GetActiveScene((MethodInfo *)0x0);
    pcVar2 = pcRam_?;
    aSStackX_8[0] = SVar3;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    iVar5 = (*pcRam_?)(SVar3.m_Handle);
    pLVar6 = (this->fields)._rootGameObjectsBuffer;
    if ((pLVar6 == (List_1_UnityEngine_GameObject_ *)0x0) ||
       (pGVar7 = (pLVar6->fields)._items, pGVar7 == (GameObject__Array *)0x0))
    goto code_?;
    if ((int)pGVar7->max_length <= iVar5) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
      RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
      List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__set_Capacity
                ((List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                  *)(this->fields)._rootGameObjectsBuffer,iVar5 + 100,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__set_Capacity_int_
                );
    }
    UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::Scene::Scene_GetRootGameObjects
              (aSStackX_8,(this->fields)._rootGameObjectsBuffer,(MethodInfo *)0x0);
    uVar8 = 0;
    if (0 < iVar5) {
      lVar9 = 0;
      lVar10 = 0x20;
      do {
        pLVar6 = (this->fields)._rootGameObjectsBuffer;
        if (pLVar6 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
        if ((uint)(pLVar6->fields)._size <= uVar8) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pGVar7 = (pLVar6->fields)._items;
        if (pGVar7 == (GameObject__Array *)0x0) goto code_?;
        if ((uint)pGVar7->max_length <= uVar8) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = (this->fields)._ignoredRootObjects;
        if (this_00 == (HashSet_1_UnityEngine_GameObject_ *)0x0) goto code_?;
        pGVar11 = *(GameObject **)((longlong)pGVar7->vector + lVar10 + -0x20);
        bVar12 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
                HashSet_1_System_Object__Contains
                          ((HashSet_1_System_Object_ *)this_00,(Object *)pGVar11,
                           MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Contains_UnityEngine__GameObject_
                          );
        if (bVar12 == 0) {
          pLVar6 = (this->fields)._childrenAndSelfBuffer;
          if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
            FUN_?();
          }
          GameObjectEx::GameObjectEx_GetAllChildrenAndSelf_1(pGVar11,pLVar6,(MethodInfo *)0x0);
          pLVar6 = (this->fields)._childrenAndSelfBuffer;
          if (pLVar6 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
          iVar13 = (pLVar6->fields)._size;
          iVar14 = 0;
          if (0 < iVar13) {
            do {
              pLVar6 = (this->fields)._childrenAndSelfBuffer;
              if (pLVar6 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
              pGVar11 = (GameObject *)FUN_?(pLVar6,iVar14);
              pSVar15 = (this->fields)._sceneTree;
              if (pSVar15 == (SceneTree *)0x0) goto code_?;
              bVar12 = SceneTree::SceneTree_IsObjectRegistered(pSVar15,pGVar11,(MethodInfo *)0x0);
              if (bVar12 == 0) {
                pSVar15 = (this->fields)._sceneTree;
                if (pSVar15 == (SceneTree *)0x0) goto code_?;
                SceneTree::SceneTree_RegisterObject(pSVar15,pGVar11,(MethodInfo *)0x0);
              }
              else {
                if ((pGVar11 == (GameObject *)0x0) ||
                   (this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_get_transform(pGVar11,(MethodInfo *)0x0),
                   this_01 == (Transform *)0x0)) goto code_?;
                bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_hasChanged
                                  (this_01,(MethodInfo *)0x0);
                if (bVar12 != 0) {
                  pSVar15 = (this->fields)._sceneTree;
                  if (pSVar15 == (SceneTree *)0x0) goto code_?;
                  SceneTree::SceneTree_OnObjectTransformChanged(pSVar15,this_01,(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_hasChanged
                            (this_01,0,(MethodInfo *)0x0);
                }
              }
              iVar14 = iVar14 + 1;
            } while (iVar14 < iVar13);
          }
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 8;
      } while (lVar9 < iVar5);
    }
  }
  return;
}


/* RTScene() */

void Assembly-CSharp.dll::RTG::RTScene::RTScene__ctor(RTScene *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__HashSet__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::IHoverableSceneEntityContainer>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::IHoverableSceneEntityContainer>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTScene>__MonoSingleton__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__SceneSettings);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__SceneTree);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (SceneSettings *)FUN_?(TypeInfo__RTG__SceneSettings);
  (this_00->fields)._physicsMode = 2;
  Settings::Settings__ctor((Settings *)this_00,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._settings = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._settings >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_01 = (List_1_RTG_IHoverableSceneEntityContainer_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<RTG::IHoverableSceneEntityContainer>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<RTG::IHoverableSceneEntityContainer>__List__
            );
  bVar1 = iRam_? != 0;
  (this->fields)._hoverableSceneEntityContainers = this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._hoverableSceneEntityContainers >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_02 = (SceneTree *)FUN_?(TypeInfo__RTG__SceneTree);
  SceneTree::SceneTree__ctor(this_02,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._sceneTree = this_02;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._sceneTree >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_03 = (HashSet_1_UnityEngine_GameObject_ *)
            FUN_?(TypeInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
  HashSet_1_System_Object___ctor
            ((HashSet_1_System_Object_ *)this_03,
             MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__HashSet__);
  bVar1 = iRam_? != 0;
  (this->fields)._ignoredRootObjects = this_03;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._ignoredRootObjects >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pLVar6 = (List_1_UnityEngine_GameObject_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  pvVar7 = MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_int_->klass
           ->rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar7 + 0x135) & 1) == 0) {
    pvVar7 = (void *)FUN_?(pvVar7);
  }
  pGVar8 = (GameObject__Array *)FUN_?(pvVar7,100);
  (pLVar6->fields)._items = pGVar8;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&pLVar6->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  iVar9 = iRam_?;
  (this->fields)._childrenAndSelfBuffer = pLVar6;
  if (iVar9 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._childrenAndSelfBuffer >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pLVar6 = (List_1_UnityEngine_GameObject_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar6,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  bVar1 = iRam_? != 0;
  (this->fields)._rootGameObjectsBuffer = pLVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._rootGameObjectsBuffer >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_04 = (List_1_RTG_GameObjectRayHit_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_04,
             MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__List__);
  bVar1 = iRam_? != 0;
  (this->fields)._objectHitBuffer = this_04;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._objectHitBuffer >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTScene>->_1).field_0x1c == 0) {
    FUN_?();
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


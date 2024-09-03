
/* AABB CalculateBounds() */

AABB * Assembly-CSharp.dll::RTG::RTScene::RTScene_CalculateBounds
                 (AABB *__return_storage_ptr__,RTScene *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff34;
  method_00 = in_stack_5;
  puVar6 = &stack0xffffff34;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                   );
    func_?(&TypeInfo__RTG__GameObjectEx);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    func_?(&TypeInfo__RTG__ObjectBounds);
    func_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
    cRam_? = '\x01';
    method_00 = in_stack_5;
    puVar6 = puStack_4;
  }
  puStack_4 = puVar6;
  auStack_7._0_4_ = (Object__Class *)0x0;
  auStack_7._4_4_ = (MonitorData *)0x0;
  auStack_7._8_4_ = (InvokerMethod)0x0;
  auStack_7._12_2_ = 0;
  auStack_7._14_2_ = 0;
  LStack_8._list = (List_1_System_Object_ *)0x0;
  LStack_8._index = 0;
  LStack_8._version = 0;
  LStack_8._current = (Object *)0x0;
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  (__return_storage_ptr__->_size).z = 0.0;
  (__return_storage_ptr__->_center).x = 0.0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  if ((TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__SceneManagement__SceneManager);
  }
  auStack_7._36_4_ =
       UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
       SceneManager_GetActiveScene((MethodInfo *)0x0);
  capacity = UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::Scene::Scene_get_rootCount
                       ((Scene *)(auStack_7 + 0x24),(MethodInfo *)0x0);
  if (capacity < 10) {
    capacity = 10;
  }
  this_00 = (RegexCharClass_SingleRange)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  RStack_9 = this_00;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            ((List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
              *)this_00,capacity,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_int_);
  auStack_7._32_4_ =
       UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
       SceneManager_GetActiveScene((MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::Scene::Scene_GetRootGameObjects_1
            ((Scene *)(auStack_7 + 0x20),(List_1_UnityEngine_GameObject_ *)this_00,
             (MethodInfo *)0x0);
  auStack_7._16_4_ = (Il2CppClass *)0x0;
  auStack_7._20_4_ = (Il2CppType *)0x0;
  auStack_7._24_4_ = (Il2CppType **)0x0;
  auStack_7._28_4_ = (Il2CppRGCTXData *)0x0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  auStack_7._16_4_ = (Il2CppClass *)0x5;
  pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
  auStack_7._20_4_ = (pVVar10->zeroVector).x;
  auStack_7._24_4_ = (pVVar10->zeroVector).y;
  auStack_7._28_4_ = (pVVar10->zeroVector).z;
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  (__return_storage_ptr__->_size).z = 0.0;
  (__return_storage_ptr__->_center).x = 0.0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  if (this_00 != (RegexCharClass_SingleRange)0x0) {
    pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                          *)&stack0xffffff88,
                         (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         this_00,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                        );
    uVar12 = auStack_7._28_4_;
    uStack_13 = 0;
    auStack_7._0_4_ = pLVar11->_list;
    auStack_7._4_4_ = pLVar11->_index;
    auStack_7._8_4_ = pLVar11->_version;
    auStack_7._12_4_ = pLVar11->_current;
    pOStack_14 = (Object *)auStack_7;
    uVar15 = auStack_7._20_4_;
    uVar16 = auStack_7._24_4_;
    uStack_1 = 0;
    pIVar17 = (Il2CppClass *)auStack_7._16_4_;
    while( true ) {
      uStack_1 = CONCAT31(uStack_1._1_3_,1);
      method_01 = (MethodInfo *)auStack_7;
      bVar18 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
               List_1_T_Enumerator_System_Object__MoveNext
                         ((List_1_T_Enumerator_System_Object_ *)method_01,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                         );
      uVar19 = auStack_7._12_4_;
      if (bVar18 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  (pOStack_14,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                   ,method_00);
        *unaff_FS_OFFSET = uStack_3;
        return __return_storage_ptr__;
      }
      if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                GameObjectEx::GameObjectEx_GetAllChildrenAndSelf
                          ((GameObject *)uVar19,(MethodInfo *)0x0);
      if (this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      break;
      pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                          ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                            *)&stack0xffffff5c,this_01,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                          );
      auStack_7._40_2_ = 0;
      auStack_7._42_2_ = 0;
      LStack_8._list = (List_1_System_Object_ *)pLVar11->_list;
      LStack_8._index = pLVar11->_index;
      LStack_8._version = pLVar11->_version;
      LStack_8._current = *(Object **)&pLVar11->_current;
      uStack_1._0_1_ = 3;
      auStack_7._44_4_ = &LStack_8;
      while( true ) {
        bVar18 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                 List_1_T_Enumerator_System_Object__MoveNext
                           (&LStack_8,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                           );
        if (bVar18 == 0) break;
        RStack_9 = (RegexCharClass_SingleRange)LStack_8._current;
        if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        queryConfig.NoVolumeSize.x = (float)uVar15;
        queryConfig.ObjectTypes = (int32_t)pIVar17;
        queryConfig.NoVolumeSize.y = (float)uVar16;
        queryConfig.NoVolumeSize.z = (float)uVar12;
        pAVar20 = ObjectBounds::ObjectBounds_CalcWorldAABB
                            ((AABB *)&stack0xffffff40,(GameObject *)RStack_9,queryConfig,
                             (MethodInfo *)0x0);
        pMVar21 = (MethodInfo *)(pAVar20->_size).y;
        uVar19 = *(undefined4 *)&pAVar20->_isValid;
        method_00 = (MethodInfo *)(pAVar20->_center).z;
        method_01 = pMVar21;
        if ((char)uVar19 != '\0') {
          method_01 = (MethodInfo *)(pAVar20->_size).y;
          fVar22 = (pAVar20->_size).z;
          fVar23 = (pAVar20->_center).x;
          uVar24 = (pAVar20->_size).x;
          uVar25 = (pAVar20->_size).y;
          uVar26 = (pAVar20->_size).z;
          aabb._size.z = (float)uVar26;
          aabb._size.y = (float)uVar25;
          aabb._size.x = (float)uVar24;
          uVar27 = (pAVar20->_center).x;
          aabb._center.x = (float)uVar27;
          if (__return_storage_ptr__->_isValid == 0) {
            fVar28 = (pAVar20->_center).y;
            fVar29 = (pAVar20->_center).z;
            (__return_storage_ptr__->_size).x = (pAVar20->_size).x;
            (__return_storage_ptr__->_size).y = (float)method_01;
            (__return_storage_ptr__->_size).z = fVar22;
            (__return_storage_ptr__->_center).x = fVar23;
            (__return_storage_ptr__->_center).y = fVar28;
            (__return_storage_ptr__->_center).z = fVar29;
            *(undefined4 *)&__return_storage_ptr__->_isValid = uVar19;
            method_01 = pMVar21;
          }
          else {
            pIVar17 = (Il2CppClass *)0x0;
            uVar30 = (pAVar20->_center).y;
            pMVar21 = (MethodInfo *)(pAVar20->_center).z;
            aabb._center.y = (float)uVar30;
            aabb._center.z = (float)pMVar21;
            aabb._isValid = pAVar20->_isValid;
            aabb._25_3_ = *(undefined3 *)&pAVar20->field_0x19;
            AABB::AABB_Encapsulate_2(__return_storage_ptr__,aabb,(MethodInfo *)0x0);
            method_00 = pMVar21;
          }
        }
      }
      uStack_1 = CONCAT31(uStack_1._1_3_,1);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&LStack_8,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                 ,method_01);
    }
  }
  func_?();
  func_?();
  pcVar31 = (code *)swi(3);
  pAVar20 = (AABB *)(*pcVar31)();
  return pAVar20;
}


/* List`1[UnityEngine.EventSystems.RaycastResult] GetHoveredUIElements() */

List_1_UnityEngine_EventSystems_RaycastResult_ *
Assembly-CSharp.dll::RTG::RTScene::RTScene_GetHoveredUIElements(RTScene *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__EventSystem);
    func_?(&TypeInfo__RTG__IInputDevice);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::EventSystems::RaycastResult>__RemoveAll_System__Predicate<UnityEngine::EventSystems::RaycastResult>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::EventSystems::RaycastResult>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<UnityEngine::EventSystems::RaycastResult>
                   );
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__EventSystems__PointerEventData);
    func_?(&TypeInfo__System__Predicate<UnityEngine::EventSystems::RaycastResult>);
    func_?(&
                    MethodInfo__RTG__RTScene____c___GetHoveredUIElements_b__15_0_UnityEngine__EventSystems__RaycastResult_
                   );
    func_?(&TypeInfo__RTG__RTScene____c);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__EventSystem);
  }
  pEVar1 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                     ((MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pEVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar3 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                       (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    if ((pOVar3 != (Object *)0x0) && (pOVar3[2].klass != (Object__Class *)0x0)) {
      cVar4 = func_?();
      if (cVar4 == '\0') goto code_?;
      puVar5 = (undefined8 *)func_?(&stack0xffffffe4);
      uVar6 = *puVar5;
      if ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pEVar1 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                         ((MethodInfo *)0x0);
      this_00 = (PointerEventData *)func_?();
      UnityEngine.UI.dll::UnityEngine::EventSystems::PointerEventData::PointerEventData__ctor
                (this_00,pEVar1,(MethodInfo *)0x0);
      if (this_00 != (PointerEventData *)0x0) {
        (this_00->fields)._position_k__BackingField.x = (float)uVar6;
        fStack_7 = (float)((ulonglong)uVar6 >> 0x20);
        (this_00->fields)._position_k__BackingField.y = fStack_7;
        this_01 = (List_1_GameTierProgressBar_TierProgressData_ *)func_?();
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::EventSystems::RaycastResult>__List__
                  );
        pEVar1 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                           ((MethodInfo *)0x0);
        if (pEVar1 != (EventSystem *)0x0) {
          UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_RaycastAll
                    (pEVar1,this_00,(List_1_UnityEngine_EventSystems_RaycastResult_ *)this_01,
                     (MethodInfo *)0x0);
          if ((TypeInfo__RTG__RTScene____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          this_02 = TypeInfo__RTG__RTScene____c->static_fields->__9__15_0;
          if (this_02 == (Predicate_1_UnityEngine_EventSystems_RaycastResult_ *)0x0) {
            if ((TypeInfo__RTG__RTScene____c->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            object = TypeInfo__RTG__RTScene____c->static_fields->__9;
            this_02 = (Predicate_1_UnityEngine_EventSystems_RaycastResult_ *)func_?();
            mscorlib.dll::System::Predicate`1[GameTierProgressBar+TierProgressData]::
            Predicate_1_GameTierProgressBar_TierProgressData___ctor
                      ((Predicate_1_GameTierProgressBar_TierProgressData_ *)this_02,(Object *)object
                       ,
                       MethodInfo__RTG__RTScene____c___GetHoveredUIElements_b__15_0_UnityEngine__EventSystems__RaycastResult_
                       ,(MethodInfo *)0x0);
            TypeInfo__RTG__RTScene____c->static_fields->__9__15_0 = this_02;
            func_?();
          }
          if (this_01 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[GameTierProgressBar+TierProgressData]
            ::List_1_GameTierProgressBar_TierProgressData__RemoveAll
                      (this_01,(Predicate_1_GameTierProgressBar_TierProgressData_ *)this_02,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::EventSystems::RaycastResult>__RemoveAll_System__Predicate<UnityEngine::EventSystems::RaycastResult>_
                      );
            return (List_1_UnityEngine_EventSystems_RaycastResult_ *)this_01;
          }
        }
      }
    }
    func_?();
    pcVar8 = (code *)swi(3);
    pLVar9 = (List_1_UnityEngine_EventSystems_RaycastResult_ *)(*pcVar8)();
    return pLVar9;
  }
code_?:
  pLVar9 = (List_1_UnityEngine_EventSystems_RaycastResult_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar9,
             MethodInfo__System__Collections__Generic__List<UnityEngine::EventSystems::RaycastResult>__List__
            );
  return pLVar9;
}


/* GameObject[] GetSceneObjects() */

GameObject__Array *
Assembly-CSharp.dll::RTG::RTScene::RTScene_GetSceneObjects(RTScene *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__GameObject__MethodInfo__UnityEngine__Object__FindObjectsOfType<UnityEngine::GameObject>______
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pGVar1 = (GameObject__Array *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_FindObjectsOfType_2
                     (
                     UnityEngine__GameObject__MethodInfo__UnityEngine__Object__FindObjectsOfType<UnityEngine::GameObject>______
                     );
  return pGVar1;
}


/* Boolean IsAnySceneEntityHovered() */

bool Assembly-CSharp.dll::RTG::RTScene::RTScene_IsAnySceneEntityHovered
               (RTScene *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IHoverableSceneEntityContainer>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IHoverableSceneEntityContainer>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IHoverableSceneEntityContainer>__get_Current__
                   );
    func_?(&TypeInfo__RTG__IHoverableSceneEntityContainer);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::IHoverableSceneEntityContainer>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._hoverableSceneEntityContainers;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    method_01 = (MethodInfo *)&UNK_?;
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::IHoverableSceneEntityContainer>__GetEnumerator__
                       );
    LStack_6._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_6._index = pLVar7->_index;
    LStack_6._version = pLVar7->_version;
    LStack_6._current = *(Object **)&pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&LStack_6;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IHoverableSceneEntityContainer>__MoveNext__
                        );
      if (bVar9 == 0) break;
      if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
      goto code_?;
      method_00 = TypeInfo__RTG__IHoverableSceneEntityContainer;
      cVar10 = func_?(0,TypeInfo__RTG__IHoverableSceneEntityContainer,LStack_6._current);
      if (cVar10 != '\0') {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IHoverableSceneEntityContainer>__Dispose__
                   ,(MethodInfo *)method_00);
        *unaff_FS_OFFSET = uStack_3;
        return 1;
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&LStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IHoverableSceneEntityContainer>__Dispose__
               ,method_01);
    uStack_1 = 0xffffffff;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::EventSystems::RaycastResult>__get_Count__
                     );
      cRam_? = '\x01';
    }
    pLVar11 = RTScene_GetHoveredUIElements(this,(MethodInfo *)0x0);
    if (pLVar11 != (List_1_UnityEngine_EventSystems_RaycastResult_ *)0x0) {
      iVar12 = (pLVar11->fields)._size;
      *unaff_FS_OFFSET = uStack_3;
      return iVar12 != 0;
    }
  }
code_?:
  uVar13 = func_?();
  func_?(uVar13);
  pcVar14 = (code *)swi(3);
  bVar9 = (*pcVar14)();
  return bVar9;
}


/* Boolean IsAnyUIElementHovered() */

bool Assembly-CSharp.dll::RTG::RTScene::RTScene_IsAnyUIElementHovered
               (RTScene *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pLVar1 = RTScene_GetHoveredUIElements(this,(MethodInfo *)0x0);
  if (pLVar1 != (List_1_UnityEngine_EventSystems_RaycastResult_ *)0x0) {
    return (pLVar1->fields)._size != 0;
  }
  uVar2 = func_?(&stack0xfffffff8);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void OnGameObjectWillBeDestroyed(GameObject) */

void Assembly-CSharp.dll::RTG::RTScene::RTScene_OnGameObjectWillBeDestroyed
               (RTScene *this,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GameObjectEx);
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Contains_UnityEngine__GameObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._settings;
  if (pSVar1 == (SceneSettings *)0x0) {
code_?:
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pSVar1->fields)._physicsMode == 2) {
    this_00 = (this->fields)._ignoredRootObjects;
    if (this_00 == (HashSet_1_UnityEngine_GameObject_ *)0x0) goto code_?;
    bVar3 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
            HashSet_1_System_Object__Contains
                      ((HashSet_1_System_Object_ *)this_00,(Object *)gameObject,
                       MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Contains_UnityEngine__GameObject_
                      );
    if (bVar3 == 0) {
      pLVar4 = (this->fields)._childrenAndSelfBuffer;
      if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__GameObjectEx);
      }
      GameObjectEx::GameObjectEx_GetAllChildrenAndSelf_1(gameObject,pLVar4,(MethodInfo *)0x0);
      pLVar4 = (this->fields)._childrenAndSelfBuffer;
      if (pLVar4 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
      index = 0;
      if (0 < (pLVar4->fields)._size) {
        do {
          this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    (this->fields)._childrenAndSelfBuffer;
          this_02 = (this->fields)._sceneTree;
          if ((this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
             || (gameObject_00 =
                      mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                (this_01,index,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                                ), this_02 == (SceneTree *)0x0)) goto code_?;
          SceneTree::SceneTree_UnregisterObject
                    (this_02,(GameObject *)gameObject_00,(MethodInfo *)0x0);
          index = index + 1;
        } while (index < 0xADDR);
      }
    }
  }
  return;
}


/* Boolean OverlapBox(OBB, List`1[UnityEngine.GameObject]) */

bool Assembly-CSharp.dll::RTG::RTScene::RTScene_OverlapBox
               (RTScene *this,OBB obb,List_1_UnityEngine_GameObject_ *gameObjects,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                   );
    func_?(&TypeInfo__UnityEngine__Physics2D);
    func_?(&TypeInfo__UnityEngine__Physics);
    cRam_? = '\x01';
  }
  AStack_1._size.x = 0.0;
  AStack_1._size.y = 0.0;
  AStack_1._size.z = 0.0;
  AStack_1._center.x = 0.0;
  AStack_1._isValid = 0;
  AStack_1._25_3_ = 0;
  AStack_1._center.y = 0.0;
  AStack_1._center.z = 0.0;
  pSVar2 = (this->fields)._settings;
  if (pSVar2 != (SceneSettings *)0x0) {
    if ((pSVar2->fields)._physicsMode == 1) {
      if (gameObjects != (List_1_UnityEngine_GameObject_ *)0x0) {
        length = (gameObjects->fields)._size;
        piVar3 = &(gameObjects->fields)._version;
        *piVar3 = *piVar3 + 1;
        (gameObjects->fields)._size = 0;
        if (0 < length) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(gameObjects->fields)._items,0,length,(MethodInfo *)0x0);
        }
        fVar4 = obb._center.z;
        VStack_5.y = obb._center.x;
        VStack_5.z = obb._center.y;
        pVVar6 = OBB::OBB_get_Extents(&VStack_7,&obb,(MethodInfo *)0x0);
        VStack_8.x = pVVar6->x;
        VStack_8.y = pVVar6->y;
        fVar9 = pVVar6->z;
        fStack_10 = obb._rotation.x;
        VStack_7.y = obb._rotation.z;
        VStack_7.x = obb._rotation.y;
        VStack_7.z = obb._rotation.w;
        fVar11 = obb._rotation.y;
        fVar12 = obb._rotation.z;
        if ((TypeInfo__UnityEngine__Physics->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Physics);
          fVar11 = VStack_7.x;
          fVar12 = VStack_7.y;
        }
        center.y = VStack_5.z;
        center.x = VStack_5.y;
        center.z = fVar4;
        halfExtents.z = fVar9;
        halfExtents.x = VStack_8.x;
        halfExtents.y = VStack_8.y;
        orientation.y = fVar11;
        orientation.x = fStack_10;
        orientation.z = fVar12;
        orientation.w = VStack_7.z;
        pCVar13 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_OverlapBox_1
                           (center,halfExtents,orientation,(MethodInfo *)0x0);
        uVar14 = 0;
        if (pCVar13 != (Collider__Array *)0x0) {
          ppCVar15 = pCVar13->vector;
          for (; (int)uVar14 < (int)pCVar13->max_length; uVar14 = uVar14 + 1) {
            if (pCVar13->max_length <= uVar14) goto code_?;
            if (*ppCVar15 == (Collider *)0x0) goto code_?;
            pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)*ppCVar15,(MethodInfo *)0x0);
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)gameObjects,(Object *)pGVar16,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                      );
            ppCVar15 = ppCVar15 + 1;
          }
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Vector3);
            cRam_? = '\x01';
          }
          uStack_17 = 0;
          VStack_8.x = 0.0;
          VStack_8.y = 0.0;
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                             (&VStack_7,
                              TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                              (MethodInfo *)0x0);
          uStack_17._0_4_ = pVVar6->x;
          uStack_17._4_4_ = pVVar6->y;
          VStack_8.x = pVVar6->z;
          VStack_8.y = 0.0;
          pLVar18 = OBB::OBB_GetCornerPoints(&obb,(MethodInfo *)0x0);
          plane.m_Normal.z = VStack_8.x;
          plane.m_Normal.x = (float)(undefined4)uStack_17;
          plane.m_Normal.y = (float)uStack_17._4_4_;
          plane.m_Distance = VStack_8.y;
          pLVar18 = PlaneEx::PlaneEx_ProjectAllPoints(plane,pLVar18,(MethodInfo *)0x0);
          AABB::AABB__ctor_2(&AStack_1,(IEnumerable_1_UnityEngine_Vector3_ *)pLVar18,
                             (MethodInfo *)0x0);
          pVVar6 = AABB::AABB_get_Min(&VStack_7,&AStack_1,(MethodInfo *)0x0);
          VStack_8.x = pVVar6->x;
          VStack_8.y = pVVar6->y;
          VStack_5.z = pVVar6->z;
          VStack_5.x = VStack_8.x;
          VStack_5.y = VStack_8.y;
          pVVar6 = AABB::AABB_get_Max(&VStack_5,&AStack_1,(MethodInfo *)0x0);
          VStack_7.x = pVVar6->x;
          VStack_7.y = pVVar6->y;
          VStack_5.y = VStack_7.x;
          VStack_5.z = VStack_7.y;
          if ((TypeInfo__UnityEngine__Physics2D->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Physics2D);
          }
          pointB.y = VStack_5.z;
          pointB.x = VStack_5.y;
          pCVar19 = UnityEngine.Physics2DModule.dll::UnityEngine::Physics2D::
                    Physics2D_OverlapAreaAll(VStack_8,pointB,(MethodInfo *)0x0);
          uVar14 = 0;
          if (pCVar19 != (Collider2D__Array *)0x0) {
            ppCVar20 = pCVar19->vector;
            while( true ) {
              if ((int)pCVar19->max_length <= (int)uVar14) {
                return (gameObjects->fields)._size != 0;
              }
              if (pCVar19->max_length <= uVar14) break;
              if (*ppCVar20 == (Collider2D *)0x0) goto code_?;
              pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)*ppCVar20,(MethodInfo *)0x0);
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Add
                        ((List_1_System_Object_ *)gameObjects,(Object *)pGVar16,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                        );
              uVar14 = uVar14 + 1;
              ppCVar20 = ppCVar20 + 1;
            }
            goto code_?;
          }
        }
      }
    }
    else {
      this_00 = (this->fields)._sceneTree;
      if (this_00 != (SceneTree *)0x0) {
        obb_00._size.y = obb._size.y;
        obb_00._size.x = obb._size.x;
        obb_00._size.z = obb._size.z;
        obb_00._center.x = obb._center.x;
        obb_00._center.y = obb._center.y;
        obb_00._center.z = obb._center.z;
        obb_00._rotation.x = obb._rotation.x;
        obb_00._rotation.y = obb._rotation.y;
        obb_00._rotation.z = obb._rotation.z;
        obb_00._rotation.w = obb._rotation.w;
        obb_00._isValid = obb._isValid;
        obb_00._41_3_ = obb._41_3_;
        bVar21 = SceneTree::SceneTree_OverlapBox(this_00,obb_00,gameObjects,(MethodInfo *)0x0);
        return bVar21;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  bVar21 = (*pcVar22)();
  return bVar21;
}


/* Boolean OverlapBox(OBB, SceneOverlapFilter, List`1[UnityEngine.GameObject]) */

bool Assembly-CSharp.dll::RTG::RTScene::RTScene_OverlapBox_1
               (RTScene *this,OBB obb,SceneOverlapFilter *overlapFilter,
               List_1_UnityEngine_GameObject_ *gameObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                   );
    cRam_? = '\x01';
  }
  RTScene_OverlapBox(this,obb,gameObjects,(MethodInfo *)0x0);
  if (overlapFilter != (SceneOverlapFilter *)0x0) {
    SceneOverlapFilter::SceneOverlapFilter_FilterOverlaps
              (overlapFilter,gameObjects,(MethodInfo *)0x0);
    if (gameObjects != (List_1_UnityEngine_GameObject_ *)0x0) {
      return (gameObjects->fields)._size != 0;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* SceneRaycastHit Raycast(Ray, SceneRaycastPrecision, SceneRaycastFilter) */

SceneRaycastHit *
Assembly-CSharp.dll::RTG::RTScene::RTScene_Raycast
          (RTScene *this,Ray ray,SceneRaycastPrecision__Enum rtRaycastPrecision,
          SceneRaycastFilter *raycastFilter,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__get_Item_int_
                   );
    func_?(&TypeInfo__RTG__SceneRaycastHit);
    cRam_? = '\x01';
  }
  hits = (this->fields)._objectHitBuffer;
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Clear__)
    ;
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__get_Count__
                   );
    cRam_? = '\x01';
  }
  if (hits == (List_1_RTG_GameObjectRayHit_ *)0x0) goto code_?;
  length = (hits->fields)._size;
  piVar1 = &(hits->fields)._version;
  *piVar1 = *piVar1 + 1;
  (hits->fields)._size = 0;
  if (0 < length) {
    mscorlib.dll::System::Array::Array_Clear
              ((Array *)(hits->fields)._items,0,length,(MethodInfo *)0x0);
  }
  fVar2 = ray.m_Direction.y;
  fVar3 = ray.m_Direction.z;
  if (raycastFilter == (SceneRaycastFilter *)0x0) {
code_?:
    RTScene_RaycastAllObjectsSorted(this,ray,rtRaycastPrecision,hits,(MethodInfo *)0x0);
    if (raycastFilter != (SceneRaycastFilter *)0x0) {
      ray.m_Direction.x = 0.0;
      ray.m_Origin.y = (float)raycastFilter;
      ray.m_Origin.x = (float)&UNK_?;
      SceneRaycastFilter::SceneRaycastFilter_FilterHits(raycastFilter,hits,(MethodInfo *)0x0);
      ray.m_Origin.z = (float)hits;
    }
  }
  else {
    pLVar4 = (raycastFilter->fields)._allowedObjectTypes;
    if (pLVar4 == (List_1_RTG_GameObjectType_ *)0x0) goto code_?;
    if ((pLVar4->fields)._size != 0) goto code_?;
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._objectHitBuffer;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    if ((this_00->fields)._size == 0) {
      item1.First = 0;
      item1.Last = 0;
    }
    else {
      item1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,0,
                         MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__get_Item_int_
                        );
    }
    ray_00.m_Origin.y = ray.m_Origin.y;
    ray_00.m_Origin.x = ray.m_Origin.x;
    ray_00.m_Origin.z = ray.m_Origin.z;
    ray_00.m_Direction.x = ray.m_Direction.x;
    ray_00.m_Direction.y = fVar2;
    ray_00.m_Direction.z = fVar3;
    item2 = RTScene_RaycastSceneGridIfVisible(this,ray_00,(MethodInfo *)0x0);
    this_01 = (Tuple_2_Object_Object_ *)func_?(TypeInfo__RTG__SceneRaycastHit);
    mscorlib.dll::System::Tuple`2[Object,Object]::Tuple_2_Object_Object___ctor
              (this_01,(Object *)item1,(Object *)item2,(MethodInfo *)0x0);
    return (SceneRaycastHit *)this_01;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pSVar6 = (SceneRaycastHit *)(*pcVar5)();
  return pSVar6;
}


/* Boolean RaycastAllObjects(Ray, SceneRaycastPrecision, List`1[RTG.GameObjectRayHit]) */

bool Assembly-CSharp.dll::RTG::RTScene::RTScene_RaycastAllObjects
               (RTScene *this,Ray ray,SceneRaycastPrecision__Enum rtRaycastPrecision,
               List_1_RTG_GameObjectRayHit_ *hits,MethodInfo *method)

{
  RVar1 = ray;
  auVar2._8_4_ = unaff_EBP;
  auVar2._4_4_ = unaff_ESI;
  auVar2._0_4_ = unaff_EDI;
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Clear__)
    ;
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__get_Count__
                   );
    func_?(&TypeInfo__UnityEngine__Physics2D);
    func_?(&TypeInfo__UnityEngine__Physics);
    cRam_? = '\x01';
  }
  pSVar3 = (this->fields)._settings;
  if (pSVar3 != (SceneSettings *)0x0) {
    if ((pSVar3->fields)._physicsMode == 1) {
      if (hits != (List_1_RTG_GameObjectRayHit_ *)0x0) {
        length = (hits->fields)._size;
        piVar4 = &(hits->fields)._version;
        *piVar4 = *piVar4 + 1;
        (hits->fields)._size = 0;
        if (0 < length) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(hits->fields)._items,0,length,(MethodInfo *)0x0);
        }
        if ((TypeInfo__UnityEngine__Physics->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Physics,auVar2);
        }
        hits3D = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_RaycastAll_6
                           (ray,3.4028235e+38,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Physics2D->_1).cctor_finished_or_no_cctor == 0) {
          ray.m_Origin.z = (float)TypeInfo__UnityEngine__Physics2D;
          ray.m_Origin.y = (float)&UNK_?;
          func_?();
        }
        ray_00.m_Origin.y = ray.m_Origin.y;
        ray_00.m_Origin.x = ray.m_Origin.x;
        ray_00.m_Origin.z = ray.m_Origin.z;
        ray_00.m_Direction = RVar1.m_Direction;
        hits2D = UnityEngine.Physics2DModule.dll::UnityEngine::Physics2D::
                 Physics2D_GetRayIntersectionAll_1(ray_00,3.4028235e+38,(MethodInfo *)0x0);
        RVar1.m_Origin.y = 3.4028235e+38;
        RVar1.m_Origin.x = ray.m_Direction.z;
        RVar1.m_Origin.z = 0.0;
        RVar1.m_Direction.x = ray.m_Direction.x;
        RVar1.m_Direction.y = ray.m_Direction.x;
        RVar1.m_Direction.z = ray.m_Direction.z;
        GameObjectRayHit::GameObjectRayHit_Store
                  (RVar1,(IEnumerable_1_UnityEngine_RaycastHit2D_ *)hits2D,
                   (IEnumerable_1_UnityEngine_RaycastHit_ *)hits3D,hits,(MethodInfo *)0x0);
        return (hits->fields)._size != 0;
      }
    }
    else {
      this_00 = (this->fields)._sceneTree;
      if (this_00 != (SceneTree *)0x0) {
        bVar5 = SceneTree::SceneTree_RaycastAll
                          (this_00,ray,rtRaycastPrecision,hits,(MethodInfo *)0x0);
        return bVar5;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Boolean RaycastAllObjectsSorted(Ray, SceneRaycastPrecision, List`1[RTG.GameObjectRayHit]) */

bool Assembly-CSharp.dll::RTG::RTScene::RTScene_RaycastAllObjectsSorted
               (RTScene *this,Ray ray,SceneRaycastPrecision__Enum raycastPresicion,
               List_1_RTG_GameObjectRayHit_ *hits,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Clear__)
    ;
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__get_Count__
                   );
    func_?(&TypeInfo__UnityEngine__Physics2D);
    func_?(&TypeInfo__UnityEngine__Physics);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._settings;
  if (pSVar1 != (SceneSettings *)0x0) {
    if ((pSVar1->fields)._physicsMode == 1) {
      if (hits == (List_1_RTG_GameObjectRayHit_ *)0x0) goto code_?;
      length = (hits->fields)._size;
      piVar2 = &(hits->fields)._version;
      *piVar2 = *piVar2 + 1;
      (hits->fields)._size = 0;
      if (0 < length) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(hits->fields)._items,0,length,(MethodInfo *)0x0);
      }
      if ((TypeInfo__UnityEngine__Physics->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Physics);
      }
      hits3D = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_RaycastAll_6
                         (ray,3.4028235e+38,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Physics2D->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Physics2D);
      }
      hits2D = UnityEngine.Physics2DModule.dll::UnityEngine::Physics2D::
               Physics2D_GetRayIntersectionAll_1(ray,3.4028235e+38,(MethodInfo *)0x0);
      GameObjectRayHit::GameObjectRayHit_Store
                (ray,(IEnumerable_1_UnityEngine_RaycastHit2D_ *)hits2D,
                 (IEnumerable_1_UnityEngine_RaycastHit_ *)hits3D,hits,(MethodInfo *)0x0);
      bVar3 = (hits->fields)._size != 0;
    }
    else {
      this_00 = (this->fields)._sceneTree;
      if (this_00 == (SceneTree *)0x0) goto code_?;
      bVar3 = SceneTree::SceneTree_RaycastAll(this_00,ray,raycastPresicion,hits,(MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Comparison<RTG::GameObjectRayHit>);
      func_?(&
                      MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Sort_System__Comparison<RTG::GameObjectRayHit>_
                     );
      func_?(&
                      MethodInfo__RTG__GameObjectRayHit____c___SortByHitDistance_b__18_0_RTG__GameObjectRayHit__RTG__GameObjectRayHit_
                     );
      func_?(&TypeInfo__RTG__GameObjectRayHit____c);
      cRam_? = '\x01';
    }
    if ((TypeInfo__RTG__GameObjectRayHit____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__GameObjectRayHit____c);
    }
    this_01 = TypeInfo__RTG__GameObjectRayHit____c->static_fields->__9__18_0;
    if (this_01 == (Comparison_1_RTG_GameObjectRayHit_ *)0x0) {
      if ((TypeInfo__RTG__GameObjectRayHit____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__GameObjectRayHit____c);
      }
      object = TypeInfo__RTG__GameObjectRayHit____c->static_fields->__9;
      this_01 = (Comparison_1_RTG_GameObjectRayHit_ *)
                func_?(TypeInfo__System__Comparison<RTG::GameObjectRayHit>);
      mscorlib.dll::System::Comparison`1[Object]::Comparison_1_Object___ctor
                ((Comparison_1_Object_ *)this_01,(Object *)object,
                 MethodInfo__RTG__GameObjectRayHit____c___SortByHitDistance_b__18_0_RTG__GameObjectRayHit__RTG__GameObjectRayHit_
                 ,(MethodInfo *)0x0);
      TypeInfo__RTG__GameObjectRayHit____c->static_fields->__9__18_0 = this_01;
      func_?(&TypeInfo__RTG__GameObjectRayHit____c->static_fields->__9__18_0,this_01);
    }
    if (hits != (List_1_RTG_GameObjectRayHit_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__Sort_1
                ((List_1_System_Object_ *)hits,(Comparison_1_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Sort_System__Comparison<RTG::GameObjectRayHit>_
                );
      return bVar3;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Boolean RaycastAllObjectsSorted(Ray, SceneRaycastPrecision, SceneRaycastFilter,
   List`1[RTG.GameObjectRayHit]) */

bool Assembly-CSharp.dll::RTG::RTScene::RTScene_RaycastAllObjectsSorted_1
               (RTScene *this,Ray ray,SceneRaycastPrecision__Enum rtRaycastPrecision,
               SceneRaycastFilter *raycastFilter,List_1_RTG_GameObjectRayHit_ *hits,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Clear__)
    ;
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__get_Count__
                   );
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
    RTScene_RaycastAllObjectsSorted(this,ray,rtRaycastPrecision,hits,(MethodInfo *)0x0);
    if (raycastFilter != (SceneRaycastFilter *)0x0) {
      SceneRaycastFilter::SceneRaycastFilter_FilterHits(raycastFilter,hits,(MethodInfo *)0x0);
    }
    return (hits->fields)._size != 0;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* GameObjectRayHit RaycastMeshObject(Ray, GameObject) */

GameObjectRayHit *
Assembly-CSharp.dll::RTG::RTScene::RTScene_RaycastMeshObject
          (RTScene *this,Ray ray,GameObject *meshObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GameObjectRayHit);
    func_?(&
                    UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                   );
    func_?(&
                    UnityEngine__MeshCollider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshCollider>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffffa8,0,0x2c);
  pSVar1 = (this->fields)._settings;
  if (pSVar1 != (SceneSettings *)0x0) {
    fVar2 = ray.m_Direction.y;
    fVar3 = ray.m_Direction.z;
    if ((pSVar1->fields)._physicsMode == 1) {
      if (meshObject != (GameObject *)0x0) {
        x = (Collider *)
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                      (meshObject,
                       UnityEngine__MeshCollider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshCollider>__
                      );
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
        this_01 = (Collider *)0x0;
        if (bVar4 != 0) {
          this_01 = x;
        }
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)this_01,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          this_01 = (Collider *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              (meshObject,
                               UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                              );
        }
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)this_01,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          if (this_01 == (Collider *)0x0) goto code_?;
          fVar5 = 0.0;
          hitInfo = (RaycastHit *)&stack0xffffffa8;
          fVar6 = ray.m_Origin.x;
          fVar7 = ray.m_Origin.y;
          bVar4 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_Raycast_1
                            (this_01,ray,hitInfo,3.4028235e+38,(MethodInfo *)0x0);
          if (bVar4 != 0) {
            puVar8 = &UNK_?;
            pGVar9 = (GameObjectRayHit *)func_?();
            hit3D.m_Point.y = fVar6;
            hit3D.m_Point.x = (float)this_01;
            hit3D.m_Point.z = fVar7;
            hit3D.m_Normal.x = (float)puVar8;
            hit3D.m_Normal.y = (float)puVar8;
            hit3D.m_Normal.z = fVar2;
            hit3D.m_FaceID = (uint32_t)fVar3;
            hit3D.m_Distance = (float)hitInfo;
            hit3D.m_UV.x = 0.0;
            hit3D.m_UV.y = fVar5;
            hit3D.m_Collider = in_stack_10;
            GameObjectRayHit::GameObjectRayHit__ctor(pGVar9,ray,hit3D,(MethodInfo *)0x0);
            return pGVar9;
          }
        }
        return (GameObjectRayHit *)0x0;
      }
    }
    else {
      this_00 = (this->fields)._sceneTree;
      if (this_00 != (SceneTree *)0x0) {
        pGVar9 = SceneTree::SceneTree_RaycastMeshObject(this_00,ray,meshObject,(MethodInfo *)0x0);
        return pGVar9;
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  pGVar9 = (GameObjectRayHit *)(*pcVar11)();
  return pGVar9;
}


/* GameObjectRayHit RaycastMeshObjectReverseIfFail(Ray, GameObject) */

GameObjectRayHit *
Assembly-CSharp.dll::RTG::RTScene::RTScene_RaycastMeshObjectReverseIfFail
          (RTScene *this,Ray ray,GameObject *meshObject,MethodInfo *method)

{
  pGVar1 = RTScene_RaycastMeshObject(this,ray,meshObject,(MethodInfo *)0x0);
  fVar2 = ray.m_Origin.z;
  fVar3 = ray.m_Origin.y;
  fVar4 = ray.m_Origin.x;
  if (pGVar1 == (GameObjectRayHit *)0x0) {
    value.y = (float)((uint)ray.m_Direction.y ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    value.x = (float)((uint)ray.m_Direction.x ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    value.z = (float)((uint)ray.m_Direction.z ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                       (&ray.m_Direction,value,
                        (MethodInfo *)
                        ((uint)ray.m_Direction.z ^
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field));
    uVar6 = pVVar5->x;
    uVar7 = pVVar5->y;
    ray.m_Origin.y = 0.0;
    ray.m_Origin.x = (float)meshObject;
    fVar8 = (float)uVar7;
    fVar9 = fVar3;
    fVar10 = fVar4;
    uVar11 = CONCAT44(fVar9,fVar10);
    fVar12 = fVar2;
    auVar13 = CONCAT48(fVar12,uVar11);
    fVar14 = (float)uVar6;
    ray_00._0_16_ = CONCAT412(fVar14,auVar13);
    ray_00 = (Ray)CONCAT816(uVar15,ray_00._0_16_);
    pGVar1 = RTScene_RaycastMeshObject(this,ray_00,meshObject,(MethodInfo *)0x0);
  }
  return pGVar1;
}


/* XZGridRayHit RaycastSceneGridIfVisible(Ray) */

XZGridRayHit *
Assembly-CSharp.dll::RTG::RTScene::RTScene_RaycastSceneGridIfVisible
          (RTScene *this,Ray ray,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTSceneGrid>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTSceneGrid>);
    func_?(&TypeInfo__RTG__XZGridRayHit);
    cRam_? = '\x01';
  }
  pIStack_1 = (IXZGrid *)0x0;
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTSceneGrid>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTSceneGrid>);
  }
  pOVar2 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTSceneGrid>__get_Get__);
  if ((pOVar2 != (Object *)0x0) && (pOVar2[2].monitor != (MonitorData *)0x0)) {
    if (pOVar2[2].monitor[0x14] == (MonitorData)0x0) {
      return (XZGridRayHit *)0x0;
    }
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTSceneGrid>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__MonoSingleton<RTG::RTSceneGrid>);
    }
    this_00 = (RTSceneGrid *)
              MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                        (MethodInfo__RTG__MonoSingleton<RTG::RTSceneGrid>__get_Get__);
    pMStack_3 = (MonoSingleton_1_RTSceneGrid___Class *)ray.m_Origin.x;
    fStack_4 = ray.m_Origin.y;
    fStack_5 = ray.m_Origin.z;
    fStack_6 = ray.m_Direction.x;
    VStack_7.y = ray.m_Direction.y;
    VStack_7.z = ray.m_Direction.z;
    if (this_00 != (RTSceneGrid *)0x0) {
      pPVar8 = RTSceneGrid::RTSceneGrid_get_WorldPlane
                          ((Plane *)&stack0xffffffb4,this_00,(MethodInfo *)0x0);
      PStack_9.m_Normal.x = (pPVar8->m_Normal).x;
      PStack_9.m_Normal.y = (pPVar8->m_Normal).y;
      PStack_9._8_8_ = *(undefined8 *)&(pPVar8->m_Normal).z;
      ray_00.m_Origin.y = fStack_4;
      ray_00.m_Origin.x = (float)pMStack_3;
      ray_00.m_Origin.z = fStack_5;
      ray_00.m_Direction.x = fStack_6;
      ray_00.m_Direction.y = VStack_7.y;
      ray_00.m_Direction.z = VStack_7.z;
      bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                        (&PStack_9,ray_00,(float *)&pIStack_1,(MethodInfo *)0x0);
      if (bVar10 == 0) {
        return (XZGridRayHit *)0x0;
      }
      if ((TypeInfo__RTG__MonoSingleton<RTG::RTSceneGrid>->_1).cctor_finished_or_no_cctor == 0) {
        pMStack_3 = TypeInfo__RTG__MonoSingleton<RTG::RTSceneGrid>;
        PStack_9.m_Distance = (float)&UNK_?;
        func_?();
      }
      pOVar2 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                          (MethodInfo__RTG__MonoSingleton<RTG::RTSceneGrid>__get_Get__);
      pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                          (&VStack_7,&ray,(float)pIStack_1,(MethodInfo *)0x0);
      if ((pOVar2 != (Object *)0x0) && (pMVar12 = pOVar2[2].monitor, pMVar12 != (MonitorData *)0x0))
      {
        pXVar13 = XZGridCell::XZGridCell_FromPoint
                            (*pVVar11,*(float *)(pMVar12 + 0x18),*(float *)(pMVar12 + 0x1c),
                             (IXZGrid *)pOVar2,(MethodInfo *)0x0);
        PStack_9.m_Normal.x = ray.m_Origin.x;
        PStack_9.m_Normal.y = ray.m_Origin.y;
        PStack_9.m_Normal.z = ray.m_Origin.z;
        PStack_9.m_Distance = ray.m_Direction.x;
        VStack_7.y = ray.m_Direction.y;
        VStack_7.z = ray.m_Direction.z;
        pXVar14 = (XZGridRayHit *)func_?(TypeInfo__RTG__XZGridRayHit);
        method_00 = (MethodInfo *)PStack_9.m_Normal.y;
        PStack_9.m_Normal.x = PStack_9.m_Normal.z;
        PStack_9.m_Normal.y = PStack_9.m_Distance;
        PStack_9.m_Normal.z = VStack_7.y;
        PStack_9.m_Distance = VStack_7.z;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)pXVar14,ExceptionArgument__Enum_obj,method_00);
        (pXVar14->fields)._hitCell = pXVar13;
        func_?();
        (pXVar14->fields)._hitEnter = (float)pIStack_1;
        pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                            (&VStack_7,(Ray *)&stack0xffffffc4,(float)pIStack_1,(MethodInfo *)0x0);
        fVar15 = pVVar11->y;
        fVar16 = pVVar11->z;
        (pXVar14->fields)._hitPoint.x = pVVar11->x;
        (pXVar14->fields)._hitPoint.y = fVar15;
        (pXVar14->fields)._hitPoint.z = fVar16;
        if ((pXVar13 != (XZGridCell *)0x0) &&
           (pIVar17 = (pXVar13->fields)._parentGrid, pIStack_1 = pIVar17, pIVar17 != (IXZGrid *)0x0)) {
          pIVar18 = pIVar17->klass;
          uVar19 = 0;
          uVar20._0_1_ = (pIVar18->_1).rank;
          uVar20._1_1_ = (pIVar18->_1).minimumAlignment;
          if (uVar20 != 0) {
            do {
              if (pIVar18->interfaceOffsets[uVar19].interfaceType ==
                  (Il2CppClass *)TypeInfo__RTG__IXZGrid) {
                ppMVar21 = &(&(pIVar17->klass->vtable).get_WorldPlane)
                            [pIVar17->klass->interfaceOffsets[uVar19].offset].method;
                goto code_?;
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < uVar20);
          }
          ppMVar21 = (MethodInfo **)func_?(pIVar17,TypeInfo__RTG__IXZGrid,0);
code_?:
          pfVar22 = (float *)(*(code *)*ppMVar21)(&stack0xffffffb4,pIVar17,ppMVar21[1]);
          fVar16 = pfVar22[1];
          fVar15 = pfVar22[2];
          fVar23 = pfVar22[3];
          (pXVar14->fields)._hitPlane.m_Normal.x = *pfVar22;
          (pXVar14->fields)._hitPlane.m_Normal.y = fVar16;
          (pXVar14->fields)._hitPlane.m_Normal.z = fVar15;
          (pXVar14->fields)._hitPlane.m_Distance = fVar23;
          fVar15 = (pXVar14->fields)._hitPlane.m_Normal.y;
          fVar16 = (pXVar14->fields)._hitPlane.m_Normal.z;
          (pXVar14->fields)._hitNormal.x = (pXVar14->fields)._hitPlane.m_Normal.x;
          (pXVar14->fields)._hitNormal.y = fVar15;
          (pXVar14->fields)._hitNormal.z = fVar16;
          return pXVar14;
        }
      }
    }
  }
  func_?();
  pcVar24 = (code *)swi(3);
  pXVar14 = (XZGridRayHit *)(*pcVar24)();
  return pXVar14;
}


/* GameObjectRayHit RaycastSpriteObject(Ray, GameObject) */

GameObjectRayHit *
Assembly-CSharp.dll::RTG::RTScene::RTScene_RaycastSpriteObject
          (RTScene *this,Ray ray,GameObject *spriteObject,MethodInfo *method)

{
  this_00 = (this->fields)._sceneTree;
  if (this_00 != (SceneTree *)0x0) {
    pGVar1 = SceneTree::SceneTree_RaycastSpriteObject(this_00,ray,spriteObject,(MethodInfo *)0x0);
    return pGVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pGVar1 = (GameObjectRayHit *)(*pcVar3)();
  return pGVar1;
}


/* GameObjectRayHit RaycastTerrainObject(Ray, GameObject) */

GameObjectRayHit *
Assembly-CSharp.dll::RTG::RTScene::RTScene_RaycastTerrainObject
          (RTScene *this,Ray ray,GameObject *terrainObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GameObjectRayHit);
    func_?(&
                    UnityEngine__TerrainCollider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::TerrainCollider>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffffa8,0,0x2c);
  if (terrainObject != (GameObject *)0x0) {
    this_00 = (Collider *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                        (terrainObject,
                         UnityEngine__TerrainCollider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::TerrainCollider>__
                        );
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if (this_00 == (Collider *)0x0) goto code_?;
      fVar2 = 0.0;
      fVar3 = 3.4028235e+38;
      hitInfo = (RaycastHit *)&stack0xffffffa8;
      bVar1 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_Raycast_1
                        (this_00,ray,hitInfo,3.4028235e+38,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        puVar4 = &UNK_?;
        pGVar5 = (GameObjectRayHit *)func_?();
        hit3D.m_Point.y = fVar3;
        hit3D.m_Point.x = (float)hitInfo;
        hit3D.m_Point.z = fVar2;
        hit3D.m_Normal.x = in_stack_6;
        hit3D.m_Normal.y = (float)puVar4;
        hit3D.m_Normal.z = 0.0;
        hit3D.m_FaceID = in_stack_7;
        hit3D.m_Distance = in_stack_8;
        hit3D.m_UV.x = in_stack_9;
        hit3D.m_UV.y = in_stack_10;
        hit3D.m_Collider = in_stack_11;
        GameObjectRayHit::GameObjectRayHit__ctor(pGVar5,ray,hit3D,(MethodInfo *)0x0);
        return pGVar5;
      }
    }
    return (GameObjectRayHit *)0x0;
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  pGVar5 = (GameObjectRayHit *)(*pcVar12)();
  return pGVar5;
}


/* GameObjectRayHit RaycastTerrainObjectReverseIfFail(Ray, GameObject) */

GameObjectRayHit *
Assembly-CSharp.dll::RTG::RTScene::RTScene_RaycastTerrainObjectReverseIfFail
          (RTScene *this,Ray ray,GameObject *terrainObject,MethodInfo *method)

{
  pGVar1 = RTScene_RaycastTerrainObject(this,ray,terrainObject,(MethodInfo *)0x0);
  fVar2 = ray.m_Origin.z;
  fVar3 = ray.m_Origin.y;
  fVar4 = ray.m_Origin.x;
  if (pGVar1 == (GameObjectRayHit *)0x0) {
    value.y = (float)((uint)ray.m_Direction.y ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    value.x = (float)((uint)ray.m_Direction.x ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    value.z = (float)((uint)ray.m_Direction.z ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                       (&ray.m_Direction,value,
                        (MethodInfo *)
                        ((uint)ray.m_Direction.z ^
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field));
    uVar6 = pVVar5->x;
    uVar7 = pVVar5->y;
    ray.m_Origin.y = 0.0;
    ray.m_Origin.x = (float)terrainObject;
    fVar8 = (float)uVar7;
    fVar9 = fVar3;
    fVar10 = fVar4;
    uVar11 = CONCAT44(fVar9,fVar10);
    fVar12 = fVar2;
    auVar13 = CONCAT48(fVar12,uVar11);
    fVar14 = (float)uVar6;
    ray_00._0_16_ = CONCAT412(fVar14,auVar13);
    ray_00 = (Ray)CONCAT816(uVar15,ray_00._0_16_);
    pGVar1 = RTScene_RaycastTerrainObject(this,ray_00,terrainObject,(MethodInfo *)0x0);
  }
  return pGVar1;
}


/* GameObjectRayHit RaycastTerrainObject(Ray, GameObject, TerrainCollider) */

GameObjectRayHit *
Assembly-CSharp.dll::RTG::RTScene::RTScene_RaycastTerrainObject_1
          (RTScene *this,Ray ray,GameObject *terrainObject,TerrainCollider *terrainCollider,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GameObjectRayHit);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffffa8,0,0x2c);
  if (terrainCollider != (TerrainCollider *)0x0) {
    bVar1 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_Raycast_1
                      ((Collider *)terrainCollider,ray,(RaycastHit *)&stack0xffffffa8,3.4028235e+38,
                       (MethodInfo *)0x0);
    pGVar2 = TypeInfo__RTG__GameObjectRayHit;
    if (bVar1 == 0) {
      return (GameObjectRayHit *)0x0;
    }
    pGVar3 = (GameObjectRayHit *)func_?();
    hit3D.m_Point.y = in_stack_4;
    hit3D.m_Point.x = in_stack_5;
    hit3D.m_Point.z = in_stack_6;
    hit3D.m_Normal.x = in_stack_7;
    hit3D.m_Normal.y = in_stack_8;
    hit3D.m_Normal.z = in_stack_9;
    hit3D.m_FaceID = in_stack_10;
    hit3D.m_Distance = (float)pGVar2;
    hit3D.m_UV.x = VStack_11.x;
    hit3D.m_UV.y = VStack_11.y;
    hit3D.m_Collider = iStack_12;
    GameObjectRayHit::GameObjectRayHit__ctor(pGVar3,ray,hit3D,(MethodInfo *)0x0);
    return pGVar3;
  }
  func_?();
  pcVar13 = (code *)swi(3);
  pGVar3 = (GameObjectRayHit *)(*pcVar13)();
  return pGVar3;
}


/* Void RegisterHoverableSceneEntityContainer(IHoverableSceneEntityContainer) */

void Assembly-CSharp.dll::RTG::RTScene::RTScene_RegisterHoverableSceneEntityContainer
               (RTScene *this,IHoverableSceneEntityContainer *container,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::IHoverableSceneEntityContainer>__Add_RTG__IHoverableSceneEntityContainer_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::IHoverableSceneEntityContainer>__Contains_RTG__IHoverableSceneEntityContainer_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_System_Object_ *)(this->fields)._hoverableSceneEntityContainers;
  if (pLVar1 != (List_1_System_Object_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Contains
                      (pLVar1,(Object *)container,
                       MethodInfo__System__Collections__Generic__List<RTG::IHoverableSceneEntityContainer>__Contains_RTG__IHoverableSceneEntityContainer_
                      );
    if (bVar2 == 0) {
      pLVar1 = (List_1_System_Object_ *)(this->fields)._hoverableSceneEntityContainers;
      if (pLVar1 == (List_1_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                (pLVar1,(Object *)container,
                 MethodInfo__System__Collections__Generic__List<RTG::IHoverableSceneEntityContainer>__Add_RTG__IHoverableSceneEntityContainer_
                );
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetRootObjectIgnored(GameObject, Boolean) */

void Assembly-CSharp.dll::RTG::RTScene::RTScene_SetRootObjectIgnored
               (RTScene *this,GameObject *root,bool ignored,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._settings;
  if (pSVar1 != (SceneSettings *)0x0) {
    if ((pSVar1->fields)._physicsMode != 2) {
      return;
    }
    this_00 = (this->fields)._ignoredRootObjects;
    if (ignored == 0) {
      if (this_00 != (HashSet_1_UnityEngine_GameObject_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
        HashSet_1_System_Object__Remove
                  ((HashSet_1_System_Object_ *)this_00,(Object *)root,
                   MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Remove_UnityEngine__GameObject_
                  );
        return;
      }
    }
    else if (this_00 != (HashSet_1_UnityEngine_GameObject_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
      HashSet_1_System_Object__System_Collections_Generic_ICollection_T__Add
                ((HashSet_1_System_Object_ *)this_00,(Object *)root,
                 MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                );
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update_SystemCall() */

void Assembly-CSharp.dll::RTG::RTScene::RTScene_Update_SystemCall(RTScene *this,MethodInfo *method)

{
  pRVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GameObjectEx);
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Contains_UnityEngine__GameObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Capacity__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__set_Capacity_int_
                   );
    func_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
    cRam_? = '\x01';
  }
  pSVar2 = (this->fields)._settings;
  if (pSVar2 == (SceneSettings *)0x0) {
code_?:
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pSVar2->fields)._physicsMode == 2) {
    if ((TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).cctor_finished_or_no_cctor == 0)
    {
      func_?(TypeInfo__UnityEngine__SceneManagement__SceneManager);
    }
    UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
    SceneManager_GetActiveScene((MethodInfo *)0x0);
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::Scene::Scene_get_rootCount
                      ((Scene *)&stack0xfffffff8,(MethodInfo *)0x0);
    pLVar5 = (this->fields)._rootGameObjectsBuffer;
    if (pLVar5 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
    iVar6 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::
            SparselyPopulatedArrayFragment_1_System_Object__get_Length
                      ((SparselyPopulatedArrayFragment_1_System_Object_ *)pLVar5,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Capacity__
                      );
    if (iVar6 <= iVar4) {
      this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)(this->fields)._rootGameObjectsBuffer;
      if (this_00 ==
          (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
           *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
      MultiColumnCollectionHeader+ViewState+ColumnState]::
      List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__set_Capacity
                (this_00,iVar4 + 100,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__set_Capacity_int_
                );
    }
    UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::Scene::Scene_GetRootGameObjects_1
              ((Scene *)&stack0xfffffff8,(this->fields)._rootGameObjectsBuffer,(MethodInfo *)0x0);
    this = (RTScene *)0x0;
    if (0 < iVar4) {
      do {
        pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (pRVar1->fields)._rootGameObjectsBuffer;
        if (pLVar7 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        goto code_?;
        RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           (pLVar7,(int32_t)this,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                           );
        this_01 = (pRVar1->fields)._ignoredRootObjects;
        if (this_01 == (HashSet_1_UnityEngine_GameObject_ *)0x0) goto code_?;
        RVar9 = RVar8;
        bVar10 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
                HashSet_1_System_Object__Contains
                          ((HashSet_1_System_Object_ *)this_01,(Object *)RVar8,
                           MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Contains_UnityEngine__GameObject_
                          );
        if (bVar10 == 0) {
          pLVar5 = (pRVar1->fields)._childrenAndSelfBuffer;
          if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          GameObjectEx::GameObjectEx_GetAllChildrenAndSelf_1
                    ((GameObject *)RVar8,pLVar5,(MethodInfo *)0x0);
          pLVar5 = (pRVar1->fields)._childrenAndSelfBuffer;
          if (pLVar5 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
          index = 0;
          if (0 < (pLVar5->fields)._size) {
            do {
              pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       (pRVar1->fields)._childrenAndSelfBuffer;
              if (pLVar7 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0
                 ) goto code_?;
              RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                       RegularExpressions::RegexCharClass+SingleRange]::
                       List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                 (pLVar7,index,
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                                 );
              pSVar11 = (pRVar1->fields)._sceneTree;
              if (pSVar11 == (SceneTree *)0x0) goto code_?;
              puVar12 = (undefined *)0x0;
              RVar9 = RVar8;
              bVar10 = SceneTree::SceneTree_IsObjectRegistered
                                (pSVar11,(GameObject *)RVar8,(MethodInfo *)0x0);
              if (bVar10 == 0) {
                pSVar11 = (pRVar1->fields)._sceneTree;
                if (pSVar11 == (SceneTree *)0x0) goto code_?;
                puVar12 = &UNK_?;
                SceneTree::SceneTree_RegisterObject(pSVar11,(GameObject *)RVar8,(MethodInfo *)0x0);
              }
              else {
                if ((RVar8 == (RegexCharClass_SingleRange)0x0) ||
                   (this_02 = (RTScene *)
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_get_transform((GameObject *)RVar8,(MethodInfo *)0x0),
                   this_02 == (RTScene *)0x0)) goto code_?;
                bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_hasChanged
                                  ((Transform *)this_02,(MethodInfo *)0x0);
                this = this_02;
                if (bVar10 != 0) {
                  pSVar11 = (pRVar1->fields)._sceneTree;
                  if (pSVar11 == (SceneTree *)0x0) goto code_?;
                  SceneTree::SceneTree_OnObjectTransformChanged
                            (pSVar11,(Transform *)this_02,(MethodInfo *)0x0);
                  this = (RTScene *)&UNK_?;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_hasChanged
                            ((Transform *)this_02,0,(MethodInfo *)0x0);
                }
              }
              index = index + 1;
            } while (index < (int)puVar12);
          }
        }
        this = (RTScene *)((int)&this->klass + 1);
      } while ((int)this < (int)RVar9);
    }
  }
  return;
}


/* RTScene() */

void Assembly-CSharp.dll::RTG::RTScene::RTScene__ctor(RTScene *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__HashSet__
                   );
    func_?(&TypeInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::IHoverableSceneEntityContainer>__List__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>);
    func_?(&
                    TypeInfo__System__Collections__Generic__List<RTG::IHoverableSceneEntityContainer>
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTScene>__MonoSingleton__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
    func_?(&TypeInfo__RTG__SceneSettings);
    func_?(&TypeInfo__RTG__SceneTree);
    cRam_? = '\x01';
  }
  this_00 = (SceneSettings *)func_?(TypeInfo__RTG__SceneSettings);
  SceneSettings::SceneSettings__ctor(this_00,(MethodInfo *)0x0);
  (this->fields)._settings = this_00;
  func_?(&(this->fields)._settings,this_00);
  this_01 = (List_1_RTG_IHoverableSceneEntityContainer_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<RTG::IHoverableSceneEntityContainer>
                           );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<RTG::IHoverableSceneEntityContainer>__List__
            );
  (this->fields)._hoverableSceneEntityContainers = this_01;
  func_?(&(this->fields)._hoverableSceneEntityContainers,this_01);
  this_02 = (SceneTree *)func_?(TypeInfo__RTG__SceneTree);
  SceneTree::SceneTree__ctor(this_02,(MethodInfo *)0x0);
  (this->fields)._sceneTree = this_02;
  func_?(&(this->fields)._sceneTree,this_02);
  this_03 = (HashSet_1_UnityEngine_GameObject_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
  HashSet_1_System_Object___ctor
            ((HashSet_1_System_Object_ *)this_03,
             MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__HashSet__);
  (this->fields)._ignoredRootObjects = this_03;
  func_?();
  this_04 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this_04,100,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_int_);
  (this->fields)._childrenAndSelfBuffer = (List_1_UnityEngine_GameObject_ *)this_04;
  func_?(&(this->fields)._childrenAndSelfBuffer,this_04);
  this_05 = (List_1_UnityEngine_GameObject_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_05,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  (this->fields)._rootGameObjectsBuffer = this_05;
  func_?(&(this->fields)._rootGameObjectsBuffer,this_05);
  this_06 = (List_1_RTG_GameObjectRayHit_ *)
            func_?(TypeInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_06,
             MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__List__);
  (this->fields)._objectHitBuffer = this_06;
  func_?();
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTScene>->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  Borodar::FarlandSkies::CloudyCrownPro::Helpers::Singleton`1[System::Object]::
  Singleton_1_System_Object___ctor
            ((Singleton_1_System_Object_ *)this,
             MethodInfo__RTG__MonoSingleton<RTG::RTScene>__MonoSingleton__);
  return;
}



/* Void AddPreviewBoxesToChildren() */

void Assembly-CSharp.dll::MVMovingPlatformGroup::MVMovingPlatformGroup_AddPreviewBoxesToChildren
               (MVMovingPlatformGroup *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb0;
  puVar5 = &stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pOStack_6 = (Object *)0x0;
  pDStack_7 = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  iStack_8 = 0;
  iStack_9 = 0;
  iStack_10 = 0;
  func_?();
  pMVar11 = (this->fields).platform;
  puStack_12 = (undefined4 *)&stack0xffffffb0;
  puStack_4 = &stack0xffffffb0;
  if ((pMVar11 != (MVMovingPlatform *)0x0) &&
     (pMVar13 = (pMVar11->fields)._._CubeModel_k__BackingField,
     puStack_12 = (undefined4 *)&stack0xffffffb0, puStack_4 = &stack0xffffffb0,
     pMVar13 != (MVCubeModelInstance *)0x0)) {
    puStack_12 = (undefined4 *)&stack0xffffffb0;
    puStack_4 = &stack0xffffffb0;
    (*(code *)(pMVar13->klass->vtable).AddPreviewBox.method)
              (pMVar13,(pMVar13->klass->vtable).AddSelectionBox.methodPtr);
    this_00 = (this->fields).nodeIdToWoMap;
    if ((this_00 != (Dictionary_2_System_Int32_MVMovingPlatformNode_ *)0x0) &&
       (this_01 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[WinningConditionType,System::Object]::
                  Dictionary_2_WinningConditionType_System_Object__get_Values
                            ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Values__
                            ),
       this_01 !=
       (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)) {
      pDVar14 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                         (&DStack_15,this_01,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVMovingPlatformNode>__GetEnumerator__
                         );
      pDStack_7 = (pDVar14->host_enumerator).dictionary;
      iStack_8 = (pDVar14->host_enumerator).next;
      iStack_9 = (pDVar14->host_enumerator).stamp;
      iStack_10 = (pDVar14->host_enumerator).current.key;
      pOStack_6 = (pDVar14->host_enumerator).current.value;
      uStack_1 = 0;
      while( true ) {
        cVar16 = func_?();
        if (cVar16 == '\0') {
          *puStack_12 = 0x53;
          uStack_1 = 0xffffffff;
          func_?();
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        piVar17 = (int *)func_?();
        if (piVar17 == (int *)0x0) break;
        (**(code **)(*piVar17 + 0x2e8))(piVar17,*(undefined4 *)(*piVar17 + 0x2ec));
      }
    }
  }
  func_?(0);
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVMovingPlatformGroup::MVMovingPlatformGroup_Initialize
               (MVMovingPlatformGroup *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)0xffffffff;
  ppUStack_2 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class **)&DAT_?;
  pMStack_3 = (MVCubeModelInstance *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pMStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar4 = 0;
  pUStack_5 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0;
  puStack_6 = (undefined *)0x0;
  puVar7 = (undefined4 *)&stack0xffffff88;
  func_?();
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  MVMovingPlatformGroup_InitializeCommon(this,(MethodInfo *)0x0);
  pDVar8 = (this->fields).nodeIdToWoMap;
  if ((pDVar8 == (Dictionary_2_System_Int32_MVMovingPlatformNode_ *)0x0) ||
     (this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
                ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                          ((Dictionary_2_WinningConditionType_System_Object_ *)pDVar8,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Values__
                          ),
     this_01 == (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)
     ) {
code_?:
    func_?();
  }
  else {
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
    Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                *)&stack0xffffff94,this_01,
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVMovingPlatformNode>__GetEnumerator__
              );
    pMStack_1 = (MethodInfo *)0x0;
    while( true ) {
      pUStack_5 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__MoveNext__
      ;
      cVar9 = func_?();
      if (cVar9 == '\0') break;
      pUStack_5 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__get_Current__
      ;
      unaff_ESI = (MVCubeModelInstance *)func_?();
      if (unaff_ESI == (MVCubeModelInstance *)0x0) goto code_?;
      pUVar10 = (unaff_ESI->fields)._._.PositionChanged;
      pUVar11 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar11,(Object *)this,
                 MethodInfo__MVMovingPlatformGroup__WorldObjectClient_PositionChangedHandler_System__Object__PositionChangedEventArgs_
                 ,
                 MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
                );
      pUVar12 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pUVar10,(Delegate *)pUVar11,(MethodInfo *)0x0);
      pUVar10 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      if (pUVar12 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
        if (pUVar12->klass ==
            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
           ) {
          pUVar10 = pUVar12;
        }
        pUStack_5 = 
        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
        if (pUVar10 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
        goto code_?;
      }
      (unaff_ESI->fields)._._.PositionChanged = pUVar10;
      pUVar13 = (unaff_ESI->fields)._._.SelectedChanged;
      pUStack_5 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                   TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_SelectedEventArgs>
      ;
      pUVar11 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar11,(Object *)this,
                 MethodInfo__MVMovingPlatformGroup__WorldObjectClient_SelectedChangedHandler_System__Object__SelectedEventArgs_
                 ,
                 MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_SelectedEventArgs>__UnityAction_System__Object__void__
                );
      pUVar14 = (UnityAction_2_MVWorldObjectClient_SelectedEventArgs_ *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pUVar13,(Delegate *)pUVar11,(MethodInfo *)0x0);
      pUVar13 = (UnityAction_2_MVWorldObjectClient_SelectedEventArgs_ *)0x0;
      if (pUVar14 != (UnityAction_2_MVWorldObjectClient_SelectedEventArgs_ *)0x0) {
        if (pUVar14->klass ==
            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_SelectedEventArgs>) {
          pUVar13 = pUVar14;
        }
        pUStack_5 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                     TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_SelectedEventArgs>
        ;
        if (pUVar13 == (UnityAction_2_MVWorldObjectClient_SelectedEventArgs_ *)0x0)
        goto code_?;
      }
      (unaff_ESI->fields)._._.SelectedChanged = pUVar13;
    }
    unaff_ESI = (MVCubeModelInstance *)0x0;
    *puVar7 = 0x8d;
    pMStack_1 = (MethodInfo *)0xffffffff;
    pUStack_5 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__Dispose__
    ;
    func_?();
    if (iVar4 == 0) {
      pUStack_5 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                   TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
      ;
      pUVar15 = (this->fields)._._._.RotationChanged;
      unaff_ESI = (MVCubeModelInstance *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                ((UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)unaff_ESI,(Object *)this,
                 MethodInfo__MVMovingPlatformGroup__WorldObjectClient_RotationChangedHandler_System__Object__RotationChangedEventArgs_
                 ,
                 MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>__UnityAction_System__Object__void__
                );
      pUVar16 = (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pUVar15,(Delegate *)unaff_ESI,(MethodInfo *)0x0);
      pUVar15 = (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0;
      if (pUVar16 != (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0) {
        if (pUVar16->klass ==
            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
           ) {
          pUVar15 = pUVar16;
        }
        pUStack_5 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                     TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
        ;
        if (pUVar15 == (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0) {
code_?:
          func_?();
          goto code_?;
        }
      }
      pUStack_5 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0;
      piVar17 = &(this->fields)._._._.interactionFlags;
      *(uint *)piVar17 = (uint)*piVar17 | 0x40;
      (this->fields)._._._.RotationChanged = pUVar15;
      *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) =
           *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
      bVar18 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                        ((MVWorldObjectClient *)this,InteractionFlags__Enum_IsPreview,
                         (MethodInfo *)0x0);
      if (bVar18 == 0) {
code_?:
        *unaff_FS_OFFSET = pMStack_3;
        return;
      }
      MVMovingPlatformGroup_AddPreviewBoxesToChildren(this,(MethodInfo *)0x0);
      pMVar19 = (this->fields).platform;
      if (pMVar19 != (MVMovingPlatform *)0x0) {
        this_00 = (pMVar19->fields)._._CubeModel_k__BackingField;
        pSVar20 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                  NamedThemeAttribute_1_UnityEngine_Color__get_Name
                            ((NamedThemeAttribute_1_UnityEngine_Color_ *)this,(MethodInfo *)0x0);
        unaff_ESI = (MVCubeModelInstance *)0x0;
        if (this_00 != (MVCubeModelInstance *)0x0) {
          RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeId
                    ((RuntimePrototypeCubeModel *)this_00,(int32_t)pSVar20,(MethodInfo *)0x0);
          pMVar19 = (this->fields).platform;
          unaff_ESI = (MVCubeModelInstance *)0x0;
          if ((pMVar19 != (MVMovingPlatform *)0x0) &&
             (unaff_ESI = (pMVar19->fields)._._CubeModel_k__BackingField,
             unaff_ESI != (MVCubeModelInstance *)0x0)) {
            IVar21 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                               ((MVWorldObjectClient *)unaff_ESI,(MethodInfo *)0x0);
            MVWorldObjectClient::MVWorldObjectClient_set_InteractionFlags
                      ((MVWorldObjectClient *)unaff_ESI,IVar21 | InteractionFlags__Enum_IsPreview,
                       method_00);
            pDVar8 = (this->fields).nodeIdToWoMap;
            if ((pDVar8 != (Dictionary_2_System_Int32_MVMovingPlatformNode_ *)0x0) &&
               (this_02 = (MethodInfo *)
                          mscorlib.dll::System::Collections::Generic::
                          Dictionary`2[WinningConditionType,System::Object]::
                          Dictionary_2_WinningConditionType_System_Object__get_Values
                                    ((Dictionary_2_WinningConditionType_System_Object_ *)pDVar8,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Values__
                                    ), this_02 != (MethodInfo *)0x0)) {
              __return_storage_ptr__ =
                   (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                    *)&stack0xffffff94;
              unaff_ESI = (MVCubeModelInstance *)&UNK_?;
              pDVar22 = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::
                        Object]::
                        Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                                  (__return_storage_ptr__,
                                   (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                                    *)this_02,
                                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVMovingPlatformNode>__GetEnumerator__
                                  );
              pUStack_5 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                           (pDVar22->host_enumerator).dictionary;
              puStack_6 = (undefined *)(pDVar22->host_enumerator).next;
              while( true ) {
                pMStack_1 = 
                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__MoveNext__
                ;
                ppUStack_2 = &pUStack_5;
                cVar9 = func_?();
                if (cVar9 == '\0') break;
                pMStack_1 = 
                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__get_Current__
                ;
                ppUStack_2 = &pUStack_5;
                unaff_ESI = (MVCubeModelInstance *)func_?();
                pSVar20 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                          NamedThemeAttribute_1_UnityEngine_Color__get_Name
                                    ((NamedThemeAttribute_1_UnityEngine_Color_ *)this,
                                     (MethodInfo *)0x0);
                if (unaff_ESI == (MVCubeModelInstance *)0x0) goto code_?;
                RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeId
                          ((RuntimePrototypeCubeModel *)unaff_ESI,(int32_t)pSVar20,(MethodInfo *)0x0
                          );
                IVar21 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                                   ((MVWorldObjectClient *)unaff_ESI,(MethodInfo *)0x0);
                __return_storage_ptr__ =
                     (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                      *)(IVar21 | InteractionFlags__Enum_IsPreview);
                this_02 = method_01;
                MVWorldObjectClient::MVWorldObjectClient_set_InteractionFlags
                          ((MVWorldObjectClient *)unaff_ESI,
                           (InteractionFlags__Enum)__return_storage_ptr__,method_01);
              }
              (&(__return_storage_ptr__->host_enumerator).next)[(int)this_02] = 0x165;
              pMStack_1 = 
              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__Dispose__
              ;
              ppUStack_2 = &pUStack_5;
              func_?();
              if (unaff_ESI == (MVCubeModelInstance *)0x0) goto code_?;
              goto code_?;
            }
          }
        }
      }
      goto code_?;
    }
  }
  pUStack_5 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0;
  func_?();
code_?:
  pMStack_1 = (MethodInfo *)0x0;
  ppUStack_2 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class **)0x0;
  pMStack_3 = unaff_ESI;
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void InitializeCommon() */

void Assembly-CSharp.dll::MVMovingPlatformGroup::MVMovingPlatformGroup_InitializeCommon
               (MVMovingPlatformGroup *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff70;
  puVar5 = &stack0xffffff70;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pOStack_6 = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  pTStack_8 = (TerrainUtility_TerrainMap *)0x0;
  auStack_9._20_4_ = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  iStack_10 = 0;
  iStack_11 = 0;
  iStack_12 = 0;
  auStack_9._16_4_ = (Object *)0x0;
  KStack_13.key = 0;
  KStack_13.value = 0;
  auStack_9._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_9._4_4_ = (MonitorData *)0x0;
  auStack_9._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_9._12_4_ = 0;
  func_?();
  this_00 = this;
  iStack_14 = -1;
  pDVar15 = (this->fields)._.childIdMap;
  piStack_16 = (int *)&stack0xffffff70;
  puStack_4 = &stack0xffffff70;
  if (pDVar15 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    pTVar17 = (TerrainUtility_TerrainMap *)func_?(0);
  }
  else {
    piStack_16 = (int *)&stack0xffffff70;
    puStack_4 = &stack0xffffff70;
    pDVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        &stack0xffffff7c,(Dictionary_2_WinningConditionType_System_Object_ *)pDVar15,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    auStack_9._20_4_ = pDVar18->dictionary;
    iStack_10 = pDVar18->next;
    iStack_11 = pDVar18->stamp;
    iStack_12 = (pDVar18->current).key;
    pOStack_6 = (pDVar18->current).value;
    uStack_1 = 0;
    while (cVar19 = func_?(), cVar19 != '\0') {
      KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)(auStack_9 + 0x14),
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                            );
      piVar20 = (int *)func_?();
      if ((piVar20 == (int *)0x0) ||
         (pSVar21 = (String *)(**(code **)(*piVar20 + 0xd8))(piVar20,*(undefined4 *)(*piVar20 + 0xdc)),
         pSVar21 == (String *)0x0)) goto code_?;
      bVar22 = mscorlib.dll::System::String::String_Equals_2
                        (pSVar21,StringLiteral_Platform,(MethodInfo *)0x0);
      if (bVar22 == 0) {
        iVar23 = func_?();
        if (iVar23 == 0) goto code_?;
        pSVar21 = (String *)func_?(3,iVar23);
        if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Convert);
        }
        iStack_24 = mscorlib.dll::System::Convert::Convert_ToInt32_10(pSVar21,(MethodInfo *)0x0);
        func_?();
        piVar25 = (int32_t *)func_?();
        pDStack_26 = (Dictionary_2_System_Int32_System_Int32_ *)*piVar25;
        MVGroup::MVGroup_GetChild((MVGroup *)this_00,(int32_t)pDStack_26,(MethodInfo *)0x0);
        unaff_ESI = (TerrainUtility_TerrainMap *)func_?();
        if (unaff_ESI == (TerrainUtility_TerrainMap *)0x0) {
          args = (Object__Array *)func_?(TypeInfo__System__Object,5);
          unaff_ESI = (TerrainUtility_TerrainMap *)0x0;
          if (args == (Object__Array *)0x0) goto code_?;
          func_?(args,StringLiteral_Platform_group_);
          func_?(0,StringLiteral_Platform_group_);
          iStack_27 = (this_00->fields)._._._._.id;
          iStack_24 = func_?(TypeInfo__System__Int32,&iStack_27);
          func_?(args,iStack_24);
          func_?(1,iStack_24);
          func_?(args,StringLiteral__init___Could_not_find_child_nod);
          func_?(2,StringLiteral__init___Could_not_find_child_nod);
          pDStack_28 = pDStack_26;
          pDStack_26 = (Dictionary_2_System_Int32_System_Int32_ *)
                       func_?(TypeInfo__System__Int32,&pDStack_28);
          func_?(args,pDStack_26);
          func_?(3,pDStack_26);
          func_?(args,StringLiteral___If_this_is_a_new_platform_grou);
          func_?(4,StringLiteral___If_this_is_a_new_platform_grou);
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          pSVar21 = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                    ((Object *)pSVar21,(MethodInfo *)0x0);
          (this_00->fields).initializeFailed = 1;
          *piStack_16 = 0x243;
          goto code_?;
        }
        pDVar29 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(this_00->fields).nodeIdToWoMap;
        if (pDVar29 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__set_Item
                  (pDVar29,iStack_24,unaff_ESI,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__set_Item_int__MVMovingPlatformNode_
                  );
        pDStack_28 = (this_00->fields).woIdToNodeIdMap;
        key = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
              Collection_1_VoxelHit__get_Items
                        ((Collection_1_VoxelHit_ *)unaff_ESI,(MethodInfo *)0x0);
        if (pDStack_28 == (Dictionary_2_System_Int32_System_Int32_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
        Dictionary_2_System_Int32_System_Int32__set_Item
                  (pDStack_28,(int32_t)key,iStack_24,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                  );
      }
    }
    *piStack_16 = 0xfd;
code_?:
    pTVar30 = (TerrainUtility_TerrainMap *)0x0;
    uStack_1 = 0xffffffff;
    iStack_24 = 0;
    func_?();
    pTVar17 = pTStack_8;
    unaff_ESI = pTVar30;
    if (pTStack_8 == (TerrainUtility_TerrainMap *)0x0) {
      if (*piStack_16 == 0x243) goto code_?;
      if (*piStack_16 == 0xfd) {
        pTVar30 = (TerrainUtility_TerrainMap *)0xffffffff;
        iStack_24 = -1;
      }
      pDVar15 = (this_00->fields).nextNodeMap;
      unaff_ESI = pTVar30;
      if (pDVar15 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar18 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[WinningConditionType,System::Object]::
                 Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                             *)&stack0xffffff7c,
                            (Dictionary_2_WinningConditionType_System_Object_ *)pDVar15,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                           );
        auStack_9._0_4_ = pDVar18->dictionary;
        auStack_9._4_4_ = pDVar18->next;
        auStack_9._8_4_ = pDVar18->stamp;
        auStack_9._12_4_ = (pDVar18->current).key;
        auStack_9._16_4_ = (pDVar18->current).value;
        uStack_1 = 2;
        while (cVar19 = func_?(auStack_9,
                                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                      ), unaff_ESI = pTStack_8, cVar19 != '\0') {
          KStack_13 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                                ((LevelRewardsManager *)auStack_9,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                                );
          piVar20 = (int *)func_?();
          unaff_ESI = pTVar30;
          if (piVar20 == (int *)0x0) goto code_?;
          pSVar21 = (String *)(**(code **)(*piVar20 + 0xd8))(piVar20,*(undefined4 *)(*piVar20 + 0xdc));
          if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__Convert);
          }
          unaff_ESI = (TerrainUtility_TerrainMap *)
                      mscorlib.dll::System::Convert::Convert_ToInt32_10(pSVar21,(MethodInfo *)0x0);
          func_?();
          piVar25 = (int32_t *)func_?();
          iStack_14 = *piVar25;
          pDVar29 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)(this_00->fields).nodeIdToWoMap;
          if (pDVar29 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         *)0x0) goto code_?;
          pTVar30 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                              (pDVar29,(int32_t)unaff_ESI,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
                              );
          pDVar29 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)(this_00->fields).nodeIdToWoMap;
          unaff_ESI = pTVar30;
          if (((pDVar29 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                           *)0x0) ||
              (pTVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                         Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                   (pDVar29,iStack_14,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
                                   ), pTVar30 == (TerrainUtility_TerrainMap *)0x0)) ||
             (pTVar30[7].fields.m_patchSize.z = (float)pTVar17,
             pTVar17 == (TerrainUtility_TerrainMap *)0x0)) goto code_?;
          pTVar17[7].fields.m_patchSize.y = (float)pTVar30;
        }
        piStack_16[iStack_24 + 1] = 0x188;
        uStack_1 = 0xffffffff;
        func_?(auStack_9,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                       );
        if (unaff_ESI != (TerrainUtility_TerrainMap *)0x0) goto code_?;
        pDVar15 = (this_00->fields)._.blueprintData;
        if (pDVar15 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          pPVar31 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                    Dictionary_2_System_Type_Pool__get_Item
                              ((Dictionary_2_System_Type_Pool_ *)pDVar15,
                               (Type *)StringLiteral_StartNode,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
          piVar25 = (int32_t *)func_?(pPVar31,TypeInfo__System__Int32);
          pDVar29 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)(this_00->fields).nodeIdToWoMap;
          if (pDVar29 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         *)0x0) {
            pMVar32 = (MVMovingPlatformNode *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                (pDVar29,*piVar25,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
                                );
            (this_00->fields).startNode = pMVar32;
            pMVar33 = MVBlueprintBase::MVBlueprintBase_GetChild
                                ((MVBlueprintBase *)this_00,StringLiteral_Platform,(MethodInfo *)0x0
                                );
            this_01 = (MVMovingPlatform *)func_?(pMVar33,TypeInfo__MVMovingPlatform);
            (this_00->fields).platform = this_01;
            if (this_01 == (MVMovingPlatform *)0x0) {
              this = (MVMovingPlatformGroup *)(this_00->fields)._._._._.id;
              arg1 = (Object *)func_?(TypeInfo__System__Int32,&this);
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                func_?(TypeInfo__System__String);
              }
              pSVar21 = mscorlib.dll::System::String::String_Concat_1
                                  ((Object *)StringLiteral_Platform_group_,arg1,
                                   (Object *)StringLiteral__init___Could_not_find_child_pla,
                                   (MethodInfo *)0x0);
              if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                        ((Object *)pSVar21,(MethodInfo *)0x0);
              (this_00->fields).initializeFailed = 1;
code_?:
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            pMVar32 = (this_00->fields).startNode;
            if (pMVar32 != (MVMovingPlatformNode *)0x0) {
              pMVar34 = (pMVar32->fields)._Next_k__BackingField;
              (this_01->fields).start = pMVar32;
              (this_01->fields).end = pMVar34;
              MVMovingPlatform::MVMovingPlatform_RecalculateMovement(this_01,(MethodInfo *)0x0);
              pUVar35 = (this_00->fields)._._._.ScaleChanged;
              this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                         *)func_?(
                                          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                                          );
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (this_02,(Object *)this,
                         MethodInfo__MVMovingPlatformGroup__WorldObjectClient_ScaleChangedHandler_System__Object__ScaleChangedEventArgs_
                         ,
                         MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>__UnityAction_System__Object__void__
                        );
              pDVar36 = mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)pUVar35,(Delegate *)this_02,(MethodInfo *)0x0);
              pUVar35 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)
                        func_?(pDVar36,
                                        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                                       );
              (this->fields)._._._.ScaleChanged = pUVar35;
              MVMovingPlatformGroup_UpdateLine(this,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
      }
      goto code_?;
    }
  }
  func_?(pTVar17,0,0);
code_?:
  func_?(unaff_ESI,0,0);
  pcVar37 = (code *)swi(3);
  (*pcVar37)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVMovingPlatformGroup::MVMovingPlatformGroup_InitializeInventory
               (MVMovingPlatformGroup *this,MethodInfo *method)

{
  MVGroup::MVGroup_InitializeInventory((MVGroup *)this,(MethodInfo *)0x0);
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOStack_2 = (Object *)0x0;
  KStack_3.key = 0;
  KStack_3.value = 0;
  pTStack_4 = (TerrainUtility_TerrainMap *)0x0;
  auStack_5._20_4_ = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  iStack_6 = 0;
  iStack_7 = 0;
  iStack_8 = 0;
  auStack_5._16_4_ = (Object *)0x0;
  KStack_9.key = 0;
  KStack_9.value = 0;
  auStack_5._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_5._4_4_ = (MonitorData *)0x0;
  auStack_5._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_5._12_4_ = 0;
  func_?();
  this_00 = in_stack_10;
  iStack_11 = -1;
  pDVar12 = (in_stack_10->fields)._.childIdMap;
  piStack_13 = (int *)&stack0xffffff78;
  if (pDVar12 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    pTVar14 = (TerrainUtility_TerrainMap *)func_?(0);
  }
  else {
    piStack_13 = (int *)&stack0xffffff78;
    pDVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        &stack0xffffff84,(Dictionary_2_WinningConditionType_System_Object_ *)pDVar12,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    auStack_5._20_4_ = pDVar15->dictionary;
    iStack_6 = pDVar15->next;
    iStack_7 = pDVar15->stamp;
    iStack_8 = (pDVar15->current).key;
    pOStack_2 = (pDVar15->current).value;
    while (cVar16 = func_?(), cVar16 != '\0') {
      KStack_3 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)(auStack_5 + 0x14),
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                            );
      piVar17 = (int *)func_?();
      if ((piVar17 == (int *)0x0) ||
         (pSVar18 = (String *)(**(code **)(*piVar17 + 0xd8))(piVar17,*(undefined4 *)(*piVar17 + 0xdc)),
         pSVar18 == (String *)0x0)) goto code_?;
      bVar19 = mscorlib.dll::System::String::String_Equals_2
                        (pSVar18,StringLiteral_Platform,(MethodInfo *)0x0);
      if (bVar19 == 0) {
        iVar20 = func_?();
        if (iVar20 == 0) goto code_?;
        pSVar18 = (String *)func_?(3,iVar20);
        if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Convert);
        }
        puStack_21 = (undefined *)
                     mscorlib.dll::System::Convert::Convert_ToInt32_10(pSVar18,(MethodInfo *)0x0);
        func_?();
        piVar22 = (int32_t *)func_?();
        pDStack_23 = (Dictionary_2_System_Int32_System_Int32_ *)*piVar22;
        MVGroup::MVGroup_GetChild((MVGroup *)this_00,(int32_t)pDStack_23,(MethodInfo *)0x0);
        unaff_ESI = (TerrainUtility_TerrainMap *)func_?();
        if (unaff_ESI == (TerrainUtility_TerrainMap *)0x0) {
          args = (Object__Array *)func_?(TypeInfo__System__Object,5);
          unaff_ESI = (TerrainUtility_TerrainMap *)0x0;
          if (args == (Object__Array *)0x0) goto code_?;
          func_?(args,StringLiteral_Platform_group_);
          func_?(0,StringLiteral_Platform_group_);
          iStack_24 = (this_00->fields)._._._._.id;
          puStack_21 = (undefined *)func_?(TypeInfo__System__Int32,&iStack_24);
          func_?(args,puStack_21);
          func_?(1,puStack_21);
          func_?(args,StringLiteral__init___Could_not_find_child_nod);
          func_?(2,StringLiteral__init___Could_not_find_child_nod);
          pDStack_25 = pDStack_23;
          pDStack_23 = (Dictionary_2_System_Int32_System_Int32_ *)
                       func_?(TypeInfo__System__Int32,&pDStack_25);
          func_?(args,pDStack_23);
          func_?(3,pDStack_23);
          func_?(args,StringLiteral___If_this_is_a_new_platform_grou);
          func_?(4,StringLiteral___If_this_is_a_new_platform_grou);
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          pSVar18 = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                    ((Object *)pSVar18,(MethodInfo *)0x0);
          (this_00->fields).initializeFailed = 1;
          *piStack_13 = 0x243;
          goto code_?;
        }
        pDVar26 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(this_00->fields).nodeIdToWoMap;
        if (pDVar26 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__set_Item
                  (pDVar26,(int32_t)puStack_21,unaff_ESI,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__set_Item_int__MVMovingPlatformNode_
                  );
        pDStack_25 = (this_00->fields).woIdToNodeIdMap;
        key = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
              Collection_1_VoxelHit__get_Items
                        ((Collection_1_VoxelHit_ *)unaff_ESI,(MethodInfo *)0x0);
        if (pDStack_25 == (Dictionary_2_System_Int32_System_Int32_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
        Dictionary_2_System_Int32_System_Int32__set_Item
                  (pDStack_25,(int32_t)key,(int32_t)puStack_21,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                  );
      }
    }
    *piStack_13 = 0xfd;
code_?:
    pTVar27 = (TerrainUtility_TerrainMap *)0x0;
    puStack_21 = (undefined *)0x0;
    func_?();
    pTVar14 = pTStack_4;
    unaff_ESI = pTVar27;
    if (pTStack_4 == (TerrainUtility_TerrainMap *)0x0) {
      if (*piStack_13 == 0x243) goto code_?;
      if (*piStack_13 == 0xfd) {
        pTVar27 = (TerrainUtility_TerrainMap *)0xffffffff;
        puStack_21 = (undefined *)0xffffffff;
      }
      pDVar12 = (this_00->fields).nextNodeMap;
      unaff_ESI = pTVar27;
      if (pDVar12 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar15 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[WinningConditionType,System::Object]::
                 Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                             *)&stack0xffffff84,
                            (Dictionary_2_WinningConditionType_System_Object_ *)pDVar12,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                           );
        auStack_5._0_4_ = pDVar15->dictionary;
        auStack_5._4_4_ = pDVar15->next;
        auStack_5._8_4_ = pDVar15->stamp;
        auStack_5._12_4_ = (pDVar15->current).key;
        auStack_5._16_4_ = (pDVar15->current).value;
        while (cVar16 = func_?(auStack_5,
                                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                      ), unaff_ESI = pTStack_4, cVar16 != '\0') {
          KStack_9 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                                ((LevelRewardsManager *)auStack_5,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                                );
          piVar17 = (int *)func_?();
          unaff_ESI = pTVar27;
          if (piVar17 == (int *)0x0) goto code_?;
          pSVar18 = (String *)(**(code **)(*piVar17 + 0xd8))(piVar17,*(undefined4 *)(*piVar17 + 0xdc));
          if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__Convert);
          }
          unaff_ESI = (TerrainUtility_TerrainMap *)
                      mscorlib.dll::System::Convert::Convert_ToInt32_10(pSVar18,(MethodInfo *)0x0);
          func_?();
          piVar22 = (int32_t *)func_?();
          iStack_11 = *piVar22;
          pDVar26 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)(this_00->fields).nodeIdToWoMap;
          if (pDVar26 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         *)0x0) goto code_?;
          pTVar27 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                              (pDVar26,(int32_t)unaff_ESI,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
                              );
          pDVar26 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)(this_00->fields).nodeIdToWoMap;
          unaff_ESI = pTVar27;
          if (((pDVar26 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                           *)0x0) ||
              (pTVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                         Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                   (pDVar26,iStack_11,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
                                   ), pTVar27 == (TerrainUtility_TerrainMap *)0x0)) ||
             (pTVar27[7].fields.m_patchSize.z = (float)pTVar14,
             pTVar14 == (TerrainUtility_TerrainMap *)0x0)) goto code_?;
          pTVar14[7].fields.m_patchSize.y = (float)pTVar27;
        }
        piStack_13[(int)(puStack_21 + 1)] = 0x188;
        func_?(auStack_5,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                       );
        if (unaff_ESI != (TerrainUtility_TerrainMap *)0x0) goto code_?;
        pDVar12 = (this_00->fields)._.blueprintData;
        if (pDVar12 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          pPVar28 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                    Dictionary_2_System_Type_Pool__get_Item
                              ((Dictionary_2_System_Type_Pool_ *)pDVar12,
                               (Type *)StringLiteral_StartNode,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
          piVar22 = (int32_t *)func_?(pPVar28,TypeInfo__System__Int32);
          pDVar26 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)(this_00->fields).nodeIdToWoMap;
          if (pDVar26 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         *)0x0) {
            pMVar29 = (MVMovingPlatformNode *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                (pDVar26,*piVar22,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
                                );
            (this_00->fields).startNode = pMVar29;
            pMVar30 = MVBlueprintBase::MVBlueprintBase_GetChild
                                ((MVBlueprintBase *)this_00,StringLiteral_Platform,(MethodInfo *)0x0
                                );
            this_01 = (MVMovingPlatform *)func_?(pMVar30,TypeInfo__MVMovingPlatform);
            (this_00->fields).platform = this_01;
            if (this_01 == (MVMovingPlatform *)0x0) {
              in_stack_10 = (MVMovingPlatformGroup *)(this_00->fields)._._._._.id;
              arg1 = (Object *)func_?(TypeInfo__System__Int32,&stack0x0000000c);
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                func_?(TypeInfo__System__String);
              }
              pSVar18 = mscorlib.dll::System::String::String_Concat_1
                                 ((Object *)StringLiteral_Platform_group_,arg1,
                                  (Object *)StringLiteral__init___Could_not_find_child_pla,
                                  (MethodInfo *)0x0);
              if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                        ((Object *)pSVar18,(MethodInfo *)0x0);
              (this_00->fields).initializeFailed = 1;
code_?:
              *unaff_FS_OFFSET = uVar1;
              return;
            }
            pMVar29 = (this_00->fields).startNode;
            if (pMVar29 != (MVMovingPlatformNode *)0x0) {
              pMVar31 = (pMVar29->fields)._Next_k__BackingField;
              (this_01->fields).start = pMVar29;
              (this_01->fields).end = pMVar31;
              MVMovingPlatform::MVMovingPlatform_RecalculateMovement(this_01,(MethodInfo *)0x0);
              pUVar32 = (this_00->fields)._._._.ScaleChanged;
              this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                         *)func_?(
                                          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                                          );
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (this_02,(Object *)in_stack_10,
                         MethodInfo__MVMovingPlatformGroup__WorldObjectClient_ScaleChangedHandler_System__Object__ScaleChangedEventArgs_
                         ,
                         MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>__UnityAction_System__Object__void__
                        );
              pDVar33 = mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)pUVar32,(Delegate *)this_02,(MethodInfo *)0x0);
              pUVar32 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)
                        func_?(pDVar33,
                                        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                                       );
              (in_stack_10->fields)._._._.ScaleChanged = pUVar32;
              MVMovingPlatformGroup_UpdateLine(in_stack_10,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
      }
      goto code_?;
    }
  }
  func_?(pTVar14,0,0);
code_?:
  func_?(unaff_ESI,0,0);
  pcVar34 = (code *)swi(3);
  (*pcVar34)();
  return;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVMovingPlatformGroup::MVMovingPlatformGroup_OnEnterObject
               (MVMovingPlatformGroup *this,EditorStateMachine *e,MethodInfo *method)

{
  pMVar1 = (this->fields).platform;
  if (pMVar1 != (MVMovingPlatform *)0x0) {
    (*(code *)(pMVar1->klass->vtable).OnEnterObject.method)
              (pMVar1,e,(pMVar1->klass->vtable).OnExitObject.methodPtr);
    return 1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void SetWorldObjectToPurchased() */

void Assembly-CSharp.dll::MVMovingPlatformGroup::MVMovingPlatformGroup_SetWorldObjectToPurchased
               (MVMovingPlatformGroup *this,MethodInfo *method)

{
  pIStack_1 = (IEqualityComparer_1_WinningConditionType_ *)0xffffffff;
  puStack_2 = &DAT_?;
  iStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int32_t)&iStack_3;
  puStack_4 = &stack0xffffffb0;
  puVar5 = &stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pWStack_6 = (WinningConditionType__Enum__Array *)0x0;
  pDStack_7 = (Dictionary_2_WinningConditionType_System_Object___Class *)0x0;
  pMStack_8 = (MonitorData *)0x0;
  pIStack_9 = (Int32__Array *)0x0;
  pLStack_10 = (Link__Array *)0x0;
  func_?();
  puStack_11 = (undefined4 *)&stack0xffffffb0;
  puStack_4 = &stack0xffffffb0;
  MVWorldObjectClient::MVWorldObjectClient_SetWorldObjectToPurchased
            ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  pMVar12 = (this->fields).platform;
  if ((pMVar12 != (MVMovingPlatform *)0x0) &&
     (pMVar13 = (pMVar12->fields)._._CubeModel_k__BackingField, pMVar13 != (MVCubeModelInstance *)0x0))
  {
    (*(code *)(pMVar13->klass->vtable).SetWorldObjectToPurchased.method)();
    this_00 = (this->fields).nodeIdToWoMap;
    if ((this_00 != (Dictionary_2_System_Int32_MVMovingPlatformNode_ *)0x0) &&
       (this_01 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[WinningConditionType,System::Object]::
                  Dictionary_2_WinningConditionType_System_Object__get_Values
                            ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Values__
                            ),
       this_01 !=
       (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)) {
      pDVar14 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                         (&DStack_15,this_01,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVMovingPlatformNode>__GetEnumerator__
                         );
      pDStack_7 = (Dictionary_2_WinningConditionType_System_Object___Class *)
                   (pDVar14->host_enumerator).dictionary;
      pMStack_8 = (MonitorData *)(pDVar14->host_enumerator).next;
      pIStack_9 = (Int32__Array *)(pDVar14->host_enumerator).stamp;
      pLStack_10 = (Link__Array *)(pDVar14->host_enumerator).current.key;
      pWStack_6 = (WinningConditionType__Enum__Array *)(pDVar14->host_enumerator).current.value;
      pIStack_1 = (IEqualityComparer_1_WinningConditionType_ *)0x0;
      while( true ) {
        DStack_15.host_enumerator.next =
             (int32_t)
             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__MoveNext__
        ;
        DStack_15.host_enumerator.dictionary =
             (Dictionary_2_WinningConditionType_System_Object_ *)&pDStack_7;
        cVar16 = func_?();
        if (cVar16 == '\0') {
          *puStack_11 = 0x59;
          pIStack_1 = (IEqualityComparer_1_WinningConditionType_ *)0xffffffff;
          DStack_15.host_enumerator.next =
               (int32_t)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__Dispose__
          ;
          DStack_15.host_enumerator.dictionary =
               (Dictionary_2_WinningConditionType_System_Object_ *)&pDStack_7;
          func_?();
          *unaff_FS_OFFSET = iStack_3;
          return;
        }
        DStack_15.host_enumerator.next =
             (int32_t)
             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__get_Current__
        ;
        DStack_15.host_enumerator.dictionary =
             (Dictionary_2_WinningConditionType_System_Object_ *)&pDStack_7;
        piVar17 = (int *)func_?();
        if (piVar17 == (int *)0x0) break;
        (**(code **)(*piVar17 + 0x230))();
      }
    }
  }
  func_?();
  DStack_15.host_enumerator.next = 0;
  DStack_15.host_enumerator.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void UpdateLine() */

void Assembly-CSharp.dll::MVMovingPlatformGroup::MVMovingPlatformGroup_UpdateLine
               (MVMovingPlatformGroup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).initializeFailed != 0) {
    return;
  }
  pLVar1 = (this->fields).lineRenderer;
  if (pLVar1 != (LineRenderer *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_useWorldSpace
              (pLVar1,0,(MethodInfo *)0x0);
    this_00 = (this->fields).nodeIdToWoMap;
    pLVar1 = (this->fields).lineRenderer;
    if ((this_00 != (Dictionary_2_System_Int32_MVMovingPlatformNode_ *)0x0) &&
       (value = System.Core.dll::System::Linq::
                Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
                KeyValuePair`2[System::Object,System::Object],System::Object]::
                Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                          ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                            *)this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Count__
                          ), pLVar1 != (LineRenderer *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_positionCount
                (pLVar1,(int32_t)value,(MethodInfo *)0x0);
      puVar2 = (undefined8 *)(*(code *)(this->klass->vtable).get_Scale.method)(&stack0xffffffe4);
      pLVar1 = (this->fields).lineRenderer;
      fStack_3 = (float)*puVar2;
      fStack_3 = fStack_3 * _UNK_?;
      if (pLVar1 != (LineRenderer *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_startWidth
                  (pLVar1,fStack_3,(MethodInfo *)0x0);
        pLVar1 = (this->fields).lineRenderer;
        if (pLVar1 != (LineRenderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_endWidth
                    (pLVar1,fStack_3,(MethodInfo *)0x0);
          pMVar4 = (this->fields).startNode;
          pLVar1 = (this->fields).lineRenderer;
          index = 0;
          if ((pMVar4 != (MVMovingPlatformNode *)0x0) &&
             (pVVar5 = (Vector3 *)
                       (*(code *)(pMVar4->klass->vtable).get_Position.method)
                                 (&stack0xffffffe4,pMVar4,
                                  (pMVar4->klass->vtable).set_Position.methodPtr),
             pLVar1 != (LineRenderer *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                      (pLVar1,0,*pVVar5,(MethodInfo *)0x0);
            do {
              pMVar6 = (pMVar4->fields)._Next_k__BackingField;
              if (pMVar6 == (MVMovingPlatformNode *)0x0) {
                return;
              }
              if (pMVar6 == (this->fields).startNode) {
                return;
              }
              pLVar1 = (this->fields).lineRenderer;
              index = index + 1;
              pVVar5 = (Vector3 *)
                       (*(code *)(pMVar6->klass->vtable).get_Position.method)
                                 (&stack0xffffffe4,pMVar6,
                                  (pMVar6->klass->vtable).set_Position.methodPtr);
              if (pLVar1 == (LineRenderer *)0x0) break;
              UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                        (pLVar1,index,*pVVar5,(MethodInfo *)0x0);
              pMVar4 = (pMVar4->fields)._Next_k__BackingField;
            } while (pMVar4 != (MVMovingPlatformNode *)0x0);
          }
        }
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void WorldObjectClient_PositionChangedHandler(Object, PositionChangedEventArgs) */

void Assembly-CSharp.dll::MVMovingPlatformGroup::
     MVMovingPlatformGroup_WorldObjectClient_PositionChangedHandler
               (MVMovingPlatformGroup *this,Object *sender,PositionChangedEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (sender != (Object *)0x0) {
    bVar1 = (TypeInfo__MVMovingPlatformNode->_1).naturalAligment;
    if (((sender->klass->_1).naturalAligment < bVar1) ||
       ((MVMovingPlatformNode__Class *)(sender->klass->_1).typeHierarchy[bVar1 - 1] !=
        TypeInfo__MVMovingPlatformNode)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    pMVar3 = (MVMovingPlatformNode *)0x0;
    if (bVar2) {
      pMVar3 = (MVMovingPlatformNode *)sender;
    }
    if (pMVar3 != (MVMovingPlatformNode *)0x0) {
      this_00 = (this->fields).platform;
      if (this_00 != (MVMovingPlatform *)0x0) {
        if ((this_00->fields).start != pMVar3) {
          if (this_00 == (MVMovingPlatform *)0x0) goto code_?;
          if ((this_00->fields).end != pMVar3) goto code_?;
        }
        if (this_00 != (MVMovingPlatform *)0x0) {
          MVMovingPlatform::MVMovingPlatform_RecalculateMovement(this_00,(MethodInfo *)0x0);
          goto code_?;
        }
      }
code_?:
      func_?(0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
code_?:
  MVMovingPlatformGroup_UpdateLine(this,(MethodInfo *)0x0);
  return;
}


/* Void WorldObjectClient_RotationChangedHandler(Object, RotationChangedEventArgs) */

void Assembly-CSharp.dll::MVMovingPlatformGroup::
     MVMovingPlatformGroup_WorldObjectClient_RotationChangedHandler
               (MVMovingPlatformGroup *this,Object *sender,RotationChangedEventArgs *e,
               MethodInfo *method)

{
  this_00 = (this->fields).platform;
  if (this_00 != (MVMovingPlatform *)0x0) {
    MVMovingPlatform::MVMovingPlatform_RecalculateMovement(this_00,(MethodInfo *)0x0);
    MVMovingPlatformGroup_UpdateLine(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void WorldObjectClient_ScaleChangedHandler(Object, ScaleChangedEventArgs) */

void Assembly-CSharp.dll::MVMovingPlatformGroup::
     MVMovingPlatformGroup_WorldObjectClient_ScaleChangedHandler
               (MVMovingPlatformGroup *this,Object *sender,ScaleChangedEventArgs *e,
               MethodInfo *method)

{
  MVMovingPlatformGroup_UpdateLine(this,(MethodInfo *)0x0);
  return;
}


/* Void WorldObjectClient_SelectedChangedHandler(Object, SelectedEventArgs) */

void Assembly-CSharp.dll::MVMovingPlatformGroup::
     MVMovingPlatformGroup_WorldObjectClient_SelectedChangedHandler
               (MVMovingPlatformGroup *this,Object *sender,SelectedEventArgs *e,MethodInfo *method)

{
  if ((e != (SelectedEventArgs *)0x0) &&
     (pMVar1 = (this->fields).platform, pMVar1 != (MVMovingPlatform *)0x0)) {
    (pMVar1->fields)._.pausedMovement = (e->fields).Selected;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVMovingPlatformGroup(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVMovingPlatformGroup::MVMovingPlatformGroup__ctor
               (MVMovingPlatformGroup *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_MVMovingPlatformNode_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__Dictionary__
            );
  (this->fields).nodeIdToWoMap = this_00;
  this_01 = (Dictionary_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
  (this->fields).woIdToNodeIdMap = this_01;
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?();
  }
  this_02 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_02 != (PrefabPool *)0x0) {
    prefabObject = MVMovingPlatformNode::MVMovingPlatformNode_get_Next
                             ((MVMovingPlatformNode *)this_02,(MethodInfo *)0x0);
    MVBlueprintBase::MVBlueprintBase__ctor_2
              ((MVBlueprintBase *)this,data,(GameObject *)prefabObject,worldObjects,
               (MethodInfo *)0x0);
    pDVar1 = (this->fields)._.blueprintData;
    if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)pDVar1,(Type *)StringLiteral_NextNodeMap
                          ,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      pDVar1 = pDVar2;
      if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        bVar3 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar2->klass->_1).naturalAligment < bVar3) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar2->klass->_1).typeHierarchy[bVar3 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        pDVar1 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar4) {
          pDVar1 = pDVar2;
        }
        if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      }
      (this->fields).nextNodeMap = pDVar1;
      this_03 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                          ((DayNightCycle *)this,(MethodInfo *)0x0);
      if (this_03 != (CelestialParam *)0x0) {
        pUVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentsInChildren_29
                           ((GameObject *)this_03,
                            UnityEngine__LineRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::LineRenderer>__
                           );
        piVar6 = &(this->fields)._._._.interactionFlags;
        *(uint *)piVar6 = (uint)*piVar6 | 0x9000;
        piVar7 = &(this->fields)._._._.previewLayerMask;
        *piVar7 = *piVar7 | 0x800;
        (this->fields).lineRenderer = (LineRenderer *)pUVar5;
        *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) =
             *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVMovingPlatformGroup::MVMovingPlatformGroup_get_DocumentationType
          (MVMovingPlatformGroup *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_MovingPlatform;
}


/* Boolean get_Visible() */

bool Assembly-CSharp.dll::MVMovingPlatformGroup::MVMovingPlatformGroup_get_Visible
               (MVMovingPlatformGroup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    pUVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_29
                       (this_00,
                        UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                       );
    uVar2 = 0;
    if (pUVar1 != (UseInteratorVisualization__Array *)0x0) {
      ppUVar3 = pUVar1->vector;
      while( true ) {
        if ((int)pUVar1->max_length <= (int)uVar2) {
          return 0;
        }
        if (pUVar1->max_length <= uVar2) break;
        if (*ppUVar3 == (UseInteratorVisualization *)0x0) goto code_?;
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                          ((Renderer *)*ppUVar3,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          return 1;
        }
        uVar2 = uVar2 + 1;
        ppUVar3 = ppUVar3 + 1;
      }
      goto code_?;
    }
  }
code_?:
  func_?(0);
code_?:
  uVar5 = func_?(0,0);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  bVar4 = (*pcVar6)();
  return bVar4;
}


/* Void set_Visible(Boolean) */

void Assembly-CSharp.dll::MVMovingPlatformGroup::MVMovingPlatformGroup_set_Visible
               (MVMovingPlatformGroup *this,bool value,MethodInfo *method)

{
  MVWorldObjectClient::MVWorldObjectClient_set_Visible
            ((MVWorldObjectClient *)this,value,(MethodInfo *)0x0);
  pMVar1 = (this->fields).platform;
  if ((pMVar1 != (MVMovingPlatform *)0x0) &&
     (pMVar2 = (pMVar1->fields)._._CubeModel_k__BackingField, pMVar2 != (MVCubeModelInstance *)0x0))
  {
    (*(code *)(pMVar2->klass->vtable).set_Visible.method)(pMVar2);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


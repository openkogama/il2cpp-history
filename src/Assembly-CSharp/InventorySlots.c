
/* Void AddItem(GameObject, Int32) */

void Assembly-CSharp.dll::InventorySlots::InventorySlots_AddItem
               (InventorySlots *this,GameObject *item,int32_t slotIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).inventorySlots;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                        (this_00,slotIndex,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Item_int_
                        );
    if (this_01 != (TerrainUtility_TerrainMap *)0x0) {
      InventorySlot::InventorySlot_Set((InventorySlot *)this_01,item,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::InventorySlots::InventorySlots_Clear
               (InventorySlots *this,MethodInfo *method)

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
  this_00 = (this->fields).inventorySlots;
  if ((this_00 != (Dictionary_2_System_Int32_InventorySlot_ *)0x0) &&
     (this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
                ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                          ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Values__
                          ),
     this_01 != (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)
     ) {
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
    Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                *)&stack0xffffffbc,this_01,
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_InventorySlot>__GetEnumerator__
              );
    uStack_1 = 0;
    while( true ) {
      cVar4 = func_?();
      if (cVar4 == '\0') {
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      this_02 = (InventorySlot *)func_?();
      if (this_02 == (InventorySlot *)0x0) break;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pGVar5 = InventorySlot::InventorySlot_get_Item(this_02,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pGVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar6 != 0) {
        pGVar5 = InventorySlot::InventorySlot_get_Item(this_02,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)pGVar5,(MethodInfo *)0x0);
      }
    }
  }
  func_?(0);
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* InventorySlot GetSlotBasedOnAbsolute(Int32) */

InventorySlot *
Assembly-CSharp.dll::InventorySlots::InventorySlots_GetSlotBasedOnAbsolute
          (InventorySlots *this,int32_t absoluteSlotIndex,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Object *)0x0;
  pIStack_7 = (InventorySlot *)0x0;
  uStack_8 = 0;
  iStack_9 = 0;
  KStack_10.key = 0;
  KStack_10.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  uStack_11 = 0xffffffff;
  this_00 = (this->fields).inventorySlots;
  puStack_12 = &stack0xffffff98;
  puStack_4 = &stack0xffffff98;
  if (this_00 == (Dictionary_2_System_Int32_InventorySlot_ *)0x0) {
code_?:
    iVar13 = func_?(0);
  }
  else {
    puStack_12 = &stack0xffffff98;
    puStack_4 = &stack0xffffff98;
    pDVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_15,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar14->dictionary;
    auStack_6._4_4_ = pDVar14->next;
    auStack_6._8_4_ = pDVar14->stamp;
    auStack_6._12_4_ = (pDVar14->current).key;
    auStack_6._16_4_ = (pDVar14->current).value;
    uStack_1 = 0;
    do {
      cVar16 = func_?(auStack_6,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_InventorySlot>__MoveNext__
                             );
      if (cVar16 == '\0') {
        iVar17 = 0x57;
        goto code_?;
      }
      KStack_10 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_InventorySlot>__get_Current__
                            );
      iVar17 = func_?();
      if (iVar17 == 0) goto code_?;
    } while (*(int *)(iVar17 + 0xc) != absoluteSlotIndex);
    pIStack_7 = (InventorySlot *)
                 func_?(&KStack_10,
                                 MethodInfo__System__Collections__Generic__KeyValuePair<int,_InventorySlot>__get_Value__
                                );
    iVar17 = 0x59;
code_?:
    uStack_1 = 0xffffffff;
    func_?(auStack_6,
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_InventorySlot>__Dispose__
                   );
    iVar13 = iStack_9;
    if (iStack_9 == 0) {
      if (iVar17 != 0x59) {
        *unaff_FS_OFFSET = uStack_3;
        return (InventorySlot *)0x0;
      }
      *unaff_FS_OFFSET = uStack_3;
      return pIStack_7;
    }
  }
  func_?(iVar13,0,0);
  pcVar18 = (code *)swi(3);
  pIVar19 = (InventorySlot *)(*pcVar18)();
  return pIVar19;
}


/* Void HighlightSlot(Int32) */

void Assembly-CSharp.dll::InventorySlots::InventorySlots_HighlightSlot
               (InventorySlots *this,int32_t slotPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).inventorySlots;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    pTVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
             Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                       (this_00,slotPosition,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Item_int_
                       );
    if ((pTVar1 != (TerrainUtility_TerrainMap *)0x0) &&
       (this_01 = (NotificationFade *)(pTVar1->fields).m_patchSize.z,
       this_01 != (NotificationFade *)0x0)) {
      NotificationFade::NotificationFade_Activate(this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize(Int32) */

void Assembly-CSharp.dll::InventorySlots::InventorySlots_Initialize
               (InventorySlots *this,int32_t numberOfSlots,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  key = 0;
  (this->fields)._SlotCountPerPage_k__BackingField = numberOfSlots;
  if (0 < numberOfSlots) {
    do {
      pXVar1 = (XpBoostParticlePreviewer *)(this->fields).inventorySlotPrefab;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         (pXVar1,
                          InventorySlot_MethodInfo__UnityEngine__Object__Instantiate<InventorySlot>_InventorySlot_
                         );
      if (pXVar1 == (XpBoostParticlePreviewer *)0x0) {
code_?:
        func_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)pXVar1,(MethodInfo *)0x0);
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (this_01 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_01,parent,0,(MethodInfo *)0x0);
      this_00 = (this->fields).inventorySlots;
      if (this_00 == (Dictionary_2_System_Int32_InventorySlot_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Add
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,(Object *)pXVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__Add_int__InventorySlot_
                );
      key = key + 1;
    } while (key < (int)this_00);
  }
  return;
}


/* Void SlotChanged(GameObject, Int32) */

void Assembly-CSharp.dll::InventorySlots::InventorySlots_SlotChanged
               (InventorySlots *this,GameObject *draggedItem,int32_t toSlotIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_01 = TypeInfo__InventorySlots___SlotChanged_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_01);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).state = toSlotIndex;
    if (draggedItem != (GameObject *)0x0) {
      pUVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                         (draggedItem,
                          InventoryItemMetaData_MethodInfo__UnityEngine__GameObject__GetComponent<InventoryItemMetaData>__
                         );
      if (pUVar1 != (UseInteractorHandler *)0x0) {
        pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pUVar1,
                            (MethodInfo *)0x0);
        absoluteSlotIndex = (this_00->fields).state;
        (this_00->fields)._._._._.m_CachedPtr = pOVar2;
        this_01 = InventorySlots_GetSlotBasedOnAbsolute(this,absoluteSlotIndex,(MethodInfo *)0x0);
        if (this_01 != (InventorySlot *)0x0) {
          pGVar3 = InventorySlot::InventorySlot_get_Item(this_01,(MethodInfo *)0x0);
          method_00 = (MethodInfo *)
                      InventorySlots_GetSlotBasedOnAbsolute
                                ((InventorySlots *)&UNK_?,
                                 (int32_t)(this_00->fields)._._._._.m_CachedPtr,(MethodInfo *)0x0);
          pUVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                             (draggedItem,method_00);
          if (pUVar1 != (UseInteractorHandler *)0x0) {
            LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
                      ((LockCursorManager3DMode *)pUVar1,
                       (Action_1_Boolean_ *)(this_00->fields).state,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?();
            }
            bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                              ((Object_1 *)pGVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar4 != 0) {
              if (pGVar3 == (GameObject *)0x0) goto code_?;
              pUVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                       GameObject_GetComponent_47
                                 (pGVar3,
                                  InventoryItemMetaData_MethodInfo__UnityEngine__GameObject__GetComponent<InventoryItemMetaData>__
                                 );
              if (pUVar1 == (UseInteractorHandler *)0x0) goto code_?;
              LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
                        ((LockCursorManager3DMode *)pUVar1,(this_00->fields)._._._._.m_CachedPtr,
                         (MethodInfo *)0x0);
            }
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?();
            }
            bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                              ((Object_1 *)method_00,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar4 == 0) {
              if (method_00 == (MethodInfo *)0x0) goto code_?;
              InventorySlot::InventorySlot_Set((InventorySlot *)method_00,pGVar3,(MethodInfo *)0x0);
            }
            else {
              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                        ((Object_1 *)pGVar3,(MethodInfo *)0x0);
            }
            InventorySlot::InventorySlot_Set(this_01,draggedItem,(MethodInfo *)0x0);
            pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)&UNK_?,(MethodInfo *)0x0);
            if (pGVar3 != (GameObject *)0x0) {
              pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (pGVar3,(MethodInfo *)0x0);
              if (pTVar5 != (Transform *)0x0) {
                pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                                   (pTVar5,(MethodInfo *)0x0);
                if (pTVar5 != (Transform *)0x0) {
                  pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_1_get_gameObject((Component_1 *)pTVar5,(MethodInfo *)0x0);
                  this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                             *)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (this_02,(Object *)this_00,
                             MethodInfo__InventorySlots___SlotChanged_c__AnonStorey0____m__0_UnityEngine__EventSystems__ISlotChanged__UnityEngine__EventSystems__BaseEventData_
                             ,
                             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ISlotChanged>__EventFunction_System__Object__void__
                            );
                  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                              methodPtr & 0x2000000) != 0) &&
                     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0))
                  {
                    func_?();
                  }
                  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                  ExecuteEvents_ExecuteHierarchy_63
                            (pGVar3,(BaseEventData *)0x0,
                             (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_02,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ISlotChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ISlotChanged>_
                            );
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateAbsoluteSlotValues(Int32, Int32) */

void Assembly-CSharp.dll::InventorySlots::InventorySlots_UpdateAbsoluteSlotValues
               (InventorySlots *this,int32_t page,int32_t numberOfSlots,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa8;
  puVar5 = &stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  this_00 = (this->fields).inventorySlots;
  puStack_8 = (undefined4 *)&stack0xffffffa8;
  puStack_4 = &stack0xffffffa8;
  if (this_00 != (Dictionary_2_System_Int32_InventorySlot_ *)0x0) {
    puStack_8 = (undefined4 *)&stack0xffffffa8;
    puStack_4 = &stack0xffffffa8;
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_10,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar9->dictionary;
    auStack_6._4_4_ = pDVar9->next;
    auStack_6._8_4_ = pDVar9->stamp;
    auStack_6._12_4_ = (pDVar9->current).key;
    auStack_6._16_4_ = (pDVar9->current).value;
    uStack_1 = 0;
    while( true ) {
      cVar11 = func_?(auStack_6,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_InventorySlot>__MoveNext__
                             );
      if (cVar11 == '\0') {
        *puStack_8 = 0x51;
        uStack_1 = 0xffffffff;
        func_?(auStack_6,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_InventorySlot>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_InventorySlot>__get_Current__
                            );
      iVar12 = func_?();
      iVar13 = func_?();
      unaff_ESI = 0;
      if (iVar12 == 0) break;
      *(int32_t *)(iVar12 + 0xc) = (page + -1) * numberOfSlots + iVar13;
    }
  }
  func_?(0);
  func_?(unaff_ESI,0,0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* InventorySlots() */

void Assembly-CSharp.dll::InventorySlots::InventorySlots__ctor
               (InventorySlots *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_InventorySlot_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__Dictionary__)
  ;
  (this->fields).inventorySlots = this_00;
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  return;
}



/* Void AddObject(GameObject, Int32) */

void Assembly-CSharp.dll::InventoryController::InventoryController_AddObject
               (InventoryController *this,GameObject *item,int32_t slotIndex,MethodInfo *method)

{
  pIVar1 = (this->fields).inventorySlots;
  if (pIVar1 == (InventorySlots *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(pIVar1->fields).inventorySlots;
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
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void AddTab(Int32, String) */

void Assembly-CSharp.dll::InventoryController::InventoryController_AddTab
               (InventoryController *this,int32_t categoryId,String *tabname,MethodInfo *method)

{
  pTVar1 = (this->fields).tabMenu;
  if (pTVar1 != (TabMenuBase *)0x0) {
    (*(code *)(pTVar1->klass->vtable).__unknown.method)
              (pTVar1,categoryId,tabname,(pTVar1->klass->vtable).__unknown_1.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::InventoryController::InventoryController_Clear
               (InventoryController *this,MethodInfo *method)

{
  pIVar1 = (this->fields).inventorySlots;
  if (pIVar1 == (InventorySlots *)0x0) {
    uStack_2 = 0;
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uStack_2 = 0xffffffff;
  puStack_4 = &DAT_?;
  uStack_5 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_5;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  this_00 = (pIVar1->fields).inventorySlots;
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
    uStack_2 = 0;
    while( true ) {
      cVar6 = func_?();
      if (cVar6 == '\0') {
        uStack_2 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
      this_02 = (InventorySlot *)func_?();
      if (this_02 == (InventorySlot *)0x0) break;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pGVar7 = InventorySlot::InventorySlot_get_Item(this_02,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pGVar7,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar8 != 0) {
        pGVar7 = InventorySlot::InventorySlot_get_Item(this_02,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)pGVar7,(MethodInfo *)0x0);
      }
    }
  }
  func_?(0);
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* List`1[SoundViewItem] GetComponentsOfSlotsWithType[SoundViewItem]() */

List_1_SoundViewItem_ *
Assembly-CSharp.dll::InventoryController::InventoryController_GetComponentsOfSlotsWithType_1
          (InventoryController *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff80;
  puVar5 = &stack0xffffff80;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Object *)0x0;
  iStack_7 = 0;
  KStack_8.key = 0;
  KStack_8.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  pIVar9 = *method->parameters;
  puStack_10 = (undefined4 *)&stack0xffffff80;
  puStack_4 = &stack0xffffff80;
  if ((pIVar9[0x17].type & 1) == 0) {
    puStack_10 = (undefined4 *)&stack0xffffff80;
    puStack_4 = &stack0xffffff80;
    func_?(pIVar9);
  }
  pLVar11 = (List_1_SoundViewItem_ *)func_?(pIVar9);
  pLStack_12 = pLVar11;
  (*(code *)method->parameters[1]->data)(pLVar11,method->parameters[1]);
  this_00 = (this->fields).inventorySlots;
  pLStack_13 = pLVar11;
  if ((this_00 == (InventorySlots *)0x0) ||
     (this_01 = (Dictionary_2_WinningConditionType_System_Object_ *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                           (MethodInfo *)0x0),
     this_01 == (Dictionary_2_WinningConditionType_System_Object_ *)0x0)) {
code_?:
    func_?();
  }
  else {
    pDVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
              Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                        (&DStack_15,this_01,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__GetEnumerator__
                        );
    auStack_6._0_4_ = pDVar14->dictionary;
    auStack_6._4_4_ = pDVar14->next;
    auStack_6._8_4_ = pDVar14->stamp;
    auStack_6._12_4_ = (pDVar14->current).key;
    auStack_6._16_4_ = (pDVar14->current).value;
    uStack_1 = 0;
    while (cVar16 = func_?(), cVar16 != '\0') {
      KStack_8 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_InventorySlot>__get_Current__
                            );
      pIVar17 = (InventorySlot *)func_?();
      if (pIVar17 == (InventorySlot *)0x0) goto code_?;
      pGVar18 = InventorySlot::InventorySlot_get_Item(pIVar17,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar19 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pGVar18,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar19 == 0) {
        pIVar17 = (InventorySlot *)func_?();
        if ((pIVar17 == (InventorySlot *)0x0) ||
           (pGVar18 = InventorySlot::InventorySlot_get_Item(pIVar17,(MethodInfo *)0x0),
           pGVar18 == (GameObject *)0x0)) goto code_?;
        x = (Object_1 *)(*(code *)method->parameters[2]->data)();
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar19 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          (x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar19 != 0) {
          if (pLVar11 == (List_1_SoundViewItem_ *)0x0) goto code_?;
          (*(code *)method->parameters[4]->data)();
        }
      }
    }
    *puStack_10 = 0x89;
    uVar20 = auStack_6._16_4_;
    uVar21 = auStack_6._12_4_;
    uVar22 = auStack_6._8_4_;
    uStack_1 = 0xffffffff;
    uVar23 = 0;
    uVar24._0_1_ = (
                  TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_InventorySlot>
                  ->_1).rank;
    uVar24._1_1_ = (
                  TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_InventorySlot>
                  ->_1).minimumAlignment;
    pLVar25 = (LevelRewardsManager__Class *)auStack_6._0_4_;
    pMVar26 = (MonitorData *)auStack_6._4_4_;
    if (uVar24 != 0) {
      do {
        if (TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_InventorySlot>
            ->interfaceOffsets[uVar23].interfaceType == (Il2CppClass *)TypeInfo__System__IDisposable
           ) {
          ppMVar27 = &(&(
                        TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_InventorySlot>
                        ->vtable).Equals)
                      [TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_InventorySlot>
                       ->interfaceOffsets[uVar23].offset].method;
          goto code_?;
        }
        uVar23 = uVar23 + 1;
      } while (uVar23 < uVar24);
    }
    ppMVar27 = (MethodInfo **)func_?();
code_?:
    (*(code *)*ppMVar27)();
    auStack_6._0_4_ = pLVar25;
    auStack_6._4_4_ = pMVar26;
    auStack_6._8_4_ = uVar22;
    auStack_6._12_4_ = uVar21;
    auStack_6._16_4_ = uVar20;
    if (iStack_7 == 0) {
      *unaff_FS_OFFSET = uStack_3;
      return pLStack_12;
    }
  }
  func_?();
  pcVar28 = (code *)swi(3);
  pLVar11 = (List_1_SoundViewItem_ *)(*pcVar28)();
  return pLVar11;
}


/* Void HighlightSlot(Int32) */

void Assembly-CSharp.dll::InventoryController::InventoryController_HighlightSlot
               (InventoryController *this,int32_t slotPosition,MethodInfo *method)

{
  pIVar1 = (this->fields).inventorySlots;
  if (pIVar1 == (InventorySlots *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(pIVar1->fields).inventorySlots;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    pTVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
             Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                       (this_00,slotPosition,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Item_int_
                       );
    if ((pTVar3 != (TerrainUtility_TerrainMap *)0x0) &&
       (this_01 = (NotificationFade *)(pTVar3->fields).m_patchSize.z,
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

void Assembly-CSharp.dll::InventoryController::InventoryController_Initialize
               (InventoryController *this,int32_t numberOfSlots,MethodInfo *method)

{
  (this->fields).numberOfSlots = numberOfSlots;
  this_01 = (this->fields).inventorySlots;
  if (this_01 == (InventorySlots *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  key = 0;
  (this_01->fields)._SlotCountPerPage_k__BackingField = numberOfSlots;
  if (0 < numberOfSlots) {
    do {
      pXVar2 = (XpBoostParticlePreviewer *)(this_01->fields).inventorySlotPrefab;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pXVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         (pXVar2,
                          InventorySlot_MethodInfo__UnityEngine__Object__Instantiate<InventorySlot>_InventorySlot_
                         );
      if (pXVar2 == (XpBoostParticlePreviewer *)0x0) {
code_?:
        func_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)pXVar2,(MethodInfo *)0x0);
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this_01,(MethodInfo *)0x0);
      if (this_02 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_02,parent,0,(MethodInfo *)0x0);
      this_00 = (this_01->fields).inventorySlots;
      if (this_00 == (Dictionary_2_System_Int32_InventorySlot_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Add
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,(Object *)pXVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__Add_int__InventorySlot_
                );
      key = key + 1;
    } while (key < (int)this_00);
  }
  return;
}


/* Void PageTurned(Int32) */

void Assembly-CSharp.dll::InventoryController::InventoryController_PageTurned
               (InventoryController *this,int32_t dir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_1_UIPushOption_ *)(this->fields).OnPageTurned;
  if (this_00 != (Action_1_UIPushOption_ *)0x0) {
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,dir,MethodInfo__UnityEngine__Events__UnityAction<int>__Invoke_int_);
  }
  return;
}


/* Void SelectTab(Int32, Int32, Int32) */

void Assembly-CSharp.dll::InventoryController::InventoryController_SelectTab
               (InventoryController *this,int32_t tabId,int32_t currentPage,int32_t maxPages,
               MethodInfo *method)

{
  pTVar1 = (this->fields).tabMenu;
  if (pTVar1 != (TabMenuBase *)0x0) {
    (*(code *)(pTVar1->klass->vtable).__unknown_1.method)
              (pTVar1,tabId,currentPage,maxPages,pTVar1->klass[1]._0.image);
    this_00 = (this->fields).inventorySlots;
    if (this_00 != (InventorySlots *)0x0) {
      InventorySlots::InventorySlots_UpdateAbsoluteSlotValues
                (this_00,currentPage,(this->fields).numberOfSlots,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetHeaderText(String) */

void Assembly-CSharp.dll::InventoryController::InventoryController_SetHeaderText
               (InventoryController *this,String *category,MethodInfo *method)

{
  pTVar1 = (this->fields).categoryHeaderText;
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,category,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SlotChanged(Int32, Int32) */

void Assembly-CSharp.dll::InventoryController::InventoryController_SlotChanged
               (InventoryController *this,int32_t fromSlotIndex,int32_t toSlotIndex,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_System_Boolean_System_Object_ *)(this->fields).OnSlotChanged;
  if (this_00 != (UnityAction_2_System_Boolean_System_Object_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Boolean,System::Object]::
    UnityAction_2_System_Boolean_System_Object__Invoke
              (this_00,(bool)fromSlotIndex,(Object *)toSlotIndex,
               MethodInfo__UnityEngine__Events__UnityAction<int,_int>__Invoke_int__int_);
  }
  return;
}


/* Void TabSelected(Int32) */

void Assembly-CSharp.dll::InventoryController::InventoryController_TabSelected
               (InventoryController *this,int32_t tabId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_1_UIPushOption_ *)(this->fields).OnTabSelected;
  if (this_00 != (Action_1_UIPushOption_ *)0x0) {
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,tabId,MethodInfo__UnityEngine__Events__UnityAction<int>__Invoke_int_);
  }
  return;
}


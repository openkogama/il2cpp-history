
/* Boolean CheckItemAvailability(WorldObjectType) */

bool Assembly-CSharp.dll::FirstTimeActivatableTriggerAreaInventoryHighlight::
     FirstTimeActivatableTriggerAreaInventoryHighlight_CheckItemAvailability
               (FirstTimeActivatableTriggerAreaInventoryHighlight *this,
               WorldObjectType__Enum worldObjectType,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pOStack_6 = (Object *)0x0;
  bStack_7 = 0;
  uStack_8 = 0;
  pDStack_9 = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  pDStack_10 = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  iStack_11 = 0;
  iStack_12 = 0;
  iStack_13 = 0;
  pSStack_14 = (ShopItem *)0x0;
  func_?();
  uStack_15 = 0xffffffff;
  puStack_16 = &stack0xffffffa0;
  puStack_4 = &stack0xffffffa0;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_16 = &stack0xffffffa0, puStack_4 = &stack0xffffffa0,
     (TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    puStack_16 = &stack0xffffffa0;
    puStack_4 = &stack0xffffffa0;
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar17 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
  if ((((pIVar17 == (IEditModeUI *)0x0) ||
       (iVar18 = func_?(4,TypeInfo__IEditModeUI), iVar18 == 0)) ||
      (*(Dictionary_2_WinningConditionType_System_Object_ **)(iVar18 + 0xc) ==
       (Dictionary_2_WinningConditionType_System_Object_ *)0x0)) ||
     (this_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
                ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Keys
                          (*(Dictionary_2_WinningConditionType_System_Object_ **)(iVar18 + 0xc),
                           MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Keys__
                          ),
     this_00 == (Dictionary_2_TKey_TValue_KeyCollection_WinningConditionType_System_Object_ *)0x0))
  {
code_?:
    DStack_19.host_enumerator.dictionary =
         (Dictionary_2_WinningConditionType_System_Object_ *)func_?();
  }
  else {
    pDVar20 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_19,
                        (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                         *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<InventoryCategoryType,_System::String>__GetEnumerator__
                       );
    pDStack_10 = (pDVar20->host_enumerator).dictionary;
    iStack_11 = (pDVar20->host_enumerator).next;
    iStack_12 = (pDVar20->host_enumerator).stamp;
    iStack_13 = (pDVar20->host_enumerator).current.key;
    pOStack_6 = (pDVar20->host_enumerator).current.value;
    uStack_1 = 0;
    do {
      DStack_19.host_enumerator.stamp =
           (int32_t)
           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__MoveNext__
      ;
      DStack_19.host_enumerator.next = (int32_t)&pDStack_10;
      DStack_19.host_enumerator.dictionary =
           (Dictionary_2_WinningConditionType_System_Object_ *)&UNK_?;
      cVar21 = func_?();
      if (cVar21 == '\0') {
        iVar18 = 0x67;
        goto code_?;
      }
      DStack_19.host_enumerator.stamp =
           (int32_t)
           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__get_Current__
      ;
      DStack_19.host_enumerator.next = (int32_t)&pDStack_10;
      DStack_19.host_enumerator.dictionary =
           (Dictionary_2_WinningConditionType_System_Object_ *)&UNK_?;
      inventoryCategory = func_?();
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pIVar17 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
      if ((pIVar17 == (IEditModeUI *)0x0) ||
         (this_01 = (ClientShopRepository *)func_?(4,TypeInfo__IEditModeUI),
         this_01 == (ClientShopRepository *)0x0)) goto code_?;
      ClientShopRepository::ClientShopRepository_GetItemByWorldObjectTypeInCategory
                (this_01,inventoryCategory,worldObjectType,&pSStack_14,(MethodInfo *)0x0);
    } while (pSStack_14 == (ShopItem *)0x0);
    bStack_7 = 1;
    iVar18 = 0x69;
code_?:
    uStack_1 = 0xffffffff;
    DStack_19.host_enumerator.stamp =
         (int32_t)
         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__Dispose__
    ;
    DStack_19.host_enumerator.next = (int32_t)&pDStack_10;
    DStack_19.host_enumerator.dictionary =
         (Dictionary_2_WinningConditionType_System_Object_ *)&UNK_?;
    func_?();
    DStack_19.host_enumerator.dictionary = pDStack_9;
    if (pDStack_9 == (Dictionary_2_WinningConditionType_System_Object_ *)0x0) {
      if (iVar18 == 0x69) {
        *unaff_FS_OFFSET = uStack_3;
        return bStack_7;
      }
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
  }
  DStack_19.host_enumerator.stamp = 0;
  DStack_19.host_enumerator.next = 0;
  func_?();
  pcVar22 = (code *)swi(3);
  bVar23 = (*pcVar22)();
  return bVar23;
}


/* Void DoShowing() */

void Assembly-CSharp.dll::FirstTimeActivatableTriggerAreaInventoryHighlight::
     FirstTimeActivatableTriggerAreaInventoryHighlight_DoShowing
               (FirstTimeActivatableTriggerAreaInventoryHighlight *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__FirstTimeActivatableTriggerAreaInventoryHighlight___DoShowing_c__AnonStorey0
  ;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields).state = (int32_t)this;
    pTVar1 = (this->fields).tabGroup;
    (this->fields).showing = 1;
    if (pTVar1 != (TabMenu *)0x0) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pTVar1,(MethodInfo *)0x0);
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IOpenClientShopTab>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this_01,
                 MethodInfo__FirstTimeActivatableTriggerAreaInventoryHighlight___DoShowing_c__AnonStorey0____m__0_UnityEngine__EventSystems__IOpenClientShopTab__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IOpenClientShopTab>__EventFunction_System__Object__void__
                );
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar2,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3
                 ,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IOpenClientShopTab>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IOpenClientShopTab>_
                );
      this_00 = (this->fields).slots;
      if (this_00 != (InventorySlots *)0x0) {
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)this_00,(MethodInfo *)0x0);
        if (this_02 != (Transform *)0x0) {
          iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_childCount
                            (this_02,(MethodInfo *)0x0);
          if (0 < iVar4) {
            pvVar5 = (void *)FirstTimeActivatableTriggerAreaInventoryHighlight_GetItemSlot
                                       (this,0,(MethodInfo *)0x0);
            (this_01->fields)._._._._.m_CachedPtr = pvVar5;
            pTVar1 = (this->fields).tabGroup;
            if (pTVar1 == (TabMenu *)0x0) goto code_?;
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)pTVar1,(MethodInfo *)0x0);
            pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(
                                       TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHighLightClientShopItem>
                                       );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar3,(Object *)this_01,
                       MethodInfo__FirstTimeActivatableTriggerAreaInventoryHighlight___DoShowing_c__AnonStorey0____m__1_UnityEngine__EventSystems__IHighLightClientShopItem__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHighLightClientShopItem>__EventFunction_System__Object__void__
                      );
            if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      (pGVar2,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHighLightClientShopItem>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHighLightClientShopItem>_
                      );
          }
          return;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Int32 GetItemSlot(Int32) */

int32_t Assembly-CSharp.dll::FirstTimeActivatableTriggerAreaInventoryHighlight::
        FirstTimeActivatableTriggerAreaInventoryHighlight_GetItemSlot
                  (FirstTimeActivatableTriggerAreaInventoryHighlight *this,int32_t iteration,
                  MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOStack_4 = (Object *)0x0;
  func_?();
  method_02 = 
  TypeInfo__FirstTimeActivatableTriggerAreaInventoryHighlight___GetItemSlot_c__AnonStorey1;
  this_02 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,(MethodInfo *)method_02);
  if (this_02 != (ScaleAnimationBase *)0x0) {
    (this_02->fields)._._._._.m_CachedPtr = (void *)iteration;
    (this_02->fields).state = (int32_t)this;
    this_00 = (this->fields).tabGroup;
    if (this_00 != (TabMenu *)0x0) {
      method_00 = (MethodInfo *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)this_00,(MethodInfo *)0x0);
      this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_03,(Object *)this_02,
                 MethodInfo__FirstTimeActivatableTriggerAreaInventoryHighlight___GetItemSlot_c__AnonStorey1____m__0_UnityEngine__EventSystems__IOpenClientShopPage__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IOpenClientShopPage>__EventFunction_System__Object__void__
                );
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                ((GameObject *)method_00,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_03,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IOpenClientShopPage>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IOpenClientShopPage>_
                );
      this_01 = (this->fields).slots;
      if (this_01 != (InventorySlots *)0x0) {
        this_04 = (Dictionary_2_WinningConditionType_System_Object_ *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                             (MethodInfo *)0x0);
        if ((this_04 == (Dictionary_2_WinningConditionType_System_Object_ *)0x0) ||
           (pOVar5 = System.Core.dll::System::Linq::
                     Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
                     KeyValuePair`2[System::Object,System::Object],System::Object]::
                     Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                               ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                                 *)this_04,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Count__
                               ), pOVar5 == (Object *)0x0)) {
          *unaff_FS_OFFSET = uStack_3;
          return 0;
        }
        method_01 = (MethodInfo *)
                    mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[WinningConditionType,System::Object]::
                    Dictionary_2_WinningConditionType_System_Object__get_Values
                              (this_04,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Values__
                              );
        if (method_01 != (MethodInfo *)0x0) {
          mscorlib.dll::System::Collections::Generic::
          Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
          Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                    ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                      *)&stack0xffffffa4,
                     (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *
                     )method_01,
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_InventorySlot>__GetEnumerator__
                    );
          uStack_1 = 0;
          do {
            while( true ) {
              do {
                do {
                  cVar6 = func_?();
                  if (cVar6 == '\0') {
                    iVar7 = 0xf4;
                    goto code_?;
                  }
                  this_05 = (InventorySlot *)func_?();
                  if (this_05 == (InventorySlot *)0x0) goto code_?;
                  method_00 = (MethodInfo *)InventorySlot::InventorySlot_get_Item(this_05,method_00)
                  ;
                  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                    func_?(TypeInfo__UnityEngine__Object);
                  }
                  bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                                    ((Object_1 *)method_00,(Object_1 *)0x0,(MethodInfo *)0x0);
                } while (bVar8 != 0);
                this_06 = InventorySlot::InventorySlot_get_Item(this_05,(MethodInfo *)0x0);
                if (this_06 == (GameObject *)0x0) goto code_?;
                this_07 = (Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object_ *)
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_GetComponent_47
                                    (this_06,
                                     EditModeClientShopItem_MethodInfo__UnityEngine__GameObject__GetComponent<EditModeClientShopItem>__
                                    );
                if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                  func_?();
                }
                bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                                  ((Object_1 *)this_07,(Object_1 *)0x0,(MethodInfo *)0x0);
              } while (bVar8 != 0);
              if (this_07 == (Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object_ *)0x0)
              goto code_?;
              pOVar5 = System.Core.dll::System::Linq::
                       Enumerable+<CreateUnionIterator>c__Iterator1C`1[System::Object]::
                       Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object__System_Collections_IEnumerator_get_Current
                                 (this_07,method_01);
              if (pOVar5 != (Object *)0x0) break;
              if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                func_?();
              }
              method_01 = (MethodInfo *)&UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                        ((Object *)StringLiteral_item_in_inventory_missing_docume,(MethodInfo *)0x0)
              ;
            }
            method_01 = (MethodInfo *)&UNK_?;
            pOVar5 = System.Core.dll::System::Linq::
                     Enumerable+<CreateUnionIterator>c__Iterator1C`1[System::Object]::
                     Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object__System_Collections_IEnumerator_get_Current
                               (this_07,(MethodInfo *)0x0);
          } while (pOVar5 != (Object *)0x45);
          pOStack_4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                       ::Serialization::JsonProperty]::
                       Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                 ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                  this_05,(MethodInfo *)0x0);
          iVar7 = 0x103;
code_?:
          uStack_1 = 0xffffffff;
          func_?();
          if (iVar7 == 0x103) {
            *unaff_FS_OFFSET = uStack_3;
            return (int32_t)pOStack_4;
          }
          if (this_02 != (ScaleAnimationBase *)0x0) {
            iVar9 = FirstTimeActivatableTriggerAreaInventoryHighlight_GetItemSlot
                              (this,(int)(this_02->fields)._._._._.m_CachedPtr + 1,(MethodInfo *)0x0
                              );
            *unaff_FS_OFFSET = uStack_3;
            return iVar9;
          }
        }
      }
    }
  }
code_?:
  uVar10 = func_?();
  func_?(uVar10);
  pcVar11 = (code *)swi(3);
  iVar9 = (*pcVar11)();
  return iVar9;
}


/* Boolean IsItemInShop(WorldObjectType) */

bool Assembly-CSharp.dll::FirstTimeActivatableTriggerAreaInventoryHighlight::
     FirstTimeActivatableTriggerAreaInventoryHighlight_IsItemInShop
               (FirstTimeActivatableTriggerAreaInventoryHighlight *this,
               WorldObjectType__Enum worldObjectType,MethodInfo *method)

{
  if ((this->fields).haveCheckedItemAvailability == 0) {
    bVar1 = FirstTimeActivatableTriggerAreaInventoryHighlight_CheckItemAvailability
                      (this,worldObjectType,(MethodInfo *)0x0);
    (this->fields).itemAvailable = bVar1;
    (this->fields).haveCheckedItemAvailability = 1;
    return bVar1;
  }
  return (this->fields).itemAvailable;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::FirstTimeActivatableTriggerAreaInventoryHighlight::
     FirstTimeActivatableTriggerAreaInventoryHighlight_OnDestroy
               (FirstTimeActivatableTriggerAreaInventoryHighlight *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._.isRegistered != 0) {
    FVar1 = (this->fields)._.prerequisiteEvent;
    if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__FirstTimeEventManager);
    }
    bVar2 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                      (FVar1,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      FVar1 = (this->fields)._._.firstTimeEvent;
      if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__FirstTimeEventManager);
      }
      FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent(FVar1,(MethodInfo *)0x0);
    }
    FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_OnDestroy
              ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnFirstTimeState(FirstTimeState, FirstTimeEvent) */

void Assembly-CSharp.dll::FirstTimeActivatableTriggerAreaInventoryHighlight::
     FirstTimeActivatableTriggerAreaInventoryHighlight_OnFirstTimeState
               (FirstTimeActivatableTriggerAreaInventoryHighlight *this,
               FirstTimeState *firstTimeState,FirstTimeEvent__Enum latestFirstTimeEvent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (firstTimeState == (FirstTimeState *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::
          FirstTimeState_HasFirstTimeEventOccured
                    (firstTimeState,(this->fields)._._.firstTimeEvent,(MethodInfo *)0x0);
  if ((bVar2 == 0) && ((this->fields)._.isRegistered == 0)) {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__FirstTimeActivatableTriggerAreaInventoryHighlight___OnFirstTimeState_m__0_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
              );
    (this->fields)._.isRegistered = 1;
  }
  else {
    bVar2 = MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::
            FirstTimeState_HasFirstTimeEventOccured
                      (firstTimeState,(this->fields)._._.firstTimeEvent,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      firstTimeEvent = (this->fields)._.prerequisiteEvent;
      if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
        func_?();
      }
      bVar2 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                        (firstTimeEvent,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_UnRegister
                  ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeActivatableTriggerAreaInventoryHighlight::
     FirstTimeActivatableTriggerAreaInventoryHighlight_OnShow
               (FirstTimeActivatableTriggerAreaInventoryHighlight *this,MethodInfo *method)

{
  if ((this->fields).showing != 0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__FirstTimeActivatableTriggerAreaInventoryHighlight___DoShowing_c__AnonStorey0
  ;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields).state = (int32_t)this;
    pTVar1 = (this->fields).tabGroup;
    (this->fields).showing = 1;
    if (pTVar1 != (TabMenu *)0x0) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pTVar1,(MethodInfo *)0x0);
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IOpenClientShopTab>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this_01,
                 MethodInfo__FirstTimeActivatableTriggerAreaInventoryHighlight___DoShowing_c__AnonStorey0____m__0_UnityEngine__EventSystems__IOpenClientShopTab__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IOpenClientShopTab>__EventFunction_System__Object__void__
                );
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar2,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3
                 ,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IOpenClientShopTab>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IOpenClientShopTab>_
                );
      this_00 = (this->fields).slots;
      if ((this_00 != (InventorySlots *)0x0) &&
         (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)this_00,(MethodInfo *)0x0),
         this_02 != (Transform *)0x0)) {
        iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_childCount
                          (this_02,(MethodInfo *)0x0);
        if (0 < iVar4) {
          pvVar5 = (void *)FirstTimeActivatableTriggerAreaInventoryHighlight_GetItemSlot
                                     (this,0,(MethodInfo *)0x0);
          (this_01->fields)._._._._.m_CachedPtr = pvVar5;
          pTVar1 = (this->fields).tabGroup;
          if (pTVar1 == (TabMenu *)0x0) goto code_?;
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pTVar1,(MethodInfo *)0x0);
          pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHighLightClientShopItem>
                                     );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar3,(Object *)this_01,
                     MethodInfo__FirstTimeActivatableTriggerAreaInventoryHighlight___DoShowing_c__AnonStorey0____m__1_UnityEngine__EventSystems__IHighLightClientShopItem__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHighLightClientShopItem>__EventFunction_System__Object__void__
                    );
          if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy_63
                    (pGVar2,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHighLightClientShopItem>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHighLightClientShopItem>_
                    );
        }
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Register() */

void Assembly-CSharp.dll::FirstTimeActivatableTriggerAreaInventoryHighlight::
     FirstTimeActivatableTriggerAreaInventoryHighlight_Register
               (FirstTimeActivatableTriggerAreaInventoryHighlight *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__FirstTimeActivatableTriggerAreaInventoryHighlight___Register_m__1_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
             ,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>__EventFunction_System__Object__void__
            );
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
            );
  (this->fields)._.isRegistered = 1;
  return;
}


/* Void <OnFirstTimeState>m__0(IFirstTimeElementActivator, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableTriggerAreaInventoryHighlight::
     FirstTimeActivatableTriggerAreaInventoryHighlight__OnFirstTimeState_m__0
               (FirstTimeActivatableTriggerAreaInventoryHighlight *this,
               IFirstTimeElementActivator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IFirstTimeElementActivator *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IFirstTimeElementActivator,x,this);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <Register>m__1(IFirstTimeElementActivator, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableTriggerAreaInventoryHighlight::
     FirstTimeActivatableTriggerAreaInventoryHighlight__Register_m__1
               (FirstTimeActivatableTriggerAreaInventoryHighlight *this,
               IFirstTimeElementActivator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IFirstTimeElementActivator *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IFirstTimeElementActivator,x,this);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* FirstTimeActivatableTriggerAreaInventoryHighlight() */

void Assembly-CSharp.dll::FirstTimeActivatableTriggerAreaInventoryHighlight::
     FirstTimeActivatableTriggerAreaInventoryHighlight__ctor
               (FirstTimeActivatableTriggerAreaInventoryHighlight *this,MethodInfo *method)

{
  (this->fields).itemCategory = 10;
  (this->fields)._.onShowSound = 3;
  (this->fields)._.prerequisiteEvent = -1;
  (this->fields)._.checkForStackBlocking = 1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Boolean get_CanShow() */

bool Assembly-CSharp.dll::FirstTimeActivatableTriggerAreaInventoryHighlight::
     FirstTimeActivatableTriggerAreaInventoryHighlight_get_CanShow
               (FirstTimeActivatableTriggerAreaInventoryHighlight *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  firstTimeEvent = (this->fields)._.prerequisiteEvent;
  if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__FirstTimeEventManager);
  }
  bVar1 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                    (firstTimeEvent,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((this->fields).haveCheckedItemAvailability == 0) {
      bVar1 = FirstTimeActivatableTriggerAreaInventoryHighlight_CheckItemAvailability
                        (this,WorldObjectType__Enum_TriggerCube,(MethodInfo *)0x0);
      (this->fields).itemAvailable = bVar1;
      (this->fields).haveCheckedItemAvailability = 1;
    }
    bVar1 = (this->fields).itemAvailable;
    if (bVar1 == 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)this,
                 MethodInfo__FirstTimeActivatableTriggerAreaInventoryHighlight___Register_m__1_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>__EventFunction_System__Object__void__
                );
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar2,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
                );
      (this->fields)._.isRegistered = 1;
    }
    bVar3 = FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_get_IsBlocked
                      ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                        (pGVar2,(MethodInfo *)0x0);
      this_00 = (this->fields).slots;
      if (this_00 != (InventorySlots *)0x0) {
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)this_00,(MethodInfo *)0x0);
        if (this_02 != (Transform *)0x0) {
          iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_childCount
                            (this_02,(MethodInfo *)0x0);
          if (((bVar3 == 0) && (bVar4 != 0)) && (0 < iVar5)) {
            return bVar1 != 0;
          }
          return 0;
        }
      }
    }
    func_?();
    pcVar6 = (code *)swi(3);
    bVar1 = (*pcVar6)();
    return bVar1;
  }
  return 0;
}


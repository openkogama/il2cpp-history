
/* Void DoShowing() */

void Assembly-CSharp.dll::FirstTimeActivatableBazookaPopup::
     FirstTimeActivatableBazookaPopup_DoShowing
               (FirstTimeActivatableBazookaPopup *this,MethodInfo *method)

{
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int32_t)&stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  method_00 = TypeInfo__FirstTimeActivatableBazookaPopup___DoShowing_c__AnonStorey0;
  this_01 = (MethodInfo *)func_?();
  pMVar2 = this_01;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this_01,0.0,(MethodInfo *)method_00);
  pTVar3 = (this->fields).tabGroup;
  (this->fields).showing = 1;
  if (pTVar3 != (TabMenu *)0x0) {
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pTVar3,(MethodInfo *)0x0);
    if (TypeInfo__FirstTimeActivatableBazookaPopup->static_fields->__f__am_cache0 ==
        (ExecuteEvents_EventFunction_1_IPlayerInventory_ *)0x0) {
      pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      this_01 = pMVar2;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar5,(Object *)0x0,
                 MethodInfo__FirstTimeActivatableBazookaPopup___DoShowing_m__0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>__EventFunction_System__Object__void__
                );
      TypeInfo__FirstTimeActivatableBazookaPopup->static_fields->__f__am_cache0 =
           (ExecuteEvents_EventFunction_1_IPlayerInventory_ *)pUVar5;
    }
    callbackFunction = TypeInfo__FirstTimeActivatableBazookaPopup->static_fields->__f__am_cache0;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar4,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
              );
    pIVar6 = (this->fields).slots;
    if ((pIVar6 != (InventorySlots *)0x0) &&
       (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)pIVar6,(MethodInfo *)0x0), this_02 != (Transform *)0x0))
    {
      iVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_childCount
                        (this_02,(MethodInfo *)0x0);
      if (iVar7 < 1) {
code_?:
        *unaff_FS_OFFSET = iVar1;
        return;
      }
      if (this_01 != (MethodInfo *)0x0) {
        this_01->invoker_method = (InvokerMethod)0x0;
        pIVar6 = (this->fields).slots;
        if (((pIVar6 != (InventorySlots *)0x0) &&
            (this_03 = (Dictionary_2_WinningConditionType_System_Object_ *)
                       mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                       ::Serialization::JsonProperty]::
                       Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                 ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pIVar6
                                  ,(MethodInfo *)0x0),
            this_03 != (Dictionary_2_WinningConditionType_System_Object_ *)0x0)) &&
           (this_04 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[WinningConditionType,System::Object]::
                      Dictionary_2_WinningConditionType_System_Object__get_Values
                                (this_03,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Values__
                                ),
           this_04 !=
           (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)) {
          pMVar2 = 
          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_InventorySlot>__GetEnumerator__
          ;
          pDVar8 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                             ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                               *)&stack0xffffffac,this_04,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_InventorySlot>__GetEnumerator__
                             );
          method_01 = (MVWorldObjectDocumentationType__Enum__Array *)
                      (pDVar8->host_enumerator).current.value;
          while (cVar9 = func_?(), cVar9 != '\0') {
            this_07 = (Dictionary_2_MVWorldObjectDocumentationType_System_Int32_ *)&stack0xffffffc0;
            this_01 = 
            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__get_Current__
            ;
            this_05 = (InventorySlot *)func_?();
            if ((this_05 == (InventorySlot *)0x0) ||
               (pGVar4 = InventorySlot::InventorySlot_get_Item(this_05,(MethodInfo *)method_01),
               pGVar4 == (GameObject *)0x0)) goto code_?;
            method_01 = (MVWorldObjectDocumentationType__Enum__Array *)&UNK_?;
            this_06 = (GamePointGainEffect *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                      GameObject_GetComponent_47
                                (pGVar4,
                                 PlayerInventoryPreviewItem_MethodInfo__UnityEngine__GameObject__GetComponent<PlayerInventoryPreviewItem>__
                                );
            if (this_06 == (GamePointGainEffect *)0x0) goto code_?;
            pMVar2 = this_06[1].fields._._._._.m_CachedPtr;
            if (pMVar2 == (MethodInfo *)0x0) {
              if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                func_?();
              }
              pMVar2 = (MethodInfo *)StringLiteral_item_in_inventory_missing_docume;
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                        ((Object *)StringLiteral_item_in_inventory_missing_docume,(MethodInfo *)0x0)
              ;
            }
            else {
              iVar7 = 0;
              this_00 = (this->fields).priorityDictionary;
              if (this_00 == (Dictionary_2_MVWorldObjectDocumentationType_System_Int32_ *)0x0)
              goto code_?;
              bVar10 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[MVWorldObjectDocumentationType,System::Int32]::
                      Dictionary_2_MVWorldObjectDocumentationType_System_Int32__ContainsKey
                                (this_00,(MVWorldObjectDocumentationType__Enum)pMVar2,
                                 MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__ContainsKey_MVWorldObjectDocumentationType_
                                );
              if (bVar10 != 0) {
                this_07 = (this->fields).priorityDictionary;
                if (this_07 == (Dictionary_2_MVWorldObjectDocumentationType_System_Int32_ *)0x0)
                goto code_?;
                this_01 = this_06[1].fields._._._._.m_CachedPtr;
                iVar7 = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[MVWorldObjectDocumentationType,System::Int32]::
                        Dictionary_2_MVWorldObjectDocumentationType_System_Int32__get_Item
                                  (this_07,(MVWorldObjectDocumentationType__Enum)this_01,
                                   MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__get_Item_MVWorldObjectDocumentationType_
                                  );
              }
              if ((int)this_07 < iVar7) {
                this_01 = (MethodInfo *)0x0;
                pIVar11 = (InvokerMethod)
                          GamePointGainEffect::GamePointGainEffect_get_ID(this_06,(MethodInfo *)0x0)
                ;
                if (this_01 == (MethodInfo *)0x0) goto code_?;
                this_01->invoker_method = pIVar11;
              }
            }
          }
          pMVar2->methodPointer = (Il2CppMethodPointer)0x115;
          func_?();
          if (this_01 != (MethodInfo *)0x0) {
            if (this_01->invoker_method == (InvokerMethod)0x0) {
              if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                        ((Object *)StringLiteral_prioritizedItem_in_first_time_pl,(MethodInfo *)0x0)
              ;
              goto code_?;
            }
            pTVar3 = (this->fields).tabGroup;
            if (pTVar3 != (TabMenu *)0x0) {
              pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)pTVar3,(MethodInfo *)0x0);
              pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar5,(Object *)this_01,
                         MethodInfo__FirstTimeActivatableBazookaPopup___DoShowing_c__AnonStorey0____m__0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                         ,
                         MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>__EventFunction_System__Object__void__
                        );
              if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                          methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
                func_?();
              }
              iVar1 = 0;
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy_63
                        (pGVar4,(BaseEventData *)0x0,
                         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar5,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
                        );
              *unaff_FS_OFFSET = iVar1;
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::FirstTimeActivatableBazookaPopup::
     FirstTimeActivatableBazookaPopup_OnDestroy
               (FirstTimeActivatableBazookaPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._.isRegistered != 0) {
    firstTimeEvent = (this->fields)._._.firstTimeEvent;
    if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__FirstTimeEventManager);
    }
    FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent(firstTimeEvent,(MethodInfo *)0x0)
    ;
    FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_OnDestroy
              ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeActivatableBazookaPopup::FirstTimeActivatableBazookaPopup_OnShow
               (FirstTimeActivatableBazookaPopup *this,MethodInfo *method)

{
  if ((this->fields).showing != 0) {
    return;
  }
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int32_t)&stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  method_00 = TypeInfo__FirstTimeActivatableBazookaPopup___DoShowing_c__AnonStorey0;
  this_01 = (MethodInfo *)func_?();
  pMVar2 = this_01;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this_01,0.0,(MethodInfo *)method_00);
  pTVar3 = (this->fields).tabGroup;
  (this->fields).showing = 1;
  if (pTVar3 != (TabMenu *)0x0) {
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pTVar3,(MethodInfo *)0x0);
    if (TypeInfo__FirstTimeActivatableBazookaPopup->static_fields->__f__am_cache0 ==
        (ExecuteEvents_EventFunction_1_IPlayerInventory_ *)0x0) {
      pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      this_01 = pMVar2;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar5,(Object *)0x0,
                 MethodInfo__FirstTimeActivatableBazookaPopup___DoShowing_m__0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>__EventFunction_System__Object__void__
                );
      TypeInfo__FirstTimeActivatableBazookaPopup->static_fields->__f__am_cache0 =
           (ExecuteEvents_EventFunction_1_IPlayerInventory_ *)pUVar5;
    }
    callbackFunction = TypeInfo__FirstTimeActivatableBazookaPopup->static_fields->__f__am_cache0;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar4,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
              );
    pIVar6 = (this->fields).slots;
    if ((pIVar6 != (InventorySlots *)0x0) &&
       (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)pIVar6,(MethodInfo *)0x0), this_02 != (Transform *)0x0))
    {
      iVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_childCount
                        (this_02,(MethodInfo *)0x0);
      if (iVar7 < 1) {
code_?:
        *unaff_FS_OFFSET = iVar1;
        return;
      }
      if (this_01 != (MethodInfo *)0x0) {
        this_01->invoker_method = (InvokerMethod)0x0;
        pIVar6 = (this->fields).slots;
        if (((pIVar6 != (InventorySlots *)0x0) &&
            (this_03 = (Dictionary_2_WinningConditionType_System_Object_ *)
                       mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                       ::Serialization::JsonProperty]::
                       Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                 ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pIVar6
                                  ,(MethodInfo *)0x0),
            this_03 != (Dictionary_2_WinningConditionType_System_Object_ *)0x0)) &&
           (this_04 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[WinningConditionType,System::Object]::
                      Dictionary_2_WinningConditionType_System_Object__get_Values
                                (this_03,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Values__
                                ),
           this_04 !=
           (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)) {
          pMVar2 = 
          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_InventorySlot>__GetEnumerator__
          ;
          pDVar8 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                             ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                               *)&stack0xffffffac,this_04,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_InventorySlot>__GetEnumerator__
                             );
          method_01 = (MVWorldObjectDocumentationType__Enum__Array *)
                      (pDVar8->host_enumerator).current.value;
          while (cVar9 = func_?(), cVar9 != '\0') {
            this_07 = (Dictionary_2_MVWorldObjectDocumentationType_System_Int32_ *)&stack0xffffffc0;
            this_01 = 
            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__get_Current__
            ;
            this_05 = (InventorySlot *)func_?();
            if ((this_05 == (InventorySlot *)0x0) ||
               (pGVar4 = InventorySlot::InventorySlot_get_Item(this_05,(MethodInfo *)method_01),
               pGVar4 == (GameObject *)0x0)) goto code_?;
            method_01 = (MVWorldObjectDocumentationType__Enum__Array *)&UNK_?;
            this_06 = (GamePointGainEffect *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                      GameObject_GetComponent_47
                                (pGVar4,
                                 PlayerInventoryPreviewItem_MethodInfo__UnityEngine__GameObject__GetComponent<PlayerInventoryPreviewItem>__
                                );
            if (this_06 == (GamePointGainEffect *)0x0) goto code_?;
            pMVar2 = this_06[1].fields._._._._.m_CachedPtr;
            if (pMVar2 == (MethodInfo *)0x0) {
              if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                func_?();
              }
              pMVar2 = (MethodInfo *)StringLiteral_item_in_inventory_missing_docume;
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                        ((Object *)StringLiteral_item_in_inventory_missing_docume,(MethodInfo *)0x0)
              ;
            }
            else {
              iVar7 = 0;
              this_00 = (this->fields).priorityDictionary;
              if (this_00 == (Dictionary_2_MVWorldObjectDocumentationType_System_Int32_ *)0x0)
              goto code_?;
              bVar10 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[MVWorldObjectDocumentationType,System::Int32]::
                      Dictionary_2_MVWorldObjectDocumentationType_System_Int32__ContainsKey
                                (this_00,(MVWorldObjectDocumentationType__Enum)pMVar2,
                                 MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__ContainsKey_MVWorldObjectDocumentationType_
                                );
              if (bVar10 != 0) {
                this_07 = (this->fields).priorityDictionary;
                if (this_07 == (Dictionary_2_MVWorldObjectDocumentationType_System_Int32_ *)0x0)
                goto code_?;
                this_01 = this_06[1].fields._._._._.m_CachedPtr;
                iVar7 = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[MVWorldObjectDocumentationType,System::Int32]::
                        Dictionary_2_MVWorldObjectDocumentationType_System_Int32__get_Item
                                  (this_07,(MVWorldObjectDocumentationType__Enum)this_01,
                                   MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__get_Item_MVWorldObjectDocumentationType_
                                  );
              }
              if ((int)this_07 < iVar7) {
                this_01 = (MethodInfo *)0x0;
                pIVar11 = (InvokerMethod)
                          GamePointGainEffect::GamePointGainEffect_get_ID(this_06,(MethodInfo *)0x0)
                ;
                if (this_01 == (MethodInfo *)0x0) goto code_?;
                this_01->invoker_method = pIVar11;
              }
            }
          }
          pMVar2->methodPointer = (Il2CppMethodPointer)0x115;
          func_?();
          if (this_01 != (MethodInfo *)0x0) {
            if (this_01->invoker_method == (InvokerMethod)0x0) {
              if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                        ((Object *)StringLiteral_prioritizedItem_in_first_time_pl,(MethodInfo *)0x0)
              ;
              goto code_?;
            }
            pTVar3 = (this->fields).tabGroup;
            if (pTVar3 != (TabMenu *)0x0) {
              pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)pTVar3,(MethodInfo *)0x0);
              pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar5,(Object *)this_01,
                         MethodInfo__FirstTimeActivatableBazookaPopup___DoShowing_c__AnonStorey0____m__0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                         ,
                         MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>__EventFunction_System__Object__void__
                        );
              if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                          methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
                func_?();
              }
              iVar1 = 0;
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy_63
                        (pGVar4,(BaseEventData *)0x0,
                         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar5,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
                        );
              *unaff_FS_OFFSET = iVar1;
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void <DoShowing>m__0(IPlayerInventory, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableBazookaPopup::
     FirstTimeActivatableBazookaPopup__DoShowing_m__0
               (IPlayerInventory *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IPlayerInventory *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IPlayerInventory,x,1,7);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* FirstTimeActivatableBazookaPopup() */

void Assembly-CSharp.dll::FirstTimeActivatableBazookaPopup::FirstTimeActivatableBazookaPopup__ctor
               (FirstTimeActivatableBazookaPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MVWorldObjectDocumentationType_System_Int32_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__Dictionary__
            );
  if (this_00 != (Dictionary_2_MVWorldObjectDocumentationType_System_Int32_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Int32]::Dictionary_2_MVWorldObjectDocumentationType_System_Int32__Add
              (this_00,MVWorldObjectDocumentationType__Enum_Bazooka,10000,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__Add_MVWorldObjectDocumentationType__int_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Int32]::Dictionary_2_MVWorldObjectDocumentationType_System_Int32__Add
              (this_00,MVWorldObjectDocumentationType__Enum_Centergun,500,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__Add_MVWorldObjectDocumentationType__int_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Int32]::Dictionary_2_MVWorldObjectDocumentationType_System_Int32__Add
              (this_00,MVWorldObjectDocumentationType__Enum_DoubleSixShooter,300,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__Add_MVWorldObjectDocumentationType__int_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Int32]::Dictionary_2_MVWorldObjectDocumentationType_System_Int32__Add
              (this_00,MVWorldObjectDocumentationType__Enum_ImpulseGun,200,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__Add_MVWorldObjectDocumentationType__int_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Int32]::Dictionary_2_MVWorldObjectDocumentationType_System_Int32__Add
              (this_00,MVWorldObjectDocumentationType__Enum_Shotgun,100,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__Add_MVWorldObjectDocumentationType__int_
              );
    (this->fields).priorityDictionary = this_00;
    (this->fields)._.onShowSound = 3;
    (this->fields)._.prerequisiteEvent = -1;
    (this->fields)._.checkForStackBlocking = 1;
    uStack1 = 0;
    if (cRam_? == '\0') {
      pOStack2 = (Object_1__Class *)_UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      pOStack2 = TypeInfo__UnityEngine__Object;
      func_?();
    }
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean get_CanShow() */

bool Assembly-CSharp.dll::FirstTimeActivatableBazookaPopup::
     FirstTimeActivatableBazookaPopup_get_CanShow
               (FirstTimeActivatableBazookaPopup *this,MethodInfo *method)

{
  bVar1 = FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_get_IsBlocked
                    ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_01 != (GameObject *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_01,(MethodInfo *)0x0);
    this_00 = (this->fields).slots;
    if (this_00 != (InventorySlots *)0x0) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_00,(MethodInfo *)0x0);
      if (this_02 != (Transform *)0x0) {
        iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_childCount
                          (this_02,(MethodInfo *)0x0);
        bVar4 = 0 < iVar3;
        if ((bVar1 != 0) || (bVar2 == 0)) {
          bVar4 = false;
        }
        return bVar4;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar1 = (*pcVar5)();
  return bVar1;
}


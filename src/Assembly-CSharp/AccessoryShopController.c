
/* Void Activate(UIPushOption) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_Activate
               (AccessoryShopController *this,UIPushOption__Enum pushOption,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AccessoryDataManager);
    func_?(&MethodInfo__AccessoryShopController__ReadyCallback__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  (this->fields).pushOption = pushOption;
  pUVar1 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__AccessoryShopController__ReadyCallback__,
             (MethodInfo *)0x0);
  pUStack2 =
       (UnityAction *)
       mscorlib.dll::System::Delegate::Delegate_Combine
                 ((Delegate *)pUVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pUStack2 == (UnityAction *)0x0) {
    TypeInfo__AccessoryDataManager->static_fields->readyCallback = (UnityAction *)0x0;
    pUVar1 = (UnityAction *)0x0;
code_?:
    pUStack2 = (UnityAction *)TypeInfo__AccessoryDataManager->static_fields;
    pUStack3 = (UnityAction__Class *)pUVar1;
    func_?();
    AccessoryDataManager::AccessoryDataManager_SetReady((MethodInfo *)0x0);
    return;
  }
  pUVar1 = (UnityAction *)0x0;
  if (pUStack2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
    pUVar1 = pUStack2;
  }
  if (pUVar1 == (UnityAction *)0x0) {
    pUStack3 = TypeInfo__UnityEngine__Events__UnityAction;
    func_?();
    pUStack2 = extraout_ECX;
    pUStack3 = extraout_EDX;
  }
  else {
    TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar1;
    pUVar1 = (UnityAction *)0x0;
    if (pUStack2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar1 = pUStack2;
    }
    pUStack3 = TypeInfo__UnityEngine__Events__UnityAction;
    if (pUVar1 != (UnityAction *)0x0) goto code_?;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Activate(UIPushOption, AccessoryCategoryClient) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_Activate_1
               (AccessoryShopController *this,UIPushOption__Enum pushOption,
               AccessoryCategoryClient__Enum category,MethodInfo *method)

{
  (this->fields).startingCategory = category;
  AccessoryShopController_Activate(this,pushOption,(MethodInfo *)0x0);
  return;
}


/* Void AddDynamicTab(AccessoryCategoryClient) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_AddDynamicTab
               (AccessoryShopController *this,AccessoryCategoryClient__Enum category,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pLVar1 = AccessoryShopController_GetAccessoryDataFromCategoryType(this,category,(MethodInfo *)0x0)
  ;
  if (pLVar1 != (List_1_AccessoryDataClient_ *)0x0) {
    highestSlotIndex = (pLVar1->fields)._size;
    if (0 < highestSlotIndex) {
      AccessoryShopController_CreateAndAddTab
                ((AccessoryShopController *)0x0,category,highestSlotIndex,(MethodInfo *)0x0);
    }
    return;
  }
  uVar2 = func_?(&stack0xfffffffc);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Attach(MVBody, Single, Single) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_Attach
               (AccessoryShopController *this,MVBody *body,float offset,float scale,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__AccessoryShopController__AttacherFinished__);
    func_?(&TypeInfo__System__Action);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__AccessoryShopController____c___Attach_b__42_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AccessoryShopController____c);
    cRam_? = '\x01';
  }
  if ((this->fields).attachingReady != 0) {
    streamingAssetsId = (this->fields).currentlyAttachingID;
    this_00 = (this->fields).accessoryAttacher;
    (this->fields).attachingReady = 0;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__AccessoryShopController__AttacherFinished__,
               (MethodInfo *)0x0);
    if (this_00 == (AccessoryAttacher *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    AccessoryAttacher::AccessoryAttacher_AttachAccessory
              (this_00,streamingAssetsId,body,offset,scale,(Action *)this_01,(MethodInfo *)0x0);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__AccessoryShopController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    callbackFunction = TypeInfo__AccessoryShopController____c->static_fields->__9__42_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if ((TypeInfo__AccessoryShopController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      object = TypeInfo__AccessoryShopController____c->static_fields->__9;
      callbackFunction = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__AccessoryShopController____c___Attach_b__42_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__AccessoryShopController____c->static_fields->__9__42_0 = callbackFunction;
      func_?();
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
  }
  return;
}


/* Void AttachToBody(Int32, Single, Single) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_AttachToBody
               (AccessoryShopController *this,int32_t productId,float offset,float scale,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__AccessoryShopController____c__DisplayClass41_0___AttachToBody_b__0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AccessoryShopController____c__DisplayClass41_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AccessoryShopController____c__DisplayClass41_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)this;
    func_?(value + 1,this);
    value[1].monitor = (MonitorData *)offset;
    value[2].klass = (Object__Class *)scale;
    (this->fields).currentlyAttachingID = productId;
    MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar1 == MVGameMode__Enum_CharacterEditor) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__AccessoryShopController____c__DisplayClass41_0___AttachToBody_b__0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                );
      return;
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (this_00 != (MVLocalPlayer *)0x0) {
      body = MVLocalPlayer::MVLocalPlayer_get_Body(this_00,(MethodInfo *)0x0);
      AccessoryShopController_Attach
                (this,body,(float)value[1].monitor,(float)value[2].klass,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void AttacherFinished() */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_AttacherFinished
               (AccessoryShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryChanged>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryChanged>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__AccessoryShopController____c___AttacherFinished_b__43_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__AccessoryShopController____c___AttacherFinished_b__43_1_UnityEngine__EventSystems__IAccessoryChanged__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AccessoryShopController____c);
    cRam_? = '\x01';
  }
  (this->fields).attachingReady = 1;
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__AccessoryShopController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AccessoryShopController____c);
  }
  callbackFunction = TypeInfo__AccessoryShopController____c->static_fields->__9__43_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__AccessoryShopController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__AccessoryShopController____c);
    }
    pAVar2 = TypeInfo__AccessoryShopController____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)pAVar2,
               MethodInfo__AccessoryShopController____c___AttacherFinished_b__43_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AccessoryShopController____c->static_fields->__9__43_0 = callbackFunction;
    func_?(&TypeInfo__AccessoryShopController____c->static_fields->__9__43_0,
                    callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).inventoryController;
  if (this_00 != (InventoryController *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if ((TypeInfo__AccessoryShopController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    callbackFunction_00 = TypeInfo__AccessoryShopController____c->static_fields->__9__43_1;
    if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IAccessoryChanged_ *)0x0) {
      if ((TypeInfo__AccessoryShopController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pAVar2 = TypeInfo__AccessoryShopController____c->static_fields->__9;
      callbackFunction_00 = (ExecuteEvents_EventFunction_1_IAccessoryChanged_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,(Object *)pAVar2,
                 MethodInfo__AccessoryShopController____c___AttacherFinished_b__43_1_UnityEngine__EventSystems__IAccessoryChanged__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__AccessoryShopController____c->static_fields->__9__43_1 = callbackFunction_00;
      pGVar1 = (GameObject *)&TypeInfo__AccessoryShopController____c->static_fields->__9__43_1;
      func_?();
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryChanged>_
              );
    AccessoryShopController_UpdateContent(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ClearShop() */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_ClearShop
               (AccessoryShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
            *)(this->fields).tabs;
  if (pDVar1 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)0x0) {
    DStack_2._currentValue = (Object *)&UNK_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::StyleSheets::
    StyleSheetCache+SheetHandleKey,System::Object]::
    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
              (pDVar1,MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Clear__);
    if (((this->fields).inventoryController != (InventoryController *)0x0) &&
       (iVar3 = *(int *)(in_stack_4 + 0x18), iVar3 != 0)) {
      *unaff_FS_OFFSET = &stack0xfffffff8;
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Values__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__Dispose__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__MoveNext__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__get_Current__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_InventorySlot>__GetEnumerator__
                       );
        cRam_? = '\x01';
      }
      pDVar1 = *(Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 **)(iVar3 + 0x10);
      if ((pDVar1 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                      *)0x0) &&
         (this = (AccessoryShopController *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                 StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                 Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                           (pDVar1,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Values__
                           ), this != (AccessoryShopController *)0x0)) {
        pDVar5 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                 StyleSheetCache+SheetHandleKey,System::Object]::
                 Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                           (&DStack_2,
                            (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                             *)this,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_InventorySlot>__GetEnumerator__
                           );
        DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pDVar5->_dictionary;
        DStack_6._index = pDVar5->_index;
        DStack_6._version = pDVar5->_version;
        DStack_6._currentValue = pDVar5->_currentValue;
        DStack_2._version = 0;
        DStack_2._currentValue = (Object *)&DStack_6;
        while( true ) {
          bVar7 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                  UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            (&DStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__MoveNext__
                            );
          this_00 = DStack_6._currentValue;
          if (bVar7 == 0) {
            puVar8 = &UNK_?;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&DStack_6,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__Dispose__
                       ,(MethodInfo *)this);
            *unaff_FS_OFFSET = puVar8;
            return;
          }
          if ((InventorySlot *)DStack_6._currentValue == (InventorySlot *)0x0) break;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pGVar9 = InventorySlot::InventorySlot_get_Item((InventorySlot *)this_00,(MethodInfo *)0x0)
          ;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          this = (AccessoryShopController *)0x0;
          bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)pGVar9,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar7 != 0) {
            pGVar9 = InventorySlot::InventorySlot_get_Item
                               ((InventorySlot *)this_00,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)pGVar9,(MethodInfo *)0x0);
          }
        }
      }
    }
  }
  DStack_2._currentValue = (Object *)&UNK_?;
  func_?();
  DStack_2._currentValue = (Object *)&UNK_?;
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void CreateAndAddTab(AccessoryCategoryClient, Int32) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_CreateAndAddTab
               (AccessoryShopController *this,AccessoryCategoryClient__Enum category,
               int32_t highestSlotIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
                   );
    func_?(&TypeInfo__TabState);
    cRam_? = '\x01';
  }
  name = LocalizedEnums::LocalizedEnums___3(category,(MethodInfo *)0x0);
  slotsPrPage = (this->fields).numberOfSlotsPrPage;
  this_01 = (TabState *)func_?(TypeInfo__TabState);
  TabState::TabState__ctor(this_01,category,name,slotsPrPage,(MethodInfo *)0x0);
  this_00 = (this->fields).tabs;
  if (this_00 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,category,(Object *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
              );
    if (this_01 != (TabState *)0x0) {
      (this_01->fields).highestSlotIndex = highestSlotIndex;
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void DisplayAllItems() */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_DisplayAllItems
               (AccessoryShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pLVar1 = AccessoryShopController_GetAccessoryDataFromCategoryType
                     (this,AccessoryCategoryClient__Enum_Hats,(MethodInfo *)0x0);
  if (pLVar1 != (List_1_AccessoryDataClient_ *)0x0) {
    AccessoryShopController_CreateAndAddTab
              (this,AccessoryCategoryClient__Enum_Hats,(pLVar1->fields)._size,(MethodInfo *)0x0);
    pLVar1 = AccessoryShopController_GetAccessoryDataFromCategoryType
                       (this,AccessoryCategoryClient__Enum_Particles,(MethodInfo *)0x0);
    if (pLVar1 != (List_1_AccessoryDataClient_ *)0x0) {
      AccessoryShopController_CreateAndAddTab
                (this,AccessoryCategoryClient__Enum_Particles,(pLVar1->fields)._size,
                 (MethodInfo *)0x0);
      pLVar1 = AccessoryShopController_GetAccessoryDataFromCategoryType
                         (this,AccessoryCategoryClient__Enum_BackAccessories,(MethodInfo *)0x0);
      if (pLVar1 != (List_1_AccessoryDataClient_ *)0x0) {
        AccessoryShopController_CreateAndAddTab
                  (this,AccessoryCategoryClient__Enum_BackAccessories,(pLVar1->fields)._size,
                   (MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pLVar1 = AccessoryShopController_GetAccessoryDataFromCategoryType
                           (this,AccessoryCategoryClient__Enum_Bundles,(MethodInfo *)0x0);
        if (pLVar1 != (List_1_AccessoryDataClient_ *)0x0) {
          iVar2 = (pLVar1->fields)._size;
          if (0 < iVar2) {
            AccessoryShopController_CreateAndAddTab
                      (this,AccessoryCategoryClient__Enum_Bundles,iVar2,(MethodInfo *)0x0);
          }
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pLVar1 = AccessoryShopController_GetAccessoryDataFromCategoryType
                             (this,AccessoryCategoryClient__Enum_Featured,(MethodInfo *)0x0);
          if (pLVar1 != (List_1_AccessoryDataClient_ *)0x0) {
            iVar2 = (pLVar1->fields)._size;
            if (0 < iVar2) {
              AccessoryShopController_CreateAndAddTab
                        (this,AccessoryCategoryClient__Enum_Featured,iVar2,(MethodInfo *)0x0);
            }
            pLVar1 = AccessoryShopController_GetAccessoryDataFromCategoryType
                               (this,AccessoryCategoryClient__Enum_LevelUnlocks,(MethodInfo *)0x0);
            if (pLVar1 != (List_1_AccessoryDataClient_ *)0x0) {
              AccessoryShopController_CreateAndAddTab
                        (this,AccessoryCategoryClient__Enum_LevelUnlocks,(pLVar1->fields)._size,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void DisplayOwnedItems() */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_DisplayOwnedItems
               (AccessoryShopController *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff90;
  puVar5 = &stack0xffffff90;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__get_Value__
                   );
    func_?(&TypeInfo__TabState);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_01 = (Dictionary_2_System_UInt32_System_Object_ *)
            AccessoryDataManager::AccessoryDataManager_GetAccessoriesCategoryMap((MethodInfo *)0x0);
  if (this_01 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffff9c,this_01,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__GetEnumerator__
                       );
    uStack_7 = 0;
    DStack_8._dictionary = pDVar6->_dictionary;
    DStack_8._version = pDVar6->_version;
    DStack_8._index = pDVar6->_index;
    DStack_8._current.key = (pDVar6->_current).key;
    DStack_8._16_8_ = *(undefined8 *)&(pDVar6->_current).value;
    uStack_1 = 1;
    pDStack_9 = &DStack_8;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        (&DStack_8,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__MoveNext__
                        );
      if (bVar10 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&DStack_8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__Dispose__
                   ,in_stack_11);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      AStack_12 = DStack_8._current.key;
      pLStack_13 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   DStack_8._current.value;
      pSStack_14 = LocalizedEnums::LocalizedEnums___3(DStack_8._current.key,(MethodInfo *)0x0);
      slotsPrPage = (this->fields).numberOfSlotsPrPage;
      in_stack_11 = (MethodInfo *)&UNK_?;
      pTStack_15 = (TabState *)func_?();
      TabState::TabState__ctor(pTStack_15,AStack_12,pSStack_14,slotsPrPage,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                       );
        cRam_? = '\x01';
      }
      index = 0;
      pSVar16 = (String *)0;
      while( true ) {
        pSStack_14 = pSVar16;
        if (pLStack_13 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        goto code_?;
        if ((pLStack_13->fields)._size <= index) break;
        RVar17 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLStack_13,index,
                           MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                          );
        if (RVar17 == (RegexCharClass_SingleRange)0x0) goto code_?;
        index = index + 1;
        pSVar16 = (String *)((int)pSStack_14 + 1);
        if (*(char *)((int)RVar17 + 0x30) == '\0') {
          pSVar16 = pSStack_14;
        }
      }
      if (pTStack_15 == (TabState *)0x0) break;
      (pTStack_15->fields).highestSlotIndex = (int32_t)pSVar16;
      this_00 = (this->fields).tabs;
      if (this_00 == (Dictionary_2_System_Int32_TabState_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Add
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,AStack_12,(Object *)pTStack_15,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
                );
    }
  }
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void DisplayPurchasableItems(Boolean) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_DisplayPurchasableItems
               (AccessoryShopController *this,bool displayShopItems,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  (this->fields).displayShopItems = displayShopItems;
  if (bVar1) {
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Clear__);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).tabs;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::StyleSheets::
    StyleSheetCache+SheetHandleKey,System::Object]::
    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
              (this_00,MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Clear__)
    ;
    this_01 = (this->fields).inventoryController;
    if (this_01 != (InventoryController *)0x0) {
      InventoryController::InventoryController_Clear(this_01,(MethodInfo *)0x0);
      if (displayShopItems == 0) {
        AccessoryShopController_DisplayOwnedItems(this,(MethodInfo *)0x0);
      }
      else {
        AccessoryShopController_DisplayAllItems(this,(MethodInfo *)0x0);
      }
      pDVar2 = (this->fields).tabs;
      if (pDVar2 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
        bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                          ((Dictionary_2_System_Int32_System_Single_ *)pDVar2,
                           (this->fields).selectedTab,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                          );
        if (bVar3 == 0) {
          (this->fields).selectedTab = (this->fields).startingCategory;
        }
        pDVar2 = (this->fields).tabs;
        if (pDVar2 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
          this_02 = (TabState *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,
                               (this->fields).selectedTab,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                              );
          if (this_02 != (TabState *)0x0) {
            TabState::TabState_SetPage(this_02,1,(MethodInfo *)0x0);
            AccessoryShopController_UpdateContent(this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* List`1[AccessoryDataClient] GetAccessoryDataFromCategoryType(AccessoryCategoryClient) */

List_1_AccessoryDataClient_ *
Assembly-CSharp.dll::AccessoryShopController::
AccessoryShopController_GetAccessoryDataFromCategoryType
          (AccessoryShopController *this,AccessoryCategoryClient__Enum category,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__GetEnumerator__
                   );
    func_?(&
                    System__Linq__IOrderedEnumerable<AccessoryDataClient>_MethodInfo__System__Linq__Enumerable__OrderBy<AccessoryDataClient,_int>_System__Collections__Generic__IEnumerable<AccessoryDataClient>__System__Func<AccessoryDataClient,_int>_
                   );
    func_?(&
                    System__Collections__Generic__List<AccessoryDataClient>_MethodInfo__System__Linq__Enumerable__ToList<AccessoryDataClient>_System__Collections__Generic__IEnumerable<AccessoryDataClient>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__get_Current__
                   );
    func_?(&TypeInfo__System__Func<AccessoryDataClient,_int>);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__Add_AccessoryDataClient_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__Contains_AccessoryDataClient_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__RemoveAt_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__List__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<AccessoryDataClient>);
    func_?(&
                    MethodInfo__AccessoryShopController____c___GetAccessoryDataFromCategoryType_b__40_0_AccessoryDataClient_
                   );
    func_?(&
                    MethodInfo__AccessoryShopController____c___GetAccessoryDataFromCategoryType_b__40_1_AccessoryDataClient_
                   );
    func_?(&
                    MethodInfo__AccessoryShopController____c___GetAccessoryDataFromCategoryType_b__40_2_AccessoryDataClient_
                   );
    func_?(&
                    MethodInfo__AccessoryShopController____c___GetAccessoryDataFromCategoryType_b__40_3_AccessoryDataClient_
                   );
    func_?(&TypeInfo__AccessoryShopController____c);
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_UInt32_System_Object_ *)
            AccessoryDataManager::AccessoryDataManager_GetAccessoriesCategoryMap((MethodInfo *)0x0);
  if (category == AccessoryCategoryClient__Enum_LevelUnlocks) {
    this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)func_?()
    ;
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
               MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__List__);
    if (this_01 == (Dictionary_2_System_UInt32_System_Object_ *)0x0) goto code_?;
    pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffff9c,this_01,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__GetEnumerator__
                       );
    uVar5 = *(undefined8 *)&(pDVar4->_current).value;
    uStack_1 = 4;
    while (bVar6 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                             ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                              &stack0xffffffb4,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__MoveNext__
                             ), bVar6 != 0) {
      pLStack_7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)uVar5;
      iVar8 = 0;
      while( true ) {
        if (pLStack_7 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        goto code_?;
        if ((pLStack_7->fields)._size <= iVar8) break;
        RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLStack_7,iVar8,
                           MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                          );
        if (RVar9 == (RegexCharClass_SingleRange)0x0) goto code_?;
        if (((99 < *(int *)((int)RVar9 + 0x18)) || (*(int *)((int)RVar9 + 0x14) == 0)) &&
           (*(int *)((int)RVar9 + 0x1c) != 0)) {
          if (this_02 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
          goto code_?;
          in_stack_10 =
               MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__Contains_AccessoryDataClient_
          ;
          bVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__Contains
                            ((List_1_System_Object_ *)this_02,(Object *)RVar9,
                             MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__Contains_AccessoryDataClient_
                            );
          if (bVar6 == 0) {
            in_stack_10 = (MethodInfo *)&UNK_?;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)this_02,(Object *)RVar9,
                       MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__Add_AccessoryDataClient_
                      );
          }
        }
        iVar8 = iVar8 + 1;
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffffb4,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__Dispose__
               ,in_stack_10);
    uStack_1 = 0xffffffff;
    if ((TypeInfo__AccessoryShopController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this_03 = TypeInfo__AccessoryShopController____c->static_fields->__9__40_2;
    if (this_03 != (Func_2_AccessoryDataClient_Int32_ *)0x0) goto code_?;
    if ((TypeInfo__AccessoryShopController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pAVar11 = TypeInfo__AccessoryShopController____c->static_fields->__9;
    this_03 = (Func_2_AccessoryDataClient_Int32_ *)func_?();
    Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::ObjectConstructor`1[Unity::IL2CPP::
    Metadata::__Il2CppFullySharedGenericType]::
    ObjectConstructor_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((ObjectConstructor_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_03,
               (Object *)pAVar11,
               MethodInfo__AccessoryShopController____c___GetAccessoryDataFromCategoryType_b__40_2_AccessoryDataClient_
               ,(MethodInfo *)0x0);
    TypeInfo__AccessoryShopController____c->static_fields->__9__40_2 = this_03;
  }
  else if (category == AccessoryCategoryClient__Enum_Bundles) {
    this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)func_?()
    ;
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
               MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__List__);
    pAVar12 = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleClient((MethodInfo *)0x0)
    ;
    if (pAVar12 == (AccessoryBundleClient *)0x0) {
code_?:
      func_?();
      func_?();
      func_?();
      pcVar13 = (code *)swi(3);
      pLVar14 = (List_1_AccessoryDataClient_ *)(*pcVar13)();
      return pLVar14;
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (pAVar12->fields)._.accessoryBundleItems;
    iVar8 = 0;
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    for (; iVar8 < (this_00->fields)._size; iVar8 = iVar8 + 1) {
      RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,iVar8,
                         MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Item_int_
                        );
      if (RVar9 == (RegexCharClass_SingleRange)0x0) goto code_?;
      item = AccessoryDataManager::AccessoryDataManager_GetAccessoryDataByMetaDataId
                       (*(int32_t *)((int)RVar9 + 0xc),(MethodInfo *)0x0);
      if ((item != (AccessoryDataClient *)0x0) && ((item->fields)._.owns == 0)) {
        if (this_02 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)this_02,(Object *)item,
                   MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__Add_AccessoryDataClient_
                  );
      }
    }
    if ((TypeInfo__AccessoryShopController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this_03 = TypeInfo__AccessoryShopController____c->static_fields->__9__40_0;
    if (this_03 != (Func_2_AccessoryDataClient_Int32_ *)0x0) goto code_?;
    if ((TypeInfo__AccessoryShopController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pAVar11 = TypeInfo__AccessoryShopController____c->static_fields->__9;
    this_03 = (Func_2_AccessoryDataClient_Int32_ *)func_?();
    Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::ObjectConstructor`1[Unity::IL2CPP::
    Metadata::__Il2CppFullySharedGenericType]::
    ObjectConstructor_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((ObjectConstructor_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_03,
               (Object *)pAVar11,
               MethodInfo__AccessoryShopController____c___GetAccessoryDataFromCategoryType_b__40_0_AccessoryDataClient_
               ,(MethodInfo *)0x0);
    TypeInfo__AccessoryShopController____c->static_fields->__9__40_0 = this_03;
  }
  else if (category == AccessoryCategoryClient__Enum_Featured) {
    this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)func_?()
    ;
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
               MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__List__);
    if (this_01 == (Dictionary_2_System_UInt32_System_Object_ *)0x0) goto code_?;
    pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffff9c,this_01,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__GetEnumerator__
                       );
    uVar5 = *(undefined8 *)&(pDVar4->_current).value;
    uStack_1 = 1;
    while (bVar6 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                             ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                              &stack0xffffffb4,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__MoveNext__
                             ), bVar6 != 0) {
      pLStack_7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)uVar5;
      iVar8 = 0;
      while( true ) {
        if (pLStack_7 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        goto code_?;
        if ((pLStack_7->fields)._size <= iVar8) break;
        RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLStack_7,iVar8,
                           MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                          );
        if (RVar9 == (RegexCharClass_SingleRange)0x0) goto code_?;
        if ((*(char *)((int)RVar9 + 0x12) != '\0') && (*(char *)((int)RVar9 + 0x30) == '\0')) {
          if (this_02 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
          goto code_?;
          in_stack_10 =
               MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__Contains_AccessoryDataClient_
          ;
          bVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__Contains
                            ((List_1_System_Object_ *)this_02,(Object *)RVar9,
                             MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__Contains_AccessoryDataClient_
                            );
          if (bVar6 == 0) {
            in_stack_10 = (MethodInfo *)&UNK_?;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)this_02,(Object *)RVar9,
                       MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__Add_AccessoryDataClient_
                      );
          }
        }
        iVar8 = iVar8 + 1;
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffffb4,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__Dispose__
               ,in_stack_10);
    uStack_1 = 0xffffffff;
    if ((TypeInfo__AccessoryShopController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this_03 = TypeInfo__AccessoryShopController____c->static_fields->__9__40_1;
    if (this_03 != (Func_2_AccessoryDataClient_Int32_ *)0x0) goto code_?;
    if ((TypeInfo__AccessoryShopController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pAVar11 = TypeInfo__AccessoryShopController____c->static_fields->__9;
    this_03 = (Func_2_AccessoryDataClient_Int32_ *)func_?();
    Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::ObjectConstructor`1[Unity::IL2CPP::
    Metadata::__Il2CppFullySharedGenericType]::
    ObjectConstructor_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((ObjectConstructor_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_03,
               (Object *)pAVar11,
               MethodInfo__AccessoryShopController____c___GetAccessoryDataFromCategoryType_b__40_1_AccessoryDataClient_
               ,(MethodInfo *)0x0);
    TypeInfo__AccessoryShopController____c->static_fields->__9__40_1 = this_03;
  }
  else {
    this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              AccessoryDataManager::AccessoryDataManager_GetAccessoriesByCategoryId
                        ((this->fields).selectedTab,(MethodInfo *)0x0);
    if (this_02 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    iVar8 = (this_02->fields)._size;
    while (iVar8 = iVar8 + -1, -1 < iVar8) {
      RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_02,iVar8,
                         MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                        );
      if (RVar9 == (RegexCharClass_SingleRange)0x0) goto code_?;
      iVar15 = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryData::
              AccessoryData_get_DiscountedPrice((AccessoryData *)RVar9,(MethodInfo *)0x0);
      if (iVar15 == 0) {
        RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_02,iVar8,
                           MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                          );
        if (RVar9 == (RegexCharClass_SingleRange)0x0) goto code_?;
        if (*(char *)((int)RVar9 + 0x30) == '\0') {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__RemoveAt
                    ((List_1_System_Object_ *)this_02,iVar8,
                     MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__RemoveAt_int_
                    );
        }
      }
    }
    if ((TypeInfo__AccessoryShopController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this_03 = TypeInfo__AccessoryShopController____c->static_fields->__9__40_3;
    if (this_03 != (Func_2_AccessoryDataClient_Int32_ *)0x0) goto code_?;
    if ((TypeInfo__AccessoryShopController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pAVar11 = TypeInfo__AccessoryShopController____c->static_fields->__9;
    this_03 = (Func_2_AccessoryDataClient_Int32_ *)func_?();
    Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::ObjectConstructor`1[Unity::IL2CPP::
    Metadata::__Il2CppFullySharedGenericType]::
    ObjectConstructor_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((ObjectConstructor_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_03,
               (Object *)pAVar11,
               MethodInfo__AccessoryShopController____c___GetAccessoryDataFromCategoryType_b__40_3_AccessoryDataClient_
               ,(MethodInfo *)0x0);
    TypeInfo__AccessoryShopController____c->static_fields->__9__40_3 = this_03;
  }
  func_?();
code_?:
  source = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_3
                     ((IEnumerable_1_System_Object_ *)this_02,(Func_2_Object_Int32_ *)this_03,
                      System__Linq__IOrderedEnumerable<AccessoryDataClient>_MethodInfo__System__Linq__Enumerable__OrderBy<AccessoryDataClient,_int>_System__Collections__Generic__IEnumerable<AccessoryDataClient>__System__Func<AccessoryDataClient,_int>_
                     );
  pLVar14 = (List_1_AccessoryDataClient_ *)
            System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_8
                      ((IEnumerable_1_System_Object_ *)source,
                       System__Collections__Generic__List<AccessoryDataClient>_MethodInfo__System__Linq__Enumerable__ToList<AccessoryDataClient>_System__Collections__Generic__IEnumerable<AccessoryDataClient>_
                      );
  *unaff_FS_OFFSET = uStack_3;
  return pLVar14;
}


/* Int32 GetOwnedAmount(List`1[AccessoryDataClient]) */

int32_t Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_GetOwnedAmount
                  (AccessoryShopController *this,List_1_AccessoryDataClient_ *accessoryList,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  index = 0;
  iVar1 = 0;
  if (accessoryList != (List_1_AccessoryDataClient_ *)0x0) {
    while( true ) {
      iVar2 = iVar1;
      if ((accessoryList->fields)._size <= index) {
        return iVar2;
      }
      RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         accessoryList,index,
                         MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                        );
      if (RVar3 == (RegexCharClass_SingleRange)0x0) break;
      index = index + 1;
      iVar1 = iVar2 + 1;
      if (*(char *)((int)RVar3 + 0x30) == '\0') {
        iVar1 = iVar2;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Void InventoryChanged() */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_InventoryChanged
               (AccessoryShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__AccessoryShopController____c___InventoryChanged_b__33_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AccessoryShopController____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__AccessoryShopController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AccessoryShopController____c);
  }
  callbackFunction = TypeInfo__AccessoryShopController____c->static_fields->__9__33_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__AccessoryShopController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__AccessoryShopController____c);
    }
    object = TypeInfo__AccessoryShopController____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__AccessoryShopController____c___InventoryChanged_b__33_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AccessoryShopController____c->static_fields->__9__33_0 = callbackFunction;
    func_?(&TypeInfo__AccessoryShopController____c->static_fields->__9__33_0,
                    callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  AccessoryShopController_Activate(this,(this->fields).currentlyPushOption,(MethodInfo *)0x0);
  return;
}


/* Void OnPop() */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_OnPop
               (AccessoryShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AccessoryDataManager);
    func_?(&MethodInfo__AccessoryShopController__ReadyCallback__);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__AccessoryShopController____c___OnPop_b__37_0_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AccessoryShopController____c);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pUVar1 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__AccessoryShopController__ReadyCallback__,
             (MethodInfo *)0x0);
  pUVar1 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pUVar1 == (UnityAction *)0x0) {
    TypeInfo__AccessoryDataManager->static_fields->readyCallback = (UnityAction *)0x0;
code_?:
    func_?();
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__AccessoryShopController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    callbackFunction = TypeInfo__AccessoryShopController____c->static_fields->__9__37_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)0x0) {
      if ((TypeInfo__AccessoryShopController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      object = TypeInfo__AccessoryShopController____c->static_fields->__9;
      callbackFunction = (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)func_?();
      pGVar2 = (GameObject *)&UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__AccessoryShopController____c___OnPop_b__37_0_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__AccessoryShopController____c->static_fields->__9__37_0 = callbackFunction;
      func_?();
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar2,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
              );
    ppTVar3 = &(this->fields).previewItemsRoot;
    x = *ppTVar3;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 == 0) {
code_?:
      uStack5 = 0;
      *ppTVar3 = (Transform *)0x0;
      ppTStack6 = ppTVar3;
      func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this,0,(MethodInfo *)0x0);
      AccessoryShopController_SetAccessoriesToSelectable(this,0,(MethodInfo *)0x0);
      return;
    }
    if (*ppTVar3 != (Transform *)0x0) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)*ppTVar3,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pGVar2,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  else {
    pUVar7 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar7 = pUVar1;
    }
    if (pUVar7 != (UnityAction *)0x0) {
      TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar7;
      pUVar7 = (UnityAction *)0x0;
      if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar7 = pUVar1;
      }
      if (pUVar7 == (UnityAction *)0x0) goto code_?;
      goto code_?;
    }
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* IEnumerator OpenAccessoryViewDelayed() */

IEnumerator *
Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_OpenAccessoryViewDelayed
          (AccessoryShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AccessoryShopController___OpenAccessoryViewDelayed_d__21);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AccessoryShopController___OpenAccessoryViewDelayed_d__21;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Void OpenInventoryAtItem(UIPushOption, AccessoryDataClient) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_OpenInventoryAtItem
               (AccessoryShopController *this,UIPushOption__Enum pushOption,
               AccessoryDataClient *accessoryData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AccessoryDataManager);
    func_?(&MethodInfo__AccessoryShopController__ReadyCallbackAccessoryView__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).accessoryDataToShow;
  *ppAVar1 = accessoryData;
  func_?(ppAVar1,accessoryData);
  (this->fields).pushOption = pushOption;
  pUVar2 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,
             MethodInfo__AccessoryShopController__ReadyCallbackAccessoryView__,(MethodInfo *)0x0);
  pUVar2 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar2,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pUVar2 == (UnityAction *)0x0) {
    TypeInfo__AccessoryDataManager->static_fields->readyCallback = (UnityAction *)0x0;
    pUVar3 = (UnityAction *)0x0;
code_?:
    pUStack4 = (UnityAction__Class *)pUVar3;
    func_?();
    AccessoryDataManager::AccessoryDataManager_SetReady((MethodInfo *)0x0);
    return;
  }
  pUVar3 = (UnityAction *)0x0;
  if (pUVar2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
    pUVar3 = pUVar2;
  }
  if (pUVar3 == (UnityAction *)0x0) {
    pUStack4 = TypeInfo__UnityEngine__Events__UnityAction;
    func_?();
    pUStack4 = extraout_EDX;
  }
  else {
    TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar3;
    pUVar3 = (UnityAction *)0x0;
    if (pUVar2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar3 = pUVar2;
    }
    pUStack4 = TypeInfo__UnityEngine__Events__UnityAction;
    if (pUVar3 != (UnityAction *)0x0) goto code_?;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void PageTurned(Int32) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_PageTurned
               (AccessoryShopController *this,int32_t dir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).tabs;
  if (this_00 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
    this_01 = (TabState *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__get_Item
                        ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                         (this->fields).selectedTab,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                        );
    if (this_01 != (TabState *)0x0) {
      bVar1 = TabState::TabState_UpdatePage(this_01,dir,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        AccessoryShopController_UpdateContent(this,(MethodInfo *)0x0);
      }
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ReadyCallback() */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_ReadyCallback
               (AccessoryShopController *this,MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AccessoryDataManager);
    func_?(&MethodInfo__AccessoryShopController__PageTurned_int_);
    func_?(&MethodInfo__AccessoryShopController__ReadyCallback__);
    func_?(&MethodInfo__AccessoryShopController__TabSelected_int_);
    func_?(&
                    MethodInfo__AccessoryShopController___ReadyCallback_b__25_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__get_Current__
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_TabState>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_TabState>__get_Value__
                   );
    func_?(&
                    InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__AccessoryShopController____c___ReadyCallback_b__25_0_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__AccessoryShopController____c___ReadyCallback_b__25_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AccessoryShopController____c);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  (this->fields).selectedTab = (this->fields).startingCategory;
  if ((this->fields).firstTimeSetup != 0) {
    AccessoryShopController_DisplayAllItems(this,(MethodInfo *)0x0);
    (this->fields).firstTimeSetup = 0;
  }
  pUVar1 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
  this_03 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_03,(Object *)this,MethodInfo__AccessoryShopController__ReadyCallback__,
             (MethodInfo *)0x0);
  pUVar1 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar1,(Delegate *)this_03,(MethodInfo *)0x0);
  if (pUVar1 == (UnityAction *)0x0) {
    TypeInfo__AccessoryDataManager->static_fields->readyCallback = (UnityAction *)0x0;
code_?:
    func_?();
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__AccessoryShopController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    callbackFunction = TypeInfo__AccessoryShopController____c->static_fields->__9__25_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)0x0) {
      if ((TypeInfo__AccessoryShopController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pAVar3 = TypeInfo__AccessoryShopController____c->static_fields->__9;
      callbackFunction = (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)pAVar3,
                 MethodInfo__AccessoryShopController____c___ReadyCallback_b__25_0_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__AccessoryShopController____c->static_fields->__9__25_0 = callbackFunction;
      func_?();
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar2,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
              );
    (this->fields).currentlyPushOption = (this->fields).pushOption;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this,1,(MethodInfo *)0x0);
    pIVar4 = (this->fields).inventoryControllerPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pIVar4 = (InventoryController *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pIVar4,
                        InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController_
                       );
    ppIVar5 = &(this->fields).inventoryController;
    *ppIVar5 = pIVar4;
    func_?();
    pIVar4 = *ppIVar5;
    if (pIVar4 == (InventoryController *)0x0) goto code_?;
    pUVar6 = (pIVar4->fields).OnPageTurned;
    pUVar7 = TypeInfo__UnityEngine__Events__UnityAction<int>;
    pUVar8 = (UnityAction_1_System_Int32Enum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (pUVar8,(Object *)this,MethodInfo__AccessoryShopController__PageTurned_int_,
               (MethodInfo *)0x0);
    pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar6,(Delegate *)pUVar8,(MethodInfo *)0x0);
    if (pDVar9 == (Delegate *)0x0) {
      (pIVar4->fields).OnPageTurned = (UnityAction_1_System_Int32_ *)0x0;
code_?:
      func_?();
      pIVar10 = (pUVar7->_0).image;
      if (pIVar10 == (Il2CppImage *)0x0) goto code_?;
      pDVar9 = (Delegate *)pIVar10->token;
      pUVar7 = TypeInfo__UnityEngine__Events__UnityAction<int>;
      pUVar8 = (UnityAction_1_System_Int32Enum_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (pUVar8,(Object *)this,MethodInfo__AccessoryShopController__TabSelected_int_,
                 (MethodInfo *)0x0);
      pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                         (pDVar9,(Delegate *)pUVar8,(MethodInfo *)0x0);
      if (pDVar9 == (Delegate *)0x0) {
        pIVar10->token = 0;
code_?:
        func_?();
        pIVar10 = (pUVar7->_0).image;
        if (pIVar10 != (Il2CppImage *)0x0) {
          InventoryController::InventoryController_Initialize
                    ((InventoryController *)pIVar10,(this->fields).numberOfSlotsPrPage,
                     (MethodInfo *)0x0);
          (this->fields).displayShopItems = 1;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)(this->fields).tabs;
          if (this_00 !=
              (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
            StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
            Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                      (this_00,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Clear__)
            ;
            pIVar10 = (pUVar7->_0).image;
            if (pIVar10 != (Il2CppImage *)0x0) {
              InventoryController::InventoryController_Clear
                        ((InventoryController *)pIVar10,(MethodInfo *)0x0);
              method_00 = this;
              AccessoryShopController_DisplayAllItems(this,(MethodInfo *)0x0);
              this_01 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).tabs;
              if (this_01 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
                pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          UInt32,System::Object]::
                          Dictionary_2_System_UInt32_System_Object__GetEnumerator
                                    ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                      *)&stack0xffffffac,this_01,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__GetEnumerator__
                                    );
                pOStack_12 = (Object__Class *)pDVar11->_dictionary;
                uVar13 = (pDVar11->_current).key;
                while( true ) {
                  pOVar14 = (Object *)&UNK_?;
                  bVar15 = mscorlib.dll::System::Collections::Generic::
                          Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                          Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                    ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                      *)&pOStack_12,
                                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__MoveNext__
                                    );
                  if (bVar15 == 0) break;
                  pIVar4 = (this->fields).inventoryController;
                  if ((pOVar14 == (Object *)0x0) || (pIVar4 == (InventoryController *)0x0))
                  goto code_?;
                  InventoryController::InventoryController_AddTab
                            (pIVar4,uVar13,(String *)pOVar14[1].monitor,(MethodInfo *)0x0);
                }
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                          ((Object *)&pOStack_12,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__Dispose__
                           ,(MethodInfo *)method_00);
                pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                if ((TypeInfo__AccessoryShopController____c->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                callbackFunction_00 =
                     TypeInfo__AccessoryShopController____c->static_fields->__9__25_1;
                if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
                  if ((TypeInfo__AccessoryShopController____c->_1).cctor_finished_or_no_cctor == 0)
                  {
                    func_?();
                  }
                  pAVar3 = TypeInfo__AccessoryShopController____c->static_fields->__9;
                  callbackFunction_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?()
                  ;
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                  Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                            ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,
                             (Object *)pAVar3,
                             MethodInfo__AccessoryShopController____c___ReadyCallback_b__25_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                             ,(MethodInfo *)0x0);
                  TypeInfo__AccessoryShopController____c->static_fields->__9__25_1 =
                       callbackFunction_00;
                  pGVar2 = (GameObject *)&UNK_?;
                  func_?();
                }
                if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy
                          (pGVar2,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                          );
                pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                puVar16 = &UNK_?;
                callbackFunction_01 =
                     (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_01,
                           (Object *)this,
                           MethodInfo__AccessoryShopController___ReadyCallback_b__25_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy
                          (pGVar2,(BaseEventData *)0x0,callbackFunction_01,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                          );
                AccessoryShopController_SetAccessoriesToSelectable(this,0,(MethodInfo *)0x0);
                this_02 = (this->fields).tabs;
                if (this_02 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
                  bVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Single]::
                          Dictionary_2_System_Int32_System_Single__ContainsKey
                                    ((Dictionary_2_System_Int32_System_Single_ *)this_02,0xff,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                                    );
                  if ((bVar15 == 0) || ((this->fields).startingCategory == 0xfe)) {
                    pIVar4 = (this->fields).inventoryController;
                    pSVar17 = LocalizedEnums::LocalizedEnums___3
                                        ((this->fields).selectedTab,(MethodInfo *)0x0);
                    if (pIVar4 != (InventoryController *)0x0) {
                      InventoryController::InventoryController_SetHeaderText
                                (pIVar4,pSVar17,(MethodInfo *)0x0);
                      AccessoryShopController_UpdateContent(this,(MethodInfo *)0x0);
                      *unaff_FS_OFFSET = puVar16;
                      return;
                    }
                  }
                  else {
                    (this->fields).selectedTab = 0xff;
                    bVar15 = (this->fields).displayShopItems;
                    AccessoryShopController_DisplayPurchasableItems(this,1,(MethodInfo *)0x0);
                    (this->fields).displayShopItems = bVar15;
                    pIVar4 = (this->fields).inventoryController;
                    pSVar17 = LocalizedEnums::LocalizedEnums___3
                                        (AccessoryCategoryClient__Enum_Featured,(MethodInfo *)0x0);
                    if (pIVar4 != (InventoryController *)0x0) {
                      uVar18 = 0;
                      InventoryController::InventoryController_SetHeaderText
                                (pIVar4,pSVar17,(MethodInfo *)0x0);
                      *unaff_FS_OFFSET = uVar18;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        goto code_?;
      }
      uVar13 = func_?();
      if (uVar13 == 0) goto code_?;
      pIVar10->token = uVar13;
      iVar19 = func_?();
      if (iVar19 != 0) goto code_?;
      goto code_?;
    }
    pUVar6 = (UnityAction_1_System_Int32_ *)func_?();
    if (pUVar6 != (UnityAction_1_System_Int32_ *)0x0) {
      (pIVar4->fields).OnPageTurned = pUVar6;
      iVar19 = func_?();
      if (iVar19 == 0) goto code_?;
      goto code_?;
    }
  }
  else {
    pUVar20 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar20 = pUVar1;
    }
    if (pUVar20 != (UnityAction *)0x0) {
      TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar20;
      pUVar20 = (UnityAction *)0x0;
      if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar20 = pUVar1;
      }
      if (pUVar20 != (UnityAction *)0x0) goto code_?;
    }
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void ReadyCallbackAccessoryView() */

void Assembly-CSharp.dll::AccessoryShopController::
     AccessoryShopController_ReadyCallbackAccessoryView
               (AccessoryShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AccessoryDataManager);
    func_?(&MethodInfo__AccessoryShopController__ReadyCallbackAccessoryView__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pUVar1 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,
             MethodInfo__AccessoryShopController__ReadyCallbackAccessoryView__,(MethodInfo *)0x0);
  pUVar1 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pUVar1 == (UnityAction *)0x0) {
    TypeInfo__AccessoryDataManager->static_fields->readyCallback = (UnityAction *)0x0;
code_?:
    func_?();
    AccessoryShopController_ReadyCallback(this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    method_00 = TypeInfo__AccessoryShopController___OpenAccessoryViewDelayed_d__21;
    value = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?();
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
    return;
  }
  pUVar2 = (UnityAction *)0x0;
  if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
    pUVar2 = pUVar1;
  }
  if (pUVar2 == (UnityAction *)0x0) {
    func_?();
  }
  else {
    TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar2;
    pUVar2 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar2 = pUVar1;
    }
    if (pUVar2 != (UnityAction *)0x0) goto code_?;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RefreshItems() */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_RefreshItems
               (AccessoryShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).tabs;
  if (pDVar1 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,(this->fields).selectedTab
                       ,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      AccessoryShopController_TabSelected(this,(this->fields).startingCategory,(MethodInfo *)0x0);
    }
    pDVar1 = (this->fields).tabs;
    if (pDVar1 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,
                          (this->fields).selectedTab,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                         );
      if (pOVar3 != (Object *)0x0) {
        page = pOVar3[2].monitor;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)(this->fields).tabs;
        if (this_00 !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
          StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
          Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                    (this_00,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Clear__);
          this_01 = (this->fields).inventoryController;
          if (this_01 != (InventoryController *)0x0) {
            InventoryController::InventoryController_Clear(this_01,(MethodInfo *)0x0);
            if ((this->fields).displayShopItems == 0) {
              AccessoryShopController_DisplayOwnedItems(this,(MethodInfo *)0x0);
            }
            else {
              AccessoryShopController_DisplayAllItems(this,(MethodInfo *)0x0);
            }
            pDVar1 = (this->fields).tabs;
            if (pDVar1 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
              bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                                ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,
                                 (this->fields).selectedTab,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                                );
              if (bVar2 == 0) {
                AccessoryShopController_TabSelected
                          (this,(this->fields).startingCategory,(MethodInfo *)0x0);
              }
              pDVar1 = (this->fields).tabs;
              if (pDVar1 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
                this_02 = (TabState *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,
                                     (this->fields).selectedTab,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                    );
                if (this_02 != (TabState *)0x0) {
                  TabState::TabState_SetPage(this_02,(int32_t)page,(MethodInfo *)0x0);
                  AccessoryShopController_UpdateContent(this,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ResetAfterBundlePurchase() */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_ResetAfterBundlePurchase
               (AccessoryShopController *this,MethodInfo *method)

{
  (this->fields).startingCategory = 1;
  (this->fields).selectedTab = 1;
  AccessoryShopController_DisplayPurchasableItems
            (this,(this->fields).displayShopItems,(MethodInfo *)0x0);
  this_00 = (this->fields).inventoryController;
  category = LocalizedEnums::LocalizedEnums___3
                       (AccessoryCategoryClient__Enum_Hats,(MethodInfo *)0x0);
  if (this_00 != (InventoryController *)0x0) {
    InventoryController::InventoryController_SetHeaderText(this_00,category,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetAccessoriesToSelectable(Boolean) */

void Assembly-CSharp.dll::AccessoryShopController::
     AccessoryShopController_SetAccessoriesToSelectable
               (AccessoryShopController *this,bool selectable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__AccessoryShopController____c__DisplayClass32_0___SetAccessoriesToSelectable_b__0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AccessoryShopController____c__DisplayClass32_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AccessoryShopController____c__DisplayClass32_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    pOVar1 = value + 1;
    pOVar1->klass = (Object__Class *)0x0;
    func_?(pOVar1,0);
    MVar2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar2 == MVGameMode__Enum_CharacterEditor) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__AccessoryShopController____c__DisplayClass32_0___SetAccessoriesToSelectable_b__0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                );
    }
    else {
      this_00 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if (this_00 == (MVLocalPlayer *)0x0) goto code_?;
      pMVar3 = MVLocalPlayer::MVLocalPlayer_get_Body(this_00,(MethodInfo *)0x0);
      pOVar1->klass = (Object__Class *)pMVar3;
      func_?(pOVar1,pMVar3);
    }
    if ((MVBody *)pOVar1->klass != (MVBody *)0x0) {
      MVBody::MVBody_set_AccessoryMoveOverride((MVBody *)pOVar1->klass,selectable,(MethodInfo *)0x0)
      ;
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Setup() */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_Setup
               (AccessoryShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pLVar1 = AccessoryShopController_GetAccessoryDataFromCategoryType
                     (this,AccessoryCategoryClient__Enum_Hats,(MethodInfo *)0x0);
  if (pLVar1 != (List_1_AccessoryDataClient_ *)0x0) {
    AccessoryShopController_CreateAndAddTab
              (this,AccessoryCategoryClient__Enum_Hats,(pLVar1->fields)._size,(MethodInfo *)0x0);
    pLVar1 = AccessoryShopController_GetAccessoryDataFromCategoryType
                       (this,AccessoryCategoryClient__Enum_Particles,(MethodInfo *)0x0);
    if (pLVar1 != (List_1_AccessoryDataClient_ *)0x0) {
      AccessoryShopController_CreateAndAddTab
                (this,AccessoryCategoryClient__Enum_Particles,(pLVar1->fields)._size,
                 (MethodInfo *)0x0);
      pLVar1 = AccessoryShopController_GetAccessoryDataFromCategoryType
                         (this,AccessoryCategoryClient__Enum_BackAccessories,(MethodInfo *)0x0);
      if (pLVar1 != (List_1_AccessoryDataClient_ *)0x0) {
        AccessoryShopController_CreateAndAddTab
                  (this,AccessoryCategoryClient__Enum_BackAccessories,(pLVar1->fields)._size,
                   (MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pLVar1 = AccessoryShopController_GetAccessoryDataFromCategoryType
                           (this,AccessoryCategoryClient__Enum_Bundles,(MethodInfo *)0x0);
        if (pLVar1 != (List_1_AccessoryDataClient_ *)0x0) {
          iVar2 = (pLVar1->fields)._size;
          if (0 < iVar2) {
            AccessoryShopController_CreateAndAddTab
                      (this,AccessoryCategoryClient__Enum_Bundles,iVar2,(MethodInfo *)0x0);
          }
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pLVar1 = AccessoryShopController_GetAccessoryDataFromCategoryType
                             (this,AccessoryCategoryClient__Enum_Featured,(MethodInfo *)0x0);
          if (pLVar1 != (List_1_AccessoryDataClient_ *)0x0) {
            iVar2 = (pLVar1->fields)._size;
            if (0 < iVar2) {
              AccessoryShopController_CreateAndAddTab
                        (this,AccessoryCategoryClient__Enum_Featured,iVar2,(MethodInfo *)0x0);
            }
            pLVar1 = AccessoryShopController_GetAccessoryDataFromCategoryType
                               (this,AccessoryCategoryClient__Enum_LevelUnlocks,(MethodInfo *)0x0);
            if (pLVar1 != (List_1_AccessoryDataClient_ *)0x0) {
              AccessoryShopController_CreateAndAddTab
                        (this,AccessoryCategoryClient__Enum_LevelUnlocks,(pLVar1->fields)._size,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void TabSelected(Int32) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_TabSelected
               (AccessoryShopController *this,int32_t tabId,MethodInfo *method)

{
  (this->fields).selectedTab = tabId;
  if ((tabId == 0xff) || (tabId == 0xfe)) {
    bVar1 = (this->fields).displayShopItems;
    AccessoryShopController_DisplayPurchasableItems(this,1,(MethodInfo *)0x0);
    (this->fields).displayShopItems = bVar1;
  }
  else {
    AccessoryShopController_DisplayPurchasableItems
              (this,(this->fields).displayShopItems,(MethodInfo *)0x0);
  }
  this_00 = (this->fields).inventoryController;
  category = LocalizedEnums::LocalizedEnums___3(tabId,(MethodInfo *)0x0);
  if (this_00 != (InventoryController *)0x0) {
    InventoryController::InventoryController_SetHeaderText(this_00,category,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateContent() */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_UpdateContent
               (AccessoryShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__AccessoryShopController___UpdateContent_b__38_0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Preview_Root___AccessoryShopCont);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).previewItemsRoot;
  ppTVar2 = &(this->fields).previewItemsRoot;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if (*ppTVar2 == (Transform *)0x0) goto code_?;
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)*ppTVar2,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar4,(MethodInfo *)0x0);
  }
  pGVar4 = (GameObject *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (pGVar4,StringLiteral_Preview_Root___AccessoryShopCont,(MethodInfo *)0x0);
  if (pGVar4 != (GameObject *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar4,(MethodInfo *)0x0);
    *ppTVar2 = pTVar1;
    func_?(ppTVar2,pTVar1);
    pIVar5 = (this->fields).inventoryController;
    if (pIVar5 != (InventoryController *)0x0) {
      InventoryController::InventoryController_Clear(pIVar5,(MethodInfo *)0x0);
      pDVar6 = (this->fields).tabs;
      if (pDVar6 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
        bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                          ((Dictionary_2_System_Int32_System_Single_ *)pDVar6,
                           (this->fields).selectedTab,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                          );
        if (bVar3 == 0) {
          (this->fields).selectedTab = (this->fields).startingCategory;
        }
        pDVar6 = (this->fields).tabs;
        if (pDVar6 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
          this_00 = (TabState *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar6,
                               (this->fields).selectedTab,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                              );
          tabId = (this->fields).selectedTab;
          pIVar5 = (this->fields).inventoryController;
          if (this_00 != (TabState *)0x0) {
            currentPage = (this_00->fields).currentPage;
            maxPages = TabState::TabState_get_MaxPages(this_00,(MethodInfo *)0x0);
            if (pIVar5 != (InventoryController *)0x0) {
              InventoryController::InventoryController_SelectTab
                        (pIVar5,tabId,currentPage,maxPages,(MethodInfo *)0x0);
              MVar7 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
              if (MVar7 == MVGameMode__Enum_CharacterEditor) {
                pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                callbackFunction =
                     (ExecuteEvents_EventFunction_1_System_Object_ *)
                     func_?(
                                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                                    );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                           (Object *)this,
                           MethodInfo__AccessoryShopController___UpdateContent_b__38_0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy
                          (pGVar4,(BaseEventData *)0x0,callbackFunction,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                          );
                return;
              }
              this_01 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer
                                  ((MethodInfo *)0x0);
              if (this_01 != (MVLocalPlayer *)0x0) {
                avatarBody = MVLocalPlayer::MVLocalPlayer_get_Body(this_01,(MethodInfo *)0x0);
                AccessoryShopController_UpdateContentWithBody(this,avatarBody,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UpdateContentWithBody(MVBody) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_UpdateContentWithBody
               (AccessoryShopController *this,MVBody *avatarBody,MethodInfo *method)

{
  pAVar1 = this;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__RemoveAt_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                   );
    func_?(&
                    AccessoryInventoryViewItem_MethodInfo__UnityEngine__Object__Instantiate<AccessoryInventoryViewItem>_AccessoryInventoryViewItem_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            AccessoryShopController_GetAccessoryDataFromCategoryType
                      (this,(this->fields).selectedTab,(MethodInfo *)0x0);
  if ((this->fields).displayShopItems == 0) {
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    index = (this_00->fields)._size;
    while (index = index + -1, -1 < index) {
      RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,index,
                         MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                        );
      if (RVar2 == (RegexCharClass_SingleRange)0x0) goto code_?;
      if (*(char *)((int)RVar2 + 0x30) == '\0') {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__RemoveAt
                  ((List_1_System_Object_ *)this_00,index,
                   MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__RemoveAt_int_
                  );
      }
    }
  }
  pDVar3 = (this->fields).tabs;
  if (((pDVar3 != (Dictionary_2_System_Int32_TabState_ *)0x0) &&
      (pTVar4 = (TabState *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__get_Item
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,
                           (this->fields).selectedTab,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                          ), pTVar4 != (TabState *)0x0)) &&
     (pIVar5 = TabState::TabState_get_SlotRange(pTVar4,(MethodInfo *)0x0),
     pIVar5 != (Int32__Array *)0x0)) {
    if (pIVar5->max_length == 0) {
code_?:
      func_?();
    }
    else {
      index_00 = (AccessoryShopController *)pIVar5->vector[0];
      this = index_00;
      if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        do {
          if ((this_00->fields)._size <= (int)index_00) {
            return;
          }
          RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_00,(int32_t)index_00,
                             MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                            );
          pDVar3 = (pAVar1->fields).tabs;
          if (((pDVar3 == (Dictionary_2_System_Int32_TabState_ *)0x0) ||
              (pTVar4 = (TabState *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,
                                   (pAVar1->fields).selectedTab,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                  ), pTVar4 == (TabState *)0x0)) ||
             (pIVar5 = TabState::TabState_get_SlotRange(pTVar4,(MethodInfo *)0x0),
             pIVar5 == (Int32__Array *)0x0)) break;
          if (pIVar5->max_length < 2) goto code_?;
          if ((int)this < pIVar5->vector[1]) {
            if (RVar2 == (RegexCharClass_SingleRange)0x0) break;
            bVar6 = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryData::
                    AccessoryData_GetShowInShop((AccessoryData *)RVar2,(MethodInfo *)0x0);
            if ((bVar6 != 0) || (*(char *)((int)RVar2 + 0x30) != '\0')) {
              pAVar7 = (pAVar1->fields).accessoryInventoryItemPrefab;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pAVar7 = (AccessoryInventoryViewItem *)
                       UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                 ((Object *)pAVar7,
                                  AccessoryInventoryViewItem_MethodInfo__UnityEngine__Object__Instantiate<AccessoryInventoryViewItem>_AccessoryInventoryViewItem_
                                 );
              this_01 = (pAVar1->fields).inventoryController;
              if ((pAVar7 == (AccessoryInventoryViewItem *)0x0) ||
                 (item = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pAVar7,(MethodInfo *)0x0),
                 this_01 == (InventoryController *)0x0)) break;
              InventoryController::InventoryController_AddObject
                        (this_01,item,(int)this % (pAVar1->fields).numberOfSlotsPrPage,
                         (MethodInfo *)0x0);
              RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                (this_00,(int32_t)index_00,
                                 MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                                );
              AccessoryInventoryViewItem::AccessoryInventoryViewItem_Initialize
                        (pAVar7,(AccessoryDataClient *)RVar2,(pAVar1->fields).previewItemsRoot,
                         avatarBody,(pAVar1->fields).selectedTab == 0xfe,(MethodInfo *)0x0);
              this = (AccessoryShopController *)((int)&this->klass + 1);
            }
          }
          index_00 = (AccessoryShopController *)((int)&index_00->klass + 1);
        } while( true );
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void <ReadyCallback>b__25_2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController__ReadyCallback_b__25_2
               (AccessoryShopController *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__AccessoryShopController__OnPop__);
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).inventoryController;
  if (this_00 != (InventoryController *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    iVar2 = (this->fields).pushOption;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__AccessoryShopController__OnPop__,(MethodInfo *)0x0
              );
    if (x != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar1,iVar2,this_01,4);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void <UpdateContent>b__38_0(IGetCurrentBody, BaseEventData) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController__UpdateContent_b__38_0
               (AccessoryShopController *this,IGetCurrentBody *x,BaseEventData *y,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__AccessoryShopController__UpdateContentWithBody_MVBody_);
    func_?(&TypeInfo__System__Action<MVBody>);
    func_?(&TypeInfo__UnityEngine__EventSystems__IGetCurrentBody);
    cRam_? = '\x01';
  }
  this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(TypeInfo__System__Action<MVBody>);
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_00,(Object *)this,
             MethodInfo__AccessoryShopController__UpdateContentWithBody_MVBody_,(MethodInfo *)0x0);
  if (x != (IGetCurrentBody *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IGetCurrentBody);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* AccessoryShopController() */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController__ctor
               (AccessoryShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AccessoryAttacher);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_TabState>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_TabState>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Dictionary__);
  ppDVar1 = &(this->fields).tabs;
  *ppDVar1 = (Dictionary_2_System_Int32_TabState_ *)this_00;
  func_?(ppDVar1,this_00);
  method_00 = TypeInfo__AccessoryAttacher;
  value = (AccessoryAttacher *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  ppAVar2 = &(this->fields).accessoryAttacher;
  *ppAVar2 = value;
  func_?(ppAVar2,value);
  (this->fields).attachingReady = 1;
  (this->fields).startingCategory = 1;
  (this->fields).displayShopItems = 1;
  (this->fields).firstTimeSetup = 1;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


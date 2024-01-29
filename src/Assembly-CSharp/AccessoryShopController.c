
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
  this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__AccessoryShopController____c__DisplayClass41_0);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
  if (this_01 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
    (this_01->fields)._._defaultValue_k__BackingField = (List_1_System_Object_ *)this;
    func_?(&this_01->fields,this);
    this_01[1].klass = (UxmlObjectListAttributeDescription_1_System_Object___Class *)offset;
    this_01[1].monitor = (MonitorData *)scale;
    (this->fields).currentlyAttachingID = productId;
    MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar1 == MVGameMode__Enum_CharacterEditor) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      callbackFunction_00 =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,(Object *)this_01
                 ,
                 MethodInfo__AccessoryShopController____c__DisplayClass41_0___AttachToBody_b__0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar2,(BaseEventData *)0x0,callbackFunction_00,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                );
      return;
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (this_02 != (MVLocalPlayer *)0x0) {
      currentBody = MVLocalPlayer::MVLocalPlayer_get_Body(this_02,(MethodInfo *)0x0);
      offset_00 = this_01[1].klass;
      scale_00 = this_01[1].monitor;
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
        this_03 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_03,(Object *)this,MethodInfo__AccessoryShopController__AttacherFinished__,
                   (MethodInfo *)0x0);
        if (this_00 == (AccessoryAttacher *)0x0) goto code_?;
        AccessoryAttacher::AccessoryAttacher_AttachAccessory
                  (this_00,streamingAssetsId,currentBody,(float)offset_00,(float)scale_00,
                   (Action *)this_03,(MethodInfo *)0x0);
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
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
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object
                     ,
                     MethodInfo__AccessoryShopController____c___Attach_b__42_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__AccessoryShopController____c->static_fields->__9__42_0 = callbackFunction;
          func_?();
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar2,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                  );
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).tabs;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    DStack_1._currentValue = (Object *)&UNK_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::StyleSheets::
    StyleSheetCache+SheetHandleKey,System::Object]::
    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
              (this_00,MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Clear__)
    ;
    pIVar2 = (this->fields).inventoryController;
    if ((pIVar2 != (InventoryController *)0x0) &&
       ((pIVar2->fields).inventorySlots != (InventorySlots *)0x0)) {
      uVar3 = *unaff_FS_OFFSET;
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
      if (*(Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
            **)(in_stack_4 + 0x10) !=
          (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) {
        method_00 = (MethodInfo *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                              (*(Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                 **)(in_stack_4 + 0x10),
                               MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Values__
                              );
        if (method_00 != (MethodInfo *)0x0) {
          pDVar5 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                   StyleSheetCache+SheetHandleKey,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                             (&DStack_1,
                              (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                               *)method_00,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_InventorySlot>__GetEnumerator__
                             );
          DStack_1._version = 0;
          pIVar6 = (InventorySlot *)pDVar5->_currentValue;
          DStack_1._currentValue = (Object *)&stack0xffffffd0;
          while( true ) {
            this_01 = pIVar6;
            bVar7 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                    UInt32,System::Object]::
                    Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                *)&stack0xffffffd0,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__MoveNext__
                              );
            if (bVar7 == 0) {
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                        ((Object *)&stack0xffffffd0,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__Dispose__
                         ,method_00);
              *unaff_FS_OFFSET = uVar3;
              return;
            }
            if (this_01 == (InventorySlot *)0x0) break;
            pIVar6 = this_01;
            if (cRam_? == '\0') {
              func_?(&TypeInfo__UnityEngine__Object);
              cRam_? = '\x01';
            }
            pGVar8 = InventorySlot::InventorySlot_get_Item(this_01,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            method_00 = (MethodInfo *)0x0;
            bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                              ((Object_1 *)pGVar8,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar7 != 0) {
              pGVar8 = InventorySlot::InventorySlot_get_Item(this_01,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pIVar6 = (InventorySlot *)0x0;
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                        ((Object_1 *)pGVar8,(MethodInfo *)0x0);
            }
          }
        }
      }
      func_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  pSVar1 = LocalizedEnums::LocalizedEnums___3(category,(MethodInfo *)0x0);
  pOVar2 = (Object__Class *)(this->fields).numberOfSlotsPrPage;
  method_00 = TypeInfo__TabState;
  value = (Object *)func_?();
  value[2].monitor = (MonitorData *)0x1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[3].klass = (Object__Class *)category;
  value[1].klass = pOVar2;
  value[1].monitor = (MonitorData *)pSVar1;
  func_?(&value[1].monitor,pSVar1);
  this_00 = (this->fields).tabs;
  if (this_00 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,category,value,
               MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
              );
    value[2].klass = (Object__Class *)highestSlotIndex;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  puStack_4 = &stack0xffffff8c;
  puVar5 = &stack0xffffff8c;
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
  DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = 0;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  this_01 = (Dictionary_2_System_UInt32_System_Object_ *)
            AccessoryDataManager::AccessoryDataManager_GetAccessoriesCategoryMap((MethodInfo *)0x0);
  if (this_01 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffff98,this_01,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__GetEnumerator__
                       );
    uStack_8 = 0;
    DStack_6._dictionary = pDVar7->_dictionary;
    DStack_6._version = pDVar7->_version;
    DStack_6._index = pDVar7->_index;
    DStack_6._current.key = (pDVar7->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
    uStack_1 = 1;
    pDStack_9 = &DStack_6;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__MoveNext__
                        );
      if (bVar10 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&DStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__Dispose__
                   ,in_stack_11);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      ppIStack_12 = (Il2CppType **)DStack_6._current.key;
      pLStack_13 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   DStack_6._current.value;
      pIStack_14 = (Il2CppClass *)
                   LocalizedEnums::LocalizedEnums___3(DStack_6._current.key,(MethodInfo *)0x0);
      pIStack_15 = (Il2CppClass *)(this->fields).numberOfSlotsPrPage;
      value = (MethodInfo *)func_?();
      value->return_type = (Il2CppType *)0x1;
      in_stack_11 = value;
      pMStack_16 = value;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)value,ExceptionArgument__Enum_obj,in_stack_17);
      value->parameters = ppIStack_12;
      value->invoker_method = (InvokerMethod)pIStack_15;
      DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pIStack_14;
      value->name = (char *)pIStack_14;
      in_stack_17 = (MethodInfo *)&value->name;
      func_?();
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
      pIStack_15 = (Il2CppClass *)0x0;
      pIStack_14 = (Il2CppClass *)0x0;
      if (pLStack_13 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      break;
      while (pIStack_15 = pIStack_14, index < (pLStack_13->fields)._size) {
        RVar18 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLStack_13,index,
                           MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                          );
        if (RVar18 == (RegexCharClass_SingleRange)0x0) goto code_?;
        index = index + 1;
        pIStack_14 = (Il2CppClass *)((int)&pIStack_14->image + 1);
        if (*(char *)((int)RVar18 + 0x30) == '\0') {
          pIStack_14 = pIStack_15;
        }
      }
      if (pMStack_16 == (MethodInfo *)0x0) break;
      pMStack_16->klass = pIStack_14;
      this_00 = (this->fields).tabs;
      if (this_00 == (Dictionary_2_System_Int32_TabState_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Add
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,(int32_t)ppIStack_12,
                 (Object *)pMStack_16,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
                );
    }
  }
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
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
  (this->fields).displayShopItems = displayShopItems;
  AccessoryShopController_ClearShop(this,(MethodInfo *)0x0);
  if (displayShopItems == 0) {
    AccessoryShopController_DisplayOwnedItems(this,(MethodInfo *)0x0);
  }
  else {
    AccessoryShopController_DisplayAllItems(this,(MethodInfo *)0x0);
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
      (this->fields).selectedTab = (this->fields).startingCategory;
    }
    pDVar1 = (this->fields).tabs;
    if (pDVar1 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
      this_00 = (TabState *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__get_Item
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,
                           (this->fields).selectedTab,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                          );
      if (this_00 != (TabState *)0x0) {
        iVar3 = TabState::TabState_get_MaxPages(this_00,(MethodInfo *)0x0);
        iVar4 = 1;
        if (iVar3 < 1) {
          iVar4 = iVar3;
        }
        (this_00->fields).currentPage = iVar4;
        AccessoryShopController_UpdateContent(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
    pTVar3 = (this->fields).previewItemsRoot;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pTVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 == 0) {
code_?:
      ppTStack5 = &(this->fields).previewItemsRoot;
      (this->fields).previewItemsRoot = (Transform *)0x0;
      uStack6 = 0;
      func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this,0,(MethodInfo *)0x0);
      AccessoryShopController_SetAccessoriesToSelectable(this,0,(MethodInfo *)0x0);
      return;
    }
    pTVar3 = (this->fields).previewItemsRoot;
    if (pTVar3 != (Transform *)0x0) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar3,(MethodInfo *)0x0);
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
  this_00 = (SubscribableVariable_1_System_Int32Enum_ *)
            func_?(TypeInfo__AccessoryShopController___OpenAccessoryViewDelayed_d__21);
  SubscribableVariable`1[System::Int32Enum]::SubscribableVariable_1_System_Int32Enum___ctor
            (this_00,0,(MethodInfo *)0x0);
  if (this_00 != (SubscribableVariable_1_System_Int32Enum_ *)0x0) {
    this_00[1].klass = (SubscribableVariable_1_System_Int32Enum___Class *)this;
    func_?(this_00 + 1);
    return (IEnumerator *)this_00;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
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
  (this->fields).accessoryDataToShow = accessoryData;
  func_?(&(this->fields).accessoryDataToShow,accessoryData);
  (this->fields).pushOption = pushOption;
  pUVar1 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,
             MethodInfo__AccessoryShopController__ReadyCallbackAccessoryView__,(MethodInfo *)0x0);
  pUVar1 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pUVar1 == (UnityAction *)0x0) {
    TypeInfo__AccessoryDataManager->static_fields->readyCallback = (UnityAction *)0x0;
    pUVar2 = (UnityAction *)0x0;
code_?:
    pUStack3 = (UnityAction__Class *)pUVar2;
    func_?();
    AccessoryDataManager::AccessoryDataManager_SetReady((MethodInfo *)0x0);
    return;
  }
  pUVar2 = (UnityAction *)0x0;
  if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
    pUVar2 = pUVar1;
  }
  if (pUVar2 == (UnityAction *)0x0) {
    pUStack3 = TypeInfo__UnityEngine__Events__UnityAction;
    func_?();
    pUStack3 = extraout_EDX;
  }
  else {
    TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar2;
    pUVar2 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar2 = pUVar1;
    }
    pUStack3 = TypeInfo__UnityEngine__Events__UnityAction;
    if (pUVar2 != (UnityAction *)0x0) goto code_?;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
      if (dir == -1) {
        if ((this_01->fields).currentPage == 1) {
          iVar1 = TabState::TabState_get_MaxPages(this_01,(MethodInfo *)0x0);
          (this_01->fields).currentPage = iVar1;
          AccessoryShopController_UpdateContent(this,(MethodInfo *)0x0);
          return;
        }
      }
      else if (dir == 1) {
        iVar2 = (this_01->fields).currentPage;
        iVar1 = TabState::TabState_get_MaxPages(this_01,(MethodInfo *)0x0);
        if (iVar2 == iVar1) {
          (this_01->fields).currentPage = 1;
          AccessoryShopController_UpdateContent(this,(MethodInfo *)0x0);
          return;
        }
      }
      (this_01->fields).currentPage = (this_01->fields).currentPage + dir;
      AccessoryShopController_UpdateContent(this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  pOStack_1 = (Object__Class *)0x0;
  (this->fields).selectedTab = (this->fields).startingCategory;
  if ((this->fields).firstTimeSetup != 0) {
    AccessoryShopController_DisplayAllItems(this,(MethodInfo *)0x0);
    (this->fields).firstTimeSetup = 0;
  }
  pUVar2 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
  this_02 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_02,(Object *)this,MethodInfo__AccessoryShopController__ReadyCallback__,
             (MethodInfo *)0x0);
  pUVar2 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar2,(Delegate *)this_02,(MethodInfo *)0x0);
  if (pUVar2 == (UnityAction *)0x0) {
    TypeInfo__AccessoryDataManager->static_fields->readyCallback = (UnityAction *)0x0;
code_?:
    func_?();
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__AccessoryShopController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    callbackFunction = TypeInfo__AccessoryShopController____c->static_fields->__9__25_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)0x0) {
      if ((TypeInfo__AccessoryShopController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pAVar4 = TypeInfo__AccessoryShopController____c->static_fields->__9;
      callbackFunction = (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)pAVar4,
                 MethodInfo__AccessoryShopController____c___ReadyCallback_b__25_0_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__AccessoryShopController____c->static_fields->__9__25_0 = callbackFunction;
      func_?();
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar3,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
              );
    (this->fields).currentlyPushOption = (this->fields).pushOption;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this,1,(MethodInfo *)0x0);
    pIVar5 = (this->fields).inventoryControllerPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pIVar5 = (InventoryController *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pIVar5,
                        InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController_
                       );
    (this->fields).inventoryController = pIVar5;
    func_?();
    pIVar5 = (this->fields).inventoryController;
    if (pIVar5 == (InventoryController *)0x0) goto code_?;
    pUVar6 = (pIVar5->fields).OnPageTurned;
    pUVar7 = (UnityAction_1_System_Int32Enum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (pUVar7,(Object *)this,MethodInfo__AccessoryShopController__PageTurned_int_,
               (MethodInfo *)0x0);
    pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pUVar6,(Delegate *)pUVar7,(MethodInfo *)0x0);
    if (pDVar8 == (Delegate *)0x0) {
      (pIVar5->fields).OnPageTurned = (UnityAction_1_System_Int32_ *)0x0;
code_?:
      func_?();
      method_00 = (MethodInfo *)(this->fields).inventoryController;
      if (method_00 != (MethodInfo *)0x0) {
        pUVar6 = (UnityAction_1_System_Int32_ *)method_00->token;
        pUVar7 = (UnityAction_1_System_Int32Enum_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (pUVar7,(Object *)this,MethodInfo__AccessoryShopController__TabSelected_int_,
                   (MethodInfo *)0x0);
        pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pUVar6,(Delegate *)pUVar7,(MethodInfo *)0x0);
        if (pDVar8 == (Delegate *)0x0) {
          method_00->token = 0;
        }
        else {
          pUVar6 = (UnityAction_1_System_Int32_ *)func_?();
          if (pUVar6 == (UnityAction_1_System_Int32_ *)0x0) goto code_?;
          method_00->token = (uint32_t)pUVar6;
          iVar9 = func_?();
          if (iVar9 == 0) goto code_?;
        }
        func_?();
        pIVar5 = (this->fields).inventoryController;
        if (pIVar5 != (InventoryController *)0x0) {
          InventoryController::InventoryController_Initialize
                    (pIVar5,(this->fields).numberOfSlotsPrPage,(MethodInfo *)0x0);
          (this->fields).displayShopItems = 1;
          AccessoryShopController_ClearShop(this,(MethodInfo *)0x0);
          AccessoryShopController_DisplayAllItems(this,(MethodInfo *)0x0);
          this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).tabs;
          if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
            pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System
                      ::Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                                ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *
                                 )&stack0xffffffac,this_00,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__GetEnumerator__
                                );
            pOStack_1 = (Object__Class *)pDVar10->_dictionary;
            while( true ) {
              pOVar11 = (Object *)&UNK_?;
              bVar12 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                      Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *
                                 )&pOStack_1,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__MoveNext__
                                );
              if (bVar12 == 0) break;
              pIVar5 = (this->fields).inventoryController;
              if (((pOVar11 == (Object *)0x0) ||
                  (method_00 = (MethodInfo *)pOVar11[1].monitor,
                  pIVar5 == (InventoryController *)0x0)) ||
                 (pTVar13 = (pIVar5->fields).tabMenu, pTVar13 == (TabMenuBase *)0x0))
              goto code_?;
              (*(code *)(pTVar13->klass->vtable).__unknown.method)();
            }
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      ((Object *)&pOStack_1,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__Dispose__
                       ,method_00);
            root = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                   UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
            if ((TypeInfo__AccessoryShopController____c->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            callbackFunction_00 = TypeInfo__AccessoryShopController____c->static_fields->__9__25_1;
            if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
              if ((TypeInfo__AccessoryShopController____c->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pAVar4 = TypeInfo__AccessoryShopController____c->static_fields->__9;
              callbackFunction_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
              root = callbackFunction_00;
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,
                         (Object *)pAVar4,
                         MethodInfo__AccessoryShopController____c___ReadyCallback_b__25_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              TypeInfo__AccessoryShopController____c->static_fields->__9__25_1 = callbackFunction_00
              ;
              func_?();
            }
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      ((GameObject *)root,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
            puVar14 = &UNK_?;
            callbackFunction_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_01,
                       (Object *)this,
                       MethodInfo__AccessoryShopController___ReadyCallback_b__25_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar3,(BaseEventData *)0x0,callbackFunction_01,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            AccessoryShopController_SetAccessoriesToSelectable(this,0,(MethodInfo *)0x0);
            this_01 = (this->fields).tabs;
            if (this_01 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
              bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                                ((Dictionary_2_System_Int32_System_Single_ *)this_01,0xff,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                                );
              if ((bVar12 == 0) || ((this->fields).startingCategory == 0xfe)) {
                pIVar5 = (this->fields).inventoryController;
                LocalizedEnums::LocalizedEnums___3((this->fields).selectedTab,(MethodInfo *)0x0);
                if ((pIVar5 != (InventoryController *)0x0) &&
                   (pTVar15 = (pIVar5->fields).categoryHeaderText, pTVar15 != (Text *)0x0)) {
                  (*(code *)(pTVar15->klass->vtable).set_text.method)();
                  AccessoryShopController_UpdateContent(this,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = puVar14;
                  return;
                }
              }
              else {
                (this->fields).selectedTab = 0xff;
                bVar12 = (this->fields).displayShopItems;
                AccessoryShopController_DisplayPurchasableItems(this,1,(MethodInfo *)0x0);
                (this->fields).displayShopItems = bVar12;
                pIVar5 = (this->fields).inventoryController;
                LocalizedEnums::LocalizedEnums___3
                          (AccessoryCategoryClient__Enum_Featured,(MethodInfo *)0x0);
                if ((pIVar5 != (InventoryController *)0x0) &&
                   (pTVar15 = (pIVar5->fields).categoryHeaderText, pTVar15 != (Text *)0x0)) {
                  pTVar16 = pTVar15->klass;
                  pIVar17 = (pTVar16->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
                  (*(code *)(pTVar16->vtable).set_text.method)();
                  *unaff_FS_OFFSET = pIVar17;
                  return;
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    pUVar6 = (UnityAction_1_System_Int32_ *)func_?();
    if (pUVar6 == (UnityAction_1_System_Int32_ *)0x0) goto code_?;
    (pIVar5->fields).OnPageTurned = pUVar6;
    iVar9 = func_?();
    if (iVar9 != 0) goto code_?;
  }
  else {
    pUVar18 = (UnityAction *)0x0;
    if (pUVar2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar18 = pUVar2;
    }
    if (pUVar18 != (UnityAction *)0x0) {
      TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar18;
      pUVar18 = (UnityAction *)0x0;
      if (pUVar2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar18 = pUVar2;
      }
      if (pUVar18 != (UnityAction *)0x0) goto code_?;
    }
    func_?();
code_?:
    func_?();
    func_?();
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
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
    this_01 = (SubscribableVariable_1_System_Int32Enum_ *)func_?();
    SubscribableVariable`1[System::Int32Enum]::SubscribableVariable_1_System_Int32Enum___ctor
              (this_01,0,(MethodInfo *)0x0);
    if (this_01 != (SubscribableVariable_1_System_Int32Enum_ *)0x0) {
      pSStack2 = this_01 + 1;
      this_01[1].klass = (SubscribableVariable_1_System_Int32Enum___Class *)this;
      func_?();
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                ((MonoBehaviour *)this,(IEnumerator *)this_01,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pUVar3 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar3 = pUVar1;
    }
    if (pUVar3 != (UnityAction *)0x0) {
      TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar3;
      pUVar3 = (UnityAction *)0x0;
      if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar3 = pUVar1;
      }
      if (pUVar3 == (UnityAction *)0x0) goto code_?;
      goto code_?;
    }
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
        pMVar4 = pOVar3[2].monitor;
        AccessoryShopController_ClearShop(this,(MethodInfo *)0x0);
        if ((this->fields).displayShopItems == 0) {
          AccessoryShopController_DisplayOwnedItems(this,(MethodInfo *)0x0);
        }
        else {
          AccessoryShopController_DisplayAllItems(this,(MethodInfo *)0x0);
        }
        pDVar1 = (this->fields).tabs;
        if (pDVar1 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
          bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
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
            this_00 = (TabState *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,
                                 (this->fields).selectedTab,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                );
            if (this_00 != (TabState *)0x0) {
              iVar5 = TabState::TabState_get_MaxPages(this_00,(MethodInfo *)0x0);
              if ((int)pMVar4 < 1) {
                pMVar4 = (MonitorData *)0x1;
              }
              else if (iVar5 < (int)pMVar4) {
                (this_00->fields).currentPage = iVar5;
                AccessoryShopController_UpdateContent(this,(MethodInfo *)0x0);
                return;
              }
              (this_00->fields).currentPage = (int32_t)pMVar4;
              AccessoryShopController_UpdateContent(this,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  pIVar1 = (this->fields).inventoryController;
  LocalizedEnums::LocalizedEnums___3(AccessoryCategoryClient__Enum_Hats,(MethodInfo *)0x0);
  if ((pIVar1 != (InventoryController *)0x0) &&
     (pTVar2 = (pIVar1->fields).categoryHeaderText, pTVar2 != (Text *)0x0)) {
    pTVar3 = pTVar2->klass;
    pIStack4 = (pTVar3->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
    (*(code *)(pTVar3->vtable).set_text.method)();
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetAccessoriesToSelectable(Boolean) */

void Assembly-CSharp.dll::AccessoryShopController::
     AccessoryShopController_SetAccessoriesToSelectable
               (AccessoryShopController *this,bool selectable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_03 = (MethodInfo *)func_?();
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this_03,(MethodInfo *)0x0);
  if (this_03 != (MethodInfo *)0x0) {
    (((UxmlObjectListAttributeDescription_1_System_Object___Fields *)&this_03->invoker_method)->_).
    _defaultValue_k__BackingField = (List_1_System_Object_ *)0x0;
    func_?();
    MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar1 == MVGameMode__Enum_CharacterEditor) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
      in_stack_3 = this_03;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this_03,
                 MethodInfo__AccessoryShopController____c__DisplayClass32_0___SetAccessoriesToSelectable_b__0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      OStack_4.monitor = (MonitorData *)&UNK_?;
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar2,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                );
    }
    else {
      this_04 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if (this_04 == (MVLocalPlayer *)0x0) goto code_?;
      pMVar5 = MVLocalPlayer::MVLocalPlayer_get_Body(this_04,(MethodInfo *)0x0);
      (((UxmlObjectListAttributeDescription_1_System_Object___Fields *)&this_03->invoker_method)->_)
      ._defaultValue_k__BackingField = (List_1_System_Object_ *)pMVar5;
      func_?();
    }
    pLVar6 = (((UxmlObjectListAttributeDescription_1_System_Object___Fields *)
              &this_03->invoker_method)->_)._defaultValue_k__BackingField;
    if ((pLVar6 != (List_1_System_Object_ *)0x0) &&
       (this_02 = pLVar6[10].klass, this_02 != (List_1_System_Object___Class *)0x0)) {
      uVar7 = *unaff_FS_OFFSET;
      *unaff_FS_OFFSET = &stack0xfffffff0;
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Current__
                       );
        func_?(&
                        SelectionHelperAvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionHelperAvatarAccessory>_bool_____
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Key__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Value__
                       );
        func_?(&TypeInfo__UnityEngine__Object);
        cRam_? = '\x01';
      }
      OStack_4.klass = (Object__Class *)0x0;
      OStack_4.monitor = (MonitorData *)0x0;
      ((BodyAccessoriesController__Fields *)&(this_02->_0).name)->accessoryMoveOverride = selectable
      ;
      if (selectable == 0) {
        this_01 = (BodyData *)(this_02->_0).this_arg.data.typeHandle;
        if ((this_01 != (BodyData *)0x0) &&
           (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this_01,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0
           )) {
          p_Var6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                   GameObject_GetComponentsInChildren_3
                             (pGVar2,1,
                              SelectionHelperAvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionHelperAvatarAccessory>_bool_____
                             );
          uVar8 = 0;
          if (p_Var6 != (_Il2CppFullySharedGenericType__Array *)0x0) {
            pp_Var10 = p_Var6->vector;
            for (; (int)uVar8 < (int)p_Var6->max_length; uVar8 = uVar8 + 1) {
              if (p_Var6->max_length <= uVar8) {
                func_?();
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              if ((Component *)*pp_Var10 == (Component *)0x0) goto code_?;
              pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)*pp_Var10,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                        ((Object_1 *)pGVar2,(MethodInfo *)0x0);
              pp_Var10 = pp_Var10 + 1;
            }
            goto code_?;
          }
        }
      }
      else {
        this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this_02->_0).namespaze;
        if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
          pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                   Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                             ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                              &stack0xffffffb0,this_00,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                             );
          OStack_4.klass = (Object__Class *)pDVar10->_dictionary;
          OStack_4.monitor = (MonitorData *)pDVar10->_version;
          accessorySlot = (pDVar10->_current).key;
          uVar11 = *(undefined8 *)&(pDVar10->_current).value;
          while (bVar12 = mscorlib.dll::System::Collections::Generic::
                         Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                         Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                   ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                     *)&OStack_4,
                                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                                   ), bVar12 != 0) {
            BodyAccessoriesController::BodyAccessoriesController_MakeAccessorySelectable
                      ((BodyAccessoriesController *)this_02,(AvatarAccessory *)uVar11,accessorySlot,
                       (MethodInfo *)0x0);
          }
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    (&OStack_4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
                     ,in_stack_3);
code_?:
          *unaff_FS_OFFSET = uVar7;
          return;
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  pIVar2 = (this->fields).inventoryController;
  LocalizedEnums::LocalizedEnums___3(tabId,(MethodInfo *)0x0);
  if ((pIVar2 != (InventoryController *)0x0) &&
     (pTVar3 = (pIVar2->fields).categoryHeaderText, pTVar3 != (Text *)0x0)) {
    (*(code *)(pTVar3->klass->vtable).set_text.method)();
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar1 = (this->fields).previewItemsRoot;
    if (pTVar1 == (Transform *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pTVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
  }
  pGVar3 = (GameObject *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (pGVar3,StringLiteral_Preview_Root___AccessoryShopCont,(MethodInfo *)0x0);
  if (pGVar3 != (GameObject *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar3,(MethodInfo *)0x0);
    (this->fields).previewItemsRoot = pTVar1;
    func_?(&(this->fields).previewItemsRoot,pTVar1);
    pIVar4 = (this->fields).inventoryController;
    if ((pIVar4 != (InventoryController *)0x0) &&
       (pIVar5 = (pIVar4->fields).inventorySlots, pIVar5 != (InventorySlots *)0x0)) {
      InventorySlots::InventorySlots_Clear(pIVar5,(MethodInfo *)0x0);
      pDVar6 = (this->fields).tabs;
      if (pDVar6 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                          ((Dictionary_2_System_Int32_System_Single_ *)pDVar6,
                           (this->fields).selectedTab,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                          );
        if (bVar2 == 0) {
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
          iVar7 = (this->fields).selectedTab;
          pIVar4 = (this->fields).inventoryController;
          if (this_00 != (TabState *)0x0) {
            page = (this_00->fields).currentPage;
            iVar8 = TabState::TabState_get_MaxPages(this_00,(MethodInfo *)0x0);
            if ((pIVar4 != (InventoryController *)0x0) &&
               (pTVar9 = (pIVar4->fields).tabMenu, pTVar9 != (TabMenuBase *)0x0)) {
              (*(code *)(pTVar9->klass->vtable).__unknown_1.method)
                        (pTVar9,iVar7,page,iVar8,pTVar9->klass[1]._0.image);
              pIVar5 = (pIVar4->fields).inventorySlots;
              if (pIVar5 != (InventorySlots *)0x0) {
                InventorySlots::InventorySlots_UpdateAbsoluteSlotValues
                          (pIVar5,page,(pIVar4->fields).numberOfSlots,(MethodInfo *)0x0);
                MVar10 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
                if (MVar10 == MVGameMode__Enum_CharacterEditor) {
                  pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                  callbackFunction =
                       (ExecuteEvents_EventFunction_1_System_Object_ *)
                       func_?(
                                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                                      );
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                  Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
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
                            (pGVar3,(BaseEventData *)0x0,callbackFunction,
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
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
    iVar2 = (this_00->fields)._size;
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,iVar2,
                         MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                        );
      if (RVar3 == (RegexCharClass_SingleRange)0x0) goto code_?;
      if (*(char *)((int)RVar3 + 0x30) == '\0') {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__RemoveAt
                  ((List_1_System_Object_ *)this_00,iVar2,
                   MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__RemoveAt_int_
                  );
      }
    }
  }
  pDVar4 = (this->fields).tabs;
  if ((pDVar4 != (Dictionary_2_System_Int32_TabState_ *)0x0) &&
     (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar4,
                          (this->fields).selectedTab,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                         ), pOVar5 != (Object *)0x0)) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Int32);
      cRam_? = '\x01';
    }
    iVar2 = func_?(TypeInfo__System__Int32,2);
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 0xc) != 0) {
        *(int *)(iVar2 + 0x10) = (int)(pOVar5[2].monitor + -1) * (int)pOVar5[1].klass;
        if ((1 < *(uint *)(iVar2 + 0xc)) &&
           (*(int *)(iVar2 + 0x14) = (int)pOVar5[1].klass * (int)pOVar5[2].monitor,
           *(int *)(iVar2 + 0xc) != 0)) {
          index = *(AccessoryShopController **)(iVar2 + 0x10);
          this = index;
          if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
            while( true ) {
              if ((this_00->fields)._size <= (int)index) {
                return;
              }
              RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                (this_00,(int32_t)index,
                                 MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                                );
              pDVar4 = (pAVar1->fields).tabs;
              if ((pDVar4 == (Dictionary_2_System_Int32_TabState_ *)0x0) ||
                 (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                     ((Dictionary_2_System_Int32_System_Object_ *)pDVar4,
                                      (pAVar1->fields).selectedTab,
                                      MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                     ), pOVar5 == (Object *)0x0)) break;
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              iVar2 = func_?(TypeInfo__System__Int32,2);
              if (iVar2 == 0) break;
              if ((*(int *)(iVar2 + 0xc) == 0) ||
                 (*(int *)(iVar2 + 0x10) = (int)(pOVar5[2].monitor + -1) * (int)pOVar5[1].klass,
                 *(uint *)(iVar2 + 0xc) < 2)) goto code_?;
              iVar6 = (int)pOVar5[2].monitor * (int)pOVar5[1].klass;
              *(int *)(iVar2 + 0x14) = iVar6;
              if (*(uint *)(iVar2 + 0xc) < 2) goto code_?;
              if ((int)this < iVar6) {
                if (RVar3 == (RegexCharClass_SingleRange)0x0) break;
                bVar7 = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryData::
                        AccessoryData_GetShowInShop((AccessoryData *)RVar3,(MethodInfo *)0x0);
                if ((bVar7 != 0) || (*(char *)((int)RVar3 + 0x30) != '\0')) {
                  pAVar8 = (pAVar1->fields).accessoryInventoryItemPrefab;
                  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__UnityEngine__Object);
                  }
                  pAVar8 = (AccessoryInventoryViewItem *)
                           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                     ((Object *)pAVar8,
                                      AccessoryInventoryViewItem_MethodInfo__UnityEngine__Object__Instantiate<AccessoryInventoryViewItem>_AccessoryInventoryViewItem_
                                     );
                  this_01 = (pAVar1->fields).inventoryController;
                  if ((pAVar8 == (AccessoryInventoryViewItem *)0x0) ||
                     (item = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_gameObject((Component *)pAVar8,(MethodInfo *)0x0),
                     this_01 == (InventoryController *)0x0)) break;
                  InventoryController::InventoryController_AddObject
                            (this_01,item,(int)this % (pAVar1->fields).numberOfSlotsPrPage,
                             (MethodInfo *)0x0);
                  RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                          RegularExpressions::RegexCharClass+SingleRange]::
                          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                    (this_00,(int32_t)index,
                                     MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                                    );
                  AccessoryInventoryViewItem::AccessoryInventoryViewItem_Initialize
                            (pAVar8,(AccessoryDataClient *)RVar3,(pAVar1->fields).previewItemsRoot,
                             avatarBody,(pAVar1->fields).selectedTab == 0xfe,(MethodInfo *)0x0);
                  this = (AccessoryShopController *)((int)&this->klass + 1);
                }
              }
              index = (AccessoryShopController *)((int)&index->klass + 1);
            }
          }
          goto code_?;
        }
      }
code_?:
      func_?();
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  if (x == (IGetCurrentBody *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar2 = x->klass;
  uVar3 = 0;
  uVar4._0_1_ = (pIVar2->_1).rank;
  uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IGetCurrentBody) {
        ppMVar5 = &(&x->klass->vtable)[x->klass->interfaceOffsets[uVar3].offset].GetCurrentBody.
                   method;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  ppMVar5 = (MethodInfo **)func_?(x,TypeInfo__UnityEngine__EventSystems__IGetCurrentBody,0)
  ;
code_?:
  (*(code *)*ppMVar5)(x,ppMVar5[1]);
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
  (this->fields).tabs = (Dictionary_2_System_Int32_TabState_ *)this_00;
  func_?(&(this->fields).tabs,this_00);
  this_01 = (AccessoryAttacher *)func_?(TypeInfo__AccessoryAttacher);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this_01,(MethodInfo *)0x0);
  (this->fields).accessoryAttacher = this_01;
  func_?(&(this->fields).accessoryAttacher,this_01);
  (this->fields).attachingReady = 1;
  (this->fields).startingCategory = 1;
  (this->fields).displayShopItems = 1;
  (this->fields).firstTimeSetup = 1;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}



/* Void Initialize(InventoryItem, RawImage) */

void Assembly-CSharp.dll::InventoryItemCubeModelHandler::InventoryItemCubeModelHandler_Initialize
               (InventoryItemCubeModelHandler *this,InventoryItem *item,RawImage *image,
               MethodInfo *method)

{
  (this->fields)._.item = item;
  if ((item != (InventoryItem *)0x0) && (pTVar1 = (this->fields)._.title, pTVar1 != (Text *)0x0)) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,(item->fields).name,
               (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pIVar2 = (this->fields)._.item;
    if ((pIVar2 != (InventoryItem *)0x0) &&
       (pTVar1 = (this->fields)._.description, pTVar1 != (Text *)0x0)) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,(pIVar2->fields).description,
                 (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      this_00 = (this->fields)._.previewImage;
      if (image != (RawImage *)0x0) {
        value = (Texture *)
                (*(code *)(image->klass->vtable).get_mainTexture.method)
                          (image,(image->klass->vtable).OnCullingChanged.methodPtr);
        if (this_00 != (RawImage *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                    (this_00,value,(MethodInfo *)0x0);
          (this->fields).previewedItem = item;
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDeleteClicked() */

void Assembly-CSharp.dll::InventoryItemCubeModelHandler::
     InventoryItemCubeModelHandler_OnDeleteClicked
               (InventoryItemCubeModelHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__InventoryItemCubeModelHandler___OnDeleteClicked_m__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
             ,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
            );
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  return;
}


/* Void OnDeleteConfirmation(Boolean, ConfirmationPopup) */

void Assembly-CSharp.dll::InventoryItemCubeModelHandler::
     InventoryItemCubeModelHandler_OnDeleteConfirmation
               (InventoryItemCubeModelHandler *this,bool affirmative,ConfirmationPopup *popup,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (popup != (ConfirmationPopup *)0x0) {
    ConfirmationPopup::ConfirmationPopup_Pop(popup,(MethodInfo *)0x0);
    if (affirmative == 0) {
      return;
    }
    this_00 = (ScaleAnimationBase *)
              func_?(
                             TypeInfo__InventoryItemCubeModelHandler___OnDeleteConfirmation_c__AnonStorey0
                             );
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,in_stack_1);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    pIVar2 = (this->fields).previewedItem;
    if ((pIVar2 != (InventoryItem *)0x0) && (this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RemoveItemFromInventory
                (this_01,(pIVar2->fields).itemID,(MethodInfo *)0x0);
      pIVar3 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
      if ((pIVar3 != (IEditModeUI *)0x0) &&
         (this_02 = (PlayerInventoryRepository *)func_?(6,TypeInfo__IEditModeUI,pIVar3),
         this_02 != (PlayerInventoryRepository *)0x0)) {
        PlayerInventoryRepository::PlayerInventoryRepository_RemoveItem
                  (this_02,(this->fields).previewedItem,(MethodInfo *)0x0);
        pIVar2 = (this->fields).previewedItem;
        if ((pIVar2 != (InventoryItem *)0x0) && (this_00 != (ScaleAnimationBase *)0x0)) {
          value = (pIVar2->fields).name;
          (this_00->fields)._._._._.m_CachedPtr = value;
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          bVar4 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
          if (bVar4 != 0) {
            (this_00->fields)._._._._.m_CachedPtr = StringLiteral_item;
          }
          pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this,(MethodInfo *)0x0);
          if (TypeInfo__InventoryItemCubeModelHandler->static_fields->__f__am_cache1 ==
              (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
            pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar6,(Object *)0x0,
                       MethodInfo__InventoryItemCubeModelHandler___OnDeleteConfirmation_m__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                      );
            TypeInfo__InventoryItemCubeModelHandler->static_fields->__f__am_cache1 =
                 (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar6;
          }
          callbackFunction =
               (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
               TypeInfo__InventoryItemCubeModelHandler->static_fields->__f__am_cache1;
          if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy_63
                    (pGVar5,(BaseEventData *)0x0,callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this,(MethodInfo *)0x0);
          pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar6,(Object *)this_00,
                     MethodInfo__InventoryItemCubeModelHandler___OnDeleteConfirmation_c__AnonStorey0____m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                    );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy_63
                    (pGVar5,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar6,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                    );
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnSellClicked() */

void Assembly-CSharp.dll::InventoryItemCubeModelHandler::InventoryItemCubeModelHandler_OnSellClicked
               (InventoryItemCubeModelHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__InventoryItemCubeModelHandler->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__InventoryItemCubeModelHandler___OnSellClicked_m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
              );
    TypeInfo__InventoryItemCubeModelHandler->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__InventoryItemCubeModelHandler->static_fields->__f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  return;
}


/* Void OnSellUpdated() */

void Assembly-CSharp.dll::InventoryItemCubeModelHandler::InventoryItemCubeModelHandler_OnSellUpdated
               (InventoryItemCubeModelHandler *this,MethodInfo *method)

{
  pIVar1 = (this->fields).previewedItem;
  if ((pIVar1 != (InventoryItem *)0x0) && (pTVar2 = (this->fields)._.title, pTVar2 != (Text *)0x0))
  {
    (*(code *)(pTVar2->klass->vtable).set_text.method)
              (pTVar2,(pIVar1->fields).name,
               (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pIVar1 = (this->fields).previewedItem;
    if ((pIVar1 != (InventoryItem *)0x0) &&
       (pTVar2 = (this->fields)._.description, pTVar2 != (Text *)0x0)) {
      (*(code *)(pTVar2->klass->vtable).set_text.method)
                (pTVar2,(pIVar1->fields).description,
                 (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::InventoryItemCubeModelHandler::InventoryItemCubeModelHandler_Update
               (InventoryItemCubeModelHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  MVInputWrapper::MVInputWrapper_SuppressInGameInput((MethodInfo *)0x0);
  MVInputWrapper::MVInputWrapper_SuppressAllInput((MethodInfo *)0x0);
  return;
}


/* Void <OnDeleteClicked>m__1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::InventoryItemCubeModelHandler::
     InventoryItemCubeModelHandler__OnDeleteClicked_m__1
               (InventoryItemCubeModelHandler *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_This_will_remove_the_current_ite,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__InventoryItemCubeModelHandler__OnDeleteConfirmation_bool__ConfirmationPopup_
             ,
             MethodInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>__UnityAction_System__Object__void__
            );
  pSVar2 = TM::TM__(StringLiteral_Remove,(MethodInfo *)0x0);
  if (x == (IModalPopupCreator *)0x0) {
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar4 = x->klass;
  uVar5 = 0;
  uVar6._0_1_ = (pIVar4->_1).rank;
  uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
  if (uVar6 != 0) {
    do {
      if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
        ppMVar7 = &(&(x->klass->vtable).Create_2)[pIVar4->interfaceOffsets[uVar5].offset].method;
        goto code_?;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            &UNK_?;
  pSVar2 = (String *)x;
  ppMVar7 = (MethodInfo **)
            func_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
code_?:
  (*(code *)*ppMVar7)(x,pSVar1,this_00,pSVar2);
  return;
}


/* Void <OnDeleteConfirmation>m__2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::InventoryItemCubeModelHandler::
     InventoryItemCubeModelHandler__OnDeleteConfirmation_m__2
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnSellClicked>m__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::InventoryItemCubeModelHandler::
     InventoryItemCubeModelHandler__OnSellClicked_m__0
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_You_cannot_sell_your_model_throu,(MethodInfo *)0x0);
  pSVar2 = StringLiteral_Error;
  if (x == (IModalPopupCreator *)0x0) {
    func_?(0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar4 = 0;
  pIVar5 = x->klass;
  uVar6._0_1_ = (pIVar5->_1).rank;
  uVar6._1_1_ = (pIVar5->_1).minimumAlignment;
  if (uVar6 != 0) {
    do {
      if (pIVar5->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
        ppMVar7 = &(&(x->klass->vtable).CreateErrorNotificationPopup)
                   [pIVar5->interfaceOffsets[uVar4].offset].method;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  ppMVar7 = (MethodInfo **)
            func_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,1);
code_?:
  (*(code *)*ppMVar7)(x,pSVar1,pSVar2,ppMVar7[1]);
  return;
}


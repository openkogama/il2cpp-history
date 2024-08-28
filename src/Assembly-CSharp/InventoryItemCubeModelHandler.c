
/* Void Initialize(InventoryItem, RawImage) */

void Assembly-CSharp.dll::InventoryItemCubeModelHandler::InventoryItemCubeModelHandler_Initialize
               (InventoryItemCubeModelHandler *this,InventoryItem *item,RawImage *image,
               MethodInfo *method)

{
  ppIVar1 = &(this->fields)._.item;
  *ppIVar1 = item;
  func_?(ppIVar1,item);
  if ((*ppIVar1 != (InventoryItem *)0x0) && (pTVar2 = (this->fields)._.title, pTVar2 != (Text *)0x0)
     ) {
    (*(code *)(pTVar2->klass->vtable).set_text.method)
              (pTVar2,((*ppIVar1)->fields).name,
               (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    if ((*ppIVar1 != (InventoryItem *)0x0) &&
       (pTVar2 = (this->fields)._.description, pTVar2 != (Text *)0x0)) {
      (*(code *)(pTVar2->klass->vtable).set_text.method)
                (pTVar2,((*ppIVar1)->fields).description,
                 (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      this_00 = (this->fields)._.previewImage;
      if (image != (RawImage *)0x0) {
        value = (Texture *)
                (*(code *)(image->klass->vtable).get_mainTexture.method)
                          (image,(image->klass->vtable).OnCullingChanged.methodPtr);
        if (this_00 != (RawImage *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                    (this_00,value,(MethodInfo *)0x0);
          ppIVar1 = &(this->fields).previewedItem;
          *ppIVar1 = item;
          func_?(ppIVar1,item);
          return;
        }
      }
    }
  }
  func_?();
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
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__InventoryItemCubeModelHandler___OnDeleteClicked_b__5_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  callbackFunction =
       (ExecuteEvents_EventFunction_1_System_Object_ *)
       func_?(
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                      );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
             MethodInfo__InventoryItemCubeModelHandler___OnDeleteClicked_b__5_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,callbackFunction,
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
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__IEditModeUI);
    in_stack_1 =
         &
         MethodInfo__InventoryItemCubeModelHandler____c___OnDeleteConfirmation_b__7_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
    ;
    func_?();
    func_?(&
                    MethodInfo__InventoryItemCubeModelHandler____c__DisplayClass7_0___OnDeleteConfirmation_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__InventoryItemCubeModelHandler____c__DisplayClass7_0);
    func_?(&TypeInfo__InventoryItemCubeModelHandler____c);
    func_?(&StringLiteral_item);
    cRam_? = '\x01';
  }
  if (popup != (ConfirmationPopup *)0x0) {
    ConfirmationPopup::ConfirmationPopup_Pop(popup,(MethodInfo *)0x0);
    if (affirmative == 0) {
      return;
    }
    pOVar2 = (Object *)
             func_?(TypeInfo__InventoryItemCubeModelHandler____c__DisplayClass7_0);
    pOVar3 = pOVar2;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              (pOVar2,ExceptionArgument__Enum_obj,(MethodInfo *)in_stack_1);
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    pIVar4 = (this->fields).previewedItem;
    if ((pIVar4 != (InventoryItem *)0x0) && (this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RemoveItemFromInventory
                (this_00,(pIVar4->fields).itemID,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVGameControllerBase,pOVar3);
        cRam_? = '\x01';
      }
      pIVar5 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
      if ((pIVar5 != (IEditModeUI *)0x0) &&
         (this_01 = (PlayerShopInventoryRepository *)func_?(4,TypeInfo__IEditModeUI,pIVar5)
         , this_01 != (PlayerShopInventoryRepository *)0x0)) {
        UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
        PlayerShopInventoryRepository_RemoveInventoryItem
                  (this_01,(this->fields).previewedItem,(MethodInfo *)0x0);
        pIVar4 = (this->fields).previewedItem;
        if ((pIVar4 != (InventoryItem *)0x0) &&
           (pOVar6 = (Object__Class *)(pIVar4->fields).name, pOVar2 != (Object *)0x0)) {
          pOVar2 = pOVar2 + 1;
          pOVar2->klass = pOVar6;
          func_?(pOVar2,pOVar6);
          bVar7 = mscorlib.dll::System::String::String_IsNullOrEmpty
                            ((String *)pOVar2->klass,(MethodInfo *)0x0);
          if (bVar7 != 0) {
            pOVar2->klass = (Object__Class *)StringLiteral_item;
            func_?(pOVar2,StringLiteral_item);
          }
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
          if ((TypeInfo__InventoryItemCubeModelHandler____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          callbackFunction = TypeInfo__InventoryItemCubeModelHandler____c->static_fields->__9__7_0;
          if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
            if ((TypeInfo__InventoryItemCubeModelHandler____c->_1).cctor_finished_or_no_cctor == 0)
            {
              func_?();
            }
            object = TypeInfo__InventoryItemCubeModelHandler____c->static_fields->__9;
            callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                       (Object *)object,
                       MethodInfo__InventoryItemCubeModelHandler____c___OnDeleteConfirmation_b__7_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            TypeInfo__InventoryItemCubeModelHandler____c->static_fields->__9__7_0 = callbackFunction
            ;
            func_?(&TypeInfo__InventoryItemCubeModelHandler____c->static_fields->__9__7_0);
          }
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (root,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          root_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          callbackFunction_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,
                     (Object *)root,
                     MethodInfo__InventoryItemCubeModelHandler____c__DisplayClass7_0___OnDeleteConfirmation_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (root_00,(BaseEventData *)0x0,callbackFunction_00,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                    );
          return;
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnSellClicked() */

void Assembly-CSharp.dll::InventoryItemCubeModelHandler::InventoryItemCubeModelHandler_OnSellClicked
               (InventoryItemCubeModelHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__InventoryItemCubeModelHandler____c___OnSellClicked_b__3_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__InventoryItemCubeModelHandler____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__InventoryItemCubeModelHandler____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__InventoryItemCubeModelHandler____c);
  }
  callbackFunction = TypeInfo__InventoryItemCubeModelHandler____c->static_fields->__9__3_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    if ((TypeInfo__InventoryItemCubeModelHandler____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__InventoryItemCubeModelHandler____c);
    }
    object = TypeInfo__InventoryItemCubeModelHandler____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__InventoryItemCubeModelHandler____c___OnSellClicked_b__3_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__InventoryItemCubeModelHandler____c->static_fields->__9__3_0 = callbackFunction;
    func_?(&TypeInfo__InventoryItemCubeModelHandler____c->static_fields->__9__3_0,
                    callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
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
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::InventoryItemCubeModelHandler::InventoryItemCubeModelHandler_Update
               (InventoryItemCubeModelHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  MVInputWrapper::MVInputWrapper_SuppressInGameInput((MethodInfo *)0x0);
  MVInputWrapper::MVInputWrapper_SuppressAllInput((MethodInfo *)0x0);
  return;
}


/* Void <OnDeleteClicked>b__5_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::InventoryItemCubeModelHandler::
     InventoryItemCubeModelHandler__OnDeleteClicked_b__5_0
               (InventoryItemCubeModelHandler *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    func_?(&
                    MethodInfo__InventoryItemCubeModelHandler__OnDeleteConfirmation_bool__ConfirmationPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
    func_?(&StringLiteral_Remove);
    func_?(&StringLiteral_This_will_remove_the_current_ite);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_This_will_remove_the_current_ite,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this_00,(Object *)this,
             MethodInfo__InventoryItemCubeModelHandler__OnDeleteConfirmation_bool__ConfirmationPopup_
             ,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_Remove,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(3);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


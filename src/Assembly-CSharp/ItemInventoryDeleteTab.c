
/* Void Initialize(RawImage, InventoryItem) */

void Assembly-CSharp.dll::ItemInventoryDeleteTab::ItemInventoryDeleteTab_Initialize
               (ItemInventoryDeleteTab *this,RawImage *image,InventoryItem *item,MethodInfo *method)

{
  (this->fields).previewedItem = item;
  func_?(&(this->fields).previewedItem,item);
  if ((image != (RawImage *)0x0) && (this_00 = (this->fields).preview, this_00 != (RawImage *)0x0))
  {
    UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
              (this_00,(image->fields).m_Texture,(MethodInfo *)0x0);
    if ((item != (InventoryItem *)0x0) && (pTVar1 = (this->fields).itemName, pTVar1 != (Text *)0x0))
    {
      (*(pTVar1->klass->vtable).set_text.methodPtr)
                (pTVar1,(item->fields).name,(pTVar1->klass->vtable).set_text.method);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnConfirmation(Boolean, ConfirmationPopup) */

void Assembly-CSharp.dll::ItemInventoryDeleteTab::ItemInventoryDeleteTab_OnConfirmation
               (ItemInventoryDeleteTab *this,bool affirmative,ConfirmationPopup *popup,
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
    func_?(&
                    MethodInfo__ItemInventoryDeleteTab____c___OnConfirmation_b__5_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__ItemInventoryDeleteTab____c__DisplayClass5_0___OnConfirmation_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ItemInventoryDeleteTab____c__DisplayClass5_0);
    func_?(&TypeInfo__ItemInventoryDeleteTab____c);
    func_?(&StringLiteral_item);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if (popup != (ConfirmationPopup *)0x0) {
    ConfirmationPopup::ConfirmationPopup_Pop(popup,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)&UNK_?;
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__ItemInventoryDeleteTab____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ItemInventoryDeleteTab____c);
    }
    callbackFunction = TypeInfo__ItemInventoryDeleteTab____c->static_fields->__9__5_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__ItemInventoryDeleteTab____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__ItemInventoryDeleteTab____c);
      }
      object = TypeInfo__ItemInventoryDeleteTab____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__ItemInventoryDeleteTab____c___OnConfirmation_b__5_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__ItemInventoryDeleteTab____c->static_fields->__9__5_0 = callbackFunction;
      func_?(&TypeInfo__ItemInventoryDeleteTab____c->static_fields->__9__5_0,
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
    if (affirmative == 0) {
      return;
    }
    value = (Object *)func_?();
    if (value != (Object *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (value,ExceptionArgument__Enum_obj,method_00);
      this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      pIVar2 = (this->fields).previewedItem;
      if ((pIVar2 != (InventoryItem *)0x0) && (this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RemoveItemFromInventory
                  (this_00,(pIVar2->fields).itemID,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVGameControllerBase);
          cRam_? = '\x01';
        }
        pIVar3 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
        if ((pIVar3 != (IEditModeUI *)0x0) &&
           (this_01 = (PlayerShopInventoryRepository *)
                      func_?(4,TypeInfo__IEditModeUI,pIVar3),
           this_01 != (PlayerShopInventoryRepository *)0x0)) {
          UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
          PlayerShopInventoryRepository_RemoveInventoryItem
                    (this_01,(this->fields).previewedItem,(MethodInfo *)0x0);
          pTVar4 = (this->fields).itemName;
          if (pTVar4 != (Text *)0x0) {
            pOVar5 = (Object__Class *)
                     (*(pTVar4->klass->vtable).get_text.methodPtr)
                               (pTVar4,(pTVar4->klass->vtable).get_text.method);
            value[1].klass = pOVar5;
            func_?(value + 1,pOVar5);
            pTVar4 = (this->fields).itemName;
            if (pTVar4 != (Text *)0x0) {
              a = (String *)
                  (*(pTVar4->klass->vtable).get_text.methodPtr)
                            (pTVar4,(pTVar4->klass->vtable).get_text.method);
              bVar6 = mscorlib.dll::System::String::String_op_Equality
                                (a,::StringLiteral__,(MethodInfo *)0x0);
              if (bVar6 != 0) {
                value[1].klass = (Object__Class *)StringLiteral_item;
                func_?();
              }
              pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this,(MethodInfo *)0x0);
              callbackFunction_00 =
                   (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
              if (callbackFunction_00 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,value,
                           MethodInfo__ItemInventoryDeleteTab____c__DisplayClass5_0___OnConfirmation_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy
                          (pGVar1,(BaseEventData *)0x0,callbackFunction_00,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                          );
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnRemoveFromInventory() */

void Assembly-CSharp.dll::ItemInventoryDeleteTab::ItemInventoryDeleteTab_OnRemoveFromInventory
               (ItemInventoryDeleteTab *this,MethodInfo *method)

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
                    MethodInfo__ItemInventoryDeleteTab___OnRemoveFromInventory_b__4_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
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
  if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
               MethodInfo__ItemInventoryDeleteTab___OnRemoveFromInventory_b__4_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnRemoveFromInventory>b__4_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::ItemInventoryDeleteTab::
     ItemInventoryDeleteTab__OnRemoveFromInventory_b__4_0
               (ItemInventoryDeleteTab *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    func_?(&MethodInfo__ItemInventoryDeleteTab__OnConfirmation_bool__ConfirmationPopup_);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
    func_?(&StringLiteral_Remove);
    func_?(&StringLiteral_This_will_remove_the_current_ite);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_This_will_remove_the_current_ite,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_System_Boolean_System_Object_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
  if (this_00 != (UnityAction_2_System_Boolean_System_Object_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Boolean,System::Object]::
    UnityAction_2_System_Boolean_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__ItemInventoryDeleteTab__OnConfirmation_bool__ConfirmationPopup_,
               (MethodInfo *)0x0);
    TM::TM__(StringLiteral_Remove,(MethodInfo *)0x0);
    if (x != (IModalPopupCreator *)0x0) {
      func_?(3);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


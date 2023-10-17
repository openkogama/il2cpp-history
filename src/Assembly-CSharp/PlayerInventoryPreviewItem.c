
/* Void AddItemToWorldFromInventory() */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem::
     PlayerInventoryPreviewItem_AddItemToWorldFromInventory
               (PlayerInventoryPreviewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAddItemFromInventory>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAddItemFromInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAddItemFromInventory>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__PlayerInventoryPreviewItem___AddItemToWorldFromInventory_b__31_1_UnityEngine__EventSystems__IAddItemFromInventory__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__PlayerInventoryPreviewItem____c___AddItemToWorldFromInventory_b__31_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__PlayerInventoryPreviewItem____c);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__PlayerInventoryPreviewItem____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__PlayerInventoryPreviewItem____c);
  }
  callbackFunction = TypeInfo__PlayerInventoryPreviewItem____c->static_fields->__9__31_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__PlayerInventoryPreviewItem____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__PlayerInventoryPreviewItem____c);
    }
    object = TypeInfo__PlayerInventoryPreviewItem____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__PlayerInventoryPreviewItem____c___AddItemToWorldFromInventory_b__31_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__PlayerInventoryPreviewItem____c->static_fields->__9__31_0 = callbackFunction;
    func_?(&TypeInfo__PlayerInventoryPreviewItem____c->static_fields->__9__31_0,
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
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  callbackFunction_00 =
       (ExecuteEvents_EventFunction_1_System_Object_ *)
       func_?(
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAddItemFromInventory>
                      );
  if (callbackFunction_00 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,(Object *)this,
               MethodInfo__PlayerInventoryPreviewItem___AddItemToWorldFromInventory_b__31_1_UnityEngine__EventSystems__IAddItemFromInventory__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,callbackFunction_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAddItemFromInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAddItemFromInventory>_
              );
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* IEnumerator AddToWorldInSeconds(Int32) */

IEnumerator *
Assembly-CSharp.dll::PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_AddToWorldInSeconds
          (PlayerInventoryPreviewItem *this,int32_t seconds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PlayerInventoryPreviewItem___AddToWorldInSeconds_d__33);
    cRam_? = '\x01';
  }
  value = (Object *)
          func_?(TypeInfo__PlayerInventoryPreviewItem___AddToWorldInSeconds_d__33);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    value[2].monitor = (MonitorData *)this;
    func_?(&value[2].monitor,this);
    value[2].klass = (Object__Class *)seconds;
    return (IEnumerator *)value;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void AdditionalItemSettingsPressed() */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem::
     PlayerInventoryPreviewItem_AdditionalItemSettingsPressed
               (PlayerInventoryPreviewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__IEditModeUI);
    func_?(&
                    InventoryItemCubeModelHandler_MethodInfo__UnityEngine__Object__Instantiate<InventoryItemCubeModelHandler>_InventoryItemCubeModelHandler_
                   );
    func_?(&
                    InventoryItemPreview_MethodInfo__UnityEngine__Object__Instantiate<InventoryItemPreview>_InventoryItemPreview_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__PlayerInventoryPreviewItem____c___AdditionalItemSettingsPressed_b__28_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__PlayerInventoryPreviewItem____c__DisplayClass28_0___AdditionalItemSettingsPressed_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__PlayerInventoryPreviewItem____c__DisplayClass28_0);
    func_?(&TypeInfo__PlayerInventoryPreviewItem____c);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__PlayerInventoryPreviewItem____c__DisplayClass28_0);
  if (value == (Object *)0x0) goto code_?;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            (value,ExceptionArgument__Enum_obj,unaff_EDI);
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 1,0);
  pIVar1 = (this->fields).item;
  if (pIVar1 == (InventoryItem *)0x0) goto code_?;
  if (((pIVar1->fields).resellable != 0) && ((pIVar1->fields).isDefaultInvItem == 0)) {
    if ((pIVar1->fields).itemCategoryID != 1) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      pIVar2 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
      if (pIVar2 == (IEditModeUI *)0x0) goto code_?;
      this_00 = (PlayerShopInventoryRepository *)func_?(4,TypeInfo__IEditModeUI,pIVar2);
      if (this_00 == (PlayerShopInventoryRepository *)0x0) goto code_?;
      iVar3 = UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
              PlayerShopInventoryRepository_CountInventoryItemsWithOriginalID
                        (this_00,(this->fields).item,(MethodInfo *)0x0);
      if (iVar3 < 2) goto code_?;
    }
    original = (this->fields).itemPreviewerCubeModelPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar4 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        InventoryItemCubeModelHandler_MethodInfo__UnityEngine__Object__Instantiate<InventoryItemCubeModelHandler>_InventoryItemCubeModelHandler_
                       );
    value[1].klass = pOVar4;
    func_?(value + 1,pOVar4);
  }
code_?:
  pOVar4 = value[1].klass;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pOVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar5 != 0) {
    original_00 = (this->fields).itemPreviewerPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar4 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original_00,
                        InventoryItemPreview_MethodInfo__UnityEngine__Object__Instantiate<InventoryItemPreview>_InventoryItemPreview_
                       );
    value[1].klass = pOVar4;
    func_?(value + 1,pOVar4);
  }
  pOVar4 = value[1].klass;
  if (pOVar4 != (Object__Class *)0x0) {
    pIVar6 = (pOVar4->_0).image;
    (*(code *)pIVar6[5].name)
              (pOVar4,(this->fields).item,(this->fields).previewImage,pIVar6[5].nameNoExt);
    pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__PlayerInventoryPreviewItem____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__PlayerInventoryPreviewItem____c);
    }
    callbackFunction = TypeInfo__PlayerInventoryPreviewItem____c->static_fields->__9__28_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__PlayerInventoryPreviewItem____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__PlayerInventoryPreviewItem____c);
      }
      object = TypeInfo__PlayerInventoryPreviewItem____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__PlayerInventoryPreviewItem____c___AdditionalItemSettingsPressed_b__28_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__PlayerInventoryPreviewItem____c->static_fields->__9__28_0 = callbackFunction;
      func_?(&TypeInfo__PlayerInventoryPreviewItem____c->static_fields->__9__28_0,
                      callbackFunction);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar7,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    callbackFunction_00 =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    if (callbackFunction_00 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,value,
                 MethodInfo__PlayerInventoryPreviewItem____c__DisplayClass28_0___AdditionalItemSettingsPressed_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar7,(BaseEventData *)0x0,callbackFunction_00,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* IEnumerator DownloadImage(String) */

IEnumerator *
Assembly-CSharp.dll::PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_DownloadImage
          (PlayerInventoryPreviewItem *this,String *url,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PlayerInventoryPreviewItem___DownloadImage_d__22);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__PlayerInventoryPreviewItem___DownloadImage_d__22);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    value[2].monitor = (MonitorData *)this;
    func_?(&value[2].monitor,this);
    value[2].klass = (Object__Class *)url;
    func_?(value + 2,url);
    return (IEnumerator *)value;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void Initialize(Transform, InventoryItem, Boolean, Boolean) */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_Initialize
               (PlayerInventoryPreviewItem *this,Transform *rootTransform,InventoryItem *invItem,
               bool draggable,bool done,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral___default_);
    func_?(&StringLiteral___gold_);
    func_?(&StringLiteral___purchased_);
    func_?(&StringLiteral_slot_);
    cRam_? = '\x01';
  }
  (this->fields).item = invItem;
  func_?(&(this->fields).item,invItem);
  if ((invItem == (InventoryItem *)0x0) ||
     (this_00 = (this->fields).toolTip, this_00 == (ToolTip *)0x0)) {
code_?:
    func_?();
code_?:
    uVar1 = func_?();
    func_?(uVar1);
code_?:
    uVar1 = func_?();
    func_?(uVar1);
code_?:
    uVar1 = func_?();
    func_?(uVar1);
code_?:
    uVar1 = func_?();
    func_?(uVar1);
code_?:
    uVar1 = func_?();
    func_?(uVar1);
code_?:
    uVar1 = func_?();
    func_?(uVar1);
code_?:
    uVar1 = func_?();
    func_?(uVar1);
  }
  else {
    ToolTip::ToolTip_SetText(this_00,(invItem->fields).name,(MethodInfo *)0x0);
    this_01 = (this->fields).dragHandler;
    if (this_01 == (InventoryItemDragHandler *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_01,draggable,(MethodInfo *)0x0);
    pTVar2 = (this->fields).text;
    values = (String__Array *)func_?(TypeInfo__System__String,8);
    if (values == (String__Array *)0x0) goto code_?;
    if ((StringLiteral_slot_ != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral_slot_,(values->klass->_0).element_class), iVar3 == 0))
    goto code_?;
    if (values->max_length == 0) goto code_?;
    values->vector[0] = StringLiteral_slot_;
    func_?(values->vector);
    pIVar4 = (this->fields).item;
    if (pIVar4 == (InventoryItem *)0x0) goto code_?;
    pSVar5 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&(pIVar4->fields).slotPosition,(MethodInfo *)0x0);
    if ((pSVar5 != (String *)0x0) && (iVar3 = func_?(pSVar5), iVar3 == 0))
    goto code_?;
    if (values->max_length < 2) goto code_?;
    values->vector[1] = pSVar5;
    func_?(values->vector + 1);
    if ((StringLiteral___default_ != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral___default_), iVar3 == 0)) goto code_?;
    if (values->max_length < 3) goto code_?;
    pMVar6 = (MethodInfo *)(values->vector + 2);
    values->vector[2] = StringLiteral___default_;
    func_?();
    pIVar4 = (this->fields).item;
    if (pIVar4 == (InventoryItem *)0x0) goto code_?;
    pSVar5 = mscorlib.dll::System::Boolean::Boolean_ToString_1
                       ((Boolean *)&(pIVar4->fields).isDefaultInvItem,(IFormatProvider *)0x0,pMVar6
                       );
    if ((pSVar5 != (String *)0x0) && (iVar3 = func_?(pSVar5), iVar3 == 0))
    goto code_?;
    if (values->max_length < 4) goto code_?;
    values->vector[3] = pSVar5;
    func_?(values->vector + 3);
    if ((StringLiteral___purchased_ != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral___purchased_), iVar3 == 0)) goto code_?;
    if (values->max_length < 5) goto code_?;
    pMVar6 = (MethodInfo *)(values->vector + 4);
    values->vector[4] = StringLiteral___purchased_;
    func_?();
    pIVar4 = (this->fields).item;
    if (pIVar4 == (InventoryItem *)0x0) goto code_?;
    pSVar5 = mscorlib.dll::System::Boolean::Boolean_ToString_1
                       ((Boolean *)&(pIVar4->fields).purchased,(IFormatProvider *)0x0,pMVar6);
    if ((pSVar5 != (String *)0x0) && (iVar3 = func_?(pSVar5), iVar3 == 0))
    goto code_?;
    if (values->max_length < 6) goto code_?;
    values->vector[5] = pSVar5;
    func_?(values->vector + 5);
    if ((StringLiteral___gold_ != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral___gold_), iVar3 == 0)) goto code_?;
    if (values->max_length < 7) goto code_?;
    values->vector[6] = StringLiteral___gold_;
    func_?(values->vector + 6);
    pIVar4 = (this->fields).item;
    if (pIVar4 == (InventoryItem *)0x0) goto code_?;
    pSVar5 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&(pIVar4->fields).priceGold,(MethodInfo *)0x0);
    if ((pSVar5 == (String *)0x0) || (iVar3 = func_?(pSVar5), iVar3 != 0)) {
      if (values->max_length < 8) goto code_?;
      values->vector[7] = pSVar5;
      pMVar6 = (MethodInfo *)(values->vector + 7);
      func_?();
      pSVar5 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
      if (pTVar2 != (Text *)0x0) {
        (*(pTVar2->klass->vtable).set_text.methodPtr)
                  (pTVar2,pSVar5,(pTVar2->klass->vtable).set_text.method);
        pIVar4 = (this->fields).item;
        if (pIVar4 != (InventoryItem *)0x0) {
          if (((pIVar4->fields).purchased == 0) && ((pIVar4->fields).isDefaultInvItem == 0)) {
            bVar7 = 0 < (pIVar4->fields).priceGold;
          }
          else {
            bVar7 = false;
          }
          (this->fields).requiresUnlocking = bVar7;
          pGVar8 = (this->fields).padLock;
          if (pGVar8 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar8,(this->fields).requiresUnlocking,(MethodInfo *)0x0);
            pIVar9 = (this->fields).metaData;
            if (pIVar9 != (InventoryItemMetaData *)0x0) {
              (pIVar9->fields).slotIndex = (invItem->fields).slotPosition;
              if (done == 0) {
code_?:
                (this->fields).initialized = done;
                return;
              }
              if ((invItem->fields).imagePath == (String *)0x0) {
                this_02 = (this->fields).previewImage;
                if (this_02 != (RawImage *)0x0) {
                  UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                            (this_02,(this->fields).noImageTexture,(MethodInfo *)0x0);
                  (this->fields).initialized = done;
                  return;
                }
              }
              else {
                this_03 = (this->fields).loadingWheel;
                if ((this_03 != (Image *)0x0) &&
                   (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_gameObject((Component *)this_03,(MethodInfo *)0x0),
                   pGVar8 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar8,1,(MethodInfo *)0x0);
                  str0 = MVGameControllerBase::MVGameControllerBase_get_StaticAssetsConfig
                                   ((MethodInfo *)0x0);
                  pOVar10 = (Object__Class *)
                           mscorlib.dll::System::String::String_Concat_3
                                     (str0.url,(invItem->fields).imagePath,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  done = (bool)TypeInfo__PlayerInventoryPreviewItem___DownloadImage_d__22;
                  value = (Object *)func_?();
                  if (value != (Object *)0x0) {
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                              (value,ExceptionArgument__Enum_obj,pMVar6);
                    value[1].klass = (Object__Class *)0x0;
                    value[2].monitor = (MonitorData *)this;
                    func_?(&value[2].monitor,this);
                    value[2].klass = pOVar10;
                    func_?(value + 2,pOVar10);
                    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                    MonoBehaviour_StartCoroutine_Auto
                              ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
  }
  uVar1 = func_?();
  func_?(uVar1);
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Initialize(Transform, InventoryItem, MVWorldObjectClient, Boolean) */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_Initialize_1
               (PlayerInventoryPreviewItem *this,Transform *rootTransform,InventoryItem *invItem,
               MVWorldObjectClient *woPreviewObject,bool draggable,MethodInfo *method)

{
  PlayerInventoryPreviewItem_Initialize(this,rootTransform,invItem,draggable,0,(MethodInfo *)0x0);
  PlayerInventoryPreviewItem_LoadItemPreviewer
            (this,rootTransform,invItem,woPreviewObject,(MethodInfo *)0x0);
  return;
}


/* Void LoadItemPreviewer(Transform, InventoryItem, MVWorldObjectClient) */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_LoadItemPreviewer
               (PlayerInventoryPreviewItem *this,Transform *rootTransform,InventoryItem *item,
               MVWorldObjectClient *woPreviewObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__ContainsKey_MVWorldObjectDocumentationType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                   );
    func_?(&TypeInfo__InventoryItem);
    func_?(&
                    InventoryItemPreviewer_MethodInfo__UnityEngine__Object__Instantiate<InventoryItemPreviewer>_InventoryItemPreviewer_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (woPreviewObject != (MVWorldObjectClient *)0x0) {
    pOVar1 = (Object *)
             (*(woPreviewObject->klass->vtable).get_DocumentationType.methodPtr)
                       (woPreviewObject,
                        (woPreviewObject->klass->vtable).get_DocumentationType.method);
    if (item != (InventoryItem *)0x0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__ContainsKey_MVWorldObjectDocumentationType_
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                       );
        func_?(&TypeInfo__InventoryItem);
        cRam_? = '\x01';
      }
      if ((TypeInfo__InventoryItem->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__InventoryItem);
      }
      pDVar2 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
               TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
      if (pDVar2 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
        bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          (pDVar2,pOVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__ContainsKey_MVWorldObjectDocumentationType_
                          );
        if (bVar3 != 0) {
          if ((TypeInfo__InventoryItem->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__InventoryItem);
          }
          pDVar4 = TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
          if (pDVar4 == (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_
                         *)0x0) goto code_?;
          pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar4,
                              (Int32Enum__Enum)pOVar1,
                              MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                             );
          if (pOVar1 == (Object *)0x0) goto code_?;
          pOVar5 = pOVar1[1].klass;
          (item->fields).name = (String *)pOVar5;
          func_?(&(item->fields).name,pOVar5);
          if (cRam_? == '\0') {
            func_?(&StringLiteral_u000Au000A);
            cRam_? = '\x01';
          }
          pSVar6 = mscorlib.dll::System::String::String_Concat_4
                             ((String *)pOVar1[1].monitor,StringLiteral_u000Au000A,
                              (String *)pOVar1[2].klass,(MethodInfo *)0x0);
          (item->fields).description = pSVar6;
          func_?(&(item->fields).description,pSVar6);
        }
        this_00 = (this->fields).toolTip;
        if (this_00 != (ToolTip *)0x0) {
          ToolTip::ToolTip_SetText(this_00,(item->fields).name,(MethodInfo *)0x0);
          iVar7 = (*(woPreviewObject->klass->vtable).get_DocumentationType.methodPtr)
                            (woPreviewObject,
                             (woPreviewObject->klass->vtable).get_DocumentationType.method);
          (this->fields).DocumentationType = iVar7;
          pIVar8 = (this->fields).objectPreviewerPrefab;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          pIVar8 = (InventoryItemPreviewer *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)pIVar8,
                               InventoryItemPreviewer_MethodInfo__UnityEngine__Object__Instantiate<InventoryItemPreviewer>_InventoryItemPreviewer_
                              );
          (this->fields).objectPreviewer = pIVar8;
          func_?(&(this->fields).objectPreviewer,pIVar8);
          fVar9 = (float)(item->fields).slotPosition * _UNK_?;
          if ((TypeInfo__InventoryItem->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__InventoryItem);
          }
          pDVar2 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                   TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
          pMVar10 = (woPreviewObject->klass->vtable).get_DocumentationType.method;
          pOVar1 = (Object *)(*(woPreviewObject->klass->vtable).get_DocumentationType.methodPtr)();
          if (pDVar2 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
            bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,GUILoginHandler+PlanetData]::
                    Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                              (pDVar2,pOVar1,
                               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__ContainsKey_MVWorldObjectDocumentationType_
                              );
            if (bVar3 == 0) {
              pMVar11 = (MonitorData *)0x0;
              uVar12 = 0;
            }
            else {
              if ((TypeInfo__InventoryItem->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__InventoryItem);
              }
              pDVar4 = TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
              key = (*(woPreviewObject->klass->vtable).get_DocumentationType.methodPtr)
                              (woPreviewObject,
                               (woPreviewObject->klass->vtable).get_DocumentationType.method);
              if (pDVar4 == (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_
                             *)0x0) goto code_?;
              pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32Enum,System::Object]::
                       Dictionary_2_System_Int32Enum_System_Object__get_Item
                                 ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar4,key,
                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                                 );
              if (pOVar1 == (Object *)0x0) goto code_?;
              uVar12 = *(undefined8 *)&pOVar1[2].monitor;
              pMVar11 = pOVar1[3].monitor;
            }
            pIVar8 = (this->fields).objectPreviewer;
            if (pIVar8 != (InventoryItemPreviewer *)0x0) {
              cameraOffset.z = (float)pMVar11;
              cameraOffset.x = (float)(int)uVar12;
              cameraOffset.y = (float)(int)((ulonglong)uVar12 >> 0x20);
              previewPosition.y = (float)pMVar10;
              previewPosition.x = (float)woPreviewObject;
              previewPosition.z = fVar9;
              InventoryItemPreviewer::InventoryItemPreviewer_Initialize
                        (pIVar8,(this->fields).previewWidth,(this->fields).previewHeight,
                         CameraClearFlags__Enum_Color,(woPreviewObject->fields).previewLayerMask,
                         cameraOffset,rootTransform,previewPosition,(item->fields).name,
                         woPreviewObject,(woPreviewObject->fields).gameObject,(MethodInfo *)0x0);
              pIVar8 = (this->fields).objectPreviewer;
              if ((pIVar8 != (InventoryItemPreviewer *)0x0) &&
                 (this_01 = (this->fields).previewImage, this_01 != (RawImage *)0x0)) {
                UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                          (this_01,(Texture *)(pIVar8->fields).previewTexture,(MethodInfo *)0x0);
                (this->fields).initialized = 1;
                (this->fields).hasItemPreviewer = 1;
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
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_OnDestroy
               (PlayerInventoryPreviewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    func_?(&TypeInfo__IEditModeUI);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__PlayerInventoryPreviewItem__OnInventoryItemFailedToLoad__);
    func_?(&
                    MethodInfo__PlayerInventoryPreviewItem__OnInventoryItemLoaded_System__Object__ReceivedItemFromQueryEventArgs_
                   );
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  this_01 = (UnityAction_2_System_Object_System_Object_ *)
            func_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
  if (this_01 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__PlayerInventoryPreviewItem__OnInventoryItemLoaded_System__Object__ReceivedItemFromQueryEventArgs_
               ,(MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_remove_ReceivedItemFromQuery
                (this_00,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_01,(MethodInfo *)0x0
                );
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
          (IEditModeUI *)0x0) {
        iVar1 = func_?();
        if (iVar1 != 0) {
          this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?();
          if (this_02 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
            pDVar2 = (Delegate *)&UNK_?;
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (this_02,(Object *)this,
                       MethodInfo__PlayerInventoryPreviewItem__OnInventoryItemFailedToLoad__,
                       (MethodInfo *)0x0);
            pDStack3 =
                 mscorlib.dll::System::Delegate::Delegate_Remove
                           (pDVar2,(Delegate *)this_02,(MethodInfo *)0x0);
            if (pDStack3 == (Delegate *)0x0) {
              *(undefined4 *)(iVar1 + 0x10) = 0;
code_?:
              pDStack3 = (Delegate *)(iVar1 + 0x10);
              func_?();
              obj = (this->fields).objectPreviewer;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                        ((Object_1 *)obj,(MethodInfo *)0x0);
              return;
            }
            pDVar2 = (Delegate *)0x0;
            if ((Action__Class *)pDStack3->klass == TypeInfo__System__Action) {
              pDVar2 = pDStack3;
            }
            if (pDVar2 != (Delegate *)0x0) {
              *(Delegate **)(iVar1 + 0x10) = pDVar2;
              pDVar2 = (Delegate *)0x0;
              if ((Action__Class *)pDStack3->klass == TypeInfo__System__Action) {
                pDVar2 = pDStack3;
              }
              if (pDVar2 != (Delegate *)0x0) goto code_?;
            }
            goto code_?;
          }
        }
      }
    }
  }
  pDStack3 = (Delegate *)func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnInventoryItemFailedToLoad() */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem::
     PlayerInventoryPreviewItem_OnInventoryItemFailedToLoad
               (PlayerInventoryPreviewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__IEditModeUI);
    func_?(&MethodInfo__PlayerInventoryPreviewItem__OnInventoryItemFailedToLoad__);
    func_?(&
                    MethodInfo__PlayerInventoryPreviewItem__OnInventoryItemLoaded_System__Object__ReceivedItemFromQueryEventArgs_
                   );
    func_?(&
                    MethodInfo__PlayerInventoryPreviewItem____c___OnInventoryItemFailedToLoad_b__30_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__PlayerInventoryPreviewItem____c);
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  this_02 = (UnityAction_2_System_Object_System_Object_ *)
            func_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
  if (this_02 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__PlayerInventoryPreviewItem__OnInventoryItemLoaded_System__Object__ReceivedItemFromQueryEventArgs_
               ,(MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_remove_ReceivedItemFromQuery
                (this_01,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_02,(MethodInfo *)0x0
                );
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
          (IEditModeUI *)0x0) {
        iVar1 = func_?();
        if (iVar1 != 0) {
          this_03 = (NavMesh_OnNavMeshPreUpdate *)func_?();
          if (this_03 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
            pDVar2 = (Delegate *)&UNK_?;
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (this_03,(Object *)this,
                       MethodInfo__PlayerInventoryPreviewItem__OnInventoryItemFailedToLoad__,
                       (MethodInfo *)0x0);
            pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                               (pDVar2,(Delegate *)this_03,(MethodInfo *)0x0);
            if (pDVar2 == (Delegate *)0x0) {
              *(undefined4 *)(iVar1 + 0x10) = 0;
            }
            else {
              pDVar3 = (Delegate *)0x0;
              if ((Action__Class *)pDVar2->klass == TypeInfo__System__Action) {
                pDVar3 = pDVar2;
              }
              if (pDVar3 == (Delegate *)0x0) goto code_?;
              *(Delegate **)(iVar1 + 0x10) = pDVar3;
              pDVar3 = (Delegate *)0x0;
              if ((Action__Class *)pDVar2->klass == TypeInfo__System__Action) {
                pDVar3 = pDVar2;
              }
              if (pDVar3 == (Delegate *)0x0) goto code_?;
            }
            func_?();
            this_00 = (this->fields).loadingWheel;
            if (this_00 != (Image *)0x0) {
              pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this_00,(MethodInfo *)0x0);
              if (pGVar4 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar4,0,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
                    (IEditModeUI *)0x0) {
                  iVar1 = func_?();
                  if (iVar1 != 0) {
                    *(undefined4 *)(iVar1 + 0x18) = 0xff7fffff;
                    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                    if ((TypeInfo__PlayerInventoryPreviewItem____c->_1).cctor_finished_or_no_cctor
                        == 0) {
                      func_?();
                    }
                    callbackFunction =
                         TypeInfo__PlayerInventoryPreviewItem____c->static_fields->__9__30_0;
                    if (callbackFunction != (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0
                       ) {
code_?:
                      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                      ExecuteEvents_ExecuteHierarchy
                                (pGVar4,(BaseEventData *)0x0,
                                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                                );
                      return;
                    }
                    if ((TypeInfo__PlayerInventoryPreviewItem____c->_1).cctor_finished_or_no_cctor
                        == 0) {
                      func_?();
                    }
                    object = TypeInfo__PlayerInventoryPreviewItem____c->static_fields->__9;
                    callbackFunction =
                         (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?();
                    if (callbackFunction != (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0
                       ) {
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                      Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                                 (Object *)object,
                                 MethodInfo__PlayerInventoryPreviewItem____c___OnInventoryItemFailedToLoad_b__30_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                                 ,(MethodInfo *)0x0);
                      TypeInfo__PlayerInventoryPreviewItem____c->static_fields->__9__30_0 =
                           callbackFunction;
                      func_?();
                      goto code_?;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnInventoryItemLoaded(Object, ReceivedItemFromQueryEventArgs) */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem::
     PlayerInventoryPreviewItem_OnInventoryItemLoaded
               (PlayerInventoryPreviewItem *this,Object *sender,ReceivedItemFromQueryEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                   );
    func_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__IEditModeUI);
    func_?(&MethodInfo__PlayerInventoryPreviewItem__OnInventoryItemFailedToLoad__);
    func_?(&
                    MethodInfo__PlayerInventoryPreviewItem__OnInventoryItemLoaded_System__Object__ReceivedItemFromQueryEventArgs_
                   );
    func_?(&
                    MethodInfo__PlayerInventoryPreviewItem___OnInventoryItemLoaded_b__32_0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                   );
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  this_02 = (UnityAction_2_System_Object_System_Object_ *)
            func_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
  if (this_02 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__PlayerInventoryPreviewItem__OnInventoryItemLoaded_System__Object__ReceivedItemFromQueryEventArgs_
               ,(MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_remove_ReceivedItemFromQuery
                (this_01,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_02,(MethodInfo *)0x0
                );
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
          (IEditModeUI *)0x0) {
        iVar1 = func_?();
        if (iVar1 != 0) {
          this_03 = (NavMesh_OnNavMeshPreUpdate *)func_?();
          if (this_03 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
            pDVar2 = (Delegate *)&UNK_?;
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (this_03,(Object *)this,
                       MethodInfo__PlayerInventoryPreviewItem__OnInventoryItemFailedToLoad__,
                       (MethodInfo *)0x0);
            pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                               (pDVar2,(Delegate *)this_03,(MethodInfo *)0x0);
            if (pDVar2 == (Delegate *)0x0) {
              *(undefined4 *)(iVar1 + 0x10) = 0;
            }
            else {
              pDVar3 = (Delegate *)0x0;
              if ((Action__Class *)pDVar2->klass == TypeInfo__System__Action) {
                pDVar3 = pDVar2;
              }
              if (pDVar3 == (Delegate *)0x0) goto code_?;
              *(Delegate **)(iVar1 + 0x10) = pDVar3;
              pDVar3 = (Delegate *)0x0;
              if ((Action__Class *)pDVar2->klass == TypeInfo__System__Action) {
                pDVar3 = pDVar2;
              }
              if (pDVar3 == (Delegate *)0x0) goto code_?;
            }
            func_?();
            if (e != (ReceivedItemFromQueryEventArgs *)0x0) {
              this_00 = (e->fields).KoGaMaData;
              pIVar4 = (this->fields).item;
              if (this_00 != (BytePacker *)0x0) {
                pBVar5 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ToArray
                                   (this_00,(MethodInfo *)0x0);
                if (pIVar4 != (InventoryItem *)0x0) {
                  (pIVar4->fields).data = pBVar5;
                  func_?();
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
                      (IEditModeUI *)0x0) {
                    this_04 = (PlayerShopInventoryRepository *)func_?();
                    pIVar4 = (this->fields).item;
                    if ((pIVar4 != (InventoryItem *)0x0) &&
                       (this_04 != (PlayerShopInventoryRepository *)0x0)) {
                      UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
                      PlayerShopInventoryRepository_UpdateItemData
                                (this_04,(pIVar4->fields).itemID,(pIVar4->fields).itemCategoryID,
                                 (pIVar4->fields).data,(MethodInfo *)0x0);
                      method_00 = (MethodInfo *)
                                  UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                      callbackFunction =
                           (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
                      if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                        Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                                   (Object *)this,
                                   MethodInfo__PlayerInventoryPreviewItem___OnInventoryItemLoaded_b__32_0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                                   ,(MethodInfo *)0x0);
                        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                            cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                        ExecuteEvents_ExecuteHierarchy
                                  ((GameObject *)method_00,(BaseEventData *)0x0,callbackFunction,
                                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
                                  );
                        if (cRam_? == '\0') {
                          func_?();
                          cRam_? = '\x01';
                        }
                        value = (Object *)func_?();
                        if (value != (Object *)0x0) {
                          mscorlib.dll::System::ThrowHelper::
                          ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                    (value,ExceptionArgument__Enum_obj,method_00);
                          value[1].klass = (Object__Class *)0x0;
                          value[2].monitor = (MonitorData *)this;
                          func_?();
                          value[2].klass = (Object__Class *)0x1;
                          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                          MonoBehaviour_StartCoroutine_Auto
                                    ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ShowPurchasePopUp() */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_ShowPurchasePopUp
               (PlayerInventoryPreviewItem *this,MethodInfo *method)

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
                    ItemPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<ItemPurchasePopup>_ItemPurchasePopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__PlayerInventoryPreviewItem____c___ShowPurchasePopUp_b__34_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__PlayerInventoryPreviewItem____c__DisplayClass34_0___ShowPurchasePopUp_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__PlayerInventoryPreviewItem____c__DisplayClass34_0);
    func_?(&TypeInfo__PlayerInventoryPreviewItem____c);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__PlayerInventoryPreviewItem____c__DisplayClass34_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    original = (this->fields).popup;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar1 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        ItemPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<ItemPurchasePopup>_ItemPurchasePopup_
                       );
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    image = (this->fields).previewImage;
    pOVar1 = value[1].klass;
    pIVar2 = (this->fields).item;
    if (pOVar1 != (Object__Class *)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__ShopItem);
        cRam_? = '\x01';
      }
      method_00 = (MethodInfo *)&UNK_?;
      value_00 = (Il2CppClass *)func_?(TypeInfo__ShopItem);
      if (value_00 != (Il2CppClass *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)value_00,ExceptionArgument__Enum_obj,method_00);
        if (pIVar2 != (InventoryItem *)0x0) {
          ((ShopItem__Fields *)&value_00->name)->itemID = (pIVar2->fields).itemID;
          value_00->namespaze = (char *)(pIVar2->fields).itemCategoryID;
          (value_00->byval_arg).data = (_union_86)(pIVar2->fields).itemTypeID;
          pSVar3 = (pIVar2->fields).name;
          *(String **)&(value_00->byval_arg).attrs = pSVar3;
          func_?(&(value_00->byval_arg).attrs,pSVar3);
          pSVar3 = (pIVar2->fields).description;
          (value_00->this_arg).data.dummy = pSVar3;
          func_?(&value_00->this_arg,pSVar3);
          pBVar4 = (pIVar2->fields).data;
          *(Byte__Array **)&(value_00->this_arg).attrs = pBVar4;
          func_?(&(value_00->this_arg).attrs,pBVar4);
          *(bool *)&value_00->element_class = (pIVar2->fields).resellable;
          value_00->castClass = (Il2CppClass *)(pIVar2->fields).priceGold;
          value_00->declaringType = (Il2CppClass *)(pIVar2->fields).slotPosition;
          (pOVar1->_0).castClass = value_00;
          func_?(&(pOVar1->_0).castClass,value_00);
          pSVar3 = (pIVar2->fields).name;
          priceGold = mscorlib.dll::System::Int32::Int32_ToString
                                ((Int32 *)&(pIVar2->fields).priceGold,(MethodInfo *)0x0);
          ItemPurchasePopup::ItemPurchasePopup_Initialize
                    ((ItemPurchasePopup *)pOVar1,image,pSVar3,priceGold,(pIVar2->fields).description
                     ,(MethodInfo *)0x0);
          pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
          if ((TypeInfo__PlayerInventoryPreviewItem____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          callbackFunction = TypeInfo__PlayerInventoryPreviewItem____c->static_fields->__9__34_0;
          if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
            if ((TypeInfo__PlayerInventoryPreviewItem____c->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            object = TypeInfo__PlayerInventoryPreviewItem____c->static_fields->__9;
            callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
            if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0)
            goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                       (Object *)object,
                       MethodInfo__PlayerInventoryPreviewItem____c___ShowPurchasePopUp_b__34_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            TypeInfo__PlayerInventoryPreviewItem____c->static_fields->__9__34_0 = callbackFunction;
            func_?(&TypeInfo__PlayerInventoryPreviewItem____c->static_fields->__9__34_0,
                            callbackFunction);
          }
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar5,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
          callbackFunction_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
          if (callbackFunction_00 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,value,
                       MethodInfo__PlayerInventoryPreviewItem____c__DisplayClass34_0___ShowPurchasePopUp_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar5,(BaseEventData *)0x0,callbackFunction_00,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            return;
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


/* Void SlotPressed() */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_SlotPressed
               (PlayerInventoryPreviewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    func_?(&TypeInfo__IEditModeUI);
    func_?(&MethodInfo__PlayerInventoryPreviewItem__OnInventoryItemFailedToLoad__);
    func_?(&
                    MethodInfo__PlayerInventoryPreviewItem__OnInventoryItemLoaded_System__Object__ReceivedItemFromQueryEventArgs_
                   );
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pIVar1 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
  if ((pIVar1 != (IEditModeUI *)0x0) &&
     (iVar2 = func_?(4,TypeInfo__IEditModeUI,pIVar1), iVar2 != 0)) {
    if (unaff_ESI - *(float *)(iVar2 + 0x18) < _UNK_?) {
      return;
    }
    if ((this->fields).requiresUnlocking != 0) {
      PlayerInventoryPreviewItem_ShowPurchasePopUp(this,(MethodInfo *)0x0);
      return;
    }
    pIVar3 = (this->fields).item;
    if (pIVar3 != (InventoryItem *)0x0) {
      if ((pIVar3->fields).hasData != 0) {
        PlayerInventoryPreviewItem_AddItemToWorldFromInventory(this,(MethodInfo *)0x0);
        return;
      }
      this_00 = (this->fields).loadingWheel;
      if ((this_00 != (Image *)0x0) &&
         (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this_00,(MethodInfo *)0x0), this_01 != (GameObject *)0x0
         )) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,1,(MethodInfo *)0x0);
        this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        this_03 = (UnityAction_2_System_Object_System_Object_ *)
                  func_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
        if ((this_03 != (UnityAction_2_System_Object_System_Object_ *)0x0) &&
           (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (this_03,(Object *)this,
                       MethodInfo__PlayerInventoryPreviewItem__OnInventoryItemLoaded_System__Object__ReceivedItemFromQueryEventArgs_
                       ,(MethodInfo *)0x0), this_02 != (MVNetworkGame *)0x0)) {
          MVNetworkGame::MVNetworkGame_add_ReceivedItemFromQuery
                    (this_02,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_03,
                     (MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__MVGameControllerBase);
            cRam_? = '\x01';
          }
          pIVar1 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
          if ((pIVar1 != (IEditModeUI *)0x0) &&
             (iVar2 = func_?(4,TypeInfo__IEditModeUI,pIVar1), iVar2 != 0)) {
            *(float *)(iVar2 + 0x18) = unaff_ESI;
            if (cRam_? == '\0') {
              func_?(&TypeInfo__MVGameControllerBase);
              cRam_? = '\x01';
            }
            pIVar1 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
            if ((pIVar1 != (IEditModeUI *)0x0) &&
               (iVar2 = func_?(4,TypeInfo__IEditModeUI,pIVar1), iVar2 != 0)) {
              pDVar4 = *(Delegate **)(iVar2 + 0x10);
              this_04 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
              if (this_04 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (this_04,(Object *)this,
                           MethodInfo__PlayerInventoryPreviewItem__OnInventoryItemFailedToLoad__,
                           (MethodInfo *)0x0);
                pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                                   (pDVar4,(Delegate *)this_04,(MethodInfo *)0x0);
                if (pDVar4 == (Delegate *)0x0) {
                  *(undefined4 *)(iVar2 + 0x10) = 0;
                }
                else {
                  pDVar5 = (Delegate *)0x0;
                  if ((Action__Class *)pDVar4->klass == TypeInfo__System__Action) {
                    pDVar5 = pDVar4;
                  }
                  if (pDVar5 == (Delegate *)0x0) goto code_?;
                  *(Delegate **)(iVar2 + 0x10) = pDVar5;
                  pDVar5 = (Delegate *)0x0;
                  if ((Action__Class *)pDVar4->klass == TypeInfo__System__Action) {
                    pDVar5 = pDVar4;
                  }
                  if (pDVar5 == (Delegate *)0x0) goto code_?;
                }
                func_?();
                this_05 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                    ((MethodInfo *)0x0);
                pIVar3 = (this->fields).item;
                if ((pIVar3 != (InventoryItem *)0x0) &&
                   (this_05 != (MVNetworkGame_OperationRequests *)0x0)) {
                  MVNetworkGame+OperationRequests::
                  MVNetworkGame_OperationRequests_GetInventoryItemData
                            (this_05,(pIVar3->fields).itemID,(MethodInfo *)0x0);
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
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_Update
               (PlayerInventoryPreviewItem *this,MethodInfo *method)

{
  if (((this->fields).initialized != 0) && ((this->fields).hasItemPreviewer != 0)) {
    this_00 = (this->fields).objectPreviewer;
    if (this_00 == (InventoryItemPreviewer *)0x0) {
      uVar1 = func_?(&stack0xfffffff0);
      func_?(uVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    InventoryItemPreviewer::InventoryItemPreviewer_UpdateRotation(this_00,0.0,(MethodInfo *)0x0);
  }
  return;
}


/* Void <AddItemToWorldFromInventory>b__31_1(IAddItemFromInventory, BaseEventData) */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem::
     PlayerInventoryPreviewItem__AddItemToWorldFromInventory_b__31_1
               (PlayerInventoryPreviewItem *this,IAddItemFromInventory *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (InventoryItem *)&TypeInfo__UnityEngine__EventSystems__IAddItemFromInventory;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IAddItemFromInventory *)0x0) {
    pIStack_1 = (this->fields).item;
    pIStack_2 = x;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IAddItemFromInventory;
    func_?(0);
    return;
  }
  pIStack_1 = (InventoryItem *)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <OnInventoryItemLoaded>b__32_0(IPlayerInventory, BaseEventData) */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem::
     PlayerInventoryPreviewItem__OnInventoryItemLoaded_b__32_0
               (PlayerInventoryPreviewItem *this,IPlayerInventory *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IPlayerInventory);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).item;
  if (x == (IPlayerInventory *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = 0;
  uVar4 = (x->klass->_1).interface_offsets_count;
  if (uVar4 != 0) {
    do {
      if (x->klass->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IPlayerInventory) {
        pVVar5 = &(x->klass->vtable).ItemDataLoaded + x->klass->interfaceOffsets[uVar3].offset;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  pVVar5 = (VirtualInvokeData *)
           func_?(x,TypeInfo__UnityEngine__EventSystems__IPlayerInventory,7);
code_?:
  (*pVVar5->methodPtr)(x,this,pIVar1,pVVar5->method);
  return;
}


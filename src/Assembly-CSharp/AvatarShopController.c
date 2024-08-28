
/* Void Activate(UIPushOption) */

void Assembly-CSharp.dll::AvatarShopController::AvatarShopController_Activate
               (AvatarShopController *this,UIPushOption__Enum pushOption,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__AvatarShopController__PageTurned_int_);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__AvatarShopController____c___Activate_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__AvatarShopController____c__DisplayClass10_0___Activate_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AvatarShopController____c__DisplayClass10_0);
    func_?(&TypeInfo__AvatarShopController____c);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AvatarShopController____c__DisplayClass10_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value == (Object *)0x0) {
code_?:
    func_?();
  }
  else {
    value[1].klass = (Object__Class *)this;
    func_?(value + 1,this);
    value[1].monitor = (MonitorData *)pushOption;
    pIVar1 = (this->fields).inventoryControllerPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pIVar1 = (InventoryController *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pIVar1,
                        InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController_
                       );
    ppIVar2 = &(this->fields).inventoryController;
    *ppIVar2 = pIVar1;
    func_?(ppIVar2,pIVar1);
    if (*ppIVar2 == (InventoryController *)0x0) goto code_?;
    InventoryController::InventoryController_Initialize
              (*ppIVar2,(this->fields).numberOfSlotsPrPage,(MethodInfo *)0x0);
    pTVar3 = (this->fields).tab;
    if ((pTVar3 == (TabState *)0x0) || (*ppIVar2 == (InventoryController *)0x0))
    goto code_?;
    InventoryController::InventoryController_AddTab
              (*ppIVar2,0,(pTVar3->fields).name,(MethodInfo *)0x0);
    pIVar1 = *ppIVar2;
    if (pIVar1 == (InventoryController *)0x0) goto code_?;
    pUVar4 = (pIVar1->fields).OnPageTurned;
    this_00 = (UnityAction_1_System_Int32Enum_ *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,MethodInfo__AvatarShopController__PageTurned_int_,
               (MethodInfo *)0x0);
    pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar4,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar5 == (Delegate *)0x0) {
      (pIVar1->fields).OnPageTurned = (UnityAction_1_System_Int32_ *)0x0;
code_?:
      func_?();
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__AvatarShopController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction = TypeInfo__AvatarShopController____c->static_fields->__9__10_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__AvatarShopController____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__AvatarShopController____c->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__AvatarShopController____c___Activate_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__AvatarShopController____c->static_fields->__9__10_0 = callbackFunction;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar6,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      callbackFunction_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,value,
                 MethodInfo__AvatarShopController____c__DisplayClass10_0___Activate_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar6,(BaseEventData *)0x0,callbackFunction_00,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      AvatarShopController_UpdateContent(this,(MethodInfo *)0x0);
      return;
    }
    pUVar4 = (UnityAction_1_System_Int32_ *)func_?();
    if (pUVar4 == (UnityAction_1_System_Int32_ *)0x0) goto code_?;
    (pIVar1->fields).OnPageTurned = pUVar4;
    iVar7 = func_?();
    if (iVar7 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void AddPreviewObjectForIndex(Int32) */

void Assembly-CSharp.dll::AvatarShopController::AvatarShopController_AddPreviewObjectForIndex
               (AvatarShopController *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    AvatarShopPreviewItem_MethodInfo__UnityEngine__Object__Instantiate<AvatarShopPreviewItem>_AvatarShopPreviewItem_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).avatarRepository;
  if (pAVar1 != (AvatarRepository *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__get_Item_int_
                     );
      cRam_? = '\x01';
    }
    this_00 = (pAVar1->fields).avatars;
    if (this_00 != (Dictionary_2_System_Int32_AvatarRepositoryItem_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)this_00,index,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__get_Item_int_
                         );
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MV__WorldObject__BytePacker);
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                       );
        func_?(&TypeInfo__KoGaMaPackageClient);
        cRam_? = '\x01';
      }
      if (pOVar2 != (Object *)0x0) {
        buffer = pOVar2[1].klass;
        this_03 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                  (this_03,(Byte__Array *)buffer,(MethodInfo *)0x0);
        this_04 = (KoGaMaPackageClient *)func_?(TypeInfo__KoGaMaPackageClient);
        KoGaMaPackageClient::KoGaMaPackageClient__ctor(this_04,this_03,0,(MethodInfo *)0x0);
        if (this_04 != (KoGaMaPackageClient *)0x0) {
          KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(this_04,(MethodInfo *)0x0);
          this_01 = (this_04->fields).worldObjects;
          if (this_01 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
            wo = (MVWorldObjectClient *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this_01,
                            (this_04->fields).worldObjectRoot,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                           );
            original = (this->fields).previewItemPrefab;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            this_05 = (Component *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                ((Object *)original,
                                 AvatarShopPreviewItem_MethodInfo__UnityEngine__Object__Instantiate<AvatarShopPreviewItem>_AvatarShopPreviewItem_
                                );
            pTVar3 = (this->fields).previewRootTransform;
            if (this_05 != (Component *)0x0) {
              if (cRam_? == '\0') {
                func_?(&
                                AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_
                               );
                func_?(&TypeInfo__UnityEngine__Object);
                cRam_? = '\x01';
              }
              this_05[2].monitor = (MonitorData *)pOVar2;
              func_?(&this_05[2].monitor,pOVar2);
              pCVar4 = this_05[3].klass;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              pCVar4 = (Component__Class *)
                       UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                 ((Object *)pCVar4,
                                  AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_
                                 );
              this_05[3].klass = pCVar4;
              func_?(this_05 + 3,pCVar4);
              if (wo != (MVWorldObjectClient *)0x0) {
                if (this_05[3].klass != (Component__Class *)0x0) {
                  previewPosition.z = (float)(int)pOVar2[2].klass * _UNK_?;
                  previewPosition.x = 100.0;
                  previewPosition.y = 100.0;
                  AvatarPreviewer::AvatarPreviewer_Initialize
                            ((AvatarPreviewer *)this_05[3].klass,(int32_t)this_05[1].monitor,
                             (int32_t)this_05[1].fields._.m_CachedPtr,CameraClearFlags__Enum_Color,
                             (wo->fields).previewLayerMask,(Vector3)ZEXT812(0),pTVar3,
                             previewPosition,(String *)pOVar2[2].monitor,wo,(wo->fields).gameObject,
                             (Vector3)ZEXT812(0),(MethodInfo *)0x0);
                  if ((this_05[3].klass != (Component__Class *)0x0) &&
                     (pGVar5 = (GameObject *)((this_05[3].klass)->_0).typeMetadataHandle,
                     pGVar5 != (GameObject *)0x0)) {
                    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                             GameObject_get_transform(pGVar5,(MethodInfo *)0x0);
                    if (pTVar3 != (Transform *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_3
                                (pTVar3,0.0,180.0,0.0,(MethodInfo *)0x0);
                      if ((this_05[3].klass != (Component__Class *)0x0) &&
                         (this_05[2].klass != (Component__Class *)0x0)) {
                        UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                                  ((RawImage *)this_05[2].klass,
                                   (Texture *)((this_05[3].klass)->_0).castClass,(MethodInfo *)0x0);
                        this_02 = (this->fields).inventoryController;
                        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_get_gameObject(this_05,(MethodInfo *)0x0);
                        if (this_02 != (InventoryController *)0x0) {
                          InventoryController::InventoryController_AddObject
                                    (this_02,pGVar5,index % (this->fields).numberOfSlotsPrPage,
                                     (MethodInfo *)0x0);
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
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MVWorldObjectClient GetWorldObjectFromItemData(AvatarRepositoryItem) */

MVWorldObjectClient *
Assembly-CSharp.dll::AvatarShopController::AvatarShopController_GetWorldObjectFromItemData
          (AvatarRepositoryItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__BytePacker);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&TypeInfo__KoGaMaPackageClient);
    cRam_? = '\x01';
  }
  if (item != (AvatarRepositoryItem *)0x0) {
    buffer = (item->fields).data;
    this_00 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
              (this_00,buffer,(MethodInfo *)0x0);
    this_01 = (KoGaMaPackageClient *)func_?(TypeInfo__KoGaMaPackageClient);
    KoGaMaPackageClient::KoGaMaPackageClient__ctor(this_01,this_00,0,(MethodInfo *)0x0);
    if (this_01 != (KoGaMaPackageClient *)0x0) {
      KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(this_01,(MethodInfo *)0x0);
      this = (this_01->fields).worldObjects;
      if (this != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
        pMVar1 = (MVWorldObjectClient *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this,
                            (this_01->fields).worldObjectRoot,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                           );
        return pMVar1;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pMVar1 = (MVWorldObjectClient *)(*pcVar2)();
  return pMVar1;
}


/* Void Initialize(AvatarEditModeBodyController) */

void Assembly-CSharp.dll::AvatarShopController::AvatarShopController_Initialize
               (AvatarShopController *this,AvatarEditModeBodyController *editModeBodyController,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TabState);
    func_?(&StringLiteral_Avatars);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).avatarEditModeBodyController;
  *ppAVar1 = editModeBodyController;
  func_?(ppAVar1,editModeBodyController);
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 != (MVNetworkGame *)0x0) {
    pAVar3 = (pMVar2->fields)._AvatarShopRepository_k__BackingField;
    ppAVar4 = &(this->fields).avatarRepository;
    *ppAVar4 = pAVar3;
    func_?(ppAVar4,pAVar3);
    name = TM::TM__(StringLiteral_Avatars,(MethodInfo *)0x0);
    iVar5 = (this->fields).numberOfSlotsPrPage;
    this_01 = (TabState *)func_?(TypeInfo__TabState);
    TabState::TabState__ctor(this_01,1,name,iVar5,(MethodInfo *)0x0);
    pAVar3 = *ppAVar4;
    if (pAVar3 != (AvatarRepository *)0x0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__get_Count__
                       );
        cRam_? = '\x01';
      }
      this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)(pAVar3->fields).avatars;
      if (this_00 !=
          (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) {
        iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__get_Count__
                          );
        if (this_01 != (TabState *)0x0) {
          (this_01->fields).highestSlotIndex = iVar5 + -1;
          ppTVar6 = &(this->fields).tab;
          *ppTVar6 = this_01;
          func_?(ppTVar6,this_01);
          return;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnPop() */

void Assembly-CSharp.dll::AvatarShopController::AvatarShopController_OnPop
               (AvatarShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).previewRootTransform;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar1 = (this->fields).previewRootTransform;
    if (pTVar1 == (Transform *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)pTVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
  }
  return;
}


/* Void PageTurned(Int32) */

void Assembly-CSharp.dll::AvatarShopController::AvatarShopController_PageTurned
               (AvatarShopController *this,int32_t dir,MethodInfo *method)

{
  this_00 = (this->fields).tab;
  if (this_00 != (TabState *)0x0) {
    bVar1 = TabState::TabState_UpdatePage(this_00,dir,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      AvatarShopController_UpdateContent(this,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void PurchaseAvatar(AvatarRepositoryItem) */

void Assembly-CSharp.dll::AvatarShopController::AvatarShopController_PurchaseAvatar
               (AvatarShopController *this,AvatarRepositoryItem *item,MethodInfo *method)

{
  this_00 = (this->fields).avatarEditModeBodyController;
  if (this_00 != (AvatarEditModeBodyController *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__AvatarEditModeBodyController___PurchaseAvatar_b__35_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     );
      func_?(&
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                     );
      func_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                     );
      func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      cRam_? = '\x01';
    }
    ppAVar1 = &(this_00->fields).purchasingItem;
    *ppAVar1 = item;
    func_?(ppAVar1,item);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this_00,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this_00,
               MethodInfo__AvatarEditModeBodyController___PurchaseAvatar_b__35_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
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
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateContent() */

void Assembly-CSharp.dll::AvatarShopController::AvatarShopController_UpdateContent
               (AvatarShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarRepositoryItem>__get_Count__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Preview_Root___AvatarShopControl);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).previewRootTransform;
  ppTVar2 = &(this->fields).previewRootTransform;
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
            (pGVar4,StringLiteral_Preview_Root___AvatarShopControl,(MethodInfo *)0x0);
  if (pGVar4 != (GameObject *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar4,(MethodInfo *)0x0);
    *ppTVar2 = pTVar1;
    func_?(ppTVar2,pTVar1);
    pIVar5 = (this->fields).inventoryController;
    if (pIVar5 != (InventoryController *)0x0) {
      InventoryController::InventoryController_Clear(pIVar5,(MethodInfo *)0x0);
      pTVar6 = (this->fields).tab;
      pIVar5 = (this->fields).inventoryController;
      if (pTVar6 != (TabState *)0x0) {
        currentPage = (pTVar6->fields).currentPage;
        maxPages = TabState::TabState_get_MaxPages(pTVar6,(MethodInfo *)0x0);
        if (pIVar5 != (InventoryController *)0x0) {
          InventoryController::InventoryController_SelectTab
                    (pIVar5,0,currentPage,maxPages,(MethodInfo *)0x0);
          pAVar7 = (this->fields).avatarRepository;
          if (pAVar7 != (AvatarRepository *)0x0) {
            if (cRam_? == '\0') {
              func_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__get_Values__
                             );
              func_?(&
                              System__Linq__IOrderedEnumerable<AvatarRepositoryItem>_MethodInfo__System__Linq__Enumerable__OrderBy<AvatarRepositoryItem,_int>_System__Collections__Generic__IEnumerable<AvatarRepositoryItem>__System__Func<AvatarRepositoryItem,_int>_
                             );
              func_?(&
                              System__Collections__Generic__List<AvatarRepositoryItem>_MethodInfo__System__Linq__Enumerable__ToList<AvatarRepositoryItem>_System__Collections__Generic__IEnumerable<AvatarRepositoryItem>_
                             );
              func_?(&TypeInfo__System__Func<AvatarRepositoryItem,_int>);
              func_?(&
                              MethodInfo__AvatarRepository____c___GetAvatars_b__5_0_AvatarRepositoryItem_
                             );
              func_?(&TypeInfo__AvatarRepository____c);
              cRam_? = '\x01';
            }
            this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                       *)(pAVar7->fields).avatars;
            if (this_00 !=
                (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)0x0) {
              source = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                       UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                       Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                                 (this_00,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__get_Values__
                                 );
              if ((TypeInfo__AvatarRepository____c->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              this_01 = TypeInfo__AvatarRepository____c->static_fields->__9__5_0;
              if (this_01 == (Func_2_AvatarRepositoryItem_Int32_ *)0x0) {
                if ((TypeInfo__AvatarRepository____c->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__AvatarRepository____c);
                }
                object = TypeInfo__AvatarRepository____c->static_fields->__9;
                this_01 = (Func_2_AvatarRepositoryItem_Int32_ *)
                          func_?(TypeInfo__System__Func<AvatarRepositoryItem,_int>);
                Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::ObjectConstructor`1[Unity::
                IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
                ObjectConstructor_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                          ((ObjectConstructor_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                            *)this_01,(Object *)object,
                           MethodInfo__AvatarRepository____c___GetAvatars_b__5_0_AvatarRepositoryItem_
                           ,(MethodInfo *)0x0);
                TypeInfo__AvatarRepository____c->static_fields->__9__5_0 = this_01;
                func_?(&TypeInfo__AvatarRepository____c->static_fields->__9__5_0,this_01);
              }
              source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_3
                                    ((IEnumerable_1_System_Object_ *)source,
                                     (Func_2_Object_Int32_ *)this_01,
                                     System__Linq__IOrderedEnumerable<AvatarRepositoryItem>_MethodInfo__System__Linq__Enumerable__OrderBy<AvatarRepositoryItem,_int>_System__Collections__Generic__IEnumerable<AvatarRepositoryItem>__System__Func<AvatarRepositoryItem,_int>_
                                    );
              pLVar8 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_8
                                 ((IEnumerable_1_System_Object_ *)source_00,
                                  System__Collections__Generic__List<AvatarRepositoryItem>_MethodInfo__System__Linq__Enumerable__ToList<AvatarRepositoryItem>_System__Collections__Generic__IEnumerable<AvatarRepositoryItem>_
                                 );
              slotIndex = 0;
              if (pLVar8 != (List_1_System_Object_ *)0x0) {
                while( true ) {
                  if ((pLVar8->fields)._size <= slotIndex) {
                    return;
                  }
                  pTVar6 = (this->fields).tab;
                  if (pTVar6 == (TabState *)0x0) break;
                  bVar3 = TabState::TabState_SlotIndexIsInRange(pTVar6,slotIndex,(MethodInfo *)0x0);
                  if (bVar3 != 0) {
                    AvatarShopController_AddPreviewObjectForIndex(this,slotIndex,(MethodInfo *)0x0);
                  }
                  slotIndex = slotIndex + 1;
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
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


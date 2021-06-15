
/* InventoryItem GetItem() */

InventoryItem *
Assembly-CSharp.dll::EditModeClientShopItem::EditModeClientShopItem_GetItem
          (EditModeClientShopItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  itemToCopy = (this->fields).item;
  this_00 = (InventoryItem *)func_?(TypeInfo__InventoryItem);
  InventoryItem::InventoryItem__ctor_3(this_00,itemToCopy,(MethodInfo *)0x0);
  return this_00;
}


/* Void Initialize(Transform, ShopItem, MVWorldObjectClient) */

void Assembly-CSharp.dll::EditModeClientShopItem::EditModeClientShopItem_Initialize
               (EditModeClientShopItem *this,Transform *rootTransform,ShopItem *item,
               MVWorldObjectClient *woPreviewObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  uStack_3._0_4_ = 0.0;
  uStack_3._4_4_ = 0.0;
  fStack_4 = 0.0;
  (this->fields).item = item;
  if (woPreviewObject != (MVWorldObjectClient *)0x0) {
    MVar5 = (*(code *)(woPreviewObject->klass->vtable).get_DocumentationType.method)
                      (woPreviewObject,
                       (woPreviewObject->klass->vtable).TraverseRecursiveTail.methodPtr);
    if (item != (ShopItem *)0x0) {
      ShopItem::ShopItem_ApplyLocalDescriptionOverride(item,MVar5,(MethodInfo *)0x0);
      pIVar6 = (this->fields).objectPreviewerPrefab;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pIVar6 = (InventoryItemPreviewer *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         ((XpBoostParticlePreviewer *)pIVar6,
                          InventoryItemPreviewer_MethodInfo__UnityEngine__Object__Instantiate<InventoryItemPreviewer>_InventoryItemPreviewer_
                         );
      (this->fields).objectPreviewer = pIVar6;
      uStack_1 = (ulonglong)(uint)((float)(item->fields).slotPosition * _UNK_?);
      func_?(&uStack_1,0x42c80000,0x42c80000);
      uStack_1 = 0;
      func_?(&uStack_3,0,0);
      if ((((uint)(TypeInfo__InventoryItem->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__InventoryItem->_1).cctor_started == 0)) {
        uStack_1 = CONCAT44(TypeInfo__InventoryItem,&UNK_?);
        func_?();
      }
      pDVar7 = TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
      uStack_1 = CONCAT44((woPreviewObject->klass->vtable).TraverseRecursiveTail.methodPtr,
                           woPreviewObject);
      MVar5 = (*(code *)(woPreviewObject->klass->vtable).get_DocumentationType.method)();
      if (pDVar7 != (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_ *)
                    0x0) {
        bVar8 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[MVWorldObjectDocumentationType,System::Object]::
                Dictionary_2_MVWorldObjectDocumentationType_System_Object__ContainsKey
                          ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)pDVar7,
                           MVar5,
                           MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__ContainsKey_MVWorldObjectDocumentationType_
                          );
        if (bVar8 != 0) {
          if ((((uint)(TypeInfo__InventoryItem->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__InventoryItem->_1).cctor_started == 0)) {
            func_?(TypeInfo__InventoryItem);
          }
          pDVar7 = TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
          MVar5 = (*(code *)(woPreviewObject->klass->vtable).get_DocumentationType.method)
                            (woPreviewObject,
                             (woPreviewObject->klass->vtable).TraverseRecursiveTail.methodPtr);
          if (pDVar7 == (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_
                         *)0x0) goto code_?;
          this_01 = (InventoryItem_ItemDescription *)
                    mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[MVWorldObjectDocumentationType,System::Object]::
                    Dictionary_2_MVWorldObjectDocumentationType_System_Object__get_Item
                              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)pDVar7,
                               MVar5,
                               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                              );
          if (this_01 == (InventoryItem_ItemDescription *)0x0) goto code_?;
          pVVar9 = InventoryItem+ItemDescription::
                   InventoryItem_ItemDescription_get_CameraPreviewerOffset
                             (&VStack_10,this_01,(MethodInfo *)0x0);
          uStack_3._0_4_ = pVVar9->x;
          uStack_3._4_4_ = pVVar9->y;
          fStack_4 = pVVar9->z;
        }
        pIVar6 = (this->fields).objectPreviewer;
        iStack_11 = (this->fields).previewWidth;
        iStack_12 = (this->fields).previewHeight;
        pOStack_13 = PrefabPool::PrefabPool_get_MVSpawnPointYellowPrefab
                              ((PrefabPool *)woPreviewObject,(MethodInfo *)0x0);
        fVar14 = fStack_4;
        fVar15 = fStack_2;
        name = (item->fields).name;
        VStack_10.y = (float)uStack_3;
        VStack_10.z = uStack_3._4_4_;
        uStack_16 = uStack_1;
        woGameObjectCopy =
             DayNightCycle::DayNightCycle_get_CurrentMoonParam
                       ((DayNightCycle *)woPreviewObject,(MethodInfo *)0x0);
        if (pIVar6 != (InventoryItemPreviewer *)0x0) {
          cameraOffset.z = fVar14;
          cameraOffset.x = VStack_10.y;
          cameraOffset.y = VStack_10.z;
          previewPosition.z = fVar15;
          previewPosition.x = (float)(undefined4)uStack_16;
          previewPosition.y = (float)uStack_16._4_4_;
          InventoryItemPreviewer::InventoryItemPreviewer_Initialize
                    (pIVar6,iStack_11,iStack_12,CameraClearFlags__Enum_Color,
                     (LayerFlags__Enum)pOStack_13,cameraOffset,rootTransform,previewPosition,name,
                     woPreviewObject,(GameObject *)woGameObjectCopy,(MethodInfo *)0x0);
          pIVar6 = (this->fields).objectPreviewer;
          this_00 = (this->fields).previewImage;
          if (pIVar6 != (InventoryItemPreviewer *)0x0) {
            value = (Texture *)
                    GamePointGainEffect::GamePointGainEffect_get_ID
                              ((GamePointGainEffect *)pIVar6,(MethodInfo *)0x0);
            if (this_00 != (RawImage *)0x0) {
              UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                        (this_00,value,(MethodInfo *)0x0);
              iVar17 = (*(code *)(woPreviewObject->klass->vtable).get_DocumentationType.method)
                                (woPreviewObject,
                                 (woPreviewObject->klass->vtable).TraverseRecursiveTail.methodPtr);
              (this->fields).documentationType = iVar17;
              (this->fields).initialized = 1;
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void ShowPurchasePopUp() */

void Assembly-CSharp.dll::EditModeClientShopItem::EditModeClientShopItem_ShowPurchasePopUp
               (EditModeClientShopItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__EditModeClientShopItem___ShowPurchasePopUp_c__AnonStorey1;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  pIVar1 = (this->fields).popup;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pIVar1 = (ItemPurchasePopup *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pIVar1,
                      ItemPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<ItemPurchasePopup>_ItemPurchasePopup_
                     );
  if ((this_00 != (ScaleAnimationBase *)0x0) &&
     ((this_00->fields)._._._._.m_CachedPtr = pIVar1, pIVar1 != (ItemPurchasePopup *)0x0)) {
    ItemPurchasePopup::ItemPurchasePopup_Initialize
              (pIVar1,(this->fields).previewImage,(this->fields).item,(MethodInfo *)0x0);
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__EditModeClientShopItem->static_fields->__f__am_cache1 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)0x0,
                 MethodInfo__EditModeClientShopItem___ShowPurchasePopUp_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      TypeInfo__EditModeClientShopItem->static_fields->__f__am_cache1 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar3;
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__EditModeClientShopItem->static_fields->__f__am_cache1;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar2,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this_00,
               MethodInfo__EditModeClientShopItem___ShowPurchasePopUp_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar2,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SlotPressed() */

void Assembly-CSharp.dll::EditModeClientShopItem::EditModeClientShopItem_SlotPressed
               (EditModeClientShopItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      this_02 = (SubscriptionRulesWrapper *)
                PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                          ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)this_01,
                           (MethodInfo *)0x0);
      if (this_02 != (SubscriptionRulesWrapper *)0x0) {
        pMVar1 = (MethodInfo *)0x3;
        bVar2 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                SubscriptionRulesWrapper_HasBenefit
                          (this_02,SubscriptionBenefit__Enum_FreeBuildingGameObjects,
                           (MethodInfo *)0x0);
        method_00 = TypeInfo__EditModeClientShopItem___SlotPressed_c__AnonStorey0;
        if (bVar2 == 0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pSVar3 = (ScaleAnimationBase *)func_?();
          ScaleAnimationBase::ScaleAnimationBase_Play(pSVar3,0.0,pMVar1);
          original = _UNK_?;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          this_03 = (ItemPurchasePopup *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                              (original,
                               ItemPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<ItemPurchasePopup>_ItemPurchasePopup_
                              );
          if ((pSVar3 != (ScaleAnimationBase *)0x0) &&
             ((pSVar3->fields)._._._._.m_CachedPtr = this_03, this_03 != (ItemPurchasePopup *)0x0))
          {
            ItemPurchasePopup::ItemPurchasePopup_Initialize
                      (this_03,_UNK_?,_UNK_?,(MethodInfo *)0x0);
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)&UNK_?,(MethodInfo *)0x0);
            if (TypeInfo__EditModeClientShopItem->static_fields->__f__am_cache1 ==
                (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
              pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar5,(Object *)0x0,
                         MethodInfo__EditModeClientShopItem___ShowPurchasePopUp_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,
                         MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                        );
              TypeInfo__EditModeClientShopItem->static_fields->__f__am_cache1 =
                   (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar5;
            }
            pEVar6 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                     TypeInfo__EditModeClientShopItem->static_fields->__f__am_cache1;
            if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      (pGVar4,(BaseEventData *)0x0,pEVar6,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)&UNK_?,(MethodInfo *)0x0);
            pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar5,(Object *)pSVar3,
                       MethodInfo__EditModeClientShopItem___ShowPurchasePopUp_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                      );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      (pGVar4,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar5,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            return;
          }
        }
        else {
          pSVar3 = (ScaleAnimationBase *)func_?();
          ScaleAnimationBase::ScaleAnimationBase_Play(pSVar3,0.0,(MethodInfo *)method_00);
          itemToCopy = pSRam00000020;
          this_04 = (InventoryItem *)func_?();
          InventoryItem::InventoryItem__ctor_3(this_04,itemToCopy,(MethodInfo *)0x0);
          if (pSVar3 != (ScaleAnimationBase *)0x0) {
            (pSVar3->fields)._._._._.m_CachedPtr = this_04;
            pMVar1 = (MethodInfo *)
                     UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)0x0,(MethodInfo *)0x0);
            if (TypeInfo__EditModeClientShopItem->static_fields->__f__am_cache0 ==
                (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
              pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?();
              pMVar1 = 
              MethodInfo__EditModeClientShopItem___SlotPressed_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
              ;
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar5,(Object *)0x0,
                         MethodInfo__EditModeClientShopItem___SlotPressed_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,
                         MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                        );
              TypeInfo__EditModeClientShopItem->static_fields->__f__am_cache0 =
                   (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar5;
            }
            pEVar6 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                     TypeInfo__EditModeClientShopItem->static_fields->__f__am_cache0;
            if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      ((GameObject *)pMVar1,(BaseEventData *)0x0,pEVar6,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)0x0,(MethodInfo *)0x0);
            pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar5,(Object *)pSVar3,
                       MethodInfo__EditModeClientShopItem___SlotPressed_c__AnonStorey0____m__0_UnityEngine__EventSystems__IAddItemFromInventory__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAddItemFromInventory>__EventFunction_System__Object__void__
                      );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      (pGVar4,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar5,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAddItemFromInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAddItemFromInventory>_
                      );
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::EditModeClientShopItem::EditModeClientShopItem_Update
               (EditModeClientShopItem *this,MethodInfo *method)

{
  if ((this->fields).initialized != 0) {
    this_00 = (this->fields).objectPreviewer;
    if (this_00 == (InventoryItemPreviewer *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    InventoryItemPreviewer::InventoryItemPreviewer_UpdateRotation(this_00,0.0,(MethodInfo *)0x0);
  }
  return;
}


/* Void <ShowPurchasePopUp>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::EditModeClientShopItem::EditModeClientShopItem__ShowPurchasePopUp_m__1
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,handler,8);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <SlotPressed>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::EditModeClientShopItem::EditModeClientShopItem__SlotPressed_m__0
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,handler,4);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


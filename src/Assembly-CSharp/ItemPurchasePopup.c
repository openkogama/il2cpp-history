
/* Void ConfirmationCallback(Boolean) */

void Assembly-CSharp.dll::ItemPurchasePopup::ItemPurchasePopup_ConfirmationCallback
               (ItemPurchasePopup *this,bool result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (result == 0) {
    if (TypeInfo__ItemPurchasePopup->static_fields->__f__am_cache0 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__ItemPurchasePopup___ConfirmationCallback_m__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      TypeInfo__ItemPurchasePopup->static_fields->__f__am_cache0 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar2;
    }
    pEVar3 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__ItemPurchasePopup->static_fields->__f__am_cache0;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar1,(BaseEventData *)0x0,pEVar3,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__ItemPurchasePopup->static_fields->__f__am_cache1 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__ItemPurchasePopup___ConfirmationCallback_m__3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      TypeInfo__ItemPurchasePopup->static_fields->__f__am_cache1 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar2;
    }
    pEVar3 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__ItemPurchasePopup->static_fields->__f__am_cache1;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar1,(BaseEventData *)0x0,pEVar3,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseClientShopItem>
                          );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__ItemPurchasePopup___ConfirmationCallback_m__1_UnityEngine__EventSystems__IPurchaseClientShopItem__UnityEngine__EventSystems__BaseEventData_
             ,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseClientShopItem>__EventFunction_System__Object__void__
            );
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPurchaseClientShopItem>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseClientShopItem>_
            );
  return;
}


/* Void Initialize(RawImage, ShopItem) */

void Assembly-CSharp.dll::ItemPurchasePopup::ItemPurchasePopup_Initialize
               (ItemPurchasePopup *this,RawImage *image,ShopItem *item,MethodInfo *method)

{
  (this->fields).item = item;
  if ((item != (ShopItem *)0x0) && (pTVar1 = (this->fields).itemName, pTVar1 != (Text *)0x0)) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,(item->fields).name,
               (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar1 = (this->fields).cost;
    uVar2 = func_?(&(item->fields).priceGold,0);
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,uVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      pTVar1 = (this->fields).nonSubscriberCost;
      uVar2 = func_?(&(item->fields).priceGold,0);
      if (pTVar1 != (Text *)0x0) {
        (*(code *)(pTVar1->klass->vtable).set_text.method)
                  (pTVar1,uVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
        this_00 = (this->fields).itemImage;
        if (image != (RawImage *)0x0) {
          value = PrefabPool::PrefabPool_get_MVCheckpointPrefab
                            ((PrefabPool *)image,(MethodInfo *)0x0);
          if (this_00 != (RawImage *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                      (this_00,(Texture *)value,(MethodInfo *)0x0);
            pTVar1 = (this->fields).description;
            if (pTVar1 != (Text *)0x0) {
              (*(code *)(pTVar1->klass->vtable).set_text.method)
                        (pTVar1,(item->fields).description,
                         (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnPurchaseClicked() */

void Assembly-CSharp.dll::ItemPurchasePopup::ItemPurchasePopup_OnPurchaseClicked
               (ItemPurchasePopup *this,MethodInfo *method)

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
    method_00 = (MethodInfo *)&UNK_?;
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      this_02 = (SubscriptionRulesWrapper *)
                PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                          ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)this_01,
                           (MethodInfo *)0x0);
      if (this_02 != (SubscriptionRulesWrapper *)0x0) {
        bVar1 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                SubscriptionRulesWrapper_HasBenefit
                          (this_02,SubscriptionBenefit__Enum_FreeBuildingGameObjects,
                           (MethodInfo *)0x0);
        if (bVar1 == 0) {
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this,(MethodInfo *)0x0);
          pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar3,(Object *)this,
                     MethodInfo__ItemPurchasePopup___OnPurchaseClicked_m__0_UnityEngine__EventSystems__IPurchaseClientShopItem__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseClientShopItem>__EventFunction_System__Object__void__
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
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPurchaseClientShopItem>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseClientShopItem>_
                    );
          return;
        }
        this_03 = (ScaleAnimationBase *)func_?();
        ScaleAnimationBase::ScaleAnimationBase_Play(this_03,0.0,method_00);
        pXVar4 = _UNK_?;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                           (pXVar4,
                            ItemPurchaseConfirmationPopup_MethodInfo__UnityEngine__Object__Instantiate<ItemPurchaseConfirmationPopup>_ItemPurchaseConfirmationPopup_
                           );
        if (this_03 != (ScaleAnimationBase *)0x0) {
          (this_03->fields)._._._._.m_CachedPtr = pXVar4;
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)&UNK_?,(MethodInfo *)0x0);
          pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                     );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar3,(Object *)this_03,
                     MethodInfo__ItemPurchasePopup___OnPurchaseClicked_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
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
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          pvVar5 = (this_03->fields)._._._._.m_CachedPtr;
          pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar3,(Object *)&UNK_?,
                     MethodInfo__ItemPurchasePopup__ConfirmationCallback_bool_,
                     MethodInfo__UnityEngine__Events__UnityAction<bool>__UnityAction_System__Object__void__
                    );
          if (pvVar5 != (void *)0x0) {
            *(UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ **)
             ((int)pvVar5 + 0xc) = pUVar3;
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void <ConfirmationCallback>m__1(IPurchaseClientShopItem, BaseEventData) */

void Assembly-CSharp.dll::ItemPurchasePopup::ItemPurchasePopup__ConfirmationCallback_m__1
               (ItemPurchasePopup *this,IPurchaseClientShopItem *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IPurchaseClientShopItem *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IPurchaseClientShopItem,x,
                    (this->fields).item);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <ConfirmationCallback>m__2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ItemPurchasePopup::ItemPurchasePopup__ConfirmationCallback_m__2
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,handler,0x20);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <ConfirmationCallback>m__3(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ItemPurchasePopup::ItemPurchasePopup__ConfirmationCallback_m__3
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


/* Void <OnPurchaseClicked>m__0(IPurchaseClientShopItem, BaseEventData) */

void Assembly-CSharp.dll::ItemPurchasePopup::ItemPurchasePopup__OnPurchaseClicked_m__0
               (ItemPurchasePopup *this,IPurchaseClientShopItem *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IPurchaseClientShopItem *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IPurchaseClientShopItem,x,
                    (this->fields).item);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


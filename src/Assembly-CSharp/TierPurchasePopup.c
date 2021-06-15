
/* Void Cancel() */

void Assembly-CSharp.dll::TierPurchasePopup::TierPurchasePopup_Cancel
               (TierPurchasePopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__TierPurchasePopup->static_fields->__f__am_cache1 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__TierPurchasePopup___Cancel_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__TierPurchasePopup->static_fields->__f__am_cache1 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__TierPurchasePopup->static_fields->__f__am_cache1;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  return;
}


/* Void HandleSuccessfulPurchase() */

void Assembly-CSharp.dll::TierPurchasePopup::TierPurchasePopup_HandleSuccessfulPurchase
               (TierPurchasePopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count(StringLiteral_Purchase_Tier,1,(MethodInfo *)0x0);
  arg1 = (Object *)func_?(TypeInfo__MV__Common__GamePassTier,&stack0xfffffffb);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  key = mscorlib.dll::System::String::String_Concat
                  ((Object *)StringLiteral_Purchase_Tier_,arg1,(MethodInfo *)0x0);
  StatHatWrapper::StatHatWrapper_Count(key,1,(MethodInfo *)0x0);
  StatHatWrapper::StatHatWrapper_Count
            (StringLiteral_Purchase_Tier_GoldSpent,(this->fields).price,(MethodInfo *)0x0);
  this_00 = (AvatarMotor_OnActiveBounceDelegate *)(this->fields).OnPurchaseSuccessful;
  if (this_00 != (AvatarMotor_OnActiveBounceDelegate *)0x0) {
    AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
              (this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Initialize(GamePassTier, Int32, UnityAction) */

void Assembly-CSharp.dll::TierPurchasePopup::TierPurchasePopup_Initialize
               (TierPurchasePopup *this,GamePassTier__Enum tierToPurchase,int32_t price,
               UnityAction *OnPurchaseSuccessful,MethodInfo *method)

{
  pTVar1 = (this->fields).tierText;
  (this->fields).price = price;
  (this->fields).OnPurchaseSuccessful = OnPurchaseSuccessful;
  (this->fields).tierToPurchase = (undefined1)tierToPurchase;
  tierToPurchase = tierToPurchase & 0xff;
  uVar2 = func_?(&tierToPurchase,0);
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,uVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar1 = (this->fields).priceText;
    uVar2 = func_?(&price,0);
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,uVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ProductPurchaseResponseHandler(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::TierPurchasePopup::TierPurchasePopup_ProductPurchaseResponseHandler
               (TierPurchasePopup *this,int32_t returnCode,
               Dictionary_2_System_Object_System_Object_ *purchaseResponseData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TierPurchasePopup___ProductPurchaseResponseHandler_c__AnonStorey0;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields)._._._._.m_CachedPtr = (void *)returnCode;
    (this_01->fields).state = (int32_t)this;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pAVar2 = (pMVar1->fields).PurchaseProductResponseHandler;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,
                 MethodInfo__TierPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 ,
                 MethodInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Action_System__Object__void__
                );
      pAVar4 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                *)mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)pAVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
      pAVar2 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                *)0x0;
      if (pAVar4 != (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                     *)0x0) {
        if (pAVar4->klass ==
            TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
           ) {
          pAVar2 = pAVar4;
        }
        if (pAVar2 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                       *)0x0) goto code_?;
      }
      (pMVar1->fields).PurchaseProductResponseHandler = pAVar2;
      returnCode = (int32_t)UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_1_get_gameObject((Component_1 *)this,(MethodInfo *)0x0);
      if (TypeInfo__TierPurchasePopup->static_fields->__f__am_cache2 ==
          (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        returnCode = (int32_t)
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
        ;
        this = (TierPurchasePopup *)
               MethodInfo__TierPurchasePopup___ProductPurchaseResponseHandler_m__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
        ;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)0x0,
                   MethodInfo__TierPurchasePopup___ProductPurchaseResponseHandler_m__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        TypeInfo__TierPurchasePopup->static_fields->__f__am_cache2 =
             (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar3;
      }
      pEVar5 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
               TypeInfo__TierPurchasePopup->static_fields->__f__am_cache2;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                ((GameObject *)returnCode,(BaseEventData *)0x0,pEVar5,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (TypeInfo__TierPurchasePopup->static_fields->__f__am_cache3 ==
          (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)0x0,
                   MethodInfo__TierPurchasePopup___ProductPurchaseResponseHandler_m__3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        TypeInfo__TierPurchasePopup->static_fields->__f__am_cache3 =
             (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar3;
      }
      pEVar5 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
               TypeInfo__TierPurchasePopup->static_fields->__f__am_cache3;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar6,(BaseEventData *)0x0,pEVar5,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      if ((this_01->fields)._._._._.m_CachedPtr != (void *)0x0) {
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)this_01,
                   MethodInfo__TierPurchasePopup___ProductPurchaseResponseHandler_c__AnonStorey0____m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                  );
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (pGVar6,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                  );
        return;
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
        func_?();
      }
      StatHatWrapper::StatHatWrapper_Count(StringLiteral_Purchase_Tier,1,(MethodInfo *)0x0);
      arg1 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      key = mscorlib.dll::System::String::String_Concat
                      ((Object *)StringLiteral_Purchase_Tier_,arg1,(MethodInfo *)0x0);
      StatHatWrapper::StatHatWrapper_Count(key,1,(MethodInfo *)0x0);
      StatHatWrapper::StatHatWrapper_Count
                (StringLiteral_Purchase_Tier_GoldSpent,(this->fields).price,(MethodInfo *)0x0);
      this_00 = (AvatarMotor_OnActiveBounceDelegate *)(this->fields).OnPurchaseSuccessful;
      if (this_00 != (AvatarMotor_OnActiveBounceDelegate *)0x0) {
        AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
                  (this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Purchase() */

void Assembly-CSharp.dll::TierPurchasePopup::TierPurchasePopup_Purchase
               (TierPurchasePopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__TierPurchasePopup->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar1,(Object *)0x0,
               MethodInfo__TierPurchasePopup___Purchase_m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
              );
    TypeInfo__TierPurchasePopup->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar1;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__TierPurchasePopup->static_fields->__f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 != (MVNetworkGame *)0x0) {
    pAVar3 = (pMVar2->fields).PurchaseProductResponseHandler;
    pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar1,(Object *)&UNK_?,
               MethodInfo__TierPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,
               MethodInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Action_System__Object__void__
              );
    pAVar4 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar3,(Delegate *)pUVar1,(MethodInfo *)0x0);
    pAVar3 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             0x0;
    if (pAVar4 != (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                   *)0x0) {
      if (pAVar4->klass ==
          TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
         ) {
        pAVar3 = pAVar4;
      }
      pAVar5 = 
      TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
      ;
      if (pAVar3 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                     *)0x0) goto code_?;
    }
    (pMVar2->fields).PurchaseProductResponseHandler = pAVar3;
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PurchaseTier
                (this_00,(uint)UNK_?,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pAVar4 = extraout_ECX;
  pAVar5 = extraout_EDX;
code_?:
  func_?(pAVar4,pAVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void <Cancel>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::TierPurchasePopup::TierPurchasePopup__Cancel_m__1
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


/* Void <ProductPurchaseResponseHandler>m__2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::TierPurchasePopup::TierPurchasePopup__ProductPurchaseResponseHandler_m__2
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


/* Void <ProductPurchaseResponseHandler>m__3(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::TierPurchasePopup::TierPurchasePopup__ProductPurchaseResponseHandler_m__3
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


/* Void <Purchase>m__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::TierPurchasePopup::TierPurchasePopup__Purchase_m__0
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IModalPopupCreator *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


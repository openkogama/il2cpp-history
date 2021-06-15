
/* Void Exit() */

void Assembly-CSharp.dll::BundlePurchasePopUp::BundlePurchasePopUp_Exit
               (BundlePurchasePopUp *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).resultCallback;
  if (this_00 != (UnityAction_1_System_Boolean_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Boolean]::
    UnityAction_1_System_Boolean__Invoke
              (this_00,0,MethodInfo__UnityEngine__Events__UnityAction<bool>__Invoke_bool_);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void HandleNotOwnedUI() */

void Assembly-CSharp.dll::BundlePurchasePopUp::BundlePurchasePopUp_HandleNotOwnedUI
               (BundlePurchasePopUp *this,MethodInfo *method)

{
  BundlePurchasePopUp_HandlePrices(this,(this->fields).bundleDataClient,(MethodInfo *)0x0);
  pAVar1 = (this->fields).bundleDataClient;
  if ((pAVar1 != (AccessoryBundleClient *)0x0) &&
     (pAVar2 = (this->fields).timeLimitDisplayer, pAVar2 != (AccessoryTimeLimitDisplayer *)0x0)) {
    MaterialDescription::MaterialDescription_set_SpecialProperties
              ((MaterialDescription *)pAVar2,(BitArray *)(pAVar1->fields)._.timelimit,
               (MethodInfo *)0x0);
    pAVar2 = (this->fields).timeLimitDisplayer;
    if (pAVar2 != (AccessoryTimeLimitDisplayer *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)pAVar2,(MethodInfo *)0x0);
      pAVar1 = (this->fields).bundleDataClient;
      if ((pAVar1 != (AccessoryBundleClient *)0x0) &&
         (this_00 = (pAVar1->fields)._.timelimit, this_00 != (AccessoryTimelimit *)0x0)) {
        value = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
                AccessoryTimelimit_get_IsTimeLimited(this_00,(MethodInfo *)0x0);
        if (this_01 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_01,value,(MethodInfo *)0x0);
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


/* Void HandlePrices(AccessoryBundleClient) */

void Assembly-CSharp.dll::BundlePurchasePopUp::BundlePurchasePopUp_HandlePrices
               (BundlePurchasePopUp *this,AccessoryBundleClient *bundleDataClient,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (bundleDataClient != (AccessoryBundleClient *)0x0) {
    iVar1 = (bundleDataClient->fields)._.discount;
    piVar2 = &(this->fields).originalPrice;
    pTVar3 = (this->fields).originalPriceText;
    if ((pTVar3 != (Text *)0x0) &&
       (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pTVar3,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,0 < iVar1,(MethodInfo *)0x0);
      pGVar4 = (this->fields).discountTag;
      if (pGVar4 != (GameObject *)0x0) {
        uVar5 = (uint)(0 < iVar1);
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar4,0 < iVar1,(MethodInfo *)0x0);
        if (0 < (int)uVar5) {
          pTVar3 = (this->fields).discountTagText;
          pSVar6 = StringLiteral_FREE;
          if ((int)uVar5 < 100) {
            pSVar6 = (String *)func_?();
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            pSVar6 = mscorlib.dll::System::String::String_Concat_3
                               (::StringLiteral__,pSVar6,::StringLiteral__,(MethodInfo *)0x0);
          }
          if (pTVar3 == (Text *)0x0) goto code_?;
          (*(code *)(pTVar3->klass->vtable).set_text.method)
                    (pTVar3,pSVar6,
                     (pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
          iVar7 = *piVar2;
          if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Mathf);
          }
          iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                            (((float)(int)uVar5 / _UNK_?) * (float)iVar7,(MethodInfo *)0x0);
          pTVar3 = (this->fields).originalPriceText;
          pGVar4 = (GameObject *)(*piVar2 - iVar1);
          pSVar6 = (String *)func_?(piVar2,StringLiteral_N0,0);
          if ((pSVar6 == (String *)0x0) ||
             (pSVar6 = mscorlib.dll::System::String::String_Replace_1
                                 (pSVar6,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
             pTVar3 == (Text *)0x0)) goto code_?;
          (*(code *)(pTVar3->klass->vtable).set_text.method)
                    (pTVar3,pSVar6,
                     (pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
        }
        this_00 = (this->fields).freeLabel;
        if (this_00 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_00,pGVar4 == (GameObject *)0x0,(MethodInfo *)0x0);
          if (pGVar4 == (GameObject *)0x0) {
            pTVar3 = (this->fields).originalPriceText;
            if ((pTVar3 == (Text *)0x0) ||
               (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_gameObject((Component_1 *)pTVar3,(MethodInfo *)0x0),
               pGVar4 == (GameObject *)0x0)) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar4,0,(MethodInfo *)0x0);
            pGVar4 = (this->fields).discountTag;
            if (pGVar4 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar4,0,(MethodInfo *)0x0);
            pTVar3 = (this->fields).priceText;
            if ((pTVar3 == (Text *)0x0) ||
               (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_gameObject((Component_1 *)pTVar3,(MethodInfo *)0x0),
               pGVar4 == (GameObject *)0x0)) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar4,0,(MethodInfo *)0x0);
          }
          pTVar3 = (this->fields).priceText;
          pSVar6 = (String *)func_?(&stack0xfffffff4,StringLiteral_N0,0);
          if ((pSVar6 != (String *)0x0) &&
             (pSVar6 = mscorlib.dll::System::String::String_Replace_1
                                 (pSVar6,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
             pTVar3 != (Text *)0x0)) {
            (*(code *)(pTVar3->klass->vtable).set_text.method)
                      (pTVar3,pSVar6,
                       (pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Initialize(AccessoryBundleClient, Int32, Int32, UnityAction`1[System.Boolean]) */

void Assembly-CSharp.dll::BundlePurchasePopUp::BundlePurchasePopUp_Initialize
               (BundlePurchasePopUp *this,AccessoryBundleClient *bundleDataClient,int32_t price,
               int32_t originalPrice,UnityAction_1_System_Boolean_ *resultCallback,
               MethodInfo *method)

{
  pTVar1 = (this->fields).priceText;
  (this->fields).bundleDataClient = bundleDataClient;
  (this->fields).originalPrice = originalPrice;
  (this->fields).resultCallback = resultCallback;
  uVar2 = func_?(&price,0);
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,uVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    BundlePurchasePopUp_HandlePrices(this,(this->fields).bundleDataClient,(MethodInfo *)0x0);
    pAVar3 = (this->fields).bundleDataClient;
    if ((pAVar3 != (AccessoryBundleClient *)0x0) &&
       (pAVar4 = (this->fields).timeLimitDisplayer, pAVar4 != (AccessoryTimeLimitDisplayer *)0x0)) {
      MaterialDescription::MaterialDescription_set_SpecialProperties
                ((MaterialDescription *)pAVar4,(BitArray *)(pAVar3->fields)._.timelimit,
                 (MethodInfo *)0x0);
      pAVar4 = (this->fields).timeLimitDisplayer;
      if (pAVar4 != (AccessoryTimeLimitDisplayer *)0x0) {
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)pAVar4,(MethodInfo *)0x0);
        pAVar3 = (this->fields).bundleDataClient;
        if ((pAVar3 != (AccessoryBundleClient *)0x0) &&
           (this_00 = (pAVar3->fields)._.timelimit, this_00 != (AccessoryTimelimit *)0x0)) {
          value = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
                  AccessoryTimelimit_get_IsTimeLimited(this_00,(MethodInfo *)0x0);
          if (this_01 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (this_01,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnGoldPurchaseDialogResult(Boolean) */

void Assembly-CSharp.dll::BundlePurchasePopUp::BundlePurchasePopUp_OnGoldPurchaseDialogResult
               (BundlePurchasePopUp *this,bool result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__BundlePurchasePopUp->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__BundlePurchasePopUp___OnGoldPurchaseDialogResult_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__BundlePurchasePopUp->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__BundlePurchasePopUp->static_fields->__f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (result == 0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
  if (pGVar1 != (GameSessionData *)0x0) {
    url = (pGVar1->fields).purchaseGoldURL;
    if ((((uint)(TypeInfo__BrowserComm->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__BrowserComm->_1).cctor_started == 0)) {
      func_?();
    }
    BrowserComm::BrowserComm_ExecuteBrowserRequest(url,(MethodInfo *)0x0);
    return;
  }
  uStack2 = 0;
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Pop() */

void Assembly-CSharp.dll::BundlePurchasePopUp::BundlePurchasePopUp_Pop
               (BundlePurchasePopUp *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__BundlePurchasePopUp->static_fields->__f__am_cache1 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__BundlePurchasePopUp___Pop_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__BundlePurchasePopUp->static_fields->__f__am_cache1 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__BundlePurchasePopUp->static_fields->__f__am_cache1;
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


/* Void Purchase() */

void Assembly-CSharp.dll::BundlePurchasePopUp::BundlePurchasePopUp_Purchase
               (BundlePurchasePopUp *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).resultCallback;
  if (this_00 != (UnityAction_1_System_Boolean_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Boolean]::
    UnityAction_1_System_Boolean__Invoke
              (this_00,1,MethodInfo__UnityEngine__Events__UnityAction<bool>__Invoke_bool_);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnGoldPurchaseDialogResult>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::BundlePurchasePopUp::BundlePurchasePopUp__OnGoldPurchaseDialogResult_m__0
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


/* Void <Pop>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::BundlePurchasePopUp::BundlePurchasePopUp__Pop_m__1
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


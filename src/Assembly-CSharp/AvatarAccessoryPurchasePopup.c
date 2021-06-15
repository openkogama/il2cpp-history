
/* Void HandleInsufficientResources(String, String) */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup::
     AvatarAccessoryPurchasePopup_HandleInsufficientResources
               (AvatarAccessoryPurchasePopup *this,String *header,String *buttonText,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AvatarAccessoryPurchasePopup___HandleInsufficientResources_c__AnonStorey1;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  pAVar1 = (this->fields).insufficientResourcesPopup;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pAVar1,
                      AvatarAccessoryErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<AvatarAccessoryErrorPopup>_AvatarAccessoryErrorPopup_
                     );
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = pXVar2;
    header_00 = (String *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)this,(MethodInfo *)0x0);
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this_00,
               MethodInfo__AvatarAccessoryPurchasePopup___HandleInsufficientResources_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              ((GameObject *)header_00,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pAVar1 = (this_00->fields)._._._._.m_CachedPtr;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__AvatarAccessoryPurchasePopup__OnGoldPurchaseDialogResult_bool_,
               MethodInfo__UnityEngine__Events__UnityAction<bool>__UnityAction_System__Object__void__
              );
    if (pAVar1 != (AvatarAccessoryErrorPopup *)0x0) {
      AvatarAccessoryErrorPopup::AvatarAccessoryErrorPopup_Initialize
                (pAVar1,(UnityAction_1_System_Boolean_ *)pUVar3,(this->fields).previewImageUrl,
                 (this->fields).accessoryDataClient,header_00,(String *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandleNotOwnedUI() */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup::
     AvatarAccessoryPurchasePopup_HandleNotOwnedUI
               (AvatarAccessoryPurchasePopup *this,MethodInfo *method)

{
  AvatarAccessoryPurchasePopup_HandlePrices
            (this,(this->fields).accessoryDataClient,(MethodInfo *)0x0);
  pAVar1 = (this->fields).accessoryDataClient;
  if ((pAVar1 != (AccessoryDataClient *)0x0) &&
     (pAVar2 = (this->fields).timeLimitDisplayer, pAVar2 != (AccessoryTimeLimitDisplayer *)0x0)) {
    MaterialDescription::MaterialDescription_set_SpecialProperties
              ((MaterialDescription *)pAVar2,(BitArray *)(pAVar1->fields)._.time,(MethodInfo *)0x0);
    pAVar2 = (this->fields).timeLimitDisplayer;
    if (pAVar2 != (AccessoryTimeLimitDisplayer *)0x0) {
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pAVar2,(MethodInfo *)0x0);
      pAVar1 = (this->fields).accessoryDataClient;
      if ((pAVar1 != (AccessoryDataClient *)0x0) &&
         (this_00 = (pAVar1->fields)._.time, this_00 != (AccessoryTimelimit *)0x0)) {
        value = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
                AccessoryTimelimit_get_IsTimeLimited(this_00,(MethodInfo *)0x0);
        if (pGVar3 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,value,(MethodInfo *)0x0);
          pAVar1 = (this->fields).accessoryDataClient;
          if ((pAVar1 != (AccessoryDataClient *)0x0) &&
             (pGVar3 = (this->fields).newAccessoryImage, pGVar3 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar3,(pAVar1->fields)._.iNew,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandlePrices(AccessoryDataClient) */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup::AvatarAccessoryPurchasePopup_HandlePrices
               (AvatarAccessoryPurchasePopup *this,AccessoryDataClient *streamingAssetInfo,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (streamingAssetInfo != (AccessoryDataClient *)0x0) {
    iVar1 = (streamingAssetInfo->fields)._.dsc;
    pTVar2 = (this->fields).originalPriceText;
    if ((pTVar2 != (Text *)0x0) &&
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pTVar2,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,0 < iVar1,(MethodInfo *)0x0);
      pGVar3 = (this->fields).discountTag;
      if (pGVar3 != (GameObject *)0x0) {
        puVar4 = (undefined *)(uint)(0 < iVar1);
        puVar5 = &UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0 < iVar1,(MethodInfo *)0x0);
        if (0 < (int)puVar4) {
          pTVar2 = (this->fields).discountTagText;
          pSVar6 = StringLiteral_FREE;
          if ((int)puVar4 < 100) {
            puVar4 = &UNK_?;
            pSVar6 = (String *)func_?();
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            pSVar6 = mscorlib.dll::System::String::String_Concat_3
                               (::StringLiteral__,pSVar6,::StringLiteral__,(MethodInfo *)0x0);
          }
          if (pTVar2 == (Text *)0x0) goto code_?;
          (*(code *)(pTVar2->klass->vtable).set_text.method)
                    (pTVar2,pSVar6,
                     (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
          puVar7 = puVar5;
          if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Mathf);
          }
          iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                            (((float)(int)puVar4 / _UNK_?) * (float)(int)puVar5,
                             (MethodInfo *)0x0);
          pTVar2 = (this->fields).originalPriceText;
          pGVar3 = (GameObject *)(puVar7 + -iVar1);
          pSVar6 = (String *)func_?(&stack0xfffffff0,StringLiteral_N0,0);
          if ((pSVar6 == (String *)0x0) ||
             (pSVar6 = mscorlib.dll::System::String::String_Replace_1
                                 (pSVar6,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
             pTVar2 == (Text *)0x0)) goto code_?;
          (*(code *)(pTVar2->klass->vtable).set_text.method)
                    (pTVar2,pSVar6,
                     (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
        }
        this_00 = (this->fields).freeItemTag;
        if (this_00 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_00,pGVar3 == (GameObject *)0x0,(MethodInfo *)0x0);
          if (pGVar3 == (GameObject *)0x0) {
            pTVar2 = (this->fields).originalPriceText;
            if ((pTVar2 == (Text *)0x0) ||
               (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_gameObject((Component_1 *)pTVar2,(MethodInfo *)0x0),
               pGVar3 == (GameObject *)0x0)) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar3,0,(MethodInfo *)0x0);
            pGVar3 = (this->fields).discountTag;
            if (pGVar3 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar3,0,(MethodInfo *)0x0);
            pTVar2 = (this->fields).priceText;
            if ((pTVar2 == (Text *)0x0) ||
               (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_gameObject((Component_1 *)pTVar2,(MethodInfo *)0x0),
               pGVar3 == (GameObject *)0x0)) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar3,0,(MethodInfo *)0x0);
          }
          pTVar2 = (this->fields).priceText;
          pSVar6 = (String *)func_?(&stack0xfffffff4,StringLiteral_N0,0);
          if ((pSVar6 != (String *)0x0) &&
             (pSVar6 = mscorlib.dll::System::String::String_Replace_1
                                 (pSVar6,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
             pTVar2 != (Text *)0x0)) {
            (*(code *)(pTVar2->klass->vtable).set_text.method)
                      (pTVar2,pSVar6,
                       (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
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


/* Void HandleSuccessfulPurchase(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup::
     AvatarAccessoryPurchasePopup_HandleSuccessfulPurchase
               (AvatarAccessoryPurchasePopup *this,
               Dictionary_2_System_Object_System_Object_ *purchaseResponseData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  key = (Type *)func_?(TypeInfo__System__Byte,&stack0xfffffffb,CONCAT13(0x69,(int3)in_ECX))
  ;
  if (purchaseResponseData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)purchaseResponseData,key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar1 != (Pool *)0x0) {
      if ((pPVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar2 = (int32_t *)func_?();
        streamingAssetId = *piVar2;
        if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
          func_?();
        }
        AccessoryDataManager::AccessoryDataManager_SetToOwns(streamingAssetId,(MethodInfo *)0x0);
        AvatarAccessoryPurchasePopup_SuccessfulPopupCallBack
                  (this,streamingAssetId,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize(AccessoryDataClient, String) */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup::AvatarAccessoryPurchasePopup_Initialize
               (AvatarAccessoryPurchasePopup *this,AccessoryDataClient *accessoryDataClient,
               String *previewImageUrl,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).loadingWheel;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,1,(MethodInfo *)0x0);
    pSVar2 = (this->fields).preview;
    if (pSVar2 != (StreamedSpriteToImageManual *)0x0) {
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pSVar2,(MethodInfo *)0x0);
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,0,(MethodInfo *)0x0);
        pSVar2 = (this->fields).preview;
        this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_02,(Object *)this,
                   MethodInfo__AvatarAccessoryPurchasePopup__OnPreviewImageDownLoaded__,
                   (MethodInfo *)0x0);
        if (pSVar2 != (StreamedSpriteToImageManual *)0x0) {
          StreamedSpriteToImageManual::StreamedSpriteToImageManual_Download
                    (pSVar2,previewImageUrl,(UnityAction *)this_02,(MethodInfo *)0x0);
          pTVar3 = (this->fields).priceText;
          (this->fields).accessoryDataClient = unaff_EBX;
          if (unaff_EBX != (AccessoryDataClient *)0x0) {
            func_?();
            if (pTVar3 != (Text *)0x0) {
              (*(code *)(pTVar3->klass->vtable).set_text.method)();
              (this->fields).price = (unaff_EBX->fields)._.cost;
              (this->fields).previewImageUrl = previewImageUrl;
              this_00 = (this->fields).accessoryItemBackground;
              if (this_00 != (AccessoryItemBackground *)0x0) {
                AccessoryItemBackground::AccessoryItemBackground_Initialize
                          (this_00,unaff_EBX,(MethodInfo *)0x0);
                AvatarAccessoryPurchasePopup_HandlePrices
                          (this,(this->fields).accessoryDataClient,(MethodInfo *)0x0);
                pAVar4 = (this->fields).accessoryDataClient;
                if ((pAVar4 != (AccessoryDataClient *)0x0) &&
                   (pAVar5 = (this->fields).timeLimitDisplayer,
                   pAVar5 != (AccessoryTimeLimitDisplayer *)0x0)) {
                  MaterialDescription::MaterialDescription_set_SpecialProperties
                            ((MaterialDescription *)pAVar5,(BitArray *)(pAVar4->fields)._.time,
                             (MethodInfo *)0x0);
                  pAVar5 = (this->fields).timeLimitDisplayer;
                  if (pAVar5 != (AccessoryTimeLimitDisplayer *)0x0) {
                    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_1_get_gameObject((Component_1 *)pAVar5,(MethodInfo *)0x0);
                    pAVar4 = (this->fields).accessoryDataClient;
                    if ((pAVar4 != (AccessoryDataClient *)0x0) &&
                       (this_01 = (pAVar4->fields)._.time, this_01 != (AccessoryTimelimit *)0x0)) {
                      value = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
                              AccessoryTimelimit_get_IsTimeLimited(this_01,(MethodInfo *)0x0);
                      if (pGVar1 != (GameObject *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (pGVar1,value,(MethodInfo *)0x0);
                        pAVar4 = (this->fields).accessoryDataClient;
                        if ((pAVar4 != (AccessoryDataClient *)0x0) &&
                           (pGVar1 = (this->fields).newAccessoryImage, pGVar1 != (GameObject *)0x0))
                        {
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (pGVar1,(pAVar4->fields)._.iNew,(MethodInfo *)0x0);
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


/* Void OnGoldPurchaseDialogResult(Boolean) */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup::
     AvatarAccessoryPurchasePopup_OnGoldPurchaseDialogResult
               (AvatarAccessoryPurchasePopup *this,bool result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__AvatarAccessoryPurchasePopup->static_fields->__f__am_cache2 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__AvatarAccessoryPurchasePopup___OnGoldPurchaseDialogResult_m__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__AvatarAccessoryPurchasePopup->static_fields->__f__am_cache2 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__AvatarAccessoryPurchasePopup->static_fields->__f__am_cache2;
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


/* Void OnPreviewImageDownLoaded() */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup::
     AvatarAccessoryPurchasePopup_OnPreviewImageDownLoaded
               (AvatarAccessoryPurchasePopup *this,MethodInfo *method)

{
  pGVar1 = (this->fields).loadingWheel;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields).emptyFrame;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      this_00 = (this->fields).preview;
      if (this_00 != (StreamedSpriteToImageManual *)0x0) {
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this_00,(MethodInfo *)0x0);
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Pop() */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup::AvatarAccessoryPurchasePopup_Pop
               (AvatarAccessoryPurchasePopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__AvatarAccessoryPurchasePopup->static_fields->__f__am_cache3 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__AvatarAccessoryPurchasePopup___Pop_m__3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__AvatarAccessoryPurchasePopup->static_fields->__f__am_cache3 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__AvatarAccessoryPurchasePopup->static_fields->__f__am_cache3;
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


/* Void ProductPurchaseResponseHandler(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup::
     AvatarAccessoryPurchasePopup_ProductPurchaseResponseHandler
               (AvatarAccessoryPurchasePopup *this,int32_t returnCode,
               Dictionary_2_System_Object_System_Object_ *purchaseResponseData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AvatarAccessoryPurchasePopup___ProductPurchaseResponseHandler_c__AnonStorey0
  ;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 == (ScaleAnimationBase *)0x0) goto code_?;
  (this_00->fields)._._._._.m_CachedPtr = (void *)returnCode;
  (this_00->fields).state = (int32_t)this;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
  pAVar2 = (pMVar1->fields).PurchaseProductResponseHandler;
  pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(
                          TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                          );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar3,(Object *)this,
             MethodInfo__AvatarAccessoryPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,
             MethodInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Action_System__Object__void__
            );
  pAVar4 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
  pAVar2 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
           0x0;
  if (pAVar4 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                 *)0x0) {
code_?:
    (pMVar1->fields).PurchaseProductResponseHandler = pAVar2;
    returnCode = (int32_t)UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_gameObject((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__AvatarAccessoryPurchasePopup->static_fields->__f__am_cache1 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      returnCode = (int32_t)
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
      ;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)0x0,
                 MethodInfo__AvatarAccessoryPurchasePopup___ProductPurchaseResponseHandler_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      TypeInfo__AvatarAccessoryPurchasePopup->static_fields->__f__am_cache1 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar3;
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__AvatarAccessoryPurchasePopup->static_fields->__f__am_cache1;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              ((GameObject *)returnCode,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pvVar5 = (this_00->fields)._._._._.m_CachedPtr;
    if (pvVar5 != (void *)0x0) {
      if (pvVar5 == (void *)0x1) {
        header = TM::TM__(StringLiteral_Not_enough_gold,(MethodInfo *)0x0);
        pSVar6 = StringLiteral_Get_gold;
      }
      else {
        if (pvVar5 != (void *)0x6) {
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
          pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar3,(Object *)this_00,
                     MethodInfo__AvatarAccessoryPurchasePopup___ProductPurchaseResponseHandler_c__AnonStorey0____m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                    );
          if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy_63
                    (root,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                    );
          return;
        }
        header = TM::TM__(StringLiteral_Too_low_level,(MethodInfo *)0x0);
        pSVar6 = StringLiteral_Get_XP;
      }
      pSVar6 = TM::TM__(pSVar6,(MethodInfo *)0x0);
      AvatarAccessoryPurchasePopup_HandleInsufficientResources(this,header,pSVar6,(MethodInfo *)0x0)
      ;
      return;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    key = (Type *)func_?();
    pPVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)&UNK_?,key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar8 = CONCAT44(TypeInfo__System__Int32,pPVar7);
    if (pPVar7 == (Pool *)0x0) goto code_?;
    if ((pPVar7->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      piVar9 = (int32_t *)func_?(pPVar7);
      streamingAssetId = *piVar9;
      if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__AccessoryDataManager);
      }
      AccessoryDataManager::AccessoryDataManager_SetToOwns(streamingAssetId,(MethodInfo *)0x0);
      AvatarAccessoryPurchasePopup_SuccessfulPopupCallBack(this,streamingAssetId,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    if (pAVar4->klass ==
        TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
       ) {
      pAVar2 = pAVar4;
    }
    if (pAVar2 != (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                   *)0x0) goto code_?;
    uVar8 = func_?();
  }
  func_?(uVar8);
code_?:
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Purchase() */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup::AvatarAccessoryPurchasePopup_Purchase
               (AvatarAccessoryPurchasePopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__AvatarAccessoryPurchasePopup->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar1,(Object *)0x0,
               MethodInfo__AvatarAccessoryPurchasePopup___Purchase_m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
              );
    TypeInfo__AvatarAccessoryPurchasePopup->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar1;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__AvatarAccessoryPurchasePopup->static_fields->__f__am_cache0;
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
               MethodInfo__AvatarAccessoryPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
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
    if ((_UNK_? != 0) && (this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PurchaseAvatarAccessory
                (this_00,*(int32_t *)(_UNK_? + 0xc),(MethodInfo *)0x0);
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


/* Void SuccessfulPopupCallBack(Int32) */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup::
     AvatarAccessoryPurchasePopup_SuccessfulPopupCallBack
               (AvatarAccessoryPurchasePopup *this,int32_t streamingAssetId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AvatarAccessoryPurchasePopup___SuccessfulPopupCallBack_c__AnonStorey2;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 == (ScaleAnimationBase *)0x0) {
code_?:
    func_?(0);
  }
  else {
    (this_00->fields).state = (int32_t)this;
    if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__AccessoryDataManager);
    }
    pAVar1 = AccessoryDataManager::AccessoryDataManager_GetAccessoryDataByStreamingAssetId
                       (streamingAssetId,(MethodInfo *)0x0);
    previewAccessories =
         (AccessoryDataClient__Array *)func_?(TypeInfo__AccessoryDataClient,1);
    if (previewAccessories == (AccessoryDataClient__Array *)0x0) goto code_?;
    if (pAVar1 == (AccessoryDataClient *)0x0) {
code_?:
      if (previewAccessories->max_length == 0) goto code_?;
      previewAccessories->vector[0] = pAVar1;
      pPVar2 = (this->fields).successPreviewer;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pPVar2 = (PurchasedAccessoryPreviewer *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         ((XpBoostParticlePreviewer *)pPVar2,
                          PurchasedAccessoryPreviewer_MethodInfo__UnityEngine__Object__Instantiate<PurchasedAccessoryPreviewer>_PurchasedAccessoryPreviewer_
                         );
      (this_00->fields)._._._._.m_CachedPtr = pPVar2;
      if (pPVar2 != (PurchasedAccessoryPreviewer *)0x0) {
        PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_Initialize
                  (pPVar2,previewAccessories,(MethodInfo *)0x0);
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
        this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(
                                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                    );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_01,(Object *)this_00,
                   MethodInfo__AvatarAccessoryPurchasePopup___SuccessfulPopupCallBack_c__AnonStorey2____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (root,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
      goto code_?;
    }
    iVar3 = func_?(pAVar1,(previewAccessories->klass->_0).element_class);
    if (iVar3 != 0) goto code_?;
  }
  uVar4 = func_?(0,0);
  func_?(uVar4);
code_?:
  uVar4 = func_?(0,0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <OnGoldPurchaseDialogResult>m__2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup::
     AvatarAccessoryPurchasePopup__OnGoldPurchaseDialogResult_m__2
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


/* Void <Pop>m__3(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup::AvatarAccessoryPurchasePopup__Pop_m__3
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


/* Void <ProductPurchaseResponseHandler>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup::
     AvatarAccessoryPurchasePopup__ProductPurchaseResponseHandler_m__1
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

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup::AvatarAccessoryPurchasePopup__Purchase_m__0
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


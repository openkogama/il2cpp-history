
/* Void HandleInsufficientResources(String, String) */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup::
     AvatarAccessoryPurchasePopup_HandleInsufficientResources
               (AvatarAccessoryPurchasePopup *this,String *header,String *buttonText,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__AvatarAccessoryPurchasePopup__OnGoldPurchaseDialogResult_bool_);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    AvatarAccessoryErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<AvatarAccessoryErrorPopup>_AvatarAccessoryErrorPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__AvatarAccessoryPurchasePopup____c__DisplayClass20_0___HandleInsufficientResources_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AvatarAccessoryPurchasePopup____c__DisplayClass20_0);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<bool>);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AvatarAccessoryPurchasePopup____c__DisplayClass20_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).insufficientResourcesPopup;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      AvatarAccessoryErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<AvatarAccessoryErrorPopup>_AvatarAccessoryErrorPopup_
                     );
  if (value != (Object *)0x0) {
    pOVar2 = value + 1;
    pOVar2->klass = pOVar1;
    func_?(pOVar2,pOVar1);
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__AvatarAccessoryPurchasePopup____c__DisplayClass20_0___HandleInsufficientResources_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar3,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pUVar4 = TypeInfo__UnityEngine__Events__UnityAction<bool>;
    pOVar1 = pOVar2->klass;
    this_04 = (Il2CppClass *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              ((UnityAction_1_System_Int32Enum_ *)this_04,(Object *)this,
               MethodInfo__AvatarAccessoryPurchasePopup__OnGoldPurchaseDialogResult_bool_,
               (MethodInfo *)0x0);
    url = (this->fields).previewImageUrl;
    if (pOVar1 != (Object__Class *)0x0) {
      if (cRam_? == '\0') {
        func_?(&MethodInfo__AvatarAccessoryErrorPopup__OnPreviewImageDownLoaded__);
        func_?(&TypeInfo__UnityEngine__Events__UnityAction);
        cRam_? = '\x01';
      }
      piVar5 = *(int **)&(pOVar1->_0).this_arg.attrs;
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0x318))(piVar5,pUVar4,*(undefined4 *)(*piVar5 + 0x31c));
        pIVar6 = (pOVar1->_0).this_arg.data.array;
        if (pIVar6 != (Il2CppArrayType *)0x0) {
          pIVar7 = pIVar6->etype;
          uVar8._0_2_ = pIVar7[99].attrs;
          uVar8._2_1_ = pIVar7[99].type;
          uVar8._3_1_ = pIVar7[99].field_0x7;
          (*(code *)pIVar7[99].data)(pIVar6,&UNK_?,uVar8);
          this_00 = (pOVar1->_0).element_class;
          if (this_00 != (Il2CppClass *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      ((GameObject *)this_00,1,(MethodInfo *)0x0);
            this_01 = (Component *)(pOVar1->_0).byval_arg.data.typeHandle;
            if (this_01 != (Component *)0x0) {
              pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_01,(MethodInfo *)0x0);
              if (pGVar3 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar3,0,(MethodInfo *)0x0);
                this_02 = (StreamedSpriteToImageManual *)(pOVar1->_0).byval_arg.data.typeHandle;
                this_05 = (NavMesh_OnNavMeshPreUpdate *)
                          func_?(TypeInfo__UnityEngine__Events__UnityAction);
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (this_05,(Object *)pOVar1,
                           MethodInfo__AvatarAccessoryErrorPopup__OnPreviewImageDownLoaded__,
                           (MethodInfo *)0x0);
                if (this_02 != (StreamedSpriteToImageManual *)0x0) {
                  StreamedSpriteToImageManual::StreamedSpriteToImageManual_Download
                            (this_02,url,(UnityAction *)this_05,(MethodInfo *)0x0);
                  ppIVar9 = &(pOVar1->_0).declaringType;
                  *ppIVar9 = this_04;
                  func_?(ppIVar9,this_04);
                  this_03 = *(AccessoryItemBackground **)&(pOVar1->_0).byval_arg.attrs;
                  if (this_03 != (AccessoryItemBackground *)0x0) {
                    AccessoryItemBackground::AccessoryItemBackground_Initialize
                              (this_03,(AccessoryDataClient *)0x0,(MethodInfo *)0x0);
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
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
    ppAVar3 = &(pAVar2->fields).accessoryTimeLimitData;
    *ppAVar3 = (pAVar1->fields)._.time;
    func_?(ppAVar3);
    pAVar2 = (this->fields).timeLimitDisplayer;
    if (pAVar2 != (AccessoryTimeLimitDisplayer *)0x0) {
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pAVar2,(MethodInfo *)0x0);
      pAVar1 = (this->fields).accessoryDataClient;
      if ((pAVar1 != (AccessoryDataClient *)0x0) &&
         (this_00 = (pAVar1->fields)._.time, this_00 != (AccessoryTimelimit *)0x0)) {
        value = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
                AccessoryTimelimit_get_IsTimeLimited(this_00,(MethodInfo *)0x0);
        if (pGVar4 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,value,(MethodInfo *)0x0);
          pAVar1 = (this->fields).accessoryDataClient;
          if ((pAVar1 != (AccessoryDataClient *)0x0) &&
             (pGVar4 = (this->fields).newAccessoryImage, pGVar4 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar4,(pAVar1->fields)._.iNew,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void HandlePrices(AccessoryDataClient) */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup::AvatarAccessoryPurchasePopup_HandlePrices
               (AvatarAccessoryPurchasePopup *this,AccessoryDataClient *streamingAssetInfo,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_FREE);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_N0);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if (streamingAssetInfo != (AccessoryDataClient *)0x0) {
    IVar1.m_value = (streamingAssetInfo->fields)._.dsc;
    pTVar2 = (this->fields).originalPriceText;
    if ((pTVar2 != (Text *)0x0) &&
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pTVar2,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,0 < IVar1.m_value,(MethodInfo *)0x0);
      pGVar3 = (this->fields).discountTag;
      if (pGVar3 != (GameObject *)0x0) {
        str1.m_value = 0;
        IVar4.m_value._1_3_ = 0;
        IVar4.m_value._0_1_ = 0 < IVar1.m_value;
        IVar5.m_value = (int32_t)&UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0 < IVar1.m_value,(MethodInfo *)0x0);
        if (0 < str1.m_value) {
          pTVar2 = (this->fields).discountTagText;
          pSVar6 = StringLiteral_FREE;
          if (str1.m_value < 100) {
            str1.m_value = (int32_t)mscorlib.dll::System::Int32::Int32_ToString
                                              ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
            pSVar6 = mscorlib.dll::System::String::String_Concat_4
                               (::StringLiteral__,(String *)str1.m_value,::StringLiteral__,
                                (MethodInfo *)0x0);
          }
          if (pTVar2 == (Text *)0x0) goto code_?;
          (*(code *)(pTVar2->klass->vtable).set_text.method)
                    (pTVar2,pSVar6,
                     (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
          fVar7 = (float)str1.m_value / _UNK_?;
          IVar4.m_value = IVar5.m_value;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          fVar8 = (float10)func_?((double)((float)IVar5.m_value * fVar7));
          pTVar2 = (this->fields).originalPriceText;
          IVar4.m_value = IVar4.m_value - (int)fVar8;
          pSVar6 = mscorlib.dll::System::Int32::Int32_ToString_1
                             ((Int32 *)&stack0xffffffec,StringLiteral_N0,(MethodInfo *)0x0);
          if ((pSVar6 == (String *)0x0) ||
             (pSVar6 = mscorlib.dll::System::String::String_Replace_1
                                 (pSVar6,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
             pTVar2 == (Text *)0x0)) goto code_?;
          (*(code *)(pTVar2->klass->vtable).set_text.method)(pTVar2,pSVar6);
        }
        pGVar3 = (this->fields).freeItemTag;
        if (pGVar3 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,IVar4.m_value == 0,(MethodInfo *)0x0);
          if (IVar4.m_value == 0) {
            pTVar2 = (this->fields).originalPriceText;
            if ((pTVar2 == (Text *)0x0) ||
               (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pTVar2,(MethodInfo *)0x0),
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
                         Component_get_gameObject((Component *)pTVar2,(MethodInfo *)0x0),
               pGVar3 == (GameObject *)0x0)) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar3,0,(MethodInfo *)0x0);
          }
          pTVar2 = (this->fields).priceText;
          pSVar6 = mscorlib.dll::System::Int32::Int32_ToString_1
                             ((Int32 *)&stack0xfffffff4,StringLiteral_N0,(MethodInfo *)0x0);
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
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void HandleSuccessfulPurchase(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup::
     AvatarAccessoryPurchasePopup_HandleSuccessfulPurchase
               (AvatarAccessoryPurchasePopup *this,
               Dictionary_2_System_Object_System_Object_ *purchaseResponseData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  key = (Object *)
        func_?(TypeInfo__System__Byte,&stack0xfffffffb,CONCAT13(0x69,(int3)in_ECX));
  if (purchaseResponseData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       purchaseResponseData,key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar1.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) ==
          (TypeInfo__System__Int32->_0).element_class) {
        piVar2 = (int32_t *)func_?();
        streamingAssetId = *piVar2;
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
    func_?(&MethodInfo__AvatarAccessoryPurchasePopup__OnPreviewImageDownLoaded__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).loadingWheel;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,1,(MethodInfo *)0x0);
    pSVar2 = (this->fields).preview;
    if ((pSVar2 != (StreamedSpriteToImageManual *)0x0) &&
       (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pSVar2,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      pSVar2 = (this->fields).preview;
      this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,
                 MethodInfo__AvatarAccessoryPurchasePopup__OnPreviewImageDownLoaded__,
                 (MethodInfo *)0x0);
      if (pSVar2 != (StreamedSpriteToImageManual *)0x0) {
        StreamedSpriteToImageManual::StreamedSpriteToImageManual_Download
                  (pSVar2,previewImageUrl,(UnityAction *)this_00,(MethodInfo *)0x0);
        (this->fields).accessoryDataClient = (AccessoryDataClient *)0x0;
        func_?();
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnGoldPurchaseDialogResult(Boolean) */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup::
     AvatarAccessoryPurchasePopup_OnGoldPurchaseDialogResult
               (AvatarAccessoryPurchasePopup *this,bool result,MethodInfo *method)

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
                    MethodInfo__AvatarAccessoryPurchasePopup____c___OnGoldPurchaseDialogResult_b__21_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AvatarAccessoryPurchasePopup____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__AvatarAccessoryPurchasePopup____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AvatarAccessoryPurchasePopup____c);
  }
  callbackFunction = TypeInfo__AvatarAccessoryPurchasePopup____c->static_fields->__9__21_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__AvatarAccessoryPurchasePopup____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__AvatarAccessoryPurchasePopup____c);
    }
    object = TypeInfo__AvatarAccessoryPurchasePopup____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__AvatarAccessoryPurchasePopup____c___OnGoldPurchaseDialogResult_b__21_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AvatarAccessoryPurchasePopup____c->static_fields->__9__21_0 = callbackFunction;
    func_?(&TypeInfo__AvatarAccessoryPurchasePopup____c->static_fields->__9__21_0,
                    callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (result == 0) {
    return;
  }
  if (cRam_? == '\0') {
    ppMStack1 = (MVGameControllerBase__Class **)&TypeInfo__BrowserComm;
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    ppMStack1 = &TypeInfo__MVGameControllerBase;
    func_?();
    cRam_? = '\x01';
  }
  pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar2 != (GameSessionData *)0x0) {
    url = (pGVar2->fields).purchaseGoldURL;
    if ((TypeInfo__BrowserComm->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    BrowserComm::BrowserComm_ExecuteBrowserRequest(url,(MethodInfo *)0x0);
    return;
  }
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
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_00,(MethodInfo *)0x0);
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
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__AvatarAccessoryPurchasePopup____c___Pop_b__24_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AvatarAccessoryPurchasePopup____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__AvatarAccessoryPurchasePopup____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AvatarAccessoryPurchasePopup____c);
  }
  callbackFunction = TypeInfo__AvatarAccessoryPurchasePopup____c->static_fields->__9__24_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__AvatarAccessoryPurchasePopup____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__AvatarAccessoryPurchasePopup____c);
    }
    object = TypeInfo__AvatarAccessoryPurchasePopup____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__AvatarAccessoryPurchasePopup____c___Pop_b__24_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AvatarAccessoryPurchasePopup____c->static_fields->__9__24_0 = callbackFunction;
    func_?(&TypeInfo__AvatarAccessoryPurchasePopup____c->static_fields->__9__24_0,
                    callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
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
    func_?(&
                    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    func_?(&
                    MethodInfo__AvatarAccessoryPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
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
    func_?(&
                    MethodInfo__AvatarAccessoryPurchasePopup____c___ProductPurchaseResponseHandler_b__19_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__AvatarAccessoryPurchasePopup____c__DisplayClass19_0___ProductPurchaseResponseHandler_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AvatarAccessoryPurchasePopup____c__DisplayClass19_0);
    func_?(&TypeInfo__AvatarAccessoryPurchasePopup____c);
    func_?(&StringLiteral_Too_low_level);
    func_?(&StringLiteral_Get_XP);
    func_?(&StringLiteral_Get_gold);
    func_?(&StringLiteral_Not_enough_gold);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AvatarAccessoryPurchasePopup____c__DisplayClass19_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)returnCode;
    value[1].monitor = (MonitorData *)this;
    func_?(&value[1].monitor,this);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      source = (pMVar1->fields).PurchaseProductResponseHandler;
      this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
                func_?(
                               TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
      UnityAction_2_System_Int32_System_Int32___ctor
                (this_00,(Object *)this,
                 MethodInfo__AvatarAccessoryPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 ,(MethodInfo *)0x0);
      pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)source,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pDVar2 == (Delegate *)0x0) {
        (pMVar1->fields).PurchaseProductResponseHandler =
             (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             0x0;
      }
      else {
        pDVar3 = (Delegate__Class *)func_?();
        if (pDVar3 == (Delegate__Class *)0x0) {
          uVar4 = func_?();
          func_?(uVar4);
          goto code_?;
        }
        pDVar2[3].klass = pDVar3;
        iVar5 = func_?();
        if (iVar5 == 0) goto code_?;
      }
      func_?();
      returnCode = (int32_t)UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__AvatarAccessoryPurchasePopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction = TypeInfo__AvatarAccessoryPurchasePopup____c->static_fields->__9__19_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__AvatarAccessoryPurchasePopup____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__AvatarAccessoryPurchasePopup____c->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__AvatarAccessoryPurchasePopup____c___ProductPurchaseResponseHandler_b__19_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__AvatarAccessoryPurchasePopup____c->static_fields->__9__19_0 = callbackFunction;
        returnCode = (int32_t)&UNK_?;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                ((GameObject *)returnCode,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pOVar6 = value[1].klass;
      if (pOVar6 != (Object__Class *)0x0) {
        if (pOVar6 == (Object__Class *)0x1) {
          header = TM::TM__(StringLiteral_Not_enough_gold,(MethodInfo *)0x0);
          pSVar7 = StringLiteral_Get_gold;
        }
        else {
          if (pOVar6 != (Object__Class *)0x6) {
            root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
            callbackFunction_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,value,
                       MethodInfo__AvatarAccessoryPurchasePopup____c__DisplayClass19_0___ProductPurchaseResponseHandler_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (root,(BaseEventData *)0x0,callbackFunction_00,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                      );
            return;
          }
          header = TM::TM__(StringLiteral_Too_low_level,(MethodInfo *)0x0);
          pSVar7 = StringLiteral_Get_XP;
        }
        pSVar7 = TM::TM__(pSVar7,(MethodInfo *)0x0);
        AvatarAccessoryPurchasePopup_HandleInsufficientResources
                  (this,header,pSVar7,(MethodInfo *)0x0);
        return;
      }
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      func_?();
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Purchase() */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup::AvatarAccessoryPurchasePopup_Purchase
               (AvatarAccessoryPurchasePopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    func_?(&
                    MethodInfo__AvatarAccessoryPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__AvatarAccessoryPurchasePopup____c___Purchase_b__18_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AvatarAccessoryPurchasePopup____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__AvatarAccessoryPurchasePopup____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AvatarAccessoryPurchasePopup____c);
  }
  callbackFunction = TypeInfo__AvatarAccessoryPurchasePopup____c->static_fields->__9__18_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    if ((TypeInfo__AvatarAccessoryPurchasePopup____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__AvatarAccessoryPurchasePopup____c);
    }
    object = TypeInfo__AvatarAccessoryPurchasePopup____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__AvatarAccessoryPurchasePopup____c___Purchase_b__18_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AvatarAccessoryPurchasePopup____c->static_fields->__9__18_0 = callbackFunction;
    func_?(&TypeInfo__AvatarAccessoryPurchasePopup____c->static_fields->__9__18_0,
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
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pAVar2 = (pMVar1->fields).PurchaseProductResponseHandler;
    ppAVar3 = &(pMVar1->fields).PurchaseProductResponseHandler;
    this_00 = (UnityAction_2_System_Int32_System_Int32_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (this_00,(Object *)0x0,
               MethodInfo__AvatarAccessoryPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,(MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar4 == (Delegate *)0x0) {
      *ppAVar3 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                  *)0x0;
    }
    else {
      pAVar2 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                *)func_?();
      if (pAVar2 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                     *)0x0) goto code_?;
      *ppAVar3 = pAVar2;
      iVar5 = func_?();
      if (iVar5 == 0) goto code_?;
    }
    func_?();
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if ((iRam_? != 0) && (this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PurchaseAvatarAccessory
                (this_01,*(int32_t *)(iRam_? + 0xc),(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
code_?:
  func_?();
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
    func_?(&TypeInfo__AccessoryDataClient);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    PurchasedAccessoryPreviewer_MethodInfo__UnityEngine__Object__Instantiate<PurchasedAccessoryPreviewer>_PurchasedAccessoryPreviewer_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__AvatarAccessoryPurchasePopup____c__DisplayClass23_0___SuccessfulPopupCallBack_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AvatarAccessoryPurchasePopup____c__DisplayClass23_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AvatarAccessoryPurchasePopup____c__DisplayClass23_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value == (Object *)0x0) {
code_?:
    func_?();
  }
  else {
    value[1].monitor = (MonitorData *)this;
    func_?(&value[1].monitor,this);
    pAVar1 = AccessoryDataManager::AccessoryDataManager_GetAccessoryDataByStreamingAssetId
                       (streamingAssetId,(MethodInfo *)0x0);
    previewAccessories =
         (AccessoryDataClient__Array *)func_?(TypeInfo__AccessoryDataClient,1);
    if (previewAccessories == (AccessoryDataClient__Array *)0x0) goto code_?;
    if (pAVar1 == (AccessoryDataClient *)0x0) {
code_?:
      if (previewAccessories->max_length == 0) goto code_?;
      previewAccessories->vector[0] = pAVar1;
      func_?(previewAccessories->vector,pAVar1);
      original = (this->fields).successPreviewer;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pOVar2 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original,
                          PurchasedAccessoryPreviewer_MethodInfo__UnityEngine__Object__Instantiate<PurchasedAccessoryPreviewer>_PurchasedAccessoryPreviewer_
                         );
      pOVar3 = value + 1;
      pOVar3->klass = pOVar2;
      func_?(pOVar3,pOVar2);
      if (pOVar3->klass != (Object__Class *)0x0) {
        PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_Initialize
                  ((PurchasedAccessoryPreviewer *)pOVar3->klass,previewAccessories,(MethodInfo *)0x0
                  );
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
        callbackFunction =
             (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                   MethodInfo__AvatarAccessoryPurchasePopup____c__DisplayClass23_0___SuccessfulPopupCallBack_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
      goto code_?;
    }
    iVar4 = func_?(pAVar1,(previewAccessories->klass->_0).element_class);
    if (iVar4 != 0) goto code_?;
  }
  uVar5 = func_?(0);
  func_?(uVar5);
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


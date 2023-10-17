
/* Void Initialize(Byte,
   UnityAction`2[System.Boolean,System.Collections.Generic.Dictionary`2[System.Object,System.Object]])
    */

void Assembly-CSharp.dll::MaterialPurchasePopup::MaterialPurchasePopup_Initialize
               (MaterialPurchasePopup *this,uint8_t materialID,
               UnityAction_2_System_Boolean_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
               *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MaterialDescription);
    func_?(&
                    MaterialPreviewer_MethodInfo__UnityEngine__Object__Instantiate<MaterialPreviewer>_MaterialPreviewer_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  (this->fields).callback = callback;
  (this->fields).materialID = materialID;
  func_?(&(this->fields).callback,callback);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields)._MaterialRepository_k__BackingField,
     this_00 != (MVMaterialRepository *)0x0)) {
    pMVar2 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                       (this_00,materialID,(MethodInfo *)0x0);
    pTVar3 = (this->fields).price;
    if (pMVar2 != (MVMaterial *)0x0) {
      mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&pMVar2->fields,(MethodInfo *)0x0);
      if (pTVar3 != (Text *)0x0) {
        (*(pTVar3->klass->vtable).set_text.methodPtr)(pTVar3);
        if ((pMVar2->fields).isUnlocked != 0) {
          this_01 = (this->fields).purchaseButton;
          if (this_01 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_01,0,(MethodInfo *)0x0);
        }
        pTVar3 = (this->fields).productName;
        if ((TypeInfo__MaterialDescription->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pMVar4 = TypeInfo__MaterialDescription->static_fields->materialDescriptions;
        if (pMVar4 != (MaterialDescription__Array *)0x0) {
          if (pMVar4->max_length <= (uint)materialID) goto code_?;
          if ((pMVar4->vector[materialID] != (MaterialDescription *)0x0) && (pTVar3 != (Text *)0x0))
          {
            (*(pTVar3->klass->vtable).set_text.methodPtr)(pTVar3);
            pMVar5 = (this->fields).materialPreviewer;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pMVar5 = (MaterialPreviewer *)
                     UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                               ((Object *)pMVar5,
                                MaterialPreviewer_MethodInfo__UnityEngine__Object__Instantiate<MaterialPreviewer>_MaterialPreviewer_
                               );
            (this->fields).materialPreviewer = pMVar5;
            func_?();
            value = (pMVar2->fields)._Mesh_k__BackingField;
            pMVar5 = (this->fields).materialPreviewer;
            if (pMVar5 != (MaterialPreviewer *)0x0) {
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              this_02 = (pMVar5->fields).meshFilter;
              if (this_02 != (MeshFilter *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
                          (this_02,value,(MethodInfo *)0x0);
                this_03 = (pMVar5->fields).pictureCamera;
                if (this_03 != (Camera *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_aspect
                            (this_03,1.0,(MethodInfo *)0x0);
                  pCVar6 = (pMVar5->fields).pictureCamera;
                  if (pCVar6 != (Camera *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                              ((Behaviour *)pCVar6,1,(MethodInfo *)0x0);
                    width = (pMVar5->fields).previewResolution;
                    pRVar7 = (RenderTexture *)func_?();
                    if (pRVar7 != (RenderTexture *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_10
                                (pRVar7,width,0,0x10,(MethodInfo *)0x0);
                      (pMVar5->fields).renderTexture = pRVar7;
                      func_?();
                      pRVar7 = (pMVar5->fields).renderTexture;
                      if (pRVar7 != (RenderTexture *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                                  ((Texture *)pRVar7,FilterMode__Enum_Bilinear,(MethodInfo *)0x0);
                        pRVar7 = (pMVar5->fields).renderTexture;
                        if (pRVar7 != (RenderTexture *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                                    ((Object_1 *)pRVar7,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
                          pRVar7 = (pMVar5->fields).renderTexture;
                          if (pRVar7 != (RenderTexture *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                            RenderTexture_set_antiAliasing(pRVar7,2,(MethodInfo *)0x0);
                            pCVar6 = (pMVar5->fields).pictureCamera;
                            if (pCVar6 != (Camera *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Camera::
                              Camera_set_targetTexture
                                        (pCVar6,(pMVar5->fields).renderTexture,(MethodInfo *)0x0);
                              pMVar5 = (this->fields).materialPreviewer;
                              if ((pMVar5 != (MaterialPreviewer *)0x0) &&
                                 (this_04 = (this->fields).materialPreviewImage,
                                 this_04 != (RawImage *)0x0)) {
                                UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                                          (this_04,(Texture *)(pMVar5->fields).renderTexture,
                                           (MethodInfo *)0x0);
                                pTVar3 = (this->fields).description;
                                pMVar4 = TypeInfo__MaterialDescription->static_fields->
                                         materialDescriptions;
                                if (pMVar4 != (MaterialDescription__Array *)0x0) {
                                  if (pMVar4->max_length <= ((uint)this_03 & 0xff))
                                  goto code_?;
                                  if ((pMVar4->vector[(uint)this_03 & 0xff] !=
                                       (MaterialDescription *)0x0) && (pTVar3 != (Text *)0x0)) {
                                    (*(pTVar3->klass->vtable).set_text.methodPtr)(pTVar3);
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
          }
        }
      }
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


/* Void OnConfirmed(Boolean, ConfirmationPopup) */

void Assembly-CSharp.dll::MaterialPurchasePopup::MaterialPurchasePopup_OnConfirmed
               (MaterialPurchasePopup *this,bool confirmed,ConfirmationPopup *confirmationPopup,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
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
                    MethodInfo__MaterialPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&
                    MethodInfo__MaterialPurchasePopup____c___OnConfirmed_b__12_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__MaterialPurchasePopup____c___OnConfirmed_b__12_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__MaterialPurchasePopup____c);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__MaterialPurchasePopup____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MaterialPurchasePopup____c);
  }
  callbackFunction = TypeInfo__MaterialPurchasePopup____c->static_fields->__9__12_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__MaterialPurchasePopup____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MaterialPurchasePopup____c);
    }
    pMVar2 = TypeInfo__MaterialPurchasePopup____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    if (callbackFunction != (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)pMVar2,
                 MethodInfo__MaterialPurchasePopup____c___OnConfirmed_b__12_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__MaterialPurchasePopup____c->static_fields->__9__12_0 = callbackFunction;
      func_?();
      goto code_?;
    }
  }
  else {
code_?:
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (confirmed == 0) {
      return;
    }
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__MaterialPurchasePopup____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    callbackFunction_00 = TypeInfo__MaterialPurchasePopup____c->static_fields->__9__12_1;
    if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if ((TypeInfo__MaterialPurchasePopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar2 = TypeInfo__MaterialPurchasePopup____c->static_fields->__9;
      callbackFunction_00 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?();
      if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0)
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,(Object *)pMVar2,
                 MethodInfo__MaterialPurchasePopup____c___OnConfirmed_b__12_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__MaterialPurchasePopup____c->static_fields->__9__12_1 = callbackFunction_00;
      func_?();
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar3 != (MVNetworkGame *)0x0) {
      pAVar4 = (pMVar3->fields).PurchaseProductResponseHandler;
      this_00 = (Action_2_Int32Enum_Object_ *)func_?();
      if (this_00 != (Action_2_Int32Enum_Object_ *)0x0) {
        mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                  (this_00,(Object *)this,
                   MethodInfo__MaterialPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   ,(MethodInfo *)0x0);
        pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar4,(Delegate *)this_00,(MethodInfo *)0x0);
        if (pDVar5 == (Delegate *)0x0) {
          (pMVar3->fields).PurchaseProductResponseHandler =
               (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                *)0x0;
        }
        else {
          pAVar4 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                    *)func_?();
          if (pAVar4 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                         *)0x0) goto code_?;
          (pMVar3->fields).PurchaseProductResponseHandler = pAVar4;
          iVar6 = func_?();
          if (iVar6 == 0) goto code_?;
        }
        func_?();
        this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UnlockMaterial
                    (this_01,(uint)(this->fields).materialID,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::MaterialPurchasePopup::MaterialPurchasePopup_OnDestroy
               (MaterialPurchasePopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    func_?(&
                    MethodInfo__MaterialPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pAVar2 = (pMVar1->fields).PurchaseProductResponseHandler;
    this_01 = (Action_2_Int32Enum_Object_ *)
              func_?(
                             TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
    if (this_01 != (Action_2_Int32Enum_Object_ *)0x0) {
      mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__MaterialPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 ,(MethodInfo *)0x0);
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar2,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pDVar3 == (Delegate *)0x0) {
        (pMVar1->fields).PurchaseProductResponseHandler =
             (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             0x0;
      }
      else {
        pAVar2 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                  *)func_?();
        if (pAVar2 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                       *)0x0) goto code_?;
        (pMVar1->fields).PurchaseProductResponseHandler = pAVar2;
        iVar4 = func_?();
        if (iVar4 == 0) goto code_?;
      }
      func_?();
      this_00 = (this->fields).materialPreviewer;
      if (this_00 != (MaterialPreviewer *)0x0) {
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)obj,(MethodInfo *)0x0);
        return;
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


/* Void OnPurchaseClick() */

void Assembly-CSharp.dll::MaterialPurchasePopup::MaterialPurchasePopup_OnPurchaseClick
               (MaterialPurchasePopup *this,MethodInfo *method)

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
                    MethodInfo__MaterialPurchasePopup___OnPurchaseClick_b__11_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
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
               MethodInfo__MaterialPurchasePopup___OnPurchaseClick_b__11_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
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


/* Void ProductPurchaseResponseHandler(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MaterialPurchasePopup::
     MaterialPurchasePopup_ProductPurchaseResponseHandler
               (MaterialPurchasePopup *this,int32_t returnCode,
               Dictionary_2_System_Object_System_Object_ *purchaseResponseData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    func_?(&TypeInfo__UnityEngine__Debug);
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
                    MethodInfo__MaterialPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&
                    MethodInfo__MaterialPurchasePopup____c___ProductPurchaseResponseHandler_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__MaterialPurchasePopup____c___ProductPurchaseResponseHandler_b__13_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__MaterialPurchasePopup____c__DisplayClass13_0___ProductPurchaseResponseHandler_b__2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__MaterialPurchasePopup____c__DisplayClass13_0);
    func_?(&TypeInfo__MaterialPurchasePopup____c);
    func_?(&StringLiteral_Material_unlocked);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__MaterialPurchasePopup____c__DisplayClass13_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)returnCode;
    value[1].monitor = (MonitorData *)this;
    func_?(&value[1].monitor,this);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_Material_unlocked,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      source = (pMVar1->fields).PurchaseProductResponseHandler;
      this_01 = (Action_2_Int32Enum_Object_ *)
                func_?(
                               TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                               );
      unaff_EBX = (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0;
      if (this_01 != (Action_2_Int32Enum_Object_ *)0x0) {
        mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                  (this_01,(Object *)this,
                   MethodInfo__MaterialPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   ,(MethodInfo *)0x0);
        unaff_EBX = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                    mscorlib.dll::System::Delegate::Delegate_Remove
                              ((Delegate *)source,(Delegate *)this_01,(MethodInfo *)0x0);
        if (unaff_EBX == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          (pMVar1->fields).PurchaseProductResponseHandler =
               (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                *)0x0;
        }
        else {
          iVar2 = func_?(unaff_EBX);
          if (iVar2 == 0) goto code_?;
          _UNK_? = iVar2;
          iVar2 = func_?(unaff_EBX);
          if (iVar2 == 0) goto code_?;
          pMVar1 = (MVNetworkGame *)&UNK_?;
        }
        func_?(&(pMVar1->fields).PurchaseProductResponseHandler);
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__MaterialPurchasePopup____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MaterialPurchasePopup____c);
        }
        unaff_EBX = TypeInfo__MaterialPurchasePopup____c->static_fields->__9__13_0;
        if (unaff_EBX == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if ((TypeInfo__MaterialPurchasePopup____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MaterialPurchasePopup____c);
          }
          pMVar3 = TypeInfo__MaterialPurchasePopup____c->static_fields->__9;
          unaff_EBX = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                      func_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                     );
          if (unaff_EBX == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)unaff_EBX,(Object *)pMVar3,
                     MethodInfo__MaterialPurchasePopup____c___ProductPurchaseResponseHandler_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__MaterialPurchasePopup____c->static_fields->__9__13_0 = unaff_EBX;
          func_?(&TypeInfo__MaterialPurchasePopup____c->static_fields->__9__13_0,unaff_EBX)
          ;
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)unaff_EBX,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        if (value[1].klass == (Object__Class *)0x0) {
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar1 != (MVNetworkGame *)0x0) &&
             (this_00 = (pMVar1->fields)._MaterialRepository_k__BackingField,
             this_00 != (MVMaterialRepository *)0x0)) {
            MVMaterialRepository::MVMaterialRepository_SetMaterialUnlocked
                      (this_00,(uint)(this->fields).materialID,1,(MethodInfo *)0x0);
            unaff_EBX = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                        UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)this,(MethodInfo *)0x0);
            if ((TypeInfo__MaterialPurchasePopup____c->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MaterialPurchasePopup____c);
            }
            callbackFunction_00 = TypeInfo__MaterialPurchasePopup____c->static_fields->__9__13_1;
            if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
              if ((TypeInfo__MaterialPurchasePopup____c->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__MaterialPurchasePopup____c);
              }
              pMVar3 = TypeInfo__MaterialPurchasePopup____c->static_fields->__9;
              callbackFunction_00 =
                   (ExecuteEvents_EventFunction_1_IUIStack_ *)
                   func_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                  );
              if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0)
              goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,
                         (Object *)pMVar3,
                         MethodInfo__MaterialPurchasePopup____c___ProductPurchaseResponseHandler_b__13_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              TypeInfo__MaterialPurchasePopup____c->static_fields->__9__13_1 = callbackFunction_00;
              func_?(&TypeInfo__MaterialPurchasePopup____c->static_fields->__9__13_1,
                              callbackFunction_00);
            }
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      ((GameObject *)unaff_EBX,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            pUVar4 = (this->fields).callback;
            if (pUVar4 != (UnityAction_2_System_Boolean_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                           *)0x0) {
              (*(pUVar4->fields)._._.invoke_impl)
                        ((pUVar4->fields)._._.method_code,1,purchaseResponseData,
                         (pUVar4->fields)._._.method);
              return;
            }
          }
        }
        else {
          unaff_EBX = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                      UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
          callbackFunction =
               (ExecuteEvents_EventFunction_1_System_Object_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                              );
          if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                       MethodInfo__MaterialPurchasePopup____c__DisplayClass13_0___ProductPurchaseResponseHandler_b__2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      ((GameObject *)unaff_EBX,(BaseEventData *)0x0,callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                      );
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?(unaff_EBX);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <OnPurchaseClick>b__11_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::MaterialPurchasePopup::MaterialPurchasePopup__OnPurchaseClick_b__11_0
               (MaterialPurchasePopup *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    func_?(&MethodInfo__MaterialPurchasePopup__OnConfirmed_bool__ConfirmationPopup_);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
    func_?(&StringLiteral_Purchase_Material_);
    func_?(&StringLiteral_Confirm);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Purchase_Material_,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_System_Boolean_System_Object_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>,
                            pSVar1);
  if (this_00 != (UnityAction_2_System_Boolean_System_Object_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Boolean,System::Object]::
    UnityAction_2_System_Boolean_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__MaterialPurchasePopup__OnConfirmed_bool__ConfirmationPopup_,
               (MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_Confirm,(MethodInfo *)0x0);
    if (x != (IModalPopupCreator *)0x0) {
      uVar2 = 0;
      uVar3 = (x->klass->_1).interface_offsets_count;
      if (uVar3 != 0) {
        do {
          if (x->klass->interfaceOffsets[uVar2].interfaceType ==
              (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
            pVVar4 = &(x->klass->vtable).Create_2 + x->klass->interfaceOffsets[uVar2].offset;
            goto code_?;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar3);
      }
      unaff_EBX = &UNK_?;
      pSVar1 = (String *)x;
      pVVar4 = (VirtualInvokeData *)
               func_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
code_?:
      (*pVVar4->methodPtr)(x,unaff_ESI,unaff_EBX,pSVar1);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


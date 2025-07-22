
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
  (this->fields).materialID = materialID;
  (this->fields).callback = callback;
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
        (*(code *)(pTVar3->klass->vtable).set_text.method)(pTVar3);
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
            (*(code *)(pTVar3->klass->vtable).set_text.method)(pTVar3);
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
                pCVar6 = (pMVar5->fields).pictureCamera;
                if (pCVar6 != (Camera *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_aspect
                            (pCVar6,1.0,(MethodInfo *)0x0);
                  pCVar6 = (pMVar5->fields).pictureCamera;
                  if (pCVar6 != (Camera *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                              ((Behaviour *)pCVar6,1,(MethodInfo *)0x0);
                    width = (pMVar5->fields).previewResolution;
                    this_03 = (RenderTexture *)func_?();
                    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_10
                              (this_03,width,width,0x10,(MethodInfo *)0x0);
                    *(RenderTexture **)(width + 0x10) = this_03;
                    func_?();
                    if (*(Texture **)(width + 0x10) != (Texture *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                                (*(Texture **)(width + 0x10),FilterMode__Enum_Bilinear,
                                 (MethodInfo *)0x0);
                      if (*(Object_1 **)(width + 0x10) != (Object_1 *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                                  (*(Object_1 **)(width + 0x10),HideFlags__Enum_DontSave,
                                   (MethodInfo *)0x0);
                        if (*(RenderTexture **)(width + 0x10) != (RenderTexture *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                          RenderTexture_set_antiAliasing
                                    (*(RenderTexture **)(width + 0x10),2,(MethodInfo *)0x0);
                          if (*(Camera **)(width + 0x20) != (Camera *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Camera::
                            Camera_set_targetTexture
                                      (*(Camera **)(width + 0x20),*(RenderTexture **)(width + 0x10),
                                       (MethodInfo *)0x0);
                            if ((_UNK_? != 0) && (_UNK_? != (RawImage *)0x0)) {
                              UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                                        (_UNK_?,*(Texture **)(_UNK_? + 0x10),
                                         (MethodInfo *)0x0);
                              pMVar4 = TypeInfo__MaterialDescription->static_fields->
                                       materialDescriptions;
                              if (pMVar4 != (MaterialDescription__Array *)0x0) {
                                if (pMVar4->max_length <= ((uint)this_03 & 0xff))
                                goto code_?;
                                if ((pMVar4->vector[(uint)this_03 & 0xff] !=
                                     (MaterialDescription *)0x0) && (_UNK_? != (int *)0x0)) {
                                  (**(code **)(*_UNK_? + 0x318))(_UNK_?);
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
code_?:
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  pGVar2 = pGVar1;
  if ((TypeInfo__MaterialPurchasePopup____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MaterialPurchasePopup____c);
  }
  callbackFunction = TypeInfo__MaterialPurchasePopup____c->static_fields->__9__12_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    pGVar1 = pGVar2;
    if ((TypeInfo__MaterialPurchasePopup____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MaterialPurchasePopup____c);
      pGVar1 = pGVar2;
    }
    pMVar3 = TypeInfo__MaterialPurchasePopup____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)pMVar3,
               MethodInfo__MaterialPurchasePopup____c___OnConfirmed_b__12_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__MaterialPurchasePopup____c->static_fields->__9__12_0 = callbackFunction;
    func_?(&TypeInfo__MaterialPurchasePopup____c->static_fields->__9__12_0,callbackFunction
                   );
  }
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
    pMVar3 = TypeInfo__MaterialPurchasePopup____c->static_fields->__9;
    callbackFunction_00 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,(Object *)pMVar3,
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
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar4 != (MVNetworkGame *)0x0) {
    pAVar5 = (pMVar4->fields).PurchaseProductResponseHandler;
    this_00 = (UnityAction_2_System_Int32_System_Int32_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (this_00,(Object *)&UNK_?,
               MethodInfo__MaterialPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,(MethodInfo *)0x0);
    pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar5,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar6 == (Delegate *)0x0) {
      (pMVar4->fields).PurchaseProductResponseHandler =
           (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
           0x0;
    }
    else {
      pAVar5 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                *)func_?();
      if (pAVar5 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                     *)0x0) goto code_?;
      (pMVar4->fields).PurchaseProductResponseHandler = pAVar5;
      iVar7 = func_?();
      if (iVar7 == 0) goto code_?;
    }
    func_?();
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UnlockMaterial
                (this_01,(uint)UNK_?,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
    this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
              func_?(
                             TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (this_00,(Object *)this,
               MethodInfo__MaterialPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,(MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
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
    if (_UNK_? != (Component *)0x0) {
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      (_UNK_?,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
      return;
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
  method_00 = TypeInfo__MaterialPurchasePopup____c__DisplayClass13_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value == (Object *)0x0) {
code_?:
    func_?();
  }
  else {
    value[1].monitor = (MonitorData *)this;
    value[1].klass = (Object__Class *)returnCode;
    func_?(&value[1].monitor,this);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Material_unlocked,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    source = (pMVar1->fields).PurchaseProductResponseHandler;
    this_01 = (UnityAction_2_System_Int32_System_Int32_ *)
              func_?(
                             TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (this_01,(Object *)this,
               MethodInfo__MaterialPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,(MethodInfo *)0x0);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pDVar2 == (Delegate *)0x0) {
      (pMVar1->fields).PurchaseProductResponseHandler =
           (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
           0x0;
code_?:
      func_?();
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__MaterialPurchasePopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MaterialPurchasePopup____c);
      }
      pEVar4 = TypeInfo__MaterialPurchasePopup____c->static_fields->__9__13_0;
      if (pEVar4 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__MaterialPurchasePopup____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MaterialPurchasePopup____c);
        }
        pMVar5 = TypeInfo__MaterialPurchasePopup____c->static_fields->__9;
        pEVar4 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar4,(Object *)pMVar5,
                   MethodInfo__MaterialPurchasePopup____c___ProductPurchaseResponseHandler_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__MaterialPurchasePopup____c->static_fields->__9__13_0 = pEVar4;
        func_?(&TypeInfo__MaterialPurchasePopup____c->static_fields->__9__13_0,pEVar4);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar3,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar4,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      if (value[1].klass != (Object__Class *)0x0) {
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        callbackFunction =
             (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                   MethodInfo__MaterialPurchasePopup____c__DisplayClass13_0___ProductPurchaseResponseHandler_b__2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar3,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                  );
        return;
      }
      pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar6 != (MVNetworkGame *)0x0) &&
         (this_00 = (pMVar6->fields)._MaterialRepository_k__BackingField,
         this_00 != (MVMaterialRepository *)0x0)) {
        MVMaterialRepository::MVMaterialRepository_SetMaterialUnlocked
                  (this_00,(uint)(this->fields).materialID,1,(MethodInfo *)0x0);
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__MaterialPurchasePopup____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MaterialPurchasePopup____c);
        }
        pEVar4 = TypeInfo__MaterialPurchasePopup____c->static_fields->__9__13_1;
        if (pEVar4 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if ((TypeInfo__MaterialPurchasePopup____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MaterialPurchasePopup____c);
          }
          pMVar5 = TypeInfo__MaterialPurchasePopup____c->static_fields->__9;
          pEVar4 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                   func_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                  );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)pEVar4,(Object *)pMVar5,
                     MethodInfo__MaterialPurchasePopup____c___ProductPurchaseResponseHandler_b__13_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__MaterialPurchasePopup____c->static_fields->__9__13_1 = pEVar4;
          func_?(&TypeInfo__MaterialPurchasePopup____c->static_fields->__9__13_1,pEVar4);
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar3,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar4,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        pUVar7 = (this->fields).callback;
        if (pUVar7 != (UnityAction_2_System_Boolean_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                       *)0x0) {
          (*(pUVar7->fields)._._.invoke_impl)
                    ((pUVar7->fields)._._.method_code,1,
                     &(pMVar1->fields).PurchaseProductResponseHandler,(pUVar7->fields)._._.method);
          return;
        }
      }
      goto code_?;
    }
    iVar8 = func_?();
    if (iVar8 == 0) goto code_?;
    pMVar1 = (MVNetworkGame *)&UNK_?;
    _UNK_? = iVar8;
    iVar8 = func_?();
    if (iVar8 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  TM::TM__(StringLiteral_Purchase_Material_,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this_00,(Object *)this,
             MethodInfo__MaterialPurchasePopup__OnConfirmed_bool__ConfirmationPopup_,
             (MethodInfo *)0x0);
  TM::TM__(StringLiteral_Confirm,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(3);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Void Initialize(Byte,
   UnityAction`2[System.Boolean,System.Collections.Generic.Dictionary`2[System.Object,System.Object]])
    */

void Assembly-CSharp.dll::MaterialPurchasePopup::MaterialPurchasePopup_Initialize
               (MaterialPurchasePopup *this,uint8_t materialID,
               UnityAction_2_System_Boolean_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
               *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MaterialDescription);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MaterialPreviewer_MethodInfo__UnityEngine__Object__Instantiate<MaterialPreviewer>_MaterialPreviewer_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).materialID = materialID;
  (this->fields).callback = callback;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).callback >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar6 != (MVGameControllerBase *)0x0) &&
      (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar7->fields)._MaterialRepository_k__BackingField,
     this_00 != (MVMaterialRepository *)0x0)) {
    pMVar8 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                       (this_00,materialID,(MethodInfo *)0x0);
    pTVar9 = (this->fields).price;
    if ((pMVar8 != (MVMaterial *)0x0) &&
       (mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&pMVar8->fields,(MethodInfo *)0x0),
       pTVar9 != (Text *)0x0)) {
      (*(pTVar9->klass->vtable).set_text.methodPtr)(pTVar9);
      if ((pMVar8->fields).isUnlocked != 0) {
        this_01 = (this->fields).purchaseButton;
        if (this_01 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,0,(MethodInfo *)0x0);
      }
      pTVar9 = (this->fields).productName;
      if (*(int *)&(TypeInfo__MaterialDescription->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__MaterialDescription);
      }
      pMVar10 = TypeInfo__MaterialDescription->static_fields->materialDescriptions;
      if (pMVar10 != (MaterialDescription__Array *)0x0) {
        if ((uint)pMVar10->max_length <= (uint)materialID) {
code_?:
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((pMVar10->vector[materialID] != (MaterialDescription *)0x0) && (pTVar9 != (Text *)0x0)) {
          (*(pTVar9->klass->vtable).set_text.methodPtr)
                    (pTVar9,(pMVar10->vector[materialID]->fields)._Name_k__BackingField);
          pMVar12 = (this->fields).materialPreviewer;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pMVar12 = (MaterialPreviewer *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)pMVar12,
                               MaterialPreviewer_MethodInfo__UnityEngine__Object__Instantiate<MaterialPreviewer>_MaterialPreviewer_
                              );
          bVar1 = iRam_? != 0;
          (this->fields).materialPreviewer = pMVar12;
          if (bVar1) {
            uVar2 = (uint)((ulonglong)&(this->fields).materialPreviewer >> 0xc);
            lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
            do {
              uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
              puVar5 = (ulonglong *)(lVar3 + 0xADDR);
              LOCK();
              bVar1 = uVar4 == *puVar5;
              if (bVar1) {
                *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
            } while (!bVar1);
          }
          pMVar12 = (this->fields).materialPreviewer;
          if (pMVar12 != (MaterialPreviewer *)0x0) {
            MaterialPreviewer::MaterialPreviewer_Initialize
                      (pMVar12,(pMVar8->fields)._Mesh_k__BackingField,(MethodInfo *)0x0);
            pMVar12 = (this->fields).materialPreviewer;
            if ((pMVar12 != (MaterialPreviewer *)0x0) &&
               (this_02 = (this->fields).materialPreviewImage, this_02 != (RawImage *)0x0)) {
              UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                        (this_02,(Texture *)(pMVar12->fields).renderTexture,(MethodInfo *)0x0);
              pTVar9 = (this->fields).description;
              pMVar10 = TypeInfo__MaterialDescription->static_fields->materialDescriptions;
              if (pMVar10 != (MaterialDescription__Array *)0x0) {
                if ((uint)pMVar10->max_length <= (uint)materialID) goto code_?;
                if ((pMVar10->vector[materialID] != (MaterialDescription *)0x0) &&
                   (pTVar9 != (Text *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(pTVar9->klass->vtable).set_text.methodPtr)
                            (pTVar9,(pMVar10->vector[materialID]->fields).
                                    _Description_k__BackingField,
                             (pTVar9->klass->vtable).set_text.method);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnConfirmed(Boolean, ConfirmationPopup) */

void Assembly-CSharp.dll::MaterialPurchasePopup::MaterialPurchasePopup_OnConfirmed
               (MaterialPurchasePopup *this,bool confirmed,ConfirmationPopup *confirmationPopup,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MaterialPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MaterialPurchasePopup____c___OnConfirmed_b__12_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MaterialPurchasePopup____c___OnConfirmed_b__12_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MaterialPurchasePopup____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__MaterialPurchasePopup____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MaterialPurchasePopup____c);
  }
  this_00 = TypeInfo__MaterialPurchasePopup____c->static_fields->__9__12_0;
  if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__MaterialPurchasePopup____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MaterialPurchasePopup____c);
    }
    pMVar2 = TypeInfo__MaterialPurchasePopup____c->static_fields->__9;
    this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)pMVar2,
               MethodInfo__MaterialPurchasePopup____c___OnConfirmed_b__12_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__MaterialPurchasePopup____c->static_fields->__9__12_0 = this_00;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&TypeInfo__MaterialPurchasePopup____c->static_fields->__9__12_0 >>
                     0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (confirmed == 0) {
    return;
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__MaterialPurchasePopup____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MaterialPurchasePopup____c);
  }
  this_01 = TypeInfo__MaterialPurchasePopup____c->static_fields->__9__12_1;
  if (this_01 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    if (*(int *)&(TypeInfo__MaterialPurchasePopup____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MaterialPurchasePopup____c);
    }
    pMVar2 = TypeInfo__MaterialPurchasePopup____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)pMVar2,
               MethodInfo__MaterialPurchasePopup____c___OnConfirmed_b__12_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__MaterialPurchasePopup____c->static_fields->__9__12_1 = this_01;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&TypeInfo__MaterialPurchasePopup____c->static_fields->__9__12_1 >>
                     0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar8 != (MVGameControllerBase *)0x0) &&
     (pMVar9 = (pMVar8->fields).game, pMVar9 != (MVNetworkGame *)0x0)) {
    pAVar10 = (pMVar9->fields).PurchaseProductResponseHandler;
    this_02 = (Action_2_Int32Enum_Object_ *)
              FUN_?(
                           TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                           );
    uVar11 = 0;
    mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__MaterialPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,(MethodInfo *)0x0);
    pDVar12 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar10,(Delegate *)this_02,(MethodInfo *)0x0);
    pAVar13 = 
    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
    ;
    if (pDVar12 == (Delegate *)0x0) {
      (pMVar9->fields).PurchaseProductResponseHandler =
           (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
           0x0;
    }
    else {
      pAVar10 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                 *)FUN_?(pDVar12,
                                 TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                                );
      if (pAVar10 ==
          (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0
         ) {
        FUN_?(pDVar12,pAVar13);
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      (pMVar9->fields).PurchaseProductResponseHandler = pAVar10;
      pAVar13 = 
      TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
      ;
      lVar4 = FUN_?(pDVar12,
                             TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                            );
      if (lVar4 == 0) {
        FUN_?(pDVar12,pAVar13);
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&(pMVar9->fields).PurchaseProductResponseHandler >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    bVar15 = (this->fields).materialID;
    if (this_03 != (MVNetworkGame_OperationRequests *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_04 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this_04,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      auStackX_10[0] = CONCAT31(auStackX_10[0]._1_3_,0x67);
      key = (Object *)FUN_?(uRam_?,auStackX_10);
      auStackX_10[0] = (uint)bVar15;
      value = (Object *)FUN_?(uRam_?,auStackX_10);
      if (this_04 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this_04,key,value,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar11 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PurchaseProduct
                  (this_03,MVProductType__Enum_MaterialUnlock,
                   (Dictionary_2_System_Object_System_Object_ *)this_04,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::MaterialPurchasePopup::MaterialPurchasePopup_OnDestroy
               (MaterialPurchasePopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MaterialPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    pAVar3 = (pMVar2->fields).PurchaseProductResponseHandler;
    this_01 = (Action_2_Int32Enum_Object_ *)
              FUN_?(
                           TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                           );
    mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__MaterialPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,(MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar3,(Delegate *)this_01,(MethodInfo *)0x0);
    pAVar5 = 
    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
    ;
    if (pDVar4 == (Delegate *)0x0) {
      (pMVar2->fields).PurchaseProductResponseHandler =
           (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
           0x0;
    }
    else {
      pAVar3 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                *)FUN_?(pDVar4,
                                TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                               );
      if (pAVar3 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                     *)0x0) {
        FUN_?(pDVar4,pAVar5);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (pMVar2->fields).PurchaseProductResponseHandler = pAVar3;
      pAVar5 = 
      TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
      ;
      lVar7 = FUN_?();
      if (lVar7 == 0) {
        FUN_?(pDVar4,pAVar5);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)&(pMVar2->fields).PurchaseProductResponseHandler >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar12 = uVar10 == *puVar11;
        if (bVar12) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar12);
    }
    this_00 = (this->fields).materialPreviewer;
    if (this_00 != (MaterialPreviewer *)0x0) {
      pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                      ,0,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((
          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      pvVar14 = (void *)0x0;
      if (pGVar13 != (GameObject *)0x0) {
        pvVar14 = (pGVar13->fields)._.m_CachedPtr;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar15 = func_?(&UNK_?);
        FUN_?(uVar15,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar14,0);
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnPurchaseClick() */

void Assembly-CSharp.dll::MaterialPurchasePopup::MaterialPurchasePopup_OnPurchaseClick
               (MaterialPurchasePopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MaterialPurchasePopup___OnPurchaseClick_b__11_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__MaterialPurchasePopup___OnPurchaseClick_b__11_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar2 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar2->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar2);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar3 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar3 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar4 = (longlong)(pLVar3->fields)._size;
    uVar5 = 0;
    if (0 < lVar4) {
      lVar6 = 0;
      lVar7 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar3 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar3 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar3->fields)._size <= uVar5) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar9 = (pLVar3->fields)._items;
        if (pTVar9 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar9->max_length <= uVar5) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar9->vector + lVar7 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar10 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,this_01,
                           (pMVar2->field7_0x38).rgctx_data[1].method);
        if (bVar10 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 1;
        lVar7 = lVar7 + 8;
      } while (lVar6 < lVar4);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ProductPurchaseResponseHandler(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MaterialPurchasePopup::
     MaterialPurchasePopup_ProductPurchaseResponseHandler
               (MaterialPurchasePopup *this,int32_t returnCode,
               Dictionary_2_System_Object_System_Object_ *purchaseResponseData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MaterialPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MaterialPurchasePopup____c___ProductPurchaseResponseHandler_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MaterialPurchasePopup____c___ProductPurchaseResponseHandler_b__13_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MaterialPurchasePopup____c__DisplayClass13_0___ProductPurchaseResponseHandler_b__2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MaterialPurchasePopup____c__DisplayClass13_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MaterialPurchasePopup____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Material_unlocked);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__MaterialPurchasePopup____c__DisplayClass13_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    *(int32_t *)&object[1].klass = returnCode;
    object[1].monitor = (MonitorData *)this;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&object[1].monitor >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Material_unlocked,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar6 != (MVGameControllerBase *)0x0) &&
       (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) {
      pAVar8 = (pMVar7->fields).PurchaseProductResponseHandler;
      this_00 = (Action_2_Int32Enum_Object_ *)
                FUN_?(
                             TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
      mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__MaterialPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 ,(MethodInfo *)0x0);
      pDVar9 = mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pAVar8,(Delegate *)this_00,(MethodInfo *)0x0);
      pAVar10 = 
      TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
      ;
      if (pDVar9 == (Delegate *)0x0) {
        (pMVar7->fields).PurchaseProductResponseHandler =
             (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             0x0;
      }
      else {
        pAVar8 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                   *)FUN_?(pDVar9,
                                   TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                                  );
        if (pAVar8 ==
            (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
            0x0) {
          FUN_?(pDVar9,pAVar10);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        (pMVar7->fields).PurchaseProductResponseHandler = pAVar8;
        pAVar10 = 
        TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
        ;
        lVar3 = FUN_?();
        if (lVar3 == 0) {
          FUN_?(pDVar9,pAVar10);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&(pMVar7->fields).PurchaseProductResponseHandler >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__MaterialPurchasePopup____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__MaterialPurchasePopup____c);
      }
      pEVar13 = TypeInfo__MaterialPurchasePopup____c->static_fields->__9__13_0;
      if (pEVar13 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__MaterialPurchasePopup____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__MaterialPurchasePopup____c);
        }
        pMVar14 = TypeInfo__MaterialPurchasePopup____c->static_fields->__9;
        pEVar13 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar13,(Object *)pMVar14,
                   MethodInfo__MaterialPurchasePopup____c___ProductPurchaseResponseHandler_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__MaterialPurchasePopup____c->static_fields->__9__13_0 = pEVar13;
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)&TypeInfo__MaterialPurchasePopup____c->static_fields->__9__13_0
                         >> 0xc);
          lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
          do {
            uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
            puVar5 = (ulonglong *)(lVar3 + 0xADDR);
            LOCK();
            bVar1 = uVar4 == *puVar5;
            if (bVar1) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar1);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar12,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar13,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      if (*(int *)&object[1].klass != 0) {
        pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_01,object,
                   MethodInfo__MaterialPurchasePopup____c__DisplayClass13_0___ProductPurchaseResponseHandler_b__2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar12,(BaseEventData *)0x0,this_01,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                  );
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar6 != (MVGameControllerBase *)0x0) &&
         (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) {
        pMVar15 = (pMVar7->fields)._MaterialRepository_k__BackingField;
        bVar16 = (this->fields).materialID;
        if (pMVar15 != (MVMaterialRepository *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Item_int_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pLVar17 = (pMVar15->fields).materials;
          if (pLVar17 != (List_1_MVMaterial_ *)0x0) {
            if ((uint)(pLVar17->fields)._size <= (uint)bVar16) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pMVar18 = (pLVar17->fields)._items;
            if (pMVar18 != (MVMaterial__Array *)0x0) {
              if ((uint)pMVar18->max_length <= (uint)bVar16) {
                FUN_?();
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              if (pMVar18->vector[bVar16] != (MVMaterial *)0x0) {
                (pMVar18->vector[bVar16]->fields).isUnlocked = 1;
                pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__MaterialPurchasePopup____c->_1).field_0x1c == 0) {
                  FUN_?(TypeInfo__MaterialPurchasePopup____c);
                }
                pEVar13 = TypeInfo__MaterialPurchasePopup____c->static_fields->__9__13_1;
                if (pEVar13 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
                  if (*(int *)&(TypeInfo__MaterialPurchasePopup____c->_1).field_0x1c == 0) {
                    FUN_?(TypeInfo__MaterialPurchasePopup____c);
                  }
                  pMVar14 = TypeInfo__MaterialPurchasePopup____c->static_fields->__9;
                  pEVar13 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                            FUN_?(
                                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                         );
                  UnityEngine.UI.dll::UnityEngine::EventSystems::
                  ExecuteEvents+EventFunction`1[System::Object]::
                  ExecuteEvents_EventFunction_1_System_Object___ctor
                            ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar13,
                             (Object *)pMVar14,
                             MethodInfo__MaterialPurchasePopup____c___ProductPurchaseResponseHandler_b__13_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                             ,(MethodInfo *)0x0);
                  TypeInfo__MaterialPurchasePopup____c->static_fields->__9__13_1 = pEVar13;
                  if (iRam_? != 0) {
                    uVar2 = (uint)((ulonglong)
                                    &TypeInfo__MaterialPurchasePopup____c->static_fields->__9__13_1
                                   >> 0xc);
                    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
                      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
                      LOCK();
                      bVar1 = uVar4 == *puVar5;
                      if (bVar1) {
                        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar1);
                  }
                }
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c ==
                    0) {
                  FUN_?();
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy
                          (pGVar12,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar13,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                          );
                pUVar19 = (this->fields).callback;
                if (pUVar19 !=
                    (UnityAction_2_System_Boolean_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                     *)0x0) {
                  (*(pUVar19->fields)._._.invoke_impl)
                            ((pUVar19->fields)._._.method_code,1,purchaseResponseData,
                             (pUVar19->fields)._._.method);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void <OnPurchaseClick>b__11_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::MaterialPurchasePopup::MaterialPurchasePopup__OnPurchaseClick_b__11_0
               (MaterialPurchasePopup *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MaterialPurchasePopup__OnConfirmed_bool__ConfirmationPopup_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Purchase_Material_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Confirm);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Purchase_Material_,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_System_Boolean_System_Object_ *)
            FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Boolean,System::Object]::
  UnityAction_2_System_Boolean_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__MaterialPurchasePopup__OnConfirmed_bool__ConfirmationPopup_,
             (MethodInfo *)0x0);
  TM::TM__(StringLiteral_Confirm,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


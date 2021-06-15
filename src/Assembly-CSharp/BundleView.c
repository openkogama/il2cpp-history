
/* Void HandleLevel(AccessoryBundleClient) */

void Assembly-CSharp.dll::BundleView::BundleView_HandleLevel
               (BundleView *this,AccessoryBundleClient *accessoryData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).purchaseButton;
  if (this_00 != (Button *)0x0) {
    pIVar1 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                       ((Selectable *)this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?(TypeInfo__Styles);
    }
    pCVar2 = Styles::Styles_GetColor(&CStack_3,ColorStyle__Enum_DisabledButton,(MethodInfo *)0x0);
    if (pIVar1 != (Image *)0x0) {
      (*(code *)(pIVar1->klass->vtable).set_color.method)
                (pIVar1,pCVar2->r,pCVar2->g,pCVar2->b,pCVar2->a,
                 (pIVar1->klass->vtable).get_raycastTarget.methodPtr);
      this_01 = (this->fields).shineEffect;
      if (this_01 != (AccessoryShinyButton *)0x0) {
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this_01,(MethodInfo *)0x0);
        if (pGVar4 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,0,(MethodInfo *)0x0);
          pIVar1 = (this->fields).levelLocked;
          if (pIVar1 != (Image *)0x0) {
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)pIVar1,(MethodInfo *)0x0);
            if (pGVar4 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar4,1,(MethodInfo *)0x0);
              pTVar5 = (this->fields).originalPriceText;
              if (pTVar5 != (Text *)0x0) {
                pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_gameObject((Component_1 *)pTVar5,(MethodInfo *)0x0);
                if (pGVar4 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar4,0,(MethodInfo *)0x0);
                  pTVar5 = (this->fields).discountedPriceText;
                  if (pTVar5 != (Text *)0x0) {
                    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_1_get_gameObject((Component_1 *)pTVar5,(MethodInfo *)0x0);
                    if (pGVar4 != (GameObject *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar4,0,(MethodInfo *)0x0);
                      pTVar5 = (this->fields).bundlePriceWithoutDiscount;
                      if (pTVar5 != (Text *)0x0) {
                        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_1_get_gameObject((Component_1 *)pTVar5,(MethodInfo *)0x0)
                        ;
                        if (pGVar4 != (GameObject *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (pGVar4,0,(MethodInfo *)0x0);
                          pGVar4 = (this->fields).discountTag;
                          if (pGVar4 != (GameObject *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive(pGVar4,0,(MethodInfo *)0x0);
                            pTVar5 = (this->fields).goldSavedText;
                            if (pTVar5 != (Text *)0x0) {
                              pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                       Component_1_get_gameObject
                                                 ((Component_1 *)pTVar5,(MethodInfo *)0x0);
                              if (pGVar4 != (GameObject *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive(pGVar4,0,(MethodInfo *)0x0);
                                pGVar4 = (this->fields).claimText;
                                if (pGVar4 != (GameObject *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_SetActive(pGVar4,0,(MethodInfo *)0x0);
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
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void HandlePrices(AccessoryBundleClient) */

void Assembly-CSharp.dll::BundleView::BundleView_HandlePrices
               (BundleView *this,AccessoryBundleClient *accessoryData,MethodInfo *method)

{
  pBVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (BundleView *)0x0;
  pIVar2 = (pBVar1->fields).levelLocked;
  (pBVar1->fields).originalPrice = 0;
  if ((pIVar2 != (Image *)0x0) &&
     (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pIVar2,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,0,(MethodInfo *)0x0);
    this_00 = (pBVar1->fields).purchaseButton;
    if (this_00 != (Button *)0x0) {
      pIVar2 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                         ((Selectable *)this_00,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        func_?();
      }
      pCVar4 = Styles::Styles_GetColor
                         ((Color *)&stack0xffffffe0,ColorStyle__Enum_ButtonSuccess,(MethodInfo *)0x0
                         );
      if (pIVar2 != (Image *)0x0) {
        (*(code *)(pIVar2->klass->vtable).set_color.method)
                  (pIVar2,pCVar4->r,pCVar4->g,pCVar4->b,pCVar4->a,
                   (pIVar2->klass->vtable).get_raycastTarget.methodPtr);
        this_01 = (pBVar1->fields).shineEffect;
        if (((this_01 != (AccessoryShinyButton *)0x0) &&
            (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                                ((Component_1 *)this_01,(MethodInfo *)0x0),
            pGVar3 != (GameObject *)0x0)) &&
           (UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar3,1,(MethodInfo *)0x0), accessoryData != (AccessoryBundleClient *)0x0))
        {
          this_02 = (accessoryData->fields)._.accessoryBundleItems;
          iVar5 = 0;
          if (this_02 != (List_1_MV_WorldObject_Accessories_AccessoryBundleItem_ *)0x0) {
            for (; pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft
                            ::Json::Serialization::JsonProperty]::
                            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                      ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                       this_02,
                                       MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Count__
                                      ), iVar5 < (int)pOVar6; iVar5 = iVar5 + 1) {
              pIVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                       ::IEventSystemHandler]::
                       List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                 ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_02,
                                  iVar5,
                                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Item_int_
                                 );
              if (pIVar7 == (IEventSystemHandler *)0x0) goto code_?;
              id = pIVar7[1].monitor;
              if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
                func_?(TypeInfo__AccessoryDataManager);
              }
              pAVar8 = AccessoryDataManager::AccessoryDataManager_GetAccessoryDataByMetaDataId
                                 ((int32_t)id,(MethodInfo *)0x0);
              if ((pAVar8 != (AccessoryDataClient *)0x0) && ((pAVar8->fields)._.owns == 0)) {
                piVar9 = &(pBVar1->fields).originalPrice;
                *piVar9 = *piVar9 + (pAVar8->fields)._.cost;
                this = (BundleView *)((int)&this->klass + 1);
              }
            }
            if (this == (BundleView *)0x0) {
              if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                        ((Object *)StringLiteral_Bundle_shown__but_all_items_are_,(MethodInfo *)0x0)
              ;
              return;
            }
            piVar9 = &(pBVar1->fields).originalPrice;
            iVar10 = (accessoryData->fields)._.discount;
            (pBVar1->fields).price = *piVar9;
            pTVar11 = (pBVar1->fields).originalPriceText;
            if ((pTVar11 != (Text *)0x0) &&
               (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_gameObject((Component_1 *)pTVar11,(MethodInfo *)0x0),
               pGVar3 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar3,0 < iVar10,(MethodInfo *)0x0);
              pGVar3 = (pBVar1->fields).discountTag;
              if (pGVar3 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar3,0 < iVar10,(MethodInfo *)0x0);
                pTVar11 = (pBVar1->fields).goldSavedText;
                if ((pTVar11 != (Text *)0x0) &&
                   (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_1_get_gameObject((Component_1 *)pTVar11,(MethodInfo *)0x0),
                   pGVar3 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar3,0 < iVar10,(MethodInfo *)0x0);
                  pGVar3 = (pBVar1->fields).claimText;
                  if (pGVar3 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar3,0,(MethodInfo *)0x0);
                    if (iVar10 < 1) {
                      pTVar11 = (pBVar1->fields).discountedPriceText;
                      if ((pTVar11 == (Text *)0x0) ||
                         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_1_get_gameObject
                                             ((Component_1 *)pTVar11,(MethodInfo *)0x0),
                         pGVar3 == (GameObject *)0x0)) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar3,0,(MethodInfo *)0x0);
                      pTVar11 = (pBVar1->fields).bundlePriceWithoutDiscount;
                      if ((pTVar11 == (Text *)0x0) ||
                         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_1_get_gameObject
                                             ((Component_1 *)pTVar11,(MethodInfo *)0x0),
                         pGVar3 == (GameObject *)0x0)) goto code_?;
                      this._0_1_ = 1;
                    }
                    else {
                      pTVar11 = (pBVar1->fields).discountTagText;
                      pSVar12 = (String *)func_?(&stack0xfffffff8,0);
                      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000)
                           != 0) && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                        func_?(TypeInfo__System__String);
                      }
                      pSVar12 = mscorlib.dll::System::String::String_Concat_3
                                          (::StringLiteral__,pSVar12,::StringLiteral__,
                                           (MethodInfo *)0x0);
                      if (pTVar11 == (Text *)0x0) goto code_?;
                      (*(code *)(pTVar11->klass->vtable).set_text.method)
                                (pTVar11,pSVar12,
                                 (pTVar11->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
                      ;
                      iVar5 = *piVar9;
                      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
                        func_?(TypeInfo__UnityEngine__Mathf);
                      }
                      iVar10 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                                         (((float)iVar10 / _UNK_?) * (float)iVar5,
                                          (MethodInfo *)0x0);
                      pTVar11 = (pBVar1->fields).originalPriceText;
                      (pBVar1->fields).price = *piVar9 - iVar10;
                      pSVar12 = (String *)func_?(piVar9,StringLiteral_N0,0);
                      if ((pSVar12 == (String *)0x0) ||
                         (pSVar12 = mscorlib.dll::System::String::String_Replace_1
                                              (pSVar12,::StringLiteral__,::StringLiteral__,
                                               (MethodInfo *)0x0), pTVar11 == (Text *)0x0))
                      goto code_?;
                      (*(code *)(pTVar11->klass->vtable).set_text.method)
                                (pTVar11,pSVar12,
                                 (pTVar11->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
                      ;
                      pTVar11 = (pBVar1->fields).goldSavedText;
                      pSVar12 = (String *)func_?(&stack0xfffffff0,StringLiteral_N0,0);
                      if ((pSVar12 == (String *)0x0) ||
                         (pSVar12 = mscorlib.dll::System::String::String_Replace_1
                                              (pSVar12,::StringLiteral__,::StringLiteral__,
                                               (MethodInfo *)0x0), pTVar11 == (Text *)0x0))
                      goto code_?;
                      (*(code *)(pTVar11->klass->vtable).set_text.method)
                                (pTVar11,pSVar12,
                                 (pTVar11->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
                      ;
                      pTVar11 = (pBVar1->fields).discountedPriceText;
                      if ((pTVar11 == (Text *)0x0) ||
                         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_1_get_gameObject
                                             ((Component_1 *)pTVar11,(MethodInfo *)0x0),
                         pGVar3 == (GameObject *)0x0)) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar3,1,(MethodInfo *)0x0);
                      pTVar11 = (pBVar1->fields).bundlePriceWithoutDiscount;
                      if ((pTVar11 == (Text *)0x0) ||
                         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_1_get_gameObject
                                             ((Component_1 *)pTVar11,(MethodInfo *)0x0),
                         pGVar3 == (GameObject *)0x0)) goto code_?;
                      this._0_1_ = 0;
                    }
                    piVar9 = &(pBVar1->fields).price;
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar3,(bool)this,(MethodInfo *)0x0);
                    if (*piVar9 == 0) {
                      pGVar3 = (pBVar1->fields).discountTag;
                      if (pGVar3 == (GameObject *)0x0) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar3,0,(MethodInfo *)0x0);
                      pTVar11 = (pBVar1->fields).discountedPriceText;
                      if ((pTVar11 == (Text *)0x0) ||
                         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_1_get_gameObject
                                             ((Component_1 *)pTVar11,(MethodInfo *)0x0),
                         pGVar3 == (GameObject *)0x0)) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar3,0,(MethodInfo *)0x0);
                      pTVar11 = (pBVar1->fields).bundlePriceWithoutDiscount;
                      if ((pTVar11 == (Text *)0x0) ||
                         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_1_get_gameObject
                                             ((Component_1 *)pTVar11,(MethodInfo *)0x0),
                         pGVar3 == (GameObject *)0x0)) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar3,0,(MethodInfo *)0x0);
                      pTVar11 = (pBVar1->fields).originalPriceText;
                      if ((pTVar11 == (Text *)0x0) ||
                         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_1_get_gameObject
                                             ((Component_1 *)pTVar11,(MethodInfo *)0x0),
                         pGVar3 == (GameObject *)0x0)) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar3,0,(MethodInfo *)0x0);
                      pTVar11 = (pBVar1->fields).goldSavedText;
                      if ((pTVar11 == (Text *)0x0) ||
                         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_1_get_gameObject
                                             ((Component_1 *)pTVar11,(MethodInfo *)0x0),
                         pGVar3 == (GameObject *)0x0)) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar3,0,(MethodInfo *)0x0);
                      pGVar3 = (pBVar1->fields).claimText;
                      if (pGVar3 == (GameObject *)0x0) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar3,1,(MethodInfo *)0x0);
                    }
                    pTVar11 = (pBVar1->fields).discountedPriceText;
                    pSVar12 = (String *)func_?();
                    if ((pSVar12 != (String *)0x0) &&
                       (pSVar12 = mscorlib.dll::System::String::String_Replace_1
                                            (pSVar12,::StringLiteral__,::StringLiteral__,
                                             (MethodInfo *)0x0), pTVar11 != (Text *)0x0)) {
                      (*(code *)(pTVar11->klass->vtable).set_text.method)
                                (pTVar11,pSVar12,
                                 (pTVar11->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
                      ;
                      pTVar11 = (pBVar1->fields).bundlePriceWithoutDiscount;
                      pSVar12 = (String *)func_?(piVar9,StringLiteral_N0,0);
                      if ((pSVar12 != (String *)0x0) &&
                         (pSVar12 = mscorlib.dll::System::String::String_Replace_1
                                              (pSVar12,::StringLiteral__,::StringLiteral__,
                                               (MethodInfo *)0x0), pTVar11 != (Text *)0x0)) {
                        (*(code *)(pTVar11->klass->vtable).set_text.method)
                                  (pTVar11,pSVar12,
                                   (pTVar11->klass->vtable).CalculateLayoutInputHorizontal_1.
                                   methodPtr);
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
code_?:
  func_?(0);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::BundleView::BundleView_Initialize(BundleView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__AccessoryDataManager);
  }
  pAVar1 = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleClient((MethodInfo *)0x0);
  (this->fields).bundleData = pAVar1;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      pOVar2 = System.dll::System::Collections::Generic::
               SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
               Single,System::Object]::
               SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                         ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                           *)this_01,(MethodInfo *)0x0);
      pAVar1 = (this->fields).bundleData;
      if (pAVar1 != (AccessoryBundleClient *)0x0) {
        if ((int)pOVar2 < (pAVar1->fields)._.level) {
          BundleView_HandleLevel(this,pAVar1,(MethodInfo *)0x0);
          return;
        }
        BundleView_HandlePrices(this,pAVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnBundlePurchaseClicked() */

void Assembly-CSharp.dll::BundleView::BundleView_OnBundlePurchaseClicked
               (BundleView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = (MethodInfo *)&UNK_?;
    pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar3 != (MVLocalPlayer *)0x0) {
      pOVar4 = System.dll::System::Collections::Generic::
               SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
               Single,System::Object]::
               SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                         ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                           *)pMVar3,(MethodInfo *)0x0);
      pAVar5 = (this->fields).bundleData;
      if (pAVar5 != (AccessoryBundleClient *)0x0) {
        if ((int)pOVar4 < (pAVar5->fields)._.level) {
          pSVar6 = (ScaleAnimationBase *)
                   func_?(TypeInfo__BundleView___OnBundlePurchaseClicked_c__AnonStorey0);
          ScaleAnimationBase::ScaleAnimationBase_Play(pSVar6,0.0,pMVar2);
          pXVar7 = (XpBoostParticlePreviewer *)(this->fields).levelErrorPopUp;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          pXVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                              (pXVar7,
                               LevelErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<LevelErrorPopup>_LevelErrorPopup_
                              );
          if (pSVar6 != (ScaleAnimationBase *)0x0) {
            (pSVar6->fields)._._._._.m_CachedPtr = pXVar7;
            pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                                ((Component_1 *)this,(MethodInfo *)0x0);
            pUVar9 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?(
                                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                        );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar9,(Object *)pSVar6,
                       MethodInfo__BundleView___OnBundlePurchaseClicked_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                      );
            if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      (pGVar8,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar9,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            this_02 = (pSVar6->fields)._._._._.m_CachedPtr;
            pUVar9 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar9,(Object *)this,MethodInfo__BundleView__OnInsufficientLevelCallback__,
                       (MethodInfo *)0x0);
            pAVar5 = (this->fields).bundleData;
            if ((pAVar5 != (AccessoryBundleClient *)0x0) && (this_02 != (LevelErrorPopup *)0x0)) {
              LevelErrorPopup::LevelErrorPopup_Initialize
                        (this_02,(UnityAction *)pUVar9,(pAVar5->fields)._.level,(MethodInfo *)0x0)
              ;
              return;
            }
          }
        }
        else {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar1 != (MVNetworkGame *)0x0) {
            pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
            if (pMVar3 != (MVLocalPlayer *)0x0) {
              pMVar2 = (MethodInfo *)&UNK_?;
              iVar10 = GamePointGainEffect::GamePointGainEffect_get_ID
                                ((GamePointGainEffect *)pMVar3,(MethodInfo *)0x0);
              if (iVar10 != 0) {
                if (*(int *)(iVar10 + 0x10) < (this->fields).price) {
                  pSVar6 = (ScaleAnimationBase *)
                           func_?(
                                          TypeInfo__BundleView___OnBundlePurchaseClicked_c__AnonStorey1
                                          );
                  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar6,0.0,pMVar2);
                  pXVar7 = (XpBoostParticlePreviewer *)(this->fields).bundleErrorPopUp;
                  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                    func_?(TypeInfo__UnityEngine__Object);
                  }
                  pXVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                            Object_1_Instantiate_251
                                      (pXVar7,
                                       BundleErrorPopUp_MethodInfo__UnityEngine__Object__Instantiate<BundleErrorPopUp>_BundleErrorPopUp_
                                      );
                  if (pSVar6 != (ScaleAnimationBase *)0x0) {
                    (pSVar6->fields)._._._._.m_CachedPtr = pXVar7;
                    pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_1_get_gameObject((Component_1 *)this,(MethodInfo *)0x0);
                    pUVar9 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                               *)func_?(
                                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                                );
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (pUVar9,(Object *)pSVar6,
                               MethodInfo__BundleView___OnBundlePurchaseClicked_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                               ,
                               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                              );
                    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                                methodPtr & 0x2000000) != 0) &&
                       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)
                       ) {
                      func_?();
                    }
                    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_ExecuteHierarchy_63
                              (pGVar8,(BaseEventData *)0x0,
                               (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar9,
                               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                              );
                    this_01 = (pSVar6->fields)._._._._.m_CachedPtr;
                    pUVar9 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                               *)func_?();
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (pUVar9,(Object *)this,
                               MethodInfo__BundleView__OnInsufficientResourceCallback_bool_,
                               MethodInfo__UnityEngine__Events__UnityAction<bool>__UnityAction_System__Object__void__
                              );
                    header = TM::TM__(StringLiteral_NOT_ENOUGH_GOLD,(MethodInfo *)0x0);
                    buttonText = TM::TM__(StringLiteral_Get_Gold,(MethodInfo *)0x0);
                    if (this_01 != (BundleErrorPopUp *)0x0) {
                      BundleErrorPopUp::BundleErrorPopUp_Initialize
                                (this_01,(UnityAction_1_System_Boolean_ *)pUVar9,header,buttonText,
                                 (MethodInfo *)0x0);
                      return;
                    }
                  }
                }
                else {
                  pSVar6 = (ScaleAnimationBase *)
                           func_?(
                                          TypeInfo__BundleView___OnBundlePurchaseClicked_c__AnonStorey2
                                          );
                  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar6,0.0,pMVar2);
                  pBVar11 = (this->fields).bundlePurchasePopup;
                  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                    func_?(TypeInfo__UnityEngine__Object);
                  }
                  pBVar11 = (BundlePurchasePopUp *)
                           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                                     ((XpBoostParticlePreviewer *)pBVar11,
                                      BundlePurchasePopUp_MethodInfo__UnityEngine__Object__Instantiate<BundlePurchasePopUp>_BundlePurchasePopUp_
                                     );
                  if (pSVar6 != (ScaleAnimationBase *)0x0) {
                    (pSVar6->fields)._._._._.m_CachedPtr = pBVar11;
                    pAVar5 = (this->fields).bundleData;
                    iVar10 = (this->fields).originalPrice;
                    pUVar9 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                               *)func_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (pUVar9,(Object *)this,
                               MethodInfo__BundleView__OnPurchaseBundleConfirmation_bool_,
                               MethodInfo__UnityEngine__Events__UnityAction<bool>__UnityAction_System__Object__void__
                              );
                    if (pBVar11 != (BundlePurchasePopUp *)0x0) {
                      (pBVar11->fields).bundleDataClient = pAVar5;
                      (pBVar11->fields).originalPrice = iVar10;
                      (pBVar11->fields).resultCallback = (UnityAction_1_System_Boolean_ *)pUVar9;
                      pTVar12 = (pBVar11->fields).priceText;
                      uVar13 = func_?(&stack0xfffffff8,0);
                      if (pTVar12 != (Text *)0x0) {
                        (*(code *)*(MethodInfo **)((int)&pTVar12->klass->vtable + 0x24c))
                                  (pTVar12,uVar13,
                                   ((VirtualInvokeData *)((int)&pTVar12->klass->vtable + 0x250))->
                                   methodPtr);
                        BundlePurchasePopUp::BundlePurchasePopUp_HandlePrices
                                  (pBVar11,(pBVar11->fields).bundleDataClient,(MethodInfo *)0x0);
                        pAVar5 = (pBVar11->fields).bundleDataClient;
                        if ((pAVar5 != (AccessoryBundleClient *)0x0) &&
                           (pAVar14 = (pBVar11->fields).timeLimitDisplayer,
                           pAVar14 != (AccessoryTimeLimitDisplayer *)0x0)) {
                          MaterialDescription::MaterialDescription_set_SpecialProperties
                                    ((MaterialDescription *)pAVar14,
                                     (BitArray *)
                                     *(AccessoryTimelimit **)((int)&(pAVar5->fields)._ + 0x18),
                                     (MethodInfo *)0x0);
                          pAVar14 = (pBVar11->fields).timeLimitDisplayer;
                          if (pAVar14 != (AccessoryTimeLimitDisplayer *)0x0) {
                            pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_1_get_gameObject
                                                ((Component_1 *)pAVar14,(MethodInfo *)0x0);
                            pAVar5 = (pBVar11->fields).bundleDataClient;
                            if ((pAVar5 != (AccessoryBundleClient *)0x0) &&
                               (this_00 = *(AccessoryTimelimit **)((int)&(pAVar5->fields)._ + 0x18)
                               , this_00 != (AccessoryTimelimit *)0x0)) {
                              value = MVWorldObject.dll::MV::WorldObject::Accessories::
                                      AccessoryTimelimit::AccessoryTimelimit_get_IsTimeLimited
                                                (this_00,(MethodInfo *)0x0);
                              if (pGVar8 != (GameObject *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive(pGVar8,value,(MethodInfo *)0x0);
                                pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                          Component_1_get_gameObject
                                                    ((Component_1 *)this,(MethodInfo *)0x0);
                                pUVar9 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                           *)func_?(
                                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                                  );
                                UnityEngine.CoreModule.dll::UnityEngine::Events::
                                UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine::
                                SceneManagement::Scene]::
                                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                          (pUVar9,(Object *)pSVar6,
                                           MethodInfo__BundleView___OnBundlePurchaseClicked_c__AnonStorey2____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                                           ,
                                           MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                                          );
                                if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->
                                            vtable).Equals.methodPtr & 0x2000000) != 0) &&
                                   ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                                    cctor_started == 0)) {
                                  func_?();
                                }
                                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                                ExecuteEvents_ExecuteHierarchy_63
                                          (pGVar8,(BaseEventData *)0x0,
                                           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar9,
                                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                                          );
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
  func_?(0);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnInsufficientResourceCallback(Boolean) */

void Assembly-CSharp.dll::BundleView::BundleView_OnInsufficientResourceCallback
               (BundleView *this,bool confirmed,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__BundleView->static_fields->__f__am_cache3 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__BundleView___OnInsufficientResourceCallback_m__3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__BundleView->static_fields->__f__am_cache3 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__BundleView->static_fields->__f__am_cache3;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (confirmed == 0) {
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


/* Void OnPop() */

void Assembly-CSharp.dll::BundleView::BundleView_OnPop(BundleView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__BundleView->static_fields->__f__am_cache2 ==
      (ExecuteEvents_EventFunction_1_IBundleController_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IBundleController>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__BundleView___OnPop_m__2_UnityEngine__EventSystems__IBundleController__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IBundleController>__EventFunction_System__Object__void__
              );
    TypeInfo__BundleView->static_fields->__f__am_cache2 =
         (ExecuteEvents_EventFunction_1_IBundleController_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__BundleView->static_fields->__f__am_cache2;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IBundleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IBundleController>_
            );
  return;
}


/* Void OnPurchaseBundleConfirmation(Boolean) */

void Assembly-CSharp.dll::BundleView::BundleView_OnPurchaseBundleConfirmation
               (BundleView *this,bool confirmed,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (confirmed == 0) {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__BundleView->static_fields->__f__am_cache0 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar1,(Object *)0x0,
                 MethodInfo__BundleView___OnPurchaseBundleConfirmation_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      TypeInfo__BundleView->static_fields->__f__am_cache0 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar1;
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__BundleView->static_fields->__f__am_cache0;
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
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 != (MVNetworkGame *)0x0) {
    pAVar3 = (pMVar2->fields).PurchaseProductResponseHandler;
    pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar1,(Object *)this,
               MethodInfo__BundleView__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
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
    if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__AccessoryDataManager);
    }
    bundleId = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleId((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PurchaseAvatarAccessoryBundle
                (this_00,bundleId,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pAVar4 = extraout_ECX;
  pAVar5 = extraout_EDX;
code_?:
  func_?(pAVar4,pAVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ProductPurchaseResponseHandler(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::BundleView::BundleView_ProductPurchaseResponseHandler
               (BundleView *this,int32_t returnCode,
               Dictionary_2_System_Object_System_Object_ *purchaseResponseData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_01 = TypeInfo__BundleView___ProductPurchaseResponseHandler_c__AnonStorey6;
  pSVar1 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,(MethodInfo *)method_01);
  if (pSVar1 == (ScaleAnimationBase *)0x0) goto code_?;
  (pSVar1->fields)._._._._.m_CachedPtr = (void *)returnCode;
  (pSVar1->fields).state = (int32_t)this;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  returnCode = (int32_t)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((MVNetworkGame *)returnCode == (MVNetworkGame *)0x0) goto code_?;
  method_02 = (((MVNetworkGame *)returnCode)->fields).PurchaseProductResponseHandler;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(
                          TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                          );
  method_00 = (MethodInfo *)&UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__BundleView__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,
             MethodInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Action_System__Object__void__
            );
  pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)method_02,(Delegate *)pUVar2,(MethodInfo *)0x0);
  iVar4 = returnCode;
  pDVar5 = (Delegate *)0x0;
  if (pDVar3 == (Delegate *)0x0) {
code_?:
    purchaseResponseData = (Dictionary_2_System_Object_System_Object_ *)0x0;
    returnCode = (int32_t)this;
    *(Delegate **)(iVar4 + 0xb4) = pDVar5;
    returnCode = (int32_t)UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_gameObject((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__BundleView->static_fields->__f__am_cache1 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      method = (MethodInfo *)&UNK_?;
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__BundleView___ProductPurchaseResponseHandler_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      TypeInfo__BundleView->static_fields->__f__am_cache1 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar2;
      this = (BundleView *)&UNK_?;
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__BundleView->static_fields->__f__am_cache1;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      method = (MethodInfo *)&UNK_?;
      func_?();
    }
    purchaseResponseData = (Dictionary_2_System_Object_System_Object_ *)0x0;
    method = (MethodInfo *)callbackFunction;
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              ((GameObject *)returnCode,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pvVar6 = (pSVar1->fields)._._._._.m_CachedPtr;
    if (pvVar6 != (void *)0x0) {
      if (pvVar6 == (void *)0x1) {
        pSVar1 = (ScaleAnimationBase *)func_?();
        ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,method_00);
        pXVar7 = (XpBoostParticlePreviewer *)(this->fields).bundleErrorPopUp;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pXVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                            (pXVar7,
                             BundleErrorPopUp_MethodInfo__UnityEngine__Object__Instantiate<BundleErrorPopUp>_BundleErrorPopUp_
                            );
        if (pSVar1 != (ScaleAnimationBase *)0x0) {
          (pSVar1->fields)._._._._.m_CachedPtr = pXVar7;
          returnCode = (int32_t)UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_1_get_gameObject((Component_1 *)this,(MethodInfo *)0x0);
          pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                     );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar2,(Object *)pSVar1,
                     MethodInfo__BundleView___ProductPurchaseResponseHandler_c__AnonStorey5____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
                    ((GameObject *)returnCode,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          this_00 = (pSVar1->fields)._._._._.m_CachedPtr;
          pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar2,(Object *)this,
                     MethodInfo__BundleView__OnInsufficientResourceCallback_bool_,
                     MethodInfo__UnityEngine__Events__UnityAction<bool>__UnityAction_System__Object__void__
                    );
          header = TM::TM__(StringLiteral_NOT_ENOUGH_GOLD,(MethodInfo *)0x0);
          buttonText = TM::TM__(StringLiteral_Get_Gold,(MethodInfo *)0x0);
          if (this_00 != (BundleErrorPopUp *)0x0) {
            BundleErrorPopUp::BundleErrorPopUp_Initialize
                      (this_00,(UnityAction_1_System_Boolean_ *)pUVar2,header,buttonText,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        if (pvVar6 != (void *)0x6) {
          pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)this,(MethodInfo *)0x0);
          pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          method = (MethodInfo *)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar2,(Object *)pSVar1,
                     MethodInfo__BundleView___ProductPurchaseResponseHandler_c__AnonStorey6____m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
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
                    (pGVar8,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                    );
          return;
        }
        pSVar1 = (ScaleAnimationBase *)func_?();
        ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,method_00);
        pXVar7 = (XpBoostParticlePreviewer *)(this->fields).levelErrorPopUp;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pXVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                            (pXVar7,
                             LevelErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<LevelErrorPopup>_LevelErrorPopup_
                            );
        if (pSVar1 != (ScaleAnimationBase *)0x0) {
          (pSVar1->fields)._._._._.m_CachedPtr = pXVar7;
          returnCode = (int32_t)UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_1_get_gameObject((Component_1 *)this,(MethodInfo *)0x0);
          pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                     );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar2,(Object *)pSVar1,
                     MethodInfo__BundleView___ProductPurchaseResponseHandler_c__AnonStorey4____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
                    ((GameObject *)returnCode,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          this_01 = (pSVar1->fields)._._._._.m_CachedPtr;
          pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar2,(Object *)this,MethodInfo__BundleView__OnInsufficientLevelCallback__,
                     (MethodInfo *)0x0);
          pAVar9 = (this->fields).bundleData;
          if ((pAVar9 != (AccessoryBundleClient *)0x0) && (this_01 != (LevelErrorPopup *)0x0)) {
            LevelErrorPopup::LevelErrorPopup_Initialize
                      (this_01,(UnityAction *)pUVar2,(pAVar9->fields)._.level,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto code_?;
    }
    this_02 = (ScaleAnimationBase *)func_?();
    object = this_02;
    ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,(MethodInfo *)method_02);
    if (this_02 == (ScaleAnimationBase *)0x0) goto code_?;
    (this_02->fields).state = (int32_t)pSVar1;
    returnCode = CONCAT13(0x6c,(undefined3)returnCode);
    key = (Type *)func_?(TypeInfo__System__Byte,(int)&returnCode + 3);
    if (purchaseResponseData == (Dictionary_2_System_Object_System_Object_ *)0x0)
    goto code_?;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)purchaseResponseData,key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0
        ) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
      func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
    }
    value = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            0x0;
    if (pUVar2 != (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)0x0) {
      if ((String__Class *)pUVar2->klass == TypeInfo__System__String) {
        value = pUVar2;
      }
      pSVar10 = TypeInfo__System__String;
      if (value == (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)0x0) goto code_?;
    }
    this_03 = (AccessoryDataClient *)
              Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
                        ((String *)value,
                         System__Collections__Generic__List<int>_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<System::Collections::Generic::List<int>_>_System__String_
                        );
    if (this_03 != (AccessoryDataClient *)0x0) {
      pOVar11 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_03,
                          MethodInfo__System__Collections__Generic__List<int>__get_Count__);
      previewAccessories =
           (AccessoryDataClient__Array *)func_?(TypeInfo__AccessoryDataClient,pOVar11);
      pSVar1 = (ScaleAnimationBase *)0x0;
      while( true ) {
        pOVar11 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_03,
                            MethodInfo__System__Collections__Generic__List<int>__get_Count__);
        pXVar7 = _UNK_?;
        if ((int)pOVar11 <= (int)pSVar1) break;
        iVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                List_1_System_Int32__get_Item
                          ((List_1_System_Int32_ *)this_03,(int32_t)pSVar1,
                           MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
        if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
          func_?(TypeInfo__AccessoryDataManager);
        }
        pAVar12 = AccessoryDataManager::AccessoryDataManager_GetAccessoryDataByStreamingAssetId
                            (iVar4,(MethodInfo *)0x0);
        if (pAVar12 != (AccessoryDataClient *)0x0) {
          if (previewAccessories == (AccessoryDataClient__Array *)0x0) goto code_?;
          func_?(previewAccessories,pAVar12);
          object = pSVar1;
          func_?();
          this_03 = pAVar12;
        }
        pSVar1 = (ScaleAnimationBase *)((int)&pSVar1->klass + 1);
      }
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      this_04 = (PurchasedAccessoryPreviewer *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                          (pXVar7,
                           PurchasedAccessoryPreviewer_MethodInfo__UnityEngine__Object__Instantiate<PurchasedAccessoryPreviewer>_PurchasedAccessoryPreviewer_
                          );
      (object->fields)._._._._.m_CachedPtr = this_04;
      if (this_04 != (PurchasedAccessoryPreviewer *)0x0) {
        PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_Initialize
                  (this_04,previewAccessories,(MethodInfo *)0x0);
        pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)&UNK_?,(MethodInfo *)0x0);
        this_05 = (Dictionary_2_System_Object_System_Object_ *)
                  func_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  ((UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)this_05,(Object *)object,
                   MethodInfo__BundleView___ProductPurchaseResponseHandler_c__AnonStorey3____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          method = (MethodInfo *)TypeInfo__UnityEngine__EventSystems__ExecuteEvents;
          purchaseResponseData = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
          func_?();
        }
        method = 
        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
        ;
        returnCode = 0;
        purchaseResponseData = this_05;
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (pGVar8,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_05,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
    }
  }
  else {
    if ((Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object___Class
         *)pDVar3->klass ==
        TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
       ) {
      pDVar5 = pDVar3;
    }
    if (pDVar5 != (Delegate *)0x0) goto code_?;
    purchaseResponseData =
         (Dictionary_2_System_Object_System_Object_ *)
         TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
    ;
    returnCode = (int32_t)pDVar3;
    func_?();
    pSVar10 = extraout_ECX;
code_?:
    func_?(pUVar2,pSVar10);
  }
code_?:
  func_?(0);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void <OnInsufficientResourceCallback>m__3(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::BundleView::BundleView__OnInsufficientResourceCallback_m__3
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


/* Void <OnPop>m__2(IBundleController, BaseEventData) */

void Assembly-CSharp.dll::BundleView::BundleView__OnPop_m__2
               (IBundleController *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IBundleController *)0x0) {
    func_?(1,TypeInfo__UnityEngine__EventSystems__IBundleController,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnPurchaseBundleConfirmation>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::BundleView::BundleView__OnPurchaseBundleConfirmation_m__0
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

void Assembly-CSharp.dll::BundleView::BundleView__ProductPurchaseResponseHandler_m__1
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


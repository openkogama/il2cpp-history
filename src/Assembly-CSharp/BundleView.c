
/* Void HandleLevel(AccessoryBundleClient) */

void Assembly-CSharp.dll::BundleView::BundleView_HandleLevel
               (BundleView *this,AccessoryBundleClient *accessoryData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).purchaseButton;
  if (this_00 != (Button *)0x0) {
    pIVar1 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                       ((Selectable *)this_00,(MethodInfo *)0x0);
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    pCVar2 = Styles::Styles_GetColor(&CStack_3,ColorStyle__Enum_DisabledButton,(MethodInfo *)0x0);
    if (pIVar1 != (Image *)0x0) {
      (*(code *)(pIVar1->klass->vtable).set_color.method)
                (pIVar1,pCVar2->r,pCVar2->g,pCVar2->b,pCVar2->a,
                 (pIVar1->klass->vtable).get_raycastTarget.methodPtr);
      this_01 = (this->fields).shineEffect;
      if (this_01 != (AccessoryShinyButton *)0x0) {
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_01,(MethodInfo *)0x0);
        if (pGVar4 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,0,(MethodInfo *)0x0);
          pIVar1 = (this->fields).levelLocked;
          if (pIVar1 != (Image *)0x0) {
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pIVar1,(MethodInfo *)0x0);
            if (pGVar4 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar4,1,(MethodInfo *)0x0);
              pTVar5 = (this->fields).originalPriceText;
              if (pTVar5 != (Text *)0x0) {
                pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pTVar5,(MethodInfo *)0x0);
                if (pGVar4 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar4,0,(MethodInfo *)0x0);
                  pTVar5 = (this->fields).discountedPriceText;
                  if (pTVar5 != (Text *)0x0) {
                    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_gameObject((Component *)pTVar5,(MethodInfo *)0x0);
                    if (pGVar4 != (GameObject *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar4,0,(MethodInfo *)0x0);
                      pTVar5 = (this->fields).bundlePriceWithoutDiscount;
                      if (pTVar5 != (Text *)0x0) {
                        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_get_gameObject((Component *)pTVar5,(MethodInfo *)0x0);
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
                                       Component_get_gameObject
                                                 ((Component *)pTVar5,(MethodInfo *)0x0);
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
  func_?();
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
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Item_int_
                   );
    func_?(&TypeInfo__Styles);
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_N0);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_Bundle_shown__but_all_items_are_);
    cRam_? = '\x01';
  }
  this = (BundleView *)0x0;
  piVar2 = &(pBVar1->fields).originalPrice;
  pIVar3 = (pBVar1->fields).levelLocked;
  *piVar2 = 0;
  if ((pIVar3 != (Image *)0x0) &&
     (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pIVar3,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar4,0,(MethodInfo *)0x0);
    this_00 = (pBVar1->fields).purchaseButton;
    if (this_00 != (Button *)0x0) {
      pIVar3 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                         ((Selectable *)this_00,(MethodInfo *)0x0);
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pCVar5 = Styles::Styles_GetColor
                         ((Color *)&stack0xffffffe4,ColorStyle__Enum_ButtonSuccess,(MethodInfo *)0x0
                         );
      if (pIVar3 != (Image *)0x0) {
        (*(code *)(pIVar3->klass->vtable).set_color.method)
                  (pIVar3,pCVar5->r,pCVar5->g,pCVar5->b,pCVar5->a,
                   (pIVar3->klass->vtable).get_raycastTarget.methodPtr);
        this_01 = (pBVar1->fields).shineEffect;
        if (((this_01 != (AccessoryShinyButton *)0x0) &&
            (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this_01,(MethodInfo *)0x0),
            pGVar4 != (GameObject *)0x0)) &&
           (UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar4,1,(MethodInfo *)0x0), accessoryData != (AccessoryBundleClient *)0x0))
        {
          this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    (accessoryData->fields)._.accessoryBundleItems;
          index = 0;
          if (this_02 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
            for (; index < (this_02->fields)._size; index = index + 1) {
              RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                (this_02,index,
                                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Item_int_
                                );
              if (RVar6 == (RegexCharClass_SingleRange)0x0) goto code_?;
              pAVar7 = AccessoryDataManager::AccessoryDataManager_GetAccessoryDataByMetaDataId
                                 (*(int32_t *)((int)RVar6 + 0xc),(MethodInfo *)0x0);
              if ((pAVar7 != (AccessoryDataClient *)0x0) && ((pAVar7->fields)._.owns == 0)) {
                *piVar2 = *piVar2 + (pAVar7->fields)._.cost;
                this = (BundleView *)((int)&this->klass + 1);
              }
            }
            if (this == (BundleView *)0x0) {
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                        ((Object *)StringLiteral_Bundle_shown__but_all_items_are_,(MethodInfo *)0x0)
              ;
              return;
            }
            IVar8.m_value = (accessoryData->fields)._.discount;
            (pBVar1->fields).price = *piVar2;
            pTVar9 = (pBVar1->fields).originalPriceText;
            if ((pTVar9 != (Text *)0x0) &&
               (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pTVar9,(MethodInfo *)0x0),
               pGVar4 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar4,0 < IVar8.m_value,(MethodInfo *)0x0);
              pGVar4 = (pBVar1->fields).discountTag;
              if (pGVar4 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar4,0 < IVar8.m_value,(MethodInfo *)0x0);
                pTVar9 = (pBVar1->fields).goldSavedText;
                if ((pTVar9 != (Text *)0x0) &&
                   (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_gameObject((Component *)pTVar9,(MethodInfo *)0x0),
                   pGVar4 != (GameObject *)0x0)) {
                  IVar10.m_value = (int32_t)(0 < IVar8.m_value);
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar4,0 < IVar8.m_value,(MethodInfo *)0x0);
                  pGVar4 = (pBVar1->fields).claimText;
                  if (pGVar4 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar4,0,(MethodInfo *)0x0);
                    if (IVar10.m_value < 1) {
                      pTVar9 = (pBVar1->fields).discountedPriceText;
                      if ((pTVar9 == (Text *)0x0) ||
                         (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_get_gameObject((Component *)pTVar9,(MethodInfo *)0x0),
                         pGVar4 == (GameObject *)0x0)) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar4,0,(MethodInfo *)0x0);
                      pTVar9 = (pBVar1->fields).bundlePriceWithoutDiscount;
                      if ((pTVar9 == (Text *)0x0) ||
                         (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_get_gameObject((Component *)pTVar9,(MethodInfo *)0x0),
                         pGVar4 == (GameObject *)0x0)) goto code_?;
                      this._0_1_ = 1;
                    }
                    else {
                      pSVar11 = mscorlib.dll::System::Int32::Int32_ToString
                                          ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
                      mscorlib.dll::System::String::String_Concat_4
                                (::StringLiteral__,pSVar11,::StringLiteral__,(MethodInfo *)0x0);
                      (**(code **)(_UNK_? + 0x318))();
                      if (cRam_? == '\0') {
                        func_?();
                        cRam_? = '\x01';
                      }
                      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      fVar12 = (float10)func_?();
                      (pBVar1->fields).price = *piVar2 - (int)fVar12;
                      pTVar9 = (pBVar1->fields).originalPriceText;
                      pSVar11 = mscorlib.dll::System::Int32::Int32_ToString_1
                                          ((Int32 *)piVar2,StringLiteral_N0,(MethodInfo *)0x0);
                      if ((pSVar11 == (String *)0x0) ||
                         (pSVar11 = mscorlib.dll::System::String::String_Replace_1
                                              (pSVar11,::StringLiteral__,::StringLiteral__,
                                               (MethodInfo *)0x0), pTVar9 == (Text *)0x0))
                      goto code_?;
                      (*(code *)(pTVar9->klass->vtable).set_text.method)
                                (pTVar9,pSVar11,
                                 (pTVar9->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
                      ;
                      pTVar9 = (pBVar1->fields).goldSavedText;
                      pSVar11 = mscorlib.dll::System::Int32::Int32_ToString_1
                                          ((Int32 *)&stack0xfffffff4,StringLiteral_N0,
                                           (MethodInfo *)0x0);
                      if ((pSVar11 == (String *)0x0) ||
                         (pSVar11 = mscorlib.dll::System::String::String_Replace_1
                                              (pSVar11,::StringLiteral__,::StringLiteral__,
                                               (MethodInfo *)0x0), pTVar9 == (Text *)0x0))
                      goto code_?;
                      (*(code *)(pTVar9->klass->vtable).set_text.method)
                                (pTVar9,pSVar11,
                                 (pTVar9->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
                      ;
                      pTVar9 = (pBVar1->fields).discountedPriceText;
                      if ((pTVar9 == (Text *)0x0) ||
                         (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_get_gameObject((Component *)pTVar9,(MethodInfo *)0x0),
                         pGVar4 == (GameObject *)0x0)) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar4,1,(MethodInfo *)0x0);
                      pTVar9 = (pBVar1->fields).bundlePriceWithoutDiscount;
                      if ((pTVar9 == (Text *)0x0) ||
                         (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_get_gameObject((Component *)pTVar9,(MethodInfo *)0x0),
                         pGVar4 == (GameObject *)0x0)) goto code_?;
                      this._0_1_ = 0;
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar4,(bool)this,(MethodInfo *)0x0);
                    if ((pBVar1->fields).price == 0) {
                      pGVar4 = (pBVar1->fields).discountTag;
                      if (pGVar4 == (GameObject *)0x0) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar4,0,(MethodInfo *)0x0);
                      pTVar9 = (pBVar1->fields).discountedPriceText;
                      if ((pTVar9 == (Text *)0x0) ||
                         (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_get_gameObject((Component *)pTVar9,(MethodInfo *)0x0),
                         pGVar4 == (GameObject *)0x0)) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar4,0,(MethodInfo *)0x0);
                      pTVar9 = (pBVar1->fields).bundlePriceWithoutDiscount;
                      if ((pTVar9 == (Text *)0x0) ||
                         (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_get_gameObject((Component *)pTVar9,(MethodInfo *)0x0),
                         pGVar4 == (GameObject *)0x0)) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar4,0,(MethodInfo *)0x0);
                      pTVar9 = (pBVar1->fields).originalPriceText;
                      if ((pTVar9 == (Text *)0x0) ||
                         (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_get_gameObject((Component *)pTVar9,(MethodInfo *)0x0),
                         pGVar4 == (GameObject *)0x0)) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar4,0,(MethodInfo *)0x0);
                      pTVar9 = (pBVar1->fields).goldSavedText;
                      if ((pTVar9 == (Text *)0x0) ||
                         (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_get_gameObject((Component *)pTVar9,(MethodInfo *)0x0),
                         pGVar4 == (GameObject *)0x0)) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar4,0,(MethodInfo *)0x0);
                      pGVar4 = (pBVar1->fields).claimText;
                      if (pGVar4 == (GameObject *)0x0) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar4,1,(MethodInfo *)0x0);
                    }
                    pTVar9 = (pBVar1->fields).discountedPriceText;
                    piVar2 = &(pBVar1->fields).price;
                    pSVar11 = mscorlib.dll::System::Int32::Int32_ToString_1
                                        ((Int32 *)piVar2,StringLiteral_N0,(MethodInfo *)0x0);
                    if ((pSVar11 != (String *)0x0) &&
                       (mscorlib.dll::System::String::String_Replace_1
                                  (pSVar11,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
                       pTVar9 != (Text *)0x0)) {
                      (*(code *)(pTVar9->klass->vtable).set_text.method)();
                      pTVar9 = (pBVar1->fields).bundlePriceWithoutDiscount;
                      pSVar11 = mscorlib.dll::System::Int32::Int32_ToString_1
                                          ((Int32 *)piVar2,StringLiteral_N0,(MethodInfo *)0x0);
                      if ((pSVar11 != (String *)0x0) &&
                         (pSVar11 = mscorlib.dll::System::String::String_Replace_1
                                              (pSVar11,::StringLiteral__,::StringLiteral__,
                                               (MethodInfo *)0x0), pTVar9 != (Text *)0x0)) {
                        (*(code *)(pTVar9->klass->vtable).set_text.method)
                                  (pTVar9,pSVar11,
                                   (pTVar9->klass->vtable).CalculateLayoutInputHorizontal_1.
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
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::BundleView::BundleView_Initialize(BundleView *this,MethodInfo *method)

{
  pAVar1 = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleClient((MethodInfo *)0x0);
  ppAVar2 = &(this->fields).bundleData;
  *ppAVar2 = pAVar1;
  func_?(ppAVar2,pAVar1);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if ((pMVar3 != (MVLocalPlayer *)0x0) &&
       (pAVar1 = *ppAVar2, pAVar1 != (AccessoryBundleClient *)0x0)) {
      if ((pMVar3->fields)._.level < (pAVar1->fields)._.level) {
        BundleView_HandleLevel(this,pAVar1,(MethodInfo *)0x0);
        return;
      }
      BundleView_HandlePrices(this,pAVar1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnBundlePurchaseClicked() */

void Assembly-CSharp.dll::BundleView::BundleView_OnBundlePurchaseClicked
               (BundleView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__BundleView__OnInsufficientLevelCallback__);
    func_?(&MethodInfo__BundleView__OnInsufficientResourceCallback_bool_);
    func_?(&MethodInfo__BundleView__OnPurchaseBundleConfirmation_bool_);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    BundleErrorPopUp_MethodInfo__UnityEngine__Object__Instantiate<BundleErrorPopUp>_BundleErrorPopUp_
                   );
    func_?(&
                    BundlePurchasePopUp_MethodInfo__UnityEngine__Object__Instantiate<BundlePurchasePopUp>_BundlePurchasePopUp_
                   );
    func_?(&
                    LevelErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<LevelErrorPopup>_LevelErrorPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__BundleView____c__DisplayClass18_0___OnBundlePurchaseClicked_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__BundleView____c__DisplayClass18_0);
    func_?(&
                    MethodInfo__BundleView____c__DisplayClass18_1___OnBundlePurchaseClicked_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__BundleView____c__DisplayClass18_1);
    func_?(&
                    MethodInfo__BundleView____c__DisplayClass18_2___OnBundlePurchaseClicked_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__BundleView____c__DisplayClass18_2);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<bool>);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    func_?(&StringLiteral_Get_Gold);
    func_?(&StringLiteral_NOT_ENOUGH_GOLD);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    method_00 = (MethodInfo *)&UNK_?;
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVLocalPlayer *)0x0) {
      pAVar3 = (this->fields).bundleData;
      if (pAVar3 != (AccessoryBundleClient *)0x0) {
        if ((pMVar2->fields)._.level < (pAVar3->fields)._.level) {
          pOVar4 = (Object *)func_?(TypeInfo__BundleView____c__DisplayClass18_0);
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    (pOVar4,ExceptionArgument__Enum_obj,method_00);
          original_01 = (this->fields).levelErrorPopUp;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          pOVar5 = (Object__Class *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)original_01,
                               LevelErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<LevelErrorPopup>_LevelErrorPopup_
                              );
          if (pOVar4 != (Object *)0x0) {
            pOVar6 = pOVar4 + 1;
            pOVar6->klass = pOVar5;
            func_?(pOVar6,pOVar5);
            IStack_7.m_value =
                 (int32_t)UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
            pEVar8 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                      func_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                     );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)pEVar8,pOVar4,
                       MethodInfo__BundleView____c__DisplayClass18_0___OnBundlePurchaseClicked_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
            }
            IVar9.m_value = IStack_7.m_value;
            IStack_7.m_value = (int32_t)&UNK_?;
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      ((GameObject *)IVar9.m_value,(BaseEventData *)0x0,pEVar8,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            pOVar5 = pOVar6->klass;
            this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?();
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (this_00,(Object *)this,MethodInfo__BundleView__OnInsufficientLevelCallback__,
                       (MethodInfo *)0x0);
            pAVar3 = (this->fields).bundleData;
            if ((pAVar3 != (AccessoryBundleClient *)0x0) && (pOVar5 != (Object__Class *)0x0)) {
              LevelErrorPopup::LevelErrorPopup_Initialize
                        ((LevelErrorPopup *)pOVar5,(UnityAction *)this_00,(pAVar3->fields)._.level
                         ,(MethodInfo *)0x0);
              return;
            }
          }
        }
        else {
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar1 != (MVNetworkGame *)0x0) {
            pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
            if ((pMVar2 != (MVLocalPlayer *)0x0) &&
               (pUVar10 = (pMVar2->fields)._._UserProfileData_k__BackingField,
               pUVar10 != (UserProfileData *)0x0)) {
              if ((pUVar10->fields).Gold < (this->fields).price) {
                IStack_7.m_value = (int32_t)&UNK_?;
                pOVar4 = (Object *)func_?();
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                          (pOVar4,ExceptionArgument__Enum_obj,method_00);
                original_00 = (this->fields).bundleErrorPopUp;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Object);
                }
                pOVar5 = (Object__Class *)
                          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                    ((Object *)original_00,
                                     BundleErrorPopUp_MethodInfo__UnityEngine__Object__Instantiate<BundleErrorPopUp>_BundleErrorPopUp_
                                    );
                if (pOVar4 != (Object *)0x0) {
                  pOVar6 = pOVar4 + 1;
                  pOVar6->klass = pOVar5;
                  func_?(pOVar6,pOVar5);
                  IStack_7.m_value =
                       (int32_t)UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                  pEVar8 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                            func_?(
                                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                           );
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                  Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                            ((UnityAction_2_System_Object_System_Object_ *)pEVar8,pOVar4,
                             MethodInfo__BundleView____c__DisplayClass18_1___OnBundlePurchaseClicked_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                             ,(MethodInfo *)0x0);
                  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                      cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  IVar9.m_value = IStack_7.m_value;
                  IStack_7.m_value = (int32_t)&UNK_?;
                  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                  ExecuteEvents_ExecuteHierarchy
                            ((GameObject *)IVar9.m_value,(BaseEventData *)0x0,pEVar8,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                            );
                  pOVar5 = pOVar6->klass;
                  pUVar11 = (UnityAction_1_System_Int32Enum_ *)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]
                  ::UnityAction_1_System_Int32Enum___ctor
                            (pUVar11,(Object *)this,
                             MethodInfo__BundleView__OnInsufficientResourceCallback_bool_,
                             (MethodInfo *)0x0);
                  pSVar12 = TM::TM__(StringLiteral_NOT_ENOUGH_GOLD,(MethodInfo *)0x0);
                  buttonText = TM::TM__(StringLiteral_Get_Gold,(MethodInfo *)0x0);
                  if (pOVar5 != (Object__Class *)0x0) {
                    BundleErrorPopUp::BundleErrorPopUp_Initialize
                              ((BundleErrorPopUp *)pOVar5,(UnityAction_1_System_Boolean_ *)pUVar11,
                               pSVar12,buttonText,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
              else {
                IStack_7.m_value = (int32_t)&UNK_?;
                pOVar4 = (Object *)func_?();
                pOVar6 = pOVar4;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                          (pOVar4,ExceptionArgument__Enum_obj,method_00);
                original = (this->fields).bundlePurchasePopup;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Object);
                }
                pOVar5 = (Object__Class *)
                          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                    ((Object *)original,
                                     BundlePurchasePopUp_MethodInfo__UnityEngine__Object__Instantiate<BundlePurchasePopUp>_BundlePurchasePopUp_
                                    );
                if (pOVar4 != (Object *)0x0) {
                  pOVar4 = pOVar4 + 1;
                  pOVar4->klass = pOVar5;
                  func_?(pOVar4,pOVar5);
                  pAVar3 = (this->fields).bundleData;
                  pOVar5 = pOVar4->klass;
                  puVar13 = (undefined *)(this->fields).price;
                  pIVar14 = (Il2CppClass *)(this->fields).originalPrice;
                  pUVar11 = (UnityAction_1_System_Int32Enum_ *)
                            func_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]
                  ::UnityAction_1_System_Int32Enum___ctor
                            (pUVar11,(Object *)this,
                             MethodInfo__BundleView__OnPurchaseBundleConfirmation_bool_,
                             (MethodInfo *)0x0);
                  if (pOVar5 != (Object__Class *)0x0) {
                    pIVar15 = &(pOVar5->_0).byval_arg;
                    (pIVar15->data).dummy = pAVar3;
                    IStack_7.m_value = (int32_t)puVar13;
                    func_?(pIVar15,pAVar3);
                    (pOVar5->_0).parent = pIVar14;
                    ppUVar16 = (UnityAction_1_System_Boolean_ **)&(pOVar5->_0).generic_class;
                    *ppUVar16 = (UnityAction_1_System_Boolean_ *)pUVar11;
                    func_?(ppUVar16,pUVar11);
                    pTVar17 = *(Text **)&(pOVar5->_0).byval_arg.attrs;
                    pSVar12 = mscorlib.dll::System::Int32::Int32_ToString
                                        (&IStack_7,(MethodInfo *)0x0);
                    if (pTVar17 != (Text *)0x0) {
                      (*(code *)(pTVar17->klass->vtable).set_text.method)
                                (pTVar17,pSVar12,
                                 (pTVar17->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr
                                );
                      BundlePurchasePopUp::BundlePurchasePopUp_HandlePrices
                                ((BundlePurchasePopUp *)pOVar5,
                                 (AccessoryBundleClient *)(pIVar15->data).typeHandle,
                                 (MethodInfo *)0x0);
                      if (((AccessoryBundleClient *)(pIVar15->data).generic_class !=
                           (AccessoryBundleClient *)0x0) &&
                         (pIVar14 = (pOVar5->_0).castClass, pIVar14 != (Il2CppClass *)0x0)) {
                        pAVar18 = (((AccessoryBundleClient *)(pIVar15->data).generic_class)->fields)._
                                 .timelimit;
                        ppAVar19 = (AccessoryTimelimit **)&(pIVar14->byval_arg).attrs;
                        *ppAVar19 = pAVar18;
                        func_?(ppAVar19,pAVar18);
                        pIVar14 = (pOVar5->_0).castClass;
                        if (pIVar14 != (Il2CppClass *)0x0) {
                          pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_get_gameObject((Component *)pIVar14,(MethodInfo *)0x0)
                          ;
                          if (((AccessoryBundleClient *)(pIVar15->data).generic_class !=
                               (AccessoryBundleClient *)0x0) &&
                             (pAVar18 = (((AccessoryBundleClient *)(pIVar15->data).generic_class)->
                                       fields)._.timelimit, pAVar18 != (AccessoryTimelimit *)0x0)) {
                            value = MVWorldObject.dll::MV::WorldObject::Accessories::
                                    AccessoryTimelimit::AccessoryTimelimit_get_IsTimeLimited
                                              (pAVar18,(MethodInfo *)0x0);
                            if (pGVar20 != (GameObject *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_SetActive(pGVar20,value,(MethodInfo *)0x0);
                              pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_get_gameObject
                                                  ((Component *)this,(MethodInfo *)0x0);
                              pEVar8 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                                        func_?(
                                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                                  );
                              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System
                              ::Object,System::Object]::
                              UnityAction_2_System_Object_System_Object___ctor
                                        ((UnityAction_2_System_Object_System_Object_ *)pEVar8,
                                         pOVar6,
                                         MethodInfo__BundleView____c__DisplayClass18_2___OnBundlePurchaseClicked_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                                         ,(MethodInfo *)0x0);
                              if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                                  cctor_finished_or_no_cctor == 0) {
                                func_?();
                              }
                              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                              ExecuteEvents_ExecuteHierarchy
                                        (pGVar20,(BaseEventData *)0x0,pEVar8,
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
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void OnInsufficientResourceCallback(Boolean) */

void Assembly-CSharp.dll::BundleView::BundleView_OnInsufficientResourceCallback
               (BundleView *this,bool confirmed,MethodInfo *method)

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
                    MethodInfo__BundleView____c___OnInsufficientResourceCallback_b__22_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__BundleView____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__BundleView____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BundleView____c);
  }
  callbackFunction = TypeInfo__BundleView____c->static_fields->__9__22_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__BundleView____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__BundleView____c);
    }
    object = TypeInfo__BundleView____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__BundleView____c___OnInsufficientResourceCallback_b__22_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__BundleView____c->static_fields->__9__22_0 = callbackFunction;
    func_?(&TypeInfo__BundleView____c->static_fields->__9__22_0,callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (confirmed == 0) {
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


/* Void OnPop() */

void Assembly-CSharp.dll::BundleView::BundleView_OnPop(BundleView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IBundleController>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IBundleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IBundleController>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__BundleView____c___OnPop_b__21_0_UnityEngine__EventSystems__IBundleController__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__BundleView____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__BundleView____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BundleView____c);
  }
  callbackFunction = TypeInfo__BundleView____c->static_fields->__9__21_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IBundleController_ *)0x0) {
    if ((TypeInfo__BundleView____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__BundleView____c);
    }
    object = TypeInfo__BundleView____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IBundleController_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IBundleController>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__BundleView____c___OnPop_b__21_0_UnityEngine__EventSystems__IBundleController__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__BundleView____c->static_fields->__9__21_0 = callbackFunction;
    func_?(&TypeInfo__BundleView____c->static_fields->__9__21_0,callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IBundleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IBundleController>_
            );
  return;
}


/* Void OnPurchaseBundleConfirmation(Boolean) */

void Assembly-CSharp.dll::BundleView::BundleView_OnPurchaseBundleConfirmation
               (BundleView *this,bool confirmed,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    func_?(&
                    MethodInfo__BundleView__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__BundleView____c___OnPurchaseBundleConfirmation_b__19_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__BundleView____c);
    cRam_? = '\x01';
  }
  if (confirmed == 0) {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__BundleView____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__BundleView____c);
    }
    callbackFunction = TypeInfo__BundleView____c->static_fields->__9__19_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__BundleView____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__BundleView____c);
      }
      object = TypeInfo__BundleView____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__BundleView____c___OnPurchaseBundleConfirmation_b__19_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__BundleView____c->static_fields->__9__19_0 = callbackFunction;
      func_?(&TypeInfo__BundleView____c->static_fields->__9__19_0,callbackFunction);
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
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pAVar2 = (pMVar1->fields).PurchaseProductResponseHandler;
    ppAVar3 = &(pMVar1->fields).PurchaseProductResponseHandler;
    this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
              func_?(
                             TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (this_00,(Object *)this,
               MethodInfo__BundleView__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
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
    bundleId = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleId((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PurchaseAvatarAccessoryBundle
                (this_01,bundleId,(MethodInfo *)0x0);
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


/* Void ProductPurchaseResponseHandler(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::BundleView::BundleView_ProductPurchaseResponseHandler
               (BundleView *this,int32_t returnCode,
               Dictionary_2_System_Object_System_Object_ *purchaseResponseData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AccessoryDataClient);
    func_?(&
                    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    func_?(&MethodInfo__BundleView__OnInsufficientLevelCallback__);
    func_?(&MethodInfo__BundleView__OnInsufficientResourceCallback_bool_);
    func_?(&
                    MethodInfo__BundleView__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
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
                    System__Collections__Generic__List<int>_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<System::Collections::Generic::List<int>_>_System__String_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    func_?(&
                    BundleErrorPopUp_MethodInfo__UnityEngine__Object__Instantiate<BundleErrorPopUp>_BundleErrorPopUp_
                   );
    func_?(&
                    LevelErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<LevelErrorPopup>_LevelErrorPopup_
                   );
    func_?(&
                    PurchasedAccessoryPreviewer_MethodInfo__UnityEngine__Object__Instantiate<PurchasedAccessoryPreviewer>_PurchasedAccessoryPreviewer_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__System__String);
    func_?(&
                    MethodInfo__BundleView____c___ProductPurchaseResponseHandler_b__20_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__BundleView____c__DisplayClass20_0___ProductPurchaseResponseHandler_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__BundleView____c__DisplayClass20_0);
    func_?(&
                    MethodInfo__BundleView____c__DisplayClass20_1___ProductPurchaseResponseHandler_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__BundleView____c__DisplayClass20_1);
    func_?(&
                    MethodInfo__BundleView____c__DisplayClass20_2___ProductPurchaseResponseHandler_b__3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__BundleView____c__DisplayClass20_2);
    func_?(&
                    MethodInfo__BundleView____c__DisplayClass20_3___ProductPurchaseResponseHandler_b__4_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__BundleView____c__DisplayClass20_3);
    func_?(&TypeInfo__BundleView____c);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<bool>);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    func_?(&StringLiteral_Get_Gold);
    func_?(&StringLiteral_NOT_ENOUGH_GOLD);
    cRam_? = '\x01';
  }
  method_01 = TypeInfo__BundleView____c__DisplayClass20_0;
  pOVar1 = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (pOVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  if (pOVar1 != (Object *)0x0) {
    pOVar1[1].klass = (Object__Class *)this;
    func_?(pOVar1 + 1,this);
    pOVar1[1].monitor = (MonitorData *)returnCode;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      pAVar3 = (pMVar2->fields).PurchaseProductResponseHandler;
      this_01 = (UnityAction_2_System_Int32_System_Int32_ *)
                func_?(
                               TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
      UnityAction_2_System_Int32_System_Int32___ctor
                (this_01,(Object *)this,
                 MethodInfo__BundleView__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 ,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)&UNK_?;
      index.m_Index =
           (int32_t)mscorlib.dll::System::Delegate::Delegate_Remove
                              ((Delegate *)pAVar3,(Delegate *)this_01,(MethodInfo *)0x0);
      if ((Delegate *)index.m_Index == (Delegate *)0x0) {
        (pMVar2->fields).PurchaseProductResponseHandler =
             (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             0x0;
        this_02 = (Component *)0x0;
code_?:
        func_?();
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_02,(MethodInfo *)0x0);
        if ((TypeInfo__BundleView____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        callbackFunction = TypeInfo__BundleView____c->static_fields->__9__20_0;
        if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if ((TypeInfo__BundleView____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          object = TypeInfo__BundleView____c->static_fields->__9;
          callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object
                     ,
                     MethodInfo__BundleView____c___ProductPurchaseResponseHandler_b__20_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__BundleView____c->static_fields->__9__20_0 = callbackFunction;
          this_02 = (Component *)&TypeInfo__BundleView____c->static_fields->__9__20_0;
          func_?();
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        this_00 = 
        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
        ;
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar4,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        pMVar5 = pOVar1[1].monitor;
        if (pMVar5 == (MonitorData *)0x0) {
          value = (Object *)func_?();
          pOVar6 = value;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    (value,ExceptionArgument__Enum_obj,(MethodInfo *)this_01);
          if (value != (Object *)0x0) {
            value[1].monitor = (MonitorData *)pOVar1;
            func_?(&value[1].monitor,pOVar1);
            pOVar1 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
            if (this_00 != (MethodInfo *)0x0) {
              index = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                 this_00,pOVar1,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
              if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
              }
              value_00.m_Index = 0;
              if (index.m_Index != 0) {
                if (*(String__Class **)index.m_Index == TypeInfo__System__String) {
                  value_00 = index;
                }
                pSVar7 = TypeInfo__System__String;
                if ((String *)value_00.m_Index == (String *)0x0) goto code_?;
              }
              this_03 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                        JsonConvert_DeserializeObject_2
                                  ((String *)value_00.m_Index,
                                   System__Collections__Generic__List<int>_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<System::Collections::Generic::List<int>_>_System__String_
                                  );
              if (this_03 !=
                  (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
                previewAccessories =
                     (AccessoryDataClient__Array *)
                     func_?(TypeInfo__AccessoryDataClient,(this_03->fields)._size);
                for (index.m_Index = 0; pOVar1 = pORam00000028,
                    index.m_Index < (this_03->fields)._size;
                    index.m_Index = (int)&((Delegate *)index.m_Index)->klass + 1) {
                  id = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                       RegularExpressions::RegexCharClass+SingleRange]::
                       List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                 (this_03,index.m_Index,
                                  MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                 );
                  pAVar8 = AccessoryDataManager::
                           AccessoryDataManager_GetAccessoryDataByStreamingAssetId
                                     ((int32_t)id,(MethodInfo *)0x0);
                  if (pAVar8 != (AccessoryDataClient *)0x0) {
                    if (previewAccessories == (AccessoryDataClient__Array *)0x0)
                    goto code_?;
                    iVar9 = func_?(pAVar8,(previewAccessories->klass->_0).element_class);
                    if (iVar9 == 0) goto code_?;
                    func_?(index.m_Index,pAVar8);
                  }
                }
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Object);
                }
                pOVar10 = (Object__Class *)
                          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                    (pOVar1,
                                     PurchasedAccessoryPreviewer_MethodInfo__UnityEngine__Object__Instantiate<PurchasedAccessoryPreviewer>_PurchasedAccessoryPreviewer_
                                    );
                pOVar1 = pOVar6 + 1;
                pOVar1->klass = pOVar10;
                func_?(pOVar1,pOVar10);
                if (pOVar1->klass != (Object__Class *)0x0) {
                  PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_Initialize
                            ((PurchasedAccessoryPreviewer *)pOVar1->klass,previewAccessories,
                             (MethodInfo *)0x0);
                  pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)0x0,(MethodInfo *)0x0);
                  pEVar11 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                            func_?(
                                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                           );
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                  Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                            ((UnityAction_2_System_Object_System_Object_ *)pEVar11,pOVar6,
                             MethodInfo__BundleView____c__DisplayClass20_1___ProductPurchaseResponseHandler_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                             ,(MethodInfo *)0x0);
                  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                      cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                  ExecuteEvents_ExecuteHierarchy
                            (pGVar4,(BaseEventData *)0x0,pEVar11,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                            );
                  return;
                }
              }
            }
          }
        }
        else if (pMVar5 == (MonitorData *)0x1) {
          pOVar6 = (Object *)func_?();
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    (pOVar6,ExceptionArgument__Enum_obj,method_00);
          pOVar1 = (Object *)this_02[4].monitor;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          pOVar10 = (Object__Class *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              (pOVar1,
                               BundleErrorPopUp_MethodInfo__UnityEngine__Object__Instantiate<BundleErrorPopUp>_BundleErrorPopUp_
                              );
          if (pOVar6 != (Object *)0x0) {
            pOVar1 = pOVar6 + 1;
            pOVar1->klass = pOVar10;
            func_?(pOVar1,pOVar10);
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               (this_02,(MethodInfo *)0x0);
            pEVar11 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                      func_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                     );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)pEVar11,pOVar6,
                       MethodInfo__BundleView____c__DisplayClass20_3___ProductPurchaseResponseHandler_b__4_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar4,(BaseEventData *)0x0,pEVar11,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            pOVar10 = pOVar1->klass;
            this_04 = (UnityAction_1_System_Int32Enum_ *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
            UnityAction_1_System_Int32Enum___ctor
                      (this_04,(Object *)this_02,
                       MethodInfo__BundleView__OnInsufficientResourceCallback_bool_,
                       (MethodInfo *)0x0);
            header = TM::TM__(StringLiteral_NOT_ENOUGH_GOLD,(MethodInfo *)0x0);
            buttonText = TM::TM__(StringLiteral_Get_Gold,(MethodInfo *)0x0);
            if (pOVar10 != (Object__Class *)0x0) {
              BundleErrorPopUp::BundleErrorPopUp_Initialize
                        ((BundleErrorPopUp *)pOVar10,(UnityAction_1_System_Boolean_ *)this_04,header
                         ,buttonText,(MethodInfo *)0x0);
              return;
            }
          }
        }
        else {
          if (pMVar5 != (MonitorData *)0x6) {
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               (this_02,(MethodInfo *)0x0);
            pEVar11 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)pEVar11,pOVar1,
                       MethodInfo__BundleView____c__DisplayClass20_0___ProductPurchaseResponseHandler_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar4,(BaseEventData *)0x0,pEVar11,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                      );
            return;
          }
          pOVar6 = (Object *)func_?();
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    (pOVar6,ExceptionArgument__Enum_obj,method_00);
          pOVar1 = this_02[4].fields._.m_CachedPtr;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          pOVar10 = (Object__Class *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              (pOVar1,
                               LevelErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<LevelErrorPopup>_LevelErrorPopup_
                              );
          if (pOVar6 != (Object *)0x0) {
            pOVar1 = pOVar6 + 1;
            pOVar1->klass = pOVar10;
            func_?(pOVar1,pOVar10);
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               (this_02,(MethodInfo *)0x0);
            pEVar11 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                      func_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                     );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)pEVar11,pOVar6,
                       MethodInfo__BundleView____c__DisplayClass20_2___ProductPurchaseResponseHandler_b__3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar4,(BaseEventData *)0x0,pEVar11,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            pOVar10 = pOVar1->klass;
            this_05 = (NavMesh_OnNavMeshPreUpdate *)func_?();
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (this_05,(Object *)this_02,
                       MethodInfo__BundleView__OnInsufficientLevelCallback__,(MethodInfo *)0x0);
            pCVar12 = this_02[6].klass;
            if ((pCVar12 != (Component__Class *)0x0) && (pOVar10 != (Object__Class *)0x0)) {
              requiredLevel._0_2_ = (pCVar12->_0).byval_arg.attrs;
              requiredLevel._2_1_ = (pCVar12->_0).byval_arg.type;
              requiredLevel._3_1_ = (pCVar12->_0).byval_arg.field_0x7;
              LevelErrorPopup::LevelErrorPopup_Initialize
                        ((LevelErrorPopup *)pOVar10,(UnityAction *)this_05,requiredLevel,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      else {
        pAVar3 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                  *)func_?();
        if (pAVar3 != (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                       *)0x0) {
          (pMVar2->fields).PurchaseProductResponseHandler = pAVar3;
          this_02 = (Component *)func_?();
          if (this_02 == (Component *)0x0) goto code_?;
          goto code_?;
        }
        func_?();
code_?:
        uVar13 = func_?(0);
        func_?(uVar13);
        pSVar7 = extraout_ECX;
code_?:
        func_?(index.m_Index,pSVar7);
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


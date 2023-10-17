
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
      (*(pIVar1->klass->vtable).set_color.methodPtr)
                (pIVar1,pCVar2->r,pCVar2->g,pCVar2->b,pCVar2->a,
                 (pIVar1->klass->vtable).set_color.method);
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
  pIVar2 = (pBVar1->fields).levelLocked;
  (pBVar1->fields).originalPrice = 0;
  if (pIVar2 != (Image *)0x0) {
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pIVar2,(MethodInfo *)0x0);
    if (pGVar3 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,0,(MethodInfo *)0x0);
      this_00 = (pBVar1->fields).purchaseButton;
      if (this_00 != (Button *)0x0) {
        pIVar2 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                           ((Selectable *)this_00,(MethodInfo *)0x0);
        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pCVar4 = Styles::Styles_GetColor
                           ((Color *)&stack0xffffffe0,ColorStyle__Enum_ButtonSuccess,
                            (MethodInfo *)0x0);
        if (pIVar2 != (Image *)0x0) {
          (*(pIVar2->klass->vtable).set_color.methodPtr)
                    (pIVar2,pCVar4->r,pCVar4->g,pCVar4->b,pCVar4->a,
                     (pIVar2->klass->vtable).set_color.method);
          this_01 = (pBVar1->fields).shineEffect;
          if (this_01 != (AccessoryShinyButton *)0x0) {
            pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this_01,(MethodInfo *)0x0);
            if (pGVar3 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar3,1,(MethodInfo *)0x0);
              if (accessoryData != (AccessoryBundleClient *)0x0) {
                this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          (accessoryData->fields)._.accessoryBundleItems;
                index = 0;
                if (this_02 !=
                    (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
                  for (; index < (this_02->fields)._size; index = index + 1) {
                    RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                            RegularExpressions::RegexCharClass+SingleRange]::
                            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                      (this_02,index,
                                       MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Item_int_
                                      );
                    if (RVar5 == (RegexCharClass_SingleRange)0x0) goto code_?;
                    pAVar6 = AccessoryDataManager::AccessoryDataManager_GetAccessoryDataByMetaDataId
                                       (*(int32_t *)((int)RVar5 + 0xc),(MethodInfo *)0x0);
                    if ((pAVar6 != (AccessoryDataClient *)0x0) && ((pAVar6->fields)._.owns == 0)) {
                      piVar7 = &(pBVar1->fields).originalPrice;
                      *piVar7 = *piVar7 + (pAVar6->fields)._.cost;
                      this = (BundleView *)((int)&this->klass + 1);
                    }
                  }
                  if (this == (BundleView *)0x0) {
                    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__UnityEngine__Debug);
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                              ((Object *)StringLiteral_Bundle_shown__but_all_items_are_,
                               (MethodInfo *)0x0);
                    return;
                  }
                  IVar8.m_value = (accessoryData->fields)._.discount;
                  (pBVar1->fields).price = (pBVar1->fields).originalPrice;
                  pTVar9 = (pBVar1->fields).originalPriceText;
                  if (pTVar9 != (Text *)0x0) {
                    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_gameObject((Component *)pTVar9,(MethodInfo *)0x0);
                    if (pGVar3 != (GameObject *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar3,0 < IVar8.m_value,(MethodInfo *)0x0);
                      pGVar3 = (pBVar1->fields).discountTag;
                      if (pGVar3 != (GameObject *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (pGVar3,0 < IVar8.m_value,(MethodInfo *)0x0);
                        pTVar9 = (pBVar1->fields).goldSavedText;
                        if (pTVar9 != (Text *)0x0) {
                          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_get_gameObject((Component *)pTVar9,(MethodInfo *)0x0);
                          if (pGVar3 != (GameObject *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive(pGVar3,0 < IVar8.m_value,(MethodInfo *)0x0);
                            pGVar3 = (pBVar1->fields).claimText;
                            if (pGVar3 != (GameObject *)0x0) {
                              IVar8.m_value = (int32_t)&UNK_?;
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_SetActive(pGVar3,0,(MethodInfo *)0x0);
                              if (IVar8.m_value < 1) {
                                pTVar9 = (pBVar1->fields).discountedPriceText;
                                if (pTVar9 == (Text *)0x0) goto code_?;
                                pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                         Component_get_gameObject
                                                   ((Component *)pTVar9,(MethodInfo *)0x0);
                                if (pGVar3 == (GameObject *)0x0) goto code_?;
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive(pGVar3,0,(MethodInfo *)0x0);
                                pTVar9 = (pBVar1->fields).bundlePriceWithoutDiscount;
                                if (pTVar9 == (Text *)0x0) goto code_?;
                                pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                         Component_get_gameObject
                                                   ((Component *)pTVar9,(MethodInfo *)0x0);
                                if (pGVar3 == (GameObject *)0x0) goto code_?;
                                this._0_1_ = 1;
                              }
                              else {
                                pTVar9 = (pBVar1->fields).discountTagText;
                                pSVar10 = mscorlib.dll::System::Int32::Int32_ToString
                                                    ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
                                mscorlib.dll::System::String::String_Concat_4
                                          (::StringLiteral__,pSVar10,::StringLiteral__,
                                           (MethodInfo *)0x0);
                                if (pTVar9 == (Text *)0x0) goto code_?;
                                (*(pTVar9->klass->vtable).set_text.methodPtr)();
                                if (cRam_? == '\0') {
                                  func_?();
                                  cRam_? = '\x01';
                                }
                                if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
                                  func_?();
                                }
                                fVar11 = (float10)func_?();
                                pTVar9 = (pBVar1->fields).originalPriceText;
                                (pBVar1->fields).price =
                                     (pBVar1->fields).originalPrice - (int)fVar11;
                                pSVar10 = mscorlib.dll::System::Int32::Int32_ToString_1
                                                    ((Int32 *)&(pBVar1->fields).originalPrice,
                                                     StringLiteral_N0,(MethodInfo *)0x0);
                                if (pSVar10 == (String *)0x0) goto code_?;
                                pSVar10 = mscorlib.dll::System::String::String_Replace_1
                                                    (pSVar10,::StringLiteral__,::StringLiteral__,
                                                     (MethodInfo *)0x0);
                                if (pTVar9 == (Text *)0x0) goto code_?;
                                (*(pTVar9->klass->vtable).set_text.methodPtr)
                                          (pTVar9,pSVar10,(pTVar9->klass->vtable).set_text.method);
                                pTVar9 = (pBVar1->fields).goldSavedText;
                                pSVar10 = mscorlib.dll::System::Int32::Int32_ToString_1
                                                    ((Int32 *)&stack0xfffffff4,StringLiteral_N0,
                                                     (MethodInfo *)0x0);
                                if (pSVar10 == (String *)0x0) goto code_?;
                                pSVar10 = mscorlib.dll::System::String::String_Replace_1
                                                    (pSVar10,::StringLiteral__,::StringLiteral__,
                                                     (MethodInfo *)0x0);
                                if (pTVar9 == (Text *)0x0) goto code_?;
                                (*(pTVar9->klass->vtable).set_text.methodPtr)
                                          (pTVar9,pSVar10,(pTVar9->klass->vtable).set_text.method);
                                pTVar9 = (pBVar1->fields).discountedPriceText;
                                if (pTVar9 == (Text *)0x0) goto code_?;
                                pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                         Component_get_gameObject
                                                   ((Component *)pTVar9,(MethodInfo *)0x0);
                                if (pGVar3 == (GameObject *)0x0) goto code_?;
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive(pGVar3,1,(MethodInfo *)0x0);
                                pTVar9 = (pBVar1->fields).bundlePriceWithoutDiscount;
                                if (pTVar9 == (Text *)0x0) goto code_?;
                                pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                         Component_get_gameObject
                                                   ((Component *)pTVar9,(MethodInfo *)0x0);
                                if (pGVar3 == (GameObject *)0x0) goto code_?;
                                this._0_1_ = 0;
                              }
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_SetActive(pGVar3,(bool)this,(MethodInfo *)0x0);
                              if ((pBVar1->fields).price == 0) {
                                pGVar3 = (pBVar1->fields).discountTag;
                                if (pGVar3 == (GameObject *)0x0) goto code_?;
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive(pGVar3,0,(MethodInfo *)0x0);
                                pTVar9 = (pBVar1->fields).discountedPriceText;
                                if (pTVar9 == (Text *)0x0) goto code_?;
                                pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                         Component_get_gameObject
                                                   ((Component *)pTVar9,(MethodInfo *)0x0);
                                if (pGVar3 == (GameObject *)0x0) goto code_?;
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive(pGVar3,0,(MethodInfo *)0x0);
                                pTVar9 = (pBVar1->fields).bundlePriceWithoutDiscount;
                                if (pTVar9 == (Text *)0x0) goto code_?;
                                pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                         Component_get_gameObject
                                                   ((Component *)pTVar9,(MethodInfo *)0x0);
                                if (pGVar3 == (GameObject *)0x0) goto code_?;
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive(pGVar3,0,(MethodInfo *)0x0);
                                pTVar9 = (pBVar1->fields).originalPriceText;
                                if (pTVar9 == (Text *)0x0) goto code_?;
                                pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                         Component_get_gameObject
                                                   ((Component *)pTVar9,(MethodInfo *)0x0);
                                if (pGVar3 == (GameObject *)0x0) goto code_?;
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive(pGVar3,0,(MethodInfo *)0x0);
                                pTVar9 = (pBVar1->fields).goldSavedText;
                                if (pTVar9 == (Text *)0x0) goto code_?;
                                pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                         Component_get_gameObject
                                                   ((Component *)pTVar9,(MethodInfo *)0x0);
                                if (pGVar3 == (GameObject *)0x0) goto code_?;
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive(pGVar3,0,(MethodInfo *)0x0);
                                pGVar3 = (pBVar1->fields).claimText;
                                if (pGVar3 == (GameObject *)0x0) goto code_?;
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive(pGVar3,1,(MethodInfo *)0x0);
                              }
                              pTVar9 = (pBVar1->fields).discountedPriceText;
                              pSVar10 = mscorlib.dll::System::Int32::Int32_ToString_1
                                                  ((Int32 *)&(pBVar1->fields).price,StringLiteral_N0
                                                   ,(MethodInfo *)0x0);
                              if (pSVar10 != (String *)0x0) {
                                mscorlib.dll::System::String::String_Replace_1
                                          (pSVar10,::StringLiteral__,::StringLiteral__,
                                           (MethodInfo *)0x0);
                                if (pTVar9 != (Text *)0x0) {
                                  (*(pTVar9->klass->vtable).set_text.methodPtr)();
                                  pTVar9 = (pBVar1->fields).bundlePriceWithoutDiscount;
                                  pSVar10 = mscorlib.dll::System::Int32::Int32_ToString_1
                                                      ((Int32 *)&(pBVar1->fields).price,
                                                       StringLiteral_N0,(MethodInfo *)0x0);
                                  if (pSVar10 != (String *)0x0) {
                                    pSVar10 = mscorlib.dll::System::String::String_Replace_1
                                                        (pSVar10,::StringLiteral__,::StringLiteral__
                                                         ,(MethodInfo *)0x0);
                                    if (pTVar9 != (Text *)0x0) {
                                      (*(pTVar9->klass->vtable).set_text.methodPtr)
                                                (pTVar9,pSVar10,
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
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::BundleView::BundleView_Initialize(BundleView *this,MethodInfo *method)

{
  pAVar1 = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleClient((MethodInfo *)0x0);
  (this->fields).bundleData = pAVar1;
  func_?(&(this->fields).bundleData,pAVar1);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if ((pMVar2 != (MVLocalPlayer *)0x0) &&
       (pAVar1 = (this->fields).bundleData, pAVar1 != (AccessoryBundleClient *)0x0)) {
      if ((pMVar2->fields)._.level < (pAVar1->fields)._.level) {
        BundleView_HandleLevel(this,pAVar1,(MethodInfo *)0x0);
        return;
      }
      BundleView_HandlePrices(this,pAVar1,(MethodInfo *)0x0);
      return;
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
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVLocalPlayer *)0x0) {
      pAVar3 = (this->fields).bundleData;
      if (pAVar3 != (AccessoryBundleClient *)0x0) {
        if ((pMVar2->fields)._.level < (pAVar3->fields)._.level) {
          pOVar4 = (Object *)func_?(TypeInfo__BundleView____c__DisplayClass18_0);
          if (pOVar4 != (Object *)0x0) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      (pOVar4,ExceptionArgument__Enum_obj,in_stack_5);
            original_01 = (this->fields).levelErrorPopUp;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            pOVar6 = (Object__Class *)
                     UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                               ((Object *)original_01,
                                LevelErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<LevelErrorPopup>_LevelErrorPopup_
                               );
            pOVar4[1].klass = pOVar6;
            func_?(pOVar4 + 1,pOVar6);
            pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
            pEVar8 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                      func_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                     );
            if (pEVar8 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)pEVar8,pOVar4,
                         MethodInfo__BundleView____c__DisplayClass18_0___OnBundlePurchaseClicked_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy
                        (pGVar7,(BaseEventData *)0x0,pEVar8,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                        );
              pOVar6 = pOVar4[1].klass;
              this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?();
              if (this_02 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (this_02,(Object *)this,
                           MethodInfo__BundleView__OnInsufficientLevelCallback__,(MethodInfo *)0x0);
                pAVar3 = (this->fields).bundleData;
                if ((pAVar3 != (AccessoryBundleClient *)0x0) && (pOVar6 != (Object__Class *)0x0)) {
                  LevelErrorPopup::LevelErrorPopup_Initialize
                            ((LevelErrorPopup *)pOVar6,(UnityAction *)this_02,
                             (pAVar3->fields)._.level,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        else {
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar1 != (MVNetworkGame *)0x0) {
            method_00 = (MethodInfo *)0x0;
            pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
            if ((pMVar2 != (MVLocalPlayer *)0x0) &&
               (pUVar9 = (pMVar2->fields)._._UserProfileData_k__BackingField,
               pUVar9 != (UserProfileData *)0x0)) {
              if ((pUVar9->fields).Gold < (this->fields).price) {
                pOVar4 = (Object *)func_?(TypeInfo__BundleView____c__DisplayClass18_1);
                if (pOVar4 != (Object *)0x0) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                            (pOVar4,ExceptionArgument__Enum_obj,method_00);
                  original_00 = (this->fields).bundleErrorPopUp;
                  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__UnityEngine__Object);
                  }
                  pOVar6 = (Object__Class *)
                           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                     ((Object *)original_00,
                                      BundleErrorPopUp_MethodInfo__UnityEngine__Object__Instantiate<BundleErrorPopUp>_BundleErrorPopUp_
                                     );
                  pOVar4[1].klass = pOVar6;
                  func_?(pOVar4 + 1,pOVar6);
                  pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                  pEVar8 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                            func_?(
                                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                           );
                  if (pEVar8 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                    Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                              ((UnityAction_2_System_Object_System_Object_ *)pEVar8,pOVar4,
                               MethodInfo__BundleView____c__DisplayClass18_1___OnBundlePurchaseClicked_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                               ,(MethodInfo *)0x0);
                    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                        cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_ExecuteHierarchy
                              (pGVar7,(BaseEventData *)0x0,pEVar8,
                               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                              );
                    pOVar6 = pOVar4[1].klass;
                    this_01 = (UnityAction_1_System_ByteEnum_ *)func_?();
                    if (this_01 != (UnityAction_1_System_ByteEnum_ *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                      ByteEnum]::UnityAction_1_System_ByteEnum___ctor
                                (this_01,(Object *)this,
                                 MethodInfo__BundleView__OnInsufficientResourceCallback_bool_,
                                 (MethodInfo *)0x0);
                      pSVar10 = TM::TM__(StringLiteral_NOT_ENOUGH_GOLD,(MethodInfo *)0x0);
                      buttonText = TM::TM__(StringLiteral_Get_Gold,(MethodInfo *)0x0);
                      if (pOVar6 != (Object__Class *)0x0) {
                        BundleErrorPopUp::BundleErrorPopUp_Initialize
                                  ((BundleErrorPopUp *)pOVar6,
                                   (UnityAction_1_System_Boolean_ *)this_01,pSVar10,buttonText,
                                   (MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
              else {
                pOVar4 = (Object *)func_?(TypeInfo__BundleView____c__DisplayClass18_2);
                if (pOVar4 != (Object *)0x0) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                            (pOVar4,ExceptionArgument__Enum_obj,method_00);
                  original = (this->fields).bundlePurchasePopup;
                  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__UnityEngine__Object);
                  }
                  pOVar6 = (Object__Class *)
                           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                     ((Object *)original,
                                      BundlePurchasePopUp_MethodInfo__UnityEngine__Object__Instantiate<BundlePurchasePopUp>_BundlePurchasePopUp_
                                     );
                  pOVar4[1].klass = pOVar6;
                  func_?(pOVar4 + 1,pOVar6);
                  pAVar3 = (this->fields).bundleData;
                  pOVar6 = pOVar4[1].klass;
                  pIVar11 = (Il2CppClass *)(this->fields).originalPrice;
                  this_00 = (Il2CppClass *)
                            func_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
                  if (this_00 != (Il2CppClass *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]
                    ::UnityAction_1_System_ByteEnum___ctor
                              ((UnityAction_1_System_ByteEnum_ *)this_00,(Object *)this,
                               MethodInfo__BundleView__OnPurchaseBundleConfirmation_bool_,
                               (MethodInfo *)0x0);
                    if (pOVar6 != (Object__Class *)0x0) {
                      (pOVar6->_0).namespaze = (char *)pAVar3;
                      func_?(&(pOVar6->_0).namespaze,pAVar3);
                      (pOVar6->_0).declaringType = pIVar11;
                      (pOVar6->_0).parent = this_00;
                      func_?(&(pOVar6->_0).parent,this_00);
                      pTVar12 = (Text *)(pOVar6->_0).byval_arg.data.array;
                      pSVar10 = mscorlib.dll::System::Int32::Int32_ToString
                                         ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
                      if (pTVar12 != (Text *)0x0) {
                        (*(pTVar12->klass->vtable).set_text.methodPtr)
                                  (pTVar12,pSVar10,(pTVar12->klass->vtable).set_text.method);
                        BundlePurchasePopUp::BundlePurchasePopUp_HandlePrices
                                  ((BundlePurchasePopUp *)pOVar6,
                                   (AccessoryBundleClient *)(pOVar6->_0).namespaze,(MethodInfo *)0x0
                                  );
                        pAVar3 = (AccessoryBundleClient *)(pOVar6->_0).namespaze;
                        if ((pAVar3 != (AccessoryBundleClient *)0x0) &&
                           (pIVar11 = (pOVar6->_0).element_class, pIVar11 != (Il2CppClass *)0x0)) {
                          pAVar13 = (pAVar3->fields)._.timelimit;
                          (pIVar11->byval_arg).data.dummy = pAVar13;
                          func_?(&pIVar11->byval_arg,pAVar13);
                          pIVar11 = (pOVar6->_0).element_class;
                          if (pIVar11 != (Il2CppClass *)0x0) {
                            pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                     Component_get_gameObject
                                               ((Component *)pIVar11,(MethodInfo *)0x0);
                            pAVar3 = (AccessoryBundleClient *)(pOVar6->_0).namespaze;
                            if ((pAVar3 != (AccessoryBundleClient *)0x0) &&
                               (pAVar13 = (pAVar3->fields)._.timelimit,
                               pAVar13 != (AccessoryTimelimit *)0x0)) {
                              value = MVWorldObject.dll::MV::WorldObject::Accessories::
                                      AccessoryTimelimit::AccessoryTimelimit_get_IsTimeLimited
                                                (pAVar13,(MethodInfo *)0x0);
                              if (pGVar7 != (GameObject *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive(pGVar7,value,(MethodInfo *)0x0);
                                pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                         Component_get_gameObject
                                                   ((Component *)this,(MethodInfo *)0x0);
                                pEVar8 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                                          func_?(
                                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                                  );
                                if (pEVar8 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0)
                                {
                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                  UnityAction`2[System::Object,System::Object]::
                                  UnityAction_2_System_Object_System_Object___ctor
                                            ((UnityAction_2_System_Object_System_Object_ *)pEVar8,
                                             pOVar4,
                                             MethodInfo__BundleView____c__DisplayClass18_2___OnBundlePurchaseClicked_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                                             ,(MethodInfo *)0x0);
                                  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                                      cctor_finished_or_no_cctor == 0) {
                                    func_?();
                                  }
                                  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                                  ExecuteEvents_ExecuteHierarchy
                                            (pGVar7,(BaseEventData *)0x0,pEVar8,
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
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
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
  if (confirmed != 0) {
    if (cRam_? == '\0') {
      ppMStack2 = (MVGameControllerBase__Class **)&TypeInfo__BrowserComm;
      func_?();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      ppMStack2 = &TypeInfo__MVGameControllerBase;
      func_?();
      cRam_? = '\x01';
    }
    pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar3 != (GameSessionData *)0x0) {
      url = (pGVar3->fields).purchaseGoldURL;
      if ((TypeInfo__BrowserComm->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__BrowserComm->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (TypeInfo__BrowserComm->static_fields->enableBrowserRequest != 0) {
        UnityEngine.CoreModule.dll::UnityEngine::Application::Application_OpenURL
                  (url,(MethodInfo *)0x0);
      }
      return;
    }
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
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
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IBundleController_ *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
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
    if (callbackFunction != (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
code_?:
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
    if ((TypeInfo__BundleView____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__BundleView____c);
    }
    object = TypeInfo__BundleView____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    if (callbackFunction != (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__BundleView____c___OnPurchaseBundleConfirmation_b__19_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__BundleView____c->static_fields->__9__19_0 = callbackFunction;
      func_?(&TypeInfo__BundleView____c->static_fields->__9__19_0,callbackFunction);
      goto code_?;
    }
  }
  else {
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pAVar2 = (pMVar1->fields).PurchaseProductResponseHandler;
      this_00 = (Action_2_Int32Enum_Object_ *)
                func_?(
                               TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                               );
      if (this_00 != (Action_2_Int32Enum_Object_ *)0x0) {
        mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                  (this_00,(Object *)this,
                   MethodInfo__BundleView__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   ,(MethodInfo *)0x0);
        pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
        if (pDVar3 == (Delegate *)0x0) {
          (pMVar1->fields).PurchaseProductResponseHandler =
               (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                *)0x0;
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
        this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        bundleId = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleId
                             ((MethodInfo *)0x0);
        if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::
          MVNetworkGame_OperationRequests_PurchaseAvatarAccessoryBundle
                    (this_01,bundleId,(MethodInfo *)0x0);
          return;
        }
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
  pSVar1 = (String *)func_?(TypeInfo__BundleView____c__DisplayClass20_0);
  if (pSVar1 == (String *)0x0) goto code_?;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)pSVar1,ExceptionArgument__Enum_obj,unaff_EDI);
  (pSVar1->fields)._stringLength = (int32_t)this;
  func_?(&pSVar1->fields,this);
  *(int32_t *)&(pSVar1->fields)._firstChar = returnCode;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
  source = (pMVar2->fields).PurchaseProductResponseHandler;
  this_01 = (Action_2_Int32Enum_Object_ *)
            func_?(
                           TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                           );
  if (this_01 == (Action_2_Int32Enum_Object_ *)0x0) goto code_?;
  mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__BundleView__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,(MethodInfo *)0x0);
  pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)source,(Delegate *)this_01,(MethodInfo *)0x0);
  if (pDVar3 == (Delegate *)0x0) {
    (pMVar2->fields).PurchaseProductResponseHandler =
         (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0;
code_?:
    func_?(&(pMVar2->fields).PurchaseProductResponseHandler);
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
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
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__BundleView____c___ProductPurchaseResponseHandler_b__20_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__BundleView____c->static_fields->__9__20_0 = callbackFunction;
      func_?(&TypeInfo__BundleView____c->static_fields->__9__20_0,callbackFunction);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
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
    iVar5 = *(int *)&(pSVar1->fields)._firstChar;
    if (iVar5 != 0) {
      if (iVar5 == 1) {
        pOVar6 = (Object *)func_?();
        if (pOVar6 != (Object *)0x0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    (pOVar6,ExceptionArgument__Enum_obj,unaff_EDI);
          original = (this->fields).bundleErrorPopUp;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          pOVar7 = (Object__Class *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)original,
                               BundleErrorPopUp_MethodInfo__UnityEngine__Object__Instantiate<BundleErrorPopUp>_BundleErrorPopUp_
                              );
          pOVar6[1].klass = pOVar7;
          func_?(pOVar6 + 1,pOVar7);
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)this,(MethodInfo *)0x0);
          pEVar8 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    func_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
          if (pEVar8 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)pEVar8,pOVar6,
                       MethodInfo__BundleView____c__DisplayClass20_3___ProductPurchaseResponseHandler_b__4_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      ((GameObject *)
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                       ,(BaseEventData *)0x0,pEVar8,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            pOVar7 = pOVar6[1].klass;
            this_03 = (UnityAction_1_System_ByteEnum_ *)
                      func_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
            if (this_03 != (UnityAction_1_System_ByteEnum_ *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
              UnityAction_1_System_ByteEnum___ctor
                        (this_03,(Object *)this,
                         MethodInfo__BundleView__OnInsufficientResourceCallback_bool_,
                         (MethodInfo *)0x0);
              pSVar1 = TM::TM__(StringLiteral_NOT_ENOUGH_GOLD,(MethodInfo *)0x0);
              pSVar9 = TM::TM__(StringLiteral_Get_Gold,(MethodInfo *)0x0);
              if (pOVar7 != (Object__Class *)0x0) {
                BundleErrorPopUp::BundleErrorPopUp_Initialize
                          ((BundleErrorPopUp *)pOVar7,(UnityAction_1_System_Boolean_ *)this_03,
                           pSVar1,pSVar9,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      else if (iVar5 == 6) {
        pOVar6 = (Object *)func_?();
        if (pOVar6 != (Object *)0x0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    (pOVar6,ExceptionArgument__Enum_obj,unaff_EDI);
          original_00 = (this->fields).levelErrorPopUp;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          pOVar7 = (Object__Class *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)original_00,
                               LevelErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<LevelErrorPopup>_LevelErrorPopup_
                              );
          pOVar6[1].klass = pOVar7;
          func_?(pOVar6 + 1,pOVar7);
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)this,(MethodInfo *)0x0);
          pEVar8 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    func_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
          if (pEVar8 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)pEVar8,pOVar6,
                       MethodInfo__BundleView____c__DisplayClass20_2___ProductPurchaseResponseHandler_b__3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      ((GameObject *)
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                       ,(BaseEventData *)0x0,pEVar8,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            pOVar7 = pOVar6[1].klass;
            this_04 = (NavMesh_OnNavMeshPreUpdate *)
                      func_?(TypeInfo__UnityEngine__Events__UnityAction);
            if (this_04 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (this_04,(Object *)this,
                         MethodInfo__BundleView__OnInsufficientLevelCallback__,(MethodInfo *)0x0);
              pAVar10 = (this->fields).bundleData;
              if ((pAVar10 != (AccessoryBundleClient *)0x0) && (pOVar7 != (Object__Class *)0x0)) {
                LevelErrorPopup::LevelErrorPopup_Initialize
                          ((LevelErrorPopup *)pOVar7,(UnityAction *)this_04,
                           (pAVar10->fields)._.level,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      else {
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        pEVar8 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
        if (pEVar8 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)pEVar8,(Object *)pSVar1,
                     MethodInfo__BundleView____c__DisplayClass20_0___ProductPurchaseResponseHandler_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar4,(BaseEventData *)0x0,pEVar8,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                    );
          return;
        }
      }
      goto code_?;
    }
    pOVar6 = (Object *)func_?();
    if (pOVar6 == (Object *)0x0) goto code_?;
    object_00 = pOVar6;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (pOVar6,ExceptionArgument__Enum_obj,unaff_EDI);
    pOVar6[1].monitor = (MonitorData *)pSVar1;
    func_?(&pOVar6[1].monitor,pSVar1);
    pOVar6 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
    if (purchaseResponseData == (Dictionary_2_System_Object_System_Object_ *)0x0)
    goto code_?;
    pSVar1 = (String *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (purchaseResponseData,pOVar6,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
    }
    pSVar9 = (String *)0x0;
    if (pSVar1 != (String *)0x0) {
      if (pSVar1->klass == TypeInfo__System__String) {
        pSVar9 = pSVar1;
      }
      pSVar11 = TypeInfo__System__String;
      if (pSVar9 == (String *)0x0) goto code_?;
    }
    this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_6
                        (pSVar9,
                         System__Collections__Generic__List<int>_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<System::Collections::Generic::List<int>_>_System__String_
                        );
    if (this_02 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      pLVar12 = this_02;
      previewAccessories =
           (AccessoryDataClient__Array *)
           func_?(TypeInfo__AccessoryDataClient,(this_02->fields)._size);
      for (pSVar1 = (String *)0x0; (int)pSVar1 < (this_02->fields)._size;
          pSVar1 = (String *)((int)&pSVar1->klass + 1)) {
        id = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                       (this_02,(int32_t)pSVar1,
                        MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
        pAVar13 = AccessoryDataManager::AccessoryDataManager_GetAccessoryDataByStreamingAssetId
                           ((int32_t)id,(MethodInfo *)0x0);
        this_02 = pLVar12;
        if (pAVar13 != (AccessoryDataClient *)0x0) {
          if (previewAccessories == (AccessoryDataClient__Array *)0x0) goto code_?;
          iVar5 = func_?(pAVar13,(previewAccessories->klass->_0).element_class);
          if (iVar5 == 0) goto code_?;
          func_?(pSVar1,pAVar13);
          this_02 = pLVar12;
        }
        pLVar12 = this_02;
      }
      pOVar6 = (Object *)this_00->token;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pOVar7 = (Object__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          (pOVar6,
                           PurchasedAccessoryPreviewer_MethodInfo__UnityEngine__Object__Instantiate<PurchasedAccessoryPreviewer>_PurchasedAccessoryPreviewer_
                          );
      object_00[1].klass = pOVar7;
      func_?(object_00 + 1,pOVar7);
      if (object_00[1].klass != (Object__Class *)0x0) {
        PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_Initialize
                  ((PurchasedAccessoryPreviewer *)object_00[1].klass,previewAccessories,
                   (MethodInfo *)0x0);
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_00,(MethodInfo *)0x0);
        pEVar8 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  func_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
        if (pEVar8 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)pEVar8,object_00,
                     MethodInfo__BundleView____c__DisplayClass20_1___ProductPurchaseResponseHandler_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar4,(BaseEventData *)0x0,pEVar8,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          return;
        }
      }
    }
  }
  else {
    puVar14 = &UNK_?;
    iVar5 = func_?(pDVar3);
    if (iVar5 != 0) {
      *(int *)(puVar14 + 0xb4) = iVar5;
      pMVar2 = (MVNetworkGame *)&UNK_?;
      iVar5 = func_?(pDVar3);
      if (iVar5 != 0) goto code_?;
    }
    func_?(pDVar3);
code_?:
    uVar15 = func_?(0);
    func_?(uVar15);
    pSVar11 = extraout_ECX;
code_?:
    func_?(pSVar1,pSVar11);
  }
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


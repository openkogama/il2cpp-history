
/* Void ActivateSubscriberUI(Boolean) */

void Assembly-CSharp.dll::PlayerElement::PlayerElement_ActivateSubscriberUI
               (PlayerElement *this,bool isFriend,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Item_int_
                   );
    func_?(&TypeInfo__Styles);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).memberUI;
  (this->fields).subscriber = 1;
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,1,(MethodInfo *)0x0);
    this_01 = (this->fields).nonMemberUI;
    if (this_01 != (Image *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this_01,0,(MethodInfo *)0x0);
      pTVar1 = (this->fields).rank;
      if (pTVar1 != (Text *)0x0) {
        CStack_2.b = (float)(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
        CStack_2.g = (float)::StringLiteral__;
        CStack_2.r = (float)pTVar1;
        (*(code *)(pTVar1->klass->vtable).set_text.method)();
        if (isFriend == 0) {
          pTVar1 = (this->fields).playerName;
          if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Styles);
          }
          pCVar3 = Styles::Styles_GetColor(&CStack_2,ColorStyle__Enum_OffWhite,(MethodInfo *)0x0);
          if (pTVar1 == (Text *)0x0) goto code_?;
          (*(code *)(pTVar1->klass->vtable).set_color.method)
                    (pTVar1,pCVar3->r,pCVar3->g,pCVar3->b,pCVar3->a,
                     (pTVar1->klass->vtable).get_raycastTarget.methodPtr);
        }
        pTVar1 = (this->fields).score;
        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Styles);
        }
        pCVar3 = Styles::Styles_GetColor(&CStack_2,ColorStyle__Enum_OffWhite,(MethodInfo *)0x0);
        if (pTVar1 != (Text *)0x0) {
          (*(code *)(pTVar1->klass->vtable).set_color.method)
                    (pTVar1,pCVar3->r,pCVar3->g,pCVar3->b,pCVar3->a,
                     (pTVar1->klass->vtable).get_raycastTarget.methodPtr);
          index = 0;
          pLVar4 = (this->fields).backgrounds;
          while (pLVar4 != (List_1_UnityEngine_UI_Image_ *)0x0) {
            if ((pLVar4->fields)._size <= index) {
              return;
            }
            this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                      (this->fields).backgrounds;
            if (this_02 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
            break;
            RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (this_02,index,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Item_int_
                              );
            if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__Styles);
            }
            pCVar3 = Styles::Styles_GetColor(&CStack_2,ColorStyle__Enum_Gray,(MethodInfo *)0x0);
            if (RVar5 == (RegexCharClass_SingleRange)0x0) break;
            (**(code **)(*(int *)RVar5 + 0x178))
                      (RVar5,pCVar3->r,pCVar3->g,pCVar3->b,pCVar3->a,
                       *(undefined4 *)(*(int *)RVar5 + 0x17c));
            index = index + 1;
            pLVar4 = (this->fields).backgrounds;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Initialize(MVPlayer, GameStatCounterType, Int32) */

void Assembly-CSharp.dll::PlayerElement::PlayerElement_Initialize
               (PlayerElement *this,MVPlayer *player,GameStatCounterType__Enum typeToDisplay,
               int32_t scoreValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Item_int_
                   );
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar1 != (MVNetworkGame *)0x0) && (player != (MVPlayer *)0x0)) &&
     (pFVar2 = (pMVar1->fields)._Friends_k__BackingField, pFVar2 != (FriendList *)0x0)) {
    value = FriendList::FriendList_GetFriendByProfileID
                      (pFVar2,(player->fields)._ProfileID_k__BackingField,(MethodInfo *)0x0);
    this_00 = (this->fields).underline;
    if ((this_00 != (Image *)0x0) &&
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_00,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,0,(MethodInfo *)0x0);
      pBVar4 = (this->fields).dotsImage;
      if ((pBVar4 != (Button *)0x0) &&
         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pBVar4,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,1,(MethodInfo *)0x0);
        pBVar4 = (this->fields).incomingFriendRequestRedDot;
        if ((pBVar4 != (Button *)0x0) &&
           (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pBVar4,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0)
           ) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,0,(MethodInfo *)0x0);
          if (value == (Friend *)0x0) {
            uVar5 = 0;
          }
          else {
            uVar5 = (uint)((value->fields).status == 2);
            if ((value->fields).status == 1) {
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (((pMVar1 == (MVNetworkGame *)0x0) ||
                  (pFVar2 = (pMVar1->fields)._Friends_k__BackingField, pFVar2 == (FriendList *)0x0))
                 || (this_01 = (Dictionary_2_System_UInt32_System_Object_ *)(pFVar2->fields).friends
                    , this_01 == (Dictionary_2_System_UInt32_System_Object_ *)0x0))
              goto code_?;
              bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System
                      ::Object]::Dictionary_2_System_UInt32_System_Object__ContainsValue
                                (this_01,(Object *)value,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_
                                );
              pBVar4 = (this->fields).dotsImage;
              if ((pBVar4 == (Button *)0x0) ||
                 (bVar7 = bVar6,
                 pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)pBVar4,(MethodInfo *)0x0),
                 pGVar8 == (GameObject *)0x0)) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar8,bVar7,(MethodInfo *)0x0);
              pBVar4 = (this->fields).incomingFriendRequestRedDot;
              if ((pBVar4 == (Button *)0x0) ||
                 (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)pBVar4,(MethodInfo *)0x0),
                 pGVar8 == (GameObject *)0x0)) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar8,bVar6 == 0,(MethodInfo *)0x0);
            }
          }
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar1 != (MVNetworkGame *)0x0) {
            pMVar9 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
            bVar6 = (bool)uVar5;
            if ((MVLocalPlayer *)player == pMVar9) {
              iVar10 = 0;
              this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        (this->fields).backgrounds;
              while (this_02 !=
                     (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
                bVar6 = (bool)uVar5;
                if ((this_02->fields)._size <= iVar10) {
                  player = (MVPlayer *)&UNK_?;
                  goto code_?;
                }
                if (this_02 ==
                    (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) break;
                RVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                         RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                   (this_02,iVar10,
                                    MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Item_int_
                                   );
                if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                Styles::Styles_GetColor
                          ((Color *)&stack0xffffffe4,ColorStyle__Enum_LocalPlayerBackground,
                           (MethodInfo *)0x0);
                if (RVar11 == (RegexCharClass_SingleRange)0x0) break;
                (**(code **)(*(int *)RVar11 + 0x178))();
                iVar10 = iVar10 + 1;
                this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          (this->fields).backgrounds;
              }
            }
            else {
code_?:
              this_03 = (((MVLocalPlayer *)player)->fields)._._SubscriptionRules_k__BackingField;
              if (this_03 != (SubscriptionRulesWrapper *)0x0) {
                bVar7 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                        SubscriptionRulesWrapper_HasBenefit
                                  (this_03,SubscriptionBenefit__Enum_XPBoost,(MethodInfo *)0x0);
                if (bVar7 == 0) {
                  pGVar8 = (this->fields).memberUI;
                  if (pGVar8 == (GameObject *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar8,0,(MethodInfo *)0x0);
                }
                else {
                  PlayerElement_ActivateSubscriberUI(this,bVar6,(MethodInfo *)0x0);
                }
                if (bVar6 != 0) {
                  pTVar12 = (this->fields).playerName;
                  if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  Styles::Styles_GetColor
                            ((Color *)&stack0xffffffe4,ColorStyle__Enum_FriendGreen,
                             (MethodInfo *)0x0);
                  if (pTVar12 == (Text *)0x0) goto code_?;
                  (*(code *)(pTVar12->klass->vtable).set_color.method)();
                }
                pUVar13 = (((MVLocalPlayer *)player)->fields)._._UserProfileData_k__BackingField;
                if (pUVar13 != (UserProfileData *)0x0) {
                  (this->fields).realPlayerName = (pUVar13->fields).UserName;
                  func_?();
                  pTVar12 = (this->fields).playerName;
                  if (pTVar12 != (Text *)0x0) {
                    (*(code *)(pTVar12->klass->vtable).set_text.method)();
                    pTVar12 = (this->fields).score;
                    typeToDisplay._0_1_ = SUB41(pGVar3,0);
                    if ((undefined1)typeToDisplay == GameStatCounterType__Enum_None) {
                      if ((pTVar12 == (Text *)0x0) ||
                         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_get_gameObject((Component *)pTVar12,(MethodInfo *)0x0),
                         pGVar3 == (GameObject *)0x0)) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar3,0,(MethodInfo *)0x0);
                    }
                    else {
                      if ((pTVar12 == (Text *)0x0) ||
                         (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_get_gameObject((Component *)pTVar12,(MethodInfo *)0x0),
                         pGVar8 == (GameObject *)0x0)) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar8,1,(MethodInfo *)0x0);
                      pTVar12 = (this->fields).score;
                      WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                                (0,(GameStatCounterType__Enum)pGVar3,(MethodInfo *)0x0);
                      if (pTVar12 == (Text *)0x0) goto code_?;
                      (*(code *)(pTVar12->klass->vtable).set_text.method)();
                    }
                    iVar10 = (((MVLocalPlayer *)player)->fields)._._ProfileID_k__BackingField;
                    (this->fields).profileId = iVar10;
                    if (iVar10 != 0) {
                      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game
                                         ((MethodInfo *)0x0);
                      if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
                      pMVar9 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                          (pMVar1,(MethodInfo *)0x0);
                      if ((MVLocalPlayer *)player != pMVar9) {
                        return;
                      }
                    }
                    pBVar4 = (this->fields).playerNameAndScoreButton;
                    if (pBVar4 != (Button *)0x0) {
                      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                                ((Selectable *)pBVar4,0,(MethodInfo *)0x0);
                      pBVar4 = (this->fields).dotsImage;
                      if ((pBVar4 != (Button *)0x0) &&
                         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_get_gameObject((Component *)pBVar4,(MethodInfo *)0x0),
                         pGVar3 != (GameObject *)0x0)) {
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (pGVar3,0,(MethodInfo *)0x0);
                        pBVar4 = (this->fields).incomingFriendRequestRedDot;
                        if ((pBVar4 != (Button *)0x0) &&
                           (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                     Component_get_gameObject((Component *)pBVar4,(MethodInfo *)0x0)
                           , pGVar3 != (GameObject *)0x0)) {
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (pGVar3,0,(MethodInfo *)0x0);
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
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnPlayerClicked() */

void Assembly-CSharp.dll::PlayerElement::PlayerElement_OnPlayerClicked
               (PlayerElement *this,MethodInfo *method)

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
                    PlayerSocialPopup_MethodInfo__UnityEngine__Object__Instantiate<PlayerSocialPopup>_PlayerSocialPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__PlayerElement____c__DisplayClass18_0___OnPlayerClicked_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__PlayerElement____c__DisplayClass18_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PlayerElement____c__DisplayClass18_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).playerSocialPopupPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      PlayerSocialPopup_MethodInfo__UnityEngine__Object__Instantiate<PlayerSocialPopup>_PlayerSocialPopup_
                     );
  if (value != (Object *)0x0) {
    pOVar2 = value + 1;
    pOVar2->klass = pOVar1;
    func_?(pOVar2,pOVar1);
    if (pOVar2->klass != (Object__Class *)0x0) {
      PlayerSocialPopup::PlayerSocialPopup_Initialize
                ((PlayerSocialPopup *)pOVar2->klass,(this->fields).profileId,
                 (this->fields).realPlayerName,(this->fields).subscriber,(MethodInfo *)0x0);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__PlayerElement____c__DisplayClass18_0___OnPlayerClicked_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnPointerEnter(PointerEventData) */

void Assembly-CSharp.dll::PlayerElement::PlayerElement_OnPointerEnter
               (PlayerElement *this,PointerEventData *eventData,MethodInfo *method)

{
  this_00 = (this->fields).underline;
  if (this_00 != (Image *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      (*pcRam_?)();
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff8);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnPointerExit(PointerEventData) */

void Assembly-CSharp.dll::PlayerElement::PlayerElement_OnPointerExit
               (PlayerElement *this,PointerEventData *eventData,MethodInfo *method)

{
  this_00 = (this->fields).underline;
  if (this_00 != (Image *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      (*pcRam_?)();
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff8);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateScoreIndex() */

void Assembly-CSharp.dll::PlayerElement::PlayerElement_UpdateScoreIndex
               (PlayerElement *this,MethodInfo *method)

{
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_01 != (Transform *)0x0) {
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetSiblingIndex
                      (this_01,(MethodInfo *)0x0);
    IStack_2.m_value = iVar1 + 1;
    mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
    this_00 = (this->fields).memberUI;
    if (this_00 != (GameObject *)0x0) {
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (this_00,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        pTVar4 = (this->fields).rank;
        if (pTVar4 == (Text *)0x0) goto code_?;
        pTVar5 = pTVar4->klass;
        pIStack6 = (pTVar5->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
        (*(code *)(pTVar5->vtable).set_text.method)();
      }
      pTVar4 = (this->fields).memberRank;
      if (pTVar4 != (Text *)0x0) {
        pTVar5 = pTVar4->klass;
        pIStack6 = (pTVar5->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
        (*(code *)(pTVar5->vtable).set_text.method)();
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* String get_PlayerName() */

String * Assembly-CSharp.dll::PlayerElement::PlayerElement_get_PlayerName
                   (PlayerElement *this,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pTStack_2 = (this->fields).playerName;
  if (pTStack_2 != (Text *)0x0) {
    pIStack_1 = (pTStack_2->klass->vtable).set_text.methodPtr;
    pSVar3 = (String *)(*(code *)(pTStack_2->klass->vtable).get_text.method)();
    return pSVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar6)();
  return pSVar3;
}


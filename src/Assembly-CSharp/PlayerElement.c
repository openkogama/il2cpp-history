
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
    pFVar3 = FriendList::FriendList_GetFriendByProfileID
                        (pFVar2,(player->fields)._ProfileID_k__BackingField,(MethodInfo *)0x0);
    this_00 = (this->fields).underline;
    if ((this_00 != (Image *)0x0) &&
       (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,0,(MethodInfo *)0x0);
      pBVar5 = (this->fields).dotsImage;
      if ((pBVar5 != (Button *)0x0) &&
         (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pBVar5,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0)
         ) {
        value = (Object *)&UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar4,1,(MethodInfo *)0x0);
        pBVar5 = (this->fields).incomingFriendRequestRedDot;
        if ((pBVar5 != (Button *)0x0) &&
           (pMVar6 = (MVLocalPlayer *)
                      UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pBVar5,(MethodInfo *)0x0),
           pMVar6 != (MVLocalPlayer *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    ((GameObject *)pMVar6,0,(MethodInfo *)0x0);
          if (pFVar3 == (Friend *)0x0) {
            bVar7 = false;
            iVar8 = 0;
          }
          else {
            bVar7 = (pFVar3->fields).status == 2;
            iVar8 = (uint)bVar7 << 0x18;
            if (value[2].klass == (Object__Class *)0x1) {
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (((pMVar1 == (MVNetworkGame *)0x0) ||
                  (pFVar2 = (pMVar1->fields)._Friends_k__BackingField, pFVar2 == (FriendList *)0x0))
                 || (this_01 = (Dictionary_2_System_UInt32_System_Object_ *)(pFVar2->fields).friends
                    , this_01 == (Dictionary_2_System_UInt32_System_Object_ *)0x0))
              goto code_?;
              bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System
                      ::Object]::Dictionary_2_System_UInt32_System_Object__ContainsValue
                                (this_01,value,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_
                                );
              pBVar5 = (this->fields).dotsImage;
              if ((pBVar5 == (Button *)0x0) ||
                 (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)pBVar5,(MethodInfo *)0x0),
                 pGVar4 == (GameObject *)0x0)) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar4,bVar9,(MethodInfo *)0x0);
              pBVar5 = (this->fields).incomingFriendRequestRedDot;
              if ((pBVar5 == (Button *)0x0) ||
                 (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)pBVar5,(MethodInfo *)0x0),
                 pGVar4 == (GameObject *)0x0)) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar4,bVar9 ^ 1,(MethodInfo *)0x0);
              iVar8 = (uint)bVar7 << 0x18;
            }
          }
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar1 != (MVNetworkGame *)0x0) {
            pMVar10 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
            bVar9 = (bool)((uint)iVar8 >> 0x18);
            if ((MVLocalPlayer *)player == pMVar10) {
              index = 0;
              pLVar11 = (this->fields).backgrounds;
              while (pLVar11 != (List_1_UnityEngine_UI_Image_ *)0x0) {
                bVar9 = (bool)((uint)iVar8 >> 0x18);
                player = (MVPlayer *)pMVar6;
                if ((pLVar11->fields)._size <= index) goto code_?;
                this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          (this->fields).backgrounds;
                if (this_02 ==
                    (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) break;
                RVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                         RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                   (this_02,index,
                                    MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Item_int_
                                   );
                if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                Styles::Styles_GetColor
                          ((Color *)&stack0xffffffe0,ColorStyle__Enum_LocalPlayerBackground,
                           (MethodInfo *)0x0);
                if (RVar12 == (RegexCharClass_SingleRange)0x0) break;
                (**(code **)(*(int *)RVar12 + 0x178))();
                index = index + 1;
                pLVar11 = (this->fields).backgrounds;
              }
            }
            else {
code_?:
              this_03 = (((MVLocalPlayer *)player)->fields)._._SubscriptionRules_k__BackingField;
              if (this_03 != (SubscriptionRulesWrapper *)0x0) {
                bVar13 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                        SubscriptionRulesWrapper_HasBenefit
                                  (this_03,SubscriptionBenefit__Enum_XPBoost,(MethodInfo *)0x0);
                if (bVar13 == 0) {
                  pGVar4 = (this->fields).memberUI;
                  if (pGVar4 == (GameObject *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar4,0,(MethodInfo *)0x0);
                }
                else {
                  PlayerElement_ActivateSubscriberUI(this,bVar9,(MethodInfo *)0x0);
                }
                if (bVar7) {
                  pTVar14 = (this->fields).playerName;
                  if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  Styles::Styles_GetColor
                            ((Color *)&stack0xffffffe0,ColorStyle__Enum_FriendGreen,
                             (MethodInfo *)0x0);
                  if (pTVar14 == (Text *)0x0) goto code_?;
                  (*(code *)(pTVar14->klass->vtable).set_color.method)();
                }
                pUVar15 = (((MVLocalPlayer *)player)->fields)._._UserProfileData_k__BackingField;
                if (pUVar15 != (UserProfileData *)0x0) {
                  (this->fields).realPlayerName = (pUVar15->fields).UserName;
                  func_?();
                  pTVar14 = (this->fields).playerName;
                  if (pTVar14 != (Text *)0x0) {
                    (*(code *)(pTVar14->klass->vtable).set_text.method)();
                    pTVar14 = (this->fields).score;
                    if ((pTVar14 != (Text *)0x0) &&
                       (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)pTVar14,(MethodInfo *)0x0),
                       pGVar4 != (GameObject *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar4,0,(MethodInfo *)0x0);
                      iVar8 = (((MVLocalPlayer *)player)->fields)._._ProfileID_k__BackingField;
                      (this->fields).profileId = iVar8;
                      if (iVar8 != 0) {
                        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game
                                           ((MethodInfo *)0x0);
                        if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
                        pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                            (pMVar1,(MethodInfo *)0x0);
                        if ((MVLocalPlayer *)player != pMVar6) {
                          return;
                        }
                      }
                      pBVar5 = (this->fields).playerNameAndScoreButton;
                      if (pBVar5 != (Button *)0x0) {
                        UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                                  ((Selectable *)pBVar5,0,(MethodInfo *)0x0);
                        pBVar5 = (this->fields).dotsImage;
                        if ((pBVar5 != (Button *)0x0) &&
                           (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_get_gameObject
                                                ((Component *)pBVar5,(MethodInfo *)0x0),
                           pGVar4 != (GameObject *)0x0)) {
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (pGVar4,0,(MethodInfo *)0x0);
                          pBVar5 = (this->fields).incomingFriendRequestRedDot;
                          if ((pBVar5 != (Button *)0x0) &&
                             (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_get_gameObject
                                                  ((Component *)pBVar5,(MethodInfo *)0x0),
                             pGVar4 != (GameObject *)0x0)) {
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
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    if (value[1].klass != (Object__Class *)0x0) {
      PlayerSocialPopup::PlayerSocialPopup_Initialize
                ((PlayerSocialPopup *)value[1].klass,(this->fields).profileId,
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
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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



/* Void ActivateSubscriberUI(Boolean) */

void Assembly-CSharp.dll::PlayerElementHold::PlayerElementHold_ActivateSubscriberUI
               (PlayerElementHold *this,bool isFriend,MethodInfo *method)

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

void Assembly-CSharp.dll::PlayerElementHold::PlayerElementHold_Initialize
               (PlayerElementHold *this,MVPlayer *player,GameStatCounterType__Enum typeToDisplay,
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
    bVar3 = false;
    if (value != (Friend *)0x0) {
      bVar3 = (value->fields).status == 2;
    }
    this_01 = (Dictionary_2_System_UInt32_System_Object_ *)((uint)bVar3 << 0x18);
    pIVar4 = (this->fields).redDot;
    if ((pIVar4 != (Image *)0x0) &&
       (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pIVar4,(MethodInfo *)0x0), pGVar5 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar5,0,(MethodInfo *)0x0);
      if ((value != (Friend *)0x0) && ((value->fields).status == 1)) {
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar1 == (MVNetworkGame *)0x0) ||
            (pFVar2 = (pMVar1->fields)._Friends_k__BackingField, pFVar2 == (FriendList *)0x0)) ||
           (this_01 = (Dictionary_2_System_UInt32_System_Object_ *)(pFVar2->fields).friends,
           this_01 == (Dictionary_2_System_UInt32_System_Object_ *)0x0)) goto code_?;
        bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                Object]::Dictionary_2_System_UInt32_System_Object__ContainsValue
                          (this_01,(Object *)value,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_
                          );
        pIVar4 = (this->fields).redDot;
        if ((pIVar4 == (Image *)0x0) ||
           (player = (MVPlayer *)
                     UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pIVar4,(MethodInfo *)0x0), player == (MVPlayer *)0x0))
        goto code_?;
        scoreValue = 0;
        typeToDisplay = (GameStatCounterType__Enum)(bVar6 == 0);
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  ((GameObject *)player,bVar6 == 0,(MethodInfo *)0x0);
      }
      if (bVar3 == false) {
code_?:
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 != (MVNetworkGame *)0x0) {
          pMVar7 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
          bVar6 = (bool)((uint)this_01 >> 0x18);
          if ((MVLocalPlayer *)player == pMVar7) {
            iVar8 = 0;
            pLVar9 = (this->fields).backgrounds;
            while (pLVar9 != (List_1_UnityEngine_UI_Image_ *)0x0) {
              bVar6 = (bool)((uint)this_01 >> 0x18);
              if ((pLVar9->fields)._size <= iVar8) goto code_?;
              pLVar10 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       (this->fields).backgrounds;
              if (pLVar10 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0
                 ) break;
              RVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                       RegularExpressions::RegexCharClass+SingleRange]::
                       List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                 (pLVar10,iVar8,
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Item_int_
                                 );
              if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              Styles::Styles_GetColor
                        ((Color *)&stack0xffffffe4,ColorStyle__Enum_LocalPlayerBackground,
                         (MethodInfo *)0x0);
              if (RVar11 == (RegexCharClass_SingleRange)0x0) break;
              scoreValue = (int32_t)&UNK_?;
              (**(code **)(*(int *)RVar11 + 0x178))();
              iVar8 = iVar8 + 1;
              pLVar9 = (this->fields).backgrounds;
            }
          }
          else {
code_?:
            this_00 = (player->fields)._SubscriptionRules_k__BackingField;
            if (this_00 != (SubscriptionRulesWrapper *)0x0) {
              bVar12 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                      SubscriptionRulesWrapper_HasBenefit
                                (this_00,SubscriptionBenefit__Enum_XPBoost,(MethodInfo *)0x0);
              if (bVar12 == 0) {
                pGVar5 = (this->fields).memberUI;
                if (pGVar5 == (GameObject *)0x0) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar5,0,(MethodInfo *)0x0);
              }
              else {
                PlayerElementHold_ActivateSubscriberUI(this,bVar6,(MethodInfo *)0x0);
              }
              pTVar13 = (this->fields).playerName;
              if (((player->fields)._UserProfileData_k__BackingField != (UserProfileData *)0x0) &&
                 (pTVar13 != (Text *)0x0)) {
                (*(code *)(pTVar13->klass->vtable).set_text.method)();
                pTVar13 = (this->fields).score;
                if ((char)typeToDisplay == '\0') {
                  if ((pTVar13 != (Text *)0x0) &&
                     (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject((Component *)pTVar13,(MethodInfo *)0x0),
                     pGVar5 != (GameObject *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar5,0,(MethodInfo *)0x0);
                    return;
                  }
                }
                else if ((pTVar13 != (Text *)0x0) &&
                        (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_get_gameObject((Component *)pTVar13,(MethodInfo *)0x0),
                        pGVar5 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar5,1,(MethodInfo *)0x0);
                  pTVar13 = (this->fields).score;
                  WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                            (scoreValue,typeToDisplay,(MethodInfo *)0x0);
                  if (pTVar13 != (Text *)0x0) {
                    (*(code *)(pTVar13->klass->vtable).set_text.method)();
                    return;
                  }
                }
              }
            }
          }
        }
      }
      else {
        pTVar13 = (this->fields).playerName;
        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        Styles::Styles_GetColor
                  ((Color *)&stack0xffffffe4,ColorStyle__Enum_FriendGreen,(MethodInfo *)0x0);
        if (pTVar13 != (Text *)0x0) {
          scoreValue = (int32_t)&UNK_?;
          (*(code *)(pTVar13->klass->vtable).set_color.method)();
          iVar8 = 0;
          pLVar9 = (this->fields).backgrounds;
          while (pLVar9 != (List_1_UnityEngine_UI_Image_ *)0x0) {
            if ((pLVar9->fields)._size <= iVar8) goto code_?;
            pLVar10 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                     (this->fields).backgrounds;
            if (pLVar10 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
            break;
            RVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               (pLVar10,iVar8,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Item_int_
                               );
            if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            Styles::Styles_GetColor
                      ((Color *)&stack0xffffffe4,ColorStyle__Enum_FriendListBackground,
                       (MethodInfo *)0x0);
            if (RVar11 == (RegexCharClass_SingleRange)0x0) break;
            scoreValue = (int32_t)&UNK_?;
            (**(code **)(*(int *)RVar11 + 0x178))();
            iVar8 = iVar8 + 1;
            pLVar9 = (this->fields).backgrounds;
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


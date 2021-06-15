
/* Void ActivateSubscriberUI(Boolean) */

void Assembly-CSharp.dll::PlayerElement::PlayerElement_ActivateSubscriberUI
               (PlayerElement *this,bool isFriend,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      if (pTVar1 != (Text *)0x0) {
        (*(code *)(pTVar1->klass->vtable).set_text.method)
                  (pTVar1,TypeInfo__System__String->static_fields->Empty,
                   (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
        if (isFriend == 0) {
          pTVar1 = (this->fields).playerName;
          if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__Styles->_1).cctor_started == 0)) {
            func_?(TypeInfo__Styles);
          }
          pCVar2 = Styles::Styles_GetColor
                             ((Color *)&stack0xffffffec,ColorStyle__Enum_OffWhite,(MethodInfo *)0x0)
          ;
          if (pTVar1 == (Text *)0x0) goto code_?;
          (*(code *)(pTVar1->klass->vtable).set_color.method)
                    (pTVar1,pCVar2->r,pCVar2->g,pCVar2->b,pCVar2->a,
                     (pTVar1->klass->vtable).get_raycastTarget.methodPtr);
        }
        pTVar1 = (this->fields).score;
        if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Styles->_1).cctor_started == 0)) {
          func_?(TypeInfo__Styles);
        }
        pCVar2 = Styles::Styles_GetColor
                           ((Color *)&stack0xffffffec,ColorStyle__Enum_OffWhite,(MethodInfo *)0x0);
        if (pTVar1 != (Text *)0x0) {
          (*(code *)(pTVar1->klass->vtable).set_color.method)
                    (pTVar1,pCVar2->r,pCVar2->g,pCVar2->b,pCVar2->a,
                     (pTVar1->klass->vtable).get_raycastTarget.methodPtr);
          index = 0;
          pLVar3 = (this->fields).backgrounds;
          while (pLVar3 != (List_1_UnityEngine_UI_Image_ *)0x0) {
            pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar3,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Count__
                               );
            if ((int)pOVar4 <= index) {
              return;
            }
            pLVar3 = (this->fields).backgrounds;
            if (pLVar3 == (List_1_UnityEngine_UI_Image_ *)0x0) break;
            pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar3,index
                                ,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Item_int_
                               );
            if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__Styles->_1).cctor_started == 0)) {
              func_?();
            }
            Styles::Styles_GetColor
                      ((Color *)&stack0xffffffec,ColorStyle__Enum_Gray,(MethodInfo *)0x0);
            if (pIVar5 == (IEventSystemHandler *)0x0) break;
            func_?(0x17);
            index = index + 1;
            pLVar3 = (this->fields).backgrounds;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar1 != (MVNetworkGame *)0x0) &&
      (pTVar2 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                          ((CloudyThemeBase *)pMVar1,(MethodInfo *)0x0), player != (MVPlayer *)0x0))
     && (pOVar3 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                  TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                  TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                            ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)player,
                             (MethodInfo *)0x0), pTVar2 != (ThemeSkybox *)0x0)) {
    value = FriendList::FriendList_GetFriendByProfileID
                      ((FriendList *)pTVar2,(int32_t)pOVar3,(MethodInfo *)0x0);
    this_00 = (this->fields).underline;
    if ((this_00 != (Image *)0x0) &&
       (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this_00,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,0,(MethodInfo *)0x0);
      pBVar5 = (this->fields).dotsImage;
      if ((pBVar5 != (Button *)0x0) &&
         (pMVar6 = (MVLocalPlayer *)
                    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)pBVar5,(MethodInfo *)0x0),
         pMVar6 != (MVLocalPlayer *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  ((GameObject *)pMVar6,1,(MethodInfo *)0x0);
        pBVar5 = (this->fields).incomingFriendRequestRedDot;
        if ((pBVar5 != (Button *)0x0) &&
           (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)pBVar5,(MethodInfo *)0x0),
           pGVar4 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,0,(MethodInfo *)0x0);
          if (value == (Friend *)0x0) {
            isFriend = false;
          }
          else {
            isFriend = (value->fields).status == 2;
            if ((value->fields).status == 1) {
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?();
              }
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (((pMVar1 == (MVNetworkGame *)0x0) ||
                  (pTVar2 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                                      ((CloudyThemeBase *)pMVar1,(MethodInfo *)0x0),
                  pTVar2 == (ThemeSkybox *)0x0)) ||
                 (this_01 = (Dictionary_2_WinningConditionType_System_Object_ *)
                            System.Core.dll::System::Linq::
                            Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                            Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                                      ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)
                                       pTVar2,(MethodInfo *)0x0),
                 this_01 == (Dictionary_2_WinningConditionType_System_Object_ *)0x0))
              goto code_?;
              bVar7 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[WinningConditionType,System::Object]::
                      Dictionary_2_WinningConditionType_System_Object__ContainsValue
                                (this_01,(Object *)value,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_
                                );
              pBVar5 = (this->fields).dotsImage;
              if ((pBVar5 == (Button *)0x0) ||
                 (value_00 = bVar7,
                 pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_gameObject((Component_1 *)pBVar5,(MethodInfo *)0x0),
                 pGVar4 == (GameObject *)0x0)) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar4,value_00,(MethodInfo *)0x0);
              pBVar5 = (this->fields).incomingFriendRequestRedDot;
              if ((pBVar5 == (Button *)0x0) ||
                 (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_1_get_gameObject((Component_1 *)pBVar5,(MethodInfo *)0x0),
                 pGVar4 == (GameObject *)0x0)) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar4,bVar7 == 0,(MethodInfo *)0x0);
              player = (MVPlayer *)pMVar6;
            }
          }
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar1 != (MVNetworkGame *)0x0) {
            pMVar8 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
            if ((MVLocalPlayer *)player == pMVar8) {
              index = 0;
              pLVar9 = (this->fields).backgrounds;
              while (pLVar9 != (List_1_UnityEngine_UI_Image_ *)0x0) {
                pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                         Json::Serialization::JsonProperty]::
                         Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                   ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                    pLVar9,
                                    MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Count__
                                   );
                player = (MVPlayer *)pMVar6;
                if ((int)pOVar3 <= index) goto code_?;
                pLVar9 = (this->fields).backgrounds;
                if (pLVar9 == (List_1_UnityEngine_UI_Image_ *)0x0) break;
                pIVar10 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                          EventSystems::IEventSystemHandler]::
                          List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                    ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar9,
                                     index,
                                     MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Item_int_
                                    );
                if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__Styles->_1).cctor_started == 0)) {
                  func_?();
                }
                Styles::Styles_GetColor
                          ((Color *)&stack0xffffffe4,ColorStyle__Enum_LocalPlayerBackground,
                           (MethodInfo *)0x0);
                if (pIVar10 == (IEventSystemHandler *)0x0) break;
                func_?();
                index = index + 1;
                pLVar9 = (this->fields).backgrounds;
              }
            }
            else {
code_?:
              this_02 = (SubscriptionRulesWrapper *)
                        PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                        PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                                  ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)player,
                                   (MethodInfo *)0x0);
              if (this_02 != (SubscriptionRulesWrapper *)0x0) {
                bVar7 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                        SubscriptionRulesWrapper_HasBenefit
                                  (this_02,SubscriptionBenefit__Enum_XPBoost,(MethodInfo *)0x0);
                if (bVar7 == 0) {
                  pGVar4 = (this->fields).memberUI;
                  if (pGVar4 == (GameObject *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar4,0,(MethodInfo *)0x0);
                }
                else {
                  PlayerElement_ActivateSubscriberUI(this,isFriend,(MethodInfo *)0x0);
                }
                if (isFriend != false) {
                  pTVar11 = (this->fields).playerName;
                  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                     ((TypeInfo__Styles->_1).cctor_started == 0)) {
                    func_?();
                  }
                  Styles::Styles_GetColor
                            ((Color *)&stack0xffffffe4,ColorStyle__Enum_FriendGreen,
                             (MethodInfo *)0x0);
                  if (pTVar11 == (Text *)0x0) goto code_?;
                  (*(code *)(pTVar11->klass->vtable).set_color.method)();
                }
                iVar12 = GamePointGainEffect::GamePointGainEffect_get_ID
                                   ((GamePointGainEffect *)player,(MethodInfo *)0x0);
                if (iVar12 != 0) {
                  pTVar11 = (this->fields).playerName;
                  (this->fields).realPlayerName = *(String **)(iVar12 + 0xc);
                  if (pTVar11 != (Text *)0x0) {
                    (*(code *)(pTVar11->klass->vtable).set_text.method)();
                    pTVar11 = (this->fields).score;
                    if ((pTVar11 != (Text *)0x0) &&
                       (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_1_get_gameObject((Component_1 *)pTVar11,(MethodInfo *)0x0)
                       , pGVar4 != (GameObject *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar4,1,(MethodInfo *)0x0);
                      pTVar11 = (this->fields).score;
                      WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                                (0,GameStatCounterType__Enum_Kill,(MethodInfo *)0x0);
                      if (pTVar11 != (Text *)0x0) {
                        (*(code *)(pTVar11->klass->vtable).set_text.method)();
                        pOVar3 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                                 TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                                 TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                           ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)player,
                                            (MethodInfo *)0x0);
                        (this->fields).profileId = (int32_t)pOVar3;
                        if (pOVar3 != (Object *)0x0) {
                          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                               0x2000000) != 0) &&
                             ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                            func_?();
                          }
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
                          UnityEngine.UI.dll::UnityEngine::UI::Selectable::
                          Selectable_set_interactable((Selectable *)pBVar5,0,(MethodInfo *)0x0);
                          pBVar5 = (this->fields).dotsImage;
                          if ((pBVar5 != (Button *)0x0) &&
                             (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                       Component_1_get_gameObject
                                                 ((Component_1 *)pBVar5,(MethodInfo *)0x0),
                             pGVar4 != (GameObject *)0x0)) {
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive(pGVar4,0,(MethodInfo *)0x0);
                            pBVar5 = (this->fields).incomingFriendRequestRedDot;
                            if ((pBVar5 != (Button *)0x0) &&
                               (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                         Component_1_get_gameObject
                                                   ((Component_1 *)pBVar5,(MethodInfo *)0x0),
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
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnPlayerClicked() */

void Assembly-CSharp.dll::PlayerElement::PlayerElement_OnPlayerClicked
               (PlayerElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PlayerElement___OnPlayerClicked_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  pPVar1 = (this->fields).playerSocialPopupPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pPVar1 = (PlayerSocialPopup *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pPVar1,
                      PlayerSocialPopup_MethodInfo__UnityEngine__Object__Instantiate<PlayerSocialPopup>_PlayerSocialPopup_
                     );
  if ((this_00 != (ScaleAnimationBase *)0x0) &&
     ((this_00->fields)._._._._.m_CachedPtr = pPVar1, pPVar1 != (PlayerSocialPopup *)0x0)) {
    PlayerSocialPopup::PlayerSocialPopup_Initialize
              (pPVar1,(this->fields).profileId,(this->fields).realPlayerName,
               (this->fields).subscriber,(MethodInfo *)0x0);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__PlayerElement___OnPlayerClicked_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPointerEnter(PointerEventData) */

void Assembly-CSharp.dll::PlayerElement::PlayerElement_OnPointerEnter
               (PlayerElement *this,PointerEventData *eventData,MethodInfo *method)

{
  this_00 = (this->fields).underline;
  if ((this_00 == (Image *)0x0) ||
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this_00,(MethodInfo *)0x0), pGVar1 == (GameObject *)0x0)) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)func_?(), pcVar2 == (code *)0x0))
  {
    uVar3 = func_?(&UNK_?,0);
    func_?(uVar3);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(0);
  return;
}


/* Void OnPointerExit(PointerEventData) */

void Assembly-CSharp.dll::PlayerElement::PlayerElement_OnPointerExit
               (PlayerElement *this,PointerEventData *eventData,MethodInfo *method)

{
  this_00 = (this->fields).underline;
  if ((this_00 == (Image *)0x0) ||
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this_00,(MethodInfo *)0x0), pGVar1 == (GameObject *)0x0)) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)func_?(), pcVar2 == (code *)0x0))
  {
    uVar3 = func_?(&UNK_?,0);
    func_?(uVar3);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(0);
  return;
}


/* Void UpdateScoreIndex() */

void Assembly-CSharp.dll::PlayerElement::PlayerElement_UpdateScoreIndex
               (PlayerElement *this,MethodInfo *method)

{
  iStack_1 = 0;
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_01 != (Transform *)0x0) {
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetSiblingIndex
                      (this_01,(MethodInfo *)0x0);
    iStack_1 = iVar2 + 1;
    uVar3 = func_?(&iStack_1,0);
    this_00 = (this->fields).memberUI;
    if (this_00 != (GameObject *)0x0) {
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (this_00,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        pTVar5 = (this->fields).rank;
        if (pTVar5 == (Text *)0x0) goto code_?;
        (*(code *)(pTVar5->klass->vtable).set_text.method)
                  (pTVar5,uVar3,(pTVar5->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      }
      pTVar5 = (this->fields).memberRank;
      if (pTVar5 != (Text *)0x0) {
        (*(code *)(pTVar5->klass->vtable).set_text.method)
                  (pTVar5,uVar3,(pTVar5->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* String get_PlayerName() */

String * Assembly-CSharp.dll::PlayerElement::PlayerElement_get_PlayerName
                   (PlayerElement *this,MethodInfo *method)

{
  pTVar1 = (this->fields).playerName;
  if (pTVar1 != (Text *)0x0) {
    pSVar2 = (String *)
             (*(code *)(pTVar1->klass->vtable).get_text.method)
                       (pTVar1,(pTVar1->klass->vtable).set_text.methodPtr);
    return pSVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar3)();
  return pSVar2;
}


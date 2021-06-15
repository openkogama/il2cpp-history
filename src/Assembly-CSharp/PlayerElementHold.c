
/* Void ActivateSubscriberUI(Boolean) */

void Assembly-CSharp.dll::PlayerElementHold::PlayerElementHold_ActivateSubscriberUI
               (PlayerElementHold *this,bool isFriend,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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

void Assembly-CSharp.dll::PlayerElementHold::PlayerElementHold_Initialize
               (PlayerElementHold *this,MVPlayer *player,GameStatCounterType__Enum typeToDisplay,
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
    bVar4 = false;
    if (value != (Friend *)0x0) {
      bVar4 = (value->fields).status == 2;
    }
    pIVar5 = (this->fields).redDot;
    if ((pIVar5 != (Image *)0x0) &&
       (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)pIVar5,(MethodInfo *)0x0), pGVar6 != (GameObject *)0x0)
       ) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar6,0,(MethodInfo *)0x0);
      if ((value != (Friend *)0x0) && ((value->fields).status == 1)) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar1 == (MVNetworkGame *)0x0) ||
            (pTVar2 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                                ((CloudyThemeBase *)pMVar1,(MethodInfo *)0x0),
            pTVar2 == (ThemeSkybox *)0x0)) ||
           (this_00 = (Dictionary_2_WinningConditionType_System_Object_ *)
                      System.Core.dll::System::Linq::
                      Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                      Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                                ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)pTVar2
                                 ,(MethodInfo *)0x0),
           this_00 == (Dictionary_2_WinningConditionType_System_Object_ *)0x0))
        goto code_?;
        bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
                ::Object]::Dictionary_2_WinningConditionType_System_Object__ContainsValue
                          (this_00,(Object *)value,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_
                          );
        pIVar5 = (this->fields).redDot;
        if ((pIVar5 == (Image *)0x0) ||
           (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                                ((Component_1 *)pIVar5,(MethodInfo *)0x0),
           this_01 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,bVar7 == 0,(MethodInfo *)0x0);
      }
      if (bVar4) {
        pTVar8 = (this->fields).playerName;
        if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Styles->_1).cctor_started == 0)) {
          func_?();
        }
        Styles::Styles_GetColor
                  ((Color *)&stack0xffffffe4,ColorStyle__Enum_FriendGreen,(MethodInfo *)0x0);
        if (pTVar8 != (Text *)0x0) {
          (*(code *)(pTVar8->klass->vtable).set_color.method)();
          iVar9 = 0;
          pLVar10 = (this->fields).backgrounds;
          while (pLVar10 != (List_1_UnityEngine_UI_Image_ *)0x0) {
            pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar10,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Count__
                               );
            if ((int)pOVar3 <= iVar9) goto code_?;
            pLVar10 = (this->fields).backgrounds;
            if (pLVar10 == (List_1_UnityEngine_UI_Image_ *)0x0) break;
            pIVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar10,
                                 iVar9,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Item_int_
                                );
            if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__Styles->_1).cctor_started == 0)) {
              func_?();
            }
            Styles::Styles_GetColor
                      ((Color *)&stack0xffffffe4,ColorStyle__Enum_FriendListBackground,
                       (MethodInfo *)0x0);
            if (pIVar11 == (IEventSystemHandler *)0x0) break;
            func_?();
            iVar9 = iVar9 + 1;
            pLVar10 = (this->fields).backgrounds;
          }
        }
      }
      else {
code_?:
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 != (MVNetworkGame *)0x0) {
          pMVar12 = (MVNetworkGame *)
                    MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
          bVar7 = (bool)((uint)pGVar6 >> 0x18);
          if (pMVar1 == pMVar12) {
            iVar9 = 0;
            pLVar10 = (this->fields).backgrounds;
            while (pLVar10 != (List_1_UnityEngine_UI_Image_ *)0x0) {
              pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                       ::Serialization::JsonProperty]::
                       Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                 ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar10
                                  ,
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Count__
                                 );
              bVar7 = (bool)((uint)pGVar6 >> 0x18);
              if ((int)pOVar3 <= iVar9) goto code_?;
              pLVar10 = (this->fields).backgrounds;
              if (pLVar10 == (List_1_UnityEngine_UI_Image_ *)0x0) break;
              pIVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                        ::IEventSystemHandler]::
                        List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                  ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar10,
                                   iVar9,
                                   MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Item_int_
                                  );
              if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__Styles->_1).cctor_started == 0)) {
                func_?();
              }
              pCVar13 = Styles::Styles_GetColor
                                  ((Color *)&stack0xffffffe4,ColorStyle__Enum_LocalPlayerBackground,
                                   (MethodInfo *)0x0);
              if (pIVar11 == (IEventSystemHandler *)0x0) break;
              pMVar1 = (MVNetworkGame *)pCVar13->r;
              func_?();
              iVar9 = iVar9 + 1;
              pLVar10 = (this->fields).backgrounds;
            }
          }
          else {
code_?:
            this_02 = (SubscriptionRulesWrapper *)
                      PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                      PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                                ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)pMVar1,
                                 (MethodInfo *)0x0);
            if (this_02 != (SubscriptionRulesWrapper *)0x0) {
              bVar14 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                      SubscriptionRulesWrapper_HasBenefit
                                (this_02,SubscriptionBenefit__Enum_XPBoost,(MethodInfo *)0x0);
              if (bVar14 == 0) {
                pGVar6 = (this->fields).memberUI;
                if (pGVar6 == (GameObject *)0x0) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar6,0,(MethodInfo *)0x0);
              }
              else {
                PlayerElementHold_ActivateSubscriberUI(this,bVar7,(MethodInfo *)0x0);
              }
              pTVar8 = (this->fields).playerName;
              iVar15 = GamePointGainEffect::GamePointGainEffect_get_ID
                                 ((GamePointGainEffect *)pMVar1,(MethodInfo *)0x0);
              if ((iVar15 != 0) && (pTVar8 != (Text *)0x0)) {
                (*(code *)(pTVar8->klass->vtable).set_text.method)();
                pTVar8 = (this->fields).score;
                if ((pTVar8 != (Text *)0x0) &&
                   (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_1_get_gameObject((Component_1 *)pTVar8,(MethodInfo *)0x0),
                   pGVar6 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar6,1,(MethodInfo *)0x0);
                  pTVar8 = (this->fields).score;
                  WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                            (0xADDR,0xADDR,(MethodInfo *)0x0);
                  if (pTVar8 != (Text *)0x0) {
                    (*(code *)(pTVar8->klass->vtable).set_text.method)();
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
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


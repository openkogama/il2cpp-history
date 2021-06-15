
/* Void ChangeBackground(GamePassTier) */

void Assembly-CSharp.dll::GamePassesXpRewardInfo::GamePassesXpRewardInfo_ChangeBackground
               (GamePassesXpRewardInfo *this,GamePassTier__Enum tier,MethodInfo *method)

{
  pGVar1 = (this->fields).backgroundTier1;
  if (pGVar1 != (GameObject *)0x0) {
    bVar2 = (undefined1)tier == GamePassTier__Enum_Tier1;
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar1,(MethodInfo *)0x0);
    if ((bool)bVar3 != ((undefined1)tier == GamePassTier__Enum_Tier1)) {
      pGVar1 = (this->fields).backgroundTier1;
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,bVar2,(MethodInfo *)0x0);
    }
    pGVar1 = (this->fields).backgroundTier2;
    if (pGVar1 != (GameObject *)0x0) {
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar1,(MethodInfo *)0x0);
      if ((bool)bVar2 != ((undefined1)tier == GamePassTier__Enum_Tier2)) {
        pGVar1 = (this->fields).backgroundTier2;
        if (pGVar1 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,0x62,(MethodInfo *)0x0);
      }
      pGVar1 = (this->fields).backgroundTier3;
      if (pGVar1 != (GameObject *)0x0) {
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar1,(MethodInfo *)0x0);
        if ((bool)bVar2 != ((undefined1)tier == GamePassTier__Enum_Tier3)) {
          pGVar1 = (this->fields).backgroundTier3;
          if (pGVar1 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,(undefined1)tier == GamePassTier__Enum_Tier3,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize(GamePassTier) */

void Assembly-CSharp.dll::GamePassesXpRewardInfo::GamePassesXpRewardInfo_Initialize
               (GamePassesXpRewardInfo *this,GamePassTier__Enum tier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).tier = (undefined1)tier;
  pGVar1 = (this->fields).backgroundTier1;
  if (pGVar1 != (GameObject *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar1,(MethodInfo *)0x0);
    if ((bool)bVar2 != ((undefined1)tier == GamePassTier__Enum_Tier1)) {
      pGVar1 = (this->fields).backgroundTier1;
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,(undefined1)tier == GamePassTier__Enum_Tier1,(MethodInfo *)0x0);
    }
    pGVar1 = (this->fields).backgroundTier2;
    if (pGVar1 != (GameObject *)0x0) {
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar1,(MethodInfo *)0x0);
      if ((bool)bVar2 != ((undefined1)tier == GamePassTier__Enum_Tier2)) {
        pGVar1 = (this->fields).backgroundTier2;
        if (pGVar1 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,(undefined1)tier == GamePassTier__Enum_Tier2,(MethodInfo *)0x0);
      }
      pGVar1 = (this->fields).backgroundTier3;
      if (pGVar1 != (GameObject *)0x0) {
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar1,(MethodInfo *)0x0);
        if ((bool)bVar2 != ((undefined1)tier == GamePassTier__Enum_Tier3)) {
          pGVar1 = (this->fields).backgroundTier3;
          if (pGVar1 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,(undefined1)tier == GamePassTier__Enum_Tier3,(MethodInfo *)0x0);
        }
        pIVar3 = (this->fields).TeamRequirementImage;
        if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Styles->_1).cctor_started == 0)) {
          func_?(TypeInfo__Styles);
        }
        pCVar4 = Styles::Styles_GetTeamColor
                           ((Color *)&stack0xffffffe8,MVTeam__Enum_None,1,(MethodInfo *)0x0);
        if (pIVar3 != (Image *)0x0) {
          (*(code *)(pIVar3->klass->vtable).set_color.method)
                    (pIVar3,pCVar4->r,pCVar4->g,pCVar4->b,pCVar4->a,
                     (pIVar3->klass->vtable).get_raycastTarget.methodPtr);
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pGVar5 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0)
          ;
          if (pGVar5 != (GameSessionData *)0x0) {
            if ((pGVar5->fields).gameMode == 0) {
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              pIVar6 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
              if (pIVar6 == (IEditModeUI *)0x0) goto code_?;
              cVar7 = func_?(1,TypeInfo__IEditModeUI,pIVar6);
              if (cVar7 != '\0') goto code_?;
            }
            else {
code_?:
              pGVar1 = (this->fields).optionsButton;
              if (pGVar1 == (GameObject *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar1,0,(MethodInfo *)0x0);
            }
            GamePassesXpRewardInfo_UpdateXPText(this,(MethodInfo *)0x0);
            GamePassesXpRewardInfo_UpdateXPTextVisibility(this,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr &
                 0x2000000) != 0) &&
               ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
              func_?();
            }
            pAVar8 = TypeInfo__GamePassProgressionController->static_fields->
                      OnGamePassesProgressionUpdate;
            this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (this_00,(Object *)this,
                       MethodInfo__GamePassesXpRewardInfo__OnGameProgressionDataUpdate__,
                       (MethodInfo *)0x0);
            pAVar9 = (Action *)
                     mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)pAVar8,(Delegate *)this_00,(MethodInfo *)0x0);
            pAVar8 = (Action *)0x0;
            if (pAVar9 == (Action *)0x0) {
code_?:
              TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate
                   = pAVar8;
              return;
            }
            if (pAVar9->klass == TypeInfo__System__Action) {
              pAVar8 = pAVar9;
            }
            pAStack10 = TypeInfo__System__Action;
            if (pAVar8 != (Action *)0x0) goto code_?;
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pAStack10 = extraout_EDX;
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GamePassesXpRewardInfo::GamePassesXpRewardInfo_OnDestroy
               (GamePassesXpRewardInfo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassProgressionController);
  }
  pAVar1 = TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__GamePassesXpRewardInfo__OnGameProgressionDataUpdate__,(MethodInfo *)0x0);
  pAStack2 =
       (Action *)
       mscorlib.dll::System::Delegate::Delegate_Remove
                 ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar1 = (Action *)0x0;
  if (pAStack2 != (Action *)0x0) {
    if (pAStack2->klass == TypeInfo__System__Action) {
      pAVar1 = pAStack2;
    }
    if (pAVar1 == (Action *)0x0) {
      pAStack3 = TypeInfo__System__Action;
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate = pAVar1;
  return;
}


/* Void OnGameProgressionDataUpdate() */

void Assembly-CSharp.dll::GamePassesXpRewardInfo::GamePassesXpRewardInfo_OnGameProgressionDataUpdate
               (GamePassesXpRewardInfo *this,MethodInfo *method)

{
  GamePassesXpRewardInfo_UpdateXPText(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 0) {
      return;
    }
    bVar2 = *(byte *)(in_stack_3 + 0x34);
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar4 != (PlayerPlanetData *)0x0) {
      bVar5 = bVar2 <= (pPVar4->fields).gamePassTier;
      if ((*(Component_1 **)(in_stack_3 + 0x24) != (Component_1 *)0x0) &&
         (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             (*(Component_1 **)(in_stack_3 + 0x24),(MethodInfo *)0x0),
         pGVar6 != (GameObject *)0x0)) {
        bVar7 = 0;
        bVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar6,(MethodInfo *)0x0);
        value = (bool)((uint)pGVar6 >> 0x18);
        if ((bool)bVar8 == bVar5) {
          if (*(Component_1 **)(in_stack_3 + 0x24) == (Component_1 *)0x0)
          goto code_?;
          bVar7 = 0x10;
          pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             (*(Component_1 **)(in_stack_3 + 0x24),(MethodInfo *)0x0);
          if (pGVar6 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar6,bVar7 < bVar2,(MethodInfo *)0x0);
        }
        if (*(GameObject **)(in_stack_3 + 0x2c) != (GameObject *)0x0) {
          bVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                            (*(GameObject **)(in_stack_3 + 0x2c),(MethodInfo *)0x0);
          if ((bool)bVar8 == bVar5) {
            if (*(GameObject **)(in_stack_3 + 0x2c) == (GameObject *)0x0)
            goto code_?;
            value = 0;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (*(GameObject **)(in_stack_3 + 0x2c),bVar7 < bVar2,(MethodInfo *)0x0);
          }
          if (*(GameObject **)(in_stack_3 + 0x30) != (GameObject *)0x0) {
            bVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                              (*(GameObject **)(in_stack_3 + 0x30),(MethodInfo *)0x0);
            if ((bool)bVar8 != bVar5) {
              if (*(GameObject **)(in_stack_3 + 0x30) == (GameObject *)0x0)
              goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (*(GameObject **)(in_stack_3 + 0x30),value,(MethodInfo *)0x0);
            }
            return;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnOptionsButtonPress() */

void Assembly-CSharp.dll::GamePassesXpRewardInfo::GamePassesXpRewardInfo_OnOptionsButtonPress
               (GamePassesXpRewardInfo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GamePassesXpRewardInfo___OnOptionsButtonPress_c__AnonStorey0;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).xPRewardOption;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      GamePassesXPRewardOption_MethodInfo__UnityEngine__Object__Instantiate<GamePassesXPRewardOption>_GamePassesXPRewardOption_
                     );
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields)._._._._.m_CachedPtr = pXVar1;
    bVar2 = (this->fields).tier;
    tier = (GamePassProgressionController__Class *)
           CONCAT31((int3)((uint)in_stack_3 >> 8),bVar2);
    if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
      if (cRam_? == '\0') {
        tier = _UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      (pXVar1->fields).isParticlesPlaying = bVar2;
      iStack_4 = 0;
      if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
        tier = TypeInfo__GamePassProgressionController;
        func_?();
      }
      pRVar5 = GamePassProgressionController::
               GamePassProgressionController_GetXPRewardRangeValidator
                         ((GamePassTier__Enum)tier,(MethodInfo *)0x0);
      if ((pRVar5 != (RangeValidator_1_System_Int32_ *)0x0) &&
         (pSVar6 = (Slider *)(pXVar1->fields).layersToRender, pSVar6 != (Slider *)0x0)) {
        UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_minValue
                  (pSVar6,(float)(pRVar5->fields).min,(MethodInfo *)0x0);
        pSVar6 = (Slider *)(pXVar1->fields).layersToRender;
        if (pSVar6 != (Slider *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_maxValue
                    (pSVar6,(float)(pRVar5->fields).max,(MethodInfo *)0x0);
          iStack_4 = GamePassProgressionController::GamePassProgressionController_GetXPReward
                               ((GamePassTier__Enum)tier,(MethodInfo *)0x0);
          piVar7 = (int *)(pXVar1->fields).layersToRender;
          if (piVar7 != (int *)0x0) {
            (**(code **)(*piVar7 + 0x238))(piVar7,(float)iStack_4,*(undefined4 *)(*piVar7 + 0x23c));
            this_00 = (InputField *)(pXVar1->fields).previewCam;
            value = (String *)func_?(&iStack_4,0);
            if (this_00 != (InputField *)0x0) {
              UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                        (this_00,value,(MethodInfo *)0x0);
              GamePassesXPRewardOption::GamePassesXPRewardOption_UpdateBonusXpAmountText
                        ((GamePassesXPRewardOption *)pXVar1,iStack_4,(MethodInfo *)0x0);
              root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)this,(MethodInfo *)0x0);
              this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                         *)func_?(
                                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                          );
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (this_02,(Object *)this_01,
                         MethodInfo__GamePassesXpRewardInfo___OnOptionsButtonPress_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
                        (root,(BaseEventData *)0x0,
                         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_02,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                        );
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UpdateXPText() */

void Assembly-CSharp.dll::GamePassesXpRewardInfo::GamePassesXpRewardInfo_UpdateXPText
               (GamePassesXpRewardInfo *this,MethodInfo *method)

{
  pGVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (GamePassesXpRewardInfo *)CONCAT31(this._1_3_,(this->fields).tier);
  if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassProgressionController);
  }
  GamePassProgressionController::GamePassProgressionController_GetXPReward
            ((GamePassTier__Enum)this,(MethodInfo *)0x0);
  pTVar2 = (pGVar1->fields).xPAmountText;
  pSVar3 = (String *)func_?(&stack0xfffffff8,0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  mscorlib.dll::System::String::String_Concat_2(pSVar3,StringLiteral__XP,(MethodInfo *)0x0);
  if (pTVar2 != (Text *)0x0) {
    (*(code *)(pTVar2->klass->vtable).set_text.method)(pTVar2);
    if ((((uint)(TypeInfo__SubscriberRewardDataManager->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__SubscriberRewardDataManager->_1).cctor_started == 0)) {
      func_?();
    }
    iVar4 = 0;
    iVar5 = SubscriberRewardDataManager::SubscriberRewardDataManager_GetBaseXpAmount
                      ((MethodInfo *)0x0);
    pTVar2 = (pGVar1->fields).bonusXPAmountText;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
              (((float)iVar5 / _UNK_? + _UNK_?) * (float)iVar4,(MethodInfo *)0x0);
    pSVar3 = (String *)func_?();
    mscorlib.dll::System::String::String_Concat_2
              (pSVar3,StringLiteral__XP_for_Elites,(MethodInfo *)0x0);
    if (pTVar2 != (Text *)0x0) {
      (*(code *)(pTVar2->klass->vtable).set_text.method)(pTVar2);
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateXPTextVisibility() */

void Assembly-CSharp.dll::GamePassesXpRewardInfo::GamePassesXpRewardInfo_UpdateXPTextVisibility
               (GamePassesXpRewardInfo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 0) {
      return;
    }
    bVar2 = (this->fields).tier;
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar3 != (PlayerPlanetData *)0x0) {
      pTVar4 = (this->fields).xPAmountText;
      bVar5 = bVar2 <= (pPVar3->fields).gamePassTier;
      if ((pTVar4 != (Text *)0x0) &&
         (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pTVar4,(MethodInfo *)0x0), pGVar6 != (GameObject *)0x0)
         ) {
        bVar7 = 0;
        value = (bool)((uint)pGVar6 >> 0x18);
        bVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar6,(MethodInfo *)0x0);
        if ((bool)bVar8 == bVar5) {
          pTVar4 = (this->fields).xPAmountText;
          if (pTVar4 == (Text *)0x0) goto code_?;
          bVar7 = 0x10;
          pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pTVar4,(MethodInfo *)0x0);
          if (pGVar6 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar6,bVar7 < bVar2,(MethodInfo *)0x0);
        }
        pGVar6 = (this->fields).subscriberUI;
        if (pGVar6 != (GameObject *)0x0) {
          bVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                            (pGVar6,(MethodInfo *)0x0);
          if ((bool)bVar8 == bVar5) {
            pGVar6 = (this->fields).subscriberUI;
            if (pGVar6 == (GameObject *)0x0) goto code_?;
            value = 0;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar6,bVar7 < bVar2,(MethodInfo *)0x0);
          }
          pGVar6 = (this->fields).claimedText;
          if (pGVar6 != (GameObject *)0x0) {
            bVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                              (pGVar6,(MethodInfo *)0x0);
            if ((bool)bVar8 != bVar5) {
              pGVar6 = (this->fields).claimedText;
              if (pGVar6 == (GameObject *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar6,value,(MethodInfo *)0x0);
            }
            return;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


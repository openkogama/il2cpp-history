
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
                  (pGVar1,0xe2,(MethodInfo *)0x0);
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
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize(GamePassTier) */

void Assembly-CSharp.dll::GamePassesXpRewardInfo::GamePassesXpRewardInfo_Initialize
               (GamePassesXpRewardInfo *this,GamePassTier__Enum tier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__GamePassProgressionController);
    func_?(&MethodInfo__GamePassesXpRewardInfo__OnGameProgressionDataUpdate__);
    func_?(&TypeInfo__IEditModeUI);
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  (this->fields).tier = (undefined1)tier;
  pGVar1 = (this->fields).backgroundTier1;
  _bStack_8 = CONCAT31(uStack_2,(undefined1)tier == GamePassTier__Enum_Tier3);
  if (pGVar1 == (GameObject *)0x0) {
code_?:
    func_?();
    pAStack3 = extraout_EDX;
  }
  else {
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar1,(MethodInfo *)0x0);
    if ((bool)bVar4 != ((undefined1)tier == GamePassTier__Enum_Tier1)) {
      pGVar1 = (this->fields).backgroundTier1;
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,(undefined1)tier == GamePassTier__Enum_Tier1,(MethodInfo *)0x0);
    }
    pGVar1 = (this->fields).backgroundTier2;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar1,(MethodInfo *)0x0);
    if ((bool)bVar4 != ((undefined1)tier == GamePassTier__Enum_Tier2)) {
      pGVar1 = (this->fields).backgroundTier2;
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,(undefined1)tier == GamePassTier__Enum_Tier2,(MethodInfo *)0x0);
    }
    pGVar1 = (this->fields).backgroundTier3;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar1,(MethodInfo *)0x0);
    if ((bool)bVar4 != bStack_5) {
      pGVar1 = (this->fields).backgroundTier3;
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,bStack_5,(MethodInfo *)0x0);
    }
    pIVar6 = (this->fields).TeamRequirementImage;
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    pCVar7 = Styles::Styles_GetTeamColor(&CStack_8,MVTeam__Enum_None,1,(MethodInfo *)0x0);
    if (pIVar6 == (Image *)0x0) goto code_?;
    (*(code *)(pIVar6->klass->vtable).set_color.method)
              (pIVar6,pCVar7->r,pCVar7->g,pCVar7->b,pCVar7->a,
               (pIVar6->klass->vtable).get_raycastTarget.methodPtr);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pGVar9 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar9 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar9->fields).gameMode == 0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      pIVar10 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
      if (pIVar10 == (IEditModeUI *)0x0) goto code_?;
      cVar11 = func_?(1,TypeInfo__IEditModeUI,pIVar10);
      if (cVar11 != '\0') goto code_?;
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
    pAVar12 = TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,
               MethodInfo__GamePassesXpRewardInfo__OnGameProgressionDataUpdate__,(MethodInfo *)0x0);
    pAVar12 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar12,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar12 == (Action *)0x0) {
      TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate =
           (Action *)0x0;
      pAVar13 = (Action *)0x0;
code_?:
      pAStack3 = (Action__Class *)pAVar13;
      func_?();
      return;
    }
    pAVar13 = (Action *)0x0;
    if (pAVar12->klass == TypeInfo__System__Action) {
      pAVar13 = pAVar12;
    }
    pAStack3 = TypeInfo__System__Action;
    if (pAVar13 == (Action *)0x0) goto code_?;
    TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate = pAVar13;
    pAVar13 = (Action *)0x0;
    if (pAVar12->klass == TypeInfo__System__Action) {
      pAVar13 = pAVar12;
    }
    pAStack3 = TypeInfo__System__Action;
    if (pAVar13 != (Action *)0x0) goto code_?;
  }
  pAStack3 = (Action__Class *)func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GamePassesXpRewardInfo::GamePassesXpRewardInfo_OnDestroy
               (GamePassesXpRewardInfo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__GamePassProgressionController);
    func_?(&MethodInfo__GamePassesXpRewardInfo__OnGameProgressionDataUpdate__);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,
             MethodInfo__GamePassesXpRewardInfo__OnGameProgressionDataUpdate__,(MethodInfo *)0x0);
  pAStack2 =
       (Action *)
       mscorlib.dll::System::Delegate::Delegate_Remove
                 ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAStack2 == (Action *)0x0) {
    TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate =
         (Action *)0x0;
code_?:
    func_?();
    return;
  }
  pAVar1 = (Action *)0x0;
  if (pAStack2->klass == TypeInfo__System__Action) {
    pAVar1 = pAStack2;
  }
  if (pAVar1 == (Action *)0x0) {
    pAStack3 = TypeInfo__System__Action;
    func_?();
    pAStack2 = extraout_ECX;
    pAStack3 = extraout_EDX;
  }
  else {
    TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate = pAVar1;
    pAVar1 = (Action *)0x0;
    if (pAStack2->klass == TypeInfo__System__Action) {
      pAVar1 = pAStack2;
    }
    pAStack3 = TypeInfo__System__Action;
    if (pAVar1 != (Action *)0x0) goto code_?;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnGameProgressionDataUpdate() */

void Assembly-CSharp.dll::GamePassesXpRewardInfo::GamePassesXpRewardInfo_OnGameProgressionDataUpdate
               (GamePassesXpRewardInfo *this,MethodInfo *method)

{
  GamePassesXpRewardInfo_UpdateXPText(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 0) {
      return;
    }
    bVar2 = *(byte *)(in_stack_3 + 0x38);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar4 != (PlayerPlanetData *)0x0) {
      bVar5 = (pPVar4->fields).gamePassTier;
      bVar6 = bVar2 <= bVar5;
      if ((*(Component **)(in_stack_3 + 0x28) != (Component *)0x0) &&
         (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             (*(Component **)(in_stack_3 + 0x28),(MethodInfo *)0x0),
         pGVar7 != (GameObject *)0x0)) {
        bVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar7,(MethodInfo *)0x0);
        if ((bool)bVar8 == bVar6) {
          if (*(Component **)(in_stack_3 + 0x28) == (Component *)0x0) goto code_?;
          bVar5 = 0;
          pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             (*(Component **)(in_stack_3 + 0x28),(MethodInfo *)0x0);
          if (pGVar7 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar7,bVar5 < bVar2,(MethodInfo *)0x0);
          bVar5 = (byte)((uint)pGVar7 >> 0x18);
        }
        if (*(GameObject **)(in_stack_3 + 0x30) != (GameObject *)0x0) {
          bVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                            (*(GameObject **)(in_stack_3 + 0x30),(MethodInfo *)0x0);
          if ((bool)bVar8 == bVar6) {
            if (*(GameObject **)(in_stack_3 + 0x30) == (GameObject *)0x0)
            goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (*(GameObject **)(in_stack_3 + 0x30),bVar5 < bVar2,(MethodInfo *)0x0);
          }
          if (*(GameObject **)(in_stack_3 + 0x34) != (GameObject *)0x0) {
            bVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                              (*(GameObject **)(in_stack_3 + 0x34),(MethodInfo *)0x0);
            if ((bool)bVar8 != bVar6) {
              if (*(GameObject **)(in_stack_3 + 0x34) == (GameObject *)0x0)
              goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (*(GameObject **)(in_stack_3 + 0x34),0,(MethodInfo *)0x0);
            }
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnOptionsButtonPress() */

void Assembly-CSharp.dll::GamePassesXpRewardInfo::GamePassesXpRewardInfo_OnOptionsButtonPress
               (GamePassesXpRewardInfo *this,MethodInfo *method)

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
                    GamePassesXPRewardOption_MethodInfo__UnityEngine__Object__Instantiate<GamePassesXPRewardOption>_GamePassesXPRewardOption_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__GamePassesXpRewardInfo____c__DisplayClass12_0___OnOptionsButtonPress_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesXpRewardInfo____c__DisplayClass12_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GamePassesXpRewardInfo____c__DisplayClass12_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).xPRewardOption;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      GamePassesXPRewardOption_MethodInfo__UnityEngine__Object__Instantiate<GamePassesXPRewardOption>_GamePassesXPRewardOption_
                     );
  if (value != (Object *)0x0) {
    value[1].klass = pOVar1;
    func_?(value + 1);
    pOVar1 = value[1].klass;
    uVar2 = (this->fields).tier;
    GStack_3 = CONCAT31(GStack_3._1_3_,uVar2);
    if (pOVar1 != (Object__Class *)0x0) {
      *(uint8_t *)&(pOVar1->_0).this_arg.attrs = uVar2;
      pRVar4 = GamePassProgressionController::
               GamePassProgressionController_GetXPRewardRangeValidator(GStack_3,(MethodInfo *)0x0);
      if ((pRVar4 != (RangeValidator_1_System_Int32_ *)0x0) &&
         (pSVar5 = (Slider *)(pOVar1->_0).byval_arg.data.typeHandle, pSVar5 != (Slider *)0x0)) {
        UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_minValue
                  (pSVar5,(float)(pRVar4->fields).min,(MethodInfo *)0x0);
        pSVar5 = (Slider *)(pOVar1->_0).byval_arg.data.typeHandle;
        if (pSVar5 != (Slider *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_maxValue
                    (pSVar5,(float)(pRVar4->fields).max,(MethodInfo *)0x0);
          iVar6 = GamePassProgressionController::GamePassProgressionController_GetXPReward
                            (GStack_3,(MethodInfo *)0x0);
          pSVar5 = (Slider *)(pOVar1->_0).byval_arg.data.array;
          if (pSVar5 != (Slider *)0x0) {
            (*(code *)(pSVar5->klass->vtable).set_value.method)(pSVar5,(float)iVar6);
            this_00 = *(InputField **)&(pOVar1->_0).byval_arg.attrs;
            value_00 = mscorlib.dll::System::Int32::Int32_ToString
                                 ((Int32 *)&stack0xfffffff4,(MethodInfo *)0x0);
            if (this_00 != (InputField *)0x0) {
              UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                        (this_00,value_00,(MethodInfo *)0x0);
              GamePassesXPRewardOption::GamePassesXPRewardOption_UpdateBonusXpAmountText
                        ((GamePassesXPRewardOption *)pOVar1,0,(MethodInfo *)0x0);
              root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
              callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                         MethodInfo__GamePassesXpRewardInfo____c__DisplayClass12_0___OnOptionsButtonPress_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy
                        (root,(BaseEventData *)0x0,callbackFunction,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                        );
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateXPText() */

void Assembly-CSharp.dll::GamePassesXpRewardInfo::GamePassesXpRewardInfo_UpdateXPText
               (GamePassesXpRewardInfo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SubscriberRewardDataManager);
    func_?(&StringLiteral__XP_for_Elites);
    func_?(&StringLiteral__XP);
    cRam_? = '\x01';
  }
  IStack_1.m_value =
       GamePassProgressionController::GamePassProgressionController_GetXPReward
                 (CONCAT31(this._1_3_,(this->fields).tier),(MethodInfo *)0x0);
  pTVar2 = (this->fields).xPAmountText;
  pSVar3 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
  mscorlib.dll::System::String::String_Concat_3(pSVar3,StringLiteral__XP,(MethodInfo *)0x0);
  if (pTVar2 != (Text *)0x0) {
    uStack_4 = (double)CONCAT44(&UNK_?,(undefined4)uStack_4);
    IStack_1.m_value = (int32_t)pTVar2;
    (*(code *)(pTVar2->klass->vtable).set_text.method)();
    if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    iVar5 = SubscriberRewardDataManager::SubscriberRewardDataManager_GetBaseXpAmount
                      ((MethodInfo *)0x0);
    IVar6.m_value = IStack_1.m_value;
    pTVar2 = (this->fields).bonusXPAmountText;
    this = (GamePassesXpRewardInfo *)((float)iVar5 / _UNK_?);
    if (cRam_? == '\0') {
      func_?();
      this = (GamePassesXpRewardInfo *)&TypeInfo__System__Math;
      cRam_? = '\x01';
    }
    pMVar7 = TypeInfo__System__Math;
    pMVar8 = (Math__Class *)(((float)this + _UNK_?) * (float)IVar6.m_value);
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
      pMVar8 = pMVar7;
    }
    uStack_4 = (double)(float)pMVar8;
    fVar9 = (float10)func_?();
    uStack_4._0_4_ = SUB84((double)fVar9,0);
    uStack_4 = (double)CONCAT44((int)fVar9,(undefined4)uStack_4);
    pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)((int)&uStack_4 + 4),(MethodInfo *)0x0);
    mscorlib.dll::System::String::String_Concat_3
              (pSVar3,StringLiteral__XP_for_Elites,(MethodInfo *)0x0);
    if (pTVar2 != (Text *)0x0) {
      uStack_4 = (double)CONCAT44(&UNK_?,(undefined4)uStack_4);
      IStack_1.m_value = (int32_t)pTVar2;
      (*(code *)(pTVar2->klass->vtable).set_text.method)();
      return;
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void UpdateXPTextVisibility() */

void Assembly-CSharp.dll::GamePassesXpRewardInfo::GamePassesXpRewardInfo_UpdateXPTextVisibility
               (GamePassesXpRewardInfo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 0) {
      return;
    }
    bVar2 = (this->fields).tier;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar3 != (PlayerPlanetData *)0x0) {
      bVar4 = (pPVar3->fields).gamePassTier;
      pTVar5 = (this->fields).xPAmountText;
      bVar6 = bVar2 <= bVar4;
      if ((pTVar5 != (Text *)0x0) &&
         (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pTVar5,(MethodInfo *)0x0), pGVar7 != (GameObject *)0x0))
      {
        bVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar7,(MethodInfo *)0x0);
        if ((bool)bVar8 == bVar6) {
          pTVar5 = (this->fields).xPAmountText;
          if (pTVar5 == (Text *)0x0) goto code_?;
          bVar4 = 0;
          pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pTVar5,(MethodInfo *)0x0);
          if (pGVar7 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar7,bVar4 < bVar2,(MethodInfo *)0x0);
          bVar4 = (byte)((uint)pGVar7 >> 0x18);
        }
        pGVar7 = (this->fields).subscriberUI;
        if (pGVar7 != (GameObject *)0x0) {
          bVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                            (pGVar7,(MethodInfo *)0x0);
          if ((bool)bVar8 == bVar6) {
            pGVar7 = (this->fields).subscriberUI;
            if (pGVar7 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar7,bVar4 < bVar2,(MethodInfo *)0x0);
          }
          pGVar7 = (this->fields).claimedText;
          if (pGVar7 != (GameObject *)0x0) {
            bVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                              (pGVar7,(MethodInfo *)0x0);
            if ((bool)bVar8 != bVar6) {
              pGVar7 = (this->fields).claimedText;
              if (pGVar7 == (GameObject *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar7,0,(MethodInfo *)0x0);
            }
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


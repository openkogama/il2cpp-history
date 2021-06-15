
/* Void Activate() */

void Assembly-CSharp.dll::LocalPlayerScore::LocalPlayerScore_Activate
               (LocalPlayerScore *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = GameStatCounterType__Enum_None;
  WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
            ((GameStatCounterType__Enum *)&stack0xfffffff8,(MethodInfo *)0x0);
  this_00 = this;
  uVar2 = (this->fields).statTypeToShow;
  if (uVar2 != GameStatCounterType__Enum_None) {
    uVar1 = uVar2;
  }
  if (uVar1 != GameStatCounterType__Enum_None) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
    pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
    if (pMVar4 == (MVLocalPlayer *)0x0) goto code_?;
    actorNumber = (MethodInfo *)
                  ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                  NamedThemeAttribute_1_UnityEngine_Color__get_Name
                            ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar4,(MethodInfo *)0x0);
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
    pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
    if (pMVar4 == (MVLocalPlayer *)0x0) goto code_?;
    puVar5 = &UNK_?;
    team = (LocalPlayerScore *)
           MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
           KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
           KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                     ((KogamaSettingNumericBase_1_System_Single_ *)pMVar4,(MethodInfo *)0x0);
    GVar6 = GameStatCounterType__Enum_None;
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
    this = (LocalPlayerScore *)0x0;
    this_01 = (GameStatCounterManager *)
              DayNightCycle::DayNightCycle_get_CurrentStarsParam
                        ((DayNightCycle *)pMVar3,(MethodInfo *)0x0);
    if (this_01 == (GameStatCounterManager *)0x0) goto code_?;
    statType = &UNK_?;
    this = team;
    method = actorNumber;
    localScore = (undefined *)
                 MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                           (this_01,GVar6,(MVTeam__Enum)team,(int32_t)actorNumber,(MethodInfo *)0x0
                           );
    method = (MethodInfo *)&UNK_?;
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
    pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
    if (pMVar4 == (MVLocalPlayer *)0x0) goto code_?;
    this_02 = (SubscriptionRulesWrapper *)
              PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
              PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                        ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)pMVar4,(MethodInfo *)0x0
                        );
    if (this_02 == (SubscriptionRulesWrapper *)0x0) goto code_?;
    bVar7 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
            SubscriptionRulesWrapper_HasBenefit
                      (this_02,SubscriptionBenefit__Enum_XPBoost,(MethodInfo *)0x0);
    if (bVar7 != 0) {
      pGVar8 = (this_00->fields).memberUI;
      if (pGVar8 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar8,1,(MethodInfo *)0x0);
    }
    pLVar9 = (LocalPlayerScore *)
             LocalPlayerScore_GetLocalPlayerRanking
                       (this_00,(GameStatCounterType__Enum)statType,(MVTeam__Enum)team,
                        (int32_t)actorNumber,(int32_t)localScore,(MethodInfo *)0x0);
    if ((this_00->fields).scoreBoardCount < (int)pLVar9) {
      GVar6 = CONCAT31((int3)((uint)puVar5 >> 8),(char)statType);
      this = pLVar9;
      if (cRam_? == '\0') {
        localScore = &UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this_00,(MethodInfo *)0x0);
      if (pGVar8 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar8,1,(MethodInfo *)0x0);
        pTVar10 = (this_00->fields).rankingText;
        uVar11 = func_?(&this);
        if (pTVar10 != (Text *)0x0) {
          (*(code *)(pTVar10->klass->vtable).set_text.method)(pTVar10,uVar11);
          pTVar10 = (this_00->fields).memberRankingText;
          uVar11 = func_?(&this,0);
          if (pTVar10 != (Text *)0x0) {
            (*(code *)(pTVar10->klass->vtable).set_text.method)(pTVar10,uVar11);
            pTVar10 = (this_00->fields).scoreText;
            pSVar12 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                                ((int32_t)localScore,GVar6,(MethodInfo *)0x0);
            if (pTVar10 != (Text *)0x0) {
              (*(code *)(pTVar10->klass->vtable).set_text.method)(pTVar10,pSVar12);
              pIVar13 = (this_00->fields).background;
              if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__Styles->_1).cctor_started == 0)) {
                func_?(TypeInfo__Styles);
              }
              pCVar14 = Styles::Styles_GetTeamColor
                                  ((Color *)&stack0xffffffe0,(MVTeam__Enum)team,0,(MethodInfo *)0x0)
              ;
              if (pIVar13 != (Image *)0x0) {
                (*(code *)(pIVar13->klass->vtable).set_color.method)
                          (pIVar13,pCVar14->r,pCVar14->g,pCVar14->b,pCVar14->a);
                return;
              }
            }
          }
        }
      }
      goto code_?;
    }
  }
  pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this_00,(MethodInfo *)0x0);
  if (pGVar8 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar8,0,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Int32 GetLocalPlayerRanking(GameStatCounterType, MVTeam, Int32, Int32) */

int32_t Assembly-CSharp.dll::LocalPlayerScore::LocalPlayerScore_GetLocalPlayerRanking
                  (LocalPlayerScore *this,GameStatCounterType__Enum statType,MVTeam__Enum localTeam,
                  int32_t localActorNumber,int32_t localScore,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffc8;
  puVar5 = &stack0xffffffc8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  uStack_6 = 0;
  func_?();
  iStack_7 = 1;
  puStack_8 = (undefined4 *)&stack0xffffffc8;
  puStack_4 = &stack0xffffffc8;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_8 = (undefined4 *)&stack0xffffffc8, puStack_4 = &stack0xffffffc8,
     (TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    puStack_8 = (undefined4 *)&stack0xffffffc8;
    puStack_4 = &stack0xffffffc8;
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_00 != (MVAvatar *)0x0) &&
     (this_01 = MVAvatar::MVAvatar_get_Shield(this_00,(MethodInfo *)0x0),
     this_01 != (MVRuntimeDataVariableClampedFloat *)0x0)) {
    pIVar9 = MVPlayerContainer::MVPlayerContainer_GetEnumerator
                       ((MVPlayerContainer *)this_01,(MethodInfo *)0x0);
    uStack_1 = 0;
    iVar10 = 1;
    pIStack_11 = pIVar9;
    while (pIVar9 != (IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer_ *)0x0) {
      cVar12 = func_?(1,TypeInfo__System__Collections__IEnumerator);
      unaff_EDI = (String *)0x0;
      if (cVar12 == '\0') {
        *puStack_8 = 0x97;
        uStack_1 = 0xffffffff;
        if (pIVar9 != (IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer_ *)0x0) {
          func_?(0,TypeInfo__System__IDisposable);
        }
        *unaff_FS_OFFSET = uStack_3;
        return iVar10;
      }
      pIVar13 = pIVar9->klass;
      uVar14 = 0;
      uVar15._0_1_ = (pIVar13->_1).rank;
      uVar15._1_1_ = (pIVar13->_1).minimumAlignment;
      if (uVar15 != 0) {
        unaff_EDI = (String *)pIVar13->interfaceOffsets;
        do {
          if ((Il2CppClass *)(&unaff_EDI->klass)[(uint)uVar14 * 2] ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<int,_MVPlayer>_>
             ) {
            ppMVar16 = &(&pIVar9->klass->vtable)[(int)(&unaff_EDI->monitor)[(uint)uVar14 * 2]].
                       get_Current.method;
            goto code_?;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar15);
      }
      ppMVar16 = (MethodInfo **)
                func_?(pIVar9,
                                TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<int,_MVPlayer>_>
                               );
code_?:
      uStack_6 = (*(code *)*ppMVar16)(pIVar9);
      iVar17 = func_?(&uStack_6);
      iVar10 = iStack_7;
      if (iVar17 != 0) {
        method_00 = (MethodInfo *)&UNK_?;
        this_02 = (NamedThemeAttribute_1_UnityEngine_Color_ *)func_?(&uStack_6);
        if (this_02 == (NamedThemeAttribute_1_UnityEngine_Color_ *)0x0) break;
        unaff_EDI = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                    NamedThemeAttribute_1_UnityEngine_Color__get_Name(this_02,method_00);
        if (unaff_EDI != (String *)localActorNumber) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (this_03 == (MVNetworkGame *)0x0) break;
          this_04 = (GameStatCounterManager *)
                    DayNightCycle::DayNightCycle_get_CurrentStarsParam
                              ((DayNightCycle *)this_03,(MethodInfo *)0x0);
          this_05 = (KogamaSettingNumericBase_1_System_Single_ *)func_?();
          if ((this_05 == (KogamaSettingNumericBase_1_System_Single_ *)0x0) ||
             (in_stack_18 =
                   (MethodInfo *)
                   MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                   KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                   KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                             (this_05,in_stack_18), this_04 == (GameStatCounterManager *)0x0))
          break;
          iVar10 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                             (this_04,statType,(MVTeam__Enum)in_stack_18,(int32_t)unaff_EDI,
                              in_stack_19);
          bVar20 = WinningConditionControl::WinningConditionControl_IsNewScoreBetter
                            (iVar10,localScore,statType,(MethodInfo *)0x0);
          iVar10 = iStack_7;
          unaff_EDI = (String *)statType;
          if (bVar20 != 0) {
            iVar10 = iStack_7 + 1;
            iStack_7 = iVar10;
          }
        }
      }
    }
  }
  func_?();
  func_?(unaff_EDI,0);
  pcVar21 = (code *)swi(3);
  iVar10 = (*pcVar21)();
  return iVar10;
}


/* Void Initialize() */

void Assembly-CSharp.dll::LocalPlayerScore::LocalPlayerScore_Initialize
               (LocalPlayerScore *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).playerNameText;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      iVar2 = GamePointGainEffect::GamePointGainEffect_get_ID
                        ((GamePointGainEffect *)this_01,(MethodInfo *)0x0);
      if ((iVar2 != 0) && (pTVar1 != (Text *)0x0)) {
        (*(code *)(pTVar1->klass->vtable).set_text.method)();
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Show(GameStatCounterType, MVTeam, Int32, Int32) */

void Assembly-CSharp.dll::LocalPlayerScore::LocalPlayerScore_Show
               (LocalPlayerScore *this,GameStatCounterType__Enum statType,MVTeam__Enum localTeam,
               int32_t currentRanking,int32_t localScore,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,1,(MethodInfo *)0x0);
    pTVar1 = (this->fields).rankingText;
    uVar2 = func_?(&currentRanking,0);
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,uVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      pTVar1 = (this->fields).memberRankingText;
      uVar2 = func_?(&currentRanking,0);
      if (pTVar1 != (Text *)0x0) {
        (*(code *)(pTVar1->klass->vtable).set_text.method)
                  (pTVar1,uVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
        pTVar1 = (this->fields).scoreText;
        pSVar3 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                           (localScore,statType,(MethodInfo *)0x0);
        if (pTVar1 != (Text *)0x0) {
          (*(code *)(pTVar1->klass->vtable).set_text.method)
                    (pTVar1,pSVar3,
                     (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
          pIVar4 = (this->fields).background;
          if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__Styles->_1).cctor_started == 0)) {
            func_?(TypeInfo__Styles);
          }
          pCVar5 = Styles::Styles_GetTeamColor(&CStack_6,localTeam,0,(MethodInfo *)0x0);
          if (pIVar4 != (Image *)0x0) {
            (*(code *)(pIVar4->klass->vtable).set_color.method)
                      (pIVar4,pCVar5->r,pCVar5->g,pCVar5->b,pCVar5->a,
                       (pIVar4->klass->vtable).get_raycastTarget.methodPtr);
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


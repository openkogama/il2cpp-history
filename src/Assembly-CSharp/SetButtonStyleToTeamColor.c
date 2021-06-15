
/* Void ResetAlpha(Single) */

void Assembly-CSharp.dll::SetButtonStyleToTeamColor::SetButtonStyleToTeamColor_ResetAlpha
               (SetButtonStyleToTeamColor *this,float alpha,MethodInfo *method)

{
  func_?(&fStack_1,0,0x48);
  func_?(&fStack_2,0,0x48);
  pBVar3 = (this->fields).button;
  if (pBVar3 != (Button *)0x0) {
    pCVar4 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_colors
                       (&CStack_5,(Selectable *)pBVar3,(MethodInfo *)0x0);
    fStack_1 = (pCVar4->m_NormalColor).r;
    fStack_6 = (pCVar4->m_NormalColor).g;
    fStack_7 = (pCVar4->m_NormalColor).b;
    fStack_8 = (pCVar4->m_NormalColor).a;
    fStack_9 = (pCVar4->m_HighlightedColor).r;
    fStack_10 = (pCVar4->m_HighlightedColor).g;
    fStack_11 = (pCVar4->m_HighlightedColor).b;
    fStack_12 = (pCVar4->m_HighlightedColor).a;
    fStack_13 = (pCVar4->m_PressedColor).r;
    fStack_14 = (pCVar4->m_PressedColor).g;
    fStack_15 = (pCVar4->m_PressedColor).b;
    fStack_16 = (pCVar4->m_PressedColor).a;
    fStack_17 = (pCVar4->m_DisabledColor).r;
    fStack_18 = (pCVar4->m_DisabledColor).g;
    fStack_19 = (pCVar4->m_DisabledColor).b;
    fStack_20 = (pCVar4->m_DisabledColor).a;
    uStack_21._0_4_ = pCVar4->m_ColorMultiplier;
    uStack_21._4_4_ = pCVar4->m_FadeDuration;
    puVar22 = (undefined4 *)func_?(&uStack_23,&fStack_1,0);
    uStack_23 = *puVar22;
    uStack_24 = puVar22[1];
    uStack_25 = puVar22[2];
    uStack_26 = puVar22[3];
    pBVar3 = (this->fields).button;
    if (pBVar3 != (Button *)0x0) {
      pCVar4 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_colors
                         (&CStack_5,(Selectable *)pBVar3,(MethodInfo *)0x0);
      fStack_2 = (pCVar4->m_NormalColor).r;
      fStack_27 = (pCVar4->m_NormalColor).g;
      fStack_28 = (pCVar4->m_NormalColor).b;
      fStack_29 = (pCVar4->m_NormalColor).a;
      CStack_5.m_NormalColor.g = 0.0;
      fStack_30 = (pCVar4->m_HighlightedColor).r;
      fStack_31 = (pCVar4->m_HighlightedColor).g;
      fStack_32 = (pCVar4->m_HighlightedColor).b;
      fStack_33 = (pCVar4->m_HighlightedColor).a;
      fStack_34 = (pCVar4->m_PressedColor).r;
      fStack_35 = (pCVar4->m_PressedColor).g;
      fStack_36 = (pCVar4->m_PressedColor).b;
      fStack_37 = (pCVar4->m_PressedColor).a;
      fStack_38 = (pCVar4->m_DisabledColor).r;
      fStack_39 = (pCVar4->m_DisabledColor).g;
      fStack_40 = (pCVar4->m_DisabledColor).b;
      fStack_41 = (pCVar4->m_DisabledColor).a;
      uStack_42._0_4_ = pCVar4->m_ColorMultiplier;
      uStack_42._4_4_ = pCVar4->m_FadeDuration;
      uStack_43 = uStack_23;
      uStack_44 = uStack_24;
      uStack_45 = uStack_25;
      fStack_46 = alpha;
      CStack_5.m_NormalColor.r = alpha;
      func_?(&fStack_2,uStack_23,uStack_24,uStack_25);
      pBVar3 = (this->fields).button;
      if (pBVar3 != (Button *)0x0) {
        value.m_NormalColor.g = fStack_27;
        value.m_NormalColor.r = fStack_2;
        value.m_NormalColor.b = fStack_28;
        value.m_NormalColor.a = fStack_29;
        value.m_HighlightedColor.r = fStack_30;
        value.m_HighlightedColor.g = fStack_31;
        value.m_HighlightedColor.b = fStack_32;
        value.m_HighlightedColor.a = fStack_33;
        value.m_PressedColor.r = fStack_34;
        value.m_PressedColor.g = fStack_35;
        value.m_PressedColor.b = fStack_36;
        value.m_PressedColor.a = fStack_37;
        value.m_DisabledColor.r = fStack_38;
        value.m_DisabledColor.g = fStack_39;
        value.m_DisabledColor.b = fStack_40;
        value.m_DisabledColor.a = fStack_41;
        value.m_ColorMultiplier = (float)(int)uStack_42;
        value.m_FadeDuration = (float)((ulonglong)uStack_42 >> 0x20);
        UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_colors
                  ((Selectable *)pBVar3,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar47 = (code *)swi(3);
  (*pcVar47)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::SetButtonStyleToTeamColor::SetButtonStyleToTeamColor_Start
               (SetButtonStyleToTeamColor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pSVar2 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                       ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
    if (pSVar2 != (SkyParam *)0x0) {
      pDVar3 = (Delegate *)(pSVar2->fields).TopColor.g;
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)this,MethodInfo__SetButtonStyleToTeamColor__UpdateColor__,
                 (MethodInfo *)0x0);
      pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                         (pDVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
      pDVar3 = (Delegate *)0x0;
      if (pDVar5 != (Delegate *)0x0) {
        if ((MVTeamManager_OnTeamsUpdatedDelegate__Class *)pDVar5->klass ==
            TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
          pDVar3 = pDVar5;
        }
        if (pDVar3 == (Delegate *)0x0) goto code_?;
      }
      (pSVar2->fields).TopColor.g = (float)pDVar3;
      this_00 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_00 != (MVAvatar *)0x0) {
        uVar6 = 0;
        pMVar7 = MVAvatar::MVAvatar_get_Shield(this_00,(MethodInfo *)0x0);
        if (pMVar7 != (MVRuntimeDataVariableClampedFloat *)0x0) {
          pDVar3 = (Delegate *)(pMVar7->fields)._._.sendInterval;
          pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar4,(Object *)this,MethodInfo__SetButtonStyleToTeamColor__UpdateColor__,
                     (MethodInfo *)0x0);
          pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                             (pDVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
          pDVar3 = (Delegate *)0x0;
          if (pDVar5 != (Delegate *)0x0) {
            if ((Action__Class *)pDVar5->klass == TypeInfo__System__Action) {
              pDVar3 = pDVar5;
            }
            if (pDVar3 == (Delegate *)0x0) goto code_?;
          }
          (pMVar7->fields)._._.sendInterval = (float)pDVar3;
          if (cRam_? == '\0') {
            func_?(_UNK_?,pDStack_8,this_00,uVar6);
            cRam_? = '\x01';
          }
          func_?(&fStack_9,0,0x48);
          uVar6 = _UNK_?;
          if ((this->fields).shouldRetainAlpha != 0) {
            pBVar10 = (this->fields).button;
            if (pBVar10 == (Button *)0x0) goto code_?;
            pCVar11 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_colors
                               (&CStack_12,(Selectable *)pBVar10,(MethodInfo *)0x0);
            fStack_9 = (pCVar11->m_NormalColor).r;
            fStack_13 = (pCVar11->m_NormalColor).g;
            fStack_14 = (pCVar11->m_NormalColor).b;
            fStack_15 = (pCVar11->m_NormalColor).a;
            fStack_16 = (pCVar11->m_HighlightedColor).r;
            fStack_17 = (pCVar11->m_HighlightedColor).g;
            fStack_18 = (pCVar11->m_HighlightedColor).b;
            fStack_19 = (pCVar11->m_HighlightedColor).a;
            fStack_20 = (pCVar11->m_PressedColor).r;
            fStack_21 = (pCVar11->m_PressedColor).g;
            fStack_22 = (pCVar11->m_PressedColor).b;
            fStack_23 = (pCVar11->m_PressedColor).a;
            fStack_24 = (pCVar11->m_DisabledColor).r;
            fStack_25 = (pCVar11->m_DisabledColor).g;
            fStack_26 = (pCVar11->m_DisabledColor).b;
            fStack_27 = (pCVar11->m_DisabledColor).a;
            uStack_28._0_4_ = pCVar11->m_ColorMultiplier;
            uStack_28._4_4_ = pCVar11->m_FadeDuration;
            iVar29 = func_?(&stack0xffffffcc,&fStack_9,0);
            uVar6 = *(undefined4 *)(iVar29 + 0xc);
          }
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar1 != (MVNetworkGame *)0x0) &&
             (pSVar2 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                 ((DayNightCycle *)pMVar1,(MethodInfo *)0x0),
             pSVar2 != (SkyParam *)0x0)) {
            iVar30 = MVTeamManager::MVTeamManager_TeamCount
                               ((MVTeamManager *)pSVar2,(MethodInfo *)0x0);
            if (iVar30 < 2) {
              pBVar10 = (this->fields).button;
              if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__Styles->_1).cctor_started == 0)) {
                func_?(TypeInfo__Styles);
              }
              team = (IKogamaSetting *)0x5;
            }
            else {
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar1 == (MVNetworkGame *)0x0) ||
                 (this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
                 this_01 == (MVLocalPlayer *)0x0)) goto code_?;
              team = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                     KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                     KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                               ((KogamaSettingNumericBase_1_System_Single_ *)this_01,
                                (MethodInfo *)0x0);
              pBVar10 = (this->fields).button;
              if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__Styles->_1).cctor_started == 0)) {
                func_?(TypeInfo__Styles);
              }
            }
            Styles::Styles_SetStyle_4
                      (pBVar10,ButtonStyle__Enum_RegularButton,(MVTeam__Enum)team,
                       SoundStyle__Enum_NoSound,(MethodInfo *)0x0);
            if ((this->fields).shouldRetainAlpha == 0) {
              return;
            }
            CStack_31.m_NormalColor.a = 1.00893e-43;
            CStack_31.m_NormalColor.g = (float)&CStack_12;
            CStack_31.m_NormalColor.b = 0.0;
            CStack_31.m_NormalColor.r = (float)&UNK_?;
            func_?();
            CStack_31.m_NormalColor.r = 1.00893e-43;
            func_?(&fStack_32,0);
            pBVar10 = (this->fields).button;
            if (pBVar10 != (Button *)0x0) {
              pCVar11 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_colors
                                 (&CStack_31,(Selectable *)pBVar10,(MethodInfo *)0x0);
              CStack_12.m_NormalColor.r = (pCVar11->m_NormalColor).r;
              CStack_12.m_NormalColor.g = (pCVar11->m_NormalColor).g;
              CStack_12.m_NormalColor.b = (pCVar11->m_NormalColor).b;
              CStack_12.m_NormalColor.a = (pCVar11->m_NormalColor).a;
              CStack_12.m_HighlightedColor.r = (pCVar11->m_HighlightedColor).r;
              CStack_12.m_HighlightedColor.g = (pCVar11->m_HighlightedColor).g;
              CStack_12.m_HighlightedColor.b = (pCVar11->m_HighlightedColor).b;
              CStack_12.m_HighlightedColor.a = (pCVar11->m_HighlightedColor).a;
              CStack_12.m_PressedColor.r = (pCVar11->m_PressedColor).r;
              CStack_12.m_PressedColor.g = (pCVar11->m_PressedColor).g;
              CStack_12.m_PressedColor.b = (pCVar11->m_PressedColor).b;
              CStack_12.m_PressedColor.a = (pCVar11->m_PressedColor).a;
              CStack_12.m_DisabledColor.r = (pCVar11->m_DisabledColor).r;
              CStack_12.m_DisabledColor.g = (pCVar11->m_DisabledColor).g;
              CStack_12.m_DisabledColor.b = (pCVar11->m_DisabledColor).b;
              CStack_12.m_DisabledColor.a = (pCVar11->m_DisabledColor).a;
              CStack_12.m_ColorMultiplier = pCVar11->m_ColorMultiplier;
              CStack_12.m_FadeDuration = pCVar11->m_FadeDuration;
              puVar33 = (undefined4 *)func_?(&uStack_34,&CStack_12,0);
              uStack_34 = *puVar33;
              puStack_35 = (undefined *)puVar33[1];
              uStack_36 = puVar33[2];
              uStack_37 = puVar33[3];
              pBVar10 = (this->fields).button;
              if (pBVar10 != (Button *)0x0) {
                pCVar11 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_colors
                                   (&CStack_31,(Selectable *)pBVar10,(MethodInfo *)0x0);
                fStack_32 = (pCVar11->m_NormalColor).r;
                fStack_38 = (pCVar11->m_NormalColor).g;
                fStack_39 = (pCVar11->m_NormalColor).b;
                fStack_40 = (pCVar11->m_NormalColor).a;
                fStack_41 = (pCVar11->m_HighlightedColor).r;
                fStack_42 = (pCVar11->m_HighlightedColor).g;
                fStack_43 = (pCVar11->m_HighlightedColor).b;
                fStack_44 = (pCVar11->m_HighlightedColor).a;
                fStack_45 = (pCVar11->m_PressedColor).r;
                fStack_46 = (pCVar11->m_PressedColor).g;
                fStack_47 = (pCVar11->m_PressedColor).b;
                fStack_48 = (pCVar11->m_PressedColor).a;
                fStack_49 = (pCVar11->m_DisabledColor).r;
                fStack_50 = (pCVar11->m_DisabledColor).g;
                puStack_51 = (undefined *)(pCVar11->m_DisabledColor).b;
                fVar52 = (pCVar11->m_DisabledColor).a;
                uVar53._0_4_ = pCVar11->m_ColorMultiplier;
                uVar53._4_4_ = pCVar11->m_FadeDuration;
                puStack_54 = (undefined *)uStack_34;
                pDStack_8 = (Delegate *)puStack_35;
                func_?(&fStack_32,uStack_34,puStack_35,uStack_36,uVar6,0);
                pBVar10 = (this->fields).button;
                if (pBVar10 != (Button *)0x0) {
                  value.m_NormalColor.g = fStack_38;
                  value.m_NormalColor.r = fStack_32;
                  value.m_NormalColor.b = fStack_39;
                  value.m_NormalColor.a = fStack_40;
                  value.m_HighlightedColor.r = fStack_41;
                  value.m_HighlightedColor.g = fStack_42;
                  value.m_HighlightedColor.b = fStack_43;
                  value.m_HighlightedColor.a = fStack_44;
                  value.m_PressedColor.r = fStack_45;
                  value.m_PressedColor.g = fStack_46;
                  value.m_PressedColor.b = fStack_47;
                  value.m_PressedColor.a = fStack_48;
                  value.m_DisabledColor.r = fStack_49;
                  value.m_DisabledColor.g = fStack_50;
                  value.m_DisabledColor.b = (float)puStack_51;
                  value.m_DisabledColor.a = fVar52;
                  value.m_ColorMultiplier = (float)(int)uVar53;
                  value.m_FadeDuration = (float)((ulonglong)uVar53 >> 0x20);
                  UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_colors
                            ((Selectable *)pBVar10,value,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
code_?:
          func_?(0);
          pcVar55 = (code *)swi(3);
          (*pcVar55)();
          return;
        }
      }
    }
  }
  func_?();
  pDVar5 = extraout_ECX;
code_?:
  pDStack_8 = pDVar5;
  func_?();
  pcVar55 = (code *)swi(3);
  (*pcVar55)();
  return;
}


/* Void UpdateColor() */

void Assembly-CSharp.dll::SetButtonStyleToTeamColor::SetButtonStyleToTeamColor_UpdateColor
               (SetButtonStyleToTeamColor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&fStack_1,0,0x48);
  uStack_2 = _UNK_?;
  uStack_3 = 0;
  uStack_4 = 0;
  uStack_5 = 0;
  if ((this->fields).shouldRetainAlpha != 0) {
    pBVar6 = (this->fields).button;
    if (pBVar6 == (Button *)0x0) goto code_?;
    pCVar7 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_colors
                       (&CStack_8,(Selectable *)pBVar6,(MethodInfo *)0x0);
    fStack_1 = (pCVar7->m_NormalColor).r;
    fStack_9 = (pCVar7->m_NormalColor).g;
    fStack_10 = (pCVar7->m_NormalColor).b;
    fStack_11 = (pCVar7->m_NormalColor).a;
    fStack_12 = (pCVar7->m_HighlightedColor).r;
    fStack_13 = (pCVar7->m_HighlightedColor).g;
    fStack_14 = (pCVar7->m_HighlightedColor).b;
    fStack_15 = (pCVar7->m_HighlightedColor).a;
    fStack_16 = (pCVar7->m_PressedColor).r;
    fStack_17 = (pCVar7->m_PressedColor).g;
    fStack_18 = (pCVar7->m_PressedColor).b;
    fStack_19 = (pCVar7->m_PressedColor).a;
    fStack_20 = (pCVar7->m_DisabledColor).r;
    fStack_21 = (pCVar7->m_DisabledColor).g;
    fStack_22 = (pCVar7->m_DisabledColor).b;
    fStack_23 = (pCVar7->m_DisabledColor).a;
    uStack_24._0_4_ = pCVar7->m_ColorMultiplier;
    uStack_24._4_4_ = pCVar7->m_FadeDuration;
    iVar25 = func_?(&uStack_2,&fStack_1,0);
    uStack_2 = *(undefined4 *)(iVar25 + 0xc);
    uStack_5 = uStack_2;
  }
  uStack_3 = uStack_5;
  uStack_4 = uStack_5;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar26 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar26 != (MVNetworkGame *)0x0) &&
     (this_00 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                          ((DayNightCycle *)pMVar26,(MethodInfo *)0x0), this_00 != (SkyParam *)0x0))
  {
    iVar27 = MVTeamManager::MVTeamManager_TeamCount((MVTeamManager *)this_00,(MethodInfo *)0x0);
    if (iVar27 < 2) {
      pBVar6 = (this->fields).button;
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        func_?(TypeInfo__Styles);
      }
      team = (IKogamaSetting *)0x5;
    }
    else {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar26 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar26 == (MVNetworkGame *)0x0) ||
         (this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar26,(MethodInfo *)0x0),
         this_01 == (MVLocalPlayer *)0x0)) goto code_?;
      team = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)this_01,(MethodInfo *)0x0);
      pBVar6 = (this->fields).button;
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        func_?(TypeInfo__Styles);
      }
    }
    Styles::Styles_SetStyle_4
              (pBVar6,ButtonStyle__Enum_RegularButton,(MVTeam__Enum)team,SoundStyle__Enum_NoSound,
               (MethodInfo *)0x0);
    if ((this->fields).shouldRetainAlpha == 0) {
      return;
    }
    CStack_28.m_NormalColor.a = 1.00893e-43;
    CStack_28.m_NormalColor.g = (float)&CStack_8;
    CStack_28.m_NormalColor.b = 0.0;
    CStack_28.m_NormalColor.r = (float)&UNK_?;
    func_?();
    CStack_28.m_NormalColor.r = 1.00893e-43;
    func_?(&fStack_29,0);
    pBVar6 = (this->fields).button;
    if (pBVar6 != (Button *)0x0) {
      pCVar7 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_colors
                         (&CStack_28,(Selectable *)pBVar6,(MethodInfo *)0x0);
      CStack_8.m_NormalColor.r = (pCVar7->m_NormalColor).r;
      CStack_8.m_NormalColor.g = (pCVar7->m_NormalColor).g;
      CStack_8.m_NormalColor.b = (pCVar7->m_NormalColor).b;
      CStack_8.m_NormalColor.a = (pCVar7->m_NormalColor).a;
      CStack_8.m_HighlightedColor.r = (pCVar7->m_HighlightedColor).r;
      CStack_8.m_HighlightedColor.g = (pCVar7->m_HighlightedColor).g;
      CStack_8.m_HighlightedColor.b = (pCVar7->m_HighlightedColor).b;
      CStack_8.m_HighlightedColor.a = (pCVar7->m_HighlightedColor).a;
      CStack_8.m_PressedColor.r = (pCVar7->m_PressedColor).r;
      CStack_8.m_PressedColor.g = (pCVar7->m_PressedColor).g;
      CStack_8.m_PressedColor.b = (pCVar7->m_PressedColor).b;
      CStack_8.m_PressedColor.a = (pCVar7->m_PressedColor).a;
      CStack_8.m_DisabledColor.r = (pCVar7->m_DisabledColor).r;
      CStack_8.m_DisabledColor.g = (pCVar7->m_DisabledColor).g;
      CStack_8.m_DisabledColor.b = (pCVar7->m_DisabledColor).b;
      CStack_8.m_DisabledColor.a = (pCVar7->m_DisabledColor).a;
      CStack_8.m_ColorMultiplier = pCVar7->m_ColorMultiplier;
      CStack_8.m_FadeDuration = pCVar7->m_FadeDuration;
      puVar30 = (undefined4 *)func_?(&uStack_31,&CStack_8,0);
      uStack_31 = *puVar30;
      uStack_32 = puVar30[1];
      uStack_33 = puVar30[2];
      uStack_34 = puVar30[3];
      pBVar6 = (this->fields).button;
      if (pBVar6 != (Button *)0x0) {
        pCVar7 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_colors
                           (&CStack_28,(Selectable *)pBVar6,(MethodInfo *)0x0);
        fStack_29 = (pCVar7->m_NormalColor).r;
        fStack_35 = (pCVar7->m_NormalColor).g;
        fStack_36 = (pCVar7->m_NormalColor).b;
        fStack_37 = (pCVar7->m_NormalColor).a;
        fStack_38 = (pCVar7->m_HighlightedColor).r;
        fStack_39 = (pCVar7->m_HighlightedColor).g;
        fStack_40 = (pCVar7->m_HighlightedColor).b;
        fStack_41 = (pCVar7->m_HighlightedColor).a;
        fStack_42 = (pCVar7->m_PressedColor).r;
        fStack_43 = (pCVar7->m_PressedColor).g;
        fStack_44 = (pCVar7->m_PressedColor).b;
        fStack_45 = (pCVar7->m_PressedColor).a;
        fStack_46 = (pCVar7->m_DisabledColor).r;
        fStack_47 = (pCVar7->m_DisabledColor).g;
        fStack_48 = (pCVar7->m_DisabledColor).b;
        fStack_49 = (pCVar7->m_DisabledColor).a;
        uStack_50._0_4_ = pCVar7->m_ColorMultiplier;
        uStack_50._4_4_ = pCVar7->m_FadeDuration;
        uStack_51 = uStack_31;
        uStack_52 = uStack_32;
        uStack_53 = uStack_33;
        uStack_54 = uStack_2;
        func_?(&fStack_29,uStack_31,uStack_32,uStack_33,uStack_2,0);
        pBVar6 = (this->fields).button;
        if (pBVar6 != (Button *)0x0) {
          value.m_NormalColor.g = fStack_35;
          value.m_NormalColor.r = fStack_29;
          value.m_NormalColor.b = fStack_36;
          value.m_NormalColor.a = fStack_37;
          value.m_HighlightedColor.r = fStack_38;
          value.m_HighlightedColor.g = fStack_39;
          value.m_HighlightedColor.b = fStack_40;
          value.m_HighlightedColor.a = fStack_41;
          value.m_PressedColor.r = fStack_42;
          value.m_PressedColor.g = fStack_43;
          value.m_PressedColor.b = fStack_44;
          value.m_PressedColor.a = fStack_45;
          value.m_DisabledColor.r = fStack_46;
          value.m_DisabledColor.g = fStack_47;
          value.m_DisabledColor.b = fStack_48;
          value.m_DisabledColor.a = fStack_49;
          value.m_ColorMultiplier = (float)(int)uStack_50;
          value.m_FadeDuration = (float)((ulonglong)uStack_50 >> 0x20);
          UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_colors
                    ((Selectable *)pBVar6,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar55 = (code *)swi(3);
  (*pcVar55)();
  return;
}



/* Void OnDestroy() */

void Assembly-CSharp.dll::SetButtonStyleToTeamColor::SetButtonStyleToTeamColor_OnDestroy
               (SetButtonStyleToTeamColor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate);
    func_?(&MethodInfo__SetButtonStyleToTeamColor__UpdateColor__);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = (pMVar1->fields).teamManager;
    if (pMVar2 != (MVTeamManager *)0x0) {
      pMVar3 = (pMVar2->fields).OnTeamsUpdated;
      pNVar4 = (NavMesh_OnNavMeshPreUpdate *)
               func_?(TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate);
      if (pNVar4 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar4,(Object *)this,MethodInfo__SetButtonStyleToTeamColor__UpdateColor__,
                   (MethodInfo *)0x0);
        pMVar3 = (MVTeamManager_OnTeamsUpdatedDelegate *)
                 mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)pMVar3,(Delegate *)pNVar4,(MethodInfo *)0x0);
        if (pMVar3 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
          (pMVar2->fields).OnTeamsUpdated = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
        }
        else {
          pMVar5 = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
          if (pMVar3->klass == TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
            pMVar5 = pMVar3;
          }
          if (pMVar5 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) goto code_?;
          (pMVar2->fields).OnTeamsUpdated = pMVar5;
          pMVar5 = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
          if (pMVar3->klass == TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
            pMVar5 = pMVar3;
          }
          if (pMVar5 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) goto code_?;
        }
        func_?();
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar1 != (MVNetworkGame *)0x0) &&
           (pMVar6 = (pMVar1->fields).playerContainer, pMVar6 != (MVPlayerContainer *)0x0)) {
          pAVar7 = (pMVar6->fields).OnPlayerListChanged;
          pNVar4 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
          if (pNVar4 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar4,(Object *)this,MethodInfo__SetButtonStyleToTeamColor__UpdateColor__,
                       (MethodInfo *)0x0);
            pAVar7 = (Action *)
                     mscorlib.dll::System::Delegate::Delegate_Remove
                               ((Delegate *)pAVar7,(Delegate *)pNVar4,(MethodInfo *)0x0);
            if (pAVar7 == (Action *)0x0) {
              (pMVar6->fields).OnPlayerListChanged = (Action *)0x0;
              func_?();
              return;
            }
            pAVar8 = (Action *)0x0;
            if (pAVar7->klass == TypeInfo__System__Action) {
              pAVar8 = pAVar7;
            }
            if (pAVar8 != (Action *)0x0) {
              (pMVar6->fields).OnPlayerListChanged = pAVar8;
              pAVar8 = (Action *)0x0;
              if (pAVar7->klass == TypeInfo__System__Action) {
                pAVar8 = pAVar7;
              }
              if (pAVar8 != (Action *)0x0) {
                func_?();
                return;
              }
            }
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void ResetAlpha(Single) */

void Assembly-CSharp.dll::SetButtonStyleToTeamColor::SetButtonStyleToTeamColor_ResetAlpha
               (SetButtonStyleToTeamColor *this,float alpha,MethodInfo *method)

{
  this_00 = (this->fields).button;
  if (this_00 != (Button *)0x0) {
    pBVar1 = &this_00->fields;
    uVar2 = (pBVar1->_).m_Colors.m_NormalColor.r;
    uVar3 = (pBVar1->_).m_Colors.m_NormalColor.g;
    uVar4 = (pBVar1->_).m_Colors.m_NormalColor.b;
    value.m_NormalColor.b = (float)uVar4;
    value.m_NormalColor.g = (float)uVar3;
    value.m_NormalColor.r = (float)uVar2;
    uVar5 = (this_00->fields)._.m_Colors.m_ColorMultiplier;
    uVar6 = (this_00->fields)._.m_Colors.m_FadeDuration;
    value.m_FadeDuration = (float)uVar6;
    value.m_ColorMultiplier = (float)uVar5;
    if (this_00 != (Button *)0x0) {
      value.m_NormalColor.a = alpha;
      value.m_HighlightedColor.r = (this_00->fields)._.m_Colors.m_HighlightedColor.r;
      value.m_HighlightedColor.g = (this_00->fields)._.m_Colors.m_HighlightedColor.g;
      value.m_HighlightedColor.b = (this_00->fields)._.m_Colors.m_HighlightedColor.b;
      value.m_HighlightedColor.a = (this_00->fields)._.m_Colors.m_HighlightedColor.a;
      value.m_PressedColor.r = (this_00->fields)._.m_Colors.m_PressedColor.r;
      value.m_PressedColor.g = (this_00->fields)._.m_Colors.m_PressedColor.g;
      value.m_PressedColor.b = (this_00->fields)._.m_Colors.m_PressedColor.b;
      value.m_PressedColor.a = (this_00->fields)._.m_Colors.m_PressedColor.a;
      value.m_SelectedColor.r = (this_00->fields)._.m_Colors.m_SelectedColor.r;
      value.m_SelectedColor.g = (this_00->fields)._.m_Colors.m_SelectedColor.g;
      value.m_SelectedColor.b = (this_00->fields)._.m_Colors.m_SelectedColor.b;
      value.m_SelectedColor.a = (this_00->fields)._.m_Colors.m_SelectedColor.a;
      value.m_DisabledColor.r = (this_00->fields)._.m_Colors.m_DisabledColor.r;
      value.m_DisabledColor.g = (this_00->fields)._.m_Colors.m_DisabledColor.g;
      value.m_DisabledColor.b = (this_00->fields)._.m_Colors.m_DisabledColor.b;
      value.m_DisabledColor.a = (this_00->fields)._.m_Colors.m_DisabledColor.a;
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_colors
                ((Selectable *)this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::SetButtonStyleToTeamColor::SetButtonStyleToTeamColor_Start
               (SetButtonStyleToTeamColor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate);
    func_?(&MethodInfo__SetButtonStyleToTeamColor__UpdateColor__);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = (pMVar1->fields).teamManager, pMVar2 != (MVTeamManager *)0x0)) {
    pMVar3 = (pMVar2->fields).OnTeamsUpdated;
    pNVar4 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate);
    if (pNVar4 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar4,(Object *)this,MethodInfo__SetButtonStyleToTeamColor__UpdateColor__,
                 (MethodInfo *)0x0);
      pMVar5 = (MVTeamManager_OnTeamsUpdatedDelegate *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pMVar3,(Delegate *)pNVar4,(MethodInfo *)0x0);
      uVar6 = CONCAT44(TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate,pMVar5);
      pMVar3 = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
      if (pMVar5 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
        (pMVar2->fields).OnTeamsUpdated = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
      }
      else {
        if (pMVar5->klass == TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
          pMVar3 = pMVar5;
        }
        if (pMVar3 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) goto code_?;
        (pMVar2->fields).OnTeamsUpdated = pMVar3;
        uVar6 = CONCAT44(TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate,pMVar5);
        pMVar3 = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
        if (pMVar5->klass == TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
          pMVar3 = pMVar5;
        }
        if (pMVar3 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) goto code_?;
      }
      func_?(&(pMVar2->fields).OnTeamsUpdated,pMVar3);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (pMVar7 = (pMVar1->fields).playerContainer, pMVar7 != (MVPlayerContainer *)0x0)) {
        pAVar8 = (pMVar7->fields).OnPlayerListChanged;
        pNVar4 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
        if (pNVar4 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar4,(Object *)this,MethodInfo__SetButtonStyleToTeamColor__UpdateColor__,
                     (MethodInfo *)0x0);
          pAVar9 = (Action *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pAVar8,(Delegate *)pNVar4,(MethodInfo *)0x0);
          uVar6 = CONCAT44(TypeInfo__System__Action,pAVar9);
          pAVar8 = (Action *)0x0;
          if (pAVar9 == (Action *)0x0) {
            (pMVar7->fields).OnPlayerListChanged = (Action *)0x0;
          }
          else {
            if (pAVar9->klass == TypeInfo__System__Action) {
              pAVar8 = pAVar9;
            }
            if (pAVar8 == (Action *)0x0) goto code_?;
            (pMVar7->fields).OnPlayerListChanged = pAVar8;
            uVar6 = CONCAT44(TypeInfo__System__Action,pAVar9);
            pAVar8 = (Action *)0x0;
            if (pAVar9->klass == TypeInfo__System__Action) {
              pAVar8 = pAVar9;
            }
            if (pAVar8 == (Action *)0x0) goto code_?;
          }
          func_?(&(pMVar7->fields).OnPlayerListChanged,pAVar8);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__Styles);
            cRam_? = '\x01';
          }
          fStack_10 = _UNK_?;
          if ((this->fields).shouldRetainAlpha != 0) {
            pBVar11 = (this->fields).button;
            if (pBVar11 == (Button *)0x0) goto code_?;
            fStack_10 = (pBVar11->fields)._.m_Colors.m_NormalColor.a;
          }
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar1 != (MVNetworkGame *)0x0) &&
             (pMVar2 = (pMVar1->fields).teamManager, pMVar2 != (MVTeamManager *)0x0)) {
            iVar12 = MVTeamManager::MVTeamManager_TeamCount(pMVar2,(MethodInfo *)0x0);
            if (iVar12 < 2) {
              pBVar11 = (this->fields).button;
              if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__Styles);
              }
              team = MVTeam__Enum_None;
            }
            else {
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar1 == (MVNetworkGame *)0x0) ||
                 (pMVar13 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
                 pMVar13 == (MVLocalPlayer *)0x0)) goto code_?;
              team = (pMVar13->fields)._._Team_k__BackingField;
              pBVar11 = (this->fields).button;
              if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__Styles);
              }
            }
            Styles::Styles_SetStyle_4
                      (pBVar11,ButtonStyle__Enum_RegularButton,team,SoundStyle__Enum_NoSound,
                       (MethodInfo *)0x0);
            if ((this->fields).shouldRetainAlpha == 0) {
              return;
            }
            pBVar11 = (this->fields).button;
            if (pBVar11 != (Button *)0x0) {
              pBVar14 = &pBVar11->fields;
              uVar15 = (pBVar14->_).m_Colors.m_NormalColor.r;
              uVar16 = (pBVar14->_).m_Colors.m_NormalColor.g;
              uVar17 = (pBVar14->_).m_Colors.m_NormalColor.b;
              value.m_NormalColor.b = (float)uVar17;
              value.m_NormalColor.g = (float)uVar16;
              value.m_NormalColor.r = (float)uVar15;
              uVar18 = (pBVar11->fields)._.m_Colors.m_ColorMultiplier;
              uVar19 = (pBVar11->fields)._.m_Colors.m_FadeDuration;
              if (pBVar11 != (Button *)0x0) {
                value.m_NormalColor.a = fStack_10;
                value.m_HighlightedColor.r = (pBVar11->fields)._.m_Colors.m_HighlightedColor.r;
                value.m_HighlightedColor.g = (pBVar11->fields)._.m_Colors.m_HighlightedColor.g;
                value.m_HighlightedColor.b = (pBVar11->fields)._.m_Colors.m_HighlightedColor.b;
                value.m_HighlightedColor.a = (pBVar11->fields)._.m_Colors.m_HighlightedColor.a;
                value.m_PressedColor.r = (pBVar11->fields)._.m_Colors.m_PressedColor.r;
                value.m_PressedColor.g = (pBVar11->fields)._.m_Colors.m_PressedColor.g;
                value.m_PressedColor.b = (pBVar11->fields)._.m_Colors.m_PressedColor.b;
                value.m_PressedColor.a = (pBVar11->fields)._.m_Colors.m_PressedColor.a;
                value.m_SelectedColor.r = (pBVar11->fields)._.m_Colors.m_SelectedColor.r;
                value.m_SelectedColor.g = (pBVar11->fields)._.m_Colors.m_SelectedColor.g;
                value.m_SelectedColor.b = (pBVar11->fields)._.m_Colors.m_SelectedColor.b;
                value.m_SelectedColor.a = (pBVar11->fields)._.m_Colors.m_SelectedColor.a;
                value.m_DisabledColor.r = (pBVar11->fields)._.m_Colors.m_DisabledColor.r;
                value.m_DisabledColor.g = (pBVar11->fields)._.m_Colors.m_DisabledColor.g;
                value.m_DisabledColor.b = (pBVar11->fields)._.m_Colors.m_DisabledColor.b;
                value.m_DisabledColor.a = (pBVar11->fields)._.m_Colors.m_DisabledColor.a;
                value.m_ColorMultiplier = (float)uVar18;
                value.m_FadeDuration = (float)uVar19;
                UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_colors
                          ((Selectable *)pBVar11,value,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  uVar6 = func_?();
code_?:
  func_?(uVar6);
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void UpdateColor() */

void Assembly-CSharp.dll::SetButtonStyleToTeamColor::SetButtonStyleToTeamColor_UpdateColor
               (SetButtonStyleToTeamColor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  fStack_1 = _UNK_?;
  if ((this->fields).shouldRetainAlpha != 0) {
    pBVar2 = (this->fields).button;
    if (pBVar2 == (Button *)0x0) goto code_?;
    fStack_1 = (pBVar2->fields)._.m_Colors.m_NormalColor.a;
  }
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar3 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar3->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
    iVar4 = MVTeamManager::MVTeamManager_TeamCount(this_00,(MethodInfo *)0x0);
    if (iVar4 < 2) {
      pBVar2 = (this->fields).button;
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Styles);
      }
      team = MVTeam__Enum_None;
    }
    else {
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar3 == (MVNetworkGame *)0x0) ||
         (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
         pMVar5 == (MVLocalPlayer *)0x0)) goto code_?;
      team = (pMVar5->fields)._._Team_k__BackingField;
      pBVar2 = (this->fields).button;
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Styles);
      }
    }
    Styles::Styles_SetStyle_4
              (pBVar2,ButtonStyle__Enum_RegularButton,team,SoundStyle__Enum_NoSound,
               (MethodInfo *)0x0);
    if ((this->fields).shouldRetainAlpha == 0) {
      return;
    }
    pBVar2 = (this->fields).button;
    if (pBVar2 != (Button *)0x0) {
      pBVar6 = &pBVar2->fields;
      uVar7 = (pBVar6->_).m_Colors.m_NormalColor.r;
      uVar8 = (pBVar6->_).m_Colors.m_NormalColor.g;
      uVar9 = (pBVar6->_).m_Colors.m_NormalColor.b;
      value.m_NormalColor.b = (float)uVar9;
      value.m_NormalColor.g = (float)uVar8;
      value.m_NormalColor.r = (float)uVar7;
      uVar10 = (pBVar2->fields)._.m_Colors.m_ColorMultiplier;
      uVar11 = (pBVar2->fields)._.m_Colors.m_FadeDuration;
      if (pBVar2 != (Button *)0x0) {
        value.m_NormalColor.a = fStack_1;
        value.m_HighlightedColor.r = (pBVar2->fields)._.m_Colors.m_HighlightedColor.r;
        value.m_HighlightedColor.g = (pBVar2->fields)._.m_Colors.m_HighlightedColor.g;
        value.m_HighlightedColor.b = (pBVar2->fields)._.m_Colors.m_HighlightedColor.b;
        value.m_HighlightedColor.a = (pBVar2->fields)._.m_Colors.m_HighlightedColor.a;
        value.m_PressedColor.r = (pBVar2->fields)._.m_Colors.m_PressedColor.r;
        value.m_PressedColor.g = (pBVar2->fields)._.m_Colors.m_PressedColor.g;
        value.m_PressedColor.b = (pBVar2->fields)._.m_Colors.m_PressedColor.b;
        value.m_PressedColor.a = (pBVar2->fields)._.m_Colors.m_PressedColor.a;
        value.m_SelectedColor.r = (pBVar2->fields)._.m_Colors.m_SelectedColor.r;
        value.m_SelectedColor.g = (pBVar2->fields)._.m_Colors.m_SelectedColor.g;
        value.m_SelectedColor.b = (pBVar2->fields)._.m_Colors.m_SelectedColor.b;
        value.m_SelectedColor.a = (pBVar2->fields)._.m_Colors.m_SelectedColor.a;
        value.m_DisabledColor.r = (pBVar2->fields)._.m_Colors.m_DisabledColor.r;
        value.m_DisabledColor.g = (pBVar2->fields)._.m_Colors.m_DisabledColor.g;
        value.m_DisabledColor.b = (pBVar2->fields)._.m_Colors.m_DisabledColor.b;
        value.m_DisabledColor.a = (pBVar2->fields)._.m_Colors.m_DisabledColor.a;
        value.m_ColorMultiplier = (float)uVar10;
        value.m_FadeDuration = (float)uVar11;
        UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_colors
                  ((Selectable *)pBVar2,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


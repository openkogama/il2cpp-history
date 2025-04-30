
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
      ppMVar4 = &(pMVar2->fields).OnTeamsUpdated;
      pNVar5 = (NavMesh_OnNavMeshPreUpdate *)
               func_?(TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar5,(Object *)this,MethodInfo__SetButtonStyleToTeamColor__UpdateColor__,
                 (MethodInfo *)0x0);
      pMVar3 = (MVTeamManager_OnTeamsUpdatedDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pMVar3,(Delegate *)pNVar5,(MethodInfo *)0x0);
      if (pMVar3 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
        *ppMVar4 = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
      }
      else {
        pMVar6 = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
        if (pMVar3->klass == TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
          pMVar6 = pMVar3;
        }
        if (pMVar6 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) goto code_?;
        *ppMVar4 = pMVar6;
        pMVar6 = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
        if (pMVar3->klass == TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
          pMVar6 = pMVar3;
        }
        if (pMVar6 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) goto code_?;
      }
      func_?();
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (pMVar7 = (pMVar1->fields).playerContainer, pMVar7 != (MVPlayerContainer *)0x0)) {
        pAVar8 = (pMVar7->fields).OnPlayerListChanged;
        ppAVar9 = &(pMVar7->fields).OnPlayerListChanged;
        pNVar5 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar5,(Object *)&UNK_?,
                   MethodInfo__SetButtonStyleToTeamColor__UpdateColor__,(MethodInfo *)0x0);
        pAVar8 = (Action *)
                 mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)pAVar8,(Delegate *)pNVar5,(MethodInfo *)0x0);
        if (pAVar8 == (Action *)0x0) {
          *ppAVar9 = (Action *)0x0;
          func_?();
          return;
        }
        pAVar10 = (Action *)0x0;
        if (pAVar8->klass == TypeInfo__System__Action) {
          pAVar10 = pAVar8;
        }
        if (pAVar10 != (Action *)0x0) {
          *ppAVar9 = pAVar10;
          pAVar10 = (Action *)0x0;
          if (pAVar8->klass == TypeInfo__System__Action) {
            pAVar10 = pAVar8;
          }
          if (pAVar10 != (Action *)0x0) {
            func_?();
            return;
          }
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void ResetAlpha(Single) */

void Assembly-CSharp.dll::SetButtonStyleToTeamColor::SetButtonStyleToTeamColor_ResetAlpha
               (SetButtonStyleToTeamColor *this,float alpha,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__UI__ColorBlock);
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).button;
  if (pBVar1 != (Button *)0x0) {
    pBVar2 = &pBVar1->fields;
    uVar3 = (pBVar2->_).m_Colors.m_NormalColor.r;
    uVar4 = (pBVar2->_).m_Colors.m_NormalColor.g;
    uVar5 = (pBVar2->_).m_Colors.m_NormalColor.b;
    value.m_NormalColor.b = (float)uVar5;
    value.m_NormalColor.g = (float)uVar4;
    value.m_NormalColor.r = (float)uVar3;
    if ((TypeInfo__UnityEngine__UI__ColorBlock->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__UI__ColorBlock);
    }
    pBVar1 = (this->fields).button;
    if (pBVar1 != (Button *)0x0) {
      uVar6 = (pBVar1->fields)._.m_Colors.m_ColorMultiplier;
      uVar7 = (pBVar1->fields)._.m_Colors.m_FadeDuration;
      value.m_NormalColor.a = alpha;
      value.m_HighlightedColor.r = (pBVar1->fields)._.m_Colors.m_HighlightedColor.r;
      value.m_HighlightedColor.g = (pBVar1->fields)._.m_Colors.m_HighlightedColor.g;
      value.m_HighlightedColor.b = (pBVar1->fields)._.m_Colors.m_HighlightedColor.b;
      value.m_HighlightedColor.a = (pBVar1->fields)._.m_Colors.m_HighlightedColor.a;
      value.m_PressedColor.r = (pBVar1->fields)._.m_Colors.m_PressedColor.r;
      value.m_PressedColor.g = (pBVar1->fields)._.m_Colors.m_PressedColor.g;
      value.m_PressedColor.b = (pBVar1->fields)._.m_Colors.m_PressedColor.b;
      value.m_PressedColor.a = (pBVar1->fields)._.m_Colors.m_PressedColor.a;
      value.m_SelectedColor.r = (pBVar1->fields)._.m_Colors.m_SelectedColor.r;
      value.m_SelectedColor.g = (pBVar1->fields)._.m_Colors.m_SelectedColor.g;
      value.m_SelectedColor.b = (pBVar1->fields)._.m_Colors.m_SelectedColor.b;
      value.m_SelectedColor.a = (pBVar1->fields)._.m_Colors.m_SelectedColor.a;
      value.m_DisabledColor.r = (pBVar1->fields)._.m_Colors.m_DisabledColor.r;
      value.m_DisabledColor.g = (pBVar1->fields)._.m_Colors.m_DisabledColor.g;
      value.m_DisabledColor.b = (pBVar1->fields)._.m_Colors.m_DisabledColor.b;
      value.m_DisabledColor.a = (pBVar1->fields)._.m_Colors.m_DisabledColor.a;
      value.m_ColorMultiplier = (float)uVar6;
      value.m_FadeDuration = (float)uVar7;
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_colors
                ((Selectable *)pBVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
    ppMVar4 = &(pMVar2->fields).OnTeamsUpdated;
    pNVar5 = (NavMesh_OnNavMeshPreUpdate *)
             func_?(TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar5,(Object *)this,MethodInfo__SetButtonStyleToTeamColor__UpdateColor__,
               (MethodInfo *)0x0);
    pMVar6 = (MVTeamManager_OnTeamsUpdatedDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pMVar3,(Delegate *)pNVar5,(MethodInfo *)0x0);
    pMVar3 = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
    if (pMVar6 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
      *ppMVar4 = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
    }
    else {
      if (pMVar6->klass == TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
        pMVar3 = pMVar6;
      }
      if (pMVar3 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) goto code_?;
      *ppMVar4 = pMVar3;
      pMVar3 = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
      if (pMVar6->klass == TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
        pMVar3 = pMVar6;
      }
      if (pMVar3 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) goto code_?;
    }
    func_?();
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (pMVar7 = (pMVar1->fields).playerContainer, pMVar7 != (MVPlayerContainer *)0x0)) {
      pAVar8 = (pMVar7->fields).OnPlayerListChanged;
      ppAVar9 = &(pMVar7->fields).OnPlayerListChanged;
      pNVar5 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar5,(Object *)&UNK_?,MethodInfo__SetButtonStyleToTeamColor__UpdateColor__
                 ,(MethodInfo *)0x0);
      pAVar8 = (Action *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar8,(Delegate *)pNVar5,(MethodInfo *)0x0);
      if (pAVar8 == (Action *)0x0) {
        *ppAVar9 = (Action *)0x0;
      }
      else {
        pAVar10 = (Action *)0x0;
        if (pAVar8->klass == TypeInfo__System__Action) {
          pAVar10 = pAVar8;
        }
        if (pAVar10 == (Action *)0x0) goto code_?;
        *ppAVar9 = pAVar10;
        pAVar10 = (Action *)0x0;
        if (pAVar8->klass == TypeInfo__System__Action) {
          pAVar10 = pAVar8;
        }
        if (pAVar10 == (Action *)0x0) goto code_?;
      }
      func_?();
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__UI__ColorBlock,ppMVar4,pMVar3,in_stack_11);
        func_?(&TypeInfo__Styles);
        cRam_? = '\x01';
      }
      in_stack_11 = _UNK_?;
      if (*(char *)(in_stack_12 + 0x14) != '\0') {
        if (*(int *)(in_stack_12 + 0x10) == 0) goto code_?;
        in_stack_11 = *(undefined4 *)(*(int *)(in_stack_12 + 0x10) + 0x3c);
        if ((TypeInfo__UnityEngine__UI__ColorBlock->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__UI__ColorBlock);
        }
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (pMVar2 = (pMVar1->fields).teamManager, pMVar2 != (MVTeamManager *)0x0)) {
        iVar13 = MVTeamManager::MVTeamManager_TeamCount(pMVar2,(MethodInfo *)0x0);
        if (iVar13 < 2) {
          button = *(Button **)(in_stack_12 + 0x10);
          if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Styles);
          }
          team = MVTeam__Enum_None;
        }
        else {
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar1 == (MVNetworkGame *)0x0) ||
             (pMVar14 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
             pMVar14 == (MVLocalPlayer *)0x0)) goto code_?;
          team = (pMVar14->fields)._._Team_k__BackingField;
          button = *(Button **)(in_stack_12 + 0x10);
          if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Styles);
          }
        }
        Styles::Styles_SetStyle_4
                  (button,ButtonStyle__Enum_RegularButton,team,SoundStyle__Enum_NoSound,
                   (MethodInfo *)0x0);
        if (*(char *)(in_stack_12 + 0x14) == '\0') {
          return;
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__UI__ColorBlock);
          cRam_? = '\x01';
        }
        if (*(int *)(in_stack_12 + 0x10) != 0) {
          auVar15 = *(undefined1 (*) [12])(*(int *)(in_stack_12 + 0x10) + 0x30);
          if ((TypeInfo__UnityEngine__UI__ColorBlock->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__UI__ColorBlock);
          }
          this_00 = *(Selectable **)(in_stack_12 + 0x10);
          if (this_00 != (Selectable *)0x0) {
            uVar16 = (this_00->fields).m_Colors.m_ColorMultiplier;
            uVar17 = (this_00->fields).m_Colors.m_FadeDuration;
            value.m_NormalColor.a = (float)in_stack_11;
            value.m_NormalColor._0_12_ = auVar15;
            value.m_HighlightedColor.r = (this_00->fields).m_Colors.m_HighlightedColor.r;
            value.m_HighlightedColor.g = (this_00->fields).m_Colors.m_HighlightedColor.g;
            value.m_HighlightedColor.b = (this_00->fields).m_Colors.m_HighlightedColor.b;
            value.m_HighlightedColor.a = (this_00->fields).m_Colors.m_HighlightedColor.a;
            value.m_PressedColor.r = (this_00->fields).m_Colors.m_PressedColor.r;
            value.m_PressedColor.g = (this_00->fields).m_Colors.m_PressedColor.g;
            value.m_PressedColor.b = (this_00->fields).m_Colors.m_PressedColor.b;
            value.m_PressedColor.a = (this_00->fields).m_Colors.m_PressedColor.a;
            value.m_SelectedColor.r = (this_00->fields).m_Colors.m_SelectedColor.r;
            value.m_SelectedColor.g = (this_00->fields).m_Colors.m_SelectedColor.g;
            value.m_SelectedColor.b = (this_00->fields).m_Colors.m_SelectedColor.b;
            value.m_SelectedColor.a = (this_00->fields).m_Colors.m_SelectedColor.a;
            value.m_DisabledColor.r = (this_00->fields).m_Colors.m_DisabledColor.r;
            value.m_DisabledColor.g = (this_00->fields).m_Colors.m_DisabledColor.g;
            value.m_DisabledColor.b = (this_00->fields).m_Colors.m_DisabledColor.b;
            value.m_DisabledColor.a = (this_00->fields).m_Colors.m_DisabledColor.a;
            value.m_ColorMultiplier = (float)uVar16;
            value.m_FadeDuration = (float)uVar17;
            UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_colors
                      (this_00,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
code_?:
      func_?();
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void UpdateColor() */

void Assembly-CSharp.dll::SetButtonStyleToTeamColor::SetButtonStyleToTeamColor_UpdateColor
               (SetButtonStyleToTeamColor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__UI__ColorBlock);
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  fStack_1 = _UNK_?;
  if ((this->fields).shouldRetainAlpha != 0) {
    pBVar2 = (this->fields).button;
    if (pBVar2 == (Button *)0x0) goto code_?;
    fStack_1 = (pBVar2->fields)._.m_Colors.m_NormalColor.a;
    if ((TypeInfo__UnityEngine__UI__ColorBlock->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__UI__ColorBlock);
    }
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
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__UI__ColorBlock);
      cRam_? = '\x01';
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
      if ((TypeInfo__UnityEngine__UI__ColorBlock->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__UI__ColorBlock);
      }
      pBVar2 = (this->fields).button;
      if (pBVar2 != (Button *)0x0) {
        uVar10 = (pBVar2->fields)._.m_Colors.m_ColorMultiplier;
        uVar11 = (pBVar2->fields)._.m_Colors.m_FadeDuration;
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


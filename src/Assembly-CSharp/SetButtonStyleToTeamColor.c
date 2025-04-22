
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
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar4,(Object *)&UNK_?,
                   MethodInfo__SetButtonStyleToTeamColor__UpdateColor__,(MethodInfo *)0x0);
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
      if (pBVar1 != (Button *)0x0) {
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
    pNVar4 = (NavMesh_OnNavMeshPreUpdate *)
             func_?(TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar4,(Object *)this,MethodInfo__SetButtonStyleToTeamColor__UpdateColor__,
               (MethodInfo *)0x0);
    pMVar5 = (MVTeamManager_OnTeamsUpdatedDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pMVar3,(Delegate *)pNVar4,(MethodInfo *)0x0);
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
      pMVar3 = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
      if (pMVar5->klass == TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
        pMVar3 = pMVar5;
      }
      if (pMVar3 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) goto code_?;
    }
    func_?();
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (pMVar6 = (pMVar1->fields).playerContainer, pMVar6 != (MVPlayerContainer *)0x0)) {
      pAVar7 = (pMVar6->fields).OnPlayerListChanged;
      pNVar4 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar4,(Object *)&UNK_?,MethodInfo__SetButtonStyleToTeamColor__UpdateColor__
                 ,(MethodInfo *)0x0);
      pAVar7 = (Action *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar7,(Delegate *)pNVar4,(MethodInfo *)0x0);
      if (pAVar7 == (Action *)0x0) {
        (pMVar6->fields).OnPlayerListChanged = (Action *)0x0;
      }
      else {
        pAVar8 = (Action *)0x0;
        if (pAVar7->klass == TypeInfo__System__Action) {
          pAVar8 = pAVar7;
        }
        if (pAVar8 == (Action *)0x0) goto code_?;
        (pMVar6->fields).OnPlayerListChanged = pAVar8;
        pAVar8 = (Action *)0x0;
        if (pAVar7->klass == TypeInfo__System__Action) {
          pAVar8 = pAVar7;
        }
        if (pAVar8 == (Action *)0x0) goto code_?;
      }
      func_?();
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__UI__ColorBlock,&(pMVar2->fields).OnTeamsUpdated,
                        pMVar3,in_stack_9);
        func_?(&TypeInfo__Styles);
        cRam_? = '\x01';
      }
      in_stack_9 = _UNK_?;
      if (*(char *)(in_stack_10 + 0x14) != '\0') {
        if (*(int *)(in_stack_10 + 0x10) == 0) goto code_?;
        in_stack_9 = *(undefined4 *)(*(int *)(in_stack_10 + 0x10) + 0x3c);
        if ((TypeInfo__UnityEngine__UI__ColorBlock->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__UI__ColorBlock);
        }
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (pMVar2 = (pMVar1->fields).teamManager, pMVar2 != (MVTeamManager *)0x0)) {
        iVar11 = MVTeamManager::MVTeamManager_TeamCount(pMVar2,(MethodInfo *)0x0);
        if (iVar11 < 2) {
          button = *(Button **)(in_stack_10 + 0x10);
          if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Styles);
          }
          team = MVTeam__Enum_None;
        }
        else {
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar1 == (MVNetworkGame *)0x0) ||
             (pMVar12 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
             pMVar12 == (MVLocalPlayer *)0x0)) goto code_?;
          team = (pMVar12->fields)._._Team_k__BackingField;
          button = *(Button **)(in_stack_10 + 0x10);
          if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Styles);
          }
        }
        Styles::Styles_SetStyle_4
                  (button,ButtonStyle__Enum_RegularButton,team,SoundStyle__Enum_NoSound,
                   (MethodInfo *)0x0);
        if (*(char *)(in_stack_10 + 0x14) == '\0') {
          return;
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__UI__ColorBlock);
          cRam_? = '\x01';
        }
        if (*(int *)(in_stack_10 + 0x10) != 0) {
          auVar13 = *(undefined1 (*) [12])(*(int *)(in_stack_10 + 0x10) + 0x30);
          if ((TypeInfo__UnityEngine__UI__ColorBlock->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__UI__ColorBlock);
          }
          this_00 = *(Selectable **)(in_stack_10 + 0x10);
          if (this_00 != (Selectable *)0x0) {
            uVar14 = (this_00->fields).m_Colors.m_ColorMultiplier;
            uVar15 = (this_00->fields).m_Colors.m_FadeDuration;
            if (this_00 != (Selectable *)0x0) {
              value.m_NormalColor.a = (float)in_stack_9;
              value.m_NormalColor._0_12_ = auVar13;
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
              value.m_ColorMultiplier = (float)uVar14;
              value.m_FadeDuration = (float)uVar15;
              UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_colors
                        (this_00,value,(MethodInfo *)0x0);
              return;
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
  }
  func_?();
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


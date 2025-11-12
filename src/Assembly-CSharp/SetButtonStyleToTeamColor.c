
/* Void OnDestroy() */

void Assembly-CSharp.dll::SetButtonStyleToTeamColor::SetButtonStyleToTeamColor_OnDestroy
               (SetButtonStyleToTeamColor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SetButtonStyleToTeamColor__UpdateColor__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields).teamManager, pMVar3 != (MVTeamManager *)0x0)) {
    pMVar4 = (pMVar3->fields).OnTeamsUpdated;
    pNVar5 = (NavMesh_OnNavMeshPreUpdate *)
             FUN_?(TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar5,(Object *)this,MethodInfo__SetButtonStyleToTeamColor__UpdateColor__,
               (MethodInfo *)0x0);
    pMVar6 = (MVTeamManager_OnTeamsUpdatedDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pMVar4,(Delegate *)pNVar5,(MethodInfo *)0x0);
    pMVar4 = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
    if (pMVar6 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
      (pMVar3->fields).OnTeamsUpdated = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
    }
    else {
      pMVar7 = pMVar4;
      if (pMVar6->klass == TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
        pMVar7 = pMVar6;
      }
      if (pMVar7 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      (pMVar3->fields).OnTeamsUpdated = pMVar7;
      pMVar7 = pMVar4;
      if (pMVar6->klass == TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
        pMVar7 = pMVar6;
      }
      if (pMVar7 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar9 = (uint)((ulonglong)&(pMVar3->fields).OnTeamsUpdated >> 0xc);
      lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
      do {
        uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
        puVar12 = (ulonglong *)(lVar10 + 0xADDR);
        LOCK();
        bVar13 = uVar11 == *puVar12;
        if (bVar13) {
          *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar13);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       (pMVar14 = (pMVar2->fields).playerContainer, pMVar14 != (MVPlayerContainer *)0x0)) {
      source = (pMVar14->fields).OnPlayerListChanged;
      pNVar5 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar5,(Object *)this,MethodInfo__SetButtonStyleToTeamColor__UpdateColor__,
                 (MethodInfo *)0x0);
      pMVar6 = (MVTeamManager_OnTeamsUpdatedDelegate *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)source,(Delegate *)pNVar5,(MethodInfo *)0x0);
      if (pMVar6 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
        (pMVar14->fields).OnPlayerListChanged = (Action *)0x0;
      }
      else {
        pMVar7 = pMVar4;
        if (pMVar6->klass ==
            (MVTeamManager_OnTeamsUpdatedDelegate__Class *)TypeInfo__System__Action) {
          pMVar7 = pMVar6;
        }
        if (pMVar7 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
          FUN_?(pMVar6);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        (pMVar14->fields).OnPlayerListChanged = (Action *)pMVar7;
        if (pMVar6->klass ==
            (MVTeamManager_OnTeamsUpdatedDelegate__Class *)TypeInfo__System__Action) {
          pMVar4 = pMVar6;
        }
        if (pMVar4 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
          FUN_?(pMVar6);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar9 = (uint)((ulonglong)&(pMVar14->fields).OnPlayerListChanged >> 0xc);
        lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
        do {
          uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
          puVar12 = (ulonglong *)(lVar10 + 0xADDR);
          LOCK();
          bVar13 = uVar11 == *puVar12;
          if (bVar13) {
            *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar13);
      }
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ResetAlpha(Single) */

void Assembly-CSharp.dll::SetButtonStyleToTeamColor::SetButtonStyleToTeamColor_ResetAlpha
               (SetButtonStyleToTeamColor *this,float alpha,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__UI__ColorBlock);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).button;
  if (pBVar1 != (Button *)0x0) {
    CStack_2.m_HighlightedColor.r = (pBVar1->fields)._.m_Colors.m_HighlightedColor.r;
    CStack_2.m_HighlightedColor.g = (pBVar1->fields)._.m_Colors.m_HighlightedColor.g;
    CStack_2.m_HighlightedColor.b = (pBVar1->fields)._.m_Colors.m_HighlightedColor.b;
    CStack_2.m_HighlightedColor.a = (pBVar1->fields)._.m_Colors.m_HighlightedColor.a;
    CStack_2.m_PressedColor.r = (pBVar1->fields)._.m_Colors.m_PressedColor.r;
    CStack_2.m_PressedColor.g = (pBVar1->fields)._.m_Colors.m_PressedColor.g;
    CStack_2.m_PressedColor.b = (pBVar1->fields)._.m_Colors.m_PressedColor.b;
    CStack_2.m_PressedColor.a = (pBVar1->fields)._.m_Colors.m_PressedColor.a;
    uVar3._0_4_ = (pBVar1->fields)._.m_Colors.m_NormalColor.r;
    uVar3._4_4_ = (pBVar1->fields)._.m_Colors.m_NormalColor.g;
    fVar4 = (pBVar1->fields)._.m_Colors.m_NormalColor.b;
    CStack_2.m_SelectedColor.r = (pBVar1->fields)._.m_Colors.m_SelectedColor.r;
    CStack_2.m_SelectedColor.g = (pBVar1->fields)._.m_Colors.m_SelectedColor.g;
    CStack_2.m_SelectedColor.b = (pBVar1->fields)._.m_Colors.m_SelectedColor.b;
    CStack_2.m_SelectedColor.a = (pBVar1->fields)._.m_Colors.m_SelectedColor.a;
    CStack_2.m_DisabledColor.r = (pBVar1->fields)._.m_Colors.m_DisabledColor.r;
    CStack_2.m_DisabledColor.g = (pBVar1->fields)._.m_Colors.m_DisabledColor.g;
    CStack_2.m_DisabledColor.b = (pBVar1->fields)._.m_Colors.m_DisabledColor.b;
    CStack_2.m_DisabledColor.a = (pBVar1->fields)._.m_Colors.m_DisabledColor.a;
    CStack_2.m_ColorMultiplier = (pBVar1->fields)._.m_Colors.m_ColorMultiplier;
    CStack_2.m_FadeDuration = (pBVar1->fields)._.m_Colors.m_FadeDuration;
    if (*(int *)&(TypeInfo__UnityEngine__UI__ColorBlock->_1).field_0x1c == 0) {
      FUN_?();
    }
    pBVar1 = (this->fields).button;
    if (pBVar1 != (Button *)0x0) {
      CStack_2.m_HighlightedColor.r = (pBVar1->fields)._.m_Colors.m_HighlightedColor.r;
      CStack_2.m_HighlightedColor.g = (pBVar1->fields)._.m_Colors.m_HighlightedColor.g;
      CStack_2.m_HighlightedColor.b = (pBVar1->fields)._.m_Colors.m_HighlightedColor.b;
      CStack_2.m_HighlightedColor.a = (pBVar1->fields)._.m_Colors.m_HighlightedColor.a;
      CStack_2.m_PressedColor.r = (pBVar1->fields)._.m_Colors.m_PressedColor.r;
      CStack_2.m_PressedColor.g = (pBVar1->fields)._.m_Colors.m_PressedColor.g;
      CStack_2.m_PressedColor.b = (pBVar1->fields)._.m_Colors.m_PressedColor.b;
      CStack_2.m_PressedColor.a = (pBVar1->fields)._.m_Colors.m_PressedColor.a;
      CStack_2.m_SelectedColor.r = (pBVar1->fields)._.m_Colors.m_SelectedColor.r;
      CStack_2.m_SelectedColor.g = (pBVar1->fields)._.m_Colors.m_SelectedColor.g;
      CStack_2.m_SelectedColor.b = (pBVar1->fields)._.m_Colors.m_SelectedColor.b;
      CStack_2.m_SelectedColor.a = (pBVar1->fields)._.m_Colors.m_SelectedColor.a;
      CStack_2.m_DisabledColor.r = (pBVar1->fields)._.m_Colors.m_DisabledColor.r;
      CStack_2.m_DisabledColor.g = (pBVar1->fields)._.m_Colors.m_DisabledColor.g;
      CStack_2.m_DisabledColor.b = (pBVar1->fields)._.m_Colors.m_DisabledColor.b;
      CStack_2.m_DisabledColor.a = (pBVar1->fields)._.m_Colors.m_DisabledColor.a;
      CStack_2.m_ColorMultiplier = (pBVar1->fields)._.m_Colors.m_ColorMultiplier;
      CStack_2.m_FadeDuration = (pBVar1->fields)._.m_Colors.m_FadeDuration;
      CStack_2.m_NormalColor.a = alpha;
      CStack_2.m_NormalColor.b = fVar4;
      CStack_2.m_NormalColor._0_8_ = uVar3;
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_colors
                ((Selectable *)pBVar1,&CStack_2,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::SetButtonStyleToTeamColor::SetButtonStyleToTeamColor_Start
               (SetButtonStyleToTeamColor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    auStack_1._72_8_ = &UNK_?;
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    auStack_1._72_8_ = &UNK_?;
    FUN_?(&TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate);
    LOCK();
    UNLOCK();
    auStack_1._72_8_ = &UNK_?;
    FUN_?(&MethodInfo__SetButtonStyleToTeamColor__UpdateColor__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    auStack_1._72_8_ = &UNK_?;
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar2 == (MVGameControllerBase *)0x0) ||
      (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
     (pMVar4 = (pMVar3->fields).teamManager, pMVar4 == (MVTeamManager *)0x0)) {
code_?:
    auStack_1._72_8_ = &UNK_?;
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pMVar6 = (pMVar4->fields).OnTeamsUpdated;
  auStack_1._72_8_ = &UNK_?;
  pNVar7 = (NavMesh_OnNavMeshPreUpdate *)
            FUN_?(TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate);
  auStack_1._72_8_ = &UNK_?;
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar7,(Object *)this,MethodInfo__SetButtonStyleToTeamColor__UpdateColor__,
             (MethodInfo *)0x0);
  auStack_1._72_8_ = &UNK_?;
  pMVar8 = (MVTeamManager_OnTeamsUpdatedDelegate *)
            mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pMVar6,(Delegate *)pNVar7,(MethodInfo *)0x0);
  pMVar6 = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
  if (pMVar8 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
    (pMVar4->fields).OnTeamsUpdated = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
  }
  else {
    pMVar9 = pMVar6;
    if (pMVar8->klass == TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
      pMVar9 = pMVar8;
    }
    if (pMVar9 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
      auStack_1._72_8_ = &UNK_?;
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (pMVar4->fields).OnTeamsUpdated = pMVar9;
    pMVar9 = pMVar6;
    if (pMVar8->klass == TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
      pMVar9 = pMVar8;
    }
    if (pMVar9 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
      auStack_1._72_8_ = &UNK_?;
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar10 = (uint)((ulonglong)&(pMVar4->fields).OnTeamsUpdated >> 0xc);
    lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
    do {
      uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
      puVar13 = (ulonglong *)(lVar11 + 0xADDR);
      LOCK();
      bVar14 = uVar12 == *puVar13;
      if (bVar14) {
        *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
      }
      UNLOCK();
    } while (!bVar14);
  }
  if (cRam_? == '\0') {
    auStack_1._72_8_ = &UNK_?;
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar2 == (MVGameControllerBase *)0x0) ||
      (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
     (pMVar15 = (pMVar3->fields).playerContainer, pMVar15 == (MVPlayerContainer *)0x0))
  goto code_?;
  a = (pMVar15->fields).OnPlayerListChanged;
  auStack_1._72_8_ = &UNK_?;
  pNVar7 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  auStack_1._72_8_ = &UNK_?;
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar7,(Object *)this,MethodInfo__SetButtonStyleToTeamColor__UpdateColor__,
             (MethodInfo *)0x0);
  auStack_1._72_8_ = &UNK_?;
  pMVar8 = (MVTeamManager_OnTeamsUpdatedDelegate *)
            mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)a,(Delegate *)pNVar7,(MethodInfo *)0x0);
  if (pMVar8 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
    (pMVar15->fields).OnPlayerListChanged = (Action *)0x0;
  }
  else {
    pMVar9 = pMVar6;
    if (pMVar8->klass == (MVTeamManager_OnTeamsUpdatedDelegate__Class *)TypeInfo__System__Action) {
      pMVar9 = pMVar8;
    }
    if (pMVar9 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
      auStack_1._72_8_ = &UNK_?;
      FUN_?(pMVar8);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (pMVar15->fields).OnPlayerListChanged = (Action *)pMVar9;
    if (pMVar8->klass == (MVTeamManager_OnTeamsUpdatedDelegate__Class *)TypeInfo__System__Action) {
      pMVar6 = pMVar8;
    }
    if (pMVar6 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
      auStack_1._72_8_ = &UNK_?;
      FUN_?(pMVar8);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar10 = (uint)((ulonglong)&(pMVar15->fields).OnPlayerListChanged >> 0xc);
    lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
    do {
      uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
      puVar13 = (ulonglong *)(lVar11 + 0xADDR);
      LOCK();
      bVar14 = uVar12 == *puVar13;
      if (bVar14) {
        *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
      }
      UNLOCK();
    } while (!bVar14);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__UI__ColorBlock,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar16 = _UNK_?;
  if ((this->fields).shouldRetainAlpha != 0) {
    pBVar17 = (this->fields).button;
    if (pBVar17 == (Button *)0x0) goto code_?;
    auStack_1._16_4_ = (pBVar17->fields)._.m_Colors.m_HighlightedColor.r;
    auStack_1._20_4_ = (pBVar17->fields)._.m_Colors.m_HighlightedColor.g;
    auStack_1._24_4_ = (pBVar17->fields)._.m_Colors.m_HighlightedColor.b;
    auStack_1._28_4_ = (pBVar17->fields)._.m_Colors.m_HighlightedColor.a;
    auStack_1._32_4_ = (pBVar17->fields)._.m_Colors.m_PressedColor.r;
    auStack_1._36_4_ = (pBVar17->fields)._.m_Colors.m_PressedColor.g;
    auStack_1._40_4_ = (pBVar17->fields)._.m_Colors.m_PressedColor.b;
    auStack_1._44_4_ = (pBVar17->fields)._.m_Colors.m_PressedColor.a;
    fVar16 = (pBVar17->fields)._.m_Colors.m_NormalColor.a;
    auStack_1._48_4_ = (pBVar17->fields)._.m_Colors.m_SelectedColor.r;
    auStack_1._52_4_ = (pBVar17->fields)._.m_Colors.m_SelectedColor.g;
    auStack_1._56_4_ = (pBVar17->fields)._.m_Colors.m_SelectedColor.b;
    auStack_1._60_4_ = (pBVar17->fields)._.m_Colors.m_SelectedColor.a;
    auStack_1._64_4_ = (pBVar17->fields)._.m_Colors.m_DisabledColor.r;
    auStack_1._68_4_ = (pBVar17->fields)._.m_Colors.m_DisabledColor.g;
    auStack_1._72_8_ = *(undefined8 *)&(pBVar17->fields)._.m_Colors.m_DisabledColor.b;
    auStack_1._80_4_ = (pBVar17->fields)._.m_Colors.m_ColorMultiplier;
    auStack_1._84_4_ = (pBVar17->fields)._.m_Colors.m_FadeDuration;
    if (*(int *)&(TypeInfo__UnityEngine__UI__ColorBlock->_1).field_0x1c == 0) {
      FUN_?();
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar2 != (MVGameControllerBase *)0x0) &&
      (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
     (pMVar4 = (pMVar3->fields).teamManager, pMVar4 != (MVTeamManager *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar18 = (pMVar4->fields).teams;
    if (pDVar18 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
      if ((pDVar18->fields)._count - (pDVar18->fields)._freeCount < 2) {
        pBVar17 = (this->fields).button;
        if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
          FUN_?();
        }
        team = MVTeam__Enum_None;
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((((pMVar2 == (MVGameControllerBase *)0x0) ||
             (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
            (pMVar15 = (pMVar3->fields).playerContainer, pMVar15 == (MVPlayerContainer *)0x0)) ||
           (pMVar19 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar15,(MethodInfo *)0x0)
           , pMVar19 == (MVLocalPlayer *)0x0)) goto code_?;
        pBVar17 = (this->fields).button;
        team = (pMVar19->fields)._._Team_k__BackingField;
        if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
          FUN_?();
        }
      }
      Styles::Styles_SetStyle_4
                (pBVar17,ButtonStyle__Enum_RegularButton,team,SoundStyle__Enum_NoSound,
                 (MethodInfo *)0x0);
      if ((this->fields).shouldRetainAlpha == 0) {
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__UI__ColorBlock);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pBVar17 = (this->fields).button;
      if (pBVar17 != (Button *)0x0) {
        auStack_1._16_4_ = (pBVar17->fields)._.m_Colors.m_HighlightedColor.r;
        auStack_1._20_4_ = (pBVar17->fields)._.m_Colors.m_HighlightedColor.g;
        auStack_1._24_4_ = (pBVar17->fields)._.m_Colors.m_HighlightedColor.b;
        auStack_1._28_4_ = (pBVar17->fields)._.m_Colors.m_HighlightedColor.a;
        auStack_1._32_4_ = (pBVar17->fields)._.m_Colors.m_PressedColor.r;
        auStack_1._36_4_ = (pBVar17->fields)._.m_Colors.m_PressedColor.g;
        auStack_1._40_4_ = (pBVar17->fields)._.m_Colors.m_PressedColor.b;
        auStack_1._44_4_ = (pBVar17->fields)._.m_Colors.m_PressedColor.a;
        uVar20._0_4_ = (pBVar17->fields)._.m_Colors.m_NormalColor.r;
        uVar20._4_4_ = (pBVar17->fields)._.m_Colors.m_NormalColor.g;
        fVar21 = (pBVar17->fields)._.m_Colors.m_NormalColor.b;
        auStack_1._48_4_ = (pBVar17->fields)._.m_Colors.m_SelectedColor.r;
        auStack_1._52_4_ = (pBVar17->fields)._.m_Colors.m_SelectedColor.g;
        auStack_1._56_4_ = (pBVar17->fields)._.m_Colors.m_SelectedColor.b;
        auStack_1._60_4_ = (pBVar17->fields)._.m_Colors.m_SelectedColor.a;
        auStack_1._64_4_ = (pBVar17->fields)._.m_Colors.m_DisabledColor.r;
        auStack_1._68_4_ = (pBVar17->fields)._.m_Colors.m_DisabledColor.g;
        auStack_1._72_8_ = *(undefined8 *)&(pBVar17->fields)._.m_Colors.m_DisabledColor.b;
        auStack_1._80_4_ = (pBVar17->fields)._.m_Colors.m_ColorMultiplier;
        auStack_1._84_4_ = (pBVar17->fields)._.m_Colors.m_FadeDuration;
        if (*(int *)&(TypeInfo__UnityEngine__UI__ColorBlock->_1).field_0x1c == 0) {
          FUN_?();
        }
        pBVar17 = (this->fields).button;
        if (pBVar17 != (Button *)0x0) {
          auStack_1._16_4_ = (pBVar17->fields)._.m_Colors.m_HighlightedColor.r;
          auStack_1._20_4_ = (pBVar17->fields)._.m_Colors.m_HighlightedColor.g;
          auStack_1._24_4_ = (pBVar17->fields)._.m_Colors.m_HighlightedColor.b;
          auStack_1._28_4_ = (pBVar17->fields)._.m_Colors.m_HighlightedColor.a;
          auStack_1._32_4_ = (pBVar17->fields)._.m_Colors.m_PressedColor.r;
          auStack_1._36_4_ = (pBVar17->fields)._.m_Colors.m_PressedColor.g;
          auStack_1._40_4_ = (pBVar17->fields)._.m_Colors.m_PressedColor.b;
          auStack_1._44_4_ = (pBVar17->fields)._.m_Colors.m_PressedColor.a;
          auStack_1._48_4_ = (pBVar17->fields)._.m_Colors.m_SelectedColor.r;
          auStack_1._52_4_ = (pBVar17->fields)._.m_Colors.m_SelectedColor.g;
          auStack_1._56_4_ = (pBVar17->fields)._.m_Colors.m_SelectedColor.b;
          auStack_1._60_4_ = (pBVar17->fields)._.m_Colors.m_SelectedColor.a;
          auStack_1._64_4_ = (pBVar17->fields)._.m_Colors.m_DisabledColor.r;
          auStack_1._68_4_ = (pBVar17->fields)._.m_Colors.m_DisabledColor.g;
          auStack_1._72_4_ = (pBVar17->fields)._.m_Colors.m_DisabledColor.b;
          auStack_1._76_4_ = (pBVar17->fields)._.m_Colors.m_DisabledColor.a;
          auStack_1._80_4_ = (pBVar17->fields)._.m_Colors.m_ColorMultiplier;
          auStack_1._84_4_ = (pBVar17->fields)._.m_Colors.m_FadeDuration;
          auStack_1._12_4_ = fVar16;
          auStack_1._8_4_ = fVar21;
          auStack_1._0_8_ = uVar20;
          UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_colors
                    ((Selectable *)pBVar17,(ColorBlock *)auStack_1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateColor() */

void Assembly-CSharp.dll::SetButtonStyleToTeamColor::SetButtonStyleToTeamColor_UpdateColor
               (SetButtonStyleToTeamColor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__UI__ColorBlock);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  if ((this->fields).shouldRetainAlpha != 0) {
    pBVar2 = (this->fields).button;
    if (pBVar2 == (Button *)0x0) goto code_?;
    CStack_3.m_HighlightedColor.r = (pBVar2->fields)._.m_Colors.m_HighlightedColor.r;
    CStack_3.m_HighlightedColor.g = (pBVar2->fields)._.m_Colors.m_HighlightedColor.g;
    CStack_3.m_HighlightedColor.b = (pBVar2->fields)._.m_Colors.m_HighlightedColor.b;
    CStack_3.m_HighlightedColor.a = (pBVar2->fields)._.m_Colors.m_HighlightedColor.a;
    CStack_3.m_PressedColor.r = (pBVar2->fields)._.m_Colors.m_PressedColor.r;
    CStack_3.m_PressedColor.g = (pBVar2->fields)._.m_Colors.m_PressedColor.g;
    CStack_3.m_PressedColor.b = (pBVar2->fields)._.m_Colors.m_PressedColor.b;
    CStack_3.m_PressedColor.a = (pBVar2->fields)._.m_Colors.m_PressedColor.a;
    fVar1 = (pBVar2->fields)._.m_Colors.m_NormalColor.a;
    CStack_3.m_SelectedColor.r = (pBVar2->fields)._.m_Colors.m_SelectedColor.r;
    CStack_3.m_SelectedColor.g = (pBVar2->fields)._.m_Colors.m_SelectedColor.g;
    CStack_3.m_SelectedColor.b = (pBVar2->fields)._.m_Colors.m_SelectedColor.b;
    CStack_3.m_SelectedColor.a = (pBVar2->fields)._.m_Colors.m_SelectedColor.a;
    CStack_3.m_DisabledColor.r = (pBVar2->fields)._.m_Colors.m_DisabledColor.r;
    CStack_3.m_DisabledColor.g = (pBVar2->fields)._.m_Colors.m_DisabledColor.g;
    CStack_3.m_DisabledColor.b = (pBVar2->fields)._.m_Colors.m_DisabledColor.b;
    CStack_3.m_DisabledColor.a = (pBVar2->fields)._.m_Colors.m_DisabledColor.a;
    CStack_3.m_ColorMultiplier = (pBVar2->fields)._.m_Colors.m_ColorMultiplier;
    CStack_3.m_FadeDuration = (pBVar2->fields)._.m_Colors.m_FadeDuration;
    if (*(int *)&(TypeInfo__UnityEngine__UI__ColorBlock->_1).field_0x1c == 0) {
      FUN_?();
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar4 != (MVGameControllerBase *)0x0) &&
      (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) &&
     (pMVar6 = (pMVar5->fields).teamManager, pMVar6 != (MVTeamManager *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar7 = (pMVar6->fields).teams;
    if (pDVar7 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
      if ((pDVar7->fields)._count - (pDVar7->fields)._freeCount < 2) {
        pBVar2 = (this->fields).button;
        if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
          FUN_?();
        }
        team = MVTeam__Enum_None;
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar4 == (MVGameControllerBase *)0x0) ||
            (pMVar5 = (pMVar4->fields).game, pMVar5 == (MVNetworkGame *)0x0)) ||
           ((this_00 = (pMVar5->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0 ||
            (pMVar8 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                (this_00,(MethodInfo *)0x0), pMVar8 == (MVLocalPlayer *)0x0))))
        goto code_?;
        pBVar2 = (this->fields).button;
        team = (pMVar8->fields)._._Team_k__BackingField;
        if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
          FUN_?();
        }
      }
      Styles::Styles_SetStyle_4
                (pBVar2,ButtonStyle__Enum_RegularButton,team,SoundStyle__Enum_NoSound,
                 (MethodInfo *)0x0);
      if ((this->fields).shouldRetainAlpha == 0) {
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__UI__ColorBlock);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pBVar2 = (this->fields).button;
      if (pBVar2 != (Button *)0x0) {
        CStack_3.m_HighlightedColor.r = (pBVar2->fields)._.m_Colors.m_HighlightedColor.r;
        CStack_3.m_HighlightedColor.g = (pBVar2->fields)._.m_Colors.m_HighlightedColor.g;
        CStack_3.m_HighlightedColor.b = (pBVar2->fields)._.m_Colors.m_HighlightedColor.b;
        CStack_3.m_HighlightedColor.a = (pBVar2->fields)._.m_Colors.m_HighlightedColor.a;
        CStack_3.m_PressedColor.r = (pBVar2->fields)._.m_Colors.m_PressedColor.r;
        CStack_3.m_PressedColor.g = (pBVar2->fields)._.m_Colors.m_PressedColor.g;
        CStack_3.m_PressedColor.b = (pBVar2->fields)._.m_Colors.m_PressedColor.b;
        CStack_3.m_PressedColor.a = (pBVar2->fields)._.m_Colors.m_PressedColor.a;
        uVar9._0_4_ = (pBVar2->fields)._.m_Colors.m_NormalColor.r;
        uVar9._4_4_ = (pBVar2->fields)._.m_Colors.m_NormalColor.g;
        fVar10 = (pBVar2->fields)._.m_Colors.m_NormalColor.b;
        CStack_3.m_SelectedColor.r = (pBVar2->fields)._.m_Colors.m_SelectedColor.r;
        CStack_3.m_SelectedColor.g = (pBVar2->fields)._.m_Colors.m_SelectedColor.g;
        CStack_3.m_SelectedColor.b = (pBVar2->fields)._.m_Colors.m_SelectedColor.b;
        CStack_3.m_SelectedColor.a = (pBVar2->fields)._.m_Colors.m_SelectedColor.a;
        CStack_3.m_DisabledColor.r = (pBVar2->fields)._.m_Colors.m_DisabledColor.r;
        CStack_3.m_DisabledColor.g = (pBVar2->fields)._.m_Colors.m_DisabledColor.g;
        CStack_3.m_DisabledColor.b = (pBVar2->fields)._.m_Colors.m_DisabledColor.b;
        CStack_3.m_DisabledColor.a = (pBVar2->fields)._.m_Colors.m_DisabledColor.a;
        CStack_3.m_ColorMultiplier = (pBVar2->fields)._.m_Colors.m_ColorMultiplier;
        CStack_3.m_FadeDuration = (pBVar2->fields)._.m_Colors.m_FadeDuration;
        if (*(int *)&(TypeInfo__UnityEngine__UI__ColorBlock->_1).field_0x1c == 0) {
          FUN_?();
        }
        pBVar2 = (this->fields).button;
        if (pBVar2 != (Button *)0x0) {
          CStack_3.m_HighlightedColor.r = (pBVar2->fields)._.m_Colors.m_HighlightedColor.r;
          CStack_3.m_HighlightedColor.g = (pBVar2->fields)._.m_Colors.m_HighlightedColor.g;
          CStack_3.m_HighlightedColor.b = (pBVar2->fields)._.m_Colors.m_HighlightedColor.b;
          CStack_3.m_HighlightedColor.a = (pBVar2->fields)._.m_Colors.m_HighlightedColor.a;
          CStack_3.m_PressedColor.r = (pBVar2->fields)._.m_Colors.m_PressedColor.r;
          CStack_3.m_PressedColor.g = (pBVar2->fields)._.m_Colors.m_PressedColor.g;
          CStack_3.m_PressedColor.b = (pBVar2->fields)._.m_Colors.m_PressedColor.b;
          CStack_3.m_PressedColor.a = (pBVar2->fields)._.m_Colors.m_PressedColor.a;
          CStack_3.m_SelectedColor.r = (pBVar2->fields)._.m_Colors.m_SelectedColor.r;
          CStack_3.m_SelectedColor.g = (pBVar2->fields)._.m_Colors.m_SelectedColor.g;
          CStack_3.m_SelectedColor.b = (pBVar2->fields)._.m_Colors.m_SelectedColor.b;
          CStack_3.m_SelectedColor.a = (pBVar2->fields)._.m_Colors.m_SelectedColor.a;
          CStack_3.m_DisabledColor.r = (pBVar2->fields)._.m_Colors.m_DisabledColor.r;
          CStack_3.m_DisabledColor.g = (pBVar2->fields)._.m_Colors.m_DisabledColor.g;
          CStack_3.m_DisabledColor.b = (pBVar2->fields)._.m_Colors.m_DisabledColor.b;
          CStack_3.m_DisabledColor.a = (pBVar2->fields)._.m_Colors.m_DisabledColor.a;
          CStack_3.m_ColorMultiplier = (pBVar2->fields)._.m_Colors.m_ColorMultiplier;
          CStack_3.m_FadeDuration = (pBVar2->fields)._.m_Colors.m_FadeDuration;
          CStack_3.m_NormalColor.a = fVar1;
          CStack_3.m_NormalColor.b = fVar10;
          CStack_3.m_NormalColor._0_8_ = uVar9;
          UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_colors
                    ((Selectable *)pBVar2,&CStack_3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


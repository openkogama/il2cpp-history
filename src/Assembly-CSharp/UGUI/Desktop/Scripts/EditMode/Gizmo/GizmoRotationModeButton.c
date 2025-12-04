
/* Void Awake() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoRotationModeButton::
     GizmoRotationModeButton_Awake(GizmoRotationModeButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__UI__ColorBlock);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__UI__Button_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Button>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  Gamestrap__GradientEffect_MethodInfo__UnityEngine__Component__GetComponent<Gamestrap::GradientEffect>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (Button *)
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                      ((Component *)this,
                       UnityEngine__UI__Button_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Button>__
                      );
  bVar2 = iRam_? != 0;
  (this->fields).button = pBVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).button >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pGVar7 = (GradientEffect *)
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                      ((Component *)this,
                       Gamestrap__GradientEffect_MethodInfo__UnityEngine__Component__GetComponent<Gamestrap::GradientEffect>__
                      );
  bVar2 = iRam_? != 0;
  (this->fields).gradient = pGVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).gradient >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pTVar8 = (this->fields).text;
  if (pTVar8 != (Text *)0x0) {
    puVar9 = (undefined8 *)
              (*(pTVar8->klass->vtable).get_color.methodPtr)
                        (auStack_10,pTVar8,(pTVar8->klass->vtable).get_color.method);
    uVar11 = *puVar9;
    uVar12 = puVar9[1];
    pBVar1 = (this->fields).button;
    (this->fields).originalTextColor.r = (float)(int)uVar11;
    (this->fields).originalTextColor.g = (float)(int)((ulonglong)uVar11 >> 0x20);
    (this->fields).originalTextColor.b = (float)(int)uVar12;
    (this->fields).originalTextColor.a = (float)(int)((ulonglong)uVar12 >> 0x20);
    if (pBVar1 != (Button *)0x0) {
      uVar13 = (pBVar1->fields)._.m_Colors.m_ColorMultiplier;
      if (*(int *)&(TypeInfo__UnityEngine__UI__ColorBlock->_1).field_0x1c == 0) {
        FUN_?();
      }
      uVar12 = _UNK_?;
      uVar11 = _UNK_?;
      pBVar1 = (this->fields).button;
      uStack_14 = uVar13;
      if (pBVar1 != (Button *)0x0) {
        fVar15 = (pBVar1->fields)._.m_Colors.m_FadeDuration;
        fVar16 = (pBVar1->fields)._.m_Colors.m_PressedColor.r;
        fVar17 = (pBVar1->fields)._.m_Colors.m_PressedColor.g;
        fVar18 = (pBVar1->fields)._.m_Colors.m_PressedColor.b;
        fVar19 = (pBVar1->fields)._.m_Colors.m_PressedColor.a;
        fVar20 = (pBVar1->fields)._.m_Colors.m_DisabledColor.r;
        fVar21 = (pBVar1->fields)._.m_Colors.m_DisabledColor.g;
        fVar22 = (pBVar1->fields)._.m_Colors.m_DisabledColor.b;
        fVar23 = (pBVar1->fields)._.m_Colors.m_DisabledColor.a;
        fVar24 = (pBVar1->fields)._.m_Colors.m_NormalColor.g;
        fVar25 = (pBVar1->fields)._.m_Colors.m_NormalColor.b;
        fVar26 = (pBVar1->fields)._.m_Colors.m_NormalColor.a;
        fVar27 = (pBVar1->fields)._.m_Colors.m_HighlightedColor.r;
        fVar28 = (pBVar1->fields)._.m_Colors.m_HighlightedColor.g;
        fVar29 = (pBVar1->fields)._.m_Colors.m_HighlightedColor.b;
        fVar30 = (pBVar1->fields)._.m_Colors.m_HighlightedColor.a;
        fVar31 = (pBVar1->fields)._.m_Colors.m_SelectedColor.r;
        fVar32 = (pBVar1->fields)._.m_Colors.m_SelectedColor.g;
        fVar33 = (pBVar1->fields)._.m_Colors.m_SelectedColor.b;
        fVar34 = (pBVar1->fields)._.m_Colors.m_SelectedColor.a;
        (this->fields).originalColorBlock.m_NormalColor.r =
             (pBVar1->fields)._.m_Colors.m_NormalColor.r;
        (this->fields).originalColorBlock.m_NormalColor.g = fVar24;
        (this->fields).originalColorBlock.m_NormalColor.b = fVar25;
        (this->fields).originalColorBlock.m_NormalColor.a = fVar26;
        (this->fields).originalColorBlock.m_HighlightedColor.r = fVar27;
        (this->fields).originalColorBlock.m_HighlightedColor.g = fVar28;
        (this->fields).originalColorBlock.m_HighlightedColor.b = fVar29;
        (this->fields).originalColorBlock.m_HighlightedColor.a = fVar30;
        (this->fields).originalColorBlock.m_PressedColor.r = fVar16;
        (this->fields).originalColorBlock.m_PressedColor.g = fVar17;
        (this->fields).originalColorBlock.m_PressedColor.b = fVar18;
        (this->fields).originalColorBlock.m_PressedColor.a = fVar19;
        (this->fields).originalColorBlock.m_SelectedColor.r = fVar31;
        (this->fields).originalColorBlock.m_SelectedColor.g = fVar32;
        (this->fields).originalColorBlock.m_SelectedColor.b = fVar33;
        (this->fields).originalColorBlock.m_SelectedColor.a = fVar34;
        (this->fields).originalColorBlock.m_DisabledColor.r = fVar20;
        (this->fields).originalColorBlock.m_DisabledColor.g = fVar21;
        (this->fields).originalColorBlock.m_DisabledColor.b = fVar22;
        (this->fields).originalColorBlock.m_DisabledColor.a = fVar23;
        (this->fields).originalColorBlock.m_ColorMultiplier = (float)uVar13;
        uVar35 = _UNK_?;
        (this->fields).originalColorBlock.m_FadeDuration = fVar15;
        fVar15 = (this->fields).originalColorBlock.m_FadeDuration;
        fVar24 = (this->fields).originalColorBlock.m_DisabledColor.r;
        fVar25 = (this->fields).originalColorBlock.m_DisabledColor.g;
        fVar26 = (this->fields).originalColorBlock.m_DisabledColor.b;
        fVar27 = (this->fields).originalColorBlock.m_DisabledColor.a;
        _UNK_? = (undefined4)uVar11;
        _UNK_? = SUB84(uVar11,4);
        uVar36 = _UNK_?;
        (this->fields).selectedColorBlock.m_NormalColor.r = (float)_UNK_?;
        _UNK_? = uVar35;
        uVar35 = _UNK_?;
        (this->fields).selectedColorBlock.m_NormalColor.g = (float)uVar36;
        _UNK_? = (undefined4)uVar12;
        _UNK_? = SUB84(uVar12,4);
        uVar36 = _UNK_?;
        (this->fields).selectedColorBlock.m_NormalColor.b = (float)_UNK_?;
        _UNK_? = uVar35;
        uVar35 = _UNK_?;
        (this->fields).selectedColorBlock.m_NormalColor.a = (float)uVar36;
        _UNK_? = (undefined4)uVar11;
        _UNK_? = SUB84(uVar11,4);
        uVar36 = _UNK_?;
        (this->fields).selectedColorBlock.m_HighlightedColor.r = (float)_UNK_?;
        _UNK_? = uVar35;
        uVar35 = _UNK_?;
        (this->fields).selectedColorBlock.m_HighlightedColor.g = (float)uVar36;
        _UNK_? = (undefined4)uVar12;
        _UNK_? = SUB84(uVar12,4);
        uVar36 = _UNK_?;
        (this->fields).selectedColorBlock.m_HighlightedColor.b = (float)_UNK_?;
        _UNK_? = uVar35;
        uVar35 = _UNK_?;
        (this->fields).selectedColorBlock.m_HighlightedColor.a = (float)uVar36;
        _UNK_? = (undefined4)uVar11;
        _UNK_? = SUB84(uVar11,4);
        uVar36 = _UNK_?;
        (this->fields).selectedColorBlock.m_PressedColor.r = (float)_UNK_?;
        _UNK_? = uVar35;
        uVar35 = _UNK_?;
        (this->fields).selectedColorBlock.m_PressedColor.g = (float)uVar36;
        _UNK_? = (undefined4)uVar12;
        _UNK_? = SUB84(uVar12,4);
        uVar36 = _UNK_?;
        (this->fields).selectedColorBlock.m_PressedColor.b = (float)_UNK_?;
        _UNK_? = uVar35;
        uVar35 = _UNK_?;
        (this->fields).selectedColorBlock.m_PressedColor.a = (float)uVar36;
        _UNK_? = (undefined4)uVar11;
        _UNK_? = SUB84(uVar11,4);
        uVar36 = _UNK_?;
        (this->fields).selectedColorBlock.m_SelectedColor.r = (float)_UNK_?;
        _UNK_? = uVar35;
        uVar11 = _UNK_?;
        (this->fields).selectedColorBlock.m_SelectedColor.g = (float)uVar36;
        _UNK_? = (undefined4)uVar12;
        _UNK_? = SUB84(uVar12,4);
        uVar36 = _UNK_?;
        (this->fields).selectedColorBlock.m_SelectedColor.b = (float)_UNK_?;
        _UNK_? = uVar11;
        (this->fields).selectedColorBlock.m_SelectedColor.a = (float)uVar36;
        (this->fields).selectedColorBlock.m_DisabledColor.r = fVar24;
        (this->fields).selectedColorBlock.m_DisabledColor.g = fVar25;
        (this->fields).selectedColorBlock.m_DisabledColor.b = fVar26;
        (this->fields).selectedColorBlock.m_DisabledColor.a = fVar27;
        (this->fields).selectedColorBlock.m_ColorMultiplier = (float)uVar13;
        (this->fields).selectedColorBlock.m_FadeDuration = fVar15;
        return;
      }
    }
  }
  FUN_?();
  pcVar37 = (code *)swi(3);
  (*pcVar37)();
  return;
}


/* Void Highlight() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoRotationModeButton::
     GizmoRotationModeButton_Highlight(GizmoRotationModeButton *this,MethodInfo *method)

{
  this_00 = (this->fields).gradient;
  if (this_00 != (GradientEffect *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    pTVar1 = (this->fields).text;
    if (pTVar1 != (Text *)0x0) {
      fStack_2 = (this->fields).selectedTextColor.r;
      fStack_3 = (this->fields).selectedTextColor.g;
      fStack_4 = (this->fields).selectedTextColor.b;
      fStack_5 = (this->fields).selectedTextColor.a;
      (*(pTVar1->klass->vtable).set_color.methodPtr)(pTVar1,&fStack_2);
      this_01 = (this->fields).button;
      if (this_01 != (Button *)0x0) {
        CStack_6.m_NormalColor.r = (this->fields).selectedColorBlock.m_NormalColor.r;
        CStack_6.m_NormalColor.g = (this->fields).selectedColorBlock.m_NormalColor.g;
        CStack_6.m_NormalColor.b = (this->fields).selectedColorBlock.m_NormalColor.b;
        CStack_6.m_NormalColor.a = (this->fields).selectedColorBlock.m_NormalColor.a;
        CStack_6.m_HighlightedColor.r = (this->fields).selectedColorBlock.m_HighlightedColor.r;
        CStack_6.m_HighlightedColor.g = (this->fields).selectedColorBlock.m_HighlightedColor.g;
        CStack_6.m_HighlightedColor.b = (this->fields).selectedColorBlock.m_HighlightedColor.b;
        CStack_6.m_HighlightedColor.a = (this->fields).selectedColorBlock.m_HighlightedColor.a;
        CStack_6.m_PressedColor.r = (this->fields).selectedColorBlock.m_PressedColor.r;
        CStack_6.m_PressedColor.g = (this->fields).selectedColorBlock.m_PressedColor.g;
        CStack_6.m_PressedColor.b = (this->fields).selectedColorBlock.m_PressedColor.b;
        CStack_6.m_PressedColor.a = (this->fields).selectedColorBlock.m_PressedColor.a;
        CStack_6.m_SelectedColor.r = (this->fields).selectedColorBlock.m_SelectedColor.r;
        CStack_6.m_SelectedColor.g = (this->fields).selectedColorBlock.m_SelectedColor.g;
        CStack_6.m_SelectedColor.b = (this->fields).selectedColorBlock.m_SelectedColor.b;
        CStack_6.m_SelectedColor.a = (this->fields).selectedColorBlock.m_SelectedColor.a;
        CStack_6.m_DisabledColor.r = (this->fields).selectedColorBlock.m_DisabledColor.r;
        CStack_6.m_DisabledColor.g = (this->fields).selectedColorBlock.m_DisabledColor.g;
        CStack_6.m_DisabledColor.b = (this->fields).selectedColorBlock.m_DisabledColor.b;
        CStack_6.m_DisabledColor.a = (this->fields).selectedColorBlock.m_DisabledColor.a;
        CStack_6.m_ColorMultiplier = (this->fields).selectedColorBlock.m_ColorMultiplier;
        CStack_6.m_FadeDuration = (this->fields).selectedColorBlock.m_FadeDuration;
        UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_colors
                  ((Selectable *)this_01,&CStack_6,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ResetColors() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoRotationModeButton::
     GizmoRotationModeButton_ResetColors(GizmoRotationModeButton *this,MethodInfo *method)

{
  this_00 = (this->fields).gradient;
  if (this_00 != (GradientEffect *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    pTVar1 = (this->fields).text;
    if (pTVar1 != (Text *)0x0) {
      fStack_2 = (this->fields).originalTextColor.r;
      fStack_3 = (this->fields).originalTextColor.g;
      fStack_4 = (this->fields).originalTextColor.b;
      fStack_5 = (this->fields).originalTextColor.a;
      (*(pTVar1->klass->vtable).set_color.methodPtr)(pTVar1,&fStack_2);
      this_01 = (this->fields).button;
      if (this_01 != (Button *)0x0) {
        CStack_6.m_NormalColor.r = (this->fields).originalColorBlock.m_NormalColor.r;
        CStack_6.m_NormalColor.g = (this->fields).originalColorBlock.m_NormalColor.g;
        CStack_6.m_NormalColor.b = (this->fields).originalColorBlock.m_NormalColor.b;
        CStack_6.m_NormalColor.a = (this->fields).originalColorBlock.m_NormalColor.a;
        CStack_6.m_HighlightedColor.r = (this->fields).originalColorBlock.m_HighlightedColor.r;
        CStack_6.m_HighlightedColor.g = (this->fields).originalColorBlock.m_HighlightedColor.g;
        CStack_6.m_HighlightedColor.b = (this->fields).originalColorBlock.m_HighlightedColor.b;
        CStack_6.m_HighlightedColor.a = (this->fields).originalColorBlock.m_HighlightedColor.a;
        CStack_6.m_PressedColor.r = (this->fields).originalColorBlock.m_PressedColor.r;
        CStack_6.m_PressedColor.g = (this->fields).originalColorBlock.m_PressedColor.g;
        CStack_6.m_PressedColor.b = (this->fields).originalColorBlock.m_PressedColor.b;
        CStack_6.m_PressedColor.a = (this->fields).originalColorBlock.m_PressedColor.a;
        CStack_6.m_SelectedColor.r = (this->fields).originalColorBlock.m_SelectedColor.r;
        CStack_6.m_SelectedColor.g = (this->fields).originalColorBlock.m_SelectedColor.g;
        CStack_6.m_SelectedColor.b = (this->fields).originalColorBlock.m_SelectedColor.b;
        CStack_6.m_SelectedColor.a = (this->fields).originalColorBlock.m_SelectedColor.a;
        CStack_6.m_DisabledColor.r = (this->fields).originalColorBlock.m_DisabledColor.r;
        CStack_6.m_DisabledColor.g = (this->fields).originalColorBlock.m_DisabledColor.g;
        CStack_6.m_DisabledColor.b = (this->fields).originalColorBlock.m_DisabledColor.b;
        CStack_6.m_DisabledColor.a = (this->fields).originalColorBlock.m_DisabledColor.a;
        CStack_6.m_ColorMultiplier = (this->fields).originalColorBlock.m_ColorMultiplier;
        CStack_6.m_FadeDuration = (this->fields).originalColorBlock.m_FadeDuration;
        UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_colors
                  ((Selectable *)this_01,&CStack_6,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* GizmoRotationModeButton() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoRotationModeButton::
     GizmoRotationModeButton__ctor(GizmoRotationModeButton *this,MethodInfo *method)

{
  uVar1 = _UNK_?;
  bVar2 = cRam_? == '\0';
  uVar3 = _UNK_?;
  (this->fields).selectedTextColor.r = (float)_UNK_?;
  uVar4 = _UNK_?;
  (this->fields).selectedTextColor.g = (float)uVar3;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar3 = _UNK_?;
  (this->fields).selectedTextColor.b = (float)_UNK_?;
  _UNK_? = uVar4;
  (this->fields).selectedTextColor.a = (float)uVar3;
  if (bVar2) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar5 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar6 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar7 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar8 = ppMVar6;
  if (lVar7 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar7 = lRam_?;
  }
  else {
    do {
      uVar9 = (uint)ppMVar8;
      LOCK();
      bVar2 = uVar9 != uRam_?;
      uVar10 = uVar9;
      uVar11 = uVar9 + 1;
      if (bVar2) {
        uVar10 = uRam_?;
        uVar11 = uRam_?;
      }
      uRam_? = uVar11;
      UNLOCK();
    } while ((bVar2) && (ppMVar8 = (MethodInfo **)(ulonglong)uVar10, uVar9 = uVar10, uVar10 != 2)
            );
    while (uVar9 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar9 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar7;
  puVar12 = &(pOVar5->_1).field_0x1c;
  LOCK();
  bVar2 = *(int *)puVar12 == 1;
  if (bVar2) {
    *(undefined4 *)puVar12 = 1;
  }
  uVar9 = uRam_?;
  UNLOCK();
  if (bVar2) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar9 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar13 = &(pOVar5->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar2 = *puVar13 == 1;
  if (bVar2) {
    *puVar13 = 1;
  }
  uVar9 = uRam_?;
  UNLOCK();
  if (bVar2) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar9 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar9 = GetCurrentThreadId();
    psVar14 = &(pOVar5->_1).cctor_thread;
    LOCK();
    bVar2 = (ulonglong)uVar9 == *psVar14;
    if (bVar2) {
      *psVar14 = (ulonglong)uVar9;
    }
    UNLOCK();
    if (bVar2) {
      return;
    }
    while( true ) {
      puVar12 = &(pOVar5->_1).field_0x1c;
      LOCK();
      bVar2 = *(int *)puVar12 == 1;
      if (bVar2) {
        *(undefined4 *)puVar12 = 1;
      }
      UNLOCK();
      if (bVar2) break;
      LOCK();
      lVar7._0_4_ = (pOVar5->_1).initializationExceptionGCHandle;
      lVar7._4_4_ = (pOVar5->_1).cctor_started;
      if (lVar7 == 0) {
        (pOVar5->_1).initializationExceptionGCHandle = 0;
        (pOVar5->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar7 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar15._0_4_ = (pOVar5->_1).initializationExceptionGCHandle;
    lVar15._4_4_ = (pOVar5->_1).cctor_started;
    if (lVar15 == 0) {
      return;
    }
  }
  else {
    uVar9 = GetCurrentThreadId();
    LOCK();
    (pOVar5->_1).cctor_thread = (ulonglong)uVar9;
    UNLOCK();
    LOCK();
    (pOVar5->_1).cctor_finished_or_no_cctor = 1;
    uVar9 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar9 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar5->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar5);
      ppMVar8 = ppMVar6;
      pIVar16 = (Il2CppClass *)pOVar5;
code_?:
      do {
        if (ppMVar8 == (MethodInfo **)0x0) {
          FUN_?(pIVar16);
          if (pIVar16->field_count != 0) {
            ppMVar8 = pIVar16->methods;
            pMVar17 = *ppMVar8;
code_?:
            if (pMVar17 != (MethodInfo *)0x0) {
              if ((*pMVar17->name == '.') && ((pMVar17->flags & 0x800) != 0)) {
                ppMVar18 = ppMVar6;
                while (ppMVar19 = ppMVar18 + 0x30529dd4,
                      ppMVar18 = (MethodInfo **)((longlong)ppMVar18 + 1),
                      *(char *)ppMVar19 == (pMVar17->name + -1)[(longlong)ppMVar18]) {
                  if (ppMVar18 == (MethodInfo **)0x7) {
                    FUN_?(pMVar17,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar8 = ppMVar8 + 1;
          if (ppMVar8 < pIVar16->methods + pIVar16->field_count) {
            pMVar17 = *ppMVar8;
            goto code_?;
          }
        }
        pIVar16 = pIVar16->parent;
        ppMVar8 = ppMVar6;
      } while (pIVar16 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar5->_1).cctor_thread = 0;
    uVar20 = _UNK_?;
    uVar1 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar5->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_21 = 0;
    uStack_22 = _UNK_?;
    uStack_23 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar5->_0).byval_arg,0,0);
    pppppppuVar18 = &pppppppuStack_78;
    if (0xf < uStack_23) {
      pppppppuVar18 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar18);
    if (uStack_23 < 0x10) {
code_?:
      lVar7 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar18 = apppppppuStack_58;
      if (0xf < uStack_24) {
        pppppppuVar18 = apppppppuStack_58[0];
      }
      uStack_22 = uVar1;
      uStack_23 = uVar20;
      lVar15 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar18);
      if (lVar7 != 0) {
        *(longlong *)(lVar15 + 0x28U) = lVar7;
        if (iRam_? != 0) {
          uVar9 = (uint)(lVar15 + 0x28U >> 0xc);
          puVar25 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar26 = *puVar25;
            LOCK();
            uVar20 = *puVar25;
            if (uVar26 == uVar20) {
              *puVar25 = uVar26 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (uVar26 != uVar20);
        }
      }
      FUN_?(pOVar5,lVar15);
      if (0xf < uStack_24) {
        pppppppuVar18 = apppppppuStack_58[0];
        if ((0xfff < uStack_24 + 1) &&
           (pppppppuVar18 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar18))))
        goto code_?;
        func_?(pppppppuVar18);
      }
      goto code_?;
    }
    pppppppuVar18 = pppppppuStack_78;
    if ((uStack_23 + 1 < 0x1000) ||
       (pppppppuVar18 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar18)) < 0x20)) {
      func_?(pppppppuVar18);
      uVar1 = _UNK_?;
      uVar20 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar1._0_4_ = (pOVar5->_1).initializationExceptionGCHandle;
  uVar1._4_4_ = (pOVar5->_1).cctor_started;
  uVar1 = FUN_?(uVar1);
  FUN_?(uVar1,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}


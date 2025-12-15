
/* Void Awake() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoRotationModeButton::GizmoRotationModeButton_Awake(GizmoRotationModeButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__UI__ColorBlock);
    LOCK();
    UNLOCK();
    FUN_?(&UnityEngine__UI__Button_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Button>__);
    LOCK();
    UNLOCK();
    FUN_?(&Gamestrap__GradientEffect_MethodInfo__UnityEngine__Component__GetComponent<Gamestrap::GradientEffect>__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (Button *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1((Component *)this,UnityEngine__UI__Button_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Button>__);
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
  pGVar7 = (GradientEffect *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1((Component *)this,Gamestrap__GradientEffect_MethodInfo__UnityEngine__Component__GetComponent<Gamestrap::GradientEffect>__);
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
    puVar9 = (undefined8 *)(*(pTVar8->klass->vtable).get_color.methodPtr)(auStack_10,pTVar8,(pTVar8->klass->vtable).get_color.method);
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
        (this->fields).originalColorBlock.m_NormalColor.r = (pBVar1->fields)._.m_Colors.m_NormalColor.r;
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
        (this->fields).originalColorBlock.m_FadeDuration = fVar15;
        fVar15 = (this->fields).originalColorBlock.m_FadeDuration;
        fVar24 = (this->fields).originalColorBlock.m_DisabledColor.r;
        fVar25 = (this->fields).originalColorBlock.m_DisabledColor.g;
        fVar26 = (this->fields).originalColorBlock.m_DisabledColor.b;
        fVar27 = (this->fields).originalColorBlock.m_DisabledColor.a;
        (this->fields).selectedColorBlock.m_NormalColor.r = 0.0;
        (this->fields).selectedColorBlock.m_NormalColor.g = 1.0;
        (this->fields).selectedColorBlock.m_NormalColor.b = 0.0;
        (this->fields).selectedColorBlock.m_NormalColor.a = 1.0;
        (this->fields).selectedColorBlock.m_HighlightedColor.r = 0.0;
        (this->fields).selectedColorBlock.m_HighlightedColor.g = 1.0;
        (this->fields).selectedColorBlock.m_HighlightedColor.b = 0.0;
        (this->fields).selectedColorBlock.m_HighlightedColor.a = 1.0;
        (this->fields).selectedColorBlock.m_PressedColor.r = 0.0;
        (this->fields).selectedColorBlock.m_PressedColor.g = 1.0;
        (this->fields).selectedColorBlock.m_PressedColor.b = 0.0;
        (this->fields).selectedColorBlock.m_PressedColor.a = 1.0;
        (this->fields).selectedColorBlock.m_SelectedColor.r = 0.0;
        (this->fields).selectedColorBlock.m_SelectedColor.g = 1.0;
        (this->fields).selectedColorBlock.m_SelectedColor.b = 0.0;
        (this->fields).selectedColorBlock.m_SelectedColor.a = 1.0;
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
  pcVar35 = (code *)swi(3);
  (*pcVar35)();
  return;
}


/* Void Highlight() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoRotationModeButton::GizmoRotationModeButton_Highlight(GizmoRotationModeButton *this,MethodInfo *method)

{
  this_00 = (this->fields).gradient;
  if (this_00 != (GradientEffect *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)this_00,0,(MethodInfo *)0x0);
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
        UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_colors((Selectable *)this_01,&CStack_6,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoRotationModeButton::GizmoRotationModeButton_ResetColors(GizmoRotationModeButton *this,MethodInfo *method)

{
  this_00 = (this->fields).gradient;
  if (this_00 != (GradientEffect *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)this_00,1,(MethodInfo *)0x0);
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
        UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_colors((Selectable *)this_01,&CStack_6,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoRotationModeButton::GizmoRotationModeButton__ctor(GizmoRotationModeButton *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).selectedTextColor.r = 0.5;
  (this->fields).selectedTextColor.g = 0.5;
  (this->fields).selectedTextColor.b = 0.5;
  (this->fields).selectedTextColor.a = 1.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2));
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x3052a1b1, ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1), *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_17 = 0;
    uStack_18 = 0;
    uStack_19 = 0xf;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar17 = &pppppppuStack_78;
    if (0xf < uStack_19) {
      pppppppuVar17 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar17);
    if (uStack_19 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      uStack_18 = 0;
      uStack_19 = 0xf;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar17 = apppppppuStack_58;
      if (0xf < uStack_20) {
        pppppppuVar17 = apppppppuStack_58[0];
      }
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar17);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar21 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar22 = *puVar21;
            LOCK();
            uVar23 = *puVar21;
            if (uVar22 == uVar23) {
              *puVar21 = uVar22 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar22 != uVar23);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_20) {
        pppppppuVar17 = apppppppuStack_58[0];
        if ((0xfff < uStack_20 + 1) && (pppppppuVar17 = (undefined8 *******)apppppppuStack_58[0][-1], 0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar17)))) goto code_?;
        func_?(pppppppuVar17);
      }
      goto code_?;
    }
    pppppppuVar17 = pppppppuStack_78;
    if ((uStack_19 + 1 < 0x1000) || (pppppppuVar17 = (undefined8 *******)pppppppuStack_78[-1], (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar17)) < 0x20)) {
      func_?(pppppppuVar17);
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar24._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar24._4_4_ = (pOVar2->_1).cctor_started;
  uVar24 = FUN_?(uVar24);
  FUN_?(uVar24,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


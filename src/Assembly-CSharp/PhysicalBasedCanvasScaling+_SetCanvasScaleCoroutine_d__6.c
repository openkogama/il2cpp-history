
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::PhysicalBasedCanvasScaling+<SetCanvasScaleCoroutine>d__6::
     PhysicalBasedCanvasScaling_SetCanvasScaleCoroutine_d_6_MoveNext
               (PhysicalBasedCanvasScaling_SetCanvasScaleCoroutine_d_6 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PhysicalBasedCanvasScaling);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__WaitForSecondsRealtime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  iVar2 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar2 != 0) {
    if (iVar2 != 1) {
      if (iVar2 != 2) {
        return 0;
      }
      (this->fields).__1__state = -1;
      pAVar3 = TypeInfo__PhysicalBasedCanvasScaling->static_fields->OnScreenDimentionsChanged;
      if (pAVar3 != (Action *)0x0) {
        (*(pAVar3->fields)._._.invoke_impl)
                  ((pAVar3->fields)._._.method_code,(pAVar3->fields)._._.method);
      }
      goto code_?;
    }
    (this->fields).__1__state = -1;
    pcVar4 = pcRam_?;
    if ((pcVar1 == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(), pcVar4 = pcVar1, pcVar1 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar1 = (code *)swi(3);
      bVar6 = (*pcVar1)();
      return bVar6;
    }
    pcRam_? = pcVar4;
    fVar7 = (float)(*pcVar1)();
    if (fVar7 <= 0.0) {
      if (this_00 == (PhysicalBasedCanvasScaling *)0x0) goto code_?;
      fVar7 = (this_00->fields).baselineDPI;
    }
    else {
      fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_dpi((MethodInfo *)0x0);
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar1 = (code *)swi(3);
      bVar6 = (*pcVar1)();
      return bVar6;
    }
    pcRam_? = pcVar1;
    iVar2 = (*pcRam_?)();
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar1 = (code *)swi(3);
      bVar6 = (*pcVar1)();
      return bVar6;
    }
    pcRam_? = pcVar1;
    fVar8 = (float)iVar2;
    iVar2 = (*pcRam_?)();
    fVar9 = (float)iVar2;
    if (this_00 != (PhysicalBasedCanvasScaling *)0x0) {
      if (((fVar7 == (this_00->fields).storedDPI) && (fVar8 == (this_00->fields).storedScreen.x))
         && (fVar9 == (this_00->fields).storedScreen.y)) goto code_?;
      bVar10 = cRam_? == '\0';
      (this_00->fields).storedDPI = fVar7;
      (this_00->fields).storedScreen.x = fVar8;
      (this_00->fields).storedScreen.y = fVar9;
      if (bVar10) {
        FUN_?(&
                      UnityEngine__UI__CanvasScaler_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::CanvasScaler>__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__ScreenSizeOptimizer);
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
      fVar11 = _UNK_?;
      if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
        fVar11 = _UNK_?;
      }
      if (TypeInfo__ScreenSizeOptimizer->static_fields->IsInHalfResolution != 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
          fVar7 = fVar7 * _UNK_?;
        }
      }
      fVar12 = (fVar7 * fVar11) / (this_00->fields).baselineDPI;
      fVar13 = fVar11 * (this_00->fields).baseInchThresholds.y;
      fVar11 = fVar11 * (this_00->fields).baseInchThresholds.x;
      if ((fVar8 / fVar7 < fVar11) || (fVar9 / fVar7 < fVar13)) {
        fVar11 = (fVar8 / fVar7) / fVar11;
        fVar13 = (fVar9 / fVar7) / fVar13;
        if (fVar13 <= fVar11) {
          fVar11 = fVar13;
        }
        fVar12 = fVar12 * fVar11;
      }
      pOVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                         ((Component *)this_00,
                          UnityEngine__UI__CanvasScaler_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::CanvasScaler>__
                         );
      if (pOVar14 != (Object *)0x0) {
        fVar7 = _UNK_?;
        if (_UNK_? <= fVar12) {
          fVar7 = fVar12;
        }
        bVar10 = iRam_? != 0;
        *(float *)&pOVar14[2].monitor = fVar7;
        (this->fields).__2__current = (Object *)0x0;
        if (bVar10) {
          uVar15 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
          uVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6);
          do {
            uVar17 = *(ulonglong *)(uVar16 * 8 + 0xADDR);
            puVar18 = (ulonglong *)(uVar16 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar17 == *puVar18;
            if (bVar10) {
              *puVar18 = uVar17 | 1L << (uVar15 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        (this->fields).__1__state = 2;
        return 1;
      }
    }
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar6 = (*pcVar1)();
    return bVar6;
  }
  (this->fields).__1__state = -1;
code_?:
  pOVar14 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitForSecondsRealtime);
  bVar10 = iRam_? != 0;
  *(undefined4 *)((longlong)&pOVar14[1].klass + 4) = 0xbf800000;
  *(undefined4 *)&pOVar14[1].klass = 0x3e4ccccd;
  (this->fields).__2__current = pOVar14;
  if (bVar10) {
    uVar15 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
    uVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6);
    do {
      uVar17 = *(ulonglong *)(uVar16 * 8 + 0xADDR);
      puVar18 = (ulonglong *)(uVar16 * 8 + 0xADDR);
      LOCK();
      bVar10 = uVar17 == *puVar18;
      if (bVar10) {
        *puVar18 = uVar17 | 1L << (uVar15 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  (this->fields).__1__state = 1;
  return 1;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::PhysicalBasedCanvasScaling+<SetCanvasScaleCoroutine>d__6::
     PhysicalBasedCanvasScaling_SetCanvasScaleCoroutine_d_6_System_Collections_IEnumerator_Reset
               (PhysicalBasedCanvasScaling_SetCanvasScaleCoroutine_d_6 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__PhysicalBasedCanvasScaling___SetCanvasScaleCoroutine_d__6__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


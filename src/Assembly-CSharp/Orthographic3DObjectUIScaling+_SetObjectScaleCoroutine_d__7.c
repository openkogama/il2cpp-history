
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::Orthographic3DObjectUIScaling+<SetObjectScaleCoroutine>d__7::
     Orthographic3DObjectUIScaling_SetObjectScaleCoroutine_d_7_MoveNext
               (Orthographic3DObjectUIScaling_SetObjectScaleCoroutine_d_7 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  iVar2 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar2 == 0) {
    (this->fields).__1__state = -1;
  }
  else {
    if (iVar2 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
    pcVar3 = pcRam_?;
    if ((pcVar1 == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(), pcVar3 = pcVar1, pcVar1 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar1 = (code *)swi(3);
      bVar5 = (*pcVar1)();
      return bVar5;
    }
    pcRam_? = pcVar3;
    fVar6 = (float)(*pcVar1)();
    dpi = _UNK_?;
    if (0.0 < fVar6) {
      dpi = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_dpi((MethodInfo *)0x0);
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar1 = (code *)swi(3);
      bVar5 = (*pcVar1)();
      return bVar5;
    }
    pcRam_? = pcVar1;
    iVar2 = (*pcRam_?)();
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar1 = (code *)swi(3);
      bVar5 = (*pcVar1)();
      return bVar5;
    }
    pcRam_? = pcVar1;
    fVar7 = (float)iVar2;
    iVar2 = (*pcRam_?)();
    fVar6 = (float)iVar2;
    if (this_00 == (Orthographic3DObjectUIScaling *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      bVar5 = (*pcVar1)();
      return bVar5;
    }
    if (((dpi != (this_00->fields).storedDPI) || (fVar7 != (this_00->fields).storedScreen.x)) ||
       (fVar6 != (this_00->fields).storedScreen.y)) {
      (this_00->fields).storedScreen.y = fVar6;
      screen.y = fVar6;
      screen.x = fVar7;
      (this_00->fields).storedDPI = dpi;
      (this_00->fields).storedScreen.x = fVar7;
      Orthographic3DObjectUIScaling::Orthographic3DObjectUIScaling_SetObjectScale
                (this_00,dpi,screen,(MethodInfo *)0x0);
    }
  }
  pOVar8 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitForSecondsRealtime);
  bVar9 = iRam_? != 0;
  *(undefined4 *)((longlong)&pOVar8[1].klass + 4) = 0xbf800000;
  *(undefined4 *)&pOVar8[1].klass = 0x3f000000;
  (this->fields).__2__current = pOVar8;
  if (bVar9) {
    uVar10 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
    uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
    do {
      uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
      puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
      LOCK();
      bVar9 = uVar12 == *puVar13;
      if (bVar9) {
        *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  (this->fields).__1__state = 1;
  return 1;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::Orthographic3DObjectUIScaling+<SetObjectScaleCoroutine>d__7::
     Orthographic3DObjectUIScaling_SetObjectScaleCoroutine_d_7_System_Collections_IEnumerator_Reset
               (Orthographic3DObjectUIScaling_SetObjectScaleCoroutine_d_7 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__Orthographic3DObjectUIScaling___SetObjectScaleCoroutine_d__7__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


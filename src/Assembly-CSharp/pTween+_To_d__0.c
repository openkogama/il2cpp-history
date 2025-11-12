
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::pTween+<To>d__0::pTween_To_d_0_MoveNext
               (pTween_To_d_0 *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  iVar2 = (this->fields).__1__state;
  if (iVar2 == 0) {
    (this->fields).__1__state = -1;
    pcVar3 = pcRam_?;
    if ((pcVar1 == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar3 = pcVar1, pcVar1 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar1 = (code *)swi(3);
      bVar5 = (*pcVar1)();
      return bVar5;
    }
    pcRam_? = pcVar3;
    fVar6 = (float)(*pcVar1)();
    pcVar1 = pcRam_?;
    (this->fields)._durationInv_5__3 = _UNK_? / (this->fields).duration;
    (this->fields)._startMulDurationInv_5__4 = fVar6 / (this->fields).duration;
    (this->fields)._end_5__2 = fVar6 + (this->fields).duration;
    pcVar3 = pcRam_?;
    if ((pcVar1 == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar3 = pcVar1, pcVar1 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar1 = (code *)swi(3);
      bVar5 = (*pcVar1)();
      return bVar5;
    }
  }
  else {
    if (iVar2 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
    pcVar3 = pcRam_?;
    if ((pcVar1 == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar3 = pcVar1, pcVar1 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar1 = (code *)swi(3);
      bVar5 = (*pcVar1)();
      return bVar5;
    }
  }
  pcRam_? = pcVar3;
  fVar6 = (float)(*pcVar1)();
  pAVar7 = (this->fields).callback;
  if ((this->fields)._end_5__2 <= fVar6) {
    if (pAVar7 != (Action_1_Single_ *)0x0) {
      (*(pAVar7->fields)._._.invoke_impl)
                ((pAVar7->fields)._._.method_code,(this->fields).endValue,
                 (pAVar7->fields)._._.method);
      return 0;
    }
  }
  else {
    fVar8 = (this->fields).startValue;
    fVar6 = fVar6 * (this->fields)._durationInv_5__3 - (this->fields)._startMulDurationInv_5__4;
    if (fVar6 < 0.0) {
      fVar6 = 0.0;
    }
    else if (_UNK_? < fVar6) {
      fVar6 = _UNK_?;
    }
    if (pAVar7 != (Action_1_Single_ *)0x0) {
      (*(pAVar7->fields)._._.invoke_impl)
                ((pAVar7->fields)._._.method_code,((this->fields).endValue - fVar8) * fVar6 + fVar8
                 ,(pAVar7->fields)._._.method);
      lVar9 = lRam_?;
      pOVar10 = (Object *)0x0;
      uStackX_8 = 0;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar10 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar10 + 1,&uStackX_8,(longlong)*(int *)(lVar9 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar11 = (uint)((ulonglong)(pOVar10 + 1) >> 0xc);
            uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
            do {
              uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
              puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
              LOCK();
              bVar15 = uVar13 == *puVar14;
              if (bVar15) {
                *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
              }
              UNLOCK();
            } while (!bVar15);
          }
        }
      }
      else {
        pOVar10 = (Object *)((ulonglong)uStackX_c << 0x20);
      }
      bVar15 = iRam_? != 0;
      (this->fields).__2__current = pOVar10;
      if (bVar15) {
        uVar11 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
        do {
          uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
          puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
          LOCK();
          bVar15 = uVar13 == *puVar14;
          if (bVar15) {
            *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
          }
          UNLOCK();
        } while (!bVar15);
      }
      (this->fields).__1__state = 1;
      return 1;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar5 = (*pcVar1)();
  return bVar5;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::pTween+<To>d__0::pTween_To_d_0_System_Collections_IEnumerator_Reset
               (pTween_To_d_0 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&MethodInfo__pTween___To_d__0__System_Collections_IEnumerator_Reset__)
  ;
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


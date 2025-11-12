
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::GameMeterShake+<ShakeAnimation>d__5::
     GameMeterShake_ShakeAnimation_d_5_MoveNext
               (GameMeterShake_ShakeAnimation_d_5 *this,MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  pGVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields)._shakeTime_5__2 = 0.0;
  }
  else if (iVar1 != 1) {
    return 0;
  }
  fVar3 = _UNK_?;
  pfVar4 = &(this->fields)._shakeTime_5__2;
  bVar5 = _UNK_? != *pfVar4;
  bVar6 = *pfVar4 <= _UNK_?;
  (this->fields).__1__state = -1;
  if (bVar6 && bVar5) {
    fVar3 = MathFunctions::MathFunctions_SmoothInverseLerp
                       (0.0,fVar3,(this->fields)._shakeTime_5__2,(MethodInfo *)0x0);
    fVar3 = _UNK_? - fVar3;
    if (pGVar2 != (GameMeterShake *)0x0) {
      fVar7 = (pGVar2->fields).startPos.x;
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar8 = (code *)swi(3);
        bVar10 = (*pcVar8)();
        return bVar10;
      }
      pcRam_? = pcVar8;
      fVar11 = (float)(*pcRam_?)(_UNK_?,_UNK_?);
      fVar12 = (pGVar2->fields).startPos.y;
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar8 = (code *)swi(3);
        bVar10 = (*pcVar8)();
        return bVar10;
      }
      pcRam_? = pcVar8;
      fVar13 = (float)(*pcRam_?)(_UNK_?,_UNK_?);
      pRVar14 = (pGVar2->fields).rectTransform;
      if (pRVar14 != (RectTransform *)0x0) {
        value_00.y = fVar13 * fVar3 + fVar12;
        value_00.x = fVar11 * fVar3 + fVar7;
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
                  (pRVar14,value_00,(MethodInfo *)0x0);
        fVar3 = (this->fields)._shakeTime_5__2;
        pcVar8 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
          uVar9 = func_?(&UNK_?);
          FUN_?(uVar9,0);
          pcVar8 = (code *)swi(3);
          bVar10 = (*pcVar8)();
          return bVar10;
        }
        pcRam_? = pcVar8;
        fVar7 = (float)(*pcRam_?)();
        bVar5 = iRam_? != 0;
        (this->fields).__2__current = (Object *)0x0;
        (this->fields)._shakeTime_5__2 = fVar7 + fVar3;
        if (bVar5) {
          uVar15 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
          uVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6);
          do {
            uVar17 = *(ulonglong *)(uVar16 * 8 + 0xADDR);
            puVar18 = (ulonglong *)(uVar16 * 8 + 0xADDR);
            LOCK();
            bVar5 = uVar17 == *puVar18;
            if (bVar5) {
              *puVar18 = uVar17 | 1L << (uVar15 & 0x3f);
            }
            UNLOCK();
          } while (!bVar5);
        }
        (this->fields).__1__state = 1;
        return 1;
      }
    }
  }
  else if (pGVar2 != (GameMeterShake *)0x0) {
    pRVar14 = (pGVar2->fields).rectTransform;
    if (pRVar14 != (RectTransform *)0x0) {
      value.y = (pGVar2->fields).startPos.y;
      value.x = (pGVar2->fields).startPos.x;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
                (pRVar14,value,(MethodInfo *)0x0);
      bVar5 = iRam_? != 0;
      (pGVar2->fields).shakeCoroutine = (IEnumerator *)0x0;
      if (bVar5) {
        uVar15 = (uint)((ulonglong)&(pGVar2->fields).shakeCoroutine >> 0xc);
        uVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6);
        do {
          uVar17 = *(ulonglong *)(uVar16 * 8 + 0xADDR);
          puVar18 = (ulonglong *)(uVar16 * 8 + 0xADDR);
          LOCK();
          bVar5 = uVar17 == *puVar18;
          if (bVar5) {
            *puVar18 = uVar17 | 1L << (uVar15 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      return 0;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar10 = (*pcVar8)();
  return bVar10;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::GameMeterShake+<ShakeAnimation>d__5::
     GameMeterShake_ShakeAnimation_d_5_System_Collections_IEnumerator_Reset
               (GameMeterShake_ShakeAnimation_d_5 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__GameMeterShake___ShakeAnimation_d__5__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


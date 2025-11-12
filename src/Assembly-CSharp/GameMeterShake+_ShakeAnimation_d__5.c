
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::GameMeterShake+<ShakeAnimation>d__5::GameMeterShake_ShakeAnimation_d_5_MoveNext(GameMeterShake_ShakeAnimation_d_5 *this,MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  pGVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields)._shakeTime_5__2 = 0.0;
  }
  else if (iVar1 != 1) {
    return 0;
  }
  pfVar3 = &(this->fields)._shakeTime_5__2;
  (this->fields).__1__state = -1;
  if (*pfVar3 <= 0.5 && *pfVar3 != 0.5) {
    fVar4 = MathFunctions::MathFunctions_SmoothInverseLerp(0.0,0.5,(this->fields)._shakeTime_5__2,(MethodInfo *)0x0);
    if (pGVar2 != (GameMeterShake *)0x0) {
      fVar5 = (pGVar2->fields).startPos.x;
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar6 = (code *)swi(3);
        bVar8 = (*pcVar6)();
        return bVar8;
      }
      pcRam_? = pcVar6;
      fVar9 = (float)(*pcRam_?)(0xc1200000,0x41200000);
      fVar10 = (pGVar2->fields).startPos.y;
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar6 = (code *)swi(3);
        bVar8 = (*pcVar6)();
        return bVar8;
      }
      pcRam_? = pcVar6;
      fVar11 = (float)(*pcRam_?)(0xc1200000,0x41200000);
      pRVar12 = (pGVar2->fields).rectTransform;
      if (pRVar12 != (RectTransform *)0x0) {
        value_00.y = fVar11 * (1.0 - fVar4) + fVar10;
        value_00.x = fVar9 * (1.0 - fVar4) + fVar5;
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition(pRVar12,value_00,(MethodInfo *)0x0);
        fVar4 = (this->fields)._shakeTime_5__2;
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar6 = (code *)swi(3);
          bVar8 = (*pcVar6)();
          return bVar8;
        }
        pcRam_? = pcVar6;
        fVar5 = (float)(*pcRam_?)();
        bVar13 = iRam_? != 0;
        (this->fields).__2__current = (Object *)0x0;
        (this->fields)._shakeTime_5__2 = fVar5 + fVar4;
        if (bVar13) {
          uVar14 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
          uVar15 = (ulonglong)((uVar14 & 0x1fffff) >> 6);
          do {
            uVar16 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
            puVar17 = (ulonglong *)(uVar15 * 8 + 0xADDR);
            LOCK();
            bVar13 = uVar16 == *puVar17;
            if (bVar13) {
              *puVar17 = uVar16 | 1L << (uVar14 & 0x3f);
            }
            UNLOCK();
          } while (!bVar13);
        }
        (this->fields).__1__state = 1;
        return 1;
      }
    }
  }
  else if (pGVar2 != (GameMeterShake *)0x0) {
    pRVar12 = (pGVar2->fields).rectTransform;
    if (pRVar12 != (RectTransform *)0x0) {
      value.y = (pGVar2->fields).startPos.y;
      value.x = (pGVar2->fields).startPos.x;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition(pRVar12,value,(MethodInfo *)0x0);
      bVar13 = iRam_? != 0;
      (pGVar2->fields).shakeCoroutine = (IEnumerator *)0x0;
      if (bVar13) {
        uVar14 = (uint)((ulonglong)&(pGVar2->fields).shakeCoroutine >> 0xc);
        uVar15 = (ulonglong)((uVar14 & 0x1fffff) >> 6);
        do {
          uVar16 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
          puVar17 = (ulonglong *)(uVar15 * 8 + 0xADDR);
          LOCK();
          bVar13 = uVar16 == *puVar17;
          if (bVar13) {
            *puVar17 = uVar16 | 1L << (uVar14 & 0x3f);
          }
          UNLOCK();
        } while (!bVar13);
      }
      return 0;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar8 = (*pcVar6)();
  return bVar8;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::GameMeterShake+<ShakeAnimation>d__5::GameMeterShake_ShakeAnimation_d_5_System_Collections_IEnumerator_Reset(GameMeterShake_ShakeAnimation_d_5 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor(this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&MethodInfo__GameMeterShake___ShakeAnimation_d__5__System_Collections_IEnumerator_Reset__);
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


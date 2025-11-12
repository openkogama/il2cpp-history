
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::BundleTab+<LerpToSize>d__20::BundleTab_LerpToSize_d_20_MoveNext
               (BundleTab_LerpToSize_d_20 *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  iVar2 = (this->fields).__1__state;
  pBVar3 = (this->fields).__4__this;
  if (iVar2 == 0) {
    (this->fields).__1__state = -1;
    pcVar4 = pcRam_?;
    if ((pcVar1 == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar4 = pcVar1, pcVar1 == (code *)0x0))
    {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar1 = (code *)swi(3);
      bVar6 = (*pcVar1)();
      return bVar6;
    }
    pcRam_? = pcVar4;
    fVar7 = (float)(*pcVar1)();
    if (pBVar3 == (BundleTab *)0x0) goto code_?;
    pRVar8 = (pBVar3->fields).rectTransform;
    (pBVar3->fields).startTime = fVar7;
    if (pRVar8 == (RectTransform *)0x0) goto code_?;
    VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                RectTransform_get_anchoredPosition(pRVar8,(MethodInfo *)0x0);
    (this->fields)._pos_5__2.x = VStackX_8.x;
    (this->fields)._xPos_5__3 = (this->fields)._pos_5__2.x;
    (this->fields)._pos_5__2.y = VStackX_8.y;
  }
  else {
    if (iVar2 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
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
  fVar7 = (float)(*pcRam_?)();
  if (pBVar3 != (BundleTab *)0x0) {
    fVar9 = (this->fields)._xPos_5__3;
    fVar10 = (this->fields).size;
    if (fVar7 - (pBVar3->fields).startTime < (pBVar3->fields).lerpTime) {
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
      fVar7 = (float)(*pcRam_?)();
      fVar7 = (fVar7 - (pBVar3->fields).startTime) / (pBVar3->fields).lerpTime;
      if (fVar7 < 0.0) {
        fVar7 = 0.0;
      }
      else if (_UNK_? < fVar7) {
        fVar7 = _UNK_?;
      }
      (this->fields)._pos_5__2.x = (fVar10 - fVar9) * fVar7 + fVar9;
      pRVar8 = (pBVar3->fields).rectTransform;
      if (pRVar8 != (RectTransform *)0x0) {
        VVar11.y = (this->fields)._pos_5__2.y;
        VVar11.x = (this->fields)._pos_5__2.x;
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
                  (pRVar8,VVar11,(MethodInfo *)0x0);
        lVar12 = lRam_?;
        VVar13.x = 0.0;
        VVar13.y = 0.0;
        VStackX_8 = (Vector2)((ulonglong)VStackX_8 & 0xffffffff00000000);
        VVar11 = VStackX_8;
        if ((*(int *)(lRam_? + 0x28) < 0) &&
           ((*(longlong *)(lRam_? + 0x60) == 0 ||
            (VVar11 = VVar13, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
          VVar11 = (Vector2)FUN_?(lRam_?);
          FUN_?((Object *)((longlong)VVar11 + 0x10),&VStackX_8,
                        (longlong)*(int *)(lVar12 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar14 = (uint)((ulonglong)((longlong)VVar11 + 0x10U) >> 0xc);
            uVar15 = (ulonglong)((uVar14 & 0x1fffff) >> 6);
            do {
              uVar16 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
              puVar17 = (ulonglong *)(uVar15 * 8 + 0xADDR);
              LOCK();
              bVar18 = uVar16 == *puVar17;
              if (bVar18) {
                *puVar17 = uVar16 | 1L << (uVar14 & 0x3f);
              }
              UNLOCK();
            } while (!bVar18);
          }
        }
        bVar18 = iRam_? != 0;
        (this->fields).__2__current = (Object *)VVar11;
        if (bVar18) {
          uVar14 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
          uVar15 = (ulonglong)((uVar14 & 0x1fffff) >> 6);
          do {
            uVar16 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
            puVar17 = (ulonglong *)(uVar15 * 8 + 0xADDR);
            LOCK();
            bVar18 = uVar16 == *puVar17;
            if (bVar18) {
              *puVar17 = uVar16 | 1L << (uVar14 & 0x3f);
            }
            UNLOCK();
          } while (!bVar18);
        }
        (this->fields).__1__state = 1;
        return 1;
      }
    }
    else {
      (this->fields)._pos_5__2.x = (fVar10 - fVar9) + fVar9;
      pRVar8 = (pBVar3->fields).rectTransform;
      if (pRVar8 != (RectTransform *)0x0) {
        value.y = (this->fields)._pos_5__2.y;
        value.x = (this->fields)._pos_5__2.x;
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
                  (pRVar8,value,(MethodInfo *)0x0);
        return 0;
      }
    }
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar6 = (*pcVar1)();
  return bVar6;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::BundleTab+<LerpToSize>d__20::
     BundleTab_LerpToSize_d_20_System_Collections_IEnumerator_Reset
               (BundleTab_LerpToSize_d_20 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__BundleTab___LerpToSize_d__20__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


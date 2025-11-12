
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::GameMeterVisuals::SlideOnClick+<SlideTowardsPosition>d__14::
     SlideOnClick_SlideTowardsPosition_d_14_MoveNext
               (SlideOnClick_SlideTowardsPosition_d_14 *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  this_00 = (this->fields).__4__this;
  iVar2 = (this->fields).__1__state;
  fVar3 = 0.0;
  if (iVar2 == 0) {
    (this->fields).__1__state = -1;
    (this->fields)._i_5__2 = 0.0;
    fVar4 = 0.0;
    if (this_00 == (SlideOnClick *)0x0) {
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
code_?:
    pos_00.x = (this_00->fields).targetPos.x;
    pos_00.y = (this_00->fields).targetPos.y;
    if (fVar1 <= fVar4) {
      SlideOnClick::SlideOnClick_SetToPosition(this_00,pos_00,(MethodInfo *)0x0);
      (this->fields)._i_5__2 = 0.0;
code_?:
      fVar4 = (this_00->fields).waitBeforeMoveBack;
      pfVar7 = &(this->fields)._i_5__2;
      if (fVar4 < *pfVar7 || fVar4 == *pfVar7) {
code_?:
        if ((this_00->fields).holding == 0) {
code_?:
          (this->fields)._i_5__2 = fVar3;
          pos.x = (this_00->fields)._StartPos_k__BackingField.x;
          pos.y = (this_00->fields)._StartPos_k__BackingField.y;
          if (fVar1 <= fVar3) {
            SlideOnClick::SlideOnClick_SetToPosition(this_00,pos,(MethodInfo *)0x0);
            (this_00->fields).readyForSlide = 1;
            goto code_?;
          }
          from.x = (this_00->fields).targetPos.x;
          from.y = (this_00->fields).targetPos.y;
          SlideOnClick::SlideOnClick_LerpToPos
                    (this_00,from,pos,(this->fields)._i_5__2,(MethodInfo *)0x0);
          bVar8 = iRam_? != 0;
          (this->fields).__2__current = (Object *)0x0;
          if (bVar8) {
            uVar9 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
            uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
            do {
              uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
              puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
              LOCK();
              bVar8 = uVar11 == *puVar12;
              if (bVar8) {
                *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
              }
              UNLOCK();
            } while (!bVar8);
          }
          (this->fields).__1__state = 4;
        }
        else {
          bVar8 = iRam_? != 0;
          (this->fields).__2__current = (Object *)0x0;
          if (bVar8) {
            uVar9 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
            uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
            do {
              uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
              puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
              LOCK();
              bVar8 = uVar11 == *puVar12;
              if (bVar8) {
                *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
              }
              UNLOCK();
            } while (!bVar8);
          }
          (this->fields).__1__state = 3;
        }
      }
      else {
        bVar8 = iRam_? != 0;
        (this->fields).__2__current = (Object *)0x0;
        if (bVar8) {
          uVar9 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
          uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
          do {
            uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
            puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
            LOCK();
            bVar8 = uVar11 == *puVar12;
            if (bVar8) {
              *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (!bVar8);
        }
        (this->fields).__1__state = 2;
      }
    }
    else {
      from_00.x = (this_00->fields)._StartPos_k__BackingField.x;
      from_00.y = (this_00->fields)._StartPos_k__BackingField.y;
      SlideOnClick::SlideOnClick_LerpToPos
                (this_00,from_00,pos_00,(this->fields)._i_5__2,(MethodInfo *)0x0);
      bVar8 = iRam_? != 0;
      (this->fields).__2__current = (Object *)0x0;
      if (bVar8) {
        uVar9 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
        do {
          uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
          puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar11 == *puVar12;
          if (bVar8) {
            *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      (this->fields).__1__state = 1;
    }
    bVar6 = 1;
  }
  else {
    if (iVar2 == 1) {
      fVar4 = (this->fields)._i_5__2;
      (this->fields).__1__state = -1;
      fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      if (this_00 == (SlideOnClick *)0x0) goto code_?;
      fVar4 = fVar13 * (this_00->fields).lerpSpeed + fVar4;
      (this->fields)._i_5__2 = fVar4;
      goto code_?;
    }
    if (iVar2 == 2) {
      fVar4 = (this->fields)._i_5__2;
      (this->fields).__1__state = -1;
      fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      (this->fields)._i_5__2 = fVar13 + fVar4;
      if (this_00 == (SlideOnClick *)0x0) goto code_?;
      goto code_?;
    }
    if (iVar2 == 3) {
      (this->fields).__1__state = -1;
      if (this_00 == (SlideOnClick *)0x0) goto code_?;
      goto code_?;
    }
    if (iVar2 == 4) {
      fVar3 = (this->fields)._i_5__2;
      (this->fields).__1__state = -1;
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      if (this_00 == (SlideOnClick *)0x0) goto code_?;
      fVar3 = fVar4 * (this_00->fields).lerpSpeed + fVar3;
      goto code_?;
    }
code_?:
    bVar6 = 0;
  }
  return bVar6;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::GameMeterVisuals::SlideOnClick+<SlideTowardsPosition>d__14::
     SlideOnClick_SlideTowardsPosition_d_14_System_Collections_IEnumerator_Reset
               (SlideOnClick_SlideTowardsPosition_d_14 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__GameMeterVisuals__SlideOnClick___SlideTowardsPosition_d__14__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


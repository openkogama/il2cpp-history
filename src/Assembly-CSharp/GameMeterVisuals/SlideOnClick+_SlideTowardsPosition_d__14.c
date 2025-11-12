
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::GameMeterVisuals::SlideOnClick+<SlideTowardsPosition>d__14::SlideOnClick_SlideTowardsPosition_d_14_MoveNext(SlideOnClick_SlideTowardsPosition_d_14 *this,MethodInfo *method)

{
  this_00 = (this->fields).__4__this;
  iVar1 = (this->fields).__1__state;
  fVar2 = 0.0;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    (this->fields)._i_5__2 = 0.0;
    fVar3 = 0.0;
    if (this_00 == (SlideOnClick *)0x0) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
code_?:
    pos_00.x = (this_00->fields).targetPos.x;
    pos_00.y = (this_00->fields).targetPos.y;
    if (1.0 <= fVar3) {
      SlideOnClick::SlideOnClick_SetToPosition(this_00,pos_00,(MethodInfo *)0x0);
      (this->fields)._i_5__2 = 0.0;
code_?:
      fVar3 = (this_00->fields).waitBeforeMoveBack;
      pfVar6 = &(this->fields)._i_5__2;
      if (fVar3 < *pfVar6 || fVar3 == *pfVar6) {
code_?:
        if ((this_00->fields).holding == 0) {
code_?:
          (this->fields)._i_5__2 = fVar2;
          pos.x = (this_00->fields)._StartPos_k__BackingField.x;
          pos.y = (this_00->fields)._StartPos_k__BackingField.y;
          if (1.0 <= fVar2) {
            SlideOnClick::SlideOnClick_SetToPosition(this_00,pos,(MethodInfo *)0x0);
            (this_00->fields).readyForSlide = 1;
            goto code_?;
          }
          from.x = (this_00->fields).targetPos.x;
          from.y = (this_00->fields).targetPos.y;
          SlideOnClick::SlideOnClick_LerpToPos(this_00,from,pos,(this->fields)._i_5__2,(MethodInfo *)0x0);
          bVar7 = iRam_? != 0;
          (this->fields).__2__current = (Object *)0x0;
          if (bVar7) {
            uVar8 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
            uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
            do {
              uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
              puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
              LOCK();
              bVar7 = uVar10 == *puVar11;
              if (bVar7) {
                *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (!bVar7);
          }
          (this->fields).__1__state = 4;
        }
        else {
          bVar7 = iRam_? != 0;
          (this->fields).__2__current = (Object *)0x0;
          if (bVar7) {
            uVar8 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
            uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
            do {
              uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
              puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
              LOCK();
              bVar7 = uVar10 == *puVar11;
              if (bVar7) {
                *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (!bVar7);
          }
          (this->fields).__1__state = 3;
        }
      }
      else {
        bVar7 = iRam_? != 0;
        (this->fields).__2__current = (Object *)0x0;
        if (bVar7) {
          uVar8 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
          uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
          do {
            uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
            puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
            LOCK();
            bVar7 = uVar10 == *puVar11;
            if (bVar7) {
              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
        (this->fields).__1__state = 2;
      }
    }
    else {
      from_00.x = (this_00->fields)._StartPos_k__BackingField.x;
      from_00.y = (this_00->fields)._StartPos_k__BackingField.y;
      SlideOnClick::SlideOnClick_LerpToPos(this_00,from_00,pos_00,(this->fields)._i_5__2,(MethodInfo *)0x0);
      bVar7 = iRam_? != 0;
      (this->fields).__2__current = (Object *)0x0;
      if (bVar7) {
        uVar8 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar7 = uVar10 == *puVar11;
          if (bVar7) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      (this->fields).__1__state = 1;
    }
    bVar5 = 1;
  }
  else {
    if (iVar1 == 1) {
      fVar3 = (this->fields)._i_5__2;
      (this->fields).__1__state = -1;
      fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
      if (this_00 == (SlideOnClick *)0x0) goto code_?;
      fVar3 = fVar12 * (this_00->fields).lerpSpeed + fVar3;
      (this->fields)._i_5__2 = fVar3;
      goto code_?;
    }
    if (iVar1 == 2) {
      fVar3 = (this->fields)._i_5__2;
      (this->fields).__1__state = -1;
      fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
      (this->fields)._i_5__2 = fVar12 + fVar3;
      if (this_00 == (SlideOnClick *)0x0) goto code_?;
      goto code_?;
    }
    if (iVar1 == 3) {
      (this->fields).__1__state = -1;
      if (this_00 == (SlideOnClick *)0x0) goto code_?;
      goto code_?;
    }
    if (iVar1 == 4) {
      fVar2 = (this->fields)._i_5__2;
      (this->fields).__1__state = -1;
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
      if (this_00 == (SlideOnClick *)0x0) goto code_?;
      fVar2 = fVar3 * (this_00->fields).lerpSpeed + fVar2;
      goto code_?;
    }
code_?:
    bVar5 = 0;
  }
  return bVar5;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::GameMeterVisuals::SlideOnClick+<SlideTowardsPosition>d__14::SlideOnClick_SlideTowardsPosition_d_14_System_Collections_IEnumerator_Reset(SlideOnClick_SlideTowardsPosition_d_14 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor(this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&MethodInfo__GameMeterVisuals__SlideOnClick___SlideTowardsPosition_d__14__System_Collections_IEnumerator_Reset__);
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


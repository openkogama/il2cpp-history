
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::GameMeterVisuals::SlideOnClick+<SlideTowardsPosition>d__14::
     SlideOnClick_SlideTowardsPosition_d_14_MoveNext
               (SlideOnClick_SlideTowardsPosition_d_14 *this,MethodInfo *method)

{
  this_00 = (this->fields).__4__this;
  fVar1 = 0.0;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    (this->fields)._i_5__2 = 0.0;
    if (this_00 == (SlideOnClick *)0x0) {
code_?:
      bVar2 = this_00 == (SlideOnClick *)0x0;
      bVar3 = 0;
      uVar4 = func_?();
      fVar1 = (float)uVar4;
      if (!bVar2) {
        pbVar5 = (byte *)((int)((ulonglong)uVar4 >> 0x20) + -0x6fefb39d);
        bVar6 = *pbVar5;
        bVar7 = *pbVar5 + (byte)extraout_ECX;
        *pbVar5 = bVar7 + bVar3;
        bVar8 = (byte)((uint)extraout_ECX >> 8);
        *(char *)&this->klass =
             *(char *)&this->klass + (char)((ulonglong)uVar4 >> 8) +
             (CARRY1((byte)uVar4,bVar8) ||
             CARRY1((byte)uVar4 + bVar8,CARRY1(bVar6,(byte)extraout_ECX) || CARRY1(bVar7,bVar3)))
        ;
        pcVar9 = (code *)swi(3);
        bVar10 = (*pcVar9)();
        return bVar10;
      }
      piVar11 = (int *)(unaff_EBX + 0x5c604c4);
      iVar12 = *piVar11;
      *piVar11 = *piVar11 + 1;
      pvVar13 = extraout_ECX;
      pvVar14 = (void *)*piVar11;
      if (SCARRY4(iVar12,1) != *piVar11 < 0) {
        pvVar13 = (this_00->fields)._._._._._.m_CachedPtr;
        fVar1 = (this_00->fields).targetPos.x;
        pvVar14 = pvVar13;
      }
      if (pvVar14 != (void *)0x0) {
        if (pvVar13 == (void *)0x1) {
          (this_00->fields)._._._._._.m_CachedPtr = (void *)0xffffffff;
          if (fVar1 == 0.0) {
            func_?();
            pcVar9 = (code *)swi(3);
            bVar10 = (*pcVar9)();
            return bVar10;
          }
          *(undefined4 *)((int)fVar1 + 0x34) = 0;
          *(undefined4 *)((int)fVar1 + 0x38) = 0;
          *(undefined4 *)((int)fVar1 + 0x3c) = 0;
          *(undefined4 *)((int)fVar1 + 0x40) = 0;
          *(undefined4 *)((int)fVar1 + 0x44) = 0;
        }
        return 0;
      }
      (this_00->fields)._._._._._.m_CachedPtr = (void *)0xffffffff;
      this_01 = (CancellationTokenSource *)
                func_?(TypeInfo__UnityEngine__WaitForSeconds,0x8b570111);
      SubscribableVariable`1[System::Single]::SubscribableVariable_1_System_Single___ctor
                ((SubscribableVariable_1_System_Single_ *)this_01,3.0,(MethodInfo *)0x0);
      (this_00->fields)._._.m_CancellationTokenSource = this_01;
      func_?(&(this_00->fields)._._.m_CancellationTokenSource,this_01);
      (this_00->fields)._._._._._.m_CachedPtr = (void *)0x1;
      return 1;
    }
    break;
  case 1:
    fVar1 = (this->fields)._i_5__2;
    (this->fields).__1__state = -1;
    fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if (this_00 == (SlideOnClick *)0x0) goto code_?;
    fVar1 = fVar15 * (this_00->fields).lerpSpeed + fVar1;
    (this->fields)._i_5__2 = fVar1;
    break;
  case 2:
    fVar1 = (this->fields)._i_5__2;
    (this->fields).__1__state = -1;
    fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields)._i_5__2 = fVar15 + fVar1;
    if (this_00 == (SlideOnClick *)0x0) goto code_?;
    goto code_?;
  case 3:
    (this->fields).__1__state = -1;
    if (this_00 == (SlideOnClick *)0x0) goto code_?;
    goto code_?;
  case 4:
    fVar1 = (this->fields)._i_5__2;
    (this->fields).__1__state = -1;
    fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if (this_00 == (SlideOnClick *)0x0) goto code_?;
    fVar1 = fVar15 * (this_00->fields).lerpSpeed + fVar1;
    goto code_?;
  default:
    goto code_?;
  }
  if (fVar1 < _UNK_?) {
    from.x = (this_00->fields)._StartPos_k__BackingField.x;
    from.y = (this_00->fields)._StartPos_k__BackingField.y;
    to.x = (this_00->fields).targetPos.x;
    to.y = (this_00->fields).targetPos.y;
    SlideOnClick::SlideOnClick_LerpToPos(this_00,from,to,(this->fields)._i_5__2,(MethodInfo *)0x0);
    (this->fields).__2__current = (Object *)0x0;
    func_?(&(this->fields).__2__current,0);
    (this->fields).__1__state = 1;
    return 1;
  }
  pos.x = (this_00->fields).targetPos.x;
  pos.y = (this_00->fields).targetPos.y;
  SlideOnClick::SlideOnClick_SetToPosition(this_00,pos,(MethodInfo *)0x0);
  (this->fields)._i_5__2 = 0.0;
code_?:
  fVar1 = (this_00->fields).waitBeforeMoveBack;
  pfVar16 = &(this->fields)._i_5__2;
  if (*pfVar16 <= fVar1 && fVar1 != *pfVar16) {
    (this->fields).__2__current = (Object *)0x0;
    func_?(&(this->fields).__2__current,0);
    (this->fields).__1__state = 2;
    return 1;
  }
code_?:
  fVar1 = 0.0;
  if ((this_00->fields).holding != 0) {
    (this->fields).__2__current = (Object *)0x0;
    func_?(&(this->fields).__2__current,0);
    (this->fields).__1__state = 3;
    return 1;
  }
code_?:
  (this->fields)._i_5__2 = fVar1;
  pfVar16 = &(this->fields)._i_5__2;
  if (*pfVar16 <= _UNK_? && _UNK_? != *pfVar16) {
    from_00.x = (this_00->fields).targetPos.x;
    from_00.y = (this_00->fields).targetPos.y;
    to_00.x = (this_00->fields)._StartPos_k__BackingField.x;
    to_00.y = (this_00->fields)._StartPos_k__BackingField.y;
    SlideOnClick::SlideOnClick_LerpToPos
              (this_00,from_00,to_00,(this->fields)._i_5__2,(MethodInfo *)0x0);
    (this->fields).__2__current = (Object *)0x0;
    func_?(&(this->fields).__2__current,0);
    (this->fields).__1__state = 4;
    return 1;
  }
  pos_00.x = (this_00->fields)._StartPos_k__BackingField.x;
  pos_00.y = (this_00->fields)._StartPos_k__BackingField.y;
  SlideOnClick::SlideOnClick_SetToPosition(this_00,pos_00,(MethodInfo *)0x0);
  (this_00->fields).readyForSlide = 1;
code_?:
  return 0;
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
  func_?(&
                  MethodInfo__GameMeterVisuals__SlideOnClick___SlideTowardsPosition_d__14__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


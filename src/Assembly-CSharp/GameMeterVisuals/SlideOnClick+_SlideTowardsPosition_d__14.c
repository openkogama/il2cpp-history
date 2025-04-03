
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
      bVar2 = 0;
      uVar3 = func_?();
      out(this->klass,(short)((uint6)uVar3 >> 0x20));
      bVar4 = (char)unaff_EBX - 1;
      bVar5 = CARRY1(in_stack_6,bVar4) || CARRY1(in_stack_6 + bVar4,bVar2);
      bVar2 = (char)unaff_EBX - 2;
      pbVar7 = (byte *)((int)uVar3 + 0x4b + (int)&this->monitor * 2);
      bVar4 = *pbVar7 + bVar2;
      bVar8 = CARRY1(*pbVar7,bVar2) || CARRY1(bVar4,bVar5);
      *pbVar7 = bVar4 + bVar5;
      pbVar7 = (byte *)(unaff_EBX + -0xfefb492);
      bVar9 = (byte)((uint6)uVar3 >> 0x28);
      bVar4 = *pbVar7;
      bVar2 = *pbVar7 + bVar9;
      uVar10 = CARRY1(*pbVar7,bVar9) || CARRY1(bVar2,bVar8);
      *pbVar7 = bVar2 + bVar8;
      if (SCARRY1(bVar4,bVar9) == SCARRY1(bVar2,bVar8)) {
        pcVar11 = (code *)swi(3);
        bVar12 = (*pcVar11)();
        return bVar12;
      }
      pcVar11 = (code *)swi(4);
      fVar1 = (float)(*pcVar11)();
      piVar13 = (int *)(unaff_EBX + 0x5c604c2);
      iVar14 = *piVar13;
      *piVar13 = *piVar13 + 1;
      iVar15 = *piVar13;
      pvVar16 = (void *)*piVar13;
      bVar4 = *(byte *)((int)extraout_ECX + 0x570111bb);
      *(byte *)((int)extraout_ECX + 0x570111bb) = bVar4 << 2 | (byte)(CONCAT11(uVar10,bVar4) >> 7)
      ;
      pvVar17 = extraout_ECX;
      if (SCARRY4(iVar14,1) != iVar15 < 0) {
        pvVar17 = (this_00->fields)._._._._._.m_CachedPtr;
        fVar1 = (this_00->fields).targetPos.x;
        pvVar16 = pvVar17;
      }
      if (pvVar16 != (void *)0x0) {
        if (pvVar17 == (void *)0x1) {
          (this_00->fields)._._._._._.m_CachedPtr = (void *)0xffffffff;
          if (fVar1 == 0.0) {
            func_?();
            pcVar11 = (code *)swi(3);
            bVar12 = (*pcVar11)();
            return bVar12;
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
      this_01 = (CancellationTokenSource *)func_?();
      SubscribableVariable`1[System::Single]::SubscribableVariable_1_System_Single___ctor
                ((SubscribableVariable_1_System_Single_ *)this_01,3.0,(MethodInfo *)0x0);
      (this_00->fields)._._.m_CancellationTokenSource = this_01;
      func_?();
      (this_00->fields)._._._._._.m_CachedPtr = (void *)0x1;
      return 1;
    }
    break;
  case 1:
    fVar1 = (this->fields)._i_5__2;
    (this->fields).__1__state = -1;
    fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if (this_00 == (SlideOnClick *)0x0) goto code_?;
    fVar1 = fVar18 * (this_00->fields).lerpSpeed + fVar1;
    (this->fields)._i_5__2 = fVar1;
    break;
  case 2:
    fVar1 = (this->fields)._i_5__2;
    (this->fields).__1__state = -1;
    fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields)._i_5__2 = fVar18 + fVar1;
    if (this_00 == (SlideOnClick *)0x0) goto code_?;
    goto code_?;
  case 3:
    (this->fields).__1__state = -1;
    if (this_00 == (SlideOnClick *)0x0) goto code_?;
    goto code_?;
  case 4:
    fVar1 = (this->fields)._i_5__2;
    (this->fields).__1__state = -1;
    fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if (this_00 == (SlideOnClick *)0x0) goto code_?;
    fVar1 = fVar18 * (this_00->fields).lerpSpeed + fVar1;
    goto code_?;
  default:
    goto code_?;
  }
  if (fVar1 < _UNK_?) {
    from.x = (this_00->fields)._StartPos_k__BackingField.x;
    from.y = (this_00->fields)._StartPos_k__BackingField.y;
    to.x = (this_00->fields).targetPos.x;
    to.y = (this_00->fields).targetPos.y;
    SlideOnClick::SlideOnClick_LerpToPos(this_00,from,to,fVar1,(MethodInfo *)0x0);
    ppOVar19 = &(this->fields).__2__current;
    *ppOVar19 = (Object *)0x0;
    func_?(ppOVar19,0);
    (this->fields).__1__state = 1;
    return 1;
  }
  pos.x = (this_00->fields).targetPos.x;
  pos.y = (this_00->fields).targetPos.y;
  SlideOnClick::SlideOnClick_SetToPosition(this_00,pos,(MethodInfo *)0x0);
  (this->fields)._i_5__2 = 0.0;
code_?:
  fVar1 = (this_00->fields).waitBeforeMoveBack;
  pfVar20 = &(this->fields)._i_5__2;
  if (*pfVar20 <= fVar1 && fVar1 != *pfVar20) {
    ppOVar19 = &(this->fields).__2__current;
    *ppOVar19 = (Object *)0x0;
    func_?(ppOVar19,0);
    (this->fields).__1__state = 2;
    return 1;
  }
code_?:
  fVar1 = 0.0;
  if ((this_00->fields).holding != 0) {
    ppOVar19 = &(this->fields).__2__current;
    *ppOVar19 = (Object *)0x0;
    func_?(ppOVar19,0);
    (this->fields).__1__state = 3;
    return 1;
  }
code_?:
  (this->fields)._i_5__2 = fVar1;
  if (fVar1 < _UNK_?) {
    from_00.x = (this_00->fields).targetPos.x;
    from_00.y = (this_00->fields).targetPos.y;
    to_00.x = (this_00->fields)._StartPos_k__BackingField.x;
    to_00.y = (this_00->fields)._StartPos_k__BackingField.y;
    SlideOnClick::SlideOnClick_LerpToPos(this_00,from_00,to_00,fVar1,(MethodInfo *)0x0);
    ppOVar19 = &(this->fields).__2__current;
    *ppOVar19 = (Object *)0x0;
    func_?(ppOVar19,0);
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


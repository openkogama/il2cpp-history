
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
      uVar2 = func_?();
      pbVar3 = (byte *)((int)((ulonglong)uVar2 >> 0x20) + -99);
      bVar4 = *pbVar3;
      bVar5 = (byte)((uint)(extraout_ECX + -1) >> 8);
      *pbVar3 = *pbVar3 + bVar5;
      pbVar3 = (byte *)((uint)uVar2 - 0x62);
      bVar6 = *pbVar3;
      bVar7 = (byte)((ulonglong)uVar2 >> 0x28);
      bVar8 = *pbVar3 + bVar7;
      *pbVar3 = bVar8 + CARRY1(bVar4,bVar5);
      *(char *)&this->klass =
           *(char *)&this->klass +
           (char)uVar2 + (char)(extraout_ECX + -1) + -2 +
           (CARRY1(bVar6,bVar7) || CARRY1(bVar8,CARRY1(bVar4,bVar5))) +
           (((uint)uVar2 >> 8 & 1) != 0);
      pcVar9 = (code *)swi(3);
      bVar10 = (*pcVar9)();
      return bVar10;
    }
    break;
  case 1:
    fVar1 = (this->fields)._i_5__2;
    (this->fields).__1__state = -1;
    fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if (this_00 == (SlideOnClick *)0x0) goto code_?;
    fVar1 = fVar11 * (this_00->fields).lerpSpeed + fVar1;
    (this->fields)._i_5__2 = fVar1;
    break;
  case 2:
    fVar1 = (this->fields)._i_5__2;
    (this->fields).__1__state = -1;
    fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields)._i_5__2 = fVar11 + fVar1;
    if (this_00 == (SlideOnClick *)0x0) goto code_?;
    goto code_?;
  case 3:
    (this->fields).__1__state = -1;
    if (this_00 == (SlideOnClick *)0x0) goto code_?;
    goto code_?;
  case 4:
    fVar1 = (this->fields)._i_5__2;
    (this->fields).__1__state = -1;
    fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if (this_00 == (SlideOnClick *)0x0) goto code_?;
    fVar1 = fVar11 * (this_00->fields).lerpSpeed + fVar1;
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
  pfVar12 = &(this->fields)._i_5__2;
  if (*pfVar12 <= fVar1 && fVar1 != *pfVar12) {
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
  pfVar12 = &(this->fields)._i_5__2;
  if (*pfVar12 <= _UNK_? && _UNK_? != *pfVar12) {
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


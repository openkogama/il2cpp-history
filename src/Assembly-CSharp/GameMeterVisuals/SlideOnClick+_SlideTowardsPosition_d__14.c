
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::GameMeterVisuals::SlideOnClick+<SlideTowardsPosition>d__14::
     SlideOnClick_SlideTowardsPosition_d_14_MoveNext
               (SlideOnClick_SlideTowardsPosition_d_14 *this,MethodInfo *method)

{
  this_00 = (this->fields).__4__this;
  fVar1 = 0.0;
  puVar2 = in_stack_3;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    (this->fields)._i_5__2 = 0.0;
    if (this_00 == (SlideOnClick *)0x0) {
code_?:
      method_00 = (MethodInfo *)&UNK_?;
      iVar4 = func_?();
      if ((POPCOUNT(*(byte *)(unaff_FS_OFFSET + unaff_EBX + 0x10) & extraout_CL) & 1U) != 0) {
        *(char *)(iVar4 + -0x27efb47b) = *(char *)(iVar4 + -0x27efb47b) + (char)iVar4;
        LOCK();
        *(byte *)(unaff_EBX + 0xf) = extraout_CL;
        UNLOCK();
        pcVar5 = (code *)swi(3);
        bVar6 = (*pcVar5)();
        return bVar6;
      }
      goto code_?;
    }
    break;
  case 1:
    fStack_7 = (this->fields)._i_5__2;
    in_stack_8 = 0.0;
    (this->fields).__1__state = -1;
    puVar2 = &UNK_?;
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if (this_00 == (SlideOnClick *)0x0) goto code_?;
    fVar1 = fVar1 * (this_00->fields).lerpSpeed + fStack_7;
    (this->fields)._i_5__2 = fVar1;
    break;
  case 2:
    fVar1 = (this->fields)._i_5__2;
    in_stack_8 = 0.0;
    (this->fields).__1__state = -1;
    puVar2 = &UNK_?;
    fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields)._i_5__2 = fVar9 + fVar1;
    if (this_00 == (SlideOnClick *)0x0) goto code_?;
    goto code_?;
  case 3:
    (this->fields).__1__state = -1;
    if (this_00 == (SlideOnClick *)0x0) goto code_?;
    goto code_?;
  case 4:
    fStack_7 = (this->fields)._i_5__2;
    in_stack_8 = 0.0;
    (this->fields).__1__state = -1;
    puVar2 = &UNK_?;
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if (this_00 == (SlideOnClick *)0x0) goto code_?;
    fVar1 = fVar1 * (this_00->fields).lerpSpeed + fStack_7;
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
  pfVar10 = &(this->fields)._i_5__2;
  if (*pfVar10 <= fVar1 && fVar1 != *pfVar10) {
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
  pfVar10 = &(this->fields)._i_5__2;
  method_00 = (MethodInfo *)0x0;
  if (_UNK_? < *pfVar10 || _UNK_? == *pfVar10) {
    pos_00.x = (this_00->fields)._StartPos_k__BackingField.x;
    pos_00.y = (this_00->fields)._StartPos_k__BackingField.y;
    SlideOnClick::SlideOnClick_SetToPosition(this_00,pos_00,(MethodInfo *)0x0);
    (this_00->fields).readyForSlide = 1;
code_?:
    return 0;
  }
  uVar11 = (this_00->fields).targetPos.x;
  uVar12 = (this_00->fields).targetPos.y;
  fStack_7 = (float)uVar12;
  uVar13 = (this_00->fields)._StartPos_k__BackingField.x;
  puVar2 = (undefined *)(this_00->fields)._StartPos_k__BackingField.y;
  fStack_14 = (float)uVar13;
  in_stack_8 = (this->fields)._i_5__2;
  fStack_15 = (float)uVar11;
code_?:
  from_00.y = fStack_7;
  from_00.x = fStack_15;
  to_00.y = (float)puVar2;
  to_00.x = fStack_14;
  SlideOnClick::SlideOnClick_LerpToPos(this_00,from_00,to_00,in_stack_8,method_00);
  (this->fields).__2__current = (Object *)0x0;
  func_?(&(this->fields).__2__current,0);
  (this->fields).__1__state = 4;
  return 1;
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


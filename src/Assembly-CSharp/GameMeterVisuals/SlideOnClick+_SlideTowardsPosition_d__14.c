
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::GameMeterVisuals::SlideOnClick+<SlideTowardsPosition>d__14::
     SlideOnClick_SlideTowardsPosition_d_14_MoveNext
               (SlideOnClick_SlideTowardsPosition_d_14 *this,MethodInfo *method)

{
  puVar1 = &stack0xfffffffc;
  this_00 = (this->fields).__4__this;
  fVar2 = 0.0;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    (this->fields)._i_5__2 = 0.0;
    if (this_00 == (SlideOnClick *)0x0) {
code_?:
      cVar3 = '\0';
      cVar4 = (int)this_00 < 0;
      bVar5 = 0;
      uVar6 = func_?();
      puVar7 = (undefined1 *)((ulonglong)uVar6 >> 0x20);
      uVar8 = (uint)uVar6;
      if (cVar3 == cVar4) {
        pbVar9 = puVar7 + 0x7c;
        bVar10 = (byte)((uint)unaff_EBX >> 8);
        bVar11 = *pbVar9 + bVar10;
        bVar12 = CARRY1(*pbVar9,bVar10) || CARRY1(bVar11,bVar5);
        *pbVar9 = bVar11 + bVar5;
        pbVar9 = (byte *)(uVar8 + 0xd8104b7d);
        bVar13 = (byte)uVar6;
        bVar11 = *pbVar9;
        bVar10 = *pbVar9 + bVar13;
        bVar14 = CARRY1(*pbVar9,bVar13) || CARRY1(bVar10,bVar12);
        *pbVar9 = bVar10 + bVar12;
        bVar5 = *pbVar9;
        if ((SCARRY1(bVar11,bVar13) != SCARRY1(bVar10,bVar12)) != (char)*pbVar9 < '\0') {
          bVar5 = *(byte *)&this->klass;
          bVar10 = (byte)((ulonglong)uVar6 >> 0x20);
          cVar4 = *(char *)&this->klass;
          bVar11 = *(char *)&this->klass + bVar10;
          *(byte *)&this->klass = bVar11 + bVar14;
          if (*(char *)&this->klass != '\0' &&
              (SCARRY1(cVar4,bVar10) != SCARRY1(bVar11,bVar14)) == *(char *)&this->klass < '\0') {
            pcVar15 = (code *)swi(3);
            bVar16 = (*pcVar15)();
            return bVar16;
          }
          uVar17 = (uint)(CARRY1(bVar5,bVar10) || CARRY1(bVar11,bVar14));
          puVar1 = &stack0xfffffffc + uVar8;
          bVar5 = CARRY4(uVar8,(uint)&stack0xfffffffc) || CARRY4((uint)puVar1,uVar17);
          uVar6 = CONCAT44(puVar7,puVar1 + uVar17);
          piVar18 = (int *)CONCAT22((short)((uint)extraout_ECX >> 0x10),
                                    CONCAT11(*puVar7,(char)extraout_ECX));
          pcVar15 = (code *)swi(4);
          if (SCARRY4(uVar8,(int)&stack0xfffffffc) != SCARRY4((int)puVar1,uVar17)) {
            uVar6 = (*pcVar15)();
            piVar18 = extraout_ECX_00;
          }
          *(int *)(unaff_EBX + 0x5c604c3) = *(int *)(unaff_EBX + 0x5c604c3) + 1;
          out(*(undefined1 *)((int)&this[-1].fields._i_5__2 + 3),(short)((ulonglong)uVar6 >> 0x20))
          ;
          *(undefined1 *)((int)&this_00->klass + 1) = *(undefined1 *)&this->klass;
          *piVar18 = (int)uVar6 + (uint)bVar5 + *piVar18;
          puVar1 = &stack0xfffffffc;
          this = (SlideOnClick_SlideTowardsPosition_d_14 *)((int)&this->klass + 1);
          goto code_?;
        }
      }
      else {
        puVar1 = &stack0xffffffd3;
        bVar5 = bRam_?;
      }
      if (bVar5 == 0) {
        func_?();
        bRam_? = 1;
      }
code_?:
      iVar19 = *(int *)(puVar1 + 8);
      iVar20 = *(int *)(iVar19 + 0x10);
      if (*(int *)(iVar19 + 8) == 0) {
        *(undefined4 *)(iVar19 + 8) = 0xffffffff;
        this_01 = (SubscribableVariable_1_System_Single_ *)
                  func_?(TypeInfo__UnityEngine__WaitForSeconds,this);
        SubscribableVariable`1[System::Single]::SubscribableVariable_1_System_Single___ctor
                  (this_01,3.0,(MethodInfo *)0x0);
        *(SubscribableVariable_1_System_Single_ **)(iVar19 + 0xc) = this_01;
        func_?(iVar19 + 0xc,this_01);
        *(undefined4 *)(iVar19 + 8) = 1;
        return 1;
      }
      if (*(int *)(iVar19 + 8) == 1) {
        *(undefined4 *)(iVar19 + 8) = 0xffffffff;
        if (iVar20 == 0) {
          func_?();
          pcVar15 = (code *)swi(3);
          bVar16 = (*pcVar15)();
          return bVar16;
        }
        *(undefined4 *)(iVar20 + 0x34) = 0;
        *(undefined4 *)(iVar20 + 0x38) = 0;
        *(undefined4 *)(iVar20 + 0x3c) = 0;
        *(undefined4 *)(iVar20 + 0x40) = 0;
        *(undefined4 *)(iVar20 + 0x44) = 0;
      }
      return 0;
    }
    break;
  case 1:
    fVar2 = (this->fields)._i_5__2;
    (this->fields).__1__state = -1;
    fVar21 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if (this_00 == (SlideOnClick *)0x0) goto code_?;
    fVar2 = fVar21 * (this_00->fields).lerpSpeed + fVar2;
    (this->fields)._i_5__2 = fVar2;
    break;
  case 2:
    fVar2 = (this->fields)._i_5__2;
    (this->fields).__1__state = -1;
    fVar21 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields)._i_5__2 = fVar21 + fVar2;
    if (this_00 == (SlideOnClick *)0x0) goto code_?;
    goto code_?;
  case 3:
    (this->fields).__1__state = -1;
    if (this_00 == (SlideOnClick *)0x0) goto code_?;
    goto code_?;
  case 4:
    fVar2 = (this->fields)._i_5__2;
    (this->fields).__1__state = -1;
    fVar21 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if (this_00 == (SlideOnClick *)0x0) goto code_?;
    fVar2 = fVar21 * (this_00->fields).lerpSpeed + fVar2;
    goto code_?;
  default:
    goto code_?;
  }
  if (fVar2 < _UNK_?) {
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
  fVar2 = (this_00->fields).waitBeforeMoveBack;
  pfVar22 = &(this->fields)._i_5__2;
  if (*pfVar22 <= fVar2 && fVar2 != *pfVar22) {
    (this->fields).__2__current = (Object *)0x0;
    func_?(&(this->fields).__2__current);
    (this->fields).__1__state = 2;
    return 1;
  }
code_?:
  fVar2 = 0.0;
  if ((this_00->fields).holding != 0) {
    (this->fields).__2__current = (Object *)0x0;
    func_?(&(this->fields).__2__current);
    (this->fields).__1__state = 3;
    return 1;
  }
code_?:
  (this->fields)._i_5__2 = fVar2;
  pfVar22 = &(this->fields)._i_5__2;
  if (*pfVar22 <= _UNK_? && _UNK_? != *pfVar22) {
    from_00.x = (this_00->fields).targetPos.x;
    from_00.y = (this_00->fields).targetPos.y;
    to_00.x = (this_00->fields)._StartPos_k__BackingField.x;
    to_00.y = (this_00->fields)._StartPos_k__BackingField.y;
    SlideOnClick::SlideOnClick_LerpToPos
              (this_00,from_00,to_00,(this->fields)._i_5__2,(MethodInfo *)0x0);
    (this->fields).__2__current = (Object *)0x0;
    func_?(&(this->fields).__2__current);
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


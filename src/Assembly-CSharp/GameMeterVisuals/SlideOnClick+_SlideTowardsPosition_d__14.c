
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::GameMeterVisuals::SlideOnClick+<SlideTowardsPosition>d__14::
     SlideOnClick_SlideTowardsPosition_d_14_MoveNext
               (SlideOnClick_SlideTowardsPosition_d_14 *this,MethodInfo *method)

{
  pSVar1 = this;
  pSVar2 = (this->fields).__4__this;
  fVar3 = 0.0;
  pSVar4 = this;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    (this->fields)._i_5__2 = 0.0;
    if (pSVar2 == (SlideOnClick *)0x0) {
code_?:
      this = pSVar4;
      bVar5 = 0;
      puVar6 = (undefined1 *)func_?();
      *(char *)&pSVar2->klass = (char)&stack0xffffffd8;
      pbVar7 = (byte *)CONCAT31((int3)((uint)&stack0xffffffd8 >> 8),0xdf);
      bVar8 = *pbVar7;
      bVar9 = *pbVar7 + (byte)extraout_ECX;
      *pbVar7 = bVar9 + bVar5;
      if (extraout_ECX == 1 || *pbVar7 == 0) {
        ppSVar10 = &pSVar1[-2].fields.__4__this;
        *(char *)ppSVar10 =
             *(char *)ppSVar10 + -0x21 + (CARRY1(bVar8,(byte)extraout_ECX) || CARRY1(bVar9,bVar5));
        pcVar11 = (code *)swi(3);
        bVar12 = (*pcVar11)();
        return bVar12;
      }
      if (*pbVar7 == 0) {
        *(WaitForSeconds__Class ***)(puVar6 + -4) = &TypeInfo__UnityEngine__WaitForSeconds;
        puVar13 = puVar6 + -8;
        *(undefined **)(puVar6 + -8) = &UNK_?;
        func_?();
        puVar6 = puVar13 + 4;
        uRam_? = 1;
      }
      *(undefined1 **)(puVar6 + -4) = (undefined1 *)((int)&pSVar2->klass + 1);
      iVar14 = (this->fields).__1__state;
      pSVar2 = (this->fields).__4__this;
      if (iVar14 != 0) {
        if (iVar14 == 1) {
          (this->fields).__1__state = -1;
          if (pSVar2 == (SlideOnClick *)0x0) {
            *(undefined **)(puVar6 + -8) = &UNK_?;
            func_?();
            pcVar11 = (code *)swi(3);
            bVar12 = (*pcVar11)();
            return bVar12;
          }
          (pSVar2->fields)._StartPos_k__BackingField.z = 0.0;
          (pSVar2->fields).readyForSlide = 0;
          (pSVar2->fields).holding = 0;
          *(undefined2 *)&(pSVar2->fields).field_0x32 = 0;
          pSVar2[1].klass = (SlideOnClick__Class *)0x0;
          pSVar2[1].monitor = (MonitorData *)0x0;
          pSVar2[1].fields._._._._._.m_CachedPtr = (void *)0x0;
        }
        return 0;
      }
      *(SlideOnClick_SlideTowardsPosition_d_14 **)(puVar6 + -8) = pSVar1;
      (this->fields).__1__state = -1;
      *(WaitForSeconds__Class **)(puVar6 + -0xc) = TypeInfo__UnityEngine__WaitForSeconds;
      puVar15 = (undefined4 *)(puVar6 + -0x10);
      *(undefined **)(puVar6 + -0x10) = &UNK_?;
      pOVar16 = (Object *)func_?();
      *puVar15 = 0;
      puVar15[-1] = extraout_ECX_00;
      puVar15[-1] = 0x40400000;
      puVar15[-2] = pOVar16;
      puVar15[-3] = &UNK_?;
      SubscribableVariable`1[System::Single]::SubscribableVariable_1_System_Single___ctor
                ((SubscribableVariable_1_System_Single_ *)puVar15[-2],(float)puVar15[-1],
                 (MethodInfo *)*puVar15);
      (this->fields).__2__current = pOVar16;
      *puVar15 = pOVar16;
      puVar15[-1] = &(this->fields).__2__current;
      puVar15[-2] = &UNK_?;
      func_?();
      (this->fields).__1__state = 1;
      return 1;
    }
    break;
  case 1:
    fVar3 = (this->fields)._i_5__2;
    (this->fields).__1__state = -1;
    pSVar4 = (SlideOnClick_SlideTowardsPosition_d_14 *)
              UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
    ;
    if (pSVar2 == (SlideOnClick *)0x0) goto code_?;
    fVar3 = (float)pSVar4 * (pSVar2->fields).lerpSpeed + fVar3;
    (this->fields)._i_5__2 = fVar3;
    break;
  case 2:
    pSVar4 = (SlideOnClick_SlideTowardsPosition_d_14 *)(this->fields)._i_5__2;
    (this->fields).__1__state = -1;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields)._i_5__2 = fVar3 + (float)pSVar4;
    if (pSVar2 == (SlideOnClick *)0x0) goto code_?;
    goto code_?;
  case 3:
    (this->fields).__1__state = -1;
    if (pSVar2 == (SlideOnClick *)0x0) goto code_?;
    goto code_?;
  case 4:
    fVar3 = (this->fields)._i_5__2;
    (this->fields).__1__state = -1;
    pSVar4 = (SlideOnClick_SlideTowardsPosition_d_14 *)
              UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
    ;
    if (pSVar2 == (SlideOnClick *)0x0) goto code_?;
    fVar3 = (float)pSVar4 * (pSVar2->fields).lerpSpeed + fVar3;
    goto code_?;
  default:
    goto code_?;
  }
  if (fVar3 < _UNK_?) {
    from.x = (pSVar2->fields)._StartPos_k__BackingField.x;
    from.y = (pSVar2->fields)._StartPos_k__BackingField.y;
    to.x = (pSVar2->fields).targetPos.x;
    to.y = (pSVar2->fields).targetPos.y;
    SlideOnClick::SlideOnClick_LerpToPos(pSVar2,from,to,(this->fields)._i_5__2,(MethodInfo *)0x0);
    (this->fields).__2__current = (Object *)0x0;
    func_?(&(this->fields).__2__current,0);
    (this->fields).__1__state = 1;
    return 1;
  }
  pos.x = (pSVar2->fields).targetPos.x;
  pos.y = (pSVar2->fields).targetPos.y;
  SlideOnClick::SlideOnClick_SetToPosition(pSVar2,pos,(MethodInfo *)0x0);
  (this->fields)._i_5__2 = 0.0;
code_?:
  fVar3 = (pSVar2->fields).waitBeforeMoveBack;
  pfVar17 = &(this->fields)._i_5__2;
  if (*pfVar17 <= fVar3 && fVar3 != *pfVar17) {
    (this->fields).__2__current = (Object *)0x0;
    func_?(&(this->fields).__2__current,0);
    (this->fields).__1__state = 2;
    return 1;
  }
code_?:
  fVar3 = 0.0;
  if ((pSVar2->fields).holding != 0) {
    (this->fields).__2__current = (Object *)0x0;
    func_?(&(this->fields).__2__current,0);
    (this->fields).__1__state = 3;
    return 1;
  }
code_?:
  (this->fields)._i_5__2 = fVar3;
  pfVar17 = &(this->fields)._i_5__2;
  if (*pfVar17 <= _UNK_? && _UNK_? != *pfVar17) {
    from_00.x = (pSVar2->fields).targetPos.x;
    from_00.y = (pSVar2->fields).targetPos.y;
    to_00.x = (pSVar2->fields)._StartPos_k__BackingField.x;
    to_00.y = (pSVar2->fields)._StartPos_k__BackingField.y;
    SlideOnClick::SlideOnClick_LerpToPos
              (pSVar2,from_00,to_00,(this->fields)._i_5__2,(MethodInfo *)0x0);
    (this->fields).__2__current = (Object *)0x0;
    func_?(&(this->fields).__2__current,0);
    (this->fields).__1__state = 4;
    return 1;
  }
  pos_00.x = (pSVar2->fields)._StartPos_k__BackingField.x;
  pos_00.y = (pSVar2->fields)._StartPos_k__BackingField.y;
  SlideOnClick::SlideOnClick_SetToPosition(pSVar2,pos_00,(MethodInfo *)0x0);
  (pSVar2->fields).readyForSlide = 1;
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


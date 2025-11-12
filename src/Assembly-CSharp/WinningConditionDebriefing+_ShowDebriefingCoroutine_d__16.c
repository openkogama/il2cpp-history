
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::WinningConditionDebriefing+<ShowDebriefingCoroutine>d__16::
     WinningConditionDebriefing_ShowDebriefingCoroutine_d_16_MoveNext
               (WinningConditionDebriefing_ShowDebriefingCoroutine_d_16 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<float>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WinningConditionDebriefing___ShowDebriefingCoroutine_b__16_0_float_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WinningConditionDebriefing___ShowDebriefingCoroutine_b__16_1_float_);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (IEnumerator__Class *)(this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if (((this_00 != (IEnumerator__Class *)0x0) &&
        (pIVar2 = (this_00->_0).castClass, pIVar2 != (Il2CppClass *)0x0)) &&
       (plVar3 = *(longlong **)&(pIVar2->byval_arg).attrs, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x5e8))(plVar3,::StringLiteral__,*(undefined8 *)(*plVar3 + 0x5f0));
      pAVar4 = (Action_1_Single_ *)FUN_?(TypeInfo__System__Action<float>);
      FUN_?(pAVar4,this_00);
      pIVar5 = pTween::pTween_To(_UNK_?,0.0,_UNK_?,pAVar4,(MethodInfo *)0x0);
      pCVar6 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                MonoBehaviour_StartCoroutine_2((MonoBehaviour *)this_00,pIVar5,(MethodInfo *)0x0);
      bVar7 = iRam_? != 0;
      (this->fields).__2__current = (Object *)pCVar6;
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
      return 1;
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        (this->fields).__1__state = -1;
        pAVar4 = (Action_1_Single_ *)FUN_?(TypeInfo__System__Action<float>);
        FUN_?(pAVar4,this_00);
        pIVar5 = pTween::pTween_To(_UNK_?,_UNK_?,0.0,pAVar4,(MethodInfo *)0x0);
        if (this_00 == (IEnumerator__Class *)0x0) goto code_?;
        pCVar6 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                  MonoBehaviour_StartCoroutine_2((MonoBehaviour *)this_00,pIVar5,(MethodInfo *)0x0);
        bVar7 = iRam_? != 0;
        (this->fields).__2__current = (Object *)pCVar6;
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
        bVar12 = 1;
      }
      else {
        bVar12 = 0;
        if (iVar1 == 3) {
          (this->fields).__1__state = -1;
          return 0;
        }
      }
      return bVar12;
    }
    (this->fields).__1__state = -1;
    if (this_00 != (IEnumerator__Class *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__WinningConditionDebriefing___WaitForFadeOut_d__19);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pIVar5 = (IEnumerator *)
               FUN_?(TypeInfo__WinningConditionDebriefing___WaitForFadeOut_d__19);
      bVar7 = iRam_? != 0;
      *(undefined4 *)&pIVar5[1].klass = 0;
      pIVar5[2].klass = this_00;
      if (bVar7) {
        uVar8 = (uint)((ulonglong)(pIVar5 + 2) >> 0xc);
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
      pCVar6 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                MonoBehaviour_StartCoroutine_2((MonoBehaviour *)this_00,pIVar5,(MethodInfo *)0x0);
      bVar7 = iRam_? != 0;
      (this->fields).__2__current = (Object *)pCVar6;
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
      return 1;
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  bVar12 = (*pcVar13)();
  return bVar12;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::WinningConditionDebriefing+<ShowDebriefingCoroutine>d__16::
     WinningConditionDebriefing_ShowDebriefingCoroutine_d_16_System_Collections_IEnumerator_Reset
               (WinningConditionDebriefing_ShowDebriefingCoroutine_d_16 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__WinningConditionDebriefing___ShowDebriefingCoroutine_d__16__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


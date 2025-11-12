
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::WinningConditionBriefing+<FixAspectRatioDelay>d__35::
     WinningConditionBriefing_FixAspectRatioDelay_d_35_MoveNext
               (WinningConditionBriefing_FixAspectRatioDelay_d_35 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__WaitForEndOfFrame);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    pOVar2 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitForEndOfFrame);
    bVar3 = iRam_? != 0;
    (this->fields).__2__current = pOVar2;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    (this->fields).__1__state = 1;
    return 1;
  }
  if (iVar1 == 1) {
    bVar3 = iRam_? != 0;
    (this->fields).__1__state = -1;
    (this->fields).__2__current = (Object *)0x0;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    (this->fields).__1__state = 2;
    return 1;
  }
  if (iVar1 == 2) {
    (this->fields).__1__state = -1;
    if ((this_00 != (WinningConditionBriefing *)0x0) &&
       (pIVar8 = (this_00->fields).winConImage, pIVar8 != (Image *)0x0)) {
      pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pIVar8,(MethodInfo *)0x0);
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_00,(MethodInfo *)0x0);
      if (pTVar9 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (pTVar9,parent,1,(MethodInfo *)0x0);
        pIVar8 = (this_00->fields).winConImage;
        if ((pIVar8 != (Image *)0x0) &&
           (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pIVar8,(MethodInfo *)0x0), pTVar9 != (Transform *)0x0))
        {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                    (pTVar9,(MethodInfo *)0x0);
          return 0;
        }
      }
    }
    FUN_?();
    pcVar10 = (code *)swi(3);
    bVar11 = (*pcVar10)();
    return bVar11;
  }
  return 0;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::WinningConditionBriefing+<FixAspectRatioDelay>d__35::
     WinningConditionBriefing_FixAspectRatioDelay_d_35_System_Collections_IEnumerator_Reset
               (WinningConditionBriefing_FixAspectRatioDelay_d_35 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__WinningConditionBriefing___FixAspectRatioDelay_d__35__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


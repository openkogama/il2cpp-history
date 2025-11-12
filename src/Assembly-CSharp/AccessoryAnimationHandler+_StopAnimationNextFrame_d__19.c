
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::AccessoryAnimationHandler+<StopAnimationNextFrame>d__19::
     AccessoryAnimationHandler_StopAnimationNextFrame_d_19_MoveNext
               (AccessoryAnimationHandler_StopAnimationNextFrame_d_19 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pAVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields)._hasFramePassed_5__2 = 0;
  }
  else if (iVar1 != 1) {
    return 0;
  }
  (this->fields).__1__state = -1;
  if ((this->fields)._hasFramePassed_5__2 != 0) {
    if ((pAVar2 != (AccessoryAnimationHandler *)0x0) &&
       (this_00 = (pAVar2->fields).animations, this_00 != (Animation *)0x0)) {
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Stop
                (this_00,(MethodInfo *)0x0);
      bVar3 = iRam_? != 0;
      (pAVar2->fields).currentCrossFadedAnimation = ::StringLiteral__;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(pAVar2->fields).currentCrossFadedAnimation >> 0xc);
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
      return 0;
    }
    FUN_?();
    pcVar8 = (code *)swi(3);
    bVar9 = (*pcVar8)();
    return bVar9;
  }
  bVar3 = iRam_? != 0;
  (this->fields)._hasFramePassed_5__2 = 1;
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
  (this->fields).__1__state = 1;
  return 1;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::AccessoryAnimationHandler+<StopAnimationNextFrame>d__19::
     AccessoryAnimationHandler_StopAnimationNextFrame_d_19_System_Collections_IEnumerator_Reset
               (AccessoryAnimationHandler_StopAnimationNextFrame_d_19 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__AccessoryAnimationHandler___StopAnimationNextFrame_d__19__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


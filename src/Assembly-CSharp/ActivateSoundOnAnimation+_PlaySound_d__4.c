
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::ActivateSoundOnAnimation+<PlaySound>d__4::
     ActivateSoundOnAnimation_PlaySound_d_4_MoveNext
               (ActivateSoundOnAnimation_PlaySound_d_4 *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  iVar2 = (this->fields).__1__state;
  pAVar3 = (this->fields).__4__this;
  if (iVar2 == 0) {
    (this->fields).__1__state = -1;
    pcVar4 = pcRam_?;
    if ((pcVar1 == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar4 = pcVar1, pcVar1 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar1 = (code *)swi(3);
      bVar6 = (*pcVar1)();
      return bVar6;
    }
    pcRam_? = pcVar4;
    fVar7 = (float)(*pcVar1)();
    (this->fields)._startTime_5__2 = fVar7;
  }
  else {
    if (iVar2 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    bVar6 = (*pcVar1)();
    return bVar6;
  }
  pcRam_? = pcVar1;
  fVar7 = (float)(*pcRam_?)();
  if (fVar7 < (this->fields)._startTime_5__2 + (this->fields).activationDelay) {
    bVar8 = iRam_? != 0;
    (this->fields).__2__current = (Object *)0x0;
    if (bVar8) {
      uVar9 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
      uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
      do {
        uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
        puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar11 == *puVar12;
        if (bVar8) {
          *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    (this->fields).__1__state = 1;
    return 1;
  }
  if ((pAVar3 != (ActivateSoundOnAnimation *)0x0) &&
     (this_00 = (pAVar3->fields).sound, this_00 != (AudioSource *)0x0)) {
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
              (this_00,(MethodInfo *)0x0);
    return 0;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar6 = (*pcVar1)();
  return bVar6;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::ActivateSoundOnAnimation+<PlaySound>d__4::
     ActivateSoundOnAnimation_PlaySound_d_4_System_Collections_IEnumerator_Reset
               (ActivateSoundOnAnimation_PlaySound_d_4 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__ActivateSoundOnAnimation___PlaySound_d__4__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


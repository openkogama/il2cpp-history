
/* IEnumerator WithCallback(Int32, UnityAction) */

IEnumerator *
Assembly-CSharp.dll::WaitForFrames::WaitForFrames_WithCallback
          (int32_t frameCount,UnityAction *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__WaitForFrames___WithCallback_d__4);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__WaitForFrames___WithCallback_d__4);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  *(int32_t *)&pIVar1[2].klass = frameCount;
  pIVar1[2].monitor = (MonitorData *)callback;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&pIVar1[2].monitor >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return pIVar1;
}


/* WaitForFrames(Int32) */

void Assembly-CSharp.dll::WaitForFrames::WaitForFrames__ctor
               (WaitForFrames *this,int32_t frameCount,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  iVar3 = (*pcRam_?)();
  (this->fields).targetFrameCount = iVar3 + frameCount;
  return;
}


/* Boolean get_keepWaiting() */

bool Assembly-CSharp.dll::WaitForFrames::WaitForFrames_get_keepWaiting
               (WaitForFrames *this,MethodInfo *method)

{
  iVar1 = (this->fields).targetFrameCount;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    bVar4 = (*pcVar2)();
    return bVar4;
  }
  pcRam_? = pcVar2;
  iVar5 = (*pcRam_?)();
  return iVar1 < iVar5;
}


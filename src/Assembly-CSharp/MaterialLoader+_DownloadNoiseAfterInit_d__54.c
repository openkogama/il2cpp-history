
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::MaterialLoader+<DownloadNoiseAfterInit>d__54::
     MaterialLoader_DownloadNoiseAfterInit_d_54_MoveNext
               (MaterialLoader_DownloadNoiseAfterInit_d_54 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__WaitForSeconds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      (this->fields).__1__state = -1;
      if (this_00 == (MaterialLoader *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        bVar3 = (*pcVar2)();
        return bVar3;
      }
      MaterialLoader::MaterialLoader_DownloadNoiseWhenPossible(this_00,(MethodInfo *)0x0);
    }
    return 0;
  }
  (this->fields).__1__state = -1;
  pOVar4 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitForSeconds);
  bVar5 = iRam_? != 0;
  *(undefined4 *)&pOVar4[1].klass = 0x40400000;
  (this->fields).__2__current = pOVar4;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  (this->fields).__1__state = 1;
  return 1;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::MaterialLoader+<DownloadNoiseAfterInit>d__54::
     MaterialLoader_DownloadNoiseAfterInit_d_54_System_Collections_IEnumerator_Reset
               (MaterialLoader_DownloadNoiseAfterInit_d_54 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__MaterialLoader___DownloadNoiseAfterInit_d__54__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


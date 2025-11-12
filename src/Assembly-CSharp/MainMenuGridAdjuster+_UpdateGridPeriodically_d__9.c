
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::MainMenuGridAdjuster+<UpdateGridPeriodically>d__9::
     MainMenuGridAdjuster_UpdateGridPeriodically_d_9_MoveNext
               (MainMenuGridAdjuster_UpdateGridPeriodically_d_9 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__WaitForSecondsRealtime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    bVar2 = iRam_? != 0;
    (this->fields).__1__state = -1;
    (this->fields).__2__current = (Object *)0x0;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    (this->fields).__1__state = 1;
    return 1;
  }
  if ((iVar1 != 1) && (iVar1 != 2)) {
    return 0;
  }
  (this->fields).__1__state = -1;
  if (this_00 == (MainMenuGridAdjuster *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    bVar8 = (*pcVar7)();
    return bVar8;
  }
  iVar9 = MainMenuGridAdjuster::MainMenuGridAdjuster_GetActiveButtonCount(this_00,(MethodInfo *)0x0)
  ;
  if (iVar9 != (this_00->fields).activeButtons) {
    (this_00->fields).activeButtons = iVar9;
    MainMenuGridAdjuster::MainMenuGridAdjuster_SetGridSizeAndPosition(this_00,(MethodInfo *)0x0);
  }
  fVar10 = (this_00->fields).pollFrequency;
  pOVar11 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitForSecondsRealtime);
  bVar2 = iRam_? != 0;
  *(float *)&pOVar11[1].klass = fVar10;
  *(undefined4 *)((longlong)&pOVar11[1].klass + 4) = 0xbf800000;
  (this->fields).__2__current = pOVar11;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  (this->fields).__1__state = 2;
  return 1;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::MainMenuGridAdjuster+<UpdateGridPeriodically>d__9::
     MainMenuGridAdjuster_UpdateGridPeriodically_d_9_System_Collections_IEnumerator_Reset
               (MainMenuGridAdjuster_UpdateGridPeriodically_d_9 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__MainMenuGridAdjuster___UpdateGridPeriodically_d__9__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


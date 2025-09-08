
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::MainMenuGridAdjuster+<UpdateGridPeriodically>d__9::
     MainMenuGridAdjuster_UpdateGridPeriodically_d_9_MoveNext
               (MainMenuGridAdjuster_UpdateGridPeriodically_d_9 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__WaitForSecondsRealtime);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 != 0) {
    if ((iVar1 != 1) && (iVar1 != 2)) {
      return 0;
    }
    (this->fields).__1__state = -1;
    if (this_00 != (MainMenuGridAdjuster *)0x0) {
      iVar2 = MainMenuGridAdjuster::MainMenuGridAdjuster_GetActiveButtonCount
                        (this_00,(MethodInfo *)0x0);
      if (iVar2 != (this_00->fields).activeButtons) {
        (this_00->fields).activeButtons = iVar2;
        MainMenuGridAdjuster::MainMenuGridAdjuster_SetGridSizeAndPosition(this_00,(MethodInfo *)0x0)
        ;
      }
      time = (this_00->fields).pollFrequency;
      this_01 = (WaitForSecondsRealtime *)
                func_?(TypeInfo__UnityEngine__WaitForSecondsRealtime);
      UnityEngine.CoreModule.dll::UnityEngine::WaitForSecondsRealtime::WaitForSecondsRealtime__ctor
                (this_01,time,(MethodInfo *)0x0);
      (this->fields).__2__current = (Object *)this_01;
      func_?(&(this->fields).__2__current,this_01);
      (this->fields).__1__state = 2;
      return 1;
    }
    func_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  (this->fields).__1__state = -1;
  (this->fields).__2__current = (Object *)0x0;
  func_?(&(this->fields).__2__current,0);
  (this->fields).__1__state = 1;
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
  func_?(&
                  MethodInfo__MainMenuGridAdjuster___UpdateGridPeriodically_d__9__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


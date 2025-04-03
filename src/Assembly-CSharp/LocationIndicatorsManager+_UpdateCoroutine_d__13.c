
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LocationIndicatorsManager+<UpdateCoroutine>d__13::
     LocationIndicatorsManager_UpdateCoroutine_d_13_MoveNext
               (LocationIndicatorsManager_UpdateCoroutine_d_13 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__WaitForSecondsRealtime);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if ((iVar1 != 0) && (iVar1 != 1)) {
    return 0;
  }
  (this->fields).__1__state = -1;
  if (this_00 != (LocationIndicatorsManager *)0x0) {
    LocationIndicatorsManager::LocationIndicatorsManager_CreateOrDestroyIndicators
              (this_00,(MethodInfo *)0x0);
    this_01 = (WaitForSecondsRealtime *)
              func_?(TypeInfo__UnityEngine__WaitForSecondsRealtime);
    UnityEngine.CoreModule.dll::UnityEngine::WaitForSecondsRealtime::WaitForSecondsRealtime__ctor
              (this_01,0.5,(MethodInfo *)0x0);
    ppOVar2 = &(this->fields).__2__current;
    *ppOVar2 = (Object *)this_01;
    func_?(ppOVar2,this_01);
    (this->fields).__1__state = 1;
    return 1;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::LocationIndicatorsManager+<UpdateCoroutine>d__13::
     LocationIndicatorsManager_UpdateCoroutine_d_13_System_Collections_IEnumerator_Reset
               (LocationIndicatorsManager_UpdateCoroutine_d_13 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__LocationIndicatorsManager___UpdateCoroutine_d__13__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


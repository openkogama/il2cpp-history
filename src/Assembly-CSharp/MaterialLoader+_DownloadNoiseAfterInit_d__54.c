
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::MaterialLoader+<DownloadNoiseAfterInit>d__54::
     MaterialLoader_DownloadNoiseAfterInit_d_54_MoveNext
               (MaterialLoader_DownloadNoiseAfterInit_d_54 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__WaitForSeconds);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    this_01 = (SubscribableVariable_1_System_Single_ *)
              func_?(TypeInfo__UnityEngine__WaitForSeconds);
    SubscribableVariable`1[System::Single]::SubscribableVariable_1_System_Single___ctor
              (this_01,3.0,(MethodInfo *)0x0);
    ppOVar2 = &(this->fields).__2__current;
    *ppOVar2 = (Object *)this_01;
    func_?(ppOVar2,this_01);
    (this->fields).__1__state = 1;
    return 1;
  }
  if (iVar1 == 1) {
    (this->fields).__1__state = -1;
    if (this_00 == (MaterialLoader *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    MaterialLoader::MaterialLoader_DownloadNoiseWhenPossible(this_00,(MethodInfo *)0x0);
  }
  return 0;
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
  func_?(&
                  MethodInfo__MaterialLoader___DownloadNoiseAfterInit_d__54__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


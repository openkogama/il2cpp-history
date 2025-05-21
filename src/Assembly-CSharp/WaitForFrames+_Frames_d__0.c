
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::WaitForFrames+<Frames>d__0::WaitForFrames_Frames_d_0_MoveNext
               (WaitForFrames_Frames_d_0 *this,MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  if ((iVar1 == 0) || (iVar1 == 1)) {
    (this->fields).__1__state = -1;
    if (0 < (this->fields).frameCount) {
      piVar2 = &(this->fields).frameCount;
      *piVar2 = *piVar2 + -1;
      (this->fields).__2__current = (Object *)0x0;
      func_?(&(this->fields).__2__current,0);
      (this->fields).__1__state = 1;
      return 1;
    }
    pUVar3 = (this->fields).callback;
    if (pUVar3 == (UnityAction *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    (*(pUVar3->fields)._._.invoke_impl)
              ((pUVar3->fields)._._.method_code,(pUVar3->fields)._._.method);
  }
  return 0;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::WaitForFrames+<Frames>d__0::
     WaitForFrames_Frames_d_0_System_Collections_IEnumerator_Reset
               (WaitForFrames_Frames_d_0 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&MethodInfo__WaitForFrames___Frames_d__0__System_Collections_IEnumerator_Reset__);
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


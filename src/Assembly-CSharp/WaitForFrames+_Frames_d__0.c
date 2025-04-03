
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::WaitForFrames+<Frames>d__0::WaitForFrames_Frames_d_0_MoveNext
               (WaitForFrames_Frames_d_0 *this,MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  if ((iVar1 == 0) || (iVar1 == 1)) {
    iVar1 = (this->fields).frameCount;
    (this->fields).__1__state = -1;
    if (0 < iVar1) {
      (this->fields).__2__current = (Object *)0x0;
      (this->fields).frameCount = iVar1 + -1;
      func_?(&(this->fields).__2__current,0);
      (this->fields).__1__state = 1;
      return 1;
    }
    pUVar2 = (this->fields).callback;
    if (pUVar2 == (UnityAction *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    (*(pUVar2->fields)._._.invoke_impl)
              ((pUVar2->fields)._._.method_code,(pUVar2->fields)._._.method);
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


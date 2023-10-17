
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::WebGLSupport::WebGLInputMobile+<RegisterOnFocusOut>d__5::
     WebGLInputMobile_RegisterOnFocusOut_d_5_MoveNext
               (WebGLInputMobile_RegisterOnFocusOut_d_5 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    func_?(&MethodInfo__WebGLSupport__WebGLInputMobile__OnFocusOut_int_);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  if (iVar1 == 0) {
    (this->fields).__2__current = (Object *)0x0;
    (this->fields).__1__state = -1;
    func_?(&(this->fields).__2__current,0);
    (this->fields).__1__state = 1;
    return 1;
  }
  if (iVar1 == 1) {
    (this->fields).__1__state = -1;
    this_00 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<int>);
    if (this_00 == (UnityAction_1_System_Int32Enum_ *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)0x0,MethodInfo__WebGLSupport__WebGLInputMobile__OnFocusOut_int_,
               (MethodInfo *)0x0);
  }
  return 0;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::WebGLSupport::WebGLInputMobile+<RegisterOnFocusOut>d__5::
     WebGLInputMobile_RegisterOnFocusOut_d_5_System_Collections_IEnumerator_Reset
               (WebGLInputMobile_RegisterOnFocusOut_d_5 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__WebGLSupport__WebGLInputMobile___RegisterOnFocusOut_d__5__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


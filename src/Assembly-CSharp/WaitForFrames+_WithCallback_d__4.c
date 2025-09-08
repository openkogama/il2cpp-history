
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::WaitForFrames+<WithCallback>d__4::WaitForFrames_WithCallback_d_4_MoveNext
               (WaitForFrames_WithCallback_d_4 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WaitForFrames);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  if (iVar1 == 0) {
    iVar1 = (this->fields).frameCount;
    (this->fields).__1__state = -1;
    this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
              func_?(TypeInfo__WaitForFrames);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0);
    (this_00->fields)._._defaultValue_k__BackingField = (List_1_System_Object_ *)(iVar2 + iVar1);
    (this->fields).__2__current = (Object *)this_00;
    func_?(&(this->fields).__2__current,this_00);
    (this->fields).__1__state = 1;
    return 1;
  }
  if (iVar1 == 1) {
    pUVar3 = (this->fields).callback;
    (this->fields).__1__state = -1;
    if (pUVar3 != (UnityAction *)0x0) {
      (*(pUVar3->fields)._._.invoke_impl)
                ((pUVar3->fields)._._.method_code,(pUVar3->fields)._._.method);
    }
  }
  return 0;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::WaitForFrames+<WithCallback>d__4::
     WaitForFrames_WithCallback_d_4_System_Collections_IEnumerator_Reset
               (WaitForFrames_WithCallback_d_4 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__WaitForFrames___WithCallback_d__4__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


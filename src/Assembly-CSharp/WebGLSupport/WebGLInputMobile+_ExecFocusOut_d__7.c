
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::WebGLSupport::WebGLInputMobile+<ExecFocusOut>d__7::
     WebGLInputMobile_ExecFocusOut_d_7_MoveNext
               (WebGLInputMobile_ExecFocusOut_d_7 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    WebGLSupport__WebGLInput_MethodInfo__UnityEngine__Component__GetComponent<WebGLSupport::WebGLInput>__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInputMobile>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInputMobile>__get_Item_int_
                   );
    func_?(&TypeInfo__WebGLSupport__WebGLInputMobile);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
    if ((TypeInfo__WebGLSupport__WebGLInputMobile->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__WebGLSupport__WebGLInputMobile);
    }
    pDVar2 = TypeInfo__WebGLSupport__WebGLInputMobile->static_fields->instances;
    if (((pDVar2 != (Dictionary_2_System_Int32_WebGLSupport_WebGLInputMobile_ *)0x0) &&
        (this_00 = (Component *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,
                              (this->fields).id,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInputMobile>__get_Item_int_
                             ), this_00 != (Component *)0x0)) &&
       (this_01 = (WebGLInput *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                            (this_00,
                             WebGLSupport__WebGLInput_MethodInfo__UnityEngine__Component__GetComponent<WebGLSupport::WebGLInput>__
                            ), this_01 != (WebGLInput *)0x0)) {
      WebGLInput::WebGLInput_DeactivateInputField(this_01,(MethodInfo *)0x0);
      this_00[1].klass = (Component__Class *)0xffffffff;
      pDVar2 = TypeInfo__WebGLSupport__WebGLInputMobile->static_fields->instances;
      if (pDVar2 != (Dictionary_2_System_Int32_WebGLSupport_WebGLInputMobile_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,(this->fields).id,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInputMobile>__Remove_int_
                  );
        return 0;
      }
    }
    func_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  (this->fields).__2__current = (Object *)0x0;
  (this->fields).__1__state = -1;
  func_?(&(this->fields).__2__current,0);
  (this->fields).__1__state = 1;
  return 1;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::WebGLSupport::WebGLInputMobile+<ExecFocusOut>d__7::
     WebGLInputMobile_ExecFocusOut_d_7_System_Collections_IEnumerator_Reset
               (WebGLInputMobile_ExecFocusOut_d_7 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__WebGLSupport__WebGLInputMobile___ExecFocusOut_d__7__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


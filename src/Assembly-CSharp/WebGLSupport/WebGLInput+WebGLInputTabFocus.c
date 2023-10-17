
/* Void Add(WebGLInput) */

void Assembly-CSharp.dll::WebGLSupport::WebGLInput+WebGLInputTabFocus::
     WebGLInput_WebGLInputTabFocus_Add(WebGLInput *input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus->_1).cctor_finished_or_no_cctor == 0)
  {
    func_?();
  }
  this = TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus->static_fields->inputs;
  if (this != (List_1_WebGLSupport_WebGLInput_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this,(Object *)input,
               MethodInfo__System__Collections__Generic__List<WebGLSupport::WebGLInput>__Add_WebGLSupport__WebGLInput_
              );
    this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
              TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus->static_fields->inputs;
    if (this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Sort
                (this_00,
                 MethodInfo__System__Collections__Generic__List<WebGLSupport::WebGLInput>__Sort__);
      return;
    }
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnTab(WebGLInput, Int32) */

void Assembly-CSharp.dll::WebGLSupport::WebGLInput+WebGLInputTabFocus::
     WebGLInput_WebGLInputTabFocus_OnTab(WebGLInput *input,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WebGLSupport__IInputField);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<WebGLSupport::WebGLInput>__IndexOf_WebGLSupport__WebGLInput_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<WebGLSupport::WebGLInput>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<WebGLSupport::WebGLInput>__get_Item_int_
                   );
    func_?(&TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus);
    cRam_? = '\x01';
  }
  if ((TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus->_1).cctor_finished_or_no_cctor == 0)
  {
    func_?(TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus);
  }
  pLVar1 = TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus->static_fields->inputs;
  if (pLVar1 != (List_1_WebGLSupport_WebGLInput_ *)0x0) {
    if ((pLVar1->fields)._size < 2) {
      return;
    }
    if ((TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus->_1).cctor_finished_or_no_cctor == 0
       ) {
      func_?(TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus);
    }
    pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus->static_fields->inputs;
    if (pLVar2 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      iVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__IndexOf
                        (pLVar2,(RegexCharClass_SingleRange)input,
                         MethodInfo__System__Collections__Generic__List<WebGLSupport::WebGLInput>__IndexOf_WebGLSupport__WebGLInput_
                        );
      iVar3 = iVar3 + value;
      if (iVar3 < 0) {
        if ((TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus->_1).cctor_finished_or_no_cctor
            == 0) {
          func_?();
        }
        pLVar1 = TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus->static_fields->inputs;
        if (pLVar1 == (List_1_WebGLSupport_WebGLInput_ *)0x0) goto code_?;
        iVar3 = (pLVar1->fields)._size + -1;
      }
      else {
        if ((TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus->_1).cctor_finished_or_no_cctor
            == 0) {
          func_?();
        }
        pLVar1 = TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus->static_fields->inputs;
        if (pLVar1 == (List_1_WebGLSupport_WebGLInput_ *)0x0) goto code_?;
        if ((pLVar1->fields)._size <= iVar3) {
          iVar3 = 0;
        }
      }
      if ((TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus->_1).cctor_finished_or_no_cctor ==
          0) {
        func_?(TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus);
      }
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus->static_fields->inputs;
      if (((pLVar2 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
          (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar2,iVar3,
                              MethodInfo__System__Collections__Generic__List<WebGLSupport::WebGLInput>__get_Item_int_
                             ), RVar4 != (RegexCharClass_SingleRange)0x0)) &&
         (*(int *)((int)RVar4 + 0x10) != 0)) {
        func_?();
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Remove(WebGLInput) */

void Assembly-CSharp.dll::WebGLSupport::WebGLInput+WebGLInputTabFocus::
     WebGLInput_WebGLInputTabFocus_Remove(WebGLInput *input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus->_1).cctor_finished_or_no_cctor == 0)
  {
    func_?();
  }
  this = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
         TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus->static_fields->inputs;
  if (this != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
    RegexCharClass+SingleRange]::
    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Remove
              (this,(RegexCharClass_SingleRange)input,
               MethodInfo__System__Collections__Generic__List<WebGLSupport::WebGLInput>__Remove_WebGLSupport__WebGLInput_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* WebGLInput+WebGLInputTabFocus() */

void Assembly-CSharp.dll::WebGLSupport::WebGLInput+WebGLInputTabFocus::
     WebGLInput_WebGLInputTabFocus__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<WebGLSupport::WebGLInput>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<WebGLSupport::WebGLInput>);
    func_?(&TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus);
    cRam_? = '\x01';
  }
  this = (List_1_WebGLSupport_WebGLInput_ *)
         func_?(TypeInfo__System__Collections__Generic__List<WebGLSupport::WebGLInput>);
  if (this != (List_1_WebGLSupport_WebGLInput_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this,
               MethodInfo__System__Collections__Generic__List<WebGLSupport::WebGLInput>__List__);
    TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus->static_fields->inputs = this;
    func_?(TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus->static_fields,this);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


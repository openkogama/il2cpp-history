
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::WebGLSupport::WebGLInput+<Blur>d__21::WebGLInput_Blur_d_21_MoveNext
               (WebGLInput_Blur_d_21 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInput>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInput>__get_Item_int_
                   );
    func_?(&TypeInfo__WebGLSupport__WebGLInput);
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
  if (iVar1 != 1) {
    return 0;
  }
  (this->fields).__1__state = -1;
  if ((TypeInfo__WebGLSupport__WebGLInput->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__WebGLSupport__WebGLInput);
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
            TypeInfo__WebGLSupport__WebGLInput->static_fields->instances;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)(this->fields).id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInput>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      return 0;
    }
    if ((TypeInfo__WebGLSupport__WebGLInput->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pDVar3 = TypeInfo__WebGLSupport__WebGLInput->static_fields->instances;
    if ((pDVar3 != (Dictionary_2_System_Int32_WebGLSupport_WebGLInput_ *)0x0) &&
       (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar3,(this->fields).id
                            ,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInput>__get_Item_int_
                           ), pOVar4 != (Object *)0x0)) {
      cVar5 = *(char *)&pOVar4[2].monitor;
      pDVar3 = TypeInfo__WebGLSupport__WebGLInput->static_fields->instances;
      if ((pDVar3 != (Dictionary_2_System_Int32_WebGLSupport_WebGLInput_ *)0x0) &&
         (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar3,
                              (this->fields).id,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInput>__get_Item_int_
                             ), pOVar4 != (Object *)0x0)) {
        *(undefined1 *)&pOVar4[2].monitor = 0;
        if (cVar5 != '\0') {
          return 0;
        }
        if ((TypeInfo__WebGLSupport__WebGLInput->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pDVar3 = TypeInfo__WebGLSupport__WebGLInput->static_fields->instances;
        if ((pDVar3 != (Dictionary_2_System_Int32_WebGLSupport_WebGLInput_ *)0x0) &&
           (this_01 = (WebGLInput *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar3,
                                 (this->fields).id,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInput>__get_Item_int_
                                ), this_01 != (WebGLInput *)0x0)) {
          WebGLInput::WebGLInput_DeactivateInputField(this_01,(MethodInfo *)0x0);
          return 0;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar2 = (*pcVar6)();
  return bVar2;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::WebGLSupport::WebGLInput+<Blur>d__21::
     WebGLInput_Blur_d_21_System_Collections_IEnumerator_Reset
               (WebGLInput_Blur_d_21 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__WebGLSupport__WebGLInput___Blur_d__21__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


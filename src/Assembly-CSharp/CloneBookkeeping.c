
/* CloneBookkeeping() */

void Assembly-CSharp.dll::CloneBookkeeping::CloneBookkeeping__ctor
               (CloneBookkeeping *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    cRam_? = '\x01';
  }
  (this->fields).cloneIdIncrement = -1;
  (this->fields).cloneLinkIdIncrement = -1;
  (this->fields).cloneObjectLinkIdIncrement = -1;
  pLVar1 = (List_1_System_Int32_ *)
           func_?(TypeInfo__System__Collections__Generic__List<int>);
  if (pLVar1 != (List_1_System_Int32_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)pLVar1,
               MethodInfo__System__Collections__Generic__List<int>__List__);
    (this->fields).linkIds = pLVar1;
    func_?(&(this->fields).linkIds,pLVar1);
    pLVar1 = (List_1_System_Int32_ *)
             func_?(TypeInfo__System__Collections__Generic__List<int>);
    if (pLVar1 != (List_1_System_Int32_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)pLVar1,
                 MethodInfo__System__Collections__Generic__List<int>__List__);
      (this->fields).objectLinkIds = pLVar1;
      func_?(&(this->fields).objectLinkIds,pLVar1);
      this_00 = (Dictionary_2_System_Int32_System_Int32_ *)
                func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
      if (this_00 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)this_00,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
        method_00 = (MethodInfo *)&(this->fields).worldObjectIdsMaps;
        (this->fields).worldObjectIdsMaps = this_00;
        func_?(method_00,this_00);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)this,ExceptionArgument__Enum_obj,method_00);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


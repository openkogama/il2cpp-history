
/* Void <get_WorldIDsRecursive>b__0(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVWorldObjectClient+<>c__DisplayClass51_0::
     MVWorldObjectClient_c_DisplayClass51_0__get_WorldIDsRecursive_b__0
               (MVWorldObjectClient_c_DisplayClass51_0 *this,MVWorldObjectClient *wo,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((wo != (MVWorldObjectClient *)0x0) &&
     (this_00 = (HashSet_1_System_Object_ *)(this->fields).childIDs,
     this_00 != (HashSet_1_System_Object_ *)0x0)) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__Add
              (this_00,(Object *)(wo->fields)._.id,
               MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


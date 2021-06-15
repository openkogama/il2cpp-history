
/* Object AddValue(Object) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ThreadSafeStore`2[System::Object,System::
         Object]::ThreadSafeStore_2_System_Object_System_Object__AddValue
                   (ThreadSafeStore_2_System_Object_System_Object_ *this,Object *key,
                   MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  pOStack_4 = (Object *)0x0;
  func_?();
  pFVar5 = (this->fields)._creator;
  if (pFVar5 == (Func_2_Object_Object_ *)0x0) {
code_?:
    func_?(0);
    func_?();
    pcVar6 = (code *)swi(3);
    pOVar7 = (Object *)(*pcVar6)();
    return pOVar7;
  }
  puVar8 = *(undefined4 **)(*(int *)(method->name + 0x60) + 8);
  pOVar9 = (Object *)(*(code *)*puVar8)(pFVar5,key,puVar8);
  pOVar7 = (this->fields)._lock;
  mscorlib.dll::System::Threading::Monitor::Monitor_Enter(pOVar7,(MethodInfo *)0x0);
  pDVar10 = (this->fields)._store;
  uStack_1 = 0;
  if (pDVar10 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if ((*(byte *)(*(int *)(*(int *)(method->name + 0x60) + 0xc) + 0xbe) & 1) == 0) {
      func_?();
    }
    pDVar10 = (Dictionary_2_System_Object_System_Object_ *)func_?();
    (*(code *)**(undefined4 **)(*(int *)(method->name + 0x60) + 0x10))();
    (this->fields)._store = pDVar10;
    if (pDVar10 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    puVar8 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x14);
    (*(code *)*puVar8)(pDVar10,key,pOVar9,puVar8);
    pOStack_4 = pOVar9;
  }
  else {
    cVar11 = (*(code *)**(undefined4 **)(*(int *)(method->name + 0x60) + 4))(pDVar10,key);
    if (cVar11 == '\0') {
      if ((*(byte *)(*(int *)(*(int *)(method->name + 0x60) + 0xc) + 0xbe) & 1) == 0) {
        func_?();
      }
      pDVar10 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      (*(code *)**(undefined4 **)(*(int *)(method->name + 0x60) + 0x18))(pDVar10);
      if (pDVar10 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      puVar8 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x14);
      (*(code *)*puVar8)(pDVar10,key,pOVar9,puVar8);
      (this->fields)._store = pDVar10;
      pOStack_4 = pOVar9;
    }
  }
  uStack_1 = 0xffffffff;
  mscorlib.dll::System::Threading::Monitor::Monitor_Exit(pOVar7,(MethodInfo *)0x0);
  *unaff_FS_OFFSET = uStack_3;
  return pOStack_4;
}


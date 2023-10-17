
/* Boolean <CreateShouldSerializeTest>b__0(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::
     DefaultContractResolver+<>c__DisplayClass49_0::
     DefaultContractResolver_c_DisplayClass49_0__CreateShouldSerializeTest_b__0
               (DefaultContractResolver_c_DisplayClass49_0 *this,Object *o,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&System__Object__MethodInfo__System__Array__Empty<System::Object>______);
    func_?(&TypeInfo__System__Boolean);
    cRam_? = '\x01';
  }
  pMVar1 = System__Object__MethodInfo__System__Array__Empty<System::Object>______;
  pMVar2 = (this->fields).shouldSerializeCall;
  iVar3 = *(int *)(System__Object__MethodInfo__System__Array__Empty<System::Object>______->
                  field7_0x1c).methodMetadataHandle;
  if ((*(byte *)(iVar3 + 0xba) & 1) == 0) {
    iVar3 = func_?(iVar3);
  }
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_?(iVar3);
  }
  iVar3 = *(int *)(pMVar1->field7_0x1c).methodMetadataHandle;
  if ((*(byte *)(iVar3 + 0xba) & 1) == 0) {
    iVar3 = func_?(iVar3);
  }
  if (pMVar2 != (MethodCall_2_System_Object_System_Object_ *)0x0) {
    piVar4 = (int *)(*(pMVar2->fields)._._.invoke_impl)
                              ((pMVar2->fields)._._.method_code,o,**(undefined4 **)(iVar3 + 0x5c),
                               (pMVar2->fields)._._.method);
    uVar5 = CONCAT44(TypeInfo__System__Boolean,piVar4);
    if (piVar4 != (int *)0x0) {
      if (*(Il2CppClass **)(*piVar4 + 0x20) == (TypeInfo__System__Boolean->_0).element_class) {
        pbVar6 = (bool *)func_?(piVar4);
        return *pbVar6;
      }
      goto code_?;
    }
  }
  uVar5 = func_?();
code_?:
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}



/* Object <CreateISerializableContract>b__0(Object[]) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::
         DefaultContractResolver+<>c__DisplayClass39_0::
         DefaultContractResolver_c_DisplayClass39_0__CreateISerializableContract_b__0
                   (DefaultContractResolver_c_DisplayClass39_0 *this,Object__Array *args,
                   MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pMVar2 = (this->fields).methodCall;
  if (pMVar2 != (MethodCall_2_System_Object_System_Object_ *)0x0) {
    puStack_1 = (pMVar2->fields)._._.method;
    pOStack_3 = args;
    uStack_4 = 0;
    pOVar5 = (Object *)(*(pMVar2->fields)._._.invoke_impl)((pMVar2->fields)._._.method_code);
    return pOVar5;
  }
  uVar6 = func_?(&uStack_4);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  pOVar5 = (Object *)(*pcVar7)();
  return pOVar5;
}


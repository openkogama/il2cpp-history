
/* Boolean <SetIsSpecifiedActions>b__0(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::
     DefaultContractResolver+<>c__DisplayClass50_0::
     DefaultContractResolver_c_DisplayClass50_0__SetIsSpecifiedActions_b__0
               (DefaultContractResolver_c_DisplayClass50_0 *this,Object *o,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pBStack_1 = (Boolean__Class *)&TypeInfo__System__Boolean;
    func_?();
    cRam_? = '\x01';
  }
  pFVar2 = (this->fields).specifiedPropertyGet;
  if (pFVar2 != (Func_2_Object_Object_ *)0x0) {
    pBStack_1 = (pFVar2->fields)._._.method;
    pOStack_3 = o;
    puStack_4 = (pFVar2->fields)._._.method_code;
    piVar5 = (int *)(*(pFVar2->fields)._._.invoke_impl)();
    if (piVar5 != (int *)0x0) {
      if (*(Il2CppClass **)(*piVar5 + 0x20) == (TypeInfo__System__Boolean->_0).element_class) {
        pBStack_1 = (Boolean__Class *)piVar5;
        pbVar6 = (bool *)func_?();
        return *pbVar6;
      }
      pBStack_1 = TypeInfo__System__Boolean;
      pOStack_3 = (Object *)piVar5;
      func_?();
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
  }
  pBStack_1 = (Boolean__Class *)&stack0xfffffffc;
  uVar9 = func_?(&puStack_4);
  func_?(uVar9);
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


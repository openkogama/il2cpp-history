
/* Object <CreateCastConverter>b__0(Object) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils+<>c__DisplayClass2_0::
         ConvertUtils_c_DisplayClass2_0__CreateCastConverter_b__0
                   (ConvertUtils_c_DisplayClass2_0 *this,Object *o,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).call;
  piVar2 = (int *)func_?(TypeInfo__System__Object,1);
  if (piVar2 == (int *)0x0) {
code_?:
    func_?();
  }
  else {
    if (o == (Object *)0x0) {
code_?:
      if (piVar2[3] == 0) goto code_?;
      piVar2[4] = (int)o;
      func_?(piVar2 + 4,o);
      if (pMVar1 != (MethodCall_2_System_Object_System_Object_ *)0x0) {
        pOVar3 = (Object *)
                 (*(pMVar1->fields)._._.invoke_impl)
                           ((pMVar1->fields)._._.method_code,0,piVar2,(pMVar1->fields)._._.method);
        return pOVar3;
      }
      goto code_?;
    }
    iVar4 = func_?(o,*(undefined4 *)(*piVar2 + 0x20));
    if (iVar4 != 0) goto code_?;
  }
  uVar5 = func_?(0);
  func_?(uVar5);
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pOVar3 = (Object *)(*pcVar6)();
  return pOVar3;
}


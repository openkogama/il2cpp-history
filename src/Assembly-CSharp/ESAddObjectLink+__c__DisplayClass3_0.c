
/* Boolean <Execute>b__0(ObjectLink) */

bool Assembly-CSharp.dll::ESAddObjectLink+<>c__DisplayClass3_0::
     ESAddObjectLink_c_DisplayClass3_0__Execute_b__0
               (ESAddObjectLink_c_DisplayClass3_0 *this,ObjectLink *o,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (o != (ObjectLink *)0x0) {
    return (o->fields).objectWOID == (this->fields).hit.woId;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


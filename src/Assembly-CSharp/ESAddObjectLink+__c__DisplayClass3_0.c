
/* Boolean <Execute>b__0(ObjectLink) */

bool Assembly-CSharp.dll::ESAddObjectLink+<>c__DisplayClass3_0::
     ESAddObjectLink_c_DisplayClass3_0__Execute_b__0
               (ESAddObjectLink_c_DisplayClass3_0 *this,ObjectLink *o,MethodInfo *method)

{
  if (o != (ObjectLink *)0x0) {
    return (o->fields).objectWOID == (this->fields).hit.woId;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}



/* Boolean <>m__0(ObjectLink) */

bool Assembly-CSharp.dll::ESAddObjectLink+<Execute>c__AnonStorey0::
     ESAddObjectLink_Execute_c_AnonStorey0___m__0
               (ESAddObjectLink_Execute_c_AnonStorey0 *this,ObjectLink *o,MethodInfo *method)

{
  if (o != (ObjectLink *)0x0) {
    return (o->fields).objectWOID == (this->fields).hit.woId;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


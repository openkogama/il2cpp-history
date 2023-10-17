
/* Void Update() */

void Assembly-CSharp.dll::DrawPlaneAltitude::DrawPlaneAltitude_Update
               (DrawPlaneAltitude *this,MethodInfo *method)

{
  pDVar1 = this;
  pTVar2 = (this->fields).altitudeText;
  if (pTVar2 != (Text *)0x0) {
    pSVar3 = (String *)
             (*(pTVar2->klass->vtable).get_text.methodPtr)
                       (pTVar2,(pTVar2->klass->vtable).get_text.method);
    this = (DrawPlaneAltitude *)DrawPlane::DrawPlane_get_Altitude((MethodInfo *)0x0);
    b = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&this,(MethodInfo *)0x0);
    bVar4 = mscorlib.dll::System::String::String_op_Inequality(pSVar3,b,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      pTVar2 = (pDVar1->fields).altitudeText;
      this = (DrawPlaneAltitude *)DrawPlane::DrawPlane_get_Altitude((MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&this,(MethodInfo *)0x0);
      if (pTVar2 == (Text *)0x0) goto code_?;
      (*(pTVar2->klass->vtable).set_text.methodPtr)
                (pTVar2,pSVar3,(pTVar2->klass->vtable).set_text.method);
    }
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


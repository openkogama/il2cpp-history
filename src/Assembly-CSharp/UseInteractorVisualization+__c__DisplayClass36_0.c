
/* Boolean <UpdateData>b__1(UseRequirement) */

bool Assembly-CSharp.dll::UseInteractorVisualization+<>c__DisplayClass36_0::
     UseInteractorVisualization_c_DisplayClass36_0__UpdateData_b__1
               (UseInteractorVisualization_c_DisplayClass36_0 *this,UseRequirement *requirement,
               MethodInfo *method)

{
  if (requirement != (UseRequirement *)0x0) {
    (*(requirement->klass->vtable).__unknown_3.methodPtr)
              (requirement,(this->fields).data,(ulonglong)(uint)(this->fields).ownerID,
               (requirement->klass->vtable).__unknown_3.method);
    return 1;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}



/* Boolean <UpdateData>b__1(UseRequirement) */

bool Assembly-CSharp.dll::UseInteractorVisualization+<>c__DisplayClass36_0::
     UseInteractorVisualization_c_DisplayClass36_0__UpdateData_b__1
               (UseInteractorVisualization_c_DisplayClass36_0 *this,UseRequirement *requirement,
               MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  if (requirement != (UseRequirement *)0x0) {
    pIStack_1 = (requirement->klass->vtable).__unknown_4.methodPtr;
    iStack_2 = (this->fields).ownerID;
    pDStack_3 = (this->fields).data;
    (*(code *)(requirement->klass->vtable).__unknown_3.method)(requirement);
    return 1;
  }
  uVar4 = func_?(&pDStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


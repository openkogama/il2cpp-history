
/* Boolean <DestroyRequirementObjects>b__1(UseRequirement) */

bool Assembly-CSharp.dll::UseInteractorVisualization+<>c__DisplayClass42_0::
     UseInteractorVisualization_c_DisplayClass42_0__DestroyRequirementObjects_b__1
               (UseInteractorVisualization_c_DisplayClass42_0 *this,UseRequirement *requirement,
               MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  if (requirement != (UseRequirement *)0x0) {
    pMStack_1 = (requirement->klass->vtable).__unknown_2.method;
    pDStack_2 = (this->fields).data;
    pUStack_3 = requirement;
    (*(requirement->klass->vtable).__unknown_2.methodPtr)();
    return 1;
  }
  uVar4 = func_?(&pUStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


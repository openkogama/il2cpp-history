
/* Boolean <OnEnable>b__0(UseRequirement) */

bool Assembly-CSharp.dll::UseInteractorVisualization+<>c__DisplayClass35_0::
     UseInteractorVisualization_c_DisplayClass35_0__OnEnable_b__0
               (UseInteractorVisualization_c_DisplayClass35_0 *this,UseRequirement *requirement,
               MethodInfo *method)

{
  if (requirement != (UseRequirement *)0x0) {
    uVar1._0_4_ = (this->fields).scale.x;
    uVar1._4_4_ = (this->fields).scale.y;
    (*(code *)(requirement->klass->vtable).__unknown_9.method)
              (requirement,uVar1,(this->fields).scale.z,
               (requirement->klass->vtable).__unknown_10.methodPtr);
    return 1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


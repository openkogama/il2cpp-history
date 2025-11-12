
/* Boolean <OnEnable>b__0(UseRequirement) */

bool Assembly-CSharp.dll::UseInteractorVisualization+<>c__DisplayClass35_0::
     UseInteractorVisualization_c_DisplayClass35_0__OnEnable_b__0
               (UseInteractorVisualization_c_DisplayClass35_0 *this,UseRequirement *requirement,
               MethodInfo *method)

{
  if (requirement != (UseRequirement *)0x0) {
    fStack_1 = (this->fields).scale.z;
    uStack_2._0_4_ = (this->fields).scale.x;
    uStack_2._4_4_ = (this->fields).scale.y;
    (*(requirement->klass->vtable).__unknown_9.methodPtr)
              (requirement,&uStack_2,(requirement->klass->vtable).__unknown_9.method);
    return 1;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


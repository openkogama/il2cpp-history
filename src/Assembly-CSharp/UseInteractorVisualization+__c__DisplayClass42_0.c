
/* Boolean <DestroyRequirementObjects>b__1(UseRequirement) */

bool Assembly-CSharp.dll::UseInteractorVisualization+<>c__DisplayClass42_0::
     UseInteractorVisualization_c_DisplayClass42_0__DestroyRequirementObjects_b__1
               (UseInteractorVisualization_c_DisplayClass42_0 *this,UseRequirement *requirement,
               MethodInfo *method)

{
  if (requirement != (UseRequirement *)0x0) {
    (*(requirement->klass->vtable).__unknown_2.methodPtr)
              (requirement,(this->fields).data,(requirement->klass->vtable).__unknown_2.method);
    return 1;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


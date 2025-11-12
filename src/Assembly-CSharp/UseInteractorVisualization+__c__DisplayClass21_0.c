
/* Boolean <OnStateChanged>b__0(UseRequirement) */

bool Assembly-CSharp.dll::UseInteractorVisualization+<>c__DisplayClass21_0::
     UseInteractorVisualization_c_DisplayClass21_0__OnStateChanged_b__0
               (UseInteractorVisualization_c_DisplayClass21_0 *this,UseRequirement *requirement,
               MethodInfo *method)

{
  bVar1 = (this->fields).isVisible;
  if (requirement != (UseRequirement *)0x0) {
    this_00 = (GameObject *)
              (*(requirement->klass->vtable).__unknown_10.methodPtr)
                        (requirement,(requirement->klass->vtable).__unknown_10.method);
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,bVar1,(MethodInfo *)0x0);
      return 1;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


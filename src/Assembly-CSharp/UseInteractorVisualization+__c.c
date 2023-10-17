
/* Boolean <Disable>b__33_1(UseRequirement) */

bool Assembly-CSharp.dll::UseInteractorVisualization+<>c::
     UseInteractorVisualization_c__Disable_b__33_1
               (UseInteractorVisualization_c *this,UseRequirement *requirement,MethodInfo *method)

{
  if (requirement != (UseRequirement *)0x0) {
    this_00 = (GameObject *)(*(requirement->klass->vtable).__unknown_10.methodPtr)();
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,0,(MethodInfo *)0x0);
      return 1;
    }
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean <PayUseCost>b__41_1(UseRequirement) */

bool Assembly-CSharp.dll::UseInteractorVisualization+<>c::
     UseInteractorVisualization_c__PayUseCost_b__41_1
               (UseInteractorVisualization_c *this,UseRequirement *requirement,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  if (requirement != (UseRequirement *)0x0) {
    pMStack_1 = (requirement->klass->vtable).__unknown_1.method;
    pUStack_2 = requirement;
    (*(requirement->klass->vtable).__unknown_1.methodPtr)();
    return 1;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* UseInteractorVisualization+<>c() */

void Assembly-CSharp.dll::UseInteractorVisualization+<>c::UseInteractorVisualization_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UseInteractorVisualization____c);
    cRam_? = '\x01';
  }
  value = (UseInteractorVisualization_c *)func_?(TypeInfo__UseInteractorVisualization____c)
  ;
  if (value != (UseInteractorVisualization_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__UseInteractorVisualization____c->static_fields->__9 = value;
    func_?(TypeInfo__UseInteractorVisualization____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


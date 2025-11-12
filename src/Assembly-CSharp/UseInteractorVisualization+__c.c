
/* Boolean <Disable>b__33_1(UseRequirement) */

bool Assembly-CSharp.dll::UseInteractorVisualization+<>c::
     UseInteractorVisualization_c__Disable_b__33_1
               (UseInteractorVisualization_c *this,UseRequirement *requirement,MethodInfo *method)

{
  if (requirement != (UseRequirement *)0x0) {
    this_00 = (GameObject *)(*(requirement->klass->vtable).__unknown_10.methodPtr)(requirement);
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,0,(MethodInfo *)0x0);
      return 1;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Boolean <PayUseCost>b__41_1(UseRequirement) */

bool Assembly-CSharp.dll::UseInteractorVisualization+<>c::
     UseInteractorVisualization_c__PayUseCost_b__41_1
               (UseInteractorVisualization_c *this,UseRequirement *requirement,MethodInfo *method)

{
  if (requirement != (UseRequirement *)0x0) {
    (*(requirement->klass->vtable).__unknown_1.methodPtr)
              (requirement,(requirement->klass->vtable).__unknown_1.method);
    return 1;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* UseInteractorVisualization+<>c() */

void Assembly-CSharp.dll::UseInteractorVisualization+<>c::UseInteractorVisualization_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UseInteractorVisualization____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pUVar1 = (UseInteractorVisualization_c *)FUN_?(TypeInfo__UseInteractorVisualization____c);
  TypeInfo__UseInteractorVisualization____c->static_fields->__9 = pUVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__UseInteractorVisualization____c->static_fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}



/* Void HandlePackage(MVWorldObjectClient, MVPlayer, Single, PlayerKilledByType, Vector3,
   AvatarModifierPackageType) */

void Assembly-CSharp.dll::InteractionPackage::InteractionPackage_HandlePackage
               (InteractionPackage *this,MVWorldObjectClient *target,MVPlayer *shooter,float damage,
               PlayerKilledByType__Enum killedByType,Vector3 impulse,
               AvatarModifierPackageType__Enum modType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (target != (MVWorldObjectClient *)0x0) {
    pCVar1 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                       ((DayNightCycle *)target,(MethodInfo *)0x0);
    if (pCVar1 != (CelestialParam *)0x0) {
      targetInteractable =
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                     ((GameObject *)pCVar1,
                      MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                     );
      bVar2 = InteractionPackage_IsSpawnProtected
                        (this,(MVInteractableBase *)targetInteractable,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)targetInteractable,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          if (targetInteractable == (UseInteractorHandler *)0x0) goto code_?;
          (*targetInteractable->klass[1]._0.gc_desc)
                    (targetInteractable,damage,shooter,killedByType,
                     targetInteractable->klass[1]._0.name);
          if (shooter == (MVPlayer *)0x0) goto code_?;
          pSVar3 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                   NamedThemeAttribute_1_UnityEngine_Color__get_Name
                             ((NamedThemeAttribute_1_UnityEngine_Color_ *)shooter,(MethodInfo *)0x0)
          ;
          (*(code *)targetInteractable->klass[1]._0.namespaze)
                    (targetInteractable,modType,pSVar3,0,
                     targetInteractable->klass[1]._0.byval_arg.data.dummy);
        }
        pCVar1 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                           ((DayNightCycle *)target,(MethodInfo *)0x0);
        if (pCVar1 == (CelestialParam *)0x0) goto code_?;
        this_00 = (MVRigidBody *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                            ((GameObject *)pCVar1,
                             MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                            );
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          if (this_00 == (MVRigidBody *)0x0) goto code_?;
          MVRigidBody::MVRigidBody_AddImpulse(this_00,shooter,impulse,1,(MethodInfo *)0x0);
        }
      }
      return;
    }
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandlePackage(MVWorldObjectClient, MVPlayer, Single, PlayerKilledByType, Vector3) */

void Assembly-CSharp.dll::InteractionPackage::InteractionPackage_HandlePackage_1
               (InteractionPackage *this,MVWorldObjectClient *target,MVPlayer *shooter,float damage,
               PlayerKilledByType__Enum killedByType,Vector3 impulse,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (target != (MVWorldObjectClient *)0x0) {
    pCVar1 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                       ((DayNightCycle *)target,(MethodInfo *)0x0);
    if (pCVar1 != (CelestialParam *)0x0) {
      targetInteractable =
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                     ((GameObject *)pCVar1,
                      MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                     );
      bVar2 = InteractionPackage_IsSpawnProtected
                        (this,(MVInteractableBase *)targetInteractable,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          shooter = (MVPlayer *)TypeInfo__UnityEngine__Object;
          func_?();
        }
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)targetInteractable,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          if (targetInteractable == (UseInteractorHandler *)0x0) goto code_?;
          (*targetInteractable->klass[1]._0.gc_desc)
                    (targetInteractable,damage,shooter,killedByType,
                     targetInteractable->klass[1]._0.name);
        }
        pCVar1 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                           ((DayNightCycle *)target,(MethodInfo *)0x0);
        if (pCVar1 == (CelestialParam *)0x0) goto code_?;
        this_00 = (MVRigidBody *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                            ((GameObject *)pCVar1,
                             MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                            );
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          if (this_00 == (MVRigidBody *)0x0) goto code_?;
          MVRigidBody::MVRigidBody_AddImpulse(this_00,shooter,impulse,1,(MethodInfo *)0x0);
        }
      }
      return;
    }
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void HandlePackage(MVWorldObjectClient, MVPlayer, Single, PlayerKilledByType) */

void Assembly-CSharp.dll::InteractionPackage::InteractionPackage_HandlePackage_2
               (InteractionPackage *this,MVWorldObjectClient *target,MVPlayer *shooter,float damage,
               PlayerKilledByType__Enum killedByType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (target != (MVWorldObjectClient *)0x0) {
    this_00 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                        ((DayNightCycle *)target,(MethodInfo *)0x0);
    if (this_00 != (CelestialParam *)0x0) {
      targetInteractable =
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                     ((GameObject *)this_00,
                      MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                     );
      bVar1 = InteractionPackage_IsSpawnProtected
                        (this,(MVInteractableBase *)targetInteractable,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          damage = (float)TypeInfo__UnityEngine__Object;
          shooter = (MVPlayer *)&UNK_?;
          func_?();
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)targetInteractable,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          if (targetInteractable == (UseInteractorHandler *)0x0) goto code_?;
          (*targetInteractable->klass[1]._0.gc_desc)
                    (targetInteractable,damage,shooter,killedByType,
                     targetInteractable->klass[1]._0.name);
        }
      }
      return;
    }
  }
code_?:
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HandlePackage(MVWorldObjectClient, MVPlayer, Vector3, AvatarModifierPackageType) */

void Assembly-CSharp.dll::InteractionPackage::InteractionPackage_HandlePackage_3
               (InteractionPackage *this,MVWorldObjectClient *target,MVPlayer *shooter,
               Vector3 impulse,AvatarModifierPackageType__Enum modifierType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (target != (MVWorldObjectClient *)0x0) {
    pCVar1 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                       ((DayNightCycle *)target,(MethodInfo *)0x0);
    if (pCVar1 != (CelestialParam *)0x0) {
      targetInteractable =
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                     ((GameObject *)pCVar1,
                      MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                     );
      bVar2 = InteractionPackage_IsSpawnProtected
                        (this,(MVInteractableBase *)targetInteractable,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)targetInteractable,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          if (shooter == (MVPlayer *)0x0) goto code_?;
          pSVar3 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                   NamedThemeAttribute_1_UnityEngine_Color__get_Name
                             ((NamedThemeAttribute_1_UnityEngine_Color_ *)shooter,(MethodInfo *)0x0)
          ;
          if (targetInteractable == (UseInteractorHandler *)0x0) goto code_?;
          (*(code *)targetInteractable->klass[1]._0.namespaze)
                    (targetInteractable,modifierType,pSVar3,0,
                     targetInteractable->klass[1]._0.byval_arg.data.dummy);
        }
        pCVar1 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                           ((DayNightCycle *)target,(MethodInfo *)0x0);
        if (pCVar1 == (CelestialParam *)0x0) goto code_?;
        this_00 = (MVRigidBody *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                            ((GameObject *)pCVar1,
                             MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                            );
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          if (this_00 == (MVRigidBody *)0x0) goto code_?;
          MVRigidBody::MVRigidBody_AddImpulse(this_00,shooter,impulse,1,(MethodInfo *)0x0);
        }
      }
      return;
    }
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandlePackage(MVWorldObjectClient, Vector3, AvatarModifierPackageType) */

void Assembly-CSharp.dll::InteractionPackage::InteractionPackage_HandlePackage_4
               (InteractionPackage *this,MVWorldObjectClient *target,Vector3 impulse,
               AvatarModifierPackageType__Enum modifierType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (target != (MVWorldObjectClient *)0x0) {
    pCVar1 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                       ((DayNightCycle *)target,(MethodInfo *)0x0);
    if (pCVar1 != (CelestialParam *)0x0) {
      targetInteractable =
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                     ((GameObject *)pCVar1,
                      MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                     );
      bVar2 = InteractionPackage_IsSpawnProtected
                        (this,(MVInteractableBase *)targetInteractable,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          impulse.x = (float)TypeInfo__UnityEngine__Object;
          func_?();
        }
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)targetInteractable,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          if (targetInteractable == (UseInteractorHandler *)0x0) goto code_?;
          (*(code *)targetInteractable->klass[1]._0.namespaze)
                    (targetInteractable,modifierType,0xffffffff,0,
                     targetInteractable->klass[1]._0.byval_arg.data.dummy);
        }
        pCVar1 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                           ((DayNightCycle *)target,(MethodInfo *)0x0);
        if (pCVar1 == (CelestialParam *)0x0) goto code_?;
        this_00 = (MVRigidBody *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                            ((GameObject *)pCVar1,
                             MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                            );
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          if (this_00 == (MVRigidBody *)0x0) goto code_?;
          impulse_00.y = impulse.y;
          impulse_00.x = impulse.x;
          impulse_00.z = impulse.z;
          MVRigidBody::MVRigidBody_AddImpulse
                    (this_00,(MVPlayer *)0x0,impulse_00,1,(MethodInfo *)0x0);
        }
      }
      return;
    }
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void HandlePackage(MVWorldObjectClient, MVPlayer, Vector3) */

void Assembly-CSharp.dll::InteractionPackage::InteractionPackage_HandlePackage_5
               (InteractionPackage *this,MVWorldObjectClient *target,MVPlayer *shooter,
               Vector3 impulse,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (target != (MVWorldObjectClient *)0x0) {
    pCVar1 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                       ((DayNightCycle *)target,(MethodInfo *)0x0);
    if (pCVar1 != (CelestialParam *)0x0) {
      targetInteractable =
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                     ((GameObject *)pCVar1,
                      MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                     );
      bVar2 = InteractionPackage_IsSpawnProtected
                        (this,(MVInteractableBase *)targetInteractable,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        pCVar1 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                           ((DayNightCycle *)target,(MethodInfo *)0x0);
        pMVar3 = MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__;
        if (pCVar1 == (CelestialParam *)0x0) goto code_?;
        this_00 = (MVRigidBody *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                            ((GameObject *)pCVar1,
                             MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                            );
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          if (this_00 == (MVRigidBody *)0x0) goto code_?;
          impulse_00.y = (float)pCVar1;
          impulse_00.x = (float)&UNK_?;
          impulse_00.z = (float)pMVar3;
          MVRigidBody::MVRigidBody_AddImpulse
                    (this_00,(MVPlayer *)target,impulse_00,1,(MethodInfo *)0x0);
        }
      }
      return;
    }
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandlePackage(MVWorldObjectClient, MVPlayer, AvatarModifierPackageType) */

void Assembly-CSharp.dll::InteractionPackage::InteractionPackage_HandlePackage_6
               (InteractionPackage *this,MVWorldObjectClient *target,MVPlayer *shooter,
               AvatarModifierPackageType__Enum modifierType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((target != (MVWorldObjectClient *)0x0) &&
     (this_00 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                          ((DayNightCycle *)target,(MethodInfo *)0x0),
     this_00 != (CelestialParam *)0x0)) {
    targetInteractable =
         UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                   ((GameObject *)this_00,
                    MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                   );
    bVar1 = InteractionPackage_IsSpawnProtected
                      (this,(MVInteractableBase *)targetInteractable,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        modifierType = (AvatarModifierPackageType__Enum)TypeInfo__UnityEngine__Object;
        shooter = (MVPlayer *)&UNK_?;
        func_?();
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)targetInteractable,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        if ((shooter != (MVPlayer *)0x0) &&
           (pSVar2 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                     NamedThemeAttribute_1_UnityEngine_Color__get_Name
                               ((NamedThemeAttribute_1_UnityEngine_Color_ *)shooter,
                                (MethodInfo *)0x0),
           targetInteractable != (UseInteractorHandler *)0x0)) {
          (*(code *)targetInteractable->klass[1]._0.namespaze)
                    (targetInteractable,modifierType,pSVar2,0,
                     targetInteractable->klass[1]._0.byval_arg.data.dummy);
          return;
        }
        goto code_?;
      }
    }
    return;
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean IsSpawnProtected(MVInteractableBase) */

bool Assembly-CSharp.dll::InteractionPackage::InteractionPackage_IsSpawnProtected
               (InteractionPackage *this,MVInteractableBase *targetInteractable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)targetInteractable,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return 0;
  }
  if (targetInteractable != (MVInteractableBase *)0x0) {
    cVar2 = (*(code *)(targetInteractable->klass->vtable).__unknown_2.method)
                      (targetInteractable,0x11);
    return cVar2 != '\0';
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Boolean IsValidTarget(MVPlayer, MVWorldObjectClient, MVInteractableBase) */

bool Assembly-CSharp.dll::InteractionPackage::InteractionPackage_IsValidTarget
               (InteractionPackage *this,MVPlayer *shooter,MVWorldObjectClient *target,
               MVInteractableBase *targetInteractable,MethodInfo *method)

{
  bVar1 = InteractionPackage_IsSpawnProtected(this,targetInteractable,(MethodInfo *)0x0);
  return bVar1 == 0;
}



/* Void HandlePackage(MVWorldObjectClient, MVPlayer, Single, PlayerKilledByType, Vector3,
   AvatarModifierPackageType) */

void Assembly-CSharp.dll::InteractionPackage::InteractionPackage_HandlePackage
               (InteractionPackage *this,MVWorldObjectClient *target,MVPlayer *shooter,float damage,
               PlayerKilledByType__Enum killedByType,Vector3 impulse,
               AvatarModifierPackageType__Enum modType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                   );
    func_?(&MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((target != (MVWorldObjectClient *)0x0) &&
     (pGVar1 = (target->fields).gameObject, pGVar1 != (GameObject *)0x0)) {
    x = (Object_1 *)
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                  (pGVar1,
                   MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                  );
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if (x == (Object_1 *)0x0) goto code_?;
      cVar3 = (*(code *)x->klass[1]._0.castClass)(x,0x11,x->klass[1]._0.declaringType);
      if (cVar3 != '\0') {
        return;
      }
    }
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if ((x == (Object_1 *)0x0) ||
         ((*(code *)x->klass[1]._0.namespaze)
                    (x,damage,shooter,killedByType,x->klass[1]._0.byval_arg.data.dummy),
         shooter == (MVPlayer *)0x0)) goto code_?;
      (**(code **)&x->klass[1]._0.this_arg.attrs)
                (x,modType,(shooter->fields)._ActorNr_k__BackingField,0,x->klass[1]._0.element_class
                );
    }
    pGVar1 = (target->fields).gameObject;
    if (pGVar1 != (GameObject *)0x0) {
      this_00 = (MVRigidBody *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (pGVar1,
                           MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                          );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        if (this_00 == (MVRigidBody *)0x0) goto code_?;
        MVRigidBody::MVRigidBody_AddImpulse(this_00,shooter,impulse,1,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
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
    func_?(&
                    MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                   );
    func_?(&MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((target != (MVWorldObjectClient *)0x0) &&
     (pGVar1 = (target->fields).gameObject, pGVar1 != (GameObject *)0x0)) {
    x = (Object_1 *)
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                  (pGVar1,
                   MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                  );
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if (x == (Object_1 *)0x0) goto code_?;
      cVar3 = (*(code *)x->klass[1]._0.castClass)(x,0x11,x->klass[1]._0.declaringType);
      if (cVar3 != '\0') {
        return;
      }
    }
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if (x == (Object_1 *)0x0) goto code_?;
      (*(code *)x->klass[1]._0.namespaze)
                (x,damage,shooter,killedByType,x->klass[1]._0.byval_arg.data.dummy);
    }
    pGVar1 = (target->fields).gameObject;
    if (pGVar1 != (GameObject *)0x0) {
      this_00 = (MVRigidBody *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (pGVar1,
                           MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                          );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        if (this_00 == (MVRigidBody *)0x0) goto code_?;
        MVRigidBody::MVRigidBody_AddImpulse(this_00,shooter,impulse,1,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandlePackage(MVWorldObjectClient, MVPlayer, Single, PlayerKilledByType) */

void Assembly-CSharp.dll::InteractionPackage::InteractionPackage_HandlePackage_2
               (InteractionPackage *this,MVWorldObjectClient *target,MVPlayer *shooter,float damage,
               PlayerKilledByType__Enum killedByType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((target != (MVWorldObjectClient *)0x0) &&
     (this_00 = (target->fields).gameObject, this_00 != (GameObject *)0x0)) {
    x = (Object_1 *)
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                  (this_00,
                   MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                  );
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if (x == (Object_1 *)0x0) goto code_?;
      cVar2 = (*(code *)x->klass[1]._0.castClass)(x,0x11,x->klass[1]._0.declaringType);
      if (cVar2 != '\0') {
        return;
      }
    }
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if (x == (Object_1 *)0x0) goto code_?;
      (*(code *)x->klass[1]._0.namespaze)
                (x,damage,shooter,killedByType,x->klass[1]._0.byval_arg.data.dummy);
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void HandlePackage(MVWorldObjectClient, MVPlayer, Vector3, AvatarModifierPackageType) */

void Assembly-CSharp.dll::InteractionPackage::InteractionPackage_HandlePackage_3
               (InteractionPackage *this,MVWorldObjectClient *target,MVPlayer *shooter,
               Vector3 impulse,AvatarModifierPackageType__Enum modifierType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                   );
    func_?(&MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((target != (MVWorldObjectClient *)0x0) &&
     (pGVar1 = (target->fields).gameObject, pGVar1 != (GameObject *)0x0)) {
    x = (Object_1 *)
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                  (pGVar1,
                   MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                  );
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if (x == (Object_1 *)0x0) goto code_?;
      cVar3 = (*(code *)x->klass[1]._0.castClass)(x,0x11,x->klass[1]._0.declaringType);
      if (cVar3 != '\0') {
        return;
      }
    }
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if ((shooter == (MVPlayer *)0x0) || (x == (Object_1 *)0x0)) goto code_?;
      (**(code **)&x->klass[1]._0.this_arg.attrs)
                (x,modifierType,(shooter->fields)._ActorNr_k__BackingField,0,
                 x->klass[1]._0.element_class);
    }
    pGVar1 = (target->fields).gameObject;
    if (pGVar1 != (GameObject *)0x0) {
      this_00 = (MVRigidBody *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (pGVar1,
                           MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                          );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        if (this_00 == (MVRigidBody *)0x0) goto code_?;
        MVRigidBody::MVRigidBody_AddImpulse(this_00,shooter,impulse,1,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
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
    func_?(&
                    MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                   );
    func_?(&MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
    func_?();
    cRam_? = '\x01';
  }
  if ((target != (MVWorldObjectClient *)0x0) &&
     (pGVar1 = (target->fields).gameObject, pGVar1 != (GameObject *)0x0)) {
    pOVar2 = (Object_1 *)&UNK_?;
    pIVar3 = (Il2CppClass *)
             MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
    ;
    x = (Object_1 *)
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                  (pGVar1,
                   MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                  );
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      if (x == (Object_1 *)0x0) goto code_?;
      pIVar3 = x->klass[1]._0.declaringType;
      pGVar1 = (GameObject *)0x11;
      pOVar2 = x;
      cVar5 = (*(code *)x->klass[1]._0.castClass)();
      if (cVar5 != '\0') {
        return;
      }
    }
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object,pOVar2,pGVar1,pIVar3);
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      if (x == (Object_1 *)0x0) goto code_?;
      (**(code **)&x->klass[1]._0.this_arg.attrs)
                (x,modifierType,0xffffffff,0,x->klass[1]._0.element_class);
    }
    pGVar1 = (target->fields).gameObject;
    if (pGVar1 != (GameObject *)0x0) {
      this_00 = (Behaviour *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (pGVar1,
                           MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                          );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        if (this_00 == (Behaviour *)0x0) goto code_?;
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                         );
          cRam_? = '\x01';
        }
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                          (this_00,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          if (this_00[3].monitor == (MonitorData *)0x0) goto code_?;
          func_?(this_00[3].monitor,impulse._0_8_,impulse.z,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                         );
          (*(code *)this_00->klass[1]._0.typeMetadataHandle)
                    (this_00,this_00->klass[1]._0.interopData);
        }
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void HandlePackage(MVWorldObjectClient, MVPlayer, Vector3) */

void Assembly-CSharp.dll::InteractionPackage::InteractionPackage_HandlePackage_5
               (InteractionPackage *this,MVWorldObjectClient *target,MVPlayer *shooter,
               Vector3 impulse,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                   );
    func_?(&MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((target != (MVWorldObjectClient *)0x0) &&
     (pGVar1 = (target->fields).gameObject, pGVar1 != (GameObject *)0x0)) {
    x = (Object_1 *)
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                  (pGVar1,
                   MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                  );
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if (x == (Object_1 *)0x0) goto code_?;
      cVar3 = (*(code *)x->klass[1]._0.castClass)(x,0x11,x->klass[1]._0.declaringType);
      if (cVar3 != '\0') {
        return;
      }
    }
    pGVar1 = (target->fields).gameObject;
    if (pGVar1 != (GameObject *)0x0) {
      this_00 = (MVRigidBody *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (pGVar1,
                           MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                          );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        if (this_00 == (MVRigidBody *)0x0) goto code_?;
        MVRigidBody::MVRigidBody_AddImpulse(this_00,shooter,impulse,1,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
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
    func_?(&
                    MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((target != (MVWorldObjectClient *)0x0) &&
     (this_00 = (target->fields).gameObject, this_00 != (GameObject *)0x0)) {
    x = (Object_1 *)
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                  (this_00,
                   MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                  );
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if (x == (Object_1 *)0x0) goto code_?;
      cVar2 = (*(code *)x->klass[1]._0.castClass)(x,0x11,x->klass[1]._0.declaringType);
      if (cVar2 != '\0') {
        return;
      }
    }
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((shooter == (MVPlayer *)0x0) || (x == (Object_1 *)0x0)) goto code_?;
      (**(code **)&x->klass[1]._0.this_arg.attrs)
                (x,modifierType,(shooter->fields)._ActorNr_k__BackingField,0,
                 x->klass[1]._0.element_class);
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean IsSpawnProtected(MVInteractableBase) */

bool Assembly-CSharp.dll::InteractionPackage::InteractionPackage_IsSpawnProtected
               (InteractionPackage *this,MVInteractableBase *targetInteractable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)targetInteractable,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return 0;
  }
  if (targetInteractable != (MVInteractableBase *)0x0) {
    bVar1 = (*(code *)(targetInteractable->klass->vtable).__unknown_3.method)
                      (targetInteractable,0x11);
    return bVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean IsValidTarget(MVPlayer, MVWorldObjectClient, MVInteractableBase) */

bool Assembly-CSharp.dll::InteractionPackage::InteractionPackage_IsValidTarget
               (InteractionPackage *this,MVPlayer *shooter,MVWorldObjectClient *target,
               MVInteractableBase *targetInteractable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)targetInteractable,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return 1;
  }
  if (targetInteractable != (MVInteractableBase *)0x0) {
    cVar2 = (*(code *)(targetInteractable->klass->vtable).__unknown_3.method)
                      (targetInteractable,0x11);
    return cVar2 == '\0';
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


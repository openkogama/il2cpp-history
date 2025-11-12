
/* Void HandlePackage(MVWorldObjectClient, MVPlayer, Single, PlayerKilledByType, Vector3,
   AvatarModifierPackageType) */

void Assembly-CSharp.dll::InteractionPackage::InteractionPackage_HandlePackage
               (InteractionPackage *this,MVWorldObjectClient *target,MVPlayer *shooter,float damage,
               PlayerKilledByType__Enum killedByType,Vector3 *impulse,
               AvatarModifierPackageType__Enum modType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((target != (MVWorldObjectClient *)0x0) &&
     (pGVar1 = (target->fields).gameObject, pGVar1 != (GameObject *)0x0)) {
    targetInteractable =
         (MVInteractableBase *)
         UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                   (pGVar1,
                    MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                   );
    bVar2 = InteractionPackage_IsSpawnProtected(this,targetInteractable,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (targetInteractable != (MVInteractableBase *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((targetInteractable->fields)._._._._._.m_CachedPtr != (void *)0x0) {
          (*(targetInteractable->klass->vtable).__unknown.methodPtr)
                    (targetInteractable,damage,shooter,(ulonglong)(byte)(undefined1)killedByType,
                     (targetInteractable->klass->vtable).__unknown.method);
          if (shooter == (MVPlayer *)0x0) goto code_?;
          (*(targetInteractable->klass->vtable).__unknown_4.methodPtr)
                    (targetInteractable,(ulonglong)modType,
                     (ulonglong)(uint)(shooter->fields)._ActorNr_k__BackingField,0,
                     (targetInteractable->klass->vtable).__unknown_4.method);
        }
      }
      pGVar1 = (target->fields).gameObject;
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      this_00 = (MVRigidBody *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (pGVar1,
                           MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                          );
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (this_00 != (MVRigidBody *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((this_00->fields)._._._._._.m_CachedPtr != (void *)0x0) {
          aVStack_3[0].x = impulse->x;
          aVStack_3[0].y = impulse->y;
          aVStack_3[0].z = impulse->z;
          MVRigidBody::MVRigidBody_AddImpulse(this_00,shooter,aVStack_3,1,(MethodInfo *)0x0);
        }
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandlePackage(MVWorldObjectClient, MVPlayer, Single, PlayerKilledByType, Vector3) */

void Assembly-CSharp.dll::InteractionPackage::InteractionPackage_HandlePackage_1
               (InteractionPackage *this,MVWorldObjectClient *target,MVPlayer *shooter,float damage,
               PlayerKilledByType__Enum killedByType,Vector3 *impulse,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((target != (MVWorldObjectClient *)0x0) &&
     (pGVar1 = (target->fields).gameObject, pGVar1 != (GameObject *)0x0)) {
    targetInteractable =
         (MVInteractableBase *)
         UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                   (pGVar1,
                    MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                   );
    bVar2 = InteractionPackage_IsSpawnProtected(this,targetInteractable,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (targetInteractable != (MVInteractableBase *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((targetInteractable->fields)._._._._._.m_CachedPtr != (void *)0x0) {
          (*(targetInteractable->klass->vtable).__unknown.methodPtr)
                    (targetInteractable,damage,shooter,(ulonglong)(byte)(undefined1)killedByType,
                     (targetInteractable->klass->vtable).__unknown.method);
        }
      }
      pGVar1 = (target->fields).gameObject;
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      this_00 = (MVRigidBody *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (pGVar1,
                           MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                          );
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (this_00 != (MVRigidBody *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((this_00->fields)._._._._._.m_CachedPtr != (void *)0x0) {
          aVStack_3[0].x = impulse->x;
          aVStack_3[0].y = impulse->y;
          aVStack_3[0].z = impulse->z;
          MVRigidBody::MVRigidBody_AddImpulse(this_00,shooter,aVStack_3,1,(MethodInfo *)0x0);
        }
      }
    }
    return;
  }
code_?:
  FUN_?();
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
    FUN_?(&
                  MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((target != (MVWorldObjectClient *)0x0) &&
     (this_00 = (target->fields).gameObject, this_00 != (GameObject *)0x0)) {
    targetInteractable =
         (MVInteractableBase *)
         UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                   (this_00,
                    MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                   );
    bVar1 = InteractionPackage_IsSpawnProtected(this,targetInteractable,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (targetInteractable != (MVInteractableBase *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((targetInteractable->fields)._._._._._.m_CachedPtr != (void *)0x0) {
          (*(targetInteractable->klass->vtable).__unknown.methodPtr)
                    (targetInteractable,damage,shooter,(ulonglong)(byte)(undefined1)killedByType,
                     (targetInteractable->klass->vtable).__unknown.method);
        }
      }
    }
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HandlePackage(MVWorldObjectClient, MVPlayer, Vector3, AvatarModifierPackageType) */

void Assembly-CSharp.dll::InteractionPackage::InteractionPackage_HandlePackage_3
               (InteractionPackage *this,MVWorldObjectClient *target,MVPlayer *shooter,
               Vector3 *impulse,AvatarModifierPackageType__Enum modifierType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((target != (MVWorldObjectClient *)0x0) &&
     (pGVar1 = (target->fields).gameObject, pGVar1 != (GameObject *)0x0)) {
    targetInteractable =
         (MVInteractableBase *)
         UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                   (pGVar1,
                    MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                   );
    bVar2 = InteractionPackage_IsSpawnProtected(this,targetInteractable,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (targetInteractable != (MVInteractableBase *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((targetInteractable->fields)._._._._._.m_CachedPtr != (void *)0x0) {
          if (shooter == (MVPlayer *)0x0) goto code_?;
          (*(targetInteractable->klass->vtable).__unknown_4.methodPtr)
                    (targetInteractable,(ulonglong)modifierType,
                     (ulonglong)(uint)(shooter->fields)._ActorNr_k__BackingField,0,
                     (targetInteractable->klass->vtable).__unknown_4.method);
        }
      }
      pGVar1 = (target->fields).gameObject;
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      this_00 = (MVRigidBody *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (pGVar1,
                           MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                          );
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (this_00 != (MVRigidBody *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((this_00->fields)._._._._._.m_CachedPtr != (void *)0x0) {
          VStack_3.x = impulse->x;
          VStack_3.y = impulse->y;
          VStack_3.z = impulse->z;
          MVRigidBody::MVRigidBody_AddImpulse(this_00,shooter,&VStack_3,1,(MethodInfo *)0x0);
        }
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandlePackage(MVWorldObjectClient, Vector3, AvatarModifierPackageType) */

void Assembly-CSharp.dll::InteractionPackage::InteractionPackage_HandlePackage_4
               (InteractionPackage *this,MVWorldObjectClient *target,Vector3 *impulse,
               AvatarModifierPackageType__Enum modifierType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((target != (MVWorldObjectClient *)0x0) &&
     (pGVar1 = (target->fields).gameObject, pGVar1 != (GameObject *)0x0)) {
    targetInteractable =
         (MVInteractableBase *)
         UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                   (pGVar1,
                    MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                   );
    bVar2 = InteractionPackage_IsSpawnProtected(this,targetInteractable,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (targetInteractable != (MVInteractableBase *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((targetInteractable->fields)._._._._._.m_CachedPtr != (void *)0x0) {
          (*(targetInteractable->klass->vtable).__unknown_4.methodPtr)
                    (targetInteractable,(ulonglong)modifierType,0xffffffff,0,
                     (targetInteractable->klass->vtable).__unknown_4.method);
        }
      }
      pGVar1 = (target->fields).gameObject;
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      this_00 = (MVRigidBody *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (pGVar1,
                           MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                          );
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (this_00 != (MVRigidBody *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((this_00->fields)._._._._._.m_CachedPtr != (void *)0x0) {
          VStack_3.x = impulse->x;
          VStack_3.y = impulse->y;
          VStack_3.z = impulse->z;
          MVRigidBody::MVRigidBody_AddImpulse_1(this_00,&VStack_3,1,(MethodInfo *)0x0);
        }
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandlePackage(MVWorldObjectClient, MVPlayer, Vector3) */

void Assembly-CSharp.dll::InteractionPackage::InteractionPackage_HandlePackage_5
               (InteractionPackage *this,MVWorldObjectClient *target,MVPlayer *shooter,
               Vector3 *impulse,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((target != (MVWorldObjectClient *)0x0) &&
     (pGVar1 = (target->fields).gameObject, pGVar1 != (GameObject *)0x0)) {
    targetInteractable =
         (MVInteractableBase *)
         UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                   (pGVar1,
                    MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                   );
    bVar2 = InteractionPackage_IsSpawnProtected(this,targetInteractable,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pGVar1 = (target->fields).gameObject;
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      this_00 = (MVRigidBody *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (pGVar1,
                           MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                          );
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (this_00 != (MVRigidBody *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((this_00->fields)._._._._._.m_CachedPtr != (void *)0x0) {
          VStack_3.x = impulse->x;
          VStack_3.y = impulse->y;
          VStack_3.z = impulse->z;
          MVRigidBody::MVRigidBody_AddImpulse(this_00,shooter,&VStack_3,1,(MethodInfo *)0x0);
        }
      }
    }
    return;
  }
code_?:
  FUN_?();
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
    FUN_?(&
                  MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((target != (MVWorldObjectClient *)0x0) &&
     (this_00 = (target->fields).gameObject, this_00 != (GameObject *)0x0)) {
    targetInteractable =
         (MVInteractableBase *)
         UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                   (this_00,
                    MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                   );
    bVar1 = InteractionPackage_IsSpawnProtected(this,targetInteractable,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (targetInteractable != (MVInteractableBase *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((targetInteractable->fields)._._._._._.m_CachedPtr != (void *)0x0) {
          if (shooter == (MVPlayer *)0x0) goto code_?;
          (*(targetInteractable->klass->vtable).__unknown_4.methodPtr)
                    (targetInteractable,modifierType,
                     (ulonglong)(uint)(shooter->fields)._ActorNr_k__BackingField,0,
                     (targetInteractable->klass->vtable).__unknown_4.method);
        }
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean IsSpawnProtected(MVInteractableBase) */

bool Assembly-CSharp.dll::InteractionPackage::InteractionPackage_IsSpawnProtected
               (InteractionPackage *this,MVInteractableBase *targetInteractable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (targetInteractable != (MVInteractableBase *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((targetInteractable->fields)._._._._._.m_CachedPtr != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      bVar1 = (*(targetInteractable->klass->vtable).__unknown_5.methodPtr)
                        (targetInteractable,0x11,
                         (targetInteractable->klass->vtable).__unknown_5.method);
      return bVar1;
    }
  }
  return 0;
}


/* Boolean IsValidTarget(MVPlayer, MVWorldObjectClient, MVInteractableBase) */

bool Assembly-CSharp.dll::InteractionPackage::InteractionPackage_IsValidTarget
               (InteractionPackage *this,MVPlayer *shooter,MVWorldObjectClient *target,
               MVInteractableBase *targetInteractable,MethodInfo *method)

{
  bVar1 = InteractionPackage_IsSpawnProtected(this,targetInteractable,(MethodInfo *)0x0);
  return bVar1 ^ 1;
}


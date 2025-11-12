
/* InteractionData Create() */

InteractionData *
Assembly-CSharp.dll::MouseGunHitPackage::MouseGunHitPackage_Create
          (InteractionData *__return_storage_ptr__,MethodInfo *method)

{
  __return_storage_ptr__->damage = 0.0;
  (__return_storage_ptr__->impulse).x = 0.0;
  (__return_storage_ptr__->impulse).y = 0.0;
  (__return_storage_ptr__->impulse).z = 0.0;
  __return_storage_ptr__->interactionType = 0;
  __return_storage_ptr__->playerKilledByType = 0;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = 0;
  MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor
            (__return_storage_ptr__,CONCAT31((int3)((ulonglong)method >> 8),0x10),(MethodInfo *)0x0)
  ;
  return __return_storage_ptr__;
}


/* Void ParseAndHandlePackage(MVWorldObjectClient, MVPlayer, InteractionData) */

void Assembly-CSharp.dll::MouseGunHitPackage::MouseGunHitPackage_ParseAndHandlePackage
               (MouseGunHitPackage *this,MVWorldObjectClient *worldObjectClient,MVPlayer *shooter,
               InteractionData *interactionStruct,MethodInfo *method)

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
  if ((worldObjectClient != (MVWorldObjectClient *)0x0) &&
     (this_00 = (worldObjectClient->fields).gameObject, this_00 != (GameObject *)0x0)) {
    targetInteractable =
         (MVInteractableBase *)
         UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                   (this_00,
                    MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                   );
    bVar1 = InteractionPackage::InteractionPackage_IsSpawnProtected
                      ((InteractionPackage *)this,targetInteractable,(MethodInfo *)0x0);
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
                    (targetInteractable,0xc,
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


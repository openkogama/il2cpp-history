
/* InteractionData Create() */

InteractionData *
Assembly-CSharp.dll::HealRayHitPackage::HealRayHitPackage_Create
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
            (__return_storage_ptr__,CONCAT31((int3)((ulonglong)method >> 8),0x1b),(MethodInfo *)0x0)
  ;
  return __return_storage_ptr__;
}


/* Void ParseAndHandlePackage(MVWorldObjectClient, MVPlayer, InteractionData) */

void Assembly-CSharp.dll::HealRayHitPackage::HealRayHitPackage_ParseAndHandlePackage
               (HealRayHitPackage *this,MVWorldObjectClient *worldObjectClient,MVPlayer *shooter,
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
  if ((worldObjectClient == (MVWorldObjectClient *)0x0) ||
     (this_00 = (worldObjectClient->fields).gameObject, this_00 == (GameObject *)0x0))
  goto code_?;
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
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar2 != (MVNetworkGame *)0x0) &&
           (pMVar3 = (pMVar2->fields).teamManager, pMVar3 != (MVTeamManager *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pDVar4 = (pMVar3->fields).teams;
          if (pDVar4 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
            if (1 < (pDVar4->fields)._count - (pDVar4->fields)._freeCount) {
              if (shooter == (MVPlayer *)0x0) goto code_?;
              bVar1 = MVPlayer::MVPlayer_IsOnSameTeam_1(shooter,worldObjectClient,(MethodInfo *)0x0)
              ;
              if (bVar1 == 0) {
                (*(targetInteractable->klass->vtable).__unknown_1.methodPtr)
                          (targetInteractable,0x19,shooter,
                           CONCAT71((int7)((ulonglong)interactionStruct >> 8),0x16),
                           (targetInteractable->klass->vtable).__unknown_1.method);
                return;
              }
            }
            (*(targetInteractable->klass->vtable).__unknown_3.methodPtr)
                      (targetInteractable,0x12,shooter,
                       (targetInteractable->klass->vtable).__unknown_3.method);
            return;
          }
        }
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  return;
}


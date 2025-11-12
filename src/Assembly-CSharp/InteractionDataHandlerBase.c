
/* Void Awake() */

void Assembly-CSharp.dll::InteractionDataHandlerBase::InteractionDataHandlerBase_Awake
               (InteractionDataHandlerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  ClosestPointPoint_MethodInfo__UnityEngine__GameObject__AddComponent<ClosestPointPoint>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._.findWorldObjectParent != 0) {
    MVComponent::MVComponent_FindWorldObjectParent((MVComponent *)this,(MethodInfo *)0x0);
  }
  pCVar1 = (this->fields).closestPoint;
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
  if (pCVar1 != (ClosestPointBase *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pCVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      return;
    }
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    pCVar1 = (ClosestPointBase *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (this_00,
                        ClosestPointPoint_MethodInfo__UnityEngine__GameObject__AddComponent<ClosestPointPoint>__
                       );
    pCVar2 = (ClosestPointBase__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    iVar3 = iRam_?;
    if (pCVar1 != (ClosestPointBase *)0x0) {
      pCVar1[1].klass = pCVar2;
      if (iVar3 != 0) {
        uVar4 = (uint)((ulonglong)(pCVar1 + 1) >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
          iVar3 = iRam_?;
        } while (!bVar8);
      }
      (this->fields).closestPoint = pCVar1;
      if (iVar3 != 0) {
        uVar4 = (uint)((ulonglong)&(this->fields).closestPoint >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      return;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Vector3 GetClosestPoint(Vector3) */

Vector3 * Assembly-CSharp.dll::InteractionDataHandlerBase::
          InteractionDataHandlerBase_GetClosestPoint
                    (Vector3 *__return_storage_ptr__,InteractionDataHandlerBase *this,Vector3 *from,
                    MethodInfo *method)

{
  pCVar1 = (this->fields).closestPoint;
  if (pCVar1 != (ClosestPointBase *)0x0) {
    fStack_2 = from->z;
    uStack_3._0_4_ = from->x;
    uStack_3._4_4_ = from->y;
    puVar4 = (undefined8 *)
             (*(pCVar1->klass->vtable).__unknown.methodPtr)
                       (auStack_5,pCVar1,&uStack_3,(pCVar1->klass->vtable).__unknown.method);
    uVar6 = *puVar4;
    fVar7 = *(float *)(puVar4 + 1);
    __return_storage_ptr__->x = (float)(int)uVar6;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar6 >> 0x20);
    __return_storage_ptr__->z = fVar7;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pVVar9 = (Vector3 *)(*pcVar8)();
  return pVVar9;
}


/* Boolean HandleInteraction(InteractionData, Boolean) */

bool Assembly-CSharp.dll::InteractionDataHandlerBase::InteractionDataHandlerBase_HandleInteraction
               (InteractionDataHandlerBase *this,InteractionData *interaction,
               bool interactionIsLocal,MethodInfo *method)

{
  uStack_1._0_1_ = interaction->interactionType;
  uStack_1._1_1_ = interaction->playerKilledByType;
  uStack_1._2_2_ = *(undefined2 *)&interaction->field_0x12;
  fStack_2 = interaction->damage;
  fStack_3 = (interaction->impulse).x;
  fStack_4 = (interaction->impulse).y;
  fStack_5 = (interaction->impulse).z;
  bVar6 = (*(this->klass->vtable).__unknown_1.methodPtr)
                    (fStack_2,0,&fStack_2,(ulonglong)interactionIsLocal,
                     (this->klass->vtable).__unknown_1.method);
  return bVar6;
}


/* Boolean IsFriendlyFire(MVPickupOwner) */

bool Assembly-CSharp.dll::InteractionDataHandlerBase::InteractionDataHandlerBase_IsFriendlyFire
               (InteractionDataHandlerBase *this,MVPickupOwner *interactor,MethodInfo *method)

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
  if (interactor != (MVPickupOwner *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((interactor->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
           (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
          (pMVar3 = (interactor->fields)._.worldObjectParent, pMVar3 != (MVWorldObjectClient *)0x0))
         && (pMVar4 = (pMVar2->fields).teamManager, pMVar4 != (MVTeamManager *)0x0)) {
        MVar5 = MVTeamManager::MVTeamManager_GetTeamFromActorNr
                          (pMVar4,(pMVar3->fields)._.ownerActorNr,(MethodInfo *)0x0);
        MVar6 = (*(this->klass->vtable).__unknown.methodPtr)
                          (this,(this->klass->vtable).__unknown.method);
        if (MVar5 != MVar6) {
          return 0;
        }
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar2 != (MVNetworkGame *)0x0) &&
           (pMVar4 = (pMVar2->fields).teamManager, pMVar4 != (MVTeamManager *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pDVar7 = (pMVar4->fields).teams;
          if (pDVar7 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
            return 1 < (pDVar7->fields)._count - (pDVar7->fields)._freeCount;
          }
        }
      }
      FUN_?();
      pcVar8 = (code *)swi(3);
      bVar9 = (*pcVar8)();
      return bVar9;
    }
  }
  return 0;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::InteractionDataHandlerBase::InteractionDataHandlerBase_OnValidate
               (InteractionDataHandlerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  ClosestPointBase_MethodInfo__UnityEngine__GameObject__GetComponent<ClosestPointBase>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).closestPoint;
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
  if (pCVar1 != (ClosestPointBase *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pCVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      return;
    }
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    pCVar1 = (ClosestPointBase *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                       (this_00,
                        ClosestPointBase_MethodInfo__UnityEngine__GameObject__GetComponent<ClosestPointBase>__
                       );
    bVar2 = iRam_? != 0;
    (this->fields).closestPoint = pCVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).closestPoint >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    return;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


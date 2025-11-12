
/* Void CalculatePosAroundPivot(Vector3, Single, Single) */

void Assembly-CSharp.dll::StarRequirement::StarRequirement_CalculatePosAroundPivot
               (StarRequirement *this,Vector3 *pivot,float spacingAngle,float distanceFromPivot,
               MethodInfo *method)

{
  uStack_1._0_4_ = pivot->x;
  uStack_1._4_4_ = pivot->y;
  fVar2 = (float)(undefined4)uStack_1 - ((float)(undefined4)uStack_1 + 0.0);
  fVar3 = (float)uStack_1._4_4_ - ((float)uStack_1._4_4_ + 0.0);
  fVar4 = pivot->z - (pivot->z + distanceFromPivot);
  VStack_5._0_8_ = (ulonglong)(uint)(spacingAngle * _UNK_?) << 0x20;
  VStack_5.z = 0.0;
  uStack_6 = 0;
  uStack_7 = 0;
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pcRam_? = pcVar8;
  (*pcRam_?)(&VStack_5);
  fVar10 = (float)uStack_7 + (float)uStack_7;
  fVar11 = uStack_6._4_4_ + uStack_6._4_4_;
  fVar12 = ((float)uStack_6 + (float)uStack_6) * (float)uStack_6;
  fVar13 = ((float)uStack_6 + (float)uStack_6) * uStack_7._4_4_;
  uStack_1._0_4_ = pivot->x;
  uStack_1._4_4_ = pivot->y;
  fVar14 = (_UNK_? - (fVar10 * (float)uStack_7 + fVar11 * uStack_6._4_4_)) * fVar2 +
          (fVar11 * (float)uStack_6 - fVar10 * uStack_7._4_4_) * fVar3 +
          (fVar11 * uStack_7._4_4_ + fVar10 * (float)uStack_6) * fVar4 +
          (float)(undefined4)uStack_1;
  fVar15 = (_UNK_? - (fVar10 * (float)uStack_7 + fVar12)) * fVar3 +
          (fVar10 * uStack_7._4_4_ + fVar11 * (float)uStack_6) * fVar2 +
          (fVar10 * uStack_6._4_4_ - fVar13) * fVar4 + (float)uStack_1._4_4_;
  fVar3 = (fVar10 * (float)uStack_6 - fVar11 * uStack_7._4_4_) * fVar2 +
           (fVar13 + fVar10 * uStack_6._4_4_) * fVar3 +
           (_UNK_? - (fVar11 * uStack_6._4_4_ + fVar12)) * fVar4 + pivot->z;
  pGVar16 = (this->fields).displayGO;
  if ((pGVar16 != (GameObject *)0x0) &&
     (pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar16,(MethodInfo *)0x0), pTVar17 != (Transform *)0x0)) {
    uStack_1 = CONCAT44(fVar15,fVar14);
    fStack_18 = fVar3;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar19 = (pTVar17->fields)._._.m_CachedPtr;
    if (pvVar19 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar17,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(pvVar19);
    pGVar16 = (this->fields).displayGO;
    if (pGVar16 != (GameObject *)0x0) {
      pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar16,(MethodInfo *)0x0);
      pGVar16 = (this->fields).displayObjectRoot;
      if ((pGVar16 != (GameObject *)0x0) &&
         (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar16,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_5.x = 0.0;
        VStack_5.y = 0.0;
        VStack_5.z = 0.0;
        pvVar19 = (obj->fields)._._.m_CachedPtr;
        if (pvVar19 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcVar8 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
          uVar9 = func_?(&UNK_?);
          FUN_?(uVar9,0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcRam_? = pcVar8;
        (*pcRam_?)(pvVar19,&VStack_5);
        uStack_6._0_4_ = pivot->x;
        uStack_6._4_4_ = pivot->y;
        uVar9._0_4_ = (float)uStack_6 + VStack_5.x;
        if (pTVar17 != (Transform *)0x0) {
          uVar9._4_4_ = uStack_6._4_4_ + VStack_5.y;
          VStack_5._0_8_ = uVar9;
          VStack_5.z = pivot->z + VStack_5.z;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt_2
                    (pTVar17,&VStack_5,(MethodInfo *)0x0);
          this_00 = (this->fields).displayObject;
          if ((this_00 != (StarDisplayObject *)0x0) &&
             (pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)this_00,(MethodInfo *)0x0),
             pTVar17 != (Transform *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            VStack_5.x = 0.0;
            VStack_5.y = 0.0;
            VStack_5.z = 0.0;
            pvVar19 = (pTVar17->fields)._._.m_CachedPtr;
            if (pvVar19 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar17,(MethodInfo *)0x0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcVar8 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
              uVar9 = func_?(&UNK_?);
              FUN_?(uVar9,0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcRam_? = pcVar8;
            (*pcRam_?)(pvVar19);
            uStack_6._0_4_ = (this->fields).displayObjectOffset.y;
            uStack_6._4_4_ = (this->fields).displayObjectOffset.z;
            fStack_18 = *(float *)&(this->fields).field_0x14 + VStack_5.z;
            uStack_1 = CONCAT44(uStack_6._4_4_ + VStack_5.y,(float)uStack_6 + VStack_5.x);
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar19 = (pTVar17->fields)._._.m_CachedPtr;
            if (pvVar19 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar17,(MethodInfo *)0x0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcVar8 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
              uVar9 = func_?(&UNK_?);
              FUN_?(uVar9,0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcRam_? = pcVar8;
            (*pcRam_?)(pvVar19,&uStack_1);
            return;
          }
        }
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void CreateDisplayObject() */

void Assembly-CSharp.dll::StarRequirement::StarRequirement_CreateDisplayObject
               (StarRequirement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  StarDisplayObject_MethodInfo__UnityEngine__GameObject__GetComponent<StarDisplayObject>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if ((pPVar1 != (PrefabPool *)0x0) &&
     (pSVar2 = (pPVar1->fields).starDisplayPrefab, pSVar2 != (StarDisplayObject *)0x0)) {
    original = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pSVar2,(MethodInfo *)0x0);
    pGVar3 = (this->fields).displayObjectRoot;
    if (pGVar3 != (GameObject *)0x0) {
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar3,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pGVar3 = (GameObject *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                         ((Object *)original,pTVar4,1,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                         );
      bVar5 = iRam_? != 0;
      (this->fields).displayGO = pGVar3;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(this->fields).displayGO >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar5 = uVar8 == *puVar9;
          if (bVar5) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      pGVar3 = (this->fields).displayGO;
      if ((pGVar3 != (GameObject *)0x0) &&
         (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar3,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) {
        uStack_10._0_4_ = (this->fields).displayObjectOffset.y;
        uStack_10._4_4_ = (this->fields).displayObjectOffset.z;
        uStack_11 = *(undefined4 *)&(this->fields).field_0x14;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar12 = (pTVar4->fields)._._.m_CachedPtr;
        if (pvVar12 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pcVar13 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
          uVar14 = func_?(&UNK_?);
          FUN_?(uVar14,0);
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pcRam_? = pcVar13;
        (*pcRam_?)(pvVar12,&uStack_10);
        pGVar3 = (this->fields).displayGO;
        if (pGVar3 != (GameObject *)0x0) {
          pSVar2 = (StarDisplayObject *)
                   UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                             (pGVar3,
                              StarDisplayObject_MethodInfo__UnityEngine__GameObject__GetComponent<StarDisplayObject>__
                             );
          bVar5 = iRam_? != 0;
          (this->fields).displayObject = pSVar2;
          if (bVar5) {
            uVar6 = (uint)((ulonglong)&(this->fields).displayObject >> 0xc);
            lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
            do {
              uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
              puVar9 = (ulonglong *)(lVar7 + 0xADDR);
              LOCK();
              bVar5 = uVar8 == *puVar9;
              if (bVar5) {
                *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
              }
              UNLOCK();
            } while (!bVar5);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void DestroyRequirement(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::StarRequirement::StarRequirement_DestroyRequirement
               (StarRequirement *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).displayObject;
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
  if (pSVar1 != (StarDisplayObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pSVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pSVar1 = (this->fields).displayObject;
      if (pSVar1 == (StarDisplayObject *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pTVar3 = (pSVar1->fields).frontText;
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)pTVar3,0.0,(MethodInfo *)0x0);
      pTVar3 = (pSVar1->fields).backText;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)pTVar3,0.0,(MethodInfo *)0x0);
      obj = (this->fields).displayGO;
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
    }
  }
  return;
}


/* UseGUIResult GetCanUseGUIResult() */

UseGUIResult__Enum
Assembly-CSharp.dll::StarRequirement::StarRequirement_GetCanUseGUIResult
          (StarRequirement *this,MethodInfo *method)

{
  if ((this->fields).displayObjectOffset.x != 0.0) {
    iVar1 = StarRequirement_GetLocalPLayerStat(this,(MethodInfo *)0x0);
    if (iVar1 < (int)(this->fields).displayObjectOffset.x) {
      iVar1 = StarRequirement_GetLocalPLayerStat(this,(MethodInfo *)0x0);
      UVar2 = UseGUIResult__Enum_CanAfford;
      if (iVar1 < (int)(this->fields).displayObjectOffset.x) {
        UVar2 = UseGUIResult__Enum_CannotAfford;
      }
      return UVar2;
    }
  }
  return ((this->fields).hasUseWhenFree != 0) + UseGUIResult__Enum_NoUseButton;
}


/* Int32 GetLocalPLayerStat() */

int32_t Assembly-CSharp.dll::StarRequirement::StarRequirement_GetLocalPLayerStat
                  (StarRequirement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
    pLVar3 = MVTeamManager::MVTeamManager_GetTeamList(this_00,(MethodInfo *)0x0);
    if (pLVar3 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
      if ((pLVar3->fields)._size < 2) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar1 != (MVGameControllerBase *)0x0) &&
            (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
           (pMVar4 = (pMVar2->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0)) {
          pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
          if (pMVar5 != (MVLocalPlayer *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase,3,0);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (((pMVar1 != (MVGameControllerBase *)0x0) &&
                (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
               (pGVar6 = (pMVar2->fields).gameStatCounterManager,
               pGVar6 != (GameStatCounterManager *)0x0)) {
              iVar7 = MVWorldObject.dll::GameStatCounterManager::
                      GameStatCounterManager_GetActorCount
                                (pGVar6,GameStatCounterType__Enum_Collectible,
                                 (pMVar5->fields)._._Team_k__BackingField,
                                 (pMVar5->fields)._._ActorNr_k__BackingField,(MethodInfo *)0x0);
              return iVar7;
            }
            FUN_?();
            pcVar8 = (code *)swi(3);
            iVar7 = (*pcVar8)();
            return iVar7;
          }
        }
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar1 != (MVGameControllerBase *)0x0) &&
           (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
          pGVar6 = (pMVar2->fields).gameStatCounterManager;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar1 != (MVGameControllerBase *)0x0) &&
              (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
             (pMVar4 = (pMVar2->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0)) {
            uVar9 = 0;
            pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
            if ((pMVar5 != (MVLocalPlayer *)0x0) && (pGVar6 != (GameStatCounterManager *)0x0)) {
              iVar7 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetTeamCount
                                (pGVar6,(GameStatCounterType__Enum)
                                        CONCAT71((int7)((ulonglong)uVar9 >> 8),3),
                                 (pMVar5->fields)._._Team_k__BackingField,(MethodInfo *)0x0);
              return iVar7;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  iVar7 = (*pcVar8)();
  return iVar7;
}


/* ShowUseOption GetShowOption() */

ShowUseOption__Enum
Assembly-CSharp.dll::StarRequirement::StarRequirement_GetShowOption
          (StarRequirement *this,MethodInfo *method)

{
  if ((this->fields).displayObjectOffset.x != 0.0) {
    iVar1 = StarRequirement_GetLocalPLayerStat(this,(MethodInfo *)0x0);
    SVar2 = ShowUseOption__Enum_StarsEnough|ShowUseOption__Enum_UsingStars;
    if (iVar1 < (int)(this->fields).displayObjectOffset.x) {
      SVar2 = ShowUseOption__Enum_StarsInsufficient|ShowUseOption__Enum_UsingStars;
    }
    return SVar2;
  }
  return ShowUseOption__Enum_Normal;
}


/* Boolean IsActive() */

bool Assembly-CSharp.dll::StarRequirement::StarRequirement_IsActive
               (StarRequirement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).displayGO;
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
  if (pGVar1 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    return (pGVar1->fields)._.m_CachedPtr != (void *)0x0;
  }
  return 0;
}


/* Void OnDataUpdate(Dictionary`2[System.Object,System.Object], Int32) */

void Assembly-CSharp.dll::StarRequirement::StarRequirement_OnDataUpdate
               (StarRequirement *this,Dictionary_2_System_Object_System_Object_ *data,
               int32_t ownerID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_starAmount);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                      *)data,(Object *)StringLiteral_starAmount,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     ->klass->rgctx_data[0x21].method);
  if (iVar1 < 0) {
    return;
  }
  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__get_Item
                     (data,(Object *)StringLiteral_starAmount,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  if (pOVar2 == (Object *)0x0) goto code_?;
  if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar2);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pSVar4 = (this->fields).displayObject;
  (this->fields).displayObjectOffset.x = *(float *)&pOVar2[1].klass;
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
  if (pSVar4 == (StarDisplayObject *)0x0) {
code_?:
    StarRequirement_CreateDisplayObject(this,(MethodInfo *)0x0);
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pSVar4->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
  }
  fVar5 = (this->fields).displayObjectOffset.x;
  if (0 < (int)fVar5) {
    pSVar4 = (this->fields).displayObject;
    if (pSVar4 == (StarDisplayObject *)0x0) goto code_?;
    IStackX_10.m_value = (int32_t)(this->fields).displayObjectOffset.x;
    pTVar6 = (pSVar4->fields).frontText;
    pSVar7 = mscorlib.dll::System::Int32::Int32_ToString(&IStackX_10,(MethodInfo *)0x0);
    if (pTVar6 == (TextMesh *)0x0) goto code_?;
    UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
              (pTVar6,pSVar7,(MethodInfo *)0x0);
    pTVar6 = (pSVar4->fields).backText;
    pSVar7 = mscorlib.dll::System::Int32::Int32_ToString(&IStackX_10,(MethodInfo *)0x0);
    if (pTVar6 == (TextMesh *)0x0) goto code_?;
    UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
              (pTVar6,pSVar7,(MethodInfo *)0x0);
    fVar5 = (this->fields).displayObjectOffset.x;
  }
  if (fVar5 != 0.0) {
    return;
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  lVar8 = lRam_?;
  pOVar2 = (Object *)0x0;
  IStackX_10.m_value = 0;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      pOVar2 = (Object *)FUN_?(lRam_?);
      FUN_?(pOVar2 + 1,&IStackX_10,(longlong)*(int *)(lVar8 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        method = (MethodInfo *)0xADDR;
        uVar9 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
        uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
        do {
          uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
          puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
          LOCK();
          bVar13 = uVar11 == *puVar12;
          if (bVar13) {
            *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar13);
      }
    }
  }
  else {
    pOVar2 = (Object *)((ulonglong)uStackX_14 << 0x20);
  }
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_starAmount,pOVar2,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::
      MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
                (this_01,ownerID,(Dictionary_2_System_Object_System_Object_ *)this_00,
                 (MethodInfo *)0x0);
      pSVar4 = (this->fields).displayObject;
      if (pSVar4 != (StarDisplayObject *)0x0) {
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pSVar4,(MethodInfo *)0x0);
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
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                  ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* StarRequirement(GameObject, Boolean) */

void Assembly-CSharp.dll::StarRequirement::StarRequirement__ctor
               (StarRequirement *this,GameObject *root,bool hasUseButtonWhenFree,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).hasUseWhenFree = hasUseButtonWhenFree;
  (this->fields).displayObjectOffset.y = 0.0;
  (this->fields).displayObjectOffset.z = 0.0;
  *(undefined4 *)&(this->fields).field_0x14 = 0;
  (this->fields).displayObjectRoot = root;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).displayObjectRoot >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}


/* StarRequirement(GameObject, Vector3, Boolean) */

void Assembly-CSharp.dll::StarRequirement::StarRequirement__ctor_1
               (StarRequirement *this,GameObject *root,Vector3 *displayOffset,
               bool hasUseButtonWhenFree,MethodInfo *method)

{
  uVar1 = displayOffset->x;
  fVar2 = displayOffset->y;
  fVar3 = displayOffset->z;
  (this->fields).hasUseWhenFree = hasUseButtonWhenFree;
  bVar4 = iRam_? != 0;
  (this->fields).displayObjectOffset.y = (float)uVar1 + 0.0;
  (this->fields).displayObjectOffset.z = fVar2 + 0.0;
  *(float *)&(this->fields).field_0x14 = fVar3 + 0.0;
  (this->fields).displayObjectRoot = root;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields).displayObjectRoot >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  return;
}


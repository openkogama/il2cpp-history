
/* Void CalculatePosAroundPivot(Vector3, Single, Single) */

void Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement_CalculatePosAroundPivot
               (GameRankRequirement *this,Vector3 *pivot,float spacingAngle,float distanceFromPivot,
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
  pGVar16 = (this->fields).displayObject;
  if ((pGVar16 != (GameRankDisplayObject *)0x0) &&
     (pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         ((GameObject *)pGVar16,(MethodInfo *)0x0), pTVar17 != (Transform *)0x0)) {
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
    pGVar16 = (this->fields).displayObject;
    if (pGVar16 != (GameRankDisplayObject *)0x0) {
      pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         ((GameObject *)pGVar16,(MethodInfo *)0x0);
      this_00 = *(GameObject **)&(this->fields).hasUseWhenFree;
      if ((this_00 != (GameObject *)0x0) &&
         (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
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
          this_01 = (Component *)(this->fields).displayObjectRoot;
          if ((this_01 != (Component *)0x0) &&
             (pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 (this_01,(MethodInfo *)0x0), pTVar17 != (Transform *)0x0)) {
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
            uStack_6 = *(undefined8 *)&(this->fields).displayObjectOffset.z;
            fStack_18 = *(float *)&(this->fields).displayGO + VStack_5.z;
            uStack_1 = CONCAT44((float)((ulonglong)uStack_6 >> 0x20) + VStack_5.y,
                                 (float)uStack_6 + VStack_5.x);
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

void Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement_CreateDisplayObject
               (GameRankRequirement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  GameRankDisplayObject_MethodInfo__UnityEngine__GameObject__GetComponent<GameRankDisplayObject>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
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
     (pGVar2 = (pPVar1->fields).gameRankDisplayPrefab, pGVar2 != (GameRankDisplayObject *)0x0)) {
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pGVar2,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pGVar2 = (GameRankDisplayObject *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pGVar3,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
    bVar4 = iRam_? != 0;
    (this->fields).displayObject = pGVar2;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).displayObject >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    pGVar2 = (this->fields).displayObject;
    if (pGVar2 != (GameRankDisplayObject *)0x0) {
      pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         ((GameObject *)pGVar2,(MethodInfo *)0x0);
      pGVar3 = *(GameObject **)&(this->fields).hasUseWhenFree;
      if ((pGVar3 != (GameObject *)0x0) &&
         (value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar3,(MethodInfo *)0x0), pTVar9 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (pTVar9,value,(MethodInfo *)0x0);
        pGVar2 = (this->fields).displayObject;
        if ((pGVar2 != (GameRankDisplayObject *)0x0) &&
           (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               ((GameObject *)pGVar2,(MethodInfo *)0x0), pTVar9 != (Transform *)0x0)
           ) {
          uStack_10 = *(undefined8 *)&(this->fields).displayObjectOffset.z;
          uStack_11 = *(undefined4 *)&(this->fields).displayGO;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar12 = (pTVar9->fields)._._.m_CachedPtr;
          if (pvVar12 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
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
          pGVar2 = (this->fields).displayObject;
          if (pGVar2 != (GameRankDisplayObject *)0x0) {
            pGVar3 = (GameObject *)
                     UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                               ((GameObject *)pGVar2,
                                GameRankDisplayObject_MethodInfo__UnityEngine__GameObject__GetComponent<GameRankDisplayObject>__
                               );
            bVar4 = iRam_? != 0;
            (this->fields).displayObjectRoot = pGVar3;
            if (bVar4) {
              uVar5 = (uint)((ulonglong)&(this->fields).displayObjectRoot >> 0xc);
              lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
              do {
                uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
                puVar8 = (ulonglong *)(lVar6 + 0xADDR);
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

void Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement_DestroyRequirement
               (GameRankRequirement *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).displayObjectRoot;
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
    if ((pGVar1->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar1 = (this->fields).displayObjectRoot;
      if (pGVar1 != (GameObject *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar2 = (Object_1 *)pGVar1[1].monitor;
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
                  (pOVar2,0.0,(MethodInfo *)0x0);
        pOVar2 = pGVar1[1].fields._.m_CachedPtr;
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
                  (pOVar2,0.0,(MethodInfo *)0x0);
        obj = (this->fields).displayObject;
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
        bVar3 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
        if (bVar3 == 0) {
          return;
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar4 != (MVGameControllerBase *)0x0) &&
           (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) {
          this_00 = (pMVar5->fields)._GameTierShopRepository_k__BackingField;
          plVar6 = *(longlong **)&(this->fields).displayObjectOffset;
          bVar7 = *(byte *)&(this->fields).worldObject;
          if (plVar6 != (longlong *)0x0) {
            documentationType =
                 (**(code **)(*plVar6 + 0x3f8))(plVar6,*(undefined8 *)(*plVar6 + 0x400));
            lVar8 = *(longlong *)&(this->fields).displayObjectOffset;
            if ((lVar8 != 0) && (this_00 != (GameTierShopRepository *)0x0)) {
              GameTierShopRepository::GameTierShopRepository_RemoveItemToTierShop
                        (this_00,(uint)bVar7,documentationType,*(int32_t *)(lVar8 + 0x10),
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  return;
}


/* UseGUIResult GetCanUseGUIResult() */

UseGUIResult__Enum
Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement_GetCanUseGUIResult
          (GameRankRequirement *this,MethodInfo *method)

{
  if (*(char *)&(this->fields).worldObject != '\0') {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 == (PlayerPlanetData *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      UVar3 = (*pcVar2)();
      return UVar3;
    }
    if ((pPVar1->fields).gamePassTier < *(byte *)&(this->fields).worldObject) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
      if ((pPVar1->fields).previewGamePassTier < *(byte *)&(this->fields).worldObject) {
        GVar4 = GameRankRequirement_GetLocalPLayerRank(this,(MethodInfo *)0x0);
        if ((byte)GVar4 < *(byte *)&(this->fields).worldObject) {
          GVar4 = GameRankRequirement_GetLocalPlayerTempRank(this,(MethodInfo *)0x0);
          UVar3 = UseGUIResult__Enum_CanAfford;
          if ((byte)GVar4 < *(byte *)&(this->fields).worldObject) {
            UVar3 = UseGUIResult__Enum_CannotAfford;
          }
          return UVar3;
        }
        return UseGUIResult__Enum_CanAfford;
      }
    }
  }
  return (*(char *)&this[1].klass != '\0') + UseGUIResult__Enum_NoUseButton;
}


/* GamePassTier GetLocalPLayerRank() */

GamePassTier__Enum
Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement_GetLocalPLayerRank
          (GameRankRequirement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    return (GamePassTier__Enum)(pPVar1->fields).gamePassTier;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* GamePassTier GetLocalPlayerTempRank() */

GamePassTier__Enum
Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement_GetLocalPlayerTempRank
          (GameRankRequirement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    return (GamePassTier__Enum)(pPVar1->fields).previewGamePassTier;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* ShowUseOption GetShowOption() */

ShowUseOption__Enum
Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement_GetShowOption
          (GameRankRequirement *this,MethodInfo *method)

{
  if (*(char *)&(this->fields).worldObject == '\0') {
    return ShowUseOption__Enum_Normal;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    SVar2 = ShowUseOption__Enum_GameRankEnough|ShowUseOption__Enum_UsingGameRank;
    if ((pPVar1->fields).gamePassTier < *(byte *)&(this->fields).worldObject) {
      SVar2 = ShowUseOption__Enum_GameRankInsufficient|ShowUseOption__Enum_UsingGameRank;
    }
    return SVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  SVar2 = (*pcVar3)();
  return SVar2;
}


/* Boolean IsActive() */

bool Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement_IsActive
               (GameRankRequirement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).displayObject;
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
  if (pGVar1 != (GameRankDisplayObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    return (pGVar1->fields)._._._._.m_CachedPtr != (void *)0x0;
  }
  return 0;
}


/* Void OnDataUpdate(Dictionary`2[System.Object,System.Object], Int32) */

void Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement_OnDataUpdate
               (GameRankRequirement *this,Dictionary_2_System_Object_System_Object_ *data,
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
    FUN_?(&StringLiteral_RequiredRank);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
           UIElements::StyleComplexSelector+PseudoStateData]::
           Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                     ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                       *)data,(Object *)StringLiteral_RequiredRank,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      ->klass->rgctx_data[0x21].method);
  if (iVar1 < 0) {
    return;
  }
  bVar2 = *(byte *)&(this->fields).worldObject;
  pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      (data,(Object *)StringLiteral_RequiredRank,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  if (pOVar3 == (Object *)0x0) goto code_?;
  if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar3);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pGVar5 = (this->fields).displayObjectRoot;
  *(undefined1 *)&(this->fields).worldObject = *(undefined1 *)&pOVar3[1].klass;
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
  pOVar3 = (Object *)0x0;
  if (pGVar5 == (GameObject *)0x0) {
code_?:
    GameRankRequirement_CreateDisplayObject(this,(MethodInfo *)0x0);
    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar6 == (MVNetworkGame *)0x0) goto code_?;
    plVar7 = *(longlong **)&(this->fields).displayObjectOffset;
    pGVar8 = (pMVar6->fields)._GameTierShopRepository_k__BackingField;
    bVar9 = *(byte *)&(this->fields).worldObject;
    if ((plVar7 == (longlong *)0x0) ||
       (MVar10 = (**(code **)(*plVar7 + 0x3f8))(plVar7,*(undefined8 *)(*plVar7 + 0x400)),
       pGVar8 == (GameTierShopRepository *)0x0)) goto code_?;
    method = *(MethodInfo **)&(this->fields).displayObjectOffset;
    GameTierShopRepository::GameTierShopRepository_AddItemToTierShop
              (pGVar8,(uint)bVar9,MVar10,(MVWorldObjectClient *)method,(MethodInfo *)0x0);
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar5->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
  }
  if ((bVar2 != 0) && (bVar2 != *(byte *)&(this->fields).worldObject)) {
    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar6 == (MVNetworkGame *)0x0) goto code_?;
    plVar7 = *(longlong **)&(this->fields).displayObjectOffset;
    pGVar8 = (pMVar6->fields)._GameTierShopRepository_k__BackingField;
    if (plVar7 == (longlong *)0x0) goto code_?;
    MVar10 = (**(code **)(*plVar7 + 0x3f8))(plVar7,*(undefined8 *)(*plVar7 + 0x400));
    lVar11 = *(longlong *)&(this->fields).displayObjectOffset;
    if ((lVar11 == 0) || (pGVar8 == (GameTierShopRepository *)0x0)) goto code_?;
    GameTierShopRepository::GameTierShopRepository_RemoveItemToTierShop
              (pGVar8,(uint)bVar2,MVar10,*(int32_t *)(lVar11 + 0x10),(MethodInfo *)0x0);
    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar6 == (MVNetworkGame *)0x0) goto code_?;
    plVar7 = *(longlong **)&(this->fields).displayObjectOffset;
    pGVar8 = (pMVar6->fields)._GameTierShopRepository_k__BackingField;
    bVar2 = *(byte *)&(this->fields).worldObject;
    if ((plVar7 == (longlong *)0x0) ||
       (MVar10 = (**(code **)(*plVar7 + 0x3f8))(plVar7,*(undefined8 *)(*plVar7 + 0x400)),
       pGVar8 == (GameTierShopRepository *)0x0)) goto code_?;
    method = *(MethodInfo **)&(this->fields).displayObjectOffset;
    GameTierShopRepository::GameTierShopRepository_AddItemToTierShop
              (pGVar8,(uint)bVar2,MVar10,(MVWorldObjectClient *)method,(MethodInfo *)0x0);
  }
  cVar12 = '\0';
  if (*(char *)&(this->fields).worldObject != '\0') {
    pGVar5 = (this->fields).displayObjectRoot;
    bVar2 = *(byte *)&(this->fields).worldObject;
    if (pGVar5 == (GameObject *)0x0) goto code_?;
    pTVar13 = (TextMesh *)pGVar5[1].monitor;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Number);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    aRStack_14[0]._pointer._value = (void *)0x0;
    aRStack_14[0]._length = 0;
    aRStack_14[0]._12_4_ = 0;
    pSVar15 = mscorlib.dll::System::Number::Number_FormatInt32
                        ((uint)bVar2,aRStack_14,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    if (pTVar13 == (TextMesh *)0x0) goto code_?;
    UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
              (pTVar13,pSVar15,(MethodInfo *)0x0);
    pTVar13 = pGVar5[1].fields._.m_CachedPtr;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Number);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    aRStack_14[0]._pointer._value = (void *)0x0;
    aRStack_14[0]._length = 0;
    aRStack_14[0]._12_4_ = 0;
    method = (MethodInfo *)0x0;
    pSVar15 = mscorlib.dll::System::Number::Number_FormatInt32
                        ((uint)bVar2,aRStack_14,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    if (pTVar13 == (TextMesh *)0x0) goto code_?;
    UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
              (pTVar13,pSVar15,(MethodInfo *)0x0);
    cVar12 = *(char *)&(this->fields).worldObject;
  }
  if (cVar12 == '\0') {
    if (*(char *)((longlong)&this[1].klass + 1) != '\0') {
      this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      lVar11 = lRam_?;
      uStackX_10 = 0;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar3 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar3 + 1,&uStackX_10,(longlong)*(int *)(lVar11 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            method = (MethodInfo *)0xADDR;
            uVar16 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
            uVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6);
            do {
              uVar18 = *(ulonglong *)(uVar17 * 8 + 0xADDR);
              puVar19 = (ulonglong *)(uVar17 * 8 + 0xADDR);
              LOCK();
              bVar20 = uVar18 == *puVar19;
              if (bVar20) {
                *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
              }
              UNLOCK();
            } while (!bVar20);
          }
        }
      }
      else {
        pOVar3 = (Object *)((ulonglong)uStackX_14 << 0x20);
      }
      if (this_01 ==
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_01,
                 (Object *)StringLiteral_RequiredRank,pOVar3,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_02 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      MVNetworkGame+OperationRequests::
      MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
                (this_02,ownerID,(Dictionary_2_System_Object_System_Object_ *)this_01,
                 (MethodInfo *)0x0);
    }
    this_00 = (Component *)(this->fields).displayObjectRoot;
    if (this_00 == (Component *)0x0) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_00,(MethodInfo *)0x0);
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
              ((Object_1 *)pGVar5,0.0,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnDelete() */

void Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement_OnDelete
               (GameRankRequirement *this,MethodInfo *method)

{
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar2 != (MVGameControllerBase *)0x0) &&
     (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) {
    this_00 = (pMVar3->fields)._GameTierShopRepository_k__BackingField;
    plVar4 = *(longlong **)&(this->fields).displayObjectOffset;
    bVar5 = *(byte *)&(this->fields).worldObject;
    if (plVar4 != (longlong *)0x0) {
      documentationType = (**(code **)(*plVar4 + 0x3f8))(plVar4,*(undefined8 *)(*plVar4 + 0x400));
      lVar6 = *(longlong *)&(this->fields).displayObjectOffset;
      if ((lVar6 != 0) && (this_00 != (GameTierShopRepository *)0x0)) {
        GameTierShopRepository::GameTierShopRepository_RemoveItemToTierShop
                  (this_00,(uint)bVar5,documentationType,*(int32_t *)(lVar6 + 0x10),
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetScale(Vector3) */

void Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement_SetScale
               (GameRankRequirement *this,Vector3 *scale,MethodInfo *method)

{
  this_00 = (Component *)(this->fields).displayObjectRoot;
  if (this_00 == (Component *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  (this_00,(MethodInfo *)0x0);
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uStack_2._0_4_ = scale->x;
  uStack_2._4_4_ = scale->y;
  fStack_3 = scale->z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar4 = (obj->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4,&uStack_2);
  return;
}


/* GameRankRequirement(GameObject, MVWorldObjectClient, Boolean) */

void Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement__ctor
               (GameRankRequirement *this,GameObject *root,MVWorldObjectClient *worldObject,
               bool hasUseButtonWhenFree,MethodInfo *method)

{
  iVar1 = iRam_?;
  *(bool *)&this[1].klass = hasUseButtonWhenFree;
  *(undefined8 *)&(this->fields).displayObjectOffset.z = 0;
  *(undefined4 *)&(this->fields).displayGO = 0;
  *(undefined4 *)((longlong)&(this->fields).worldObject + 4) = 2;
  *(undefined1 *)((longlong)&this[1].klass + 1) = 1;
  *(MVWorldObjectClient **)&(this->fields).displayObjectOffset = worldObject;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).displayObjectOffset >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  *(GameObject **)&(this->fields).hasUseWhenFree = root;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).hasUseWhenFree >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}


/* GameRankRequirement(GameObject, Vector3, MVWorldObjectClient, Boolean) */

void Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement__ctor_1
               (GameRankRequirement *this,GameObject *root,Vector3 *displayOffset,
               MVWorldObjectClient *worldObject,bool hasUseButtonWhenFree,MethodInfo *method)

{
  *(MVWorldObjectClient **)&(this->fields).displayObjectOffset = worldObject;
  *(undefined8 *)&(this->fields).displayObjectOffset.z = 0;
  *(undefined4 *)&(this->fields).displayGO = 0;
  *(undefined4 *)((longlong)&(this->fields).worldObject + 4) = 2;
  *(undefined1 *)((longlong)&this[1].klass + 1) = 1;
  *(bool *)&this[1].klass = hasUseButtonWhenFree;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).displayObjectOffset >> 0xc);
    uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
    do {
      uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
      puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  iVar6 = iRam_?;
  uVar7 = *(undefined8 *)&(this->fields).displayObjectOffset.z;
  uVar8 = displayOffset->x;
  fVar9 = displayOffset->z;
  fVar10 = *(float *)&(this->fields).displayGO;
  *(ulonglong *)&(this->fields).displayObjectOffset.z =
       CONCAT44(displayOffset->y + (float)((ulonglong)uVar7 >> 0x20),(float)uVar8 + (float)uVar7);
  *(float *)&(this->fields).displayGO = fVar9 + fVar10;
  *(GameObject **)&(this->fields).hasUseWhenFree = root;
  if (iVar6 != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).hasUseWhenFree >> 0xc);
    uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
    do {
      uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
      puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  return;
}


/* GameObject get_GameObject() */

GameObject *
Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement_get_GameObject
          (GameRankRequirement *this,MethodInfo *method)

{
  pGVar1 = (this->fields).displayObject;
  if (pGVar1 != (GameRankDisplayObject *)0x0) {
    return (GameObject *)pGVar1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pGVar3 = (GameObject *)(*pcVar2)();
  return pGVar3;
}



/* Void CalculatePosAroundPivot(Vector3, Single, Single) */

void Assembly-CSharp.dll::LevelBasedUseRequirement::LevelBasedUseRequirement_CalculatePosAroundPivot
               (LevelBasedUseRequirement *this,Vector3 *pivot,float spacingAngle,
               float distanceFromPivot,MethodInfo *method)

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
  pGVar16 = (this->fields).go;
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
    pGVar16 = (this->fields).go;
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
          if ((this_00 != (LevelDisplayCube *)0x0) &&
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
            uStack_6._0_4_ = (this->fields).displayObjectOffset.x;
            uStack_6._4_4_ = (this->fields).displayObjectOffset.y;
            fStack_18 = (this->fields).displayObjectOffset.z + VStack_5.z;
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

void Assembly-CSharp.dll::LevelBasedUseRequirement::LevelBasedUseRequirement_CreateDisplayObject
               (LevelBasedUseRequirement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  LevelDisplayCube_MethodInfo__UnityEngine__GameObject__GetComponent<LevelDisplayCube>__
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
     (pLVar2 = (pPVar1->fields).levelDisplayPrefab, pLVar2 != (LevelDisplayCube *)0x0)) {
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pLVar2,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pGVar3 = (GameObject *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pGVar3,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
    bVar4 = iRam_? != 0;
    (this->fields).go = pGVar3;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).go >> 0xc);
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
    pGVar3 = (this->fields).go;
    if (pGVar3 != (GameObject *)0x0) {
      pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar3,(MethodInfo *)0x0);
      pGVar3 = (this->fields).displayObjectRoot;
      if ((pGVar3 != (GameObject *)0x0) &&
         (value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar3,(MethodInfo *)0x0), pTVar9 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (pTVar9,value,(MethodInfo *)0x0);
        pGVar3 = (this->fields).go;
        if ((pGVar3 != (GameObject *)0x0) &&
           (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar3,(MethodInfo *)0x0), pTVar9 != (Transform *)0x0)) {
          uStack_10._0_4_ = (this->fields).displayObjectOffset.x;
          uStack_10._4_4_ = (this->fields).displayObjectOffset.y;
          fStack_11 = (this->fields).displayObjectOffset.z;
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
          pGVar3 = (this->fields).go;
          if (pGVar3 != (GameObject *)0x0) {
            pLVar2 = (LevelDisplayCube *)
                     UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                               (pGVar3,
                                LevelDisplayCube_MethodInfo__UnityEngine__GameObject__GetComponent<LevelDisplayCube>__
                               );
            bVar4 = iRam_? != 0;
            (this->fields).displayObject = pLVar2;
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
            pLVar2 = (this->fields).displayObject;
            if (pLVar2 != (LevelDisplayCube *)0x0) {
              pRVar15 = LevelDisplayCube::LevelDisplayCube_get_Renderers(pLVar2,(MethodInfo *)0x0);
              uVar5 = 0;
              if (pRVar15 != (Renderer__Array *)0x0) {
                ppRVar16 = pRVar15->vector;
                while( true ) {
                  if ((int)pRVar15->max_length <= (int)uVar5) {
                    return;
                  }
                  if ((uint)pRVar15->max_length <= uVar5) {
                    FUN_?();
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  obj = *ppRVar16;
                  if (obj == (Renderer *)0x0) break;
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                                 );
                    LOCK();
                    UNLOCK();
                    FUN_?(&
                                  UnityEngine__Material_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Material>_void__
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar12 = (obj->fields)._._.m_CachedPtr;
                  if (pvVar12 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
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
                  pvVar12 = (void *)(*pcRam_?)(pvVar12);
                  this_00 = (Material *)
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                            Unmarshal_UnmarshalUnityObject
                                      (pvVar12,
                                       UnityEngine__Material_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Material>_void__
                                      );
                  if (this_00 == (Material *)0x0) break;
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Material);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  name = UnityEngine.CoreModule.dll::UnityEngine::Material::
                         Material_GetFirstPropertyNameIdByAttribute
                                   (this_00,ShaderPropertyFlags__Enum_MainTexture,(MethodInfo *)0x0)
                  ;
                  if (name < 0) {
                    if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
                      FUN_?(TypeInfo__UnityEngine__Material);
                    }
                    name = TypeInfo__UnityEngine__Material->static_fields->k_MainTexId;
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureImpl
                            (this_00,name,(Texture *)0x0,(MethodInfo *)0x0);
                  uVar5 = uVar5 + 1;
                  ppRVar16 = ppRVar16 + 1;
                }
              }
            }
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

void Assembly-CSharp.dll::LevelBasedUseRequirement::LevelBasedUseRequirement_DestroyRequirement
               (LevelBasedUseRequirement *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).displayObject;
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
  if (pLVar1 != (LevelDisplayCube *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pLVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pLVar1 = (this->fields).displayObject;
      if (pLVar1 == (LevelDisplayCube *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      LevelDisplayCube::LevelDisplayCube_Destroy(pLVar1,(MethodInfo *)0x0);
      obj = (this->fields).go;
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
Assembly-CSharp.dll::LevelBasedUseRequirement::LevelBasedUseRequirement_GetCanUseGUIResult
          (LevelBasedUseRequirement *this,MethodInfo *method)

{
  if (*(int *)&(this->fields).hasUseWhenFree != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
      pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
      if (pMVar4 != (MVLocalPlayer *)0x0) {
        if (*(int *)&(this->fields).hasUseWhenFree <= (pMVar4->fields)._.level)
        goto code_?;
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar2 != (MVNetworkGame *)0x0) &&
           (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
          pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
          if (pMVar4 != (MVLocalPlayer *)0x0) {
            UVar5 = UseGUIResult__Enum_CanAfford;
            if ((pMVar4->fields)._.level < *(int *)&(this->fields).hasUseWhenFree) {
              UVar5 = UseGUIResult__Enum_CannotAfford;
            }
            return UVar5;
          }
        }
      }
    }
    FUN_?();
    pcVar6 = (code *)swi(3);
    UVar5 = (*pcVar6)();
    return UVar5;
  }
code_?:
  return ((this->fields).field_0xc != '\0') + UseGUIResult__Enum_NoUseButton;
}


/* ShowUseOption GetShowOption() */

ShowUseOption__Enum
Assembly-CSharp.dll::LevelBasedUseRequirement::LevelBasedUseRequirement_GetShowOption
          (LevelBasedUseRequirement *this,MethodInfo *method)

{
  if (*(int *)&(this->fields).hasUseWhenFree == 0) {
    return ShowUseOption__Enum_Normal;
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
     (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (pMVar3 != (MVLocalPlayer *)0x0) {
      SVar4 = ShowUseOption__Enum_LevelEnough|ShowUseOption__Enum_UsingLevels;
      if ((pMVar3->fields)._.level < *(int *)&(this->fields).hasUseWhenFree) {
        SVar4 = ShowUseOption__Enum_LevelInsufficient|ShowUseOption__Enum_UsingLevels;
      }
      return SVar4;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  SVar4 = (*pcVar5)();
  return SVar4;
}


/* Boolean IsActive() */

bool Assembly-CSharp.dll::LevelBasedUseRequirement::LevelBasedUseRequirement_IsActive
               (LevelBasedUseRequirement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).go;
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

void Assembly-CSharp.dll::LevelBasedUseRequirement::LevelBasedUseRequirement_OnDataUpdate
               (LevelBasedUseRequirement *this,Dictionary_2_System_Object_System_Object_ *data,
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
    FUN_?(&StringLiteral_levelAmount);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                      *)data,(Object *)StringLiteral_levelAmount,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     ->klass->rgctx_data[0x21].method);
  if (iVar1 < 0) {
    return;
  }
  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__get_Item
                     (data,(Object *)StringLiteral_levelAmount,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  if (pOVar2 == (Object *)0x0) goto code_?;
  if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar2,lRam_?);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pLVar4 = (this->fields).displayObject;
  *(undefined4 *)&(this->fields).hasUseWhenFree = *(undefined4 *)&pOVar2[1].klass;
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
  if (pLVar4 == (LevelDisplayCube *)0x0) {
code_?:
    LevelBasedUseRequirement_CreateDisplayObject(this,(MethodInfo *)0x0);
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pLVar4->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
  }
  iVar5 = *(int *)&(this->fields).hasUseWhenFree;
  if (0 < iVar5) {
    pLVar4 = (this->fields).displayObject;
    if (pLVar4 == (LevelDisplayCube *)0x0) goto code_?;
    LevelDisplayCube::LevelDisplayCube_SetAmount
              (pLVar4,*(int32_t *)&(this->fields).hasUseWhenFree,(MethodInfo *)0x0);
    iVar5 = *(int *)&(this->fields).hasUseWhenFree;
  }
  if (iVar5 != 0) {
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
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_levelAmount,(Object *)0x0,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::
      MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
                (this_01,ownerID,(Dictionary_2_System_Object_System_Object_ *)this_00,
                 (MethodInfo *)0x0);
      pLVar4 = (this->fields).displayObject;
      if (pLVar4 != (LevelDisplayCube *)0x0) {
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pLVar4,(MethodInfo *)0x0);
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


/* Void SetScale(Vector3) */

void Assembly-CSharp.dll::LevelBasedUseRequirement::LevelBasedUseRequirement_SetScale
               (LevelBasedUseRequirement *this,Vector3 *scale,MethodInfo *method)

{
  uStack_1._0_4_ = scale->x;
  uStack_1._4_4_ = scale->y;
  this_00 = (this->fields).displayObject;
  fVar2 = (float)uStack_1._4_4_ * _UNK_?;
  fVar3 = (float)(undefined4)uStack_1 * _UNK_?;
  fVar4 = scale->z * _UNK_?;
  if (this_00 == (LevelDisplayCube *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this_00,(MethodInfo *)0x0);
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uStack_1 = CONCAT44(fVar2,fVar3);
  fStack_6 = fVar4;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar7 = (obj->fields)._._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcRam_? = pcVar5;
  (*pcRam_?)(pvVar7,&uStack_1);
  return;
}


/* LevelBasedUseRequirement(GameObject, Boolean) */

void Assembly-CSharp.dll::LevelBasedUseRequirement::LevelBasedUseRequirement__ctor
               (LevelBasedUseRequirement *this,GameObject *root,bool hasUseButtonWhenFree,
               MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).field_0xc = hasUseButtonWhenFree;
  (this->fields).displayObjectOffset.x = 0.0;
  (this->fields).displayObjectOffset.y = 0.0;
  (this->fields).displayObjectOffset.z = 0.0;
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


/* LevelBasedUseRequirement(GameObject, Vector3, Boolean) */

void Assembly-CSharp.dll::LevelBasedUseRequirement::LevelBasedUseRequirement__ctor_1
               (LevelBasedUseRequirement *this,GameObject *root,Vector3 *displayOffset,
               bool hasUseButtonWhenFree,MethodInfo *method)

{
  uVar1 = displayOffset->x;
  fVar2 = displayOffset->y;
  fVar3 = displayOffset->z;
  (this->fields).field_0xc = hasUseButtonWhenFree;
  bVar4 = iRam_? != 0;
  (this->fields).displayObjectOffset.x = (float)uVar1 + 0.0;
  (this->fields).displayObjectOffset.y = fVar2 + 0.0;
  (this->fields).displayObjectOffset.z = fVar3 + 0.0;
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


/* GameObject get_GameObject() */

GameObject *
Assembly-CSharp.dll::LevelBasedUseRequirement::LevelBasedUseRequirement_get_GameObject
          (LevelBasedUseRequirement *this,MethodInfo *method)

{
  obj = (this->fields).displayObject;
  if (obj == (LevelDisplayCube *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pGVar2 = (GameObject *)(*pcVar1)();
    return pGVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (LevelDisplayCube *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pGVar2 = (GameObject *)(*pcVar1)();
    return pGVar2;
  }
  pvVar3 = (obj->fields)._._._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pGVar2 = (GameObject *)(*pcVar1)();
    return pGVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    pGVar2 = (GameObject *)(*pcVar1)();
    return pGVar2;
  }
  pcRam_? = pcVar1;
  plVar5 = (longlong *)(*pcRam_?)(pvVar3);
  pMVar6 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(
                 UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                 );
  }
  if (plVar5 != (longlong *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    System__Runtime__InteropServices__GCHandle__MethodInfo__Unity__Collections__LowLevel__Unsafe__UnsafeUtility__As<void*,_System::Runtime::InteropServices::GCHandle>_System__IntPtr__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (((ulonglong)plVar5 & 1) == 0) {
      lVar7 = *plVar5;
    }
    else {
      lVar7 = FUN_?(plVar5);
    }
    pvVar3 = ((pMVar6->field7_0x38).rgctx_data)->rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
      pvVar3 = (void *)FUN_?(pvVar3);
    }
    if (lVar7 != 0) {
      pGVar2 = (GameObject *)FUN_?(lVar7,pvVar3,in_R8,in_R9,unaff_RDI);
      if (pGVar2 != (GameObject *)0x0) {
        return pGVar2;
      }
      FUN_?(lVar7,pvVar3);
      pcVar1 = (code *)swi(3);
      pGVar2 = (GameObject *)(*pcVar1)();
      return pGVar2;
    }
  }
  return (GameObject *)0x0;
}


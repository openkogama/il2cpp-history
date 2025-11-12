
/* Void AcquireComponents() */

void Assembly-CSharp-firstpass.dll::WaterTile::WaterTile_AcquireComponents
               (WaterTile *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  PlanarReflection_MethodInfo__UnityEngine__Component__GetComponent<PlanarReflection>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&WaterBase_MethodInfo__UnityEngine__Component__GetComponent<WaterBase>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).reflection;
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
  if (pPVar1 == (PlanarReflection *)0x0) {
code_?:
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar2 == (Transform *)0x0) goto code_?;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (pTVar2,(MethodInfo *)0x0);
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
    if (pTVar2 != (Transform *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pTVar2->fields)._._.m_CachedPtr != (void *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if ((pTVar2 == (Transform *)0x0) ||
           (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                               (pTVar2,(MethodInfo *)0x0), pTVar2 == (Transform *)0x0))
        goto code_?;
        pPVar1 = (PlanarReflection *)
                 UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                           ((Component *)pTVar2,
                            PlanarReflection_MethodInfo__UnityEngine__Component__GetComponent<PlanarReflection>__
                           );
        bVar3 = iRam_? != 0;
        (this->fields).reflection = pPVar1;
        if (bVar3) {
          uVar4 = (uint)((ulonglong)&(this->fields).reflection >> 0xc);
          lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
          do {
            uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
            puVar7 = (ulonglong *)(lVar5 + 0xADDR);
            LOCK();
            bVar3 = uVar6 == *puVar7;
            if (bVar3) {
              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar3);
        }
        goto code_?;
      }
    }
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar2 == (Transform *)0x0) goto code_?;
    pPVar1 = (PlanarReflection *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)pTVar2,
                        PlanarReflection_MethodInfo__UnityEngine__Component__GetComponent<PlanarReflection>__
                       );
    bVar3 = iRam_? != 0;
    (this->fields).reflection = pPVar1;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).reflection >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pPVar1->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
  }
code_?:
  pWVar8 = (this->fields).waterBase;
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
  if (pWVar8 != (WaterBase *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pWVar8->fields)._._._._.m_CachedPtr != (void *)0x0) {
      return;
    }
  }
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar2 != (Transform *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (pTVar2,(MethodInfo *)0x0);
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
    if (pTVar2 != (Transform *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pTVar2->fields)._._.m_CachedPtr != (void *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if ((pTVar2 != (Transform *)0x0) &&
           (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                               (pTVar2,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
          pWVar8 = (WaterBase *)
                   UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                             ((Component *)pTVar2,
                              WaterBase_MethodInfo__UnityEngine__Component__GetComponent<WaterBase>__
                             );
          bVar3 = iRam_? == 0;
          (this->fields).waterBase = pWVar8;
          if (bVar3) {
            return;
          }
          uVar4 = (uint)((ulonglong)&(this->fields).waterBase >> 0xc);
          lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
          do {
            uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
            puVar7 = (ulonglong *)(lVar5 + 0xADDR);
            LOCK();
            bVar3 = uVar6 == *puVar7;
            if (bVar3) {
              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar3);
          return;
        }
        goto code_?;
      }
    }
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pWVar8 = (WaterBase *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                         ((Component *)pTVar2,
                          WaterBase_MethodInfo__UnityEngine__Component__GetComponent<WaterBase>__);
      bVar3 = iRam_? == 0;
      (this->fields).waterBase = pWVar8;
      if (bVar3) {
        return;
      }
      uVar4 = (uint)((ulonglong)&(this->fields).waterBase >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnWillRenderObject() */

void Assembly-CSharp-firstpass.dll::WaterTile::WaterTile_OnWillRenderObject
               (WaterTile *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).reflection;
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
  if (pPVar1 != (PlanarReflection *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pPVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pPVar1 = (this->fields).reflection;
      tr = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
      pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_currentInternal
                         ((MethodInfo *)0x0);
      if (pPVar1 == (PlanarReflection *)0x0) goto code_?;
      PlanarReflection::PlanarReflection_WaterTileBeingRendered(pPVar1,tr,pCVar2,(MethodInfo *)0x0);
    }
  }
  pWVar3 = (this->fields).waterBase;
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
  if (pWVar3 != (WaterBase *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pWVar3->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pWVar3 = (this->fields).waterBase;
      UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                ((Component *)this,(MethodInfo *)0x0);
      pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_currentInternal
                         ((MethodInfo *)0x0);
      if (pWVar3 == (WaterBase *)0x0) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
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
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pCVar2 != (Camera *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (((pCVar2->fields)._._._.m_CachedPtr != (void *)0x0) && ((pWVar3->fields).edgeBlend != 0)
           ) {
          DVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_depthTextureMode
                            (pCVar2,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_depthTextureMode
                    (pCVar2,DVar5 | DepthTextureMode__Enum_Depth,(MethodInfo *)0x0);
        }
      }
    }
  }
  return;
}


/* Void Start() */

void Assembly-CSharp-firstpass.dll::WaterTile::WaterTile_Start(WaterTile *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  PlanarReflection_MethodInfo__UnityEngine__Component__GetComponent<PlanarReflection>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&WaterBase_MethodInfo__UnityEngine__Component__GetComponent<WaterBase>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).reflection;
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
  if (pPVar1 == (PlanarReflection *)0x0) {
code_?:
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar2 == (Transform *)0x0) goto code_?;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (pTVar2,(MethodInfo *)0x0);
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
    if (pTVar2 != (Transform *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pTVar2->fields)._._.m_CachedPtr != (void *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if ((pTVar2 == (Transform *)0x0) ||
           (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                               (pTVar2,(MethodInfo *)0x0), pTVar2 == (Transform *)0x0))
        goto code_?;
        pPVar1 = (PlanarReflection *)
                 UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                           ((Component *)pTVar2,
                            PlanarReflection_MethodInfo__UnityEngine__Component__GetComponent<PlanarReflection>__
                           );
        bVar3 = iRam_? != 0;
        (this->fields).reflection = pPVar1;
        if (bVar3) {
          uVar4 = (uint)((ulonglong)&(this->fields).reflection >> 0xc);
          lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
          do {
            uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
            puVar7 = (ulonglong *)(lVar5 + 0xADDR);
            LOCK();
            bVar3 = uVar6 == *puVar7;
            if (bVar3) {
              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar3);
        }
        goto code_?;
      }
    }
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar2 == (Transform *)0x0) goto code_?;
    pPVar1 = (PlanarReflection *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)pTVar2,
                        PlanarReflection_MethodInfo__UnityEngine__Component__GetComponent<PlanarReflection>__
                       );
    bVar3 = iRam_? != 0;
    (this->fields).reflection = pPVar1;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).reflection >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pPVar1->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
  }
code_?:
  pWVar8 = (this->fields).waterBase;
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
  if (pWVar8 != (WaterBase *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pWVar8->fields)._._._._.m_CachedPtr != (void *)0x0) {
      return;
    }
  }
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar2 != (Transform *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (pTVar2,(MethodInfo *)0x0);
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
    if (pTVar2 != (Transform *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pTVar2->fields)._._.m_CachedPtr != (void *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if ((pTVar2 != (Transform *)0x0) &&
           (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                               (pTVar2,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
          pWVar8 = (WaterBase *)
                   UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                             ((Component *)pTVar2,
                              WaterBase_MethodInfo__UnityEngine__Component__GetComponent<WaterBase>__
                             );
          bVar3 = iRam_? == 0;
          (this->fields).waterBase = pWVar8;
          if (bVar3) {
            return;
          }
          uVar4 = (uint)((ulonglong)&(this->fields).waterBase >> 0xc);
          lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
          do {
            uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
            puVar7 = (ulonglong *)(lVar5 + 0xADDR);
            LOCK();
            bVar3 = uVar6 == *puVar7;
            if (bVar3) {
              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar3);
          return;
        }
        goto code_?;
      }
    }
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pWVar8 = (WaterBase *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                         ((Component *)pTVar2,
                          WaterBase_MethodInfo__UnityEngine__Component__GetComponent<WaterBase>__);
      bVar3 = iRam_? == 0;
      (this->fields).waterBase = pWVar8;
      if (bVar3) {
        return;
      }
      uVar4 = (uint)((ulonglong)&(this->fields).waterBase >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


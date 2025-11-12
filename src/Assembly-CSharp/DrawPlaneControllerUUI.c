
/* Void DrawPlaneToModel(GameObject) */

void Assembly-CSharp.dll::DrawPlaneControllerUUI::DrawPlaneControllerUUI_DrawPlaneToModel
               (DrawPlaneControllerUUI *this,GameObject *gameObject,MethodInfo *method)

{
  pWVar1 = (this->fields).worldEditorDrawPlane;
  if (pWVar1 != (WorldEditorDrawPlane *)0x0) {
    pVVar2 = WorldEditorDrawPlane::WorldEditorDrawPlane_get_Pos(&VStack_3,pWVar1,(MethodInfo *)0x0)
    ;
    fVar4 = pVVar2->z;
    fVar5 = pVVar2->y;
    (pWVar1->fields)._cachedPos.x = pVVar2->x;
    (pWVar1->fields)._cachedPos.y = fVar5;
    (pWVar1->fields)._cachedPos.z = fVar4;
    pWVar1 = (this->fields).worldEditorDrawPlane;
    if (pWVar1 != (WorldEditorDrawPlane *)0x0) {
      WorldEditorDrawPlane::WorldEditorDrawPlane_set_TargetGameObject
                (pWVar1,gameObject,(MethodInfo *)0x0);
      pWVar1 = (this->fields).worldEditorDrawPlane;
      if (pWVar1 != (WorldEditorDrawPlane *)0x0) {
        this_00 = (pWVar1->fields)._targetGameObject;
        if ((this_00 == (GameObject *)0x0) ||
           (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (this_00,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_7.x = 0.0;
        VStack_7.y = 0.0;
        VStack_7.z = 0.0;
        pvVar8 = (obj->fields)._._.m_CachedPtr;
        if (pvVar8 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar9 = func_?(&UNK_?);
          FUN_?(uVar9,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcRam_? = pcVar6;
        (*pcRam_?)(pvVar8,&VStack_7);
        VStack_3.x = VStack_7.x;
        VStack_3.y = VStack_7.y;
        VStack_3.z = VStack_7.z;
        WorldEditorDrawPlane::WorldEditorDrawPlane_SetToGridAlignedPos
                  (pWVar1,&VStack_3,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean GetCubePosOnDrawplane(GameObject, IntVector ByRef) */

bool Assembly-CSharp.dll::DrawPlaneControllerUUI::DrawPlaneControllerUUI_GetCubePosOnDrawplane
               (DrawPlaneControllerUUI *this,GameObject *gameObject,IntVector *intVectorHitPosition,
               MethodInfo *method)

{
  this_00 = (this->fields).worldEditorDrawPlane;
  if (this_00 == (WorldEditorDrawPlane *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  VStack_3.x = 0.0;
  VStack_3.y = 0.0;
  VStack_3.z = 0.0;
  bVar2 = WorldEditorDrawPlane::WorldEditorDrawPlane_Pick(this_00,&VStack_3,(MethodInfo *)0x0);
  this_01 = (this_00->fields)._targetGameObject;
  if ((this_01 != (GameObject *)0x0) &&
     (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (this_01,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
    aVStack_4[0].x = VStack_3.x;
    aVStack_4[0].y = VStack_3.y;
    aVStack_4[0].z = VStack_3.z;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_3.x = 0.0;
    VStack_3.y = 0.0;
    VStack_3.z = 0.0;
    pvVar5 = (obj->fields)._._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar5,aVStack_4);
    pVVar7 = WorldEditorDrawPlane::WorldEditorDrawPlane_GetCubePlaceOffset
                       (aVStack_4,this_00,(MethodInfo *)0x0);
    uVar8 = pVVar7->x;
    uVar9 = pVVar7->y;
    fVar10 = VStack_3.z + pVVar7->z;
    fVar11 = VStack_3.x + (float)uVar8;
    fVar12 = VStack_3.y + (float)uVar9;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Math);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
      FUN_?();
    }
    dVar13 = (double)FUN_?((double)fVar11,0);
    dVar14 = (double)FUN_?((double)fVar12,0);
    dVar15 = (double)FUN_?((double)fVar10,0);
    intVectorHitPosition->x = (short)(int)dVar13;
    intVectorHitPosition->y = (short)(int)dVar14;
    intVectorHitPosition->z = (int16_t)(int)dVar15;
    return bVar2;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Void HideDrawPlane() */

void Assembly-CSharp.dll::DrawPlaneControllerUUI::DrawPlaneControllerUUI_HideDrawPlane
               (DrawPlaneControllerUUI *this,MethodInfo *method)

{
  pWVar1 = (this->fields).worldEditorDrawPlane;
  if (pWVar1 == (WorldEditorDrawPlane *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pWVar1->fields).isActive != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pWVar1 = (this->fields).worldEditorDrawPlane;
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
    if (pWVar1 != (WorldEditorDrawPlane *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pWVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
        pWVar1 = (this->fields).worldEditorDrawPlane;
        if (pWVar1 != (WorldEditorDrawPlane *)0x0) {
          bVar3 = WorldEditorDrawPlane::WorldEditorDrawPlane_get_IsOnLandscape
                            (pWVar1,(MethodInfo *)0x0);
          pWVar1 = (this->fields).worldEditorDrawPlane;
          if (pWVar1 != (WorldEditorDrawPlane *)0x0) {
            if (bVar3 == 0) {
              WorldEditorDrawPlane::WorldEditorDrawPlane_SetToTargetGameObjectZero
                        (pWVar1,(MethodInfo *)0x0);
            }
            else {
              WorldEditorDrawPlane::WorldEditorDrawPlane_SetToCameraPos(pWVar1,(MethodInfo *)0x0);
            }
            pWVar1 = (this->fields).worldEditorDrawPlane;
            if (pWVar1 != (WorldEditorDrawPlane *)0x0) {
              value = (pWVar1->fields).isActive == 0;
              pGVar4 = (pWVar1->fields).DrawPlaneVisualization;
              (pWVar1->fields).isActive = value;
              if (pGVar4 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar4,value,(MethodInfo *)0x0);
                pGVar4 = (pWVar1->fields).DrawPlaneCursor;
                if (pGVar4 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar4,value,(MethodInfo *)0x0);
                  WorldEditorDrawPlane::WorldEditorDrawPlane_UpdateAltitude
                            (pWVar1,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    return;
  }
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::DrawPlaneControllerUUI::DrawPlaneControllerUUI_Initialize
               (DrawPlaneControllerUUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  WorldEditorDrawPlane_MethodInfo__UnityEngine__Object__Instantiate<WorldEditorDrawPlane>_WorldEditorDrawPlane_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).worldEditorDrawPlane;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pWVar1 = (WorldEditorDrawPlane *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pWVar1,
                      WorldEditorDrawPlane_MethodInfo__UnityEngine__Object__Instantiate<WorldEditorDrawPlane>_WorldEditorDrawPlane_
                     );
  bVar2 = iRam_? != 0;
  (this->fields).worldEditorDrawPlane = pWVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).worldEditorDrawPlane >> 0xc);
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
  pWVar1 = (this->fields).worldEditorDrawPlane;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((this_00 != (MVWorldObjectClientManager *)0x0) &&
      (pOVar7 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                          (this_00,
                           MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                          ), pOVar7 != (Object *)0x0)) && (pWVar1 != (WorldEditorDrawPlane *)0x0)) {
    WorldEditorDrawPlane::WorldEditorDrawPlane_set_TargetGameObject
              (pWVar1,(GameObject *)pOVar7[0xc].monitor,(MethodInfo *)0x0);
    pWVar1 = (this->fields).worldEditorDrawPlane;
    if (pWVar1 != (WorldEditorDrawPlane *)0x0) {
      pGVar8 = (pWVar1->fields).DrawPlaneVisualization;
      (pWVar1->fields).isActive = 0;
      if (pGVar8 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar8,0,(MethodInfo *)0x0);
        pGVar8 = (pWVar1->fields).DrawPlaneCursor;
        if (pGVar8 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar8,0,(MethodInfo *)0x0);
          pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pWVar1,(MethodInfo *)0x0);
          if (pTVar9 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar10 = (pTVar9->fields)._._.m_CachedPtr;
            if (pvVar10 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pcVar11 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
              uVar12 = func_?(&UNK_?);
              FUN_?(uVar12,0);
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pcRam_? = pcVar11;
            (*pcRam_?)(pvVar10);
            pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pWVar1,(MethodInfo *)0x0);
            if (pTVar9 != (Transform *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar10 = (pTVar9->fields)._._.m_CachedPtr;
              if (pvVar10 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pcVar11 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
                uVar12 = func_?(&UNK_?);
                FUN_?(uVar12,0);
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pcRam_? = pcVar11;
              (*pcRam_?)(pvVar10);
              pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)pWVar1,(MethodInfo *)0x0);
              if (pTVar9 != (Transform *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                uStack_13 = 0;
                fStack_14 = 0.0;
                pvVar10 = (pTVar9->fields)._._.m_CachedPtr;
                if (pvVar10 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                pcVar11 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
                  uVar12 = func_?(&UNK_?);
                  FUN_?(uVar12,0);
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                pcRam_? = pcVar11;
                (*pcRam_?)(pvVar10,&uStack_13);
                pWVar15 = (pWVar1->fields).OnAltitudeChanged;
                iVar16 = (int)((fStack_14 + 0.0) - _UNK_?);
                (pWVar1->fields)._altitude = iVar16;
                if (pWVar15 != (WorldEditorDrawPlane_AltitudeChangedDelegate *)0x0) {
                  (*(pWVar15->fields)._._.invoke_impl)
                            ((pWVar15->fields)._._.method_code,iVar16,(pWVar15->fields)._._.method);
                }
                return;
              }
            }
          }
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void MoveDrawPlane(Int32) */

void Assembly-CSharp.dll::DrawPlaneControllerUUI::DrawPlaneControllerUUI_MoveDrawPlane
               (DrawPlaneControllerUUI *this,int32_t dir,MethodInfo *method)

{
  this_00 = (this->fields).worldEditorDrawPlane;
  if (this_00 == (WorldEditorDrawPlane *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  if (_UNK_? < fVar3 - (this_00->fields).lastMovePlaneDelta) {
    pVVar4 = WorldEditorDrawPlane::WorldEditorDrawPlane_get_Pos
                       ((Vector3 *)auStack_5,this_00,(MethodInfo *)0x0);
    VStack_6.x = pVVar4->x;
    VStack_6.y = pVVar4->y;
    fVar3 = pVVar4->z;
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                    ((Component *)this_00,(MethodInfo *)0x0);
    if (obj == (Transform *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    auStack_5._0_4_ = 0.0;
    auStack_5._4_4_ = 0.0;
    stack0xffffffffffffff40 = 0;
    pvVar7 = (obj->fields)._._.m_CachedPtr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar7,auStack_5);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar8 = (float)auStack_5._8_4_ + (float)auStack_5._8_4_;
    fVar9 = (float)auStack_5._4_4_ + (float)auStack_5._4_4_;
    fVar10 = (float)auStack_5._0_4_ * ((float)auStack_5._0_4_ + (float)auStack_5._0_4_);
    pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar2._0_4_ = (pVVar11->upVector).x;
    uVar2._4_4_ = (pVVar11->upVector).y;
    fVar12 = fStack_13 * ((float)auStack_5._0_4_ + (float)auStack_5._0_4_);
    fVar14 = (float)dir;
    fVar15 = (pVVar11->upVector).z;
    VStack_6.z = (((float)auStack_5._0_4_ * fVar8 - fStack_13 * fVar9) * (float)uVar2 +
                   (fVar12 + (float)auStack_5._4_4_ * fVar8) * uVar2._4_4_ +
                  (_UNK_? - ((float)auStack_5._4_4_ * fVar9 + fVar10)) * fVar15) * fVar14 +
                  fVar3;
    VStack_6.y = ((_UNK_? - ((float)auStack_5._8_4_ * fVar8 + fVar10)) * uVar2._4_4_ +
                   (fStack_13 * fVar8 + (float)auStack_5._0_4_ * fVar9) * (float)uVar2 +
                  ((float)auStack_5._4_4_ * fVar8 - fVar12) * fVar15) * fVar14 + VStack_6.y;
    VStack_6.x = ((_UNK_? -
                   ((float)auStack_5._8_4_ * fVar8 + (float)auStack_5._4_4_ * fVar9)) *
                   (float)uVar2 +
                   ((float)auStack_5._0_4_ * fVar9 - fStack_13 * fVar8) * uVar2._4_4_ +
                  (fStack_13 * fVar9 + (float)auStack_5._0_4_ * fVar8) * fVar15) * fVar14 +
                  VStack_6.x;
    auStack_5._0_8_ = uVar2;
    WorldEditorDrawPlane::WorldEditorDrawPlane_set_Pos(this_00,&VStack_6,(MethodInfo *)0x0);
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    fVar3 = (float)(*pcRam_?)();
    (this_00->fields).lastMovePlaneDelta = fVar3;
  }
  return;
}


/* Boolean Pick(Vector3 ByRef) */

bool Assembly-CSharp.dll::DrawPlaneControllerUUI::DrawPlaneControllerUUI_Pick
               (DrawPlaneControllerUUI *this,Vector3 *hit,MethodInfo *method)

{
  pWVar1 = (this->fields).worldEditorDrawPlane;
  if (pWVar1 == (WorldEditorDrawPlane *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper,hit,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar4 = (pWVar1->fields).mainCamera;
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
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pCVar4 != (Camera *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pCVar4->fields)._._._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  pCVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  bVar5 = iRam_? != 0;
  (pWVar1->fields).mainCamera = pCVar4;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(pWVar1->fields).mainCamera >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
code_?:
  pCVar4 = (pWVar1->fields).mainCamera;
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  RStack_10.m_Origin.x = 0.0;
  RStack_10.m_Origin.y = 0.0;
  RStack_10.m_Origin.z = 0.0;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar11 = func_?(&UNK_?);
    FUN_?(uVar11,0);
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(&RStack_10);
  uStack_12 = 0;
  uStack_13 = 0;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar11 = func_?(&UNK_?);
    FUN_?(uVar11,0);
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(&uStack_12);
  if (pCVar4 != (Camera *)0x0) {
    uStackX_8 = CONCAT44(uStack_12._4_4_,RStack_10.m_Origin.x);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    auStack_14 = (undefined1  [8])0x0;
    fStack_15 = 0.0;
    fStack_16 = 0.0;
    fStack_17 = 0.0;
    fStack_18 = 0.0;
    pvVar19 = (pCVar4->fields)._._._.m_CachedPtr;
    if (pvVar19 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar4,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    pcRam_? = pcVar2;
    method_00 = (MethodInfo *)auStack_14;
    (*pcRam_?)(pvVar19,&uStackX_8,2);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__EventSystems__EventSystem);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStackX_8 = uStackX_8 & 0xffffffff00000000;
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_00 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                        ((MethodInfo *)0x0);
    if (this_00 != (EventSystem *)0x0) {
      bVar3 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
              EventSystem_IsPointerOverGameObject(this_00,(MethodInfo *)0x0);
      fVar20 = fStack_16;
      if ((bVar3 == 0) && ((pWVar1->fields).isActive != 0)) {
        RStack_10.m_Direction.z = fStack_18;
        RStack_10.m_Direction.y = fStack_17;
        RStack_10.m_Origin._0_8_ = auStack_14;
        RStack_10.m_Origin.z = fStack_15;
        RStack_10.m_Direction.x = fStack_16;
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                          (&(pWVar1->fields).editorPlane,&RStack_10,(float *)&uStackX_8,method_00);
        fVar21 = fStack_18;
        if (bVar3 != 0) {
          RStack_10.m_Origin.y = fStack_17;
          RStack_10.m_Origin.x = fStack_16;
          RStack_10.m_Origin.z = fStack_18;
          fVar22 = (float)FUN_?(&RStack_10);
          if (_UNK_? < fVar22) {
            fVar21 = fVar21 / fVar22;
            RStack_10.m_Origin.y = fStack_17 / fVar22;
            RStack_10.m_Origin.x = fVar20 / fVar22;
          }
          else {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar23 = TypeInfo__UnityEngine__Vector3->static_fields;
            RStack_10.m_Origin.x = (pVVar23->zeroVector).x;
            RStack_10.m_Origin.y = (pVVar23->zeroVector).y;
            fVar21 = (pVVar23->zeroVector).z;
          }
          hit->x = RStack_10.m_Origin.x * (float)uStackX_8 + (float)auStack_14._0_4_;
          hit->y = RStack_10.m_Origin.y * (float)uStackX_8 + (float)auStack_14._4_4_;
          hit->z = fVar21 * (float)uStackX_8 + fStack_15;
          return 1;
        }
      }
      return 0;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void ReturnDrawPlaneToLandscape() */

void Assembly-CSharp.dll::DrawPlaneControllerUUI::DrawPlaneControllerUUI_ReturnDrawPlaneToLandscape
               (DrawPlaneControllerUUI *this,MethodInfo *method)

{
  this_00 = (this->fields).worldEditorDrawPlane;
  if (this_00 != (WorldEditorDrawPlane *)0x0) {
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      pOVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                         (this_01,
                          MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                         );
      if (pOVar1 != (Object *)0x0) {
        WorldEditorDrawPlane::WorldEditorDrawPlane_set_TargetGameObject
                  (this_00,(GameObject *)pOVar1[0xc].monitor,(MethodInfo *)0x0);
        VStack_2.x = (this_00->fields)._cachedPos.x;
        VStack_2.y = (this_00->fields)._cachedPos.y;
        VStack_2.z = (this_00->fields)._cachedPos.z;
        WorldEditorDrawPlane::WorldEditorDrawPlane_set_Pos(this_00,&VStack_2,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
        fVar4 = (pVVar3->zeroVector).y;
        fVar5 = (pVVar3->zeroVector).z;
        (this_00->fields)._cachedPos.x = (pVVar3->zeroVector).x;
        (this_00->fields)._cachedPos.y = fVar4;
        (this_00->fields)._cachedPos.z = fVar5;
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ToggleDrawPlane() */

void Assembly-CSharp.dll::DrawPlaneControllerUUI::DrawPlaneControllerUUI_ToggleDrawPlane
               (DrawPlaneControllerUUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).worldEditorDrawPlane;
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
  if (pWVar1 != (WorldEditorDrawPlane *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pWVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pWVar1 = (this->fields).worldEditorDrawPlane;
      if (pWVar1 != (WorldEditorDrawPlane *)0x0) {
        bVar2 = WorldEditorDrawPlane::WorldEditorDrawPlane_get_IsOnLandscape
                          (pWVar1,(MethodInfo *)0x0);
        pWVar1 = (this->fields).worldEditorDrawPlane;
        if (pWVar1 != (WorldEditorDrawPlane *)0x0) {
          if (bVar2 == 0) {
            WorldEditorDrawPlane::WorldEditorDrawPlane_SetToTargetGameObjectZero
                      (pWVar1,(MethodInfo *)0x0);
          }
          else {
            WorldEditorDrawPlane::WorldEditorDrawPlane_SetToCameraPos(pWVar1,(MethodInfo *)0x0);
          }
          pWVar1 = (this->fields).worldEditorDrawPlane;
          if (pWVar1 != (WorldEditorDrawPlane *)0x0) {
            value = (pWVar1->fields).isActive == 0;
            pGVar3 = (pWVar1->fields).DrawPlaneVisualization;
            (pWVar1->fields).isActive = value;
            if (pGVar3 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar3,value,(MethodInfo *)0x0);
              pGVar3 = (pWVar1->fields).DrawPlaneCursor;
              if (pGVar3 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar3,value,(MethodInfo *)0x0);
                WorldEditorDrawPlane::WorldEditorDrawPlane_UpdateAltitude(pWVar1,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}


/* Int32 get_Altitude() */

int32_t Assembly-CSharp.dll::DrawPlaneControllerUUI::DrawPlaneControllerUUI_get_Altitude
                  (DrawPlaneControllerUUI *this,MethodInfo *method)

{
  pWVar1 = (this->fields).worldEditorDrawPlane;
  if (pWVar1 != (WorldEditorDrawPlane *)0x0) {
    return (pWVar1->fields)._altitude;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Boolean get_IsDrawPlaneActive() */

bool Assembly-CSharp.dll::DrawPlaneControllerUUI::DrawPlaneControllerUUI_get_IsDrawPlaneActive
               (DrawPlaneControllerUUI *this,MethodInfo *method)

{
  pWVar1 = (this->fields).worldEditorDrawPlane;
  if (pWVar1 != (WorldEditorDrawPlane *)0x0) {
    return (pWVar1->fields).isActive;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* DrawPlaneAxis get_Orientation() */

DrawPlaneAxis__Enum
Assembly-CSharp.dll::DrawPlaneControllerUUI::DrawPlaneControllerUUI_get_Orientation
          (DrawPlaneControllerUUI *this,MethodInfo *method)

{
  pWVar1 = (this->fields).worldEditorDrawPlane;
  if (pWVar1 != (WorldEditorDrawPlane *)0x0) {
    return (pWVar1->fields).drawPlaneAxis;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  DVar3 = (*pcVar2)();
  return DVar3;
}


/* Vector3 get_Pos() */

Vector3 * Assembly-CSharp.dll::DrawPlaneControllerUUI::DrawPlaneControllerUUI_get_Pos
                    (Vector3 *__return_storage_ptr__,DrawPlaneControllerUUI *this,MethodInfo *method
                    )

{
  this_00 = (this->fields).worldEditorDrawPlane;
  if (this_00 != (WorldEditorDrawPlane *)0x0) {
    pVVar1 = WorldEditorDrawPlane::WorldEditorDrawPlane_get_Pos
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* Void set_Orientation(DrawPlaneAxis) */

void Assembly-CSharp.dll::DrawPlaneControllerUUI::DrawPlaneControllerUUI_set_Orientation
               (DrawPlaneControllerUUI *this,DrawPlaneAxis__Enum value,MethodInfo *method)

{
  this_00 = (this->fields).worldEditorDrawPlane;
  if (this_00 == (WorldEditorDrawPlane *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (value == DrawPlaneAxis__Enum_X) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_4._0_4_ = (pVVar3->backVector).x;
    uStack_4._4_4_ = (pVVar3->backVector).y;
    puStack_5 = (undefined *)CONCAT44(puStack_5._4_4_,(pVVar3->backVector).z);
    uStack_6 = 0;
    uStack_7 = 0;
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(_UNK_?,&uStack_4,&uStack_6);
    if (pTVar2 == (Transform *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uStack_9 = (undefined4)uStack_6;
    uStack_10 = uStack_6._4_4_;
    uStack_11 = (undefined4)uStack_7;
    uStack_12 = uStack_7._4_4_;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar13 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar13 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (value == DrawPlaneAxis__Enum_Y) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_4._0_4_ = (pVVar3->upVector).x;
    uStack_4._4_4_ = (pVVar3->upVector).y;
    puStack_5 = (undefined *)CONCAT44(puStack_5._4_4_,(pVVar3->upVector).z);
    uStack_6 = 0;
    uStack_7 = 0;
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(0,&uStack_4,&uStack_6);
    if (pTVar2 == (Transform *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uStack_9 = (undefined4)uStack_6;
    uStack_10 = uStack_6._4_4_;
    uStack_11 = (undefined4)uStack_7;
    uStack_12 = uStack_7._4_4_;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar13 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar13 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    if (value != DrawPlaneAxis__Enum_Z) goto code_?;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_4._0_4_ = (pVVar3->rightVector).x;
    uStack_4._4_4_ = (pVVar3->rightVector).y;
    puStack_5 = (undefined *)CONCAT44(puStack_5._4_4_,(pVVar3->rightVector).z);
    uStack_6 = 0;
    uStack_7 = 0;
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(_UNK_?,&uStack_4,&uStack_6);
    if (pTVar2 == (Transform *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uStack_9 = (undefined4)uStack_6;
    uStack_10 = uStack_6._4_4_;
    uStack_11 = (undefined4)uStack_7;
    uStack_12 = uStack_7._4_4_;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar13 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar13 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar13);
code_?:
  bVar14 = WorldEditorDrawPlane::WorldEditorDrawPlane_get_IsOnLandscape(this_00,(MethodInfo *)0x0);
  if (bVar14 == 0) {
    WorldEditorDrawPlane::WorldEditorDrawPlane_SetToTargetGameObjectZero(this_00,(MethodInfo *)0x0);
  }
  else {
    WorldEditorDrawPlane::WorldEditorDrawPlane_SetToCameraPos(this_00,(MethodInfo *)0x0);
  }
  WorldEditorDrawPlane::WorldEditorDrawPlane_UpdateEditorPlanePosition(this_00,(MethodInfo *)0x0);
  WorldEditorDrawPlane::WorldEditorDrawPlane_UpdateAltitude(this_00,(MethodInfo *)0x0);
  (this_00->fields).drawPlaneAxis = value;
  return;
}


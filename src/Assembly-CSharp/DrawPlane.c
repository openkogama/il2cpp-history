
/* Void DrawPlaneToModel(GameObject) */

void Assembly-CSharp.dll::DrawPlane::DrawPlane_DrawPlaneToModel
               (GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DrawPlane);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
  if ((pDVar1 != (DrawPlaneControllerUUI *)0x0) &&
     (pWVar2 = (pDVar1->fields).worldEditorDrawPlane, pWVar2 != (WorldEditorDrawPlane *)0x0)) {
    pVVar3 = WorldEditorDrawPlane::WorldEditorDrawPlane_get_Pos(&VStack_4,pWVar2,(MethodInfo *)0x0)
    ;
    fVar5 = pVVar3->z;
    fVar6 = pVVar3->y;
    (pWVar2->fields)._cachedPos.x = pVVar3->x;
    (pWVar2->fields)._cachedPos.y = fVar6;
    (pWVar2->fields)._cachedPos.z = fVar5;
    pWVar2 = (pDVar1->fields).worldEditorDrawPlane;
    if (pWVar2 != (WorldEditorDrawPlane *)0x0) {
      WorldEditorDrawPlane::WorldEditorDrawPlane_set_TargetGameObject
                (pWVar2,gameObject,(MethodInfo *)0x0);
      pWVar2 = (pDVar1->fields).worldEditorDrawPlane;
      if (pWVar2 != (WorldEditorDrawPlane *)0x0) {
        this = (pWVar2->fields)._targetGameObject;
        if ((this == (GameObject *)0x0) ||
           (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (this,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
          FUN_?();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
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
        VStack_8.x = 0.0;
        VStack_8.y = 0.0;
        VStack_8.z = 0.0;
        pvVar9 = (obj->fields)._._.m_CachedPtr;
        if (pvVar9 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pcVar7 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pcRam_? = pcVar7;
        (*pcRam_?)(pvVar9,&VStack_8);
        VStack_4.x = VStack_8.x;
        VStack_4.y = VStack_8.y;
        VStack_4.z = VStack_8.z;
        WorldEditorDrawPlane::WorldEditorDrawPlane_SetToGridAlignedPos
                  (pWVar2,&VStack_4,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean GetCubePosOnDrawplane(GameObject, IntVector ByRef) */

bool Assembly-CSharp.dll::DrawPlane::DrawPlane_GetCubePosOnDrawplane
               (GameObject *gameObject,IntVector *intVectorHitPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DrawPlane);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
  if ((pDVar1 == (DrawPlaneControllerUUI *)0x0) ||
     (this = (pDVar1->fields).worldEditorDrawPlane, this == (WorldEditorDrawPlane *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  VStack_4.x = 0.0;
  VStack_4.y = 0.0;
  VStack_4.z = 0.0;
  bVar3 = WorldEditorDrawPlane::WorldEditorDrawPlane_Pick(this,&VStack_4,(MethodInfo *)0x0);
  this_00 = (this->fields)._targetGameObject;
  if ((this_00 == (GameObject *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (this_00,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  aVStack_5[0].x = VStack_4.x;
  aVStack_5[0].y = VStack_4.y;
  aVStack_5[0].z = VStack_4.z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_4.x = 0.0;
  VStack_4.y = 0.0;
  VStack_4.z = 0.0;
  pvVar6 = (obj->fields)._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar6,aVStack_5);
  pVVar8 = WorldEditorDrawPlane::WorldEditorDrawPlane_GetCubePlaceOffset
                     (aVStack_5,this,(MethodInfo *)0x0);
  uVar9 = pVVar8->x;
  uVar10 = pVVar8->y;
  fVar11 = VStack_4.z + pVVar8->z;
  fVar12 = VStack_4.x + (float)uVar9;
  fVar13 = VStack_4.y + (float)uVar10;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  dVar14 = (double)FUN_?((double)fVar12,0);
  dVar15 = (double)FUN_?((double)fVar13,0);
  dVar16 = (double)FUN_?((double)fVar11,0);
  intVectorHitPosition->x = (short)(int)dVar14;
  intVectorHitPosition->y = (short)(int)dVar15;
  intVectorHitPosition->z = (int16_t)(int)dVar16;
  return bVar3;
}


/* Void HideDrawPlane() */

void Assembly-CSharp.dll::DrawPlane::DrawPlane_HideDrawPlane(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DrawPlane);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
  if ((pDVar1 == (DrawPlaneControllerUUI *)0x0) ||
     (pWVar2 = (pDVar1->fields).worldEditorDrawPlane, pWVar2 == (WorldEditorDrawPlane *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pWVar2->fields).isActive == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pWVar2 = (pDVar1->fields).worldEditorDrawPlane;
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
  if (pWVar2 != (WorldEditorDrawPlane *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pWVar2->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pWVar2 = (pDVar1->fields).worldEditorDrawPlane;
      if (pWVar2 != (WorldEditorDrawPlane *)0x0) {
        bVar4 = WorldEditorDrawPlane::WorldEditorDrawPlane_get_IsOnLandscape
                          (pWVar2,(MethodInfo *)0x0);
        pWVar2 = (pDVar1->fields).worldEditorDrawPlane;
        if (pWVar2 != (WorldEditorDrawPlane *)0x0) {
          if (bVar4 == 0) {
            WorldEditorDrawPlane::WorldEditorDrawPlane_SetToTargetGameObjectZero
                      (pWVar2,(MethodInfo *)0x0);
          }
          else {
            WorldEditorDrawPlane::WorldEditorDrawPlane_SetToCameraPos(pWVar2,(MethodInfo *)0x0);
          }
          pWVar2 = (pDVar1->fields).worldEditorDrawPlane;
          if (pWVar2 != (WorldEditorDrawPlane *)0x0) {
            value = (pWVar2->fields).isActive == 0;
            pGVar5 = (pWVar2->fields).DrawPlaneVisualization;
            (pWVar2->fields).isActive = value;
            if (pGVar5 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar5,value,(MethodInfo *)0x0);
              pGVar5 = (pWVar2->fields).DrawPlaneCursor;
              if (pGVar5 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar5,value,(MethodInfo *)0x0);
                WorldEditorDrawPlane::WorldEditorDrawPlane_UpdateAltitude(pWVar2,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}


/* Void Initialize(DrawPlaneControllerUUI) */

void Assembly-CSharp.dll::DrawPlane::DrawPlane_Initialize
               (DrawPlaneControllerUUI *drawPlaneController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DrawPlane);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__DrawPlane->static_fields->drawPlaneController = drawPlaneController;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__DrawPlane->static_fields >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  return;
}


/* Void MoveDrawPlane(Int32) */

void Assembly-CSharp.dll::DrawPlane::DrawPlane_MoveDrawPlane(int32_t dir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DrawPlane);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
  if ((pDVar1 == (DrawPlaneControllerUUI *)0x0) ||
     (this = (pDVar1->fields).worldEditorDrawPlane, this == (WorldEditorDrawPlane *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcRam_?)();
  if (_UNK_? < fVar4 - (this->fields).lastMovePlaneDelta) {
    pVVar5 = WorldEditorDrawPlane::WorldEditorDrawPlane_get_Pos
                       ((Vector3 *)auStack_6,this,(MethodInfo *)0x0);
    VStack_7.x = pVVar5->x;
    VStack_7.y = pVVar5->y;
    fVar4 = pVVar5->z;
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                    ((Component *)this,(MethodInfo *)0x0);
    if (obj == (Transform *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
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
    auStack_6._0_4_ = 0.0;
    auStack_6._4_4_ = 0.0;
    stack0xffffffffffffff40 = 0;
    pvVar8 = (obj->fields)._._.m_CachedPtr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar8,auStack_6);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar9 = (float)auStack_6._8_4_ + (float)auStack_6._8_4_;
    fVar10 = (float)auStack_6._4_4_ + (float)auStack_6._4_4_;
    fVar11 = (float)auStack_6._0_4_ * ((float)auStack_6._0_4_ + (float)auStack_6._0_4_);
    pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar3._0_4_ = (pVVar12->upVector).x;
    uVar3._4_4_ = (pVVar12->upVector).y;
    fVar13 = fStack_14 * ((float)auStack_6._0_4_ + (float)auStack_6._0_4_);
    fVar15 = (float)dir;
    fVar16 = (pVVar12->upVector).z;
    VStack_7.z = (((float)auStack_6._0_4_ * fVar9 - fStack_14 * fVar10) * (float)uVar3 +
                   (fVar13 + (float)auStack_6._4_4_ * fVar9) * uVar3._4_4_ +
                  (_UNK_? - ((float)auStack_6._4_4_ * fVar10 + fVar11)) * fVar16) * fVar15 +
                  fVar4;
    VStack_7.y = ((_UNK_? - ((float)auStack_6._8_4_ * fVar9 + fVar11)) * uVar3._4_4_ +
                   (fStack_14 * fVar9 + (float)auStack_6._0_4_ * fVar10) * (float)uVar3 +
                  ((float)auStack_6._4_4_ * fVar9 - fVar13) * fVar16) * fVar15 + VStack_7.y;
    VStack_7.x = ((_UNK_? -
                   ((float)auStack_6._8_4_ * fVar9 + (float)auStack_6._4_4_ * fVar10)) *
                   (float)uVar3 +
                   ((float)auStack_6._0_4_ * fVar10 - fStack_14 * fVar9) * uVar3._4_4_ +
                  (fStack_14 * fVar10 + (float)auStack_6._0_4_ * fVar9) * fVar16) * fVar15 +
                  VStack_7.x;
    auStack_6._0_8_ = uVar3;
    WorldEditorDrawPlane::WorldEditorDrawPlane_set_Pos(this,&VStack_7,(MethodInfo *)0x0);
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    fVar4 = (float)(*pcRam_?)();
    (this->fields).lastMovePlaneDelta = fVar4;
  }
  return;
}


/* Boolean Pick(Vector3 ByRef) */

bool Assembly-CSharp.dll::DrawPlane::DrawPlane_Pick(Vector3 *hit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DrawPlane);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__EventSystem);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
    FUN_?();
  }
  pEVar1 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                     ((MethodInfo *)0x0);
  if (pEVar1 == (EventSystem *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  bVar3 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
          EventSystem_IsPointerOverGameObject(pEVar1,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    return 0;
  }
  pDVar4 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
  if ((pDVar4 == (DrawPlaneControllerUUI *)0x0) ||
     (pWVar5 = (pDVar4->fields).worldEditorDrawPlane, pWVar5 == (WorldEditorDrawPlane *)0x0))
  goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper,hit,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar6 = (pWVar5->fields).mainCamera;
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
  if (pCVar6 != (Camera *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pCVar6->fields)._._._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  pCVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  bVar7 = iRam_? != 0;
  (pWVar5->fields).mainCamera = pCVar6;
  if (bVar7) {
    uVar8 = (uint)((ulonglong)&(pWVar5->fields).mainCamera >> 0xc);
    uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar10 == *puVar11;
      if (bVar7) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
code_?:
  pCVar6 = (pWVar5->fields).mainCamera;
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  RStack_12.m_Origin.x = 0.0;
  RStack_12.m_Origin.y = 0.0;
  RStack_12.m_Origin.z = 0.0;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar13 = func_?(&UNK_?);
    FUN_?(uVar13,0);
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(&RStack_12);
  uStack_14 = 0;
  uStack_15 = 0;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar13 = func_?(&UNK_?);
    FUN_?(uVar13,0);
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(&uStack_14);
  if (pCVar6 != (Camera *)0x0) {
    uStackX_8 = CONCAT44(uStack_14._4_4_,RStack_12.m_Origin.x);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    auStack_16 = (undefined1  [8])0x0;
    fStack_17 = 0.0;
    fStack_18 = 0.0;
    fStack_19 = 0.0;
    fStack_20 = 0.0;
    pvVar21 = (pCVar6->fields)._._._.m_CachedPtr;
    if (pvVar21 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar6,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar13 = func_?(&UNK_?);
      FUN_?(uVar13,0);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    pcRam_? = pcVar2;
    method_00 = (MethodInfo *)auStack_16;
    (*pcRam_?)(pvVar21,&uStackX_8,2);
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
    pEVar1 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                       ((MethodInfo *)0x0);
    if (pEVar1 != (EventSystem *)0x0) {
      bVar3 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
              EventSystem_IsPointerOverGameObject(pEVar1,(MethodInfo *)0x0);
      fVar22 = fStack_18;
      if ((bVar3 == 0) && ((pWVar5->fields).isActive != 0)) {
        RStack_12.m_Direction.z = fStack_20;
        RStack_12.m_Direction.y = fStack_19;
        RStack_12.m_Origin._0_8_ = auStack_16;
        RStack_12.m_Origin.z = fStack_17;
        RStack_12.m_Direction.x = fStack_18;
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                          (&(pWVar5->fields).editorPlane,&RStack_12,(float *)&uStackX_8,method_00);
        fVar23 = fStack_20;
        if (bVar3 != 0) {
          RStack_12.m_Origin.y = fStack_19;
          RStack_12.m_Origin.x = fStack_18;
          RStack_12.m_Origin.z = fStack_20;
          fVar24 = (float)FUN_?(&RStack_12);
          if (_UNK_? < fVar24) {
            fVar23 = fVar23 / fVar24;
            RStack_12.m_Origin.y = fStack_19 / fVar24;
            RStack_12.m_Origin.x = fVar22 / fVar24;
          }
          else {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar25 = TypeInfo__UnityEngine__Vector3->static_fields;
            RStack_12.m_Origin.x = (pVVar25->zeroVector).x;
            RStack_12.m_Origin.y = (pVVar25->zeroVector).y;
            fVar23 = (pVVar25->zeroVector).z;
          }
          hit->x = RStack_12.m_Origin.x * (float)uStackX_8 + (float)auStack_16._0_4_;
          hit->y = RStack_12.m_Origin.y * (float)uStackX_8 + (float)auStack_16._4_4_;
          hit->z = fVar23 * (float)uStackX_8 + fStack_17;
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


/* Void Reset() */

void Assembly-CSharp.dll::DrawPlane::DrawPlane_Reset(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DrawPlane);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__DrawPlane->static_fields->drawPlaneController = (DrawPlaneControllerUUI *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__DrawPlane->static_fields >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  return;
}


/* Void ReturnDrawPlaneToLandscape() */

void Assembly-CSharp.dll::DrawPlane::DrawPlane_ReturnDrawPlaneToLandscape(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DrawPlane);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
  if ((pDVar1 != (DrawPlaneControllerUUI *)0x0) &&
     (this = (pDVar1->fields).worldEditorDrawPlane, this != (WorldEditorDrawPlane *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_00 != (MVWorldObjectClientManager *)0x0) {
      pOVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                         (this_00,
                          MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                         );
      if (pOVar2 != (Object *)0x0) {
        WorldEditorDrawPlane::WorldEditorDrawPlane_set_TargetGameObject
                  (this,(GameObject *)pOVar2[0xc].monitor,(MethodInfo *)0x0);
        VStack_3.x = (this->fields)._cachedPos.x;
        VStack_3.y = (this->fields)._cachedPos.y;
        VStack_3.z = (this->fields)._cachedPos.z;
        WorldEditorDrawPlane::WorldEditorDrawPlane_set_Pos(this,&VStack_3,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
        fVar5 = (pVVar4->zeroVector).y;
        fVar6 = (pVVar4->zeroVector).z;
        (this->fields)._cachedPos.x = (pVVar4->zeroVector).x;
        (this->fields)._cachedPos.y = fVar5;
        (this->fields)._cachedPos.z = fVar6;
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ToggleDrawPlane() */

void Assembly-CSharp.dll::DrawPlane::DrawPlane_ToggleDrawPlane(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DrawPlane);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
  if (pDVar1 == (DrawPlaneControllerUUI *)0x0) {
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
  pWVar3 = (pDVar1->fields).worldEditorDrawPlane;
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
  if (pWVar3 != (WorldEditorDrawPlane *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pWVar3->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pWVar3 = (pDVar1->fields).worldEditorDrawPlane;
      if (pWVar3 != (WorldEditorDrawPlane *)0x0) {
        bVar4 = WorldEditorDrawPlane::WorldEditorDrawPlane_get_IsOnLandscape
                          (pWVar3,(MethodInfo *)0x0);
        pWVar3 = (pDVar1->fields).worldEditorDrawPlane;
        if (pWVar3 != (WorldEditorDrawPlane *)0x0) {
          if (bVar4 == 0) {
            WorldEditorDrawPlane::WorldEditorDrawPlane_SetToTargetGameObjectZero
                      (pWVar3,(MethodInfo *)0x0);
          }
          else {
            WorldEditorDrawPlane::WorldEditorDrawPlane_SetToCameraPos(pWVar3,(MethodInfo *)0x0);
          }
          pWVar3 = (pDVar1->fields).worldEditorDrawPlane;
          if (pWVar3 != (WorldEditorDrawPlane *)0x0) {
            value = (pWVar3->fields).isActive == 0;
            pGVar5 = (pWVar3->fields).DrawPlaneVisualization;
            (pWVar3->fields).isActive = value;
            if (pGVar5 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar5,value,(MethodInfo *)0x0);
              pGVar5 = (pWVar3->fields).DrawPlaneCursor;
              if (pGVar5 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar5,value,(MethodInfo *)0x0);
                WorldEditorDrawPlane::WorldEditorDrawPlane_UpdateAltitude(pWVar3,(MethodInfo *)0x0);
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


/* Int32 get_Altitude() */

int32_t Assembly-CSharp.dll::DrawPlane::DrawPlane_get_Altitude(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DrawPlane);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
  if ((pDVar1 != (DrawPlaneControllerUUI *)0x0) &&
     (pWVar2 = (pDVar1->fields).worldEditorDrawPlane, pWVar2 != (WorldEditorDrawPlane *)0x0)) {
    return (pWVar2->fields)._altitude;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Boolean get_InputEnabled() */

bool Assembly-CSharp.dll::DrawPlane::DrawPlane_get_InputEnabled(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DrawPlane);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
  if (pDVar1 != (DrawPlaneControllerUUI *)0x0) {
    return (pDVar1->fields).inputEnabled;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean get_IsDrawPlaneActive() */

bool Assembly-CSharp.dll::DrawPlane::DrawPlane_get_IsDrawPlaneActive(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DrawPlane);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
  if ((pDVar1 != (DrawPlaneControllerUUI *)0x0) &&
     (pWVar2 = (pDVar1->fields).worldEditorDrawPlane, pWVar2 != (WorldEditorDrawPlane *)0x0)) {
    return (pWVar2->fields).isActive;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* DrawPlaneAxis get_Orientation() */

DrawPlaneAxis__Enum Assembly-CSharp.dll::DrawPlane::DrawPlane_get_Orientation(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DrawPlane);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
  if ((pDVar1 != (DrawPlaneControllerUUI *)0x0) &&
     (pWVar2 = (pDVar1->fields).worldEditorDrawPlane, pWVar2 != (WorldEditorDrawPlane *)0x0)) {
    return (pWVar2->fields).drawPlaneAxis;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  DVar4 = (*pcVar3)();
  return DVar4;
}


/* Vector3 get_Pos() */

Vector3 * Assembly-CSharp.dll::DrawPlane::DrawPlane_get_Pos
                    (Vector3 *__return_storage_ptr__,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DrawPlane);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
  if ((pDVar1 != (DrawPlaneControllerUUI *)0x0) &&
     (this = (pDVar1->fields).worldEditorDrawPlane, this != (WorldEditorDrawPlane *)0x0)) {
    pVVar2 = WorldEditorDrawPlane::WorldEditorDrawPlane_get_Pos(&VStack_3,this,(MethodInfo *)0x0);
    fVar4 = pVVar2->y;
    fVar5 = pVVar2->z;
    __return_storage_ptr__->x = pVVar2->x;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pVVar2 = (Vector3 *)(*pcVar6)();
  return pVVar2;
}


/* Void set_InputEnabled(Boolean) */

void Assembly-CSharp.dll::DrawPlane::DrawPlane_set_InputEnabled(bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DrawPlane);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
  if (pDVar1 != (DrawPlaneControllerUUI *)0x0) {
    (pDVar1->fields).inputEnabled = value;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_Orientation(DrawPlaneAxis) */

void Assembly-CSharp.dll::DrawPlane::DrawPlane_set_Orientation
               (DrawPlaneAxis__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DrawPlane);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
  if ((pDVar1 == (DrawPlaneControllerUUI *)0x0) ||
     (this = (pDVar1->fields).worldEditorDrawPlane, this == (WorldEditorDrawPlane *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (value == DrawPlaneAxis__Enum_X) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_5._0_4_ = (pVVar4->backVector).x;
    uStack_5._4_4_ = (pVVar4->backVector).y;
    puStack_6 = (undefined *)CONCAT44(puStack_6._4_4_,(pVVar4->backVector).z);
    uStack_7 = 0;
    uStack_8 = 0;
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(_UNK_?,&uStack_5,&uStack_7);
    if (pTVar3 == (Transform *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uStack_10 = (undefined4)uStack_7;
    uStack_11 = uStack_7._4_4_;
    uStack_12 = (undefined4)uStack_8;
    uStack_13 = uStack_8._4_4_;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar14 = (pTVar3->fields)._._.m_CachedPtr;
    if (pvVar14 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (value == DrawPlaneAxis__Enum_Y) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_5._0_4_ = (pVVar4->upVector).x;
    uStack_5._4_4_ = (pVVar4->upVector).y;
    puStack_6 = (undefined *)CONCAT44(puStack_6._4_4_,(pVVar4->upVector).z);
    uStack_7 = 0;
    uStack_8 = 0;
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(0,&uStack_5,&uStack_7);
    if (pTVar3 == (Transform *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uStack_10 = (undefined4)uStack_7;
    uStack_11 = uStack_7._4_4_;
    uStack_12 = (undefined4)uStack_8;
    uStack_13 = uStack_8._4_4_;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar14 = (pTVar3->fields)._._.m_CachedPtr;
    if (pvVar14 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if (value != DrawPlaneAxis__Enum_Z) goto code_?;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_5._0_4_ = (pVVar4->rightVector).x;
    uStack_5._4_4_ = (pVVar4->rightVector).y;
    puStack_6 = (undefined *)CONCAT44(puStack_6._4_4_,(pVVar4->rightVector).z);
    uStack_7 = 0;
    uStack_8 = 0;
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(_UNK_?,&uStack_5,&uStack_7);
    if (pTVar3 == (Transform *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uStack_10 = (undefined4)uStack_7;
    uStack_11 = uStack_7._4_4_;
    uStack_12 = (undefined4)uStack_8;
    uStack_13 = uStack_8._4_4_;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar14 = (pTVar3->fields)._._.m_CachedPtr;
    if (pvVar14 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar14);
code_?:
  bVar15 = WorldEditorDrawPlane::WorldEditorDrawPlane_get_IsOnLandscape(this,(MethodInfo *)0x0);
  if (bVar15 == 0) {
    WorldEditorDrawPlane::WorldEditorDrawPlane_SetToTargetGameObjectZero(this,(MethodInfo *)0x0);
  }
  else {
    WorldEditorDrawPlane::WorldEditorDrawPlane_SetToCameraPos(this,(MethodInfo *)0x0);
  }
  WorldEditorDrawPlane::WorldEditorDrawPlane_UpdateEditorPlanePosition(this,(MethodInfo *)0x0);
  WorldEditorDrawPlane::WorldEditorDrawPlane_UpdateAltitude(this,(MethodInfo *)0x0);
  (this->fields).drawPlaneAxis = value;
  return;
}


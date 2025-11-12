
/* Boolean GetPickingInfo(MVCubeModelBase, CubePickingInfo ByRef) */

bool Assembly-CSharp.dll::EditModeObjectPicker::EditModeObjectPicker_GetPickingInfo
               (MVCubeModelBase *cr,CubePickingInfo **info,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__EventSystem);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = MVInputWrapper::MVInputWrapper_get_IsAllInputSuppressed((MethodInfo *)0x0);
  if (bVar1 != 0) {
    return 0;
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
    FUN_?();
  }
  this = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                   ((MethodInfo *)0x0);
  uVar2 = VStack_3._24_8_;
  if (this != (EventSystem *)0x0) {
    bVar1 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
            EventSystem_IsPointerOverGameObject(this,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return 0;
    }
    obj = EditModeObjectPicker_get_MainCamera((MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    RStack_4.m_Origin.x = 0.0;
    RStack_4.m_Origin.y = 0.0;
    RStack_4._8_8_ = (ulonglong)(uint)RStack_4.m_Direction.x << 0x20;
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar5 = (code *)swi(3);
      bVar1 = (*pcVar5)();
      return bVar1;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(&RStack_4);
    uVar2 = VStack_3._24_8_;
    if (obj != (Camera *)0x0) {
      uStackX_20._0_4_ = RStack_4.m_Origin.x;
      uStackX_20._4_4_ = RStack_4.m_Origin.y;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      auStack_6._0_4_ = 0.0;
      auStack_6._4_4_ = 0.0;
      lStack_7 = 0;
      uStack_8._0_4_ = 0.0;
      uStack_8._4_4_ = 0.0;
      pvVar9 = (obj->fields)._._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        bVar1 = (*pcVar5)();
        return bVar1;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar5 = (code *)swi(3);
        bVar1 = (*pcVar5)();
        return bVar1;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar9,&uStackX_20,2,auStack_6);
      VStack_3.point.x = 0.0;
      VStack_3.point.y = 0.0;
      VStack_3.point.z = 0.0;
      VStack_3.normal.x = 0.0;
      VStack_3.interactionFlags = 0;
      VStack_3.normal.y = 0.0;
      VStack_3.normal.z = 0.0;
      VStack_3.cubePos.x = 0;
      VStack_3.cubePos.y = 0;
      VStack_3.cubePos.z = 0;
      VStack_3._30_2_ = 0;
      VStack_3.face = 0;
      VStack_3.isCubeHit = 0;
      VStack_3._37_3_ = 0;
      VStack_3.woId = 0;
      VStack_3._44_4_ = 0;
      VStack_3.cube = (Cube *)0x0;
      VStack_3.distance = 0.0;
      VStack_3._60_4_ = 0;
      VStack_3.collider = (Collider *)0x0;
      VStack_3.transform = (Transform *)0x0;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVRaycast);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
        FUN_?();
      }
      RStack_4.m_Origin.x = (float)auStack_6._0_4_;
      RStack_4.m_Origin.y = (float)auStack_6._4_4_;
      RStack_4.m_Origin.z = (float)(undefined4)lStack_7;
      RStack_4.m_Direction.x = (float)lStack_7._4_4_;
      RStack_4.m_Direction.y = (float)uStack_8;
      RStack_4.m_Direction.z = uStack_8._4_4_;
      bVar1 = MVRaycast::MVRaycast_MVHit
                        (&RStack_4,(MVWorldObjectClient *)cr,&VStack_3,_UNK_?,
                         (MethodInfo *)0x0);
      pCVar10 = VStack_3.cube;
      if (bVar1 == 0) {
        return 0;
      }
      pCVar11 = *info;
      if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
        FUN_?();
      }
      pCVar10 = Cube::Cube_Clone_1(pCVar10,(MethodInfo *)0x0);
      uVar2 = VStack_3._24_8_;
      if (pCVar11 != (CubePickingInfo *)0x0) {
        (pCVar11->fields).cube = pCVar10;
        func_?(&pCVar11->fields);
        uVar2 = VStack_3._24_8_;
        pCVar11 = *info;
        if (pCVar11 != (CubePickingInfo *)0x0) {
          (pCVar11->fields).iLocalPos.x = VStack_3.cubePos.x;
          (pCVar11->fields).iLocalPos.y = VStack_3.cubePos.y;
          (pCVar11->fields).iLocalPos.z = VStack_3.cubePos.z;
          if (*info != (CubePickingInfo *)0x0) {
            ((*info)->fields).pickedFace = VStack_3.face;
            pCVar11 = *info;
            if (pCVar11 != (CubePickingInfo *)0x0) {
              (pCVar11->fields).point.x = VStack_3.point.x;
              (pCVar11->fields).point.y = VStack_3.point.y;
              (pCVar11->fields).point.z = VStack_3.point.z;
              pCVar11 = *info;
              if (pCVar11 != (CubePickingInfo *)0x0) {
                (pCVar11->fields).normal.x = VStack_3.normal.x;
                (pCVar11->fields).normal.y = VStack_3.normal.y;
                (pCVar11->fields).normal.z = VStack_3.normal.z;
                pCVar11 = *info;
                if ((cr != (MVCubeModelBase *)0x0) && (pCVar11 != (CubePickingInfo *)0x0)) {
                  RStack_4.m_Origin._0_6_ = (pCVar11->fields).iLocalPos;
                  auStack_6._0_4_ = VStack_3.point.x;
                  auStack_6._4_4_ = VStack_3.point.y;
                  lStack_7 = CONCAT44(lStack_7._4_4_,VStack_3.point.z);
                  VStack_3._24_8_ = uVar2;
                  EVar12 = Cube::Cube_GetEdge_1
                                    ((cr->fields)._.gameObject,(pCVar11->fields).cube,
                                     (pCVar11->fields).pickedFace,(Vector3 *)auStack_6,
                                     (IntVector *)&RStack_4,(MethodInfo *)0x0);
                  (pCVar11->fields).pickedEdge = EVar12;
                  pCVar11 = *info;
                  gameObject = (cr->fields)._.gameObject;
                  if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  SharedCubeFunctions::SharedCubeFunctions_GetVertices_2
                            (pCVar11,gameObject,(MethodInfo *)0x0);
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  VStack_3._24_8_ = uVar2;
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar1 = (*pcVar5)();
  return bVar1;
}


/* Boolean IsHitPickup(VoxelHit) */

bool Assembly-CSharp.dll::EditModeObjectPicker::EditModeObjectPicker_IsHitPickup
               (VoxelHit *hit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  GreyOutObjectScript_MethodInfo__UnityEngine__Component__GetComponent<GreyOutObjectScript>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (hit->transform != (Transform *)0x0) {
    this = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                     (hit->transform,(MethodInfo *)0x0);
    if (this != (Transform *)0x0) {
      pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                         ((Component *)this,
                          GreyOutObjectScript_MethodInfo__UnityEngine__Component__GetComponent<GreyOutObjectScript>__
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
      if (pOVar1 != (Object *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        return pOVar1[1].klass != (Object__Class *)0x0;
      }
      return 0;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean Pick(VoxelHit ByRef, HashSet`1[System.Int32], Int32) */

bool Assembly-CSharp.dll::EditModeObjectPicker::EditModeObjectPicker_Pick
               (VoxelHit *hit,HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VoxelHit>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VoxelHit>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VoxelHit>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__EventSystem);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  auStack_3._0_4_ = 0.0;
  auStack_3._4_4_ = 0.0;
  uStack_4 = 0;
  uStack_5 = 0;
  uStack_6 = 0;
  uStack_7 = 0;
  uStack_8 = 0;
  uStack_9 = 0;
  uStack_10 = 0;
  pCStack_11 = (Collider *)0x0;
  pTStack_12 = (Transform *)0x0;
  iStack_13 = 0;
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar14 = MVInputWrapper::MVInputWrapper_get_IsAllInputSuppressed((MethodInfo *)0x0);
  if (bVar14 == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
      FUN_?();
    }
    this = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                     ((MethodInfo *)0x0);
    if (this == (EventSystem *)0x0) goto code_?;
    bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
             EventSystem_IsPointerOverGameObject(this,(MethodInfo *)0x0);
    if ((bVar14 == 0) &&
       (MVar15 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0),
       MVar15 == MVJoinState__Enum_Playing)) {
      this_00 = EditModeObjectPicker_get_MainCamera((MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      VStack_16.x = 0.0;
      VStack_16.y = 0.0;
      VStack_16.z = 0.0;
      pcVar17 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
        uVar18 = func_?(&UNK_?);
        FUN_?(uVar18,0);
        pcVar17 = (code *)swi(3);
        bVar14 = (*pcVar17)();
        return bVar14;
      }
      pcRam_? = pcVar17;
      (*pcRam_?)(&VStack_16);
      VStack_19.x = 0.0;
      VStack_19.y = 0.0;
      VStack_19.z = 0.0;
      pcVar17 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
        uVar18 = func_?(&UNK_?);
        FUN_?(uVar18,0);
code_?:
        FUN_?();
code_?:
        FUN_?();
        FUN_?();
        pcVar17 = (code *)swi(3);
        bVar14 = (*pcVar17)();
        return bVar14;
      }
      pcRam_? = pcVar17;
      (*pcRam_?)(&VStack_19);
      fVar20 = 0.0;
      if (this_00 != (Camera *)0x0) {
        VStack_16.y = VStack_19.y;
        VStack_16.z = 0.0;
        pRVar21 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                            ((Ray *)auStack_22,this_00,&VStack_16,(MethodInfo *)0x0);
        fVar23 = (pRVar21->m_Origin).x;
        fVar24 = (pRVar21->m_Origin).y;
        uVar25._0_4_ = (pRVar21->m_Origin).x;
        uVar25._4_4_ = (pRVar21->m_Origin).y;
        pfVar26 = &(pRVar21->m_Origin).z;
        fVar27 = *pfVar26;
        fStack_28 = (pRVar21->m_Direction).x;
        puVar29 = *(undefined8 **)pfVar26;
        uVar18._0_4_ = (pRVar21->m_Direction).y;
        uVar18._4_4_ = (pRVar21->m_Direction).z;
        bVar30 = false;
        fStack_31 = fVar23;
        fStack_32 = fVar24;
        fStack_33 = fVar27;
        bVar14 = DrawPlane::DrawPlane_get_IsDrawPlaneActive((MethodInfo *)0x0);
        if (bVar14 != 0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar34 = TypeInfo__UnityEngine__Vector3->static_fields;
          VStack_19.x = (pVVar34->zeroVector).x;
          VStack_19.y = (pVVar34->zeroVector).y;
          VStack_19.z = (pVVar34->zeroVector).z;
          bVar14 = DrawPlane::DrawPlane_Pick(&VStack_19,(MethodInfo *)0x0);
          if (bVar14 != 0) {
            VStack_16.z = VStack_19.z - fVar27;
            VStack_16.y = VStack_19.y - fVar24;
            VStack_16.x = VStack_19.x - fVar23;
            fVar20 = (float)FUN_?(&VStack_16);
            bVar30 = true;
          }
        }
        fVar23 = _UNK_?;
        auStack_22._0_8_ = uVar25;
        auStack_22._8_8_ = puVar29;
        auStack_22._16_8_ = uVar18;
        pLVar35 = CollisionDetection::CollisionDetection_MVHitAll
                            ((Ray *)auStack_22,_UNK_?,ignoreWoIds,layerMask,
                             (MethodInfo *)0x0);
        if (pLVar35 != (List_1_VoxelHit_ *)0x0) {
          if ((pLVar35->fields)._size == 0) {
            return 0;
          }
          bVar14 = 0;
          puVar29 = (undefined8 *)FUN_?(auStack_36,pLVar35);
          fVar24 = fStack_33;
          uStack_1 = *puVar29;
          uStack_2 = puVar29[1];
          auStack_3 = (undefined1  [8])puVar29[2];
          uStack_4 = puVar29[3];
          uStack_5 = puVar29[4];
          uStack_6 = puVar29[5];
          uStack_7 = puVar29[6];
          uStack_8 = puVar29[7];
          uStack_9 = puVar29[8];
          uStack_10 = puVar29[9];
          pCStack_11 = (Collider *)puVar29[10];
          pTStack_12 = (Transform *)puVar29[0xb];
          iStack_13 = puVar29[0xc];
          auStack_22._0_4_ = 0.0;
          auStack_22._4_4_ = 0.0;
          auStack_22._8_8_ = &uStack_1;
          uVar37._4_4_ = fStack_32;
          uVar37._0_4_ = fStack_31;
          while( true ) {
            do {
              cVar38 = FUN_?(&uStack_1);
              iVar39 = iStack_13;
              pTVar40 = pTStack_12;
              pCVar41 = pCStack_11;
              uVar42 = uStack_8;
              uVar43 = uStack_7;
              uVar44 = uStack_6;
              uVar25 = uStack_5;
              uVar18 = uStack_4;
              auVar45 = auStack_3;
              if (cVar38 == '\0') {
                return bVar14;
              }
              uVar46 = (undefined4)uStack_9;
              uVar47 = uStack_9._4_4_;
              fVar27 = (float)uStack_10;
              uVar48 = uStack_10._4_4_;
            } while ((fVar20 <= (float)uStack_10) && (bVar30));
            if (pTStack_12 == (Transform *)0x0) break;
            this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pTStack_12,(MethodInfo *)0x0);
            if (this_01 == (GameObject *)0x0) goto code_?;
            bVar49 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                     GameObject_get_activeInHierarchy(this_01,(MethodInfo *)0x0);
            auVar50 = auStack_3;
            if (bVar49 != 0) {
              auStack_3._0_4_ = auVar45._0_4_;
              auStack_3._4_4_ = auVar45._4_4_;
              VStack_16.x = (float)auStack_3._0_4_;
              VStack_16.y = (float)auStack_3._4_4_;
              VStack_16.z = (float)uVar18;
              VStack_19.z = fVar24;
              VStack_19._0_8_ = uVar37;
              auStack_3 = auVar50;
              fVar51 = (float)FUN_?(&VStack_19,&VStack_16);
              uVar52 = uStack_7;
              uVar53 = uStack_5;
              auVar50 = auStack_3;
              if (fVar51 < fVar23) {
                auStack_3._0_4_ = auVar45._0_4_;
                auStack_3._4_4_ = auVar45._4_4_;
                (hit->point).x = (float)auStack_3._0_4_;
                (hit->point).y = (float)auStack_3._4_4_;
                *(undefined8 *)&(hit->point).z = uVar18;
                uStack_5._0_4_ = (undefined4)uVar25;
                uStack_5._4_4_ = SUB84(uVar25,4);
                (hit->normal).y = (float)(undefined4)uStack_5;
                (hit->normal).z = (float)uStack_5._4_4_;
                *(undefined8 *)&hit->cubePos = uVar44;
                uStack_7._0_4_ = (undefined4)uVar43;
                uStack_7._4_1_ = SUB81(uVar43,4);
                uStack_7._5_3_ = SUB83(uVar43,5);
                hit->face = (undefined4)uStack_7;
                hit->isCubeHit = uStack_7._4_1_;
                *(undefined3 *)&hit->field_0x25 = uStack_7._5_3_;
                *(undefined8 *)&hit->woId = uVar42;
                *(undefined4 *)&hit->cube = uVar46;
                *(undefined4 *)((longlong)&hit->cube + 4) = uVar47;
                hit->distance = fVar27;
                *(undefined4 *)&hit->field_0x3c = uVar48;
                hit->collider = pCVar41;
                hit->transform = pTVar40;
                hit->interactionFlags = iVar39;
                auStack_3 = auVar50;
                uStack_5 = uVar53;
                uStack_7 = uVar52;
                func_?(&hit->cube);
                bVar14 = 1;
                fVar23 = fVar51;
              }
            }
          }
          goto code_?;
        }
      }
code_?:
      FUN_?();
      pcVar17 = (code *)swi(3);
      bVar14 = (*pcVar17)();
      return bVar14;
    }
  }
  return 0;
}


/* Camera get_MainCamera() */

Camera * Assembly-CSharp.dll::EditModeObjectPicker::EditModeObjectPicker_get_MainCamera
                   (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditModeObjectPicker);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = TypeInfo__EditModeObjectPicker->static_fields->mainCamera;
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
  if (pCVar1 != (Camera *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pCVar1->fields)._._._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  TypeInfo__EditModeObjectPicker->static_fields->mainCamera = pCVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__EditModeObjectPicker->static_fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
code_?:
  return TypeInfo__EditModeObjectPicker->static_fields->mainCamera;
}



/* Void Destroy() */

void Assembly-CSharp.dll::CellCursorCubeMesh::CellCursorCubeMesh_Destroy
               (CellCursorCubeMesh *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).gameObject;
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
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                  ,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  pvVar2 = (void *)0x0;
  if (pGVar1 != (GameObject *)0x0) {
    pvVar2 = (pGVar1->fields)._.m_CachedPtr;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,0);
  return;
}


/* Void SetCursorCube(IntVector, GameObject) */

void Assembly-CSharp.dll::CellCursorCubeMesh::CellCursorCubeMesh_SetCursorCube
               (CellCursorCubeMesh *this,IntVector *position,GameObject *cubeGameObject,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = position->y;
  (this->fields).pos.x = position->x;
  (this->fields).pos.y = iVar1;
  (this->fields).pos.z = position->z;
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
  pGVar5 = (this->fields).gameObject;
  (this->fields).prevCursorSetTime = fVar4;
  if (pGVar5 != (GameObject *)0x0) {
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar5,(MethodInfo *)0x0);
    uVar7 = (this->fields).pos.x;
    uVar8 = (this->fields).pos.y;
    sVar9 = (this->fields).pos.z;
    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cubeGameObject != (GameObject *)0x0) {
      pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (cubeGameObject,(MethodInfo *)0x0);
      fStack_11 = (float)(int)sVar9;
      if (pTVar10 != (Transform *)0x0) {
        uStack_12 = CONCAT44((float)(int)(short)uVar8,(float)(int)(short)uVar7);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_13 = 0;
        uStack_14 = (ulonglong)uStack_14._4_4_ << 0x20;
        pvVar15 = (pTVar10->fields)._._.m_CachedPtr;
        if (pvVar15 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar10,(MethodInfo *)0x0);
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
        (*pcRam_?)(pvVar15);
        if (pTVar6 != (Transform *)0x0) {
          uStack_16 = uStack_13;
          uStack_17 = CONCAT44(uStack_17._4_4_,(float)uStack_14);
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar15 = (pTVar6->fields)._._.m_CachedPtr;
          if (pvVar15 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
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
          (*pcRam_?)(pvVar15);
          pGVar5 = (this->fields).gameObject;
          if (pGVar5 != (GameObject *)0x0) {
            pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar5,(MethodInfo *)0x0);
            pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (cubeGameObject,(MethodInfo *)0x0);
            if (pTVar10 != (Transform *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uStack_13 = 0;
              uStack_14 = uStack_14 & 0xffffffff00000000;
              pvVar15 = (pTVar10->fields)._._.m_CachedPtr;
              if (pvVar15 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar10,(MethodInfo *)0x0);
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
              (*pcRam_?)(pvVar15);
              if (pTVar6 != (Transform *)0x0) {
                uStack_12 = CONCAT44(uStack_13._4_4_ * _UNK_?,
                                     (float)uStack_13 * _UNK_?);
                fStack_11 = (float)uStack_14 * _UNK_?;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar15 = (pTVar6->fields)._._.m_CachedPtr;
                if (pvVar15 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
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
                (*pcRam_?)(pvVar15);
                pGVar5 = (this->fields).gameObject;
                if (pGVar5 != (GameObject *)0x0) {
                  pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_get_transform(pGVar5,(MethodInfo *)0x0);
                  pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_get_transform(cubeGameObject,(MethodInfo *)0x0);
                  if (pTVar10 != (Transform *)0x0) {
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    uStack_16 = 0;
                    uStack_17 = 0;
                    pvVar15 = (pTVar10->fields)._._.m_CachedPtr;
                    if (pvVar15 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar10,(MethodInfo *)0x0);
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
                    (*pcRam_?)(pvVar15);
                    if (pTVar6 != (Transform *)0x0) {
                      uStack_13 = uStack_16;
                      uStack_14 = uStack_17;
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pvVar15 = (pTVar6->fields)._._.m_CachedPtr;
                      if (pvVar15 == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)pTVar6,(MethodInfo *)0x0);
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
                      (*pcRam_?)(pvVar15,&uStack_13);
                      pGVar5 = (this->fields).gameObject;
                      if (pGVar5 != (GameObject *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (pGVar5,1,(MethodInfo *)0x0);
                        return;
                      }
                    }
                    FUN_?();
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                }
              }
              FUN_?();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
        }
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::CellCursorCubeMesh::CellCursorCubeMesh_Update
               (CellCursorCubeMesh *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Color);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).fadeOutTime;
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
  this_00 = (this->fields).gameObject;
  fVar1 = fVar1 - (fVar4 - (this->fields).prevCursorSetTime);
  if (this_00 != (GameObject *)0x0) {
    if (fVar1 <= 0.0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,0,(MethodInfo *)0x0);
      return;
    }
    this_01 = (Renderer *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                        (this_00,
                         UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                        );
    if (this_01 != (Renderer *)0x0) {
      pMVar5 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials
                         (this_01,(MethodInfo *)0x0);
      uVar6 = 0;
      if (pMVar5 != (Material__Array *)0x0) {
        ppMVar7 = pMVar5->vector;
        while( true ) {
          if ((int)pMVar5->max_length <= (int)uVar6) {
            return;
          }
          if ((uint)pMVar5->max_length <= uVar6) {
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          obj = *ppMVar7;
          if (obj == (Material *)0x0) break;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Object>_UnityEngine__Object_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar8 = (obj->fields)._.m_CachedPtr;
          if (pvVar8 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
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
          (*pcRam_?)(pvVar8);
          iVar9 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                            (StringLiteral__Color,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Material>_UnityEngine__Material_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__Material);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_10 = 0;
          uStack_11 = 0;
          pvVar8 = (obj->fields)._.m_CachedPtr;
          if (pvVar8 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
            FUN_?();
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
          (*pcRam_?)(pvVar8,iVar9,&uStack_10);
          fVar4 = fVar1 / (this->fields).fadeOutTime;
          uStack_12 = (undefined4)uStack_10;
          uStack_13 = (undefined4)((ulonglong)uStack_10 >> 0x20);
          uStack_14 = (undefined4)uStack_11;
          iVar9 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                            (StringLiteral__Color,(MethodInfo *)0x0);
          uStack_15 = uStack_12;
          uStack_16 = uStack_13;
          uStack_17 = uStack_14;
          fStack_18 = fVar4;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Material>_UnityEngine__Material_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__Material);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar8 = (obj->fields)._.m_CachedPtr;
          if (pvVar8 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
            FUN_?();
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
          (*pcRam_?)(pvVar8,iVar9,&uStack_15);
          uVar6 = uVar6 + 1;
          ppMVar7 = ppMVar7 + 1;
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* CellCursorCubeMesh() */

void Assembly-CSharp.dll::CellCursorCubeMesh::CellCursorCubeMesh__ctor
               (CellCursorCubeMesh *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    PStack_1._args = (Object__Array *)&UNK_?;
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    PStack_1._args = (Object__Array *)&UNK_?;
    FUN_?(&
                  UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                 );
    LOCK();
    UNLOCK();
    PStack_1._args = (Object__Array *)&UNK_?;
    FUN_?(&
                  UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                 );
    LOCK();
    UNLOCK();
    PStack_1._args = (Object__Array *)&UNK_?;
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    PStack_1._args = (Object__Array *)&UNK_?;
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    PStack_1._args = (Object__Array *)&UNK_?;
    FUN_?(&StringLiteral_UIItems);
    LOCK();
    UNLOCK();
    PStack_1._args = (Object__Array *)&UNK_?;
    FUN_?(&StringLiteral_CellCursor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).fadeOutTime = 0.5;
  PStack_1._args = (Object__Array *)&UNK_?;
  pGVar2 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
  pSVar3 = StringLiteral_CellCursor;
  if (cRam_? == '\0') {
    PStack_1._args = (Object__Array *)&UNK_?;
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    PStack_1._args = (Object__Array *)&UNK_?;
    FUN_?();
  }
  PStack_1._args = (Object__Array *)&UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
            (pGVar2,pSVar3,(MethodInfo *)0x0);
  bVar4 = iRam_? != 0;
  (this->fields).gameObject = pGVar2;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields).gameObject >> 0xc);
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
  pGVar2 = (this->fields).gameObject;
  PStack_1._args = (Object__Array *)&UNK_?;
  iVar9 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_UIItems,(MethodInfo *)0x0);
  if (pGVar2 != (GameObject *)0x0) {
    PStack_1._args = (Object__Array *)&UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (pGVar2,iVar9,(MethodInfo *)0x0);
    pGVar2 = (this->fields).gameObject;
    if (pGVar2 != (GameObject *)0x0) {
      PStack_1._args = (Object__Array *)&UNK_?;
      this_03 = (Renderer *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                          (pGVar2,
                           UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                          );
      pGVar2 = (this->fields).gameObject;
      if (pGVar2 != (GameObject *)0x0) {
        PStack_1._args = (Object__Array *)&UNK_?;
        this_04 = (MeshFilter *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (pGVar2,
                             UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                            );
        if (cRam_? == '\0') {
          PStack_1._args = (Object__Array *)&UNK_?;
          FUN_?(&TypeInfo__PrefabPool);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar10 = TypeInfo__PrefabPool->static_fields->instance;
        if ((pPVar10 != (PrefabPool *)0x0) && (this_03 != (Renderer *)0x0)) {
          PStack_1._args = (Object__Array *)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
                    (this_03,(pPVar10->fields).modelCubeSpaceMaterial,(MethodInfo *)0x0);
          if (this_04 != (MeshFilter *)0x0) {
            PStack_1._args = (Object__Array *)&UNK_?;
            this_05 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                                (this_04,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
              PStack_1._args = (Object__Array *)&UNK_?;
              FUN_?();
            }
            PStack_1._args = (Object__Array *)&UNK_?;
            pVVar11 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners
                                ((MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
              PStack_1._args = (Object__Array *)&UNK_?;
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                            ,pVVar11,1,0);
              LOCK();
              UNLOCK();
              FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&MethodInfo__System__Collections__Generic__List<int>__ToArray__);
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__ToArray__
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector2>_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<int>__List_System__Collections__Generic__IEnumerable<int>_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                           );
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__SharedCubeFunctions);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (this_05 != (Mesh *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Mesh>_UnityEngine__Mesh_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar12 = (this_05->fields)._.m_CachedPtr;
              if (pvVar12 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)this_05,(MethodInfo *)0x0);
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
              iVar15 = (*pcRam_?)(pvVar12);
              if (iVar15 == 0) {
                this_00 = (List_1_System_Int32_ *)
                          FUN_?(TypeInfo__System__Collections__Generic__List<int>);
                FUN_?(this_00);
              }
              else {
                pIVar16 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_triangles
                                    (this_05,(MethodInfo *)0x0);
                this_00 = (List_1_System_Int32_ *)
                          FUN_?(TypeInfo__System__Collections__Generic__List<int>);
                mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                List_1_System_Int32___ctor_1
                          (this_00,(IEnumerable_1_System_Int32_ *)pIVar16,
                           MethodInfo__System__Collections__Generic__List<int>__List_System__Collections__Generic__IEnumerable<int>_
                          );
              }
              collection = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_uv
                                     (this_05,(MethodInfo *)0x0);
              this_01 = (List_1_UnityEngine_Vector2_ *)
                        FUN_?(
                                     TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>
                                     );
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2___ctor_1
                        (this_01,(IEnumerable_1_UnityEngine_Vector2_ *)collection,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector2>_
                        );
              collection_00 =
                   UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                             (this_05,(MethodInfo *)0x0);
              this_02 = (List_1_UnityEngine_Vector3_ *)
                        FUN_?(
                                     TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>
                                     );
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
              List_1_UnityEngine_Vector3___ctor_1
                        (this_02,(IEnumerable_1_UnityEngine_Vector3_ *)collection_00,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                        );
              if (this_02 != (List_1_UnityEngine_Vector3_ *)0x0) {
                iVar15 = (this_02->fields)._size;
                if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pVVar11 = SharedCubeFunctions::SharedCubeFunctions_GetVertices_1
                                    (pVVar11,(MethodInfo *)0x0);
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
                List_1_UnityEngine_Vector3__InsertRange
                          (this_02,(this_02->fields)._size,
                           (IEnumerable_1_UnityEngine_Vector3_ *)pVVar11,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                           ->klass->rgctx_data[0x12].method);
                uVar17 = _UNK_?;
                iVar18 = 0;
                iVar9 = 0;
                iVar15 = iVar15 + 2;
                while (this_00 != (List_1_System_Int32_ *)0x0) {
                  FUN_?(this_00,iVar15,
                                MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                  FUN_?(this_00,iVar15 + 1,
                                MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                  FUN_?(this_00,iVar15 + -2,
                                MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                  FUN_?(this_00,iVar15 + -2,
                                MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                  FUN_?(this_00,iVar15 + -1,
                                MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                  FUN_?(this_00,iVar15,
                                MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                  if (this_01 == (List_1_UnityEngine_Vector2_ *)0x0) break;
                  FUN_?(this_01,0,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                               );
                  FUN_?(this_01,uVar17,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                               );
                  FUN_?(this_01,CONCAT44(uVar17,uVar17),
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                               );
                  FUN_?(this_01);
                  iVar18 = iVar18 + 1;
                  iVar15 = iVar15 + 4;
                  if (5 < iVar18) {
                    pAVar19 = (Array *)FUN_?(this_02);
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    valuesArrayLength = iVar9;
                    if (pAVar19 != (Array *)0x0) {
                      valuesArrayLength =
                           mscorlib.dll::System::Array::Array_get_Length(pAVar19,(MethodInfo *)0x0);
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                              (this_05,VertexAttribute__Enum_Position,
                               VertexAttributeFormat__Enum_Float32,3,pAVar19,valuesArrayLength,0,
                               valuesArrayLength,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                    pAVar19 = (Array *)FUN_?(this_01);
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector2>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector2_____UnityEngine__Rendering__MeshUpdateFlags_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    if (pAVar19 != (Array *)0x0) {
                      iVar9 = mscorlib.dll::System::Array::Array_get_Length
                                        (pAVar19,(MethodInfo *)0x0);
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                              (this_05,VertexAttribute__Enum_TexCoord0,
                               VertexAttributeFormat__Enum_Float32,2,pAVar19,iVar9,0,iVar9,
                               MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                    pIVar16 = (Int32__Array *)
                              FUN_?(this_00,
                                            MethodInfo__System__Collections__Generic__List<int>__ToArray__
                                           );
                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
                              (this_05,pIVar16,(MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateNormals_1
                              (this_05,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__UnityEngine__Debug);
                      LOCK();
                      UNLOCK();
                      FUN_?(&StringLiteral_Not_allowed_to_call_RecalculateB);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Mesh>_UnityEngine__Mesh_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    if (this_05 == (Mesh *)0x0) {
                      FUN_?();
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                    pvVar12 = (this_05->fields)._.m_CachedPtr;
                    if (pvVar12 != (void *)0x0) {
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
                      cVar20 = (*pcRam_?)(pvVar12);
                      if (cVar20 == '\0') {
                        arg0 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                                         ((Object_1 *)this_05,(MethodInfo *)0x0);
                        pSVar3 = StringLiteral_Not_allowed_to_call_RecalculateB;
                        PStack_1._arg0 = (Object *)0x0;
                        PStack_1._arg1 = (Object *)0x0;
                        PStack_1._arg2 = (Object *)0x0;
                        PStack_1._args = (Object__Array *)0x0;
                        mscorlib.dll::System::ParamsArray::ParamsArray__ctor
                                  (&PStack_1,(Object *)arg0,(MethodInfo *)0x0);
                        pSVar3 = mscorlib.dll::System::String::String_FormatHelper
                                            ((IFormatProvider *)0x0,pSVar3,
                                             (ParamsArray *)&stack0xffffffffffffffd8,
                                             (MethodInfo *)0x0);
                        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                                  ((Object *)pSVar3,(MethodInfo *)0x0);
                        return;
                      }
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Mesh>_UnityEngine__Mesh_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pvVar12 = (this_05->fields)._.m_CachedPtr;
                      if (pvVar12 != (void *)0x0) {
                        pcVar13 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0))
                        {
                          uVar14 = func_?(&UNK_?);
                          FUN_?(uVar14,0);
                          pcVar13 = (code *)swi(3);
                          (*pcVar13)();
                          return;
                        }
                        pcRam_? = pcVar13;
                        (*pcRam_?)(pvVar12,0);
                        return;
                      }
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)this_05,(MethodInfo *)0x0);
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
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
        }
      }
    }
  }
  PStack_1._args = (Object__Array *)&UNK_?;
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


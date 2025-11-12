
/* Void ChangeMaterial(Material) */

void Assembly-CSharp.dll::CellCursorCubeLineMesh::CellCursorCubeLineMesh_ChangeMaterial
               (CellCursorCubeLineMesh *this,Material *material,MethodInfo *method)

{
  obj = (this->fields).meshRenderer;
  if (obj == (MeshRenderer *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                  ,material,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Material>_UnityEngine__Material_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (MeshRenderer *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Material>_UnityEngine__Material_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  if (material == (Material *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = (material->fields)._.m_CachedPtr;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,pvVar3);
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::CellCursorCubeLineMesh::CellCursorCubeLineMesh_Destroy
               (CellCursorCubeLineMesh *this,MethodInfo *method)

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

void Assembly-CSharp.dll::CellCursorCubeLineMesh::CellCursorCubeLineMesh_SetCursorCube
               (CellCursorCubeLineMesh *this,IntVector *position,GameObject *cubeGameObject,
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
                uStack_12 = uStack_13;
                fStack_11 = (float)uStack_14;
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

void Assembly-CSharp.dll::CellCursorCubeLineMesh::CellCursorCubeLineMesh_Update
               (CellCursorCubeLineMesh *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CellCursorCubeLineMesh);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                 );
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
          if (*(int *)&(TypeInfo__CellCursorCubeLineMesh->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__CellCursorCubeLineMesh);
          }
          iVar9 = TypeInfo__CellCursorCubeLineMesh->static_fields->ColorID;
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
          iVar9 = TypeInfo__CellCursorCubeLineMesh->static_fields->ColorID;
          uStack_12 = uStack_10;
          uStack_13 = CONCAT44((fVar1 / (this->fields).fadeOutTime) * (this->fields).baseAlpha,
                               (int)uStack_11);
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
          (*pcRam_?)(pvVar8,iVar9,&uStack_12);
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


/* CellCursorCubeLineMesh() */

void Assembly-CSharp.dll::CellCursorCubeLineMesh::CellCursorCubeLineMesh__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CellCursorCubeLineMesh);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Color);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                    (StringLiteral__Color,(MethodInfo *)0x0);
  TypeInfo__CellCursorCubeLineMesh->static_fields->ColorID = iVar1;
  return;
}


/* CellCursorCubeLineMesh(Single, Material, Single, Vector3[]) */

void Assembly-CSharp.dll::CellCursorCubeLineMesh::CellCursorCubeLineMesh__ctor
               (CellCursorCubeLineMesh *this,float diagonalWidth,Material *material,
               float fadeOutTime,Vector3__Array *cubeCorners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&TypeInfo__CellCursorCubeLineMesh);
    LOCK();
    UNLOCK();
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&
                  UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                 );
    LOCK();
    UNLOCK();
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&
                  UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                 );
    LOCK();
    UNLOCK();
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&StringLiteral_UIItems);
    LOCK();
    UNLOCK();
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&StringLiteral_CellCursorCubeLineMesh);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).fadeOutTime = fadeOutTime;
  auStack_1._8_8_ = &UNK_?;
  pGVar2 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
  name = StringLiteral_CellCursorCubeLineMesh;
  if (cRam_? == '\0') {
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    auStack_1._8_8_ = &UNK_?;
    FUN_?();
  }
  auStack_1._8_8_ = &UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
            (pGVar2,name,(MethodInfo *)0x0);
  auStack_1._8_8_ = &UNK_?;
  value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_UIItems,(MethodInfo *)0x0);
  if (pGVar2 != (GameObject *)0x0) {
    auStack_1._8_8_ = &UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (pGVar2,value,(MethodInfo *)0x0);
    bVar3 = iRam_? != 0;
    (this->fields).gameObject = pGVar2;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).gameObject >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    pGVar2 = (this->fields).gameObject;
    if (pGVar2 != (GameObject *)0x0) {
      auStack_1._8_8_ = &UNK_?;
      pMVar8 = (MeshRenderer *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                          (pGVar2,
                           UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                          );
      bVar3 = iRam_? != 0;
      (this->fields).meshRenderer = pMVar8;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields).meshRenderer >> 0xc);
        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      pMVar8 = (this->fields).meshRenderer;
      if (pMVar8 != (MeshRenderer *)0x0) {
        if (cRam_? == '\0') {
          auStack_1._8_8_ = &UNK_?;
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar9 = (pMVar8->fields)._._._.m_CachedPtr;
        if (pvVar9 == (void *)0x0) {
          auStack_1._8_8_ = &UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar8,(MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcVar10 = pcRam_?;
        if (pcRam_? == (code *)0x0) {
          auStack_1._8_8_ = &UNK_?;
          pcVar10 = (code *)FUN_?(&UNK_?);
          if (pcVar10 == (code *)0x0) {
            auStack_1._8_8_ = &UNK_?;
            uVar11 = func_?(&UNK_?);
            auStack_1._8_8_ = &UNK_?;
            FUN_?(uVar11,0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        pcRam_? = pcVar10;
        auStack_1._8_8_ = &UNK_?;
        (*pcRam_?)(pvVar9);
        pMVar8 = (this->fields).meshRenderer;
        if (pMVar8 != (MeshRenderer *)0x0) {
          auStack_1._8_8_ = &UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_receiveShadows
                    ((Renderer *)pMVar8,0,(MethodInfo *)0x0);
          pGVar2 = (this->fields).gameObject;
          if (pGVar2 != (GameObject *)0x0) {
            auStack_1._8_8_ = &UNK_?;
            this_00 = (MeshFilter *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                                (pGVar2,
                                 UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                                );
            pMVar8 = (this->fields).meshRenderer;
            if (pMVar8 != (MeshRenderer *)0x0) {
              auStack_1._8_8_ = &UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
                        ((Renderer *)pMVar8,material,(MethodInfo *)0x0);
              pMVar8 = (this->fields).meshRenderer;
              if (pMVar8 != (MeshRenderer *)0x0) {
                auStack_1._8_8_ = &UNK_?;
                this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                    ((Renderer *)pMVar8,(MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__CellCursorCubeLineMesh->_1).field_0x1c == 0) {
                  auStack_1._8_8_ = &UNK_?;
                  FUN_?(TypeInfo__CellCursorCubeLineMesh);
                }
                if (this_01 != (Material *)0x0) {
                  auStack_1._8_8_ = &UNK_?;
                  pCVar12 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor_1
                                      (&CStack_13,this_01,
                                       TypeInfo__CellCursorCubeLineMesh->static_fields->ColorID,
                                       (MethodInfo *)0x0);
                  (this->fields).baseAlpha = pCVar12->a;
                  if (this_00 != (MeshFilter *)0x0) {
                    auStack_1._8_8_ = &UNK_?;
                    mesh = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                                     (this_00,(MethodInfo *)0x0);
                    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
                      auStack_1._8_8_ = &UNK_?;
                      FUN_?();
                    }
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__SharedCubeFunctions,cubeCorners,diagonalWidth,0);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    uVar14 = 0;
                    pVVar15 = cubeCorners->vector;
                    uVar5 = uVar14;
                    uVar6 = uVar14;
                    if (cubeCorners == (Vector3__Array *)0x0) {
                      FUN_?();
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                    do {
                      uVar4 = (uint)uVar5;
                      if ((uint)cubeCorners->max_length <= uVar4) goto DAT_?;
                      uVar11._0_4_ = pVVar15->x;
                      uVar11._4_4_ = pVVar15->y;
                      fVar16 = pVVar15->z;
                      uVar17 = uVar4 + 1 & 0x80000003;
                      if ((int)uVar17 < 0) {
                        uVar17 = (uVar17 - 1 | 0xfffffffc) + 1;
                      }
                      if ((uint)cubeCorners->max_length <= uVar17) goto DAT_?;
                      uVar18._0_4_ = cubeCorners->vector[(int)uVar17].x;
                      uVar18._4_4_ = cubeCorners->vector[(int)uVar17].y;
                      fVar19 = cubeCorners->vector[(int)uVar17].z;
                      if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      auStack_1._8_4_ = fVar16;
                      VStack_20._0_8_ = uVar18;
                      VStack_20.z = fVar19;
                      auStack_1._0_8_ = uVar11;
                      SharedCubeFunctions::SharedCubeFunctions_AddCubeLine
                                (mesh,(Vector3 *)auStack_1,&VStack_20,diagonalWidth,
                                 (MethodInfo *)0x0);
                      uVar6 = uVar6 + 1;
                      pVVar15 = pVVar15 + 1;
                      uVar5 = (ulonglong)(uVar4 + 1);
                    } while ((longlong)uVar6 < 4);
                    uVar4 = 4;
                    pVVar15 = cubeCorners->vector + 4;
                    lVar21 = 4;
                    do {
                      if ((uint)cubeCorners->max_length <= uVar4) goto DAT_?;
                      uVar22._0_4_ = pVVar15->x;
                      uVar22._4_4_ = pVVar15->y;
                      fVar16 = pVVar15->z;
                      uVar17 = uVar4 + 1 & 0x80000003;
                      if ((int)uVar17 < 0) {
                        uVar17 = (uVar17 - 1 | 0xfffffffc) + 1;
                      }
                      if ((uint)cubeCorners->max_length <= uVar17 + 4) goto DAT_?;
                      uVar23._0_4_ = cubeCorners->vector[(longlong)(int)uVar17 + 4].x;
                      uVar23._4_4_ = cubeCorners->vector[(longlong)(int)uVar17 + 4].y;
                      fVar19 = cubeCorners->vector[(longlong)(int)uVar17 + 4].z;
                      if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      auStack_1._8_4_ = fVar19;
                      VStack_20._0_8_ = uVar22;
                      VStack_20.z = fVar16;
                      auStack_1._0_8_ = uVar23;
                      SharedCubeFunctions::SharedCubeFunctions_AddCubeLine
                                (mesh,&VStack_20,(Vector3 *)auStack_1,diagonalWidth,
                                 (MethodInfo *)0x0);
                      uVar4 = uVar4 + 1;
                      lVar21 = lVar21 + 1;
                      pVVar15 = pVVar15 + 1;
                    } while (lVar21 < 8);
                    pVVar15 = cubeCorners->vector;
                    pVVar24 = cubeCorners->vector + 7;
                    uVar5 = uVar14;
                    while (uVar4 = (uint)uVar14, uVar4 < (uint)cubeCorners->max_length) {
                      uVar25._0_4_ = pVVar15->x;
                      uVar25._4_4_ = pVVar15->y;
                      fVar16 = pVVar15->z;
                      if ((uint)cubeCorners->max_length <= 7 - uVar4) break;
                      uVar26._0_4_ = pVVar24->x;
                      uVar26._4_4_ = pVVar24->y;
                      fVar19 = pVVar24->z;
                      if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      auStack_1._8_4_ = fVar19;
                      VStack_20._0_8_ = uVar25;
                      VStack_20.z = fVar16;
                      auStack_1._0_8_ = uVar26;
                      SharedCubeFunctions::SharedCubeFunctions_AddCubeLine
                                (mesh,&VStack_20,(Vector3 *)auStack_1,diagonalWidth,
                                 (MethodInfo *)0x0);
                      uVar14 = (ulonglong)(uVar4 + 1);
                      uVar5 = uVar5 + 1;
                      pVVar15 = pVVar15 + 1;
                      pVVar24 = pVVar24 + -1;
                      if (3 < (longlong)uVar5) {
                        return;
                      }
                    }
DAT_?:
                    FUN_?();
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  auStack_1._8_8_ = &UNK_?;
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}



/* Void Awake() */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_Awake
               (WorldEditorDrawPlane *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).mainCamera = pCVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).mainCamera >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  WorldEditorDrawPlane_GenerateDrawPlane
            (this,(this->fields).DrawPlaneVisualization,(MethodInfo *)0x0);
  pGVar7 = (this->fields).DrawPlaneVisualization;
  if (((pGVar7 != (GameObject *)0x0) &&
      (pRVar8 = (Renderer *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                           (pGVar7,
                            UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                           ), pRVar8 != (Renderer *)0x0)) &&
     (pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                          (pRVar8,(MethodInfo *)0x0), pMVar9 != (Material *)0x0)) {
    value.y = _UNK_?;
    value.x = _UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTextureScale
              (pMVar9,value,(MethodInfo *)0x0);
    pGVar7 = (this->fields).DrawPlaneVisualization;
    if (((pGVar7 != (GameObject *)0x0) &&
        (pRVar8 = (Renderer *)
                   UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                             (pGVar7,
                              UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                             ), pRVar8 != (Renderer *)0x0)) &&
       (pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                            (pRVar8,(MethodInfo *)0x0), pMVar9 != (Material *)0x0)) {
      value_00.y = _UNK_?;
      value_00.x = _UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTextureOffset
                (pMVar9,value_00,(MethodInfo *)0x0);
      pGVar7 = (this->fields).DrawPlaneCursor;
      if (cRam_? == '\0') {
        FUN_?(&
                      UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                      ,pGVar7,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((pGVar7 == (GameObject *)0x0) ||
         (this_00 = (MeshFilter *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              (pGVar7,
                               UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                              ), this_00 == (MeshFilter *)0x0)) {
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                          (this_00,(MethodInfo *)0x0);
      pGVar11 = (this->fields).DrawPlaneVisualization;
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
      if (pGVar11 == (GameObject *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar2 = (pGVar7->fields)._.m_CachedPtr == (void *)0x0;
      }
      else {
        bVar2 = pGVar7 == pGVar11;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Int32,this_01,bVar2,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Vector2);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_DrawPlaneMesh);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      fVar12 = _UNK_?;
      if (bVar2 != false) {
        fVar12 = _UNK_?;
      }
      this_02 = (Array *)FUN_?(TypeInfo__UnityEngine__Vector3,4);
      value_01 = (Int32__Array *)FUN_?(TypeInfo__System__Int32,6);
      if (this_02 == (Array *)0x0) goto code_?;
      this_03 = (Array *)FUN_?(TypeInfo__UnityEngine__Vector2,
                                       *(undefined4 *)&this_02[1].monitor);
      fVar13 = _UNK_?;
      fVar14 = _UNK_?;
      fVar15 = fVar12 * _UNK_?;
      if (*(int *)&this_02[1].monitor != 0) {
        this_02[2].klass = (Array__Class *)CONCAT44(fVar12 * 0.0,fVar12 * _UNK_?);
        *(float *)&this_02[2].monitor = fVar15;
        if (1 < *(uint *)&this_02[1].monitor) {
          *(ulonglong *)((longlong)&this_02[2].monitor + 4) = CONCAT44(fVar12 * 0.0,fVar12 * fVar14);
          *(float *)((longlong)&this_02[3].klass + 4) = fVar12 * fVar14;
          if (2 < *(uint *)&this_02[1].monitor) {
            this_02[3].monitor = (MonitorData *)CONCAT44(fVar12 * 0.0,fVar12 * fVar13);
            *(float *)&this_02[4].klass = fVar12 * fVar14;
            if (3 < *(uint *)&this_02[1].monitor) {
              *(ulonglong *)((longlong)&this_02[4].klass + 4) =
                   CONCAT44(fVar12 * 0.0,fVar12 * fVar13);
              *(float *)((longlong)&this_02[4].monitor + 4) = fVar12 * fVar13;
              if (value_01 == (Int32__Array *)0x0) {
code_?:
                FUN_?();
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              if ((((((int)value_01->max_length != 0) &&
                    (value_01->vector[0] = 0, 1 < (uint)value_01->max_length)) &&
                   (value_01->vector[1] = 1, 2 < (uint)value_01->max_length)) &&
                  ((value_01->vector[2] = 2, 3 < (uint)value_01->max_length &&
                   (value_01->vector[3] = 2, 4 < (uint)value_01->max_length)))) &&
                 (value_01->vector[4] = 3, 5 < (uint)value_01->max_length)) {
                value_01->vector[5] = 0;
                if (this_03 == (Array *)0x0) goto code_?;
                if ((*(int *)&this_03[1].monitor != 0) &&
                   (this_03[2].klass = (Array__Class *)0x0, 1 < *(uint *)&this_03[1].monitor)) {
                  *(undefined4 *)&this_03[2].monitor = 0;
                  *(undefined4 *)((longlong)&this_03[2].monitor + 4) = 0x3f800000;
                  if (2 < *(uint *)&this_03[1].monitor) {
                    *(undefined4 *)&this_03[3].klass = 0x3f800000;
                    *(undefined4 *)((longlong)&this_03[3].klass + 4) = 0x3f800000;
                    if (3 < *(uint *)&this_03[1].monitor) {
                      this_03[3].monitor = (MonitorData *)0x3f800000;
                      if (this_01 != (Mesh *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_SetName
                                  ((Object_1 *)this_01,StringLiteral_DrawPlaneMesh,(MethodInfo *)0x0
                                  );
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        iVar16 = mscorlib.dll::System::Array::Array_get_Length
                                          (this_02,(MethodInfo *)0x0);
                        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                                  (this_01,VertexAttribute__Enum_Position,
                                   VertexAttributeFormat__Enum_Float32,3,this_02,iVar16,0,iVar16,
                                   MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
                                  (this_01,value_01,(MethodInfo *)0x0);
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector2>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector2_____UnityEngine__Rendering__MeshUpdateFlags_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        iVar16 = mscorlib.dll::System::Array::Array_get_Length
                                          (this_03,(MethodInfo *)0x0);
                        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                                  (this_01,VertexAttribute__Enum_TexCoord0,
                                   VertexAttributeFormat__Enum_Float32,2,this_03,iVar16,0,iVar16,
                                   MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateBounds_1
                                  (this_01,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__UnityEngine__Debug);
                          LOCK();
                          UNLOCK();
                          FUN_?(&StringLiteral_Not_allowed_to_call_RecalculateN);
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
                        if (this_01 == (Mesh *)0x0) {
                          FUN_?();
                          pcVar10 = (code *)swi(3);
                          (*pcVar10)();
                          return;
                        }
                        pvVar17 = (this_01->fields)._.m_CachedPtr;
                        if (pvVar17 != (void *)0x0) {
                          pcVar10 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar10 = (code *)FUN_?(&UNK_?),
                             pcVar10 == (code *)0x0)) {
                            uVar18 = func_?(&UNK_?);
                            FUN_?(uVar18,0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pcRam_? = pcVar10;
                          cVar19 = (*pcRam_?)(pvVar17);
                          if (cVar19 == '\0') {
                            arg0 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                                             ((Object_1 *)this_01,(MethodInfo *)0x0);
                            pSVar20 = StringLiteral_Not_allowed_to_call_RecalculateN;
                            mscorlib.dll::System::ParamsArray::ParamsArray__ctor
                                      ((ParamsArray *)&stack0xffffffffffffffb8,(Object *)arg0,
                                       (MethodInfo *)0x0);
                            pSVar20 = mscorlib.dll::System::String::String_FormatHelper
                                                ((IFormatProvider *)0x0,pSVar20,
                                                 (ParamsArray *)&stack0xffffffffffffffd8,
                                                 (MethodInfo *)0x0);
                            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                              FUN_?();
                            }
                            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                                      ((Object *)pSVar20,(MethodInfo *)0x0);
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
                          pvVar17 = (this_01->fields)._.m_CachedPtr;
                          if (pvVar17 != (void *)0x0) {
                            pcVar10 = pcRam_?;
                            if ((pcRam_? == (code *)0x0) &&
                               (pcVar10 = (code *)FUN_?(&UNK_?),
                               pcVar10 == (code *)0x0)) {
                              uVar18 = func_?(&UNK_?);
                              FUN_?(uVar18,0);
                              pcVar10 = (code *)swi(3);
                              (*pcVar10)();
                              return;
                            }
                            pcRam_? = pcVar10;
                            (*pcRam_?)(pvVar17,0);
                            return;
                          }
                        }
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)this_01,(MethodInfo *)0x0);
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                      goto code_?;
                    }
                  }
                }
              }
            }
          }
        }
      }
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void CachePos() */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_CachePos
               (WorldEditorDrawPlane *this,MethodInfo *method)

{
  pVVar1 = WorldEditorDrawPlane_get_Pos(&VStack_2,this,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields)._cachedPos.x = pVVar1->x;
  (this->fields)._cachedPos.y = fVar3;
  (this->fields)._cachedPos.z = fVar4;
  return;
}


/* Void FollowAvatar() */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_FollowAvatar
               (WorldEditorDrawPlane *this,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((this_01 != (MainCameraManager *)0x0) &&
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this_01,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_2 = 0;
    uStack_3 = 0;
    pvVar4 = (obj->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar4);
    if (pTVar1 != (Transform *)0x0) {
      uStack_7 = uStack_2;
      fStack_8 = (float)uStack_3;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_9 = 0;
      fStack_10 = 0.0;
      pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar4,&uStack_7,&uStack_9);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Math);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      dVar11 = (double)FUN_?((double)(float)uStack_9);
      FUN_?((double)uStack_9._4_4_);
      dVar12 = (double)FUN_?((double)fStack_10);
      this_00 = (this->fields).DrawPlaneVisualization;
      if ((this_00 != (GameObject *)0x0) &&
         (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (this_00,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0)) {
        uStack_7 = (ulonglong)(uint)(float)dVar11;
        fStack_8 = (float)dVar12;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
        (*pcRam_?)(pvVar4,&uStack_7);
        return;
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void GenerateDrawPlane(GameObject) */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_GenerateDrawPlane
               (WorldEditorDrawPlane *this,GameObject *drawPlane,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((drawPlane == (GameObject *)0x0) ||
     (this_00 = (MeshFilter *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (drawPlane,
                           UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                          ), this_00 == (MeshFilter *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                      (this_00,(MethodInfo *)0x0);
  pGVar2 = (this->fields).DrawPlaneVisualization;
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
  if (pGVar2 == (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar3 = (drawPlane->fields)._.m_CachedPtr == (void *)0x0;
  }
  else {
    bVar3 = drawPlane == pGVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Int32,this_01,bVar3,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DrawPlaneMesh);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar4 = _UNK_?;
  if (bVar3 != false) {
    fVar4 = _UNK_?;
  }
  this_02 = (Array *)FUN_?(TypeInfo__UnityEngine__Vector3,4);
  value = (Int32__Array *)FUN_?(TypeInfo__System__Int32,6);
  if (this_02 == (Array *)0x0) goto code_?;
  this_03 = (Array *)FUN_?(TypeInfo__UnityEngine__Vector2,*(undefined4 *)&this_02[1].monitor
                                  );
  fVar5 = _UNK_?;
  fVar6 = _UNK_?;
  fVar7 = fVar4 * _UNK_?;
  if (*(int *)&this_02[1].monitor != 0) {
    this_02[2].klass = (Array__Class *)CONCAT44(fVar4 * 0.0,fVar4 * _UNK_?);
    *(float *)&this_02[2].monitor = fVar7;
    if (1 < *(uint *)&this_02[1].monitor) {
      *(ulonglong *)((longlong)&this_02[2].monitor + 4) = CONCAT44(fVar4 * 0.0,fVar4 * fVar6);
      *(float *)((longlong)&this_02[3].klass + 4) = fVar4 * fVar6;
      if (2 < *(uint *)&this_02[1].monitor) {
        this_02[3].monitor = (MonitorData *)CONCAT44(fVar4 * 0.0,fVar4 * fVar5);
        *(float *)&this_02[4].klass = fVar4 * fVar6;
        if (3 < *(uint *)&this_02[1].monitor) {
          *(ulonglong *)((longlong)&this_02[4].klass + 4) = CONCAT44(fVar4 * 0.0,fVar4 * fVar5);
          *(float *)((longlong)&this_02[4].monitor + 4) = fVar4 * fVar5;
          if (value == (Int32__Array *)0x0) {
code_?:
            FUN_?();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if ((((((int)value->max_length != 0) &&
                (value->vector[0] = 0, 1 < (uint)value->max_length)) &&
               (value->vector[1] = 1, 2 < (uint)value->max_length)) &&
              ((value->vector[2] = 2, 3 < (uint)value->max_length &&
               (value->vector[3] = 2, 4 < (uint)value->max_length)))) &&
             (value->vector[4] = 3, 5 < (uint)value->max_length)) {
            value->vector[5] = 0;
            if (this_03 == (Array *)0x0) goto code_?;
            if ((*(int *)&this_03[1].monitor != 0) &&
               (this_03[2].klass = (Array__Class *)0x0, 1 < *(uint *)&this_03[1].monitor)) {
              *(undefined4 *)&this_03[2].monitor = 0;
              *(undefined4 *)((longlong)&this_03[2].monitor + 4) = 0x3f800000;
              if (2 < *(uint *)&this_03[1].monitor) {
                *(undefined4 *)&this_03[3].klass = 0x3f800000;
                *(undefined4 *)((longlong)&this_03[3].klass + 4) = 0x3f800000;
                if (3 < *(uint *)&this_03[1].monitor) {
                  this_03[3].monitor = (MonitorData *)0x3f800000;
                  if (this_01 != (Mesh *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_SetName
                              ((Object_1 *)this_01,StringLiteral_DrawPlaneMesh,(MethodInfo *)0x0);
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    iVar8 = mscorlib.dll::System::Array::Array_get_Length(this_02,(MethodInfo *)0x0)
                    ;
                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                              (this_01,VertexAttribute__Enum_Position,
                               VertexAttributeFormat__Enum_Float32,3,this_02,iVar8,0,iVar8,
                               MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
                              (this_01,value,(MethodInfo *)0x0);
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector2>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector2_____UnityEngine__Rendering__MeshUpdateFlags_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    iVar8 = mscorlib.dll::System::Array::Array_get_Length(this_03,(MethodInfo *)0x0)
                    ;
                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                              (this_01,VertexAttribute__Enum_TexCoord0,
                               VertexAttributeFormat__Enum_Float32,2,this_03,iVar8,0,iVar8,
                               MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateBounds_1
                              (this_01,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__UnityEngine__Debug);
                      LOCK();
                      UNLOCK();
                      FUN_?(&StringLiteral_Not_allowed_to_call_RecalculateN);
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
                    if (this_01 == (Mesh *)0x0) {
                      FUN_?();
                      pcVar1 = (code *)swi(3);
                      (*pcVar1)();
                      return;
                    }
                    pvVar9 = (this_01->fields)._.m_CachedPtr;
                    if (pvVar9 != (void *)0x0) {
                      pcVar1 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
                        uVar10 = func_?(&UNK_?);
                        FUN_?(uVar10,0);
                        pcVar1 = (code *)swi(3);
                        (*pcVar1)();
                        return;
                      }
                      pcRam_? = pcVar1;
                      cVar11 = (*pcRam_?)(pvVar9);
                      if (cVar11 == '\0') {
                        arg0 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                                         ((Object_1 *)this_01,(MethodInfo *)0x0);
                        pSVar12 = StringLiteral_Not_allowed_to_call_RecalculateN;
                        mscorlib.dll::System::ParamsArray::ParamsArray__ctor
                                  ((ParamsArray *)&stack0xffffffffffffffb8,(Object *)arg0,
                                   (MethodInfo *)0x0);
                        pSVar12 = mscorlib.dll::System::String::String_FormatHelper
                                           ((IFormatProvider *)0x0,pSVar12,
                                            (ParamsArray *)&stack0xffffffffffffffd8,
                                            (MethodInfo *)0x0);
                        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                                  ((Object *)pSVar12,(MethodInfo *)0x0);
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
                      pvVar9 = (this_01->fields)._.m_CachedPtr;
                      if (pvVar9 != (void *)0x0) {
                        pcVar1 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0))
                        {
                          uVar10 = func_?(&UNK_?);
                          FUN_?(uVar10,0);
                          pcVar1 = (code *)swi(3);
                          (*pcVar1)();
                          return;
                        }
                        pcRam_? = pcVar1;
                        (*pcRam_?)(pvVar9,0);
                        return;
                      }
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)this_01,(MethodInfo *)0x0);
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void GenerateMesh(Mesh, Boolean) */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_GenerateMesh
               (WorldEditorDrawPlane *this,Mesh *mesh,bool scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DrawPlaneMesh);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  if (scale != 0) {
    fVar1 = _UNK_?;
  }
  this_00 = (Array *)FUN_?(TypeInfo__UnityEngine__Vector3,4);
  value = (Int32__Array *)FUN_?(TypeInfo__System__Int32,6);
  if (this_00 == (Array *)0x0) goto code_?;
  this_01 = (Array *)FUN_?(TypeInfo__UnityEngine__Vector2,*(undefined4 *)&this_00[1].monitor
                                  );
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  fVar4 = fVar1 * _UNK_?;
  if (*(int *)&this_00[1].monitor != 0) {
    this_00[2].klass = (Array__Class *)CONCAT44(fVar1 * 0.0,fVar1 * _UNK_?);
    *(float *)&this_00[2].monitor = fVar4;
    if (1 < *(uint *)&this_00[1].monitor) {
      *(ulonglong *)((longlong)&this_00[2].monitor + 4) = CONCAT44(fVar1 * 0.0,fVar1 * fVar3);
      *(float *)((longlong)&this_00[3].klass + 4) = fVar1 * fVar3;
      if (2 < *(uint *)&this_00[1].monitor) {
        this_00[3].monitor = (MonitorData *)CONCAT44(fVar1 * 0.0,fVar1 * fVar2);
        *(float *)&this_00[4].klass = fVar1 * fVar3;
        if (3 < *(uint *)&this_00[1].monitor) {
          *(ulonglong *)((longlong)&this_00[4].klass + 4) = CONCAT44(fVar1 * 0.0,fVar1 * fVar2);
          *(float *)((longlong)&this_00[4].monitor + 4) = fVar1 * fVar2;
          if (value == (Int32__Array *)0x0) {
code_?:
            FUN_?();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((((((int)value->max_length != 0) &&
                (value->vector[0] = 0, 1 < (uint)value->max_length)) &&
               (value->vector[1] = 1, 2 < (uint)value->max_length)) &&
              ((value->vector[2] = 2, 3 < (uint)value->max_length &&
               (value->vector[3] = 2, 4 < (uint)value->max_length)))) &&
             (value->vector[4] = 3, 5 < (uint)value->max_length)) {
            value->vector[5] = 0;
            if (this_01 == (Array *)0x0) goto code_?;
            if ((*(int *)&this_01[1].monitor != 0) &&
               (this_01[2].klass = (Array__Class *)0x0, 1 < *(uint *)&this_01[1].monitor)) {
              *(undefined4 *)&this_01[2].monitor = 0;
              *(undefined4 *)((longlong)&this_01[2].monitor + 4) = 0x3f800000;
              if (2 < *(uint *)&this_01[1].monitor) {
                *(undefined4 *)&this_01[3].klass = 0x3f800000;
                *(undefined4 *)((longlong)&this_01[3].klass + 4) = 0x3f800000;
                if (3 < *(uint *)&this_01[1].monitor) {
                  this_01[3].monitor = (MonitorData *)0x3f800000;
                  if (mesh != (Mesh *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_SetName
                              ((Object_1 *)mesh,StringLiteral_DrawPlaneMesh,(MethodInfo *)0x0);
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    iVar6 = mscorlib.dll::System::Array::Array_get_Length(this_00,(MethodInfo *)0x0)
                    ;
                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                              (mesh,VertexAttribute__Enum_Position,
                               VertexAttributeFormat__Enum_Float32,3,this_00,iVar6,0,iVar6,
                               MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
                              (mesh,value,(MethodInfo *)0x0);
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector2>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector2_____UnityEngine__Rendering__MeshUpdateFlags_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    iVar6 = mscorlib.dll::System::Array::Array_get_Length(this_01,(MethodInfo *)0x0)
                    ;
                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                              (mesh,VertexAttribute__Enum_TexCoord0,
                               VertexAttributeFormat__Enum_Float32,2,this_01,iVar6,0,iVar6,
                               MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateBounds_1
                              (mesh,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__UnityEngine__Debug);
                      LOCK();
                      UNLOCK();
                      FUN_?(&StringLiteral_Not_allowed_to_call_RecalculateN);
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
                    if (mesh == (Mesh *)0x0) {
                      FUN_?();
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    pvVar7 = (mesh->fields)._.m_CachedPtr;
                    if (pvVar7 != (void *)0x0) {
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
                      cVar9 = (*pcRam_?)(pvVar7);
                      if (cVar9 == '\0') {
                        arg0 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                                         ((Object_1 *)mesh,(MethodInfo *)0x0);
                        pSVar10 = StringLiteral_Not_allowed_to_call_RecalculateN;
                        mscorlib.dll::System::ParamsArray::ParamsArray__ctor
                                  ((ParamsArray *)&stack0xffffffffffffffb8,(Object *)arg0,
                                   (MethodInfo *)0x0);
                        pSVar10 = mscorlib.dll::System::String::String_FormatHelper
                                           ((IFormatProvider *)0x0,pSVar10,
                                            (ParamsArray *)&stack0xffffffffffffffd8,
                                            (MethodInfo *)0x0);
                        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                                  ((Object *)pSVar10,(MethodInfo *)0x0);
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
                      pvVar7 = (mesh->fields)._.m_CachedPtr;
                      if (pvVar7 != (void *)0x0) {
                        pcVar5 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0))
                        {
                          uVar8 = func_?(&UNK_?);
                          FUN_?(uVar8,0);
                          pcVar5 = (code *)swi(3);
                          (*pcVar5)();
                          return;
                        }
                        pcRam_? = pcVar5;
                        (*pcRam_?)(pvVar7,0);
                        return;
                      }
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)mesh,(MethodInfo *)0x0);
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Vector3 GetCubePlaceOffset() */

Vector3 * Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_GetCubePlaceOffset
                    (Vector3 *__return_storage_ptr__,WorldEditorDrawPlane *this,MethodInfo *method)

{
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((this_00 != (MainCameraManager *)0x0) &&
     (obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_00,(MethodInfo *)0x0), obj_00 != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar1 = (obj_00->fields)._._.m_CachedPtr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      pVVar3 = (Vector3 *)(*pcVar2)();
      return pVVar3;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar2 = (code *)swi(3);
      pVVar3 = (Vector3 *)(*pcVar2)();
      return pVVar3;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar1);
    if (obj != (Transform *)0x0) {
      VStack_5.x = 0.0;
      VStack_5.y = 0.0;
      VStack_5.z = 0.0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar1 = (obj->fields)._._.m_CachedPtr;
      if (pvVar1 != (void *)0x0) {
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar2 = (code *)swi(3);
          pVVar3 = (Vector3 *)(*pcVar2)();
          return pVVar3;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(pvVar1,&VStack_5);
        pVVar3 = WorldEditorDrawPlane_GetDirectionVector(&VStack_5,this,(MethodInfo *)0x0);
        uVar6 = pVVar3->x;
        fVar7 = pVVar3->y * _UNK_?;
        fVar8 = pVVar3->z * _UNK_?;
        __return_storage_ptr__->x = (float)uVar6 * _UNK_? * -1.0;
        __return_storage_ptr__->y = fVar7 * -1.0;
        __return_storage_ptr__->z = fVar8 * -1.0;
        return __return_storage_ptr__;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      pVVar3 = (Vector3 *)(*pcVar2)();
      return pVVar3;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar2)();
  return pVVar3;
}


/* Boolean GetCubePosOnDrawplane(GameObject, IntVector ByRef) */

bool Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_GetCubePosOnDrawplane
               (WorldEditorDrawPlane *this,GameObject *gameObject,IntVector *intVectorHitPos,
               MethodInfo *method)

{
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  VStack_1.z = 0.0;
  bVar2 = WorldEditorDrawPlane_Pick(this,&VStack_1,(MethodInfo *)0x0);
  this_00 = (this->fields)._targetGameObject;
  if ((this_00 == (GameObject *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (this_00,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    bVar2 = (*pcVar3)();
    return bVar2;
  }
  aVStack_4[0].x = VStack_1.x;
  aVStack_4[0].y = VStack_1.y;
  aVStack_4[0].z = VStack_1.z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  VStack_1.z = 0.0;
  pvVar5 = (obj->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    bVar2 = (*pcVar3)();
    return bVar2;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar3 = (code *)swi(3);
    bVar2 = (*pcVar3)();
    return bVar2;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar5,aVStack_4);
  pVVar7 = WorldEditorDrawPlane_GetCubePlaceOffset(aVStack_4,this,(MethodInfo *)0x0);
  uVar8 = pVVar7->x;
  uVar9 = pVVar7->y;
  fVar10 = VStack_1.z + pVVar7->z;
  fVar11 = VStack_1.x + (float)uVar8;
  fVar12 = VStack_1.y + (float)uVar9;
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
  intVectorHitPos->x = (short)(int)dVar13;
  intVectorHitPos->y = (short)(int)dVar14;
  intVectorHitPos->z = (int16_t)(int)dVar15;
  return bVar2;
}


/* Vector3 GetDirectionVector() */

Vector3 * Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_GetDirectionVector
                    (Vector3 *__return_storage_ptr__,WorldEditorDrawPlane *this,MethodInfo *method)

{
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  uStack_4 = 0;
  pvVar5 = (obj->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar5,&uStack_3);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar7 = (float)uStack_4 + (float)uStack_4;
  fVar8 = uStack_3._4_4_ + uStack_3._4_4_;
  pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar10 = ((float)uStack_3 + (float)uStack_3) * (float)uStack_3;
  uVar11 = (pVVar9->upVector).x;
  uVar12 = (pVVar9->upVector).y;
  fVar13 = (pVVar9->upVector).z;
  fVar14 = ((float)uStack_3 + (float)uStack_3) * uStack_4._4_4_;
  fVar15 = _UNK_? - (fVar7 * (float)uStack_4 + fVar10);
  fVar10 = _UNK_? - (fVar8 * uStack_3._4_4_ + fVar10);
  __return_storage_ptr__->x =
       (_UNK_? - (fVar7 * (float)uStack_4 + fVar8 * uStack_3._4_4_)) * (float)uVar11 +
       (fVar8 * (float)uStack_3 - fVar7 * uStack_4._4_4_) * (float)uVar12 +
       (fVar8 * uStack_4._4_4_ + fVar7 * (float)uStack_3) * fVar13;
  __return_storage_ptr__->y =
       fVar15 * (float)uVar12 + (fVar7 * uStack_4._4_4_ + fVar8 * (float)uStack_3) * (float)uVar11
       + (fVar7 * uStack_3._4_4_ - fVar14) * fVar13;
  __return_storage_ptr__->z =
       (fVar7 * (float)uStack_3 - fVar8 * uStack_4._4_4_) * (float)uVar11 +
       (fVar14 + fVar7 * uStack_3._4_4_) * (float)uVar12 + fVar10 * fVar13;
  return __return_storage_ptr__;
}


/* Vector3 GetOffsetVector() */

Vector3 * Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_GetOffsetVector
                    (Vector3 *__return_storage_ptr__,WorldEditorDrawPlane *this,MethodInfo *method)

{
  pVVar1 = WorldEditorDrawPlane_GetDirectionVector(aVStack_2,this,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  fVar4 = pVVar1->y * _UNK_?;
  fVar5 = pVVar1->z * _UNK_?;
  __return_storage_ptr__->x = (float)uVar3 * _UNK_?;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar5;
  return __return_storage_ptr__;
}


/* Void MoveDrawPlane(Int32) */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_MoveDrawPlane
               (WorldEditorDrawPlane *this,int32_t dir,MethodInfo *method)

{
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
  if (_UNK_? < fVar3 - (this->fields).lastMovePlaneDelta) {
    pVVar4 = WorldEditorDrawPlane_get_Pos((Vector3 *)auStack_5,this,(MethodInfo *)0x0);
    VStack_6.x = pVVar4->x;
    VStack_6.y = pVVar4->y;
    fVar3 = pVVar4->z;
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                    ((Component *)this,(MethodInfo *)0x0);
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
    WorldEditorDrawPlane_set_Pos(this,&VStack_6,(MethodInfo *)0x0);
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
    (this->fields).lastMovePlaneDelta = fVar3;
  }
  return;
}


/* Boolean Pick(Vector3 ByRef) */

bool Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_Pick
               (WorldEditorDrawPlane *this,Vector3 *hit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).mainCamera;
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
  bVar2 = iRam_? != 0;
  (this->fields).mainCamera = pCVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).mainCamera >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
code_?:
  pCVar1 = (this->fields).mainCamera;
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  RStack_7.m_Origin.x = 0.0;
  RStack_7.m_Origin.y = 0.0;
  RStack_7.m_Origin.z = 0.0;
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar8 = (code *)swi(3);
    bVar10 = (*pcVar8)();
    return bVar10;
  }
  pcRam_? = pcVar8;
  (*pcRam_?)(&RStack_7);
  uStack_11 = 0;
  uStack_12 = 0;
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar8 = (code *)swi(3);
    bVar10 = (*pcVar8)();
    return bVar10;
  }
  pcRam_? = pcVar8;
  (*pcRam_?)(&uStack_11);
  if (pCVar1 != (Camera *)0x0) {
    uStackX_8 = CONCAT44(uStack_11._4_4_,RStack_7.m_Origin.x);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    auStack_13 = (undefined1  [8])0x0;
    fStack_14 = 0.0;
    fStack_15 = 0.0;
    fStack_16 = 0.0;
    fStack_17 = 0.0;
    pvVar18 = (pCVar1->fields)._._._.m_CachedPtr;
    if (pvVar18 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar1,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      bVar10 = (*pcVar8)();
      return bVar10;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar8 = (code *)swi(3);
      bVar10 = (*pcVar8)();
      return bVar10;
    }
    pcRam_? = pcVar8;
    method_00 = (MethodInfo *)auStack_13;
    (*pcRam_?)(pvVar18,&uStackX_8,2);
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
      bVar10 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
              EventSystem_IsPointerOverGameObject(this_00,(MethodInfo *)0x0);
      fVar19 = fStack_15;
      if ((bVar10 == 0) && ((this->fields).isActive != 0)) {
        RStack_7.m_Direction.z = fStack_17;
        RStack_7.m_Direction.y = fStack_16;
        RStack_7.m_Origin._0_8_ = auStack_13;
        RStack_7.m_Origin.z = fStack_14;
        RStack_7.m_Direction.x = fStack_15;
        bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                          (&(this->fields).editorPlane,&RStack_7,(float *)&uStackX_8,method_00);
        fVar20 = fStack_17;
        if (bVar10 != 0) {
          RStack_7.m_Origin.y = fStack_16;
          RStack_7.m_Origin.x = fStack_15;
          RStack_7.m_Origin.z = fStack_17;
          fVar21 = (float)FUN_?(&RStack_7);
          if (_UNK_? < fVar21) {
            fVar20 = fVar20 / fVar21;
            RStack_7.m_Origin.y = fStack_16 / fVar21;
            RStack_7.m_Origin.x = fVar19 / fVar21;
          }
          else {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar22 = TypeInfo__UnityEngine__Vector3->static_fields;
            RStack_7.m_Origin.x = (pVVar22->zeroVector).x;
            RStack_7.m_Origin.y = (pVVar22->zeroVector).y;
            fVar20 = (pVVar22->zeroVector).z;
          }
          hit->x = RStack_7.m_Origin.x * (float)uStackX_8 + (float)auStack_13._0_4_;
          hit->y = RStack_7.m_Origin.y * (float)uStackX_8 + (float)auStack_13._4_4_;
          hit->z = fVar20 * (float)uStackX_8 + fStack_14;
          return 1;
        }
      }
      return 0;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar10 = (*pcVar8)();
  return bVar10;
}


/* Boolean RayCast(Ray, Vector3 ByRef, Boolean) */

bool Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_RayCast
               (WorldEditorDrawPlane *this,Ray *ray,Vector3 *hit,bool ignoreActiveFlag,
               MethodInfo *method)

{
  bVar1 = ignoreActiveFlag;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__EventSystem);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  afStack_2[0] = 0.0;
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                      ((MethodInfo *)0x0);
  if (this_00 != (EventSystem *)0x0) {
    bVar3 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
            EventSystem_IsPointerOverGameObject(this_00,(MethodInfo *)0x0);
    if ((bVar3 == 0) && (((this->fields).isActive != 0 || (ignoreActiveFlag != 0)))) {
      RStack_4.m_Origin.x = (ray->m_Origin).x;
      RStack_4.m_Origin.y = (ray->m_Origin).y;
      RStack_4._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
      RStack_4.m_Direction.y = (ray->m_Direction).y;
      RStack_4.m_Direction.z = (ray->m_Direction).z;
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                        (&(this->fields).editorPlane,&RStack_4,afStack_2,
                         (MethodInfo *)CONCAT71(in_register_00000089,bVar1));
      if (bVar1 != 0) {
        RStack_4.m_Origin.x = (ray->m_Direction).x;
        RStack_4.m_Origin.y = (ray->m_Direction).y;
        RStack_4.m_Origin.z = (ray->m_Direction).z;
        fVar5 = (float)FUN_?(&RStack_4);
        if (_UNK_? < fVar5) {
          uVar6 = (ray->m_Direction).x;
          uVar7 = (ray->m_Direction).y;
          fVar8 = (ray->m_Direction).z / fVar5;
          RStack_4.m_Origin.y = (float)uVar7 / fVar5;
          RStack_4.m_Origin.x = (float)uVar6 / fVar5;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
          RStack_4.m_Origin.x = (pVVar9->zeroVector).x;
          RStack_4.m_Origin.y = (pVVar9->zeroVector).y;
          fVar8 = (pVVar9->zeroVector).z;
        }
        uVar10 = (ray->m_Origin).x;
        uVar11 = (ray->m_Origin).y;
        fVar5 = (ray->m_Origin).z;
        hit->x = RStack_4.m_Origin.x * afStack_2[0] + (float)uVar10;
        hit->y = RStack_4.m_Origin.y * afStack_2[0] + (float)uVar11;
        hit->z = fVar8 * afStack_2[0] + fVar5;
        return 1;
      }
    }
    return 0;
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  bVar1 = (*pcVar12)();
  return bVar1;
}


/* Void RestorePos() */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_RestorePos
               (WorldEditorDrawPlane *this,MethodInfo *method)

{
  VStack_1.x = (this->fields)._cachedPos.x;
  VStack_1.y = (this->fields)._cachedPos.y;
  VStack_1.z = (this->fields)._cachedPos.z;
  WorldEditorDrawPlane_set_Pos(this,&VStack_1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->fields)._cachedPos.x = (pVVar2->zeroVector).x;
  (this->fields)._cachedPos.y = fVar3;
  (this->fields)._cachedPos.z = fVar4;
  return;
}


/* Void ReturnDrawPlaneToLandscape() */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_ReturnDrawPlaneToLandscape
               (WorldEditorDrawPlane *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pOVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                       (this_00,
                        MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                       );
    if (pOVar1 != (Object *)0x0) {
      WorldEditorDrawPlane_set_TargetGameObject
                (this,(GameObject *)pOVar1[0xc].monitor,(MethodInfo *)0x0);
      VStack_2.x = (this->fields)._cachedPos.x;
      VStack_2.y = (this->fields)._cachedPos.y;
      VStack_2.z = (this->fields)._cachedPos.z;
      WorldEditorDrawPlane_set_Pos(this,&VStack_2,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar4 = (pVVar3->zeroVector).y;
      fVar5 = (pVVar3->zeroVector).z;
      (this->fields)._cachedPos.x = (pVVar3->zeroVector).x;
      (this->fields)._cachedPos.y = fVar4;
      (this->fields)._cachedPos.z = fVar5;
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetDrawPlaneHeight(Single) */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_SetDrawPlaneHeight
               (WorldEditorDrawPlane *this,float height,MethodInfo *method)

{
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
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
  auStack_2._0_4_ = 0.0;
  auStack_2._4_4_ = 0.0;
  stack0xffffffffffffff50 = 0;
  pvVar3 = (obj->fields)._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
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
  (*pcRam_?)(pvVar3,auStack_2);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar5 = (float)auStack_2._8_4_ + (float)auStack_2._8_4_;
  fVar6 = (float)auStack_2._4_4_ + (float)auStack_2._4_4_;
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar8 = ((float)auStack_2._0_4_ + (float)auStack_2._0_4_) * (float)auStack_2._0_4_;
  uVar9 = (pVVar7->upVector).x;
  uVar10 = (pVVar7->upVector).y;
  fVar11 = ((float)auStack_2._0_4_ + (float)auStack_2._0_4_) * fStack_12;
  fVar13 = fVar6 * (float)auStack_2._4_4_;
  fVar14 = fVar5 * (float)auStack_2._0_4_;
  fVar15 = fVar5 * (float)auStack_2._4_4_;
  fVar16 = (pVVar7->upVector).z;
  auStack_2._4_4_ =
       ((_UNK_? - (fVar5 * (float)auStack_2._8_4_ + fVar8)) * (float)uVar10 +
        (fVar6 * (float)auStack_2._0_4_ + fVar5 * fStack_12) * (float)uVar9 +
       (fVar15 - fVar11) * fVar16) * height;
  auStack_2._0_4_ =
       ((_UNK_? - (fVar5 * (float)auStack_2._8_4_ + fVar13)) * (float)uVar9 +
        (fVar6 * (float)auStack_2._0_4_ - fVar5 * fStack_12) * (float)uVar10 +
       (fVar6 * fStack_12 + fVar14) * fVar16) * height;
  stack0xffffffffffffff50 =
       CONCAT44(fStack_12,
                ((fVar14 - fVar6 * fStack_12) * (float)uVar9 + (fVar11 + fVar15) * (float)uVar10 +
                (_UNK_? - (fVar13 + fVar8)) * fVar16) * height);
  WorldEditorDrawPlane_set_Pos(this,(Vector3 *)auStack_2,(MethodInfo *)0x0);
  return;
}


/* Void SetLayer(Int32) */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_SetLayer
               (WorldEditorDrawPlane *this,int32_t layer,MethodInfo *method)

{
  pGVar1 = (this->fields).DrawPlaneVisualization;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (pGVar1,layer,(MethodInfo *)0x0);
    pGVar1 = (this->fields).DrawPlaneCursor;
    if (pGVar1 != (GameObject *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,layer,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar1 == (GameObject *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar3 = (pGVar1->fields)._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar3,layer);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetToCameraPos() */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_SetToCameraPos
               (WorldEditorDrawPlane *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).mainCamera;
  if ((this_00 != (Camera *)0x0) &&
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_00,(MethodInfo *)0x0), this_01 != (Transform *)0x0)) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                       (aVStack_2,this_01,(MethodInfo *)0x0);
    VStack_3.x = pVVar1->x;
    VStack_3.y = pVVar1->y;
    fVar4 = _UNK_?;
    if (_UNK_? < VStack_3.x) {
      fVar4 = _UNK_?;
    }
    fVar5 = _UNK_?;
    if (_UNK_? < VStack_3.y) {
      fVar5 = _UNK_?;
    }
    fVar6 = _UNK_?;
    if (pVVar1->z <= 0.0) {
      fVar6 = _UNK_?;
    }
    pSVar7 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    if (((pSVar7 != (SpawnRoleDataMediator *)0x0) &&
        (pSVar8 = (pSVar7->fields).position,
        pSVar8 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_ *)0x0)) &&
       (pSVar9 = (pSVar8->fields)._.subscribableVariable,
       pSVar9 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) {
      if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
           ->klass->field_0x135 & 1) == 0) {
        FUN_?();
      }
      uVar10 = (pSVar9->fields)._.value.x;
      uVar11 = (pSVar9->fields)._.value.y;
      VStack_3.z = fVar6 + (pSVar9->fields)._.value.z;
      VStack_3.y = fVar5 + (float)uVar11;
      VStack_3.x = fVar4 + (float)uVar10;
      WorldEditorDrawPlane_SetToGridAlignedPos(this,&VStack_3,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SetToGridAlignedPos(Vector3) */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_SetToGridAlignedPos
               (WorldEditorDrawPlane *this,Vector3 *pos,MethodInfo *method)

{
  this_00 = (this->fields)._targetGameObject;
  if ((this_00 == (GameObject *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (this_00,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  aVStack_2[0].x = pos->x;
  aVStack_2[0].y = pos->y;
  aVStack_2[0].z = pos->z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (obj->fields)._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
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
  (*pcRam_?)(pvVar3,aVStack_2);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  dVar5 = (double)FUN_?(0,0);
  dVar6 = (double)FUN_?(0,0);
  dVar7 = (double)FUN_?(0,0);
  pVVar8 = WorldEditorDrawPlane_GetDirectionVector(aVStack_2,this,(MethodInfo *)0x0);
  uVar9 = pVVar8->x;
  uVar10 = pVVar8->y;
  fVar11 = pVVar8->z;
  pVVar8 = WorldEditorDrawPlane_GetDirectionVector(aVStack_2,this,(MethodInfo *)0x0);
  uVar12 = pVVar8->x;
  aVStack_2[0].z = fVar11 * (float)dVar7 + pVVar8->z * _UNK_?;
  aVStack_2[0].y = (float)uVar10 * (float)dVar6 + pVVar8->y * _UNK_?;
  aVStack_2[0].x = (float)uVar9 * (float)dVar5 + (float)uVar12 * _UNK_?;
  WorldEditorDrawPlane_set_Pos(this,aVStack_2,(MethodInfo *)0x0);
  return;
}


/* Void SetToTargetGameObjectZero() */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_SetToTargetGameObjectZero
               (WorldEditorDrawPlane *this,MethodInfo *method)

{
  this_00 = (this->fields)._targetGameObject;
  if ((this_00 == (GameObject *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (this_00,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
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
  VStack_2.x = 0.0;
  VStack_2.y = 0.0;
  VStack_2.z = 0.0;
  pvVar3 = (obj->fields)._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
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
  (*pcRam_?)(pvVar3,&VStack_2);
  VStack_5.x = VStack_2.x;
  VStack_5.y = VStack_2.y;
  VStack_5.z = VStack_2.z;
  WorldEditorDrawPlane_SetToGridAlignedPos(this,&VStack_5,(MethodInfo *)0x0);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_Update
               (WorldEditorDrawPlane *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_2.x = (pVVar1->zeroVector).x;
  VStack_2.y = (pVVar1->zeroVector).y;
  VStack_2.z = (pVVar1->zeroVector).z;
  bVar3 = WorldEditorDrawPlane_Pick(this,&VStack_2,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    pGVar4 = (this->fields).DrawPlaneCursor;
    if (pGVar4 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,0,(MethodInfo *)0x0);
code_?:
      pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((this_00 != (MainCameraManager *)0x0) &&
         (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_00,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_2.x = 0.0;
        VStack_2.y = 0.0;
        VStack_2.z = 0.0;
        pvVar6 = (obj->fields)._._.m_CachedPtr;
        if (pvVar6 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pcVar7 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
          uVar8 = func_?(&UNK_?);
          FUN_?(uVar8,0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pcRam_? = pcVar7;
        (*pcRam_?)(pvVar6);
        if (pTVar5 != (Transform *)0x0) {
          aVStack_9[0].x = VStack_2.x;
          aVStack_9[0].y = VStack_2.y;
          aVStack_9[0].z = VStack_2.z;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_10 = 0;
          fStack_11 = 0.0;
          pvVar6 = (pTVar5->fields)._._.m_CachedPtr;
          if (pvVar6 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pcVar7 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
            uVar8 = func_?(&UNK_?);
            FUN_?(uVar8,0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pcRam_? = pcVar7;
          (*pcRam_?)(pvVar6,aVStack_9,&uStack_10);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Math);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
            FUN_?();
          }
          dVar12 = (double)FUN_?((double)(float)uStack_10);
          FUN_?((double)uStack_10._4_4_);
          dVar13 = (double)FUN_?((double)fStack_11);
          pGVar4 = (this->fields).DrawPlaneVisualization;
          if ((pGVar4 != (GameObject *)0x0) &&
             (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (pGVar4,(MethodInfo *)0x0), pTVar5 != (Transform *)0x0)) {
            aVStack_9[0]._0_8_ = ZEXT48((uint)(float)dVar12);
            aVStack_9[0].z = (float)dVar13;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar6 = (pTVar5->fields)._._.m_CachedPtr;
            if (pvVar6 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pcVar7 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
              uVar8 = func_?(&UNK_?);
              FUN_?(uVar8,0);
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pcRam_? = pcVar7;
            (*pcRam_?)(pvVar6,aVStack_9);
            return;
          }
          FUN_?();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if ((pTVar5 != (Transform *)0x0) &&
       (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pTVar5,(MethodInfo *)0x0), pTVar5 != (Transform *)0x0)) {
      aVStack_9[0].x = VStack_2.x;
      aVStack_9[0].y = VStack_2.y;
      aVStack_9[0].z = VStack_2.z;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_2.x = 0.0;
      VStack_2.y = 0.0;
      VStack_2.z = 0.0;
      pvVar6 = (pTVar5->fields)._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcRam_? = pcVar7;
      (*pcRam_?)(pvVar6,aVStack_9);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Math);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      dVar12 = (double)FUN_?((double)VStack_2.x,0);
      dVar13 = (double)FUN_?((double)VStack_2.y,0);
      dVar14 = (double)FUN_?((double)VStack_2.z,0);
      pGVar4 = (this->fields).DrawPlaneCursor;
      if (pGVar4 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar4,1,(MethodInfo *)0x0);
        pGVar4 = (this->fields).DrawPlaneCursor;
        if ((pGVar4 != (GameObject *)0x0) &&
           (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar4,(MethodInfo *)0x0), pTVar5 != (Transform *)0x0)) {
          aVStack_9[0].y = (float)dVar13;
          aVStack_9[0].x = (float)dVar12;
          aVStack_9[0].z = (float)dVar14;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar6 = (pTVar5->fields)._._.m_CachedPtr;
          if (pvVar6 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pcVar7 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
            uVar8 = func_?(&UNK_?);
            FUN_?(uVar8,0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pcRam_? = pcVar7;
          (*pcRam_?)(pvVar6);
          goto code_?;
        }
      }
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateAltitude() */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_UpdateAltitude
               (WorldEditorDrawPlane *this,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar2 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
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
    (*pcRam_?)(pvVar2);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar2 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar2 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
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
      (*pcRam_?)(pvVar2);
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_5 = 0;
        fStack_6 = 0.0;
        pvVar2 = (pTVar1->fields)._._.m_CachedPtr;
        if (pvVar2 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
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
        (*pcRam_?)(pvVar2,&uStack_5);
        pWVar7 = (this->fields).OnAltitudeChanged;
        iVar8 = (int)((fStack_6 + 0.0) - _UNK_?);
        (this->fields)._altitude = iVar8;
        if (pWVar7 != (WorldEditorDrawPlane_AltitudeChangedDelegate *)0x0) {
          (*(pWVar7->fields)._._.invoke_impl)
                    ((pWVar7->fields)._._.method_code,iVar8,(pWVar7->fields)._._.method);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateEditorPlanePosition() */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_UpdateEditorPlanePosition
               (WorldEditorDrawPlane *this,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_2 = 0;
    uStack_3 = 0;
    uStack_4 = 0;
    uStack_5 = 0;
    uStack_6 = 0;
    uStack_7 = 0;
    uStack_8 = 0;
    uStack_9 = 0;
    pvVar10 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar10 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
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
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_14._0_4_ = (pVVar13->upVector).x;
    uStack_14._4_4_ = (pVVar13->upVector).y;
    fVar15 = (pVVar13->upVector).z;
    fVar16 = (float)uStack_4 * (float)uStack_14._4_4_ +
             (float)uStack_2 * (float)(undefined4)uStack_14 + (float)uStack_6 * fVar15;
    fVar17 = uStack_4._4_4_ * (float)uStack_14._4_4_ +
             uStack_2._4_4_ * (float)(undefined4)uStack_14 + uStack_6._4_4_ * fVar15;
    fVar15 = (float)uStack_5 * (float)uStack_14._4_4_ +
             (float)uStack_3 * (float)(undefined4)uStack_14 + (float)uStack_7 * fVar15;
    uStack_18 = CONCAT44(fVar17,fVar16);
    fStack_19 = fVar15;
    fVar20 = (float)FUN_?(&uStack_18);
    if (_UNK_? < fVar20) {
      fVar15 = fVar15 / fVar20;
      uStack_18 = CONCAT44(fVar17 / fVar20,fVar16 / fVar20);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_18._0_4_ = (pVVar13->zeroVector).x;
      uStack_18._4_4_ = (pVVar13->zeroVector).y;
      fVar15 = (pVVar13->zeroVector).z;
    }
    uVar21 = uStack_18._4_4_;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_2 = 0;
      uStack_3 = 0;
      uStack_4 = 0;
      uStack_5 = 0;
      uStack_6 = 0;
      uStack_7 = 0;
      uStack_8 = 0;
      uStack_9 = 0;
      pvVar10 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar10 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
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
      (*pcRam_?)(pvVar10,&uStack_2);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar20 = (pVVar13->zeroVector).z;
      uVar22 = (pVVar13->zeroVector).x;
      uVar23 = (pVVar13->zeroVector).y;
      fVar16 = _UNK_? /
               (uStack_5._4_4_ * (float)uVar23 + uStack_3._4_4_ * (float)uVar22 +
                uStack_7._4_4_ * fVar20 + uStack_9._4_4_);
      fStack_24 = ((float)uStack_5 * (float)uVar23 + (float)uStack_3 * (float)uVar22 +
                   (float)uStack_7 * fVar20 + (float)uStack_9) * fVar16;
      uStack_18 = CONCAT44(uVar21,(undefined4)uStack_18);
      uStack_14 = CONCAT44((uStack_4._4_4_ * (float)uVar23 + uStack_2._4_4_ * (float)uVar22 +
                            uStack_6._4_4_ * fVar20 + uStack_8._4_4_) * fVar16,
                           ((float)uStack_4 * (float)uVar23 + (float)uStack_2 * (float)uVar22 +
                            (float)uStack_6 * fVar20 + (float)uStack_8) * fVar16);
      fStack_19 = fVar15;
      FUN_?(&(this->fields).editorPlane,&uStack_18,&uStack_14);
      return;
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Boolean get_IsOnLandscape() */

bool Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_get_IsOnLandscape
               (WorldEditorDrawPlane *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._targetGameObject;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pOVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                       (this_00,
                        MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                       );
    if (pOVar2 != (Object *)0x0) {
      pGVar3 = (GameObject *)pOVar2[0xc].monitor;
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
      if (pGVar3 == (GameObject *)0x0 && pGVar1 == (GameObject *)0x0) {
        return 1;
      }
      if (pGVar3 != (GameObject *)0x0) {
        if (pGVar1 != (GameObject *)0x0) {
          return pGVar1 == pGVar3;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        return (pGVar3->fields)._.m_CachedPtr == (void *)0x0;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pGVar1 != (GameObject *)0x0) {
        return (pGVar1->fields)._.m_CachedPtr == (void *)0x0;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Vector3 get_Pos() */

Vector3 * Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_get_Pos
                    (Vector3 *__return_storage_ptr__,WorldEditorDrawPlane *this,MethodInfo *method)

{
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  fStack_4 = 0.0;
  pvVar5 = (obj->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar5,&uStack_3);
  __return_storage_ptr__->x = (float)(undefined4)uStack_3;
  __return_storage_ptr__->y = (float)uStack_3._4_4_;
  __return_storage_ptr__->z = fStack_4;
  return __return_storage_ptr__;
}


/* Void set_Active(Boolean) */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_set_Active
               (WorldEditorDrawPlane *this,bool value,MethodInfo *method)

{
  (this->fields).isActive = value;
  pGVar1 = (this->fields).DrawPlaneVisualization;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,value,(MethodInfo *)0x0);
    pGVar1 = (this->fields).DrawPlaneCursor;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,value,(MethodInfo *)0x0);
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar3 = (pTVar2->fields)._._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        (*pcRam_?)(pvVar3);
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar3 = (pTVar2->fields)._._.m_CachedPtr;
          if (pvVar3 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcVar4 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
            uVar5 = func_?(&UNK_?);
            FUN_?(uVar5,0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcRam_? = pcVar4;
          (*pcRam_?)(pvVar3);
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_6 = 0;
            fStack_7 = 0.0;
            pvVar3 = (pTVar2->fields)._._.m_CachedPtr;
            if (pvVar3 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pcVar4 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
              uVar5 = func_?(&UNK_?);
              FUN_?(uVar5,0);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pcRam_? = pcVar4;
            (*pcRam_?)(pvVar3,&uStack_6);
            pWVar8 = (this->fields).OnAltitudeChanged;
            iVar9 = (int)((fStack_7 + 0.0) - _UNK_?);
            (this->fields)._altitude = iVar9;
            if (pWVar8 != (WorldEditorDrawPlane_AltitudeChangedDelegate *)0x0) {
              (*(pWVar8->fields)._._.invoke_impl)
                        ((pWVar8->fields)._._.method_code,iVar9,(pWVar8->fields)._._.method);
            }
            return;
          }
        }
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void set_Altitude(Int32) */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_set_Altitude
               (WorldEditorDrawPlane *this,int32_t value,MethodInfo *method)

{
  (this->fields)._altitude = value;
  pWVar1 = (this->fields).OnAltitudeChanged;
  if (pWVar1 != (WorldEditorDrawPlane_AltitudeChangedDelegate *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pWVar1->fields)._._.invoke_impl)
              ((pWVar1->fields)._._.method_code,value,(pWVar1->fields)._._.method);
    return;
  }
  return;
}


/* Void set_Orientation(DrawPlaneAxis) */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_set_Orientation
               (WorldEditorDrawPlane *this,DrawPlaneAxis__Enum value,MethodInfo *method)

{
  if (value == DrawPlaneAxis__Enum_X) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_3._0_4_ = (pVVar2->backVector).x;
    uStack_3._4_4_ = (pVVar2->backVector).y;
    fStack_4 = (pVVar2->backVector).z;
    uStack_5 = 0;
    uStack_6 = 0;
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(_UNK_?,&uStack_3,&uStack_5);
    if (pTVar1 == (Transform *)0x0) {
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uStack_9 = (undefined4)uStack_5;
    uStack_10 = uStack_5._4_4_;
    uStack_11 = (undefined4)uStack_6;
    uStack_12 = uStack_6._4_4_;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar13 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar13 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else if (value == DrawPlaneAxis__Enum_Y) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_3._0_4_ = (pVVar2->upVector).x;
    uStack_3._4_4_ = (pVVar2->upVector).y;
    fStack_4 = (pVVar2->upVector).z;
    uStack_5 = 0;
    uStack_6 = 0;
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(0,&uStack_3,&uStack_5);
    if (pTVar1 == (Transform *)0x0) {
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uStack_9 = (undefined4)uStack_5;
    uStack_10 = uStack_5._4_4_;
    uStack_11 = (undefined4)uStack_6;
    uStack_12 = uStack_6._4_4_;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar13 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar13 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    if (value != DrawPlaneAxis__Enum_Z) goto code_?;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_3._0_4_ = (pVVar2->rightVector).x;
    uStack_3._4_4_ = (pVVar2->rightVector).y;
    fStack_4 = (pVVar2->rightVector).z;
    uStack_5 = 0;
    uStack_6 = 0;
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(_UNK_?,&uStack_3,&uStack_5);
    if (pTVar1 == (Transform *)0x0) {
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uStack_9 = (undefined4)uStack_5;
    uStack_10 = uStack_5._4_4_;
    uStack_11 = (undefined4)uStack_6;
    uStack_12 = uStack_6._4_4_;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar13 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar13 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(pvVar13);
code_?:
  bVar14 = WorldEditorDrawPlane_get_IsOnLandscape(this,(MethodInfo *)0x0);
  if (bVar14 == 0) {
    WorldEditorDrawPlane_SetToTargetGameObjectZero(this,(MethodInfo *)0x0);
  }
  else {
    WorldEditorDrawPlane_SetToCameraPos(this,(MethodInfo *)0x0);
  }
  WorldEditorDrawPlane_UpdateEditorPlanePosition(this,(MethodInfo *)0x0);
  WorldEditorDrawPlane_UpdateAltitude(this,(MethodInfo *)0x0);
  (this->fields).drawPlaneAxis = value;
  return;
}


/* Void set_Pos(Vector3) */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_set_Pos
               (WorldEditorDrawPlane *this,Vector3 *value,MethodInfo *method)

{
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
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
  pvVar2 = (obj->fields)._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar2);
  WorldEditorDrawPlane_UpdateEditorPlanePosition(this,(MethodInfo *)0x0);
  WorldEditorDrawPlane_UpdateAltitude(this,(MethodInfo *)0x0);
  return;
}


/* Void set_TargetGameObject(GameObject) */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_set_TargetGameObject
               (WorldEditorDrawPlane *this,GameObject *value,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields)._targetGameObject = value;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._targetGameObject >> 0xc);
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
  pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  pGVar7 = (this->fields)._targetGameObject;
  if (pGVar7 != (GameObject *)0x0) {
    value_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar7,(MethodInfo *)0x0);
    if (pTVar6 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (pTVar6,value_01,(MethodInfo *)0x0);
      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
      if (pTVar6 == (Transform *)0x0) {
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uStack_10._0_4_ = (pVVar8->oneVector).x;
      uStack_10._4_4_ = (pVVar8->oneVector).y;
      fStack_11 = (pVVar8->oneVector).z;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar12 = (pTVar6->fields)._._.m_CachedPtr;
      if (pvVar12 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pcVar9 = pcRam_?;
      if (pcRam_? == (code *)0x0) {
        pcVar9 = (code *)FUN_?(&UNK_?);
        if (pcVar9 == (code *)0x0) {
          uVar13 = func_?(&UNK_?);
          FUN_?(uVar13,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      pcRam_? = pcVar9;
      (*pcRam_?)(pvVar12);
      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pQVar14 = TypeInfo__UnityEngine__Quaternion->static_fields;
      if (pTVar6 == (Transform *)0x0) {
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      fStack_15 = (pQVar14->identityQuaternion).x;
      fStack_16 = (pQVar14->identityQuaternion).y;
      fStack_17 = (pQVar14->identityQuaternion).z;
      fStack_18 = (pQVar14->identityQuaternion).w;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar12 = (pTVar6->fields)._._.m_CachedPtr;
      if (pvVar12 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pcVar9 = pcRam_?;
      if (pcRam_? == (code *)0x0) {
        pcVar9 = (code *)FUN_?(&UNK_?);
        if (pcVar9 == (code *)0x0) {
          uVar13 = func_?(&UNK_?);
          FUN_?(uVar13,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      pcRam_? = pcVar9;
      (*pcRam_?)(pvVar12);
      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      pVVar19 = WorldEditorDrawPlane_GetDirectionVector(&VStack_20,this,(MethodInfo *)0x0);
      uStack_10._0_4_ = pVVar19->x;
      uStack_10._4_4_ = pVVar19->y;
      fVar21 = pVVar19->z * _UNK_?;
      if (pTVar6 == (Transform *)0x0) {
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uStack_10 = CONCAT44((float)uStack_10._4_4_ * _UNK_?,
                           (float)(undefined4)uStack_10 * _UNK_?);
      fStack_11 = fVar21;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar12 = (pTVar6->fields)._._.m_CachedPtr;
      if (pvVar12 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pcVar9 = pcRam_?;
      if (pcRam_? == (code *)0x0) {
        pcVar9 = (code *)FUN_?(&UNK_?);
        if (pcVar9 == (code *)0x0) {
          uVar13 = func_?(&UNK_?);
          FUN_?(uVar13,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      pcRam_? = pcVar9;
      (*pcRam_?)(pvVar12);
      (this->fields).drawPlaneAxis = 1;
      bVar22 = WorldEditorDrawPlane_get_IsOnLandscape(this,(MethodInfo *)0x0);
      if (bVar22 == 0) {
        pGVar7 = (this->fields)._targetGameObject;
        if (pGVar7 == (GameObject *)0x0) goto code_?;
        value_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                             (pGVar7,(MethodInfo *)0x0);
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_layer_parameter_constant_should_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uVar2 = 0x8000;
        value_00 = 0;
        do {
          value_00 = value_00 + 1;
          uVar2 = (int)uVar2 >> 1;
        } while ((uVar2 & 1) == 0);
      }
      pGVar7 = (this->fields).DrawPlaneVisualization;
      if (pGVar7 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                  (pGVar7,value_00,(MethodInfo *)0x0);
        pGVar7 = (this->fields).DrawPlaneCursor;
        if (pGVar7 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                    (pGVar7,value_00,(MethodInfo *)0x0);
          pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          if (pTVar6 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_23 = 0;
            uStack_24 = 0;
            uStack_25 = 0;
            uStack_26 = 0;
            uStack_27 = 0;
            uStack_28 = 0;
            uStack_29 = 0;
            uStack_30 = (undefined *)0x0;
            pvVar12 = (pTVar6->fields)._._.m_CachedPtr;
            if (pvVar12 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pcVar9 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
              uVar13 = func_?(&UNK_?);
              FUN_?(uVar13,0);
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pcRam_? = pcVar9;
            (*pcRam_?)(pvVar12);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
            uStack_31._0_4_ = (pVVar8->upVector).x;
            uStack_31._4_4_ = (pVVar8->upVector).y;
            fVar21 = (pVVar8->upVector).z;
            fVar32 = (float)uStack_25 * (float)uStack_31._4_4_ +
                     (float)uStack_23 * (float)(undefined4)uStack_31 + (float)uStack_27 * fVar21;
            fVar33 = uStack_25._4_4_ * (float)uStack_31._4_4_ +
                     uStack_23._4_4_ * (float)(undefined4)uStack_31 + uStack_27._4_4_ * fVar21;
            fVar21 = (float)uStack_26 * (float)uStack_31._4_4_ +
                     (float)uStack_24 * (float)(undefined4)uStack_31 + (float)uStack_28 * fVar21;
            uStack_34 = CONCAT44(fVar33,fVar32);
            fStack_35 = fVar21;
            fVar36 = (float)FUN_?(&uStack_34);
            if (_UNK_? < fVar36) {
              fVar21 = fVar21 / fVar36;
              uStack_34 = CONCAT44(fVar33 / fVar36,fVar32 / fVar36);
            }
            else {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
              uStack_34._0_4_ = (pVVar8->zeroVector).x;
              uStack_34._4_4_ = (pVVar8->zeroVector).y;
              fVar21 = (pVVar8->zeroVector).z;
            }
            uVar37 = uStack_34._4_4_;
            pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this,(MethodInfo *)0x0);
            if (pTVar6 != (Transform *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uStack_23 = 0;
              uStack_24 = 0;
              uStack_25 = 0;
              uStack_26 = 0;
              uStack_27 = 0;
              uStack_28 = 0;
              uStack_29 = 0;
              uStack_30 = (undefined *)0x0;
              pvVar12 = (pTVar6->fields)._._.m_CachedPtr;
              if (pvVar12 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pcVar9 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
                uVar13 = func_?(&UNK_?);
                FUN_?(uVar13,0);
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pcRam_? = pcVar9;
              (*pcRam_?)(pvVar12,&uStack_23);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
              fVar36 = (pVVar8->zeroVector).z;
              uVar38 = (pVVar8->zeroVector).x;
              uVar39 = (pVVar8->zeroVector).y;
              fVar32 = _UNK_? /
                       (uStack_26._4_4_ * (float)uVar39 + uStack_24._4_4_ * (float)uVar38 +
                        uStack_28._4_4_ * fVar36 + uStack_30._4_4_);
              fStack_40 = ((float)uStack_26 * (float)uVar39 + (float)uStack_24 * (float)uVar38 +
                           (float)uStack_28 * fVar36 + (float)uStack_30) * fVar32;
              uStack_34 = CONCAT44(uVar37,(undefined4)uStack_34);
              uStack_31 = CONCAT44((uStack_25._4_4_ * (float)uVar39 + uStack_23._4_4_ * (float)uVar38
                                    + uStack_27._4_4_ * fVar36 + uStack_29._4_4_) * fVar32,
                                   ((float)uStack_25 * (float)uVar39 +
                                    (float)uStack_23 * (float)uVar38 + (float)uStack_27 * fVar36 +
                                   (float)uStack_29) * fVar32);
              fStack_35 = fVar21;
              FUN_?(&(this->fields).editorPlane,&uStack_34,&uStack_31);
              return;
            }
          }
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


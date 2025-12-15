
/* Void FadeIn(Single, Material, Vector3[]) */

void Assembly-CSharp.dll::SelectionBox::SelectionBox_FadeIn
               (SelectionBox *this,float fadeInTime,Material *material,Vector3__Array *corners,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&StringLiteral__Color);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar2 = pcRam_?;
  (this->fields).fadeInTime = fadeInTime;
  (this->fields).isFadingOut = 0;
  (this->fields).isFadingIn = 1;
  pcVar3 = pcRam_?;
  if (pcVar2 == (code *)0x0) {
    auStack_1._8_8_ = &UNK_?;
    pcVar2 = (code *)FUN_?(&UNK_?);
    pcVar3 = pcVar2;
    if (pcVar2 == (code *)0x0) {
      auStack_1._8_8_ = &UNK_?;
      uVar4 = func_?(&UNK_?);
      auStack_1._8_8_ = &UNK_?;
      FUN_?(uVar4,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pcRam_? = pcVar3;
  uStack_5 = CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
  auStack_1._8_8_ = &UNK_?;
  fVar6 = (float)(*pcVar2)();
  pMVar7 = (this->fields).meshRenderer;
  fVar8 = 0.0;
  (this->fields).fadeInBeginTime = fVar6;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    auStack_1._8_8_ = &UNK_?;
    FUN_?();
  }
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
  if (cRam_? == '\0') {
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pMVar7 == (MeshRenderer *)0x0) {
code_?:
    auStack_1._8_8_ = &UNK_?;
    pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (pGVar9 == (GameObject *)0x0) goto DAT_?;
    auStack_1._8_8_ = &UNK_?;
    pMVar7 = (MeshRenderer *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (pGVar9,
                         UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                        );
    bVar10 = iRam_? != 0;
    (this->fields).meshRenderer = pMVar7;
    if (bVar10) {
      uVar11 = (uint)((ulonglong)&(this->fields).meshRenderer >> 0xc);
      uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
      do {
        uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
        puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
        LOCK();
        bVar10 = uVar13 == *puVar14;
        if (bVar10) {
          *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      auStack_1._8_8_ = &UNK_?;
      FUN_?();
    }
    if ((pMVar7->fields)._._._.m_CachedPtr == (void *)0x0) goto code_?;
    fVar8 = (this->fields).currentAlpha;
  }
  pMVar7 = (this->fields).meshRenderer;
  if (pMVar7 == (MeshRenderer *)0x0) goto DAT_?;
  auStack_1._8_8_ = &UNK_?;
  pMVar15 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                      ((Renderer *)pMVar7,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    auStack_1._8_8_ = &UNK_?;
    FUN_?();
  }
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
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
            ((Object_1 *)pMVar15,0.0,(MethodInfo *)0x0);
  pMVar7 = (this->fields).meshRenderer;
  if (pMVar7 == (MeshRenderer *)0x0) goto DAT_?;
  auStack_1._8_8_ = &UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
            ((Renderer *)pMVar7,material,(MethodInfo *)0x0);
  pMVar16 = (this->fields).meshFilter;
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
  if (cRam_? == '\0') {
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pMVar16 == (MeshFilter *)0x0) {
code_?:
    auStack_1._8_8_ = &UNK_?;
    pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (pGVar9 == (GameObject *)0x0) goto DAT_?;
    auStack_1._8_8_ = &UNK_?;
    pMVar16 = (MeshFilter *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (pGVar9,
                         UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                        );
    bVar10 = iRam_? != 0;
    (this->fields).meshFilter = pMVar16;
    if (bVar10) {
      uVar11 = (uint)((ulonglong)&(this->fields).meshFilter >> 0xc);
      uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
      do {
        uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
        puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
        LOCK();
        bVar10 = uVar13 == *puVar14;
        if (bVar10) {
          *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      auStack_1._8_8_ = &UNK_?;
      FUN_?();
    }
    if ((pMVar16->fields)._._.m_CachedPtr == (void *)0x0) goto code_?;
  }
  pMVar7 = (this->fields).meshRenderer;
  if (pMVar7 != (MeshRenderer *)0x0) {
    auStack_1._8_8_ = &UNK_?;
    pMVar15 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                        ((Renderer *)pMVar7,(MethodInfo *)0x0);
    if (pMVar15 != (Material *)0x0) {
      auStack_1._8_8_ = &UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                ((Object_1 *)pMVar15,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
      pMVar7 = (this->fields).meshRenderer;
      if (pMVar7 != (MeshRenderer *)0x0) {
        auStack_1._8_8_ = &UNK_?;
        pMVar15 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                            ((Renderer *)pMVar7,(MethodInfo *)0x0);
        if (pMVar15 != (Material *)0x0) {
          auStack_1._8_8_ = &UNK_?;
          pCVar17 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                              (&CStack_18,pMVar15,StringLiteral__Color,(MethodInfo *)0x0);
          pMVar7 = (this->fields).meshRenderer;
          uVar4._0_4_ = pCVar17->r;
          uVar4._4_4_ = pCVar17->g;
          fVar6 = pCVar17->b;
          (this->fields).baseAlpha = pCVar17->a;
          if (pMVar7 != (MeshRenderer *)0x0) {
            auStack_1._8_8_ = &UNK_?;
            pMVar15 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                ((Renderer *)pMVar7,(MethodInfo *)0x0);
            CStack_18.a = fVar8;
            CStack_18.b = fVar6;
            CStack_18._0_8_ = uVar4;
            if (pMVar15 != (Material *)0x0) {
              auStack_1._8_8_ = &UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                        (pMVar15,StringLiteral__Color,&CStack_18,(MethodInfo *)0x0);
              pMVar16 = (this->fields).meshFilter;
              if (pMVar16 != (MeshFilter *)0x0) {
                auStack_1._8_8_ = &UNK_?;
                pMVar19 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                                    (pMVar16,(MethodInfo *)0x0);
                if (pMVar19 != (Mesh *)0x0) {
                  if (cRam_? == '\0') {
                    auStack_1._8_8_ = &UNK_?;
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Mesh>_UnityEngine__Mesh_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar20 = (pMVar19->fields)._.m_CachedPtr;
                  if (pvVar20 == (void *)0x0) {
                    auStack_1._8_8_ = &UNK_?;
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar19,(MethodInfo *)0x0);
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pcVar2 = pcRam_?;
                  if (pcRam_? == (code *)0x0) {
                    auStack_1._8_8_ = &UNK_?;
                    pcVar2 = (code *)FUN_?(&UNK_?);
                    if (pcVar2 == (code *)0x0) {
                      auStack_1._8_8_ = &UNK_?;
                      uVar4 = func_?(&UNK_?);
                      auStack_1._8_8_ = &UNK_?;
                      FUN_?(uVar4,0);
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                  }
                  pcRam_? = pcVar2;
                  auStack_1._8_8_ = &UNK_?;
                  (*pcRam_?)(pvVar20);
                  pMVar16 = (this->fields).meshFilter;
                  if (pMVar16 != (MeshFilter *)0x0) {
                    auStack_1._8_8_ = &UNK_?;
                    pMVar19 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                              MeshFilter_get_mesh(pMVar16,(MethodInfo *)0x0);
                    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
                      auStack_1._8_8_ = &UNK_?;
                      FUN_?();
                    }
                    auStack_1._8_8_ = &UNK_?;
                    SharedCubeFunctions::SharedCubeFunctions_AddCubeMesh
                              (pMVar19,corners,0,(MethodInfo *)0x0);
                    pMVar16 = (this->fields).meshFilter;
                    if (pMVar16 != (MeshFilter *)0x0) {
                      auStack_1._8_8_ = &UNK_?;
                      pMVar19 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                                MeshFilter_get_mesh(pMVar16,(MethodInfo *)0x0);
                      fVar8 = _UNK_?;
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__SharedCubeFunctions,corners,_UNK_?,0);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      uVar12 = 0;
                      pVVar21 = corners->vector;
                      if (corners == (Vector3__Array *)0x0) {
                        FUN_?();
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      uStack_22 = uStack_5;
                      uVar13 = uVar12;
                      uVar23 = uVar12;
                      do {
                        uVar11 = (uint)uVar13;
                        if ((uint)corners->max_length <= uVar11) goto DAT_?;
                        uVar24._0_4_ = pVVar21->x;
                        uVar24._4_4_ = pVVar21->y;
                        fVar6 = pVVar21->z;
                        uVar25 = uVar11 + 1 & 0x80000003;
                        if ((int)uVar25 < 0) {
                          uVar25 = (uVar25 - 1 | 0xfffffffc) + 1;
                        }
                        if ((uint)corners->max_length <= uVar25) goto DAT_?;
                        uVar26._0_4_ = corners->vector[(int)uVar25].x;
                        uVar26._4_4_ = corners->vector[(int)uVar25].y;
                        fVar27 = corners->vector[(int)uVar25].z;
                        if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        auStack_1._8_4_ = fVar6;
                        VStack_28._0_8_ = uVar26;
                        VStack_28.z = fVar27;
                        auStack_1._0_8_ = uVar24;
                        SharedCubeFunctions::SharedCubeFunctions_AddCubeLine
                                  (pMVar19,(Vector3 *)auStack_1,&VStack_28,fVar8,(MethodInfo *)0x0
                                  );
                        uVar13 = (ulonglong)(uVar11 + 1);
                        uVar23 = uVar23 + 1;
                        pVVar21 = pVVar21 + 1;
                      } while ((longlong)uVar23 < 4);
                      uVar11 = 4;
                      pVVar21 = corners->vector + 4;
                      lVar29 = 4;
                      do {
                        if ((uint)corners->max_length <= uVar11) goto DAT_?;
                        uVar30._0_4_ = pVVar21->x;
                        uVar30._4_4_ = pVVar21->y;
                        fVar6 = pVVar21->z;
                        uVar25 = uVar11 + 1 & 0x80000003;
                        if ((int)uVar25 < 0) {
                          uVar25 = (uVar25 - 1 | 0xfffffffc) + 1;
                        }
                        if ((uint)corners->max_length <= uVar25 + 4) goto DAT_?;
                        uVar31._0_4_ = corners->vector[(longlong)(int)uVar25 + 4].x;
                        uVar31._4_4_ = corners->vector[(longlong)(int)uVar25 + 4].y;
                        fVar27 = corners->vector[(longlong)(int)uVar25 + 4].z;
                        if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        auStack_1._8_4_ = fVar27;
                        VStack_28._0_8_ = uVar30;
                        VStack_28.z = fVar6;
                        auStack_1._0_8_ = uVar31;
                        SharedCubeFunctions::SharedCubeFunctions_AddCubeLine
                                  (pMVar19,&VStack_28,(Vector3 *)auStack_1,fVar8,(MethodInfo *)0x0
                                  );
                        uVar11 = uVar11 + 1;
                        lVar29 = lVar29 + 1;
                        pVVar21 = pVVar21 + 1;
                      } while (lVar29 < 8);
                      pVVar21 = corners->vector;
                      pVVar32 = corners->vector + 7;
                      uVar13 = uVar12;
                      while (uVar11 = (uint)uVar12, uVar11 < (uint)corners->max_length) {
                        uVar33._0_4_ = pVVar21->x;
                        uVar33._4_4_ = pVVar21->y;
                        fVar6 = pVVar21->z;
                        if ((uint)corners->max_length <= 7 - uVar11) break;
                        uVar34._0_4_ = pVVar32->x;
                        uVar34._4_4_ = pVVar32->y;
                        fVar27 = pVVar32->z;
                        if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        auStack_1._8_4_ = fVar27;
                        VStack_28._0_8_ = uVar33;
                        VStack_28.z = fVar6;
                        auStack_1._0_8_ = uVar34;
                        SharedCubeFunctions::SharedCubeFunctions_AddCubeLine
                                  (pMVar19,&VStack_28,(Vector3 *)auStack_1,fVar8,(MethodInfo *)0x0
                                  );
                        uVar12 = (ulonglong)(uVar11 + 1);
                        uVar13 = uVar13 + 1;
                        pVVar21 = pVVar21 + 1;
                        pVVar32 = pVVar32 + -1;
                        if (3 < (longlong)uVar13) {
                          return;
                        }
                      }
DAT_?:
                      FUN_?();
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
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
  }
DAT_?:
  auStack_1._8_8_ = &UNK_?;
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void FadeOutDestroy(Single) */

void Assembly-CSharp.dll::SelectionBox::SelectionBox_FadeOutDestroy
               (SelectionBox *this,float fadeOutTime,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  (this->fields).fadeOutTime = fadeOutTime;
  (this->fields).isFadingOut = 1;
  pcVar2 = pcRam_?;
  if ((pcVar1 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar2 = pcVar1, pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcVar1)();
  (this->fields).fadeOutBeginTime = fVar4;
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SelectionBox::SelectionBox_OnDestroy
               (SelectionBox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).meshRenderer;
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
  if (pMVar1 != (MeshRenderer *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._._._.m_CachedPtr != (void *)0x0) {
      pMVar1 = (this->fields).meshRenderer;
      if (pMVar1 == (MeshRenderer *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      obj = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                      ((Renderer *)pMVar1,(MethodInfo *)0x0);
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


/* Void Start() */

void Assembly-CSharp.dll::SelectionBox::SelectionBox_Start(SelectionBox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_UIItems);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_UIItems,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (pGVar1,value,(MethodInfo *)0x0);
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      pMVar2 = (MeshRenderer *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                         (pGVar1,
                          UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                         );
      bVar3 = iRam_? != 0;
      (this->fields).meshRenderer = pMVar2;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields).meshRenderer >> 0xc);
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
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (pGVar1 != (GameObject *)0x0) {
        pMVar8 = (MeshFilter *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                           (pGVar1,
                            UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                           );
        bVar3 = iRam_? != 0;
        (this->fields).meshFilter = pMVar8;
        if (bVar3) {
          uVar4 = (uint)((ulonglong)&(this->fields).meshFilter >> 0xc);
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
        pMVar2 = (this->fields).meshRenderer;
        if (pMVar2 != (MeshRenderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_receiveShadows
                    ((Renderer *)pMVar2,0,(MethodInfo *)0x0);
          pMVar2 = (this->fields).meshRenderer;
          if (pMVar2 != (MeshRenderer *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar9 = (pMVar2->fields)._._._.m_CachedPtr;
            if (pvVar9 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar2,(MethodInfo *)0x0);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pcVar10 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
              uVar11 = func_?(&UNK_?);
              FUN_?(uVar11,0);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pcRam_? = pcVar10;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam_?)(pvVar9,0);
            return;
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


/* Void Update() */

void Assembly-CSharp.dll::SelectionBox::SelectionBox_Update(SelectionBox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isFadingOut == 0) {
    if ((this->fields).isFadingIn == 0) {
      return;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    fVar3 = (float)(*pcRam_?)();
    if (fVar3 - (this->fields).fadeInBeginTime <= (this->fields).fadeInTime) {
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      fVar3 = ((fVar3 - (this->fields).fadeInBeginTime) / (this->fields).fadeInTime) *
               (this->fields).baseAlpha;
    }
    else {
      fVar3 = (this->fields).baseAlpha;
      (this->fields).isFadingIn = 0;
    }
    pfVar4 = &(this->fields).currentAlpha;
    bVar5 = fVar3 == *pfVar4;
    bVar6 = fVar3 < *pfVar4;
  }
  else {
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
    fVar3 = fVar3 - (this->fields).fadeOutBeginTime;
    pfVar4 = &(this->fields).fadeOutTime;
    if (*pfVar4 <= fVar3 && fVar3 != *pfVar4) {
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
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
    fVar3 = (this->fields).fadeOutTime;
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
    fVar7 = (float)(*pcRam_?)();
    fVar8 = (this->fields).currentAlpha;
    fVar3 = ((fVar3 - (fVar7 - (this->fields).fadeOutBeginTime)) / (this->fields).fadeOutTime) *
             (this->fields).baseAlpha;
    bVar5 = fVar8 == fVar3;
    bVar6 = fVar8 < fVar3;
  }
  if (bVar6 || bVar5) {
    return;
  }
  pRVar9 = (Renderer *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                     );
  if ((pRVar9 != (Renderer *)0x0) &&
     (pMVar10 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                         (pRVar9,(MethodInfo *)0x0), pMVar10 != (Material *)0x0)) {
    pCVar11 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                       (aCStack_12,pMVar10,StringLiteral__Color,(MethodInfo *)0x0);
    uVar2._0_4_ = pCVar11->r;
    uVar2._4_4_ = pCVar11->g;
    fVar8 = pCVar11->b;
    (this->fields).currentAlpha = fVar3;
    pRVar9 = (Renderer *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this,
                        UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                       );
    if (pRVar9 != (Renderer *)0x0) {
      pMVar10 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                         (pRVar9,(MethodInfo *)0x0);
      aCStack_12[0].a = fVar3;
      aCStack_12[0].b = fVar8;
      aCStack_12[0]._0_8_ = uVar2;
      if (pMVar10 != (Material *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                  (pMVar10,StringLiteral__Color,aCStack_12,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* SelectionBox() */

void Assembly-CSharp.dll::SelectionBox::SelectionBox__ctor(SelectionBox *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).fadeOutTime = 10.0;
  (this->fields).fadeInTime = 10.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x3052a1b1,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


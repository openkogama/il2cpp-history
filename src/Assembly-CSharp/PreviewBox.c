
/* Void DestroyBox() */

void Assembly-CSharp.dll::PreviewBox::PreviewBox_DestroyBox(PreviewBox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
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


/* Void Show(Material, Vector3[]) */

void Assembly-CSharp.dll::PreviewBox::PreviewBox_Show
               (PreviewBox *this,Material *material,Vector3__Array *corners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
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
  if (pMVar1 == (MeshRenderer *)0x0) {
code_?:
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    pMVar1 = (MeshRenderer *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (pGVar2,
                         UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                        );
    bVar3 = iRam_? != 0;
    (this->fields).meshRenderer = pMVar1;
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
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._._._.m_CachedPtr == (void *)0x0) goto code_?;
  }
  pMVar1 = (this->fields).meshRenderer;
  if (pMVar1 == (MeshRenderer *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
            ((Renderer *)pMVar1,material,(MethodInfo *)0x0);
  pMVar8 = (this->fields).meshFilter;
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
  if (pMVar8 == (MeshFilter *)0x0) {
code_?:
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    pMVar8 = (MeshFilter *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (pGVar2,
                         UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                        );
    bVar3 = iRam_? != 0;
    (this->fields).meshFilter = pMVar8;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).meshFilter >> 0xc);
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
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar8->fields)._._.m_CachedPtr == (void *)0x0) goto code_?;
  }
  pMVar1 = (this->fields).meshRenderer;
  if (pMVar1 != (MeshRenderer *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                        ((Renderer *)pMVar1,(MethodInfo *)0x0);
    if (this_00 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                ((Object_1 *)this_00,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
      pMVar8 = (this->fields).meshFilter;
      if (pMVar8 != (MeshFilter *)0x0) {
        pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                            (pMVar8,(MethodInfo *)0x0);
        if (pMVar9 != (Mesh *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Mesh>_UnityEngine__Mesh_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar10 = (pMVar9->fields)._.m_CachedPtr;
          if (pvVar10 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar9,(MethodInfo *)0x0);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pcVar11 = pcRam_?;
          if (pcRam_? == (code *)0x0) {
            pcVar11 = (code *)FUN_?(&UNK_?);
            if (pcVar11 == (code *)0x0) {
              uVar12 = func_?(&UNK_?);
              FUN_?(uVar12,0);
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          pcRam_? = pcVar11;
          (*pcRam_?)(pvVar10);
          pMVar8 = (this->fields).meshFilter;
          if (pMVar8 != (MeshFilter *)0x0) {
            pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                                (pMVar8,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
              FUN_?();
            }
            diagonalWidth = _UNK_?;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__SharedCubeFunctions,corners,_UNK_?,0);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uVar13 = 0;
            pVVar14 = corners->vector;
            uVar5 = uVar13;
            uVar6 = uVar13;
            if (corners == (Vector3__Array *)0x0) {
              FUN_?();
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            do {
              uVar4 = (uint)uVar5;
              if ((uint)corners->max_length <= uVar4) goto DAT_?;
              uVar12._0_4_ = pVVar14->x;
              uVar12._4_4_ = pVVar14->y;
              fVar15 = pVVar14->z;
              uVar16 = uVar4 + 1 & 0x80000003;
              if ((int)uVar16 < 0) {
                uVar16 = (uVar16 - 1 | 0xfffffffc) + 1;
              }
              if ((uint)corners->max_length <= uVar16) goto DAT_?;
              uVar17._0_4_ = corners->vector[(int)uVar16].x;
              uVar17._4_4_ = corners->vector[(int)uVar16].y;
              fVar18 = corners->vector[(int)uVar16].z;
              if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
                FUN_?();
              }
              VStack_19._0_8_ = uVar17;
              VStack_19.z = fVar18;
              aVStack_20[0]._0_8_ = uVar12;
              aVStack_20[0].z = fVar15;
              SharedCubeFunctions::SharedCubeFunctions_AddCubeLine
                        (pMVar9,aVStack_20,&VStack_19,diagonalWidth,(MethodInfo *)0x0);
              uVar6 = uVar6 + 1;
              pVVar14 = pVVar14 + 1;
              uVar5 = (ulonglong)(uVar4 + 1);
            } while ((longlong)uVar6 < 4);
            uVar4 = 4;
            pVVar14 = corners->vector + 4;
            lVar21 = 4;
            do {
              if ((uint)corners->max_length <= uVar4) goto DAT_?;
              uVar22._0_4_ = pVVar14->x;
              uVar22._4_4_ = pVVar14->y;
              fVar15 = pVVar14->z;
              uVar16 = uVar4 + 1 & 0x80000003;
              if ((int)uVar16 < 0) {
                uVar16 = (uVar16 - 1 | 0xfffffffc) + 1;
              }
              if ((uint)corners->max_length <= uVar16 + 4) goto DAT_?;
              uVar23._0_4_ = corners->vector[(longlong)(int)uVar16 + 4].x;
              uVar23._4_4_ = corners->vector[(longlong)(int)uVar16 + 4].y;
              fVar18 = corners->vector[(longlong)(int)uVar16 + 4].z;
              if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
                FUN_?();
              }
              VStack_19._0_8_ = uVar22;
              VStack_19.z = fVar15;
              aVStack_20[0]._0_8_ = uVar23;
              aVStack_20[0].z = fVar18;
              SharedCubeFunctions::SharedCubeFunctions_AddCubeLine
                        (pMVar9,&VStack_19,aVStack_20,diagonalWidth,(MethodInfo *)0x0);
              uVar4 = uVar4 + 1;
              lVar21 = lVar21 + 1;
              pVVar14 = pVVar14 + 1;
            } while (lVar21 < 8);
            pVVar14 = corners->vector;
            pVVar24 = corners->vector + 7;
            uVar5 = uVar13;
            while (uVar4 = (uint)uVar13, uVar4 < (uint)corners->max_length) {
              uVar25._0_4_ = pVVar14->x;
              uVar25._4_4_ = pVVar14->y;
              fVar15 = pVVar14->z;
              if ((uint)corners->max_length <= 7 - uVar4) break;
              uVar26._0_4_ = pVVar24->x;
              uVar26._4_4_ = pVVar24->y;
              fVar18 = pVVar24->z;
              if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
                FUN_?();
              }
              VStack_19._0_8_ = uVar25;
              VStack_19.z = fVar15;
              aVStack_20[0]._0_8_ = uVar26;
              aVStack_20[0].z = fVar18;
              SharedCubeFunctions::SharedCubeFunctions_AddCubeLine
                        (pMVar9,&VStack_19,aVStack_20,diagonalWidth,(MethodInfo *)0x0);
              uVar13 = (ulonglong)(uVar4 + 1);
              uVar5 = uVar5 + 1;
              pVVar14 = pVVar14 + 1;
              pVVar24 = pVVar24 + -1;
              if (3 < (longlong)uVar5) {
                return;
              }
            }
DAT_?:
            FUN_?();
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::PreviewBox::PreviewBox_Start(PreviewBox *this,MethodInfo *method)

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
        return;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


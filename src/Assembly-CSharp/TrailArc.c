
/* Void SetTrailColor(Color) */

void Assembly-CSharp.dll::TrailArc::TrailArc_SetTrailColor(TrailArc *this,Color *baseColor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Color);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (Color__Array *)FUN_?(TypeInfo__UnityEngine__Color,3);
  fVar2 = baseColor->g;
  fVar3 = baseColor->b;
  fVar4 = baseColor->a;
  if (pCVar1 == (Color__Array *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((int)pCVar1->max_length != 0) {
    fVar6 = baseColor->r;
    fVar7 = baseColor->g;
    fVar8 = baseColor->b;
    fVar9 = baseColor->a;
    pCVar1->vector[0].r = (1.0 - baseColor->r) * 0.75 + baseColor->r;
    pCVar1->vector[0].g = (1.0 - fVar2) * 0.75 + fVar2;
    pCVar1->vector[0].b = (1.0 - fVar3) * 0.75 + fVar3;
    pCVar1->vector[0].a = (0.0 - fVar4) * 0.75 + fVar4;
    if (1 < (uint)pCVar1->max_length) {
      pCVar1->vector[1].r = (1.0 - fVar6) * 0.5 + fVar6;
      pCVar1->vector[1].g = (1.0 - fVar7) * 0.5 + fVar7;
      pCVar1->vector[1].b = (1.0 - fVar8) * 0.5 + fVar8;
      pCVar1->vector[1].a = (0.0 - fVar9) * 0.5 + fVar9;
      if (2 < (uint)pCVar1->max_length) {
        bVar10 = iRam_? != 0;
        fVar2 = baseColor->g;
        fVar3 = baseColor->b;
        fVar4 = baseColor->a;
        pCVar1->vector[2].r = baseColor->r;
        pCVar1->vector[2].g = fVar2;
        pCVar1->vector[2].b = fVar3;
        pCVar1->vector[2].a = fVar4;
        (this->fields).colors = pCVar1;
        if (bVar10) {
          uVar11 = (uint)((ulonglong)&(this->fields).colors >> 0xc);
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
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::TrailArc::TrailArc_Start(TrailArc *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__);
    LOCK();
    UNLOCK();
    FUN_?(&UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Material);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__TintColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Trail);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,(this->fields).pointsStored);
  bVar2 = iRam_? != 0;
  (this->fields).saved = pVVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).saved >> 0xc);
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
  pVVar1 = (this->fields).saved;
  if (pVVar1 != (Vector3__Array *)0x0) {
    pVVar1 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,(int)pVVar1->max_length);
    bVar2 = iRam_? != 0;
    (this->fields).savedUp = pVVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).savedUp >> 0xc);
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
    pVVar1 = (this->fields).saved;
    if (pVVar1 != (Vector3__Array *)0x0) {
      pVVar1 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,(int)pVVar1->max_length * (this->fields).segmentsPerPoint);
      bVar2 = iRam_? != 0;
      (this->fields).points = pVVar1;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields).points >> 0xc);
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
      pVVar1 = (this->fields).points;
      if (pVVar1 != (Vector3__Array *)0x0) {
        pVVar1 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,(int)pVVar1->max_length);
        bVar2 = iRam_? != 0;
        (this->fields).pointsUp = pVVar1;
        if (bVar2) {
          uVar3 = (uint)((ulonglong)&(this->fields).pointsUp >> 0xc);
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
        fVar7 = (this->fields).pointDistance;
        (this->fields).pointSqrDistance = fVar7 * fVar7;
        (this->fields).tRatio = 1.0 / (float)(this->fields).segmentsPerPoint;
        pGVar8 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
        name = StringLiteral_Trail;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject(pGVar8,name,(MethodInfo *)0x0);
        bVar2 = iRam_? != 0;
        (this->fields).trail = pGVar8;
        if (bVar2) {
          uVar3 = (uint)((ulonglong)&(this->fields).trail >> 0xc);
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
        pGVar8 = (this->fields).trail;
        if (pGVar8 != (GameObject *)0x0) {
          pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar8,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
          if (pTVar9 != (Transform *)0x0) {
            uStack_11._0_4_ = (pVVar10->zeroVector).x;
            uStack_11._4_4_ = (pVVar10->zeroVector).y;
            fStack_12 = (pVVar10->zeroVector).z;
            if (cRam_? == '\0') {
              FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar13 = (pTVar9->fields)._._.m_CachedPtr;
            if (pvVar13 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pcVar14 = pcRam_?;
            if ((pcRam_? == (code *)0x0) && (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
              uVar15 = func_?(&UNK_?);
              FUN_?(uVar15,0);
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pcRam_? = pcVar14;
            (*pcRam_?)(pvVar13);
            pGVar8 = (this->fields).trail;
            if (pGVar8 != (GameObject *)0x0) {
              pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar8,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Quaternion);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pQVar16 = TypeInfo__UnityEngine__Quaternion->static_fields;
              if (pTVar9 != (Transform *)0x0) {
                CStack_17.r = (pQVar16->identityQuaternion).x;
                CStack_17.g = (pQVar16->identityQuaternion).y;
                CStack_17.b = (pQVar16->identityQuaternion).z;
                CStack_17.a = (pQVar16->identityQuaternion).w;
                if (cRam_? == '\0') {
                  FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar13 = (pTVar9->fields)._._.m_CachedPtr;
                if (pvVar13 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
                  pcVar14 = (code *)swi(3);
                  (*pcVar14)();
                  return;
                }
                pcVar14 = pcRam_?;
                if ((pcRam_? == (code *)0x0) && (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
                  uVar15 = func_?(&UNK_?);
                  FUN_?(uVar15,0);
                  pcVar14 = (code *)swi(3);
                  (*pcVar14)();
                  return;
                }
                pcRam_? = pcVar14;
                (*pcRam_?)(pvVar13);
                pGVar8 = (this->fields).trail;
                if (pGVar8 != (GameObject *)0x0) {
                  pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar8,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Vector3);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
                  if (pTVar9 != (Transform *)0x0) {
                    uStack_11._0_4_ = (pVVar10->oneVector).x;
                    uStack_11._4_4_ = (pVVar10->oneVector).y;
                    fStack_12 = (pVVar10->oneVector).z;
                    if (cRam_? == '\0') {
                      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pvVar13 = (pTVar9->fields)._._.m_CachedPtr;
                    if (pvVar13 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    pcVar14 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) && (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
                      uVar15 = func_?(&UNK_?);
                      FUN_?(uVar15,0);
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    pcRam_? = pcVar14;
                    (*pcRam_?)(pvVar13,&uStack_11);
                    pGVar8 = (this->fields).trail;
                    if (pGVar8 != (GameObject *)0x0) {
                      this_00 = (MeshFilter *)UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1(pGVar8,UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__);
                      pGVar8 = (this->fields).trail;
                      if (pGVar8 != (GameObject *)0x0) {
                        pRVar18 = (Renderer *)UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1(pGVar8,UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__);
                        bVar2 = iRam_? != 0;
                        (this->fields).mRenderer = pRVar18;
                        if (bVar2) {
                          uVar3 = (uint)((ulonglong)&(this->fields).mRenderer >> 0xc);
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
                        if (this_00 != (MeshFilter *)0x0) {
                          pMVar19 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh(this_00,(MethodInfo *)0x0);
                          bVar2 = iRam_? != 0;
                          (this->fields).mesh = pMVar19;
                          if (bVar2) {
                            uVar3 = (uint)((ulonglong)&(this->fields).mesh >> 0xc);
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
                          pMVar20 = (this->fields).material;
                          this_01 = (Material *)FUN_?(TypeInfo__UnityEngine__Material);
                          UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor_1(this_01,pMVar20,(MethodInfo *)0x0);
                          bVar2 = iRam_? != 0;
                          (this->fields).trailMaterial = this_01;
                          if (bVar2) {
                            uVar3 = (uint)((ulonglong)&(this->fields).trailMaterial >> 0xc);
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
                          pMVar20 = (this->fields).trailMaterial;
                          if (pMVar20 != (Material *)0x0) {
                            pCVar21 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor(&CStack_17,pMVar20,StringLiteral__TintColor,(MethodInfo *)0x0);
                            (this->fields).fadeOutRatio = pCVar21->a;
                            pRVar18 = (this->fields).mRenderer;
                            if (pRVar18 != (Renderer *)0x0) {
                              pMVar20 = (this->fields).trailMaterial;
                              if (cRam_? == '\0') {
                                FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_,pMVar20,0);
                                LOCK();
                                UNLOCK();
                                FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Material>_UnityEngine__Material_);
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              if (pRVar18 == (Renderer *)0x0) {
                                FUN_?();
                                pcVar14 = (code *)swi(3);
                                (*pcVar14)();
                                return;
                              }
                              pvVar13 = (pRVar18->fields)._._.m_CachedPtr;
                              if (pvVar13 == (void *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar18,(MethodInfo *)0x0);
                                pcVar14 = (code *)swi(3);
                                (*pcVar14)();
                                return;
                              }
                              if ((void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Material>_UnityEngine__Material_->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                                FUN_?();
                              }
                              if (pMVar20 == (Material *)0x0) {
                                pvVar22 = (void *)0x0;
                              }
                              else {
                                pvVar22 = (pMVar20->fields)._.m_CachedPtr;
                              }
                              pcVar14 = pcRam_?;
                              if ((pcRam_? == (code *)0x0) && (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
                                uVar15 = func_?(&UNK_?);
                                FUN_?(uVar15,0);
                                pcVar14 = (code *)swi(3);
                                (*pcVar14)();
                                return;
                              }
                              pcRam_? = pcVar14;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                              (*pcRam_?)(pvVar13,pvVar22);
                              return;
                            }
                            goto code_?;
                          }
                        }
                      }
                    }
                  }
                  FUN_?();
                  pcVar14 = (code *)swi(3);
                  (*pcVar14)();
                  return;
                }
              }
              FUN_?();
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
          }
          FUN_?();
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::TrailArc::TrailArc_Update(TrailArc *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Color);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__TintColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Trail_effect_ending_with_a_segme);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  VStack_1.z = 0.0;
  uVar2 = 0;
  uStack_3 = 0;
  values = (Vector3__Array *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
  if (values == (Vector3__Array *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((((Component__Fields *)&((NumberFormatInfo__Fields *)&values->bounds)->numberGroupSizes)->_).m_CachedPtr != (void *)0x0) {
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5);
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5);
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5);
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5);
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5);
code_?:
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5);
code_?:
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5);
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)values,(MethodInfo *)0x0);
code_?:
      FUN_?();
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)values,(MethodInfo *)0x0);
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)values,(MethodInfo *)0x0);
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)values,(MethodInfo *)0x0);
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5);
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    }
    else {
      pcRam_? = pcVar4;
      (*pcRam_?)();
      uStack_6 = (Il2CppClass *)0x0;
      if (((this->fields).initialized == 0) && ((this->fields).Emit != 0)) {
        values = (this->fields).saved;
        uVar7 = (this->fields).savedCnt;
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
        if (pTVar8 != (Transform *)0x0) {
          in_stack_9 = (MethodInfo *)(CONCAT44((int)((ulonglong)in_stack_9 >> 0x20),(this->fields).pointDistance) ^ 0x80000000);
          pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint_1(&VStack_11,pTVar8,0.0,0.0,SUB84(in_stack_9,0),(MethodInfo *)0x0);
          if (values != (Vector3__Array *)0x0) {
            if (*(uint *)&values->max_length <= uVar7) goto code_?;
            fVar12 = pVVar10->y;
            values->vector[(int)uVar7].x = pVVar10->x;
            values->vector[(int)uVar7].y = fVar12;
            values->vector[(int)uVar7].z = pVVar10->z;
            values = (this->fields).savedUp;
            uVar7 = (this->fields).savedCnt;
            pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
            if (pTVar8 != (Transform *)0x0) {
              pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up(&VStack_11,pTVar8,(MethodInfo *)0x0);
              if (values != (Vector3__Array *)0x0) {
                if (*(uint *)&values->max_length <= uVar7) goto code_?;
                fVar12 = pVVar10->y;
                values->vector[(int)uVar7].x = pVVar10->x;
                values->vector[(int)uVar7].y = fVar12;
                values->vector[(int)uVar7].z = pVVar10->z;
                iVar13 = (this->fields).savedCnt;
                (this->fields).savedCnt = iVar13 + 1;
                pVVar14 = (this->fields).saved;
                if (pVVar14 != (Vector3__Array *)0x0) {
                  if ((uint)pVVar14->max_length <= iVar13 + 1U) goto code_?;
                  pVVar14->vector[(longlong)iVar13 + 1].x = 0.0;
                  pVVar14->vector[(longlong)iVar13 + 1].y = 0.0;
                  pVVar14->vector[(longlong)iVar13 + 1].z = 0.0;
                  values = (this->fields).savedUp;
                  uVar7 = (this->fields).savedCnt;
                  pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
                  if (pTVar8 != (Transform *)0x0) {
                    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up(&VStack_11,pTVar8,(MethodInfo *)0x0);
                    if (values != (Vector3__Array *)0x0) {
                      if (uVar7 < *(uint *)&values->max_length) {
                        fVar12 = pVVar10->y;
                        values->vector[(int)uVar7].x = pVVar10->x;
                        values->vector[(int)uVar7].y = fVar12;
                        values->vector[(int)uVar7].z = pVVar10->z;
                        piVar15 = &(this->fields).savedCnt;
                        *piVar15 = *piVar15 + 1;
                        fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
                        (this->fields).lastPointCreationTime = fVar12;
                        fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
                        (this->fields).creationTime = fVar12;
                        (this->fields).initialized = 1;
                        goto code_?;
                      }
                      goto code_?;
                    }
                    goto code_?;
                  }
                  goto code_?;
                }
                goto code_?;
              }
              goto code_?;
            }
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
code_?:
      if ((this->fields).printSavedPoints != 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__String);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_u000A);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_Saved_Points_at_time_);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_Index__);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral__u000A);
          LOCK();
          UNLOCK();
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((this->fields).savedCnt == 0) goto code_?;
        pcVar4 = pcRam_?;
        if ((pcRam_? != (code *)0x0) || (pcVar4 = (code *)FUN_?(), pcVar4 != (code *)0x0)) {
          pcRam_? = pcVar4;
          fVar12 = (float)(*pcRam_?)();
          if (cRam_? == '\0') {
            FUN_?();
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          values = (Vector3__Array *)mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
            FUN_?();
          }
          pSVar16 = mscorlib.dll::System::Number::Number_FormatSingle(fVar12,(String *)0x0,(NumberFormatInfo *)values,(MethodInfo *)0x0);
          in_R9 = (Vector3__Array *)0x0;
          pSVar16 = mscorlib.dll::System::String::String_Concat_5(StringLiteral_Saved_Points_at_time_,pSVar16,StringLiteral__u000A,(MethodInfo *)0x0);
          for (; (int)uVar2 < (this->fields).savedCnt; uVar2 = uVar2 + 1) {
            values = (Vector3__Array *)FUN_?(TypeInfo__System__String);
            if (values == (Vector3__Array *)0x0) goto code_?;
            if ((int)values->max_length == 0) goto code_?;
            *(String **)values->vector = pSVar16;
            if (iRam_? != 0) {
              uVar7 = (uint)((ulonglong)values->vector >> 0xc);
              uVar17 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
              do {
                uVar18 = *(ulonglong *)(uVar17 * 8 + 0xADDR);
                puVar19 = (ulonglong *)(uVar17 * 8 + 0xADDR);
                LOCK();
                bVar20 = uVar18 == *puVar19;
                if (bVar20) {
                  *puVar19 = uVar18 | 1L << (uVar7 & 0x3f);
                }
                UNLOCK();
              } while (!bVar20);
            }
            iVar13 = iRam_?;
            if ((uint)values->max_length < 2) goto code_?;
            *(String **)&values->vector[0].z = StringLiteral_Index__;
            if (iVar13 != 0) {
              uVar7 = (uint)((ulonglong)&values->vector[0].z >> 0xc);
              uVar17 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
              do {
                uVar18 = *(ulonglong *)(uVar17 * 8 + 0xADDR);
                puVar19 = (ulonglong *)(uVar17 * 8 + 0xADDR);
                LOCK();
                bVar20 = uVar18 == *puVar19;
                if (bVar20) {
                  *puVar19 = uVar18 | 1L << (uVar7 & 0x3f);
                }
                UNLOCK();
              } while (!bVar20);
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Number);
              LOCK();
              UNLOCK();
              FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 & 1) == 0) {
              FUN_?();
            }
            if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
              FUN_?();
            }
            BStack_21._value = (void *)0x0;
            uStack_22 = (Il2CppRGCTXData *)0x0;
            in_R9 = (Vector3__Array *)0x0;
            pSVar16 = mscorlib.dll::System::Number::Number_FormatInt32(uVar2,(ReadOnlySpan_1_Char_ *)&BStack_21,(IFormatProvider *)0x0,(MethodInfo *)0x0);
            if ((uint)values->max_length < 3) goto code_?;
            *(String **)&values->vector[1].y = pSVar16;
            if (iRam_? != 0) {
              uVar7 = (uint)((ulonglong)&values->vector[1].y >> 0xc);
              uVar17 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
              do {
                uVar18 = *(ulonglong *)(uVar17 * 8 + 0xADDR);
                puVar19 = (ulonglong *)(uVar17 * 8 + 0xADDR);
                LOCK();
                bVar20 = uVar18 == *puVar19;
                if (bVar20) {
                  *puVar19 = uVar18 | 1L << (uVar7 & 0x3f);
                }
                UNLOCK();
              } while (!bVar20);
            }
            iVar13 = iRam_?;
            if ((uint)values->max_length < 4) goto code_?;
            *(String **)(values->vector + 2) = StringLiteral_u0009Pos__;
            if (iVar13 != 0) {
              uVar7 = (uint)((ulonglong)(values->vector + 2) >> 0xc);
              uVar17 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
              do {
                uVar18 = *(ulonglong *)(uVar17 * 8 + 0xADDR);
                puVar19 = (ulonglong *)(uVar17 * 8 + 0xADDR);
                LOCK();
                bVar20 = uVar18 == *puVar19;
                if (bVar20) {
                  *puVar19 = uVar18 | 1L << (uVar7 & 0x3f);
                }
                UNLOCK();
              } while (!bVar20);
            }
            pVVar14 = (this->fields).saved;
            if (pVVar14 == (Vector3__Array *)0x0) goto code_?;
            if ((uint)pVVar14->max_length <= uVar2) goto code_?;
            uStack_23 = *(Il2CppClass **)(pVVar14->vector + (int)uVar2);
            fStack_24 = pVVar14->vector[(int)uVar2].z;
            uVar5 = FUN_?(&uStack_23);
            if ((uint)values->max_length < 5) goto code_?;
            *(undefined8 *)&values->vector[2].z = uVar5;
            if (iRam_? != 0) {
              uVar7 = (uint)((ulonglong)&values->vector[2].z >> 0xc);
              uVar17 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
              do {
                uVar18 = *(ulonglong *)(uVar17 * 8 + 0xADDR);
                puVar19 = (ulonglong *)(uVar17 * 8 + 0xADDR);
                LOCK();
                bVar20 = uVar18 == *puVar19;
                if (bVar20) {
                  *puVar19 = uVar18 | 1L << (uVar7 & 0x3f);
                }
                UNLOCK();
              } while (!bVar20);
            }
            iVar13 = iRam_?;
            if ((uint)values->max_length < 6) goto code_?;
            *(String **)&values->vector[3].y = StringLiteral_u000A;
            if (iVar13 != 0) {
              uVar7 = (uint)((ulonglong)&values->vector[3].y >> 0xc);
              uVar17 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
              do {
                uVar18 = *(ulonglong *)(uVar17 * 8 + 0xADDR);
                puVar19 = (ulonglong *)(uVar17 * 8 + 0xADDR);
                LOCK();
                bVar20 = uVar18 == *puVar19;
                if (bVar20) {
                  *puVar19 = uVar18 | 1L << (uVar7 & 0x3f);
                }
                UNLOCK();
              } while (!bVar20);
            }
            pSVar16 = mscorlib.dll::System::String::String_Concat_7((String__Array *)values,(MethodInfo *)0x0);
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar16,(MethodInfo *)0x0);
          goto code_?;
        }
        goto code_?;
      }
code_?:
      if ((this->fields).printSegmentPoints != 0) {
        TrailArc_printAllPoints(this,(MethodInfo *)0x0);
      }
      fVar12 = (this->fields).creationTime;
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar4 = (code *)FUN_?(), pcVar4 == (code *)0x0)) goto code_?;
      pcRam_? = pcVar4;
      fVar25 = (float)(*pcRam_?)();
      fVar12 = fVar12 - fVar25;
      pfVar26 = &(this->fields).maxLifeTime;
      if (*pfVar26 <= fVar12 && fVar12 != *pfVar26) {
        (this->fields).Emit = 0;
      }
      if ((this->fields).Emit == 0) {
        if (((this->fields).emittingDone != 0) || ((this->fields).pointCnt < 1)) {
code_?:
          (this->fields).emittingDone = 1;
          goto code_?;
        }
        values = (this->fields).saved;
        uVar2 = (this->fields).savedCnt;
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
        if (pTVar8 != (Transform *)0x0) {
          uVar27 = (undefined4)((ulonglong)in_stack_9 >> 0x20);
          pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint_1(&VStack_11,pTVar8,0.0,0.0,(this->fields).pointDistance,(MethodInfo *)0x0);
          if (values != (Vector3__Array *)0x0) {
            if (*(uint *)&values->max_length <= uVar2) goto code_?;
            fVar12 = pVVar10->y;
            values->vector[(int)uVar2].x = pVVar10->x;
            values->vector[(int)uVar2].y = fVar12;
            values->vector[(int)uVar2].z = pVVar10->z;
            values = (this->fields).savedUp;
            uVar2 = (this->fields).savedCnt;
            pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
            if (pTVar8 != (Transform *)0x0) {
              pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up(&VStack_11,pTVar8,(MethodInfo *)0x0);
              if (values != (Vector3__Array *)0x0) {
                if (*(uint *)&values->max_length <= uVar2) goto code_?;
                fVar12 = pVVar10->y;
                values->vector[(int)uVar2].x = pVVar10->x;
                values->vector[(int)uVar2].y = fVar12;
                values->vector[(int)uVar2].z = pVVar10->z;
                iVar13 = (this->fields).savedCnt;
                (this->fields).savedCnt = iVar13 + 1;
                TrailArc_findCoordinates(this,iVar13 + -2,(MethodInfo *)0x0);
                values = (this->fields).saved;
                uVar2 = (this->fields).savedCnt;
                pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
                fVar12 = (this->fields).pointDistance;
                if (pTVar8 != (Transform *)0x0) {
                  fVar12 = fVar12 + fVar12;
                  in_stack_9 = (MethodInfo *)CONCAT44(uVar27,fVar12);
                  pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint_1(&VStack_11,pTVar8,0.0,0.0,fVar12,(MethodInfo *)0x0);
                  if (values != (Vector3__Array *)0x0) {
                    if (*(uint *)&values->max_length <= uVar2) goto code_?;
                    fVar12 = pVVar10->y;
                    values->vector[(int)uVar2].x = pVVar10->x;
                    values->vector[(int)uVar2].y = fVar12;
                    values->vector[(int)uVar2].z = pVVar10->z;
                    values = (this->fields).savedUp;
                    uVar2 = (this->fields).savedCnt;
                    pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
                    if (pTVar8 != (Transform *)0x0) {
                      pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up(&VStack_11,pTVar8,(MethodInfo *)0x0);
                      if (values != (Vector3__Array *)0x0) {
                        if (uVar2 < *(uint *)&values->max_length) {
                          fVar12 = pVVar10->y;
                          values->vector[(int)uVar2].x = pVVar10->x;
                          values->vector[(int)uVar2].y = fVar12;
                          values->vector[(int)uVar2].z = pVVar10->z;
                          iVar13 = (this->fields).savedCnt;
                          (this->fields).savedCnt = iVar13 + 1;
                          TrailArc_findCoordinates(this,iVar13 + -2,(MethodInfo *)0x0);
                          goto code_?;
                        }
                        goto code_?;
                      }
                      goto code_?;
                    }
                    goto code_?;
                  }
                  goto code_?;
                }
                goto code_?;
              }
              goto code_?;
            }
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
code_?:
      if ((this->fields).emittingDone != 0) {
        (this->fields).Emit = 0;
      }
      if ((this->fields).Emit != 0) {
        pVVar14 = (this->fields).saved;
        iVar13 = (this->fields).savedCnt;
        if (pVVar14 != (Vector3__Array *)0x0) {
          if ((uint)pVVar14->max_length <= iVar13 - 1U) goto code_?;
          VStack_11.x = pVVar14->vector[(longlong)iVar13 + -1].x;
          VStack_11.y = pVVar14->vector[(longlong)iVar13 + -1].y;
          VStack_1.z = pVVar14->vector[(longlong)iVar13 + -1].z - 0.0;
          VStack_1.y = VStack_11.y - uStack_6._4_4_;
          VStack_1.x = VStack_11.x - (float)uStack_6;
          fVar12 = VStack_1.x * VStack_1.x + VStack_1.y * VStack_1.y + VStack_1.z * VStack_1.z;
          pfVar26 = &(this->fields).pointSqrDistance;
          if (fVar12 < *pfVar26 || fVar12 == *pfVar26) goto code_?;
          pVVar14 = (this->fields).saved;
          if (pVVar14 != (Vector3__Array *)0x0) {
            if ((int)pVVar14->max_length + -1 < (this->fields).savedCnt) {
              pVVar14 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3);
              (this->fields).saved = pVVar14;
              func_?(&(this->fields).saved);
              if ((this->fields).saved != (Vector3__Array *)0x0) {
                pVVar14 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3);
                (this->fields).savedUp = pVVar14;
                func_?(&(this->fields).savedUp);
                if ((this->fields).saved != (Vector3__Array *)0x0) {
                  pVVar14 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3);
                  (this->fields).points = pVVar14;
                  func_?(&(this->fields).points);
                  in_R9 = (this->fields).points;
                  if (in_R9 != (Vector3__Array *)0x0) {
                    pVVar14 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,(int)in_R9->max_length);
                    (this->fields).pointsUp = pVVar14;
                    func_?(&(this->fields).pointsUp);
                    (this->fields).savedCnt = 0;
                    (this->fields).displayCnt = 0;
                    goto code_?;
                  }
                  goto code_?;
                }
                goto code_?;
              }
              goto code_?;
            }
code_?:
            pVVar14 = (this->fields).saved;
            uVar2 = (this->fields).savedCnt;
            if (pVVar14 != (Vector3__Array *)0x0) {
              if ((uint)pVVar14->max_length <= uVar2) goto code_?;
              pVVar14->vector[(int)uVar2].x = 0.0;
              pVVar14->vector[(int)uVar2].y = 0.0;
              pVVar14->vector[(int)uVar2].z = 0.0;
              values = (this->fields).savedUp;
              uVar2 = (this->fields).savedCnt;
              pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
              if (pTVar8 != (Transform *)0x0) {
                pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up(&VStack_11,pTVar8,(MethodInfo *)0x0);
                if (values != (Vector3__Array *)0x0) {
                  if (uVar2 < *(uint *)&values->max_length) {
                    fVar12 = pVVar10->y;
                    values->vector[(int)uVar2].x = pVVar10->x;
                    values->vector[(int)uVar2].y = fVar12;
                    values->vector[(int)uVar2].z = pVVar10->z;
                    piVar15 = &(this->fields).savedCnt;
                    *piVar15 = *piVar15 + 1;
                    if ((this->fields).averageCreationTime == 0.0) {
                      fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
                      fVar12 = fVar12 - (this->fields).lastPointCreationTime;
                    }
                    else {
                      fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
                      fVar12 = ((fVar12 - (this->fields).lastPointCreationTime) + (this->fields).averageCreationTime) * 0.5;
                    }
                    (this->fields).averageCreationTime = fVar12;
                    (this->fields).averageInsertionTime = (this->fields).averageCreationTime * (this->fields).tRatio;
                    fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
                    (this->fields).lastPointCreationTime = fVar12;
                    if (3 < (this->fields).savedCnt) {
                      TrailArc_findCoordinates(this,(this->fields).savedCnt + -3,(MethodInfo *)0x0);
                    }
                    goto code_?;
                  }
                  goto code_?;
                }
                goto code_?;
              }
              goto code_?;
            }
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
code_?:
      if (((this->fields).Emit == 0) && ((this->fields).displayCnt == (this->fields).pointCnt)) {
        pMVar28 = (this->fields).trailMaterial;
        if (pMVar28 != (Material *)0x0) {
          pCVar29 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor((Color *)auStack_30,pMVar28,StringLiteral__TintColor,(MethodInfo *)0x0);
          BStack_21._value = *(void **)pCVar29;
          uStack_22 = *(_union_154 *)&pCVar29->b;
          fVar12 = (this->fields).fadeOutRatio;
          fVar25 = (this->fields).lifeTimeRatio;
          fVar31 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
          fVar12 = (float)uStack_22._4_4_ - fVar25 * fVar12 * fVar31;
          uStack_22._4_4_ = fVar12;
          if (fVar12 <= 0.0) {
            if ((this->fields).printResults != 0) {
              pSVar16 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&(this->fields).pointCnt,(MethodInfo *)0x0);
              pSVar16 = mscorlib.dll::System::String::String_Concat_4(StringLiteral_Trail_effect_ending_with_a_segme,pSVar16,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_print((Object *)pSVar16,(MethodInfo *)0x0);
            }
            pGVar32 = (this->fields).trail;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pGVar32,(MethodInfo *)0x0);
            pGVar32 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pGVar32,(MethodInfo *)0x0);
            return;
          }
          pMVar28 = (this->fields).trailMaterial;
          if (pMVar28 != (Material *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor(pMVar28,StringLiteral__TintColor,(Color *)&BStack_21,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        goto code_?;
      }
      if ((this->fields).displayCnt < (this->fields).pointCnt) {
        fVar12 = (this->fields).elapsedInsertionTime;
        fVar25 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
        fVar25 = fVar25 + fVar12;
        (this->fields).elapsedInsertionTime = fVar25;
        pfVar26 = &(this->fields).averageInsertionTime;
        if (*pfVar26 <= fVar25 && fVar25 != *pfVar26) {
          fVar12 = (this->fields).averageInsertionTime;
          iVar13 = (this->fields).displayCnt;
          do {
            iVar33 = iVar13 + 1;
            if ((this->fields).pointCnt <= iVar13) {
              iVar33 = iVar13;
            }
            iVar13 = iVar33;
            fVar25 = fVar25 - fVar12;
          } while (fVar12 < fVar25);
          (this->fields).displayCnt = iVar13;
          (this->fields).elapsedInsertionTime = fVar25;
        }
      }
      if ((1 < (this->fields).displayCnt) && ((this->fields).maxPointsDrawn != 1)) {
        this_00 = (this->fields).mRenderer;
        if (this_00 != (Renderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled(this_00,1,(MethodInfo *)0x0);
          (this->fields).lifeTimeRatio = 1.0 / (this->fields).lifetime;
          iVar13 = (this->fields).displayCnt;
          if (((this->fields).maxPointsDrawn < iVar13) && (0 < (this->fields).maxPointsDrawn)) {
            iVar13 = (this->fields).maxPointsDrawn;
          }
          pAVar34 = (Array *)FUN_?(TypeInfo__UnityEngine__Vector3,iVar13 * 2);
          pAVar35 = (Array *)FUN_?(TypeInfo__UnityEngine__Vector2,iVar13 * 2);
          pAStack_36 = pAVar35;
          value = (Int32__Array *)FUN_?(TypeInfo__System__Int32,(iVar13 + -1) * 6);
          pAStack_37 = (Array *)FUN_?(TypeInfo__UnityEngine__Color);
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
          if (this_01 != (Camera *)0x0) {
            values = (Vector3__Array *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this_01,(MethodInfo *)0x0);
            if (values != (Vector3__Array *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pIVar38 = ((NumberFormatInfo__Fields *)&values->bounds)->numberGroupSizes;
              if (pIVar38 != (Int32__Array *)0x0) {
                pcVar4 = pcRam_?;
                if ((pcRam_? == (code *)0x0) && (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) goto code_?;
                pcRam_? = pcVar4;
                (*pcRam_?)(pIVar38);
                fVar12 = 0.0;
                uStack_39 = 0;
                VStack_11.x = 0.0;
                VStack_11.y = 0.0;
                values = (Vector3__Array *)0x0;
                while (iVar33 = (int)values, iVar33 < iVar13) {
                  pVVar14 = (this->fields).points;
                  iVar40 = (this->fields).displayCnt;
                  if (pVVar14 == (Vector3__Array *)0x0) goto code_?;
                  iVar41 = (iVar40 - iVar13) + iVar33;
                  if ((uint)pVVar14->max_length <= (uint)((iVar40 - iVar13) + iVar33)) goto code_?;
                  pIVar42 = *(Il2CppClass **)(pVVar14->vector + iVar41);
                  fVar25 = pVVar14->vector[iVar41].z;
                  fVar31 = (float)iVar33 * (1.0 / (float)(iVar13 + -1));
                  pCVar43 = (this->fields).colors;
                  if (pCVar43 == (Color__Array *)0x0) goto code_?;
                  if (pCVar43->max_length == 0) {
                    auStack_30._0_8_ = (Il2CppMethodPointer)0x3f8000003f800000;
                    auStack_30._8_8_ = (Il2CppMethodPointer)0x3f8000003f800000;
                    pCVar29 = &CStack_44;
code_?:
                    uStack_45._0_4_ = 0.0;
                    uStack_45._4_4_ = 0.0;
                    uStack_46 = (Il2CppGenericMethod *)0x0;
                    a = (Color *)&uStack_46;
                    pCVar47 = (Color *)auStack_30;
code_?:
                    pCVar29 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_Lerp(pCVar29,a,pCVar47,fVar31,in_stack_9);
                    fVar48 = pCVar29->r;
                    fVar49 = pCVar29->g;
                    fVar50 = pCVar29->b;
                    fVar51 = pCVar29->a;
                  }
                  else {
                    if ((int)pCVar43->max_length == 1) {
                      if ((int)pCVar43->max_length != 0) {
                        auStack_30._0_8_ = *(undefined8 *)pCVar43->vector;
                        auStack_30._8_8_ = *(undefined8 *)&pCVar43->vector[0].b;
                        pCVar29 = &CStack_52;
                        goto code_?;
                      }
                      goto code_?;
                    }
                    if ((int)pCVar43->max_length == 2) {
                      if (1 < (uint)pCVar43->max_length) {
                        pCVar53 = (this->fields).colors;
                        if (pCVar53 != (Color__Array *)0x0) {
                          if ((int)pCVar53->max_length != 0) {
                            uStack_46 = *(_union_155 *)pCVar53->vector;
                            uStack_45._0_4_ = pCVar53->vector[0].b;
                            uStack_45._4_4_ = pCVar53->vector[0].a;
                            auStack_30._0_8_ = *(undefined8 *)(pCVar43->vector + 1);
                            auStack_30._8_8_ = *(undefined8 *)&pCVar43->vector[1].b;
                            pCVar47 = (Color *)&uStack_46;
                            a = (Color *)auStack_30;
                            pCVar29 = &CStack_54;
                            goto code_?;
                          }
                          goto code_?;
                        }
                        goto code_?;
                      }
                      goto code_?;
                    }
                    fVar51 = (float)((int)pCVar43->max_length + -1) - (float)((int)pCVar43->max_length + -1) * fVar31;
                    if (fVar51 == (float)((int)pCVar43->max_length + -1)) {
                      if (pCVar43 == (Color__Array *)0x0) goto code_?;
                      iVar40 = (int)pCVar43->max_length;
                      if ((uint)pCVar43->max_length <= iVar40 - 1U) goto code_?;
                      pCVar29 = pCVar43->vector + (longlong)iVar40 + -1;
                      fVar48 = pCVar29->r;
                      fVar49 = pCVar29->g;
                      fVar50 = pCVar29->b;
                      fVar51 = pCVar29->a;
                    }
                    else {
                      fVar48 = (float)func_?();
                      uVar2 = (uint)fVar48;
                      fVar51 = fVar51 - (float)(int)uVar2;
                      if ((uint)pCVar43->max_length <= uVar2) goto code_?;
                      pCVar53 = (this->fields).colors;
                      if (pCVar53 == (Color__Array *)0x0) goto code_?;
                      if ((uint)pCVar53->max_length <= uVar2 + 1) goto code_?;
                      pCVar29 = pCVar53->vector + (longlong)(int)uVar2 + 1;
                      pCVar47 = pCVar43->vector + (int)uVar2;
                      if (fVar51 < 0.0) {
                        fVar51 = 0.0;
                      }
                      else if (1.0 < fVar51) {
                        fVar51 = 1.0;
                      }
                      fVar48 = (pCVar29->r - pCVar47->r) * fVar51 + pCVar47->r;
                      fVar49 = (pCVar29->g - pCVar47->g) * fVar51 + pCVar47->g;
                      fVar50 = (pCVar29->b - pCVar47->b) * fVar51 + pCVar47->b;
                      fVar51 = (pCVar29->a - pCVar47->a) * fVar51 + pCVar47->a;
                      uStack_46._4_4_ = fVar49;
                      uStack_46._0_4_ = fVar48;
                      uStack_45._4_4_ = fVar51;
                      uStack_45._0_4_ = fVar50;
                    }
                  }
                  if (pAStack_37 == (Array *)0x0) goto code_?;
                  if (*(uint *)&pAStack_37[1].monitor <= (uint)(iVar33 * 2)) goto code_?;
                  pAVar35 = pAStack_37 + (longlong)(iVar33 * 2) + 2;
                  *(float *)&pAVar35->klass = fVar48;
                  *(float *)((longlong)&pAVar35->klass + 4) = fVar49;
                  *(float *)&pAVar35->monitor = fVar50;
                  *(float *)((longlong)&pAVar35->monitor + 4) = fVar51;
                  if (*(uint *)&pAStack_37[1].monitor <= iVar33 * 2 + 1U) goto code_?;
                  pAVar35 = pAStack_37 + (longlong)(iVar33 * 2) + 3;
                  *(float *)&pAVar35->klass = fVar48;
                  *(float *)((longlong)&pAVar35->klass + 4) = fVar49;
                  *(float *)&pAVar35->monitor = fVar50;
                  *(float *)((longlong)&pAVar35->monitor + 4) = fVar51;
                  pSVar55 = (this->fields).widths;
                  if (pSVar55 == (Single__Array *)0x0) goto code_?;
                  if (pSVar55->max_length == 0) {
                    fVar48 = 1.0;
                  }
                  else if ((int)pSVar55->max_length == 1) {
                    if ((int)pSVar55->max_length == 0) goto code_?;
                    fVar48 = pSVar55->vector[0];
                  }
                  else if ((int)pSVar55->max_length == 2) {
                    if ((uint)pSVar55->max_length < 2) goto code_?;
                    pSVar56 = (this->fields).widths;
                    if (pSVar56 == (Single__Array *)0x0) goto code_?;
                    if ((int)pSVar56->max_length == 0) goto code_?;
                    fVar48 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp(pSVar55->vector[1],pSVar56->vector[0],fVar31,(MethodInfo *)in_R9);
                  }
                  else {
                    fVar48 = (float)((int)pSVar55->max_length + -1) - (float)((int)pSVar55->max_length + -1) * fVar31;
                    if (fVar48 == (float)((int)pSVar55->max_length + -1)) {
                      if (pSVar55 == (Single__Array *)0x0) goto code_?;
                      iVar40 = (int)pSVar55->max_length;
                      if ((uint)pSVar55->max_length <= iVar40 - 1U) goto code_?;
                      fVar48 = pSVar55->vector[(longlong)iVar40 + -1];
                    }
                    else {
                      fVar49 = (float)func_?();
                      uVar2 = (uint)fVar49;
                      if ((uint)pSVar55->max_length <= uVar2) goto code_?;
                      pSVar56 = (this->fields).widths;
                      if (pSVar56 == (Single__Array *)0x0) goto code_?;
                      if ((uint)pSVar56->max_length <= uVar2 + 1) goto code_?;
                      fVar48 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp(pSVar55->vector[(int)uVar2],pSVar56->vector[(longlong)(int)uVar2 + 1],fVar48 - (float)(int)uVar2,(MethodInfo *)in_R9);
                    }
                  }
                  fStack_57 = SUB84(pIVar42,0);
                  fStack_58 = (float)((ulonglong)pIVar42 >> 0x20);
                  if ((this->fields).faceCamera == 0) {
                    if ((this->fields).twist == 0) {
                      pVVar14 = (this->fields).pointsUp;
                      iVar40 = (this->fields).displayCnt;
                      if (pVVar14 == (Vector3__Array *)0x0) goto code_?;
                      iVar41 = (iVar40 - iVar13) + iVar33;
                      if ((uint)pVVar14->max_length <= (uint)((iVar40 - iVar13) + iVar33)) goto code_?;
                      uStack_46 = *(_union_155 *)(pVVar14->vector + iVar41);
                      fVar49 = pVVar14->vector[iVar41].z;
                      if (pAVar34 == (Array *)0x0) goto code_?;
                      if (*(uint *)&pAVar34[1].monitor <= (uint)(iVar33 * 2)) goto code_?;
                      *(ulonglong *)((longlong)&pAVar34[2].klass + (longlong)(iVar33 * 2) * 0xc) = CONCAT44(uStack_46._4_4_ * fVar48 * 0.5 + fStack_58,(float)uStack_46 * fVar48 * 0.5 + fStack_57);
                      *(float *)((longlong)&pAVar34[2].monitor + (longlong)(iVar33 * 2) * 0xc) = fVar49 * fVar48 * 0.5 + fVar25;
                      pVVar14 = (this->fields).pointsUp;
                      iVar40 = (this->fields).displayCnt;
                      if (pVVar14 == (Vector3__Array *)0x0) goto code_?;
                      iVar41 = (iVar40 - iVar13) + iVar33;
                      if ((uint)pVVar14->max_length <= (uint)((iVar40 - iVar13) + iVar33)) goto code_?;
                      uStack_46 = *(_union_155 *)(pVVar14->vector + iVar41);
                      fVar51 = (float)uStack_46;
                      fVar59 = uStack_46._4_4_;
                      fVar49 = pVVar14->vector[iVar41].z;
                      if (*(uint *)&pAVar34[1].monitor <= iVar33 * 2 + 1U) goto code_?;
                    }
                    else {
                      fVar49 = (this->fields).time;
                      fVar50 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
                      (this->fields).time = fVar49 + fVar50;
                      if (iVar33 == iVar13 + -1) {
                        method_00 = (this->fields).points;
                        iVar40 = (this->fields).displayCnt;
                        if (method_00 == (Vector3__Array *)0x0) goto code_?;
                        lVar60 = (longlong)((iVar40 - iVar13) + iVar33);
                        if ((uint)method_00->max_length <= (uint)((iVar40 - iVar13) + -1 + iVar33)) goto code_?;
                        VStack_61.z = fVar25;
                        fVar49 = method_00->vector[lVar60 + -1].z;
                        uStack_62 = pIVar42;
                        uStack_63 = *(Il2CppClass **)(method_00->vector + lVar60 + -1);
                      }
                      else {
                        pVVar14 = (this->fields).points;
                        iVar40 = (this->fields).displayCnt;
                        uStack_63 = pIVar42;
                        if (pVVar14 == (Vector3__Array *)0x0) goto code_?;
                        lVar60 = (longlong)((iVar40 - iVar13) + iVar33);
                        uVar2 = iVar40 - iVar13;
                        method_00 = (Vector3__Array *)(ulonglong)uVar2;
                        if ((uint)pVVar14->max_length <= uVar2 + 1 + iVar33) goto code_?;
                        uStack_62 = *(Il2CppClass **)(pVVar14->vector + lVar60 + 1);
                        VStack_61.z = pVVar14->vector[lVar60 + 1].z;
                        fVar49 = fVar25;
                      }
                      VStack_61.x = (float)uStack_62 - (float)uStack_63;
                      VStack_61.z = VStack_61.z - fVar49;
                      VStack_61.y = uStack_62._4_4_ - uStack_63._4_4_;
                      fVar49 = (float)FUN_?();
                      pQVar64 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis(aQStack_65,fVar49,&VStack_61,(MethodInfo *)0x0);
                      pIVar66 = *(Il2CppMethodPointer *)pQVar64;
                      pIVar67 = *(Il2CppMethodPointer *)&pQVar64->z;
                      pVVar10 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelUp(&VStack_68,(MethodInfo *)method_00);
                      VStack_69.x = pVVar10->x;
                      VStack_69.y = pVVar10->y;
                      VStack_69.z = pVVar10->z;
                      in_R9 = (Vector3__Array *)0x0;
                      pMVar70 = (MethodInfo *)auStack_30;
                      auStack_30._0_8_ = pIVar66;
                      auStack_30._8_8_ = pIVar67;
                      UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1(&VStack_71,(Quaternion *)pMVar70,&VStack_69,(MethodInfo *)0x0);
                      p_Var30 = (_union_155 *)RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelUp(&VStack_72,pMVar70);
                      uStack_46 = *p_Var30;
                      fVar49 = *(float *)(p_Var30 + 1);
                      fVar51 = (float)uStack_46;
                      fVar59 = uStack_46._4_4_;
                      fVar50 = *(float *)(p_Var30 + 1);
                      _Stack_158 = uStack_46;
                      if (pAVar34 == (Array *)0x0) goto code_?;
                      if (*(uint *)&pAVar34[1].monitor <= (uint)(iVar33 * 2)) goto code_?;
                      *(ulonglong *)((longlong)&pAVar34[2].klass + (longlong)(iVar33 * 2) * 0xc) = CONCAT44(fVar59 * fVar48 * 0.5 + fStack_58,fVar51 * fVar48 * 0.5 + fStack_57);
                      *(float *)((longlong)&pAVar34[2].monitor + (longlong)(iVar33 * 2) * 0xc) = fVar50 * fVar48 * 0.5 + fVar25;
                      if (*(uint *)&pAVar34[1].monitor <= iVar33 * 2 + 1U) goto code_?;
                    }
                    *(ulonglong *)((longlong)&pAVar34[2].monitor + (longlong)(iVar33 * 2) * 0xc + 4) = CONCAT44(fStack_58 - fVar59 * fVar48 * 0.5,fStack_57 - fVar51 * fVar48 * 0.5);
                    *(float *)((longlong)&pAVar34[3].klass + (longlong)(iVar33 * 2) * 0xc + 4) = fVar25 - fVar49 * fVar48 * 0.5;
                  }
                  else {
                    if (iVar33 == iVar13 + -1) {
                      pVVar14 = (this->fields).points;
                      iVar40 = (this->fields).displayCnt;
                      if (pVVar14 == (Vector3__Array *)0x0) goto code_?;
                      lVar60 = (longlong)((iVar40 - iVar13) + iVar33);
                      pMVar70 = (MethodInfo *)(lVar60 + -1);
                      if ((uint)pVVar14->max_length <= (uint)((iVar40 - iVar13) + -1 + iVar33)) goto code_?;
                      fVar49 = fVar25;
                      fVar50 = pVVar14->vector[lVar60 + -1].z;
                      uStack_6 = pIVar42;
                      uStack_23 = *(Il2CppClass **)(pVVar14->vector + lVar60 + -1);
                    }
                    else {
                      pVVar14 = (this->fields).points;
                      iVar40 = (this->fields).displayCnt;
                      uStack_23 = pIVar42;
                      if (pVVar14 == (Vector3__Array *)0x0) goto code_?;
                      lVar60 = (longlong)((iVar40 - iVar13) + iVar33);
                      pMVar70 = (MethodInfo *)(lVar60 + 1);
                      if ((uint)pVVar14->max_length <= (uint)((iVar40 - iVar13) + 1 + iVar33)) goto code_?;
                      uStack_6 = *(Il2CppClass **)(pVVar14->vector + lVar60 + 1);
                      fVar49 = pVVar14->vector[lVar60 + 1].z;
                      fVar50 = fVar25;
                    }
                    in_R9 = (Vector3__Array *)(ulonglong)(uint)fVar50;
                    VStack_1.y = (VStack_11.x - fStack_57) * (fVar49 - fVar50) - (0.0 - fVar25) * ((float)uStack_6 - (float)uStack_23);
                    VStack_1.x = (0.0 - fVar25) * (uStack_6._4_4_ - uStack_23._4_4_) - (fVar12 - fStack_58) * (fVar49 - fVar50);
                    VStack_1.z = (fVar12 - fStack_58) * ((float)uStack_6 - (float)uStack_23) - (VStack_11.x - fStack_57) * (uStack_6._4_4_ - uStack_23._4_4_);
                    p_Var30 = (_union_155 *)UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized((Vector3 *)&BStack_21,&VStack_1,pMVar70);
                    uStack_46 = *p_Var30;
                    fVar49 = *(float *)(p_Var30 + 1);
                    fVar12 = *(float *)(p_Var30 + 1);
                    _Stack_1d8 = uStack_46;
                    if (pAVar34 == (Array *)0x0) goto code_?;
                    if (*(uint *)&pAVar34[1].monitor <= (uint)(iVar33 * 2)) goto code_?;
                    *(ulonglong *)((longlong)&pAVar34[2].klass + (longlong)(iVar33 * 2) * 0xc) = CONCAT44(uStack_46._4_4_ * fVar48 * 0.5 + fStack_58,(float)uStack_46 * fVar48 * 0.5 + fStack_57);
                    *(float *)((longlong)&pAVar34[2].monitor + (longlong)(iVar33 * 2) * 0xc) = fVar12 * fVar48 * 0.5 + fVar25;
                    if (*(uint *)&pAVar34[1].monitor <= iVar33 * 2 + 1U) goto code_?;
                    *(ulonglong *)((longlong)&pAVar34[2].monitor + (longlong)(iVar33 * 2) * 0xc + 4) = CONCAT44(fStack_58 - uStack_46._4_4_ * fVar48 * 0.5,fStack_57 - (float)uStack_46 * fVar48 * 0.5);
                    *(float *)((longlong)&pAVar34[3].klass + (longlong)(iVar33 * 2) * 0xc + 4) = fVar25 - fVar49 * fVar48 * 0.5;
                    fVar12 = (float)uStack_39;
                  }
                  if (pAStack_36 == (Array *)0x0) goto code_?;
                  if (*(uint *)&pAStack_36[1].monitor <= (uint)(iVar33 * 2)) goto code_?;
                  *(float *)(&pAStack_36[2].klass + iVar33 * 2) = fVar31;
                  *(undefined4 *)((longlong)&pAStack_36[2].klass + (longlong)(iVar33 * 2) * 8 + 4) = 0;
                  if (*(uint *)&pAStack_36[1].monitor <= iVar33 * 2 + 1U) goto code_?;
                  *(float *)(&pAStack_36[2].monitor + iVar33 * 2) = fVar31;
                  *(undefined4 *)((longlong)&pAStack_36[2].monitor + (longlong)(iVar33 * 2) * 8 + 4) = 0x3f800000;
                  if (0 < iVar33) {
                    uVar2 = iVar33 * 6;
                    in_R9 = (Vector3__Array *)(ulonglong)uVar2;
                    uVar7 = uVar2 - 6;
                    iVar40 = iVar33 * 2;
                    if (value == (Int32__Array *)0x0) goto code_?;
                    if ((uint)value->max_length <= uVar7) goto code_?;
                    value->vector[(longlong)(int)uVar2 + -6] = iVar40 + -2;
                    if ((uint)value->max_length <= uVar2 - 5) goto code_?;
                    value->vector[(longlong)(int)uVar2 + -5] = iVar40 + -1;
                    if ((uint)value->max_length <= uVar2 - 4) goto code_?;
                    value->vector[(longlong)(int)uVar7 + 2] = iVar40;
                    if ((uint)value->max_length <= uVar2 - 3) goto code_?;
                    value->vector[(longlong)(int)uVar7 + 3] = iVar40;
                    if ((uint)value->max_length <= uVar2 - 2) goto code_?;
                    value->vector[(longlong)(int)uVar7 + 4] = iVar40 + -1;
                    if ((uint)value->max_length <= uVar2 - 1) goto code_?;
                    value->vector[(longlong)(int)uVar7 + 5] = iVar40 + 1;
                  }
                  pAVar35 = pAStack_36;
                  values = (Vector3__Array *)(ulonglong)(iVar33 + 1);
                }
                pGVar32 = (this->fields).trail;
                if (pGVar32 != (GameObject *)0x0) {
                  values = (Vector3__Array *)UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar32,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Vector3);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (values != (Vector3__Array *)0x0) {
                    _Stack_1d8 = *(_union_155 *)TypeInfo__UnityEngine__Vector3->static_fields;
                    fStack_73 = *(float *)((_union_155 *)TypeInfo__UnityEngine__Vector3->static_fields + 1);
                    if (cRam_? == '\0') {
                      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pIVar38 = ((NumberFormatInfo__Fields *)&values->bounds)->numberGroupSizes;
                    if (pIVar38 != (Int32__Array *)0x0) {
                      pcVar4 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) && (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) goto code_?;
                      pcRam_? = pcVar4;
                      (*pcRam_?)(pIVar38);
                      pGVar32 = (this->fields).trail;
                      if (pGVar32 != (GameObject *)0x0) {
                        values = (Vector3__Array *)UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar32,(MethodInfo *)0x0);
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__UnityEngine__Quaternion);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        if (values != (Vector3__Array *)0x0) {
                          auStack_30._0_8_ = *(undefined8 *)&TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion;
                          auStack_30._8_8_ = *(undefined8 *)&(TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion).z;
                          if (cRam_? == '\0') {
                            FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pIVar38 = ((NumberFormatInfo__Fields *)&values->bounds)->numberGroupSizes;
                          if (pIVar38 != (Int32__Array *)0x0) {
                            pcVar4 = pcRam_?;
                            if ((pcRam_? == (code *)0x0) && (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) goto code_?;
                            pcRam_? = pcVar4;
                            (*pcRam_?)(pIVar38);
                            values = (Vector3__Array *)(this->fields).mesh;
                            if (values != (Vector3__Array *)0x0) {
                              if (cRam_? == '\0') {
                                FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Mesh>_UnityEngine__Mesh_);
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              pvVar74 = (((Component__Fields *)&((NumberFormatInfo__Fields *)&values->bounds)->numberGroupSizes)->_).m_CachedPtr;
                              if (pvVar74 != (void *)0x0) {
                                pcVar4 = pcRam_?;
                                if ((pcRam_? == (code *)0x0) && (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) goto code_?;
                                pcRam_? = pcVar4;
                                (*pcRam_?)(pvVar74);
                                pMVar75 = (this->fields).mesh;
                                values = (Vector3__Array *)0x0;
                                if (pMVar75 != (Mesh *)0x0) {
                                  if (cRam_? == '\0') {
                                    FUN_?(&void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_);
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  if (pAVar34 == (Array *)0x0) {
                                    iVar76 = 0;
                                  }
                                  else {
                                    iVar76 = mscorlib.dll::System::Array::Array_get_Length(pAVar34,(MethodInfo *)0x0);
                                  }
                                  valuesArrayLength = 0;
                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel(pMVar75,VertexAttribute__Enum_Position,VertexAttributeFormat__Enum_Float32,3,pAVar34,iVar76,0,iVar76,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                                  pMVar75 = (this->fields).mesh;
                                  values = (Vector3__Array *)0x0;
                                  if (pMVar75 != (Mesh *)0x0) {
                                    if (cRam_? == '\0') {
                                      FUN_?(&void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Color>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Color_____UnityEngine__Rendering__MeshUpdateFlags_);
                                      LOCK();
                                      UNLOCK();
                                      cRam_? = '\x01';
                                    }
                                    pAVar34 = pAStack_37;
                                    iVar76 = valuesArrayLength;
                                    if (pAStack_37 != (Array *)0x0) {
                                      iVar76 = mscorlib.dll::System::Array::Array_get_Length(pAStack_37,(MethodInfo *)0x0);
                                    }
                                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel(pMVar75,VertexAttribute__Enum_Color,VertexAttributeFormat__Enum_Float32,4,pAVar34,iVar76,0,iVar76,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                                    values = (Vector3__Array *)(this->fields).mesh;
                                    if (values != (Vector3__Array *)0x0) {
                                      if (cRam_? == '\0') {
                                        FUN_?(&void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector2>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector2_____UnityEngine__Rendering__MeshUpdateFlags_);
                                        LOCK();
                                        UNLOCK();
                                        cRam_? = '\x01';
                                      }
                                      if (pAVar35 != (Array *)0x0) {
                                        valuesArrayLength = mscorlib.dll::System::Array::Array_get_Length(pAVar35,(MethodInfo *)0x0);
                                      }
                                      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel((Mesh *)values,VertexAttribute__Enum_TexCoord0,VertexAttributeFormat__Enum_Float32,2,pAVar35,valuesArrayLength,0,valuesArrayLength,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                                      pMVar75 = (this->fields).mesh;
                                      if (pMVar75 != (Mesh *)0x0) {
                                        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles(pMVar75,value,(MethodInfo *)0x0);
                                        return;
                                      }
                                      goto code_?;
                                    }
                                    goto code_?;
                                  }
                                  goto code_?;
                                }
                                goto code_?;
                              }
                              goto code_?;
                            }
                            goto code_?;
                          }
                          goto code_?;
                        }
                        goto code_?;
                      }
                      goto code_?;
                    }
                    goto code_?;
                  }
                  goto code_?;
                }
                goto code_?;
              }
              goto code_?;
            }
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
      this = (TrailArc *)(this->fields).mRenderer;
      if (this != (TrailArc *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        values = (this->fields)._._._._.m_CachedPtr;
        if (values != (Vector3__Array *)0x0) {
          pcVar4 = pcRam_?;
          if ((pcRam_? != (code *)0x0) || (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 != (code *)0x0)) {
            pcRam_? = pcVar4;
            (*pcRam_?)(values,0);
            return;
          }
          goto code_?;
        }
        goto code_?;
      }
    }
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)values,(MethodInfo *)0x0);
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* TrailArc() */

void Assembly-CSharp.dll::TrailArc::TrailArc__ctor(TrailArc *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).Emit = 1;
  (this->fields).pointsStored = 0x3c;
  (this->fields).minVel = 10.0;
  (this->fields).faceCamera = 1;
  (this->fields).twist = 1;
  (this->fields).lifetime = 1.0;
  (this->fields).lifeTimeRatio = 1.0;
  (this->fields).pointDistance = 0.5;
  (this->fields).segmentsPerPoint = 4;
  (this->fields).maxLifeTime = 5.0;
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
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2));
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
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
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
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
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
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
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
                while (pcVar16 = (char *)((longlong)ppMVar15 + 0xADDR), ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1), *pcVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
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
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_17 = 0;
    uStack_18 = 0;
    uStack_19 = 0xf;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar17 = &pppppppuStack_78;
    if (0xf < uStack_19) {
      pppppppuVar17 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar17);
    if (uStack_19 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      uStack_18 = 0;
      uStack_19 = 0xf;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar17 = apppppppuStack_58;
      if (0xf < uStack_20) {
        pppppppuVar17 = apppppppuStack_58[0];
      }
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar17);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar21 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar22 = *puVar21;
            LOCK();
            uVar23 = *puVar21;
            if (uVar22 == uVar23) {
              *puVar21 = uVar22 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar22 != uVar23);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_20) {
        pppppppuVar17 = apppppppuStack_58[0];
        if ((0xfff < uStack_20 + 1) && (pppppppuVar17 = (undefined8 *******)apppppppuStack_58[0][-1], 0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar17)))) goto code_?;
        func_?(pppppppuVar17);
      }
      goto code_?;
    }
    pppppppuVar17 = pppppppuStack_78;
    if ((uStack_19 + 1 < 0x1000) || (pppppppuVar17 = (undefined8 *******)pppppppuStack_78[-1], (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar17)) < 0x20)) {
      func_?(pppppppuVar17);
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar24._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar24._4_4_ = (pOVar2->_1).cctor_started;
  uVar24 = FUN_?(uVar24);
  FUN_?(uVar24,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Void findCoordinates(Int32) */

void Assembly-CSharp.dll::TrailArc::TrailArc_findCoordinates(TrailArc *this,int32_t index,MethodInfo *method)

{
  if ((index == 0) || ((this->fields).savedCnt + -2 <= index)) {
    return;
  }
  pVVar1 = (this->fields).saved;
  if (pVVar1 == (Vector3__Array *)0x0) {
DAT_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((index - 1U < (uint)pVVar1->max_length) && ((uint)index < (uint)pVVar1->max_length)) {
    uVar3 = pVVar1->vector[index].x;
    uVar4 = pVVar1->vector[index].y;
    fVar5 = pVVar1->vector[index].z;
    if (pVVar1 == (Vector3__Array *)0x0) goto DAT_?;
    if (index + 1U < (uint)pVVar1->max_length) {
      uVar6 = pVVar1->vector[(longlong)index + 1].x;
      uVar7 = pVVar1->vector[(longlong)index + 1].y;
      fVar8 = pVVar1->vector[(longlong)index + 1].z;
      if (pVVar1 == (Vector3__Array *)0x0) goto DAT_?;
      if (index + 2U < (uint)pVVar1->max_length) {
        uVar9 = pVVar1->vector[(longlong)index + -1].x;
        uVar10 = pVVar1->vector[(longlong)index + -1].y;
        fVar11 = pVVar1->vector[(longlong)index + 1].z;
        fVar12 = pVVar1->vector[(longlong)index + -1].z;
        uVar13 = pVVar1->vector[index].x;
        uVar14 = pVVar1->vector[index].y;
        uVar15 = pVVar1->vector[(longlong)index + 2].x;
        uVar16 = pVVar1->vector[(longlong)index + 2].y;
        fVar17 = pVVar1->vector[(longlong)index + 2].z;
        fVar18 = pVVar1->vector[index].z;
        iVar19 = index * (this->fields).segmentsPerPoint;
        if (iVar19 < (this->fields).segmentsPerPoint + iVar19) {
          iVar20 = iVar19;
          do {
            pVVar1 = (this->fields).points;
            uVar21 = iVar20 - (this->fields).segmentsPerPoint;
            fVar22 = (float)(iVar20 - iVar19) * (this->fields).tRatio;
            fVar23 = fVar22 * fVar22;
            fVar24 = fVar23 * fVar22;
            fVar25 = ((fVar24 + fVar24) - fVar23 * 3.0) + 1.0;
            fVar26 = fVar23 * 3.0 - (fVar24 + fVar24);
            fVar27 = (fVar24 - (fVar23 + fVar23)) + fVar22;
            fVar24 = fVar24 - fVar23;
            if (pVVar1 == (Vector3__Array *)0x0) goto DAT_?;
            if ((uint)pVVar1->max_length <= uVar21) goto code_?;
            pVVar1->vector[(int)uVar21].x = fVar26 * (float)uVar6 + fVar25 * (float)uVar3 + fVar27 * ((float)uVar6 - (float)uVar9) * 0.5 + ((float)uVar15 - (float)uVar13) * 0.5 * fVar24;
            pVVar1->vector[(int)uVar21].y = fVar26 * (float)uVar7 + fVar25 * (float)uVar4 + fVar27 * ((float)uVar7 - (float)uVar10) * 0.5 + ((float)uVar16 - (float)uVar14) * 0.5 * fVar24;
            pVVar1->vector[(int)uVar21].z = fVar26 * fVar8 + fVar25 * fVar5 + fVar27 * (fVar11 - fVar12) * 0.5 + (fVar17 - fVar18) * 0.5 * fVar24;
            pVVar1 = (this->fields).savedUp;
            pVVar28 = (this->fields).pointsUp;
            if (pVVar1 == (Vector3__Array *)0x0) goto DAT_?;
            if (((uint)pVVar1->max_length <= (uint)index) || ((uint)pVVar1->max_length <= index + 1U)) goto code_?;
            uVar29 = pVVar1->vector[(longlong)index + 1].x;
            uVar30 = pVVar1->vector[(longlong)index + 1].y;
            uVar31 = pVVar1->vector[index].x;
            uVar32 = pVVar1->vector[index].y;
            if (fVar22 < 0.0) {
              fVar22 = 0.0;
            }
            else if (1.0 < fVar22) {
              fVar22 = 1.0;
            }
            fVar23 = pVVar1->vector[(longlong)index + 1].z;
            fVar27 = pVVar1->vector[index].z;
            fVar25 = pVVar1->vector[index].z;
            if (pVVar28 == (Vector3__Array *)0x0) goto DAT_?;
            if ((uint)pVVar28->max_length <= uVar21) goto code_?;
            iVar20 = iVar20 + 1;
            pVVar28->vector[(int)uVar21].x = ((float)uVar29 - (float)uVar31) * fVar22 + (float)uVar31;
            pVVar28->vector[(int)uVar21].y = ((float)uVar30 - (float)uVar32) * fVar22 + (float)uVar32;
            pVVar28->vector[(int)uVar21].z = (fVar23 - fVar27) * fVar22 + fVar25;
          } while (iVar20 < (this->fields).segmentsPerPoint + iVar19);
        }
        (this->fields).pointCnt = iVar19;
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void printAllPoints() */

void Assembly-CSharp.dll::TrailArc::TrailArc_printAllPoints(TrailArc *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Index__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Points_at_time_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__u000A);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).pointCnt != 0) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    value_00 = (float)(*pcRam_?)();
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar3 = mscorlib.dll::System::Number::Number_FormatSingle(value_00,(String *)0x0,info,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_5(StringLiteral_Points_at_time_,pSVar3,StringLiteral__u000A,(MethodInfo *)0x0);
    value = 0;
    if (0 < (this->fields).pointCnt) {
      lVar4 = 0;
      do {
        values = (String__Array *)FUN_?(TypeInfo__System__String,6);
        iVar5 = iRam_?;
        if (values == (String__Array *)0x0) {
DAT_?:
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((int)values->max_length == 0) {
DAT_?:
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        values->vector[0] = pSVar3;
        if (iVar5 != 0) {
          uVar6 = (uint)((ulonglong)values->vector >> 0xc);
          uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
            iVar5 = iRam_?;
          } while (!bVar10);
        }
        if ((uint)values->max_length < 2) goto DAT_?;
        values->vector[1] = StringLiteral_Index__;
        if (iVar5 != 0) {
          uVar6 = (uint)((ulonglong)(values->vector + 1) >> 0xc);
          uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Number);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 & 1) == 0) {
          FUN_?();
        }
        if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
          FUN_?();
        }
        aRStack_11[0]._pointer._value = (void *)0x0;
        aRStack_11[0]._length = 0;
        aRStack_11[0]._12_4_ = 0;
        pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32(value,aRStack_11,(IFormatProvider *)0x0,(MethodInfo *)0x0);
        iVar5 = iRam_?;
        if ((uint)values->max_length < 3) goto DAT_?;
        values->vector[2] = pSVar3;
        if (iVar5 != 0) {
          uVar6 = (uint)((ulonglong)(values->vector + 2) >> 0xc);
          uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
            iVar5 = iRam_?;
          } while (!bVar10);
        }
        if ((uint)values->max_length < 4) goto DAT_?;
        values->vector[3] = StringLiteral_u0009Pos__;
        if (iVar5 != 0) {
          uVar6 = (uint)((ulonglong)(values->vector + 3) >> 0xc);
          uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        pVVar12 = (this->fields).points;
        if (pVVar12 == (Vector3__Array *)0x0) goto DAT_?;
        if ((uint)pVVar12->max_length <= value) goto DAT_?;
        uStack_13 = *(undefined8 *)((longlong)&pVVar12->vector[0].x + lVar4);
        uStack_14 = *(undefined4 *)((longlong)&pVVar12->vector[0].z + lVar4);
        pSVar3 = (String *)FUN_?(&uStack_13);
        iVar5 = iRam_?;
        if ((uint)values->max_length < 5) goto DAT_?;
        values->vector[4] = pSVar3;
        if (iVar5 != 0) {
          uVar6 = (uint)((ulonglong)(values->vector + 4) >> 0xc);
          uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
            iVar5 = iRam_?;
          } while (!bVar10);
        }
        if ((uint)values->max_length < 6) goto DAT_?;
        values->vector[5] = StringLiteral_u000A;
        if (iVar5 != 0) {
          uVar6 = (uint)((ulonglong)(values->vector + 5) >> 0xc);
          uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        pSVar3 = mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
        value = value + 1;
        lVar4 = lVar4 + 0xc;
      } while ((int)value < (this->fields).pointCnt);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
  }
  return;
}


/* Void printPoints() */

void Assembly-CSharp.dll::TrailArc::TrailArc_printPoints(TrailArc *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Saved_Points_at_time_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Index__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__u000A);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).savedCnt != 0) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    value_00 = (float)(*pcRam_?)();
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar3 = mscorlib.dll::System::Number::Number_FormatSingle(value_00,(String *)0x0,info,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_5(StringLiteral_Saved_Points_at_time_,pSVar3,StringLiteral__u000A,(MethodInfo *)0x0);
    value = 0;
    if (0 < (this->fields).savedCnt) {
      lVar4 = 0;
      do {
        values = (String__Array *)FUN_?(TypeInfo__System__String,6);
        iVar5 = iRam_?;
        if (values == (String__Array *)0x0) {
DAT_?:
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((int)values->max_length == 0) {
DAT_?:
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        values->vector[0] = pSVar3;
        if (iVar5 != 0) {
          uVar6 = (uint)((ulonglong)values->vector >> 0xc);
          uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
            iVar5 = iRam_?;
          } while (!bVar10);
        }
        if ((uint)values->max_length < 2) goto DAT_?;
        values->vector[1] = StringLiteral_Index__;
        if (iVar5 != 0) {
          uVar6 = (uint)((ulonglong)(values->vector + 1) >> 0xc);
          uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Number);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 & 1) == 0) {
          FUN_?();
        }
        if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
          FUN_?();
        }
        aRStack_11[0]._pointer._value = (void *)0x0;
        aRStack_11[0]._length = 0;
        aRStack_11[0]._12_4_ = 0;
        pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32(value,aRStack_11,(IFormatProvider *)0x0,(MethodInfo *)0x0);
        iVar5 = iRam_?;
        if ((uint)values->max_length < 3) goto DAT_?;
        values->vector[2] = pSVar3;
        if (iVar5 != 0) {
          uVar6 = (uint)((ulonglong)(values->vector + 2) >> 0xc);
          uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
            iVar5 = iRam_?;
          } while (!bVar10);
        }
        if ((uint)values->max_length < 4) goto DAT_?;
        values->vector[3] = StringLiteral_u0009Pos__;
        if (iVar5 != 0) {
          uVar6 = (uint)((ulonglong)(values->vector + 3) >> 0xc);
          uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        pVVar12 = (this->fields).saved;
        if (pVVar12 == (Vector3__Array *)0x0) goto DAT_?;
        if ((uint)pVVar12->max_length <= value) goto DAT_?;
        uStack_13 = *(undefined8 *)((longlong)&pVVar12->vector[0].x + lVar4);
        uStack_14 = *(undefined4 *)((longlong)&pVVar12->vector[0].z + lVar4);
        pSVar3 = (String *)FUN_?(&uStack_13);
        iVar5 = iRam_?;
        if ((uint)values->max_length < 5) goto DAT_?;
        values->vector[4] = pSVar3;
        if (iVar5 != 0) {
          uVar6 = (uint)((ulonglong)(values->vector + 4) >> 0xc);
          uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
            iVar5 = iRam_?;
          } while (!bVar10);
        }
        if ((uint)values->max_length < 6) goto DAT_?;
        values->vector[5] = StringLiteral_u000A;
        if (iVar5 != 0) {
          uVar6 = (uint)((ulonglong)(values->vector + 5) >> 0xc);
          uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        pSVar3 = mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
        value = value + 1;
        lVar4 = lVar4 + 0xc;
      } while ((int)value < (this->fields).savedCnt);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
  }
  return;
}


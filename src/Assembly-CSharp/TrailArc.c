
/* Void SetTrailColor(Color) */

void Assembly-CSharp.dll::TrailArc::TrailArc_SetTrailColor
               (TrailArc *this,Color *baseColor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Color);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (Color__Array *)FUN_?(TypeInfo__UnityEngine__Color,3);
  fVar2 = _UNK_?;
  fVar3 = baseColor->g;
  fVar4 = baseColor->b;
  fVar5 = baseColor->a;
  fVar6 = (_UNK_? - fVar3) * _UNK_?;
  fVar7 = (_UNK_? - fVar4) * _UNK_?;
  fVar8 = (0.0 - fVar5) * _UNK_?;
  if (pCVar1 == (Color__Array *)0x0) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((int)pCVar1->max_length != 0) {
    fVar10 = baseColor->r;
    fVar11 = baseColor->g;
    fVar12 = baseColor->b;
    fVar13 = baseColor->a;
    pCVar1->vector[0].r = (_UNK_? - baseColor->r) * _UNK_? + baseColor->r;
    pCVar1->vector[0].g = fVar6 + fVar3;
    pCVar1->vector[0].b = fVar7 + fVar4;
    pCVar1->vector[0].a = fVar8 + fVar5;
    fVar3 = (fVar2 - fVar11) * _UNK_?;
    fVar4 = (fVar2 - fVar12) * _UNK_?;
    fVar5 = (0.0 - fVar13) * _UNK_?;
    if (1 < (uint)pCVar1->max_length) {
      pCVar1->vector[1].r = (fVar2 - fVar10) * _UNK_? + fVar10;
      pCVar1->vector[1].g = fVar3 + fVar11;
      pCVar1->vector[1].b = fVar4 + fVar12;
      pCVar1->vector[1].a = fVar5 + fVar13;
      if (2 < (uint)pCVar1->max_length) {
        bVar14 = iRam_? != 0;
        fVar3 = baseColor->g;
        fVar4 = baseColor->b;
        fVar5 = baseColor->a;
        pCVar1->vector[2].r = baseColor->r;
        pCVar1->vector[2].g = fVar3;
        pCVar1->vector[2].b = fVar4;
        pCVar1->vector[2].a = fVar5;
        (this->fields).colors = pCVar1;
        if (bVar14) {
          uVar15 = (uint)((ulonglong)&(this->fields).colors >> 0xc);
          uVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6);
          do {
            uVar17 = *(ulonglong *)(uVar16 * 8 + 0xADDR);
            puVar18 = (ulonglong *)(uVar16 * 8 + 0xADDR);
            LOCK();
            bVar14 = uVar17 == *puVar18;
            if (bVar14) {
              *puVar18 = uVar17 | 1L << (uVar15 & 0x3f);
            }
            UNLOCK();
          } while (!bVar14);
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


/* Void Start() */

void Assembly-CSharp.dll::TrailArc::TrailArc_Start(TrailArc *this,MethodInfo *method)

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
  pVVar1 = (Vector3__Array *)
           FUN_?(TypeInfo__UnityEngine__Vector3,(this->fields).pointsStored);
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
    pVVar1 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,(int)pVVar1->max_length)
    ;
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
      pVVar1 = (Vector3__Array *)
               FUN_?(TypeInfo__UnityEngine__Vector3,
                             (int)pVVar1->max_length * (this->fields).segmentsPerPoint);
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
        pVVar1 = (Vector3__Array *)
                 FUN_?(TypeInfo__UnityEngine__Vector3,(int)pVVar1->max_length);
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
        fVar8 = _UNK_? / (float)(this->fields).segmentsPerPoint;
        (this->fields).pointSqrDistance = fVar7 * fVar7;
        (this->fields).tRatio = fVar8;
        pGVar9 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
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
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
                  (pGVar9,name,(MethodInfo *)0x0);
        bVar2 = iRam_? != 0;
        (this->fields).trail = pGVar9;
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
        pGVar9 = (this->fields).trail;
        if (pGVar9 != (GameObject *)0x0) {
          pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar9,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
          if (pTVar10 != (Transform *)0x0) {
            uStack_12._0_4_ = (pVVar11->zeroVector).x;
            uStack_12._4_4_ = (pVVar11->zeroVector).y;
            fStack_13 = (pVVar11->zeroVector).z;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar14 = (pTVar10->fields)._._.m_CachedPtr;
            if (pvVar14 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar10,(MethodInfo *)0x0);
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            pcVar15 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
              uVar16 = func_?(&UNK_?);
              FUN_?(uVar16,0);
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            pcRam_? = pcVar15;
            (*pcRam_?)(pvVar14);
            pGVar9 = (this->fields).trail;
            if (pGVar9 != (GameObject *)0x0) {
              pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar9,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Quaternion);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pQVar17 = TypeInfo__UnityEngine__Quaternion->static_fields;
              if (pTVar10 != (Transform *)0x0) {
                CStack_18.r = (pQVar17->identityQuaternion).x;
                CStack_18.g = (pQVar17->identityQuaternion).y;
                CStack_18.b = (pQVar17->identityQuaternion).z;
                CStack_18.a = (pQVar17->identityQuaternion).w;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar14 = (pTVar10->fields)._._.m_CachedPtr;
                if (pvVar14 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar10,(MethodInfo *)0x0);
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                pcVar15 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
                  uVar16 = func_?(&UNK_?);
                  FUN_?(uVar16,0);
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                pcRam_? = pcVar15;
                (*pcRam_?)(pvVar14);
                pGVar9 = (this->fields).trail;
                if (pGVar9 != (GameObject *)0x0) {
                  pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform(pGVar9,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Vector3);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
                  if (pTVar10 != (Transform *)0x0) {
                    uStack_12._0_4_ = (pVVar11->oneVector).x;
                    uStack_12._4_4_ = (pVVar11->oneVector).y;
                    fStack_13 = (pVVar11->oneVector).z;
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pvVar14 = (pTVar10->fields)._._.m_CachedPtr;
                    if (pvVar14 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar10,(MethodInfo *)0x0)
                      ;
                      pcVar15 = (code *)swi(3);
                      (*pcVar15)();
                      return;
                    }
                    pcVar15 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
                      uVar16 = func_?(&UNK_?);
                      FUN_?(uVar16,0);
                      pcVar15 = (code *)swi(3);
                      (*pcVar15)();
                      return;
                    }
                    pcRam_? = pcVar15;
                    (*pcRam_?)(pvVar14,&uStack_12);
                    pGVar9 = (this->fields).trail;
                    if (pGVar9 != (GameObject *)0x0) {
                      this_00 = (MeshFilter *)
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_AddComponent_1
                                          (pGVar9,
                                           UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                                          );
                      pGVar9 = (this->fields).trail;
                      if (pGVar9 != (GameObject *)0x0) {
                        pRVar19 = (Renderer *)
                                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_AddComponent_1
                                            (pGVar9,
                                             UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                                            );
                        bVar2 = iRam_? != 0;
                        (this->fields).mRenderer = pRVar19;
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
                          pMVar20 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                                    MeshFilter_get_mesh(this_00,(MethodInfo *)0x0);
                          bVar2 = iRam_? != 0;
                          (this->fields).mesh = pMVar20;
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
                          pMVar21 = (this->fields).material;
                          this_01 = (Material *)FUN_?(TypeInfo__UnityEngine__Material);
                          UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor_1
                                    (this_01,pMVar21,(MethodInfo *)0x0);
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
                          pMVar21 = (this->fields).trailMaterial;
                          if (pMVar21 != (Material *)0x0) {
                            pCVar22 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                                      Material_GetColor(&CStack_18,pMVar21,StringLiteral__TintColor,
                                                        (MethodInfo *)0x0);
                            (this->fields).fadeOutRatio = pCVar22->a;
                            pRVar19 = (this->fields).mRenderer;
                            if (pRVar19 != (Renderer *)0x0) {
                              pMVar21 = (this->fields).trailMaterial;
                              if (cRam_? == '\0') {
                                FUN_?(&
                                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                                              ,pMVar21,0);
                                LOCK();
                                UNLOCK();
                                FUN_?(&
                                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Material>_UnityEngine__Material_
                                             );
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              if (pRVar19 == (Renderer *)0x0) {
                                FUN_?();
                                pcVar15 = (code *)swi(3);
                                (*pcVar15)();
                                return;
                              }
                              pvVar14 = (pRVar19->fields)._._.m_CachedPtr;
                              if (pvVar14 == (void *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                ThrowHelper_2_ThrowNullReferenceException
                                          ((Object *)pRVar19,(MethodInfo *)0x0);
                                pcVar15 = (code *)swi(3);
                                (*pcVar15)();
                                return;
                              }
                              if ((
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Material>_UnityEngine__Material_
                                  ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                                FUN_?();
                              }
                              if (pMVar21 == (Material *)0x0) {
                                pvVar23 = (void *)0x0;
                              }
                              else {
                                pvVar23 = (pMVar21->fields)._.m_CachedPtr;
                              }
                              pcVar15 = pcRam_?;
                              if ((pcRam_? == (code *)0x0) &&
                                 (pcVar15 = (code *)FUN_?(&UNK_?),
                                 pcVar15 == (code *)0x0)) {
                                uVar16 = func_?(&UNK_?);
                                FUN_?(uVar16,0);
                                pcVar15 = (code *)swi(3);
                                (*pcVar15)();
                                return;
                              }
                              pcRam_? = pcVar15;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                              (*pcRam_?)(pvVar14,pvVar23);
                              return;
                            }
                            goto code_?;
                          }
                        }
                      }
                    }
                  }
                  FUN_?();
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
              }
              FUN_?();
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
          }
          FUN_?();
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
  values = (Vector3__Array *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (values == (Vector3__Array *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((((Component__Fields *)&((NumberFormatInfo__Fields *)&values->bounds)->numberGroupSizes)->_).
      m_CachedPtr != (void *)0x0) {
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
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
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)values,(MethodInfo *)0x0);
code_?:
      FUN_?();
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)values,(MethodInfo *)0x0);
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)values,(MethodInfo *)0x0);
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)values,(MethodInfo *)0x0);
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
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    }
    else {
      pcRam_? = pcVar4;
      (*pcRam_?)();
      uStack_6 = (Il2CppClass *)0x0;
      if (((this->fields).initialized == 0) && ((this->fields).Emit != 0)) {
        values = (this->fields).saved;
        uVar7 = (this->fields).savedCnt;
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        if (pTVar8 != (Transform *)0x0) {
          fVar9 = (float)((uint)(this->fields).pointDistance ^ _UNK_?);
          in_stack_10 =
               (MethodInfo *)CONCAT44((int)((ulonglong)in_stack_10 >> 0x20),fVar9);
          pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint_1
                              (&VStack_12,pTVar8,0.0,0.0,fVar9,(MethodInfo *)0x0);
          if (values != (Vector3__Array *)0x0) {
            if (*(uint *)&values->max_length <= uVar7) goto code_?;
            fVar9 = pVVar11->y;
            values->vector[(int)uVar7].x = pVVar11->x;
            values->vector[(int)uVar7].y = fVar9;
            values->vector[(int)uVar7].z = pVVar11->z;
            values = (this->fields).savedUp;
            uVar7 = (this->fields).savedCnt;
            pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this,(MethodInfo *)0x0);
            if (pTVar8 != (Transform *)0x0) {
              pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                  (&VStack_12,pTVar8,(MethodInfo *)0x0);
              if (values != (Vector3__Array *)0x0) {
                if (*(uint *)&values->max_length <= uVar7) goto code_?;
                fVar9 = pVVar11->y;
                values->vector[(int)uVar7].x = pVVar11->x;
                values->vector[(int)uVar7].y = fVar9;
                values->vector[(int)uVar7].z = pVVar11->z;
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
                  pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)this,(MethodInfo *)0x0);
                  if (pTVar8 != (Transform *)0x0) {
                    pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                        (&VStack_12,pTVar8,(MethodInfo *)0x0);
                    if (values != (Vector3__Array *)0x0) {
                      if (uVar7 < *(uint *)&values->max_length) {
                        fVar9 = pVVar11->y;
                        values->vector[(int)uVar7].x = pVVar11->x;
                        values->vector[(int)uVar7].y = fVar9;
                        values->vector[(int)uVar7].z = pVVar11->z;
                        piVar15 = &(this->fields).savedCnt;
                        *piVar15 = *piVar15 + 1;
                        fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                           ((MethodInfo *)0x0);
                        (this->fields).lastPointCreationTime = fVar9;
                        fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                           ((MethodInfo *)0x0);
                        (this->fields).creationTime = fVar9;
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
        if ((pcRam_? != (code *)0x0) ||
           (pcVar4 = (code *)FUN_?(), pcVar4 != (code *)0x0)) {
          pcRam_? = pcVar4;
          fVar9 = (float)(*pcRam_?)();
          if (cRam_? == '\0') {
            FUN_?();
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          values = (Vector3__Array *)
                   mscorlib.dll::System::Globalization::NumberFormatInfo::
                   NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
            FUN_?();
          }
          pSVar16 = mscorlib.dll::System::Number::Number_FormatSingle
                              (fVar9,(String *)0x0,(NumberFormatInfo *)values,(MethodInfo *)0x0);
          in_R9 = (Vector3__Array *)0x0;
          pSVar16 = mscorlib.dll::System::String::String_Concat_5
                              (StringLiteral_Saved_Points_at_time_,pSVar16,StringLiteral__u000A,
                               (MethodInfo *)0x0);
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
              FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
                 field_0x135 & 1) == 0) {
              FUN_?();
            }
            if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
              FUN_?();
            }
            BStack_21._value = (void *)0x0;
            uStack_22 = (Il2CppRGCTXData *)0x0;
            in_R9 = (Vector3__Array *)0x0;
            pSVar16 = mscorlib.dll::System::Number::Number_FormatInt32
                                (uVar2,(ReadOnlySpan_1_Char_ *)&BStack_21,(IFormatProvider *)0x0,
                                 (MethodInfo *)0x0);
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
            pSVar16 = mscorlib.dll::System::String::String_Concat_7
                                ((String__Array *)values,(MethodInfo *)0x0);
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
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar16,(MethodInfo *)0x0);
          goto code_?;
        }
        goto code_?;
      }
code_?:
      if ((this->fields).printSegmentPoints != 0) {
        TrailArc_printAllPoints(this,(MethodInfo *)0x0);
      }
      fVar9 = (this->fields).creationTime;
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(), pcVar4 == (code *)0x0)) goto code_?;
      pcRam_? = pcVar4;
      fVar25 = (float)(*pcRam_?)();
      fVar9 = fVar9 - fVar25;
      pfVar26 = &(this->fields).maxLifeTime;
      if (*pfVar26 <= fVar9 && fVar9 != *pfVar26) {
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
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        if (pTVar8 != (Transform *)0x0) {
          uVar27 = (undefined4)((ulonglong)in_stack_10 >> 0x20);
          pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint_1
                              (&VStack_12,pTVar8,0.0,0.0,(this->fields).pointDistance,
                               (MethodInfo *)0x0);
          if (values != (Vector3__Array *)0x0) {
            if (*(uint *)&values->max_length <= uVar2) goto code_?;
            fVar9 = pVVar11->y;
            values->vector[(int)uVar2].x = pVVar11->x;
            values->vector[(int)uVar2].y = fVar9;
            values->vector[(int)uVar2].z = pVVar11->z;
            values = (this->fields).savedUp;
            uVar2 = (this->fields).savedCnt;
            pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this,(MethodInfo *)0x0);
            if (pTVar8 != (Transform *)0x0) {
              pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                  (&VStack_12,pTVar8,(MethodInfo *)0x0);
              if (values != (Vector3__Array *)0x0) {
                if (*(uint *)&values->max_length <= uVar2) goto code_?;
                fVar9 = pVVar11->y;
                values->vector[(int)uVar2].x = pVVar11->x;
                values->vector[(int)uVar2].y = fVar9;
                values->vector[(int)uVar2].z = pVVar11->z;
                iVar13 = (this->fields).savedCnt;
                (this->fields).savedCnt = iVar13 + 1;
                TrailArc_findCoordinates(this,iVar13 + -2,(MethodInfo *)0x0);
                values = (this->fields).saved;
                uVar2 = (this->fields).savedCnt;
                pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)this,(MethodInfo *)0x0);
                fVar9 = (this->fields).pointDistance;
                if (pTVar8 != (Transform *)0x0) {
                  fVar9 = fVar9 + fVar9;
                  in_stack_10 = (MethodInfo *)CONCAT44(uVar27,fVar9);
                  pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_TransformPoint_1
                                      (&VStack_12,pTVar8,0.0,0.0,fVar9,(MethodInfo *)0x0);
                  if (values != (Vector3__Array *)0x0) {
                    if (*(uint *)&values->max_length <= uVar2) goto code_?;
                    fVar9 = pVVar11->y;
                    values->vector[(int)uVar2].x = pVVar11->x;
                    values->vector[(int)uVar2].y = fVar9;
                    values->vector[(int)uVar2].z = pVVar11->z;
                    values = (this->fields).savedUp;
                    uVar2 = (this->fields).savedCnt;
                    pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)this,(MethodInfo *)0x0);
                    if (pTVar8 != (Transform *)0x0) {
                      pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                          (&VStack_12,pTVar8,(MethodInfo *)0x0);
                      if (values != (Vector3__Array *)0x0) {
                        if (uVar2 < *(uint *)&values->max_length) {
                          fVar9 = pVVar11->y;
                          values->vector[(int)uVar2].x = pVVar11->x;
                          values->vector[(int)uVar2].y = fVar9;
                          values->vector[(int)uVar2].z = pVVar11->z;
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
      fVar9 = _UNK_?;
      if ((this->fields).Emit != 0) {
        pVVar14 = (this->fields).saved;
        iVar13 = (this->fields).savedCnt;
        if (pVVar14 != (Vector3__Array *)0x0) {
          if ((uint)pVVar14->max_length <= iVar13 - 1U) goto code_?;
          VStack_12.x = pVVar14->vector[(longlong)iVar13 + -1].x;
          VStack_12.y = pVVar14->vector[(longlong)iVar13 + -1].y;
          VStack_1.z = pVVar14->vector[(longlong)iVar13 + -1].z - 0.0;
          VStack_1.y = VStack_12.y - uStack_6._4_4_;
          VStack_1.x = VStack_12.x - (float)uStack_6;
          fVar25 = VStack_1.x * VStack_1.x + VStack_1.y * VStack_1.y +
                   VStack_1.z * VStack_1.z;
          pfVar26 = &(this->fields).pointSqrDistance;
          if (fVar25 < *pfVar26 || fVar25 == *pfVar26) goto code_?;
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
                    pVVar14 = (Vector3__Array *)
                              FUN_?(TypeInfo__UnityEngine__Vector3,(int)in_R9->max_length);
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
              pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this,(MethodInfo *)0x0);
              if (pTVar8 != (Transform *)0x0) {
                pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                    (&VStack_12,pTVar8,(MethodInfo *)0x0);
                if (values != (Vector3__Array *)0x0) {
                  if (uVar2 < *(uint *)&values->max_length) {
                    fVar9 = pVVar11->y;
                    values->vector[(int)uVar2].x = pVVar11->x;
                    values->vector[(int)uVar2].y = fVar9;
                    values->vector[(int)uVar2].z = pVVar11->z;
                    piVar15 = &(this->fields).savedCnt;
                    *piVar15 = *piVar15 + 1;
                    if ((this->fields).averageCreationTime == 0.0) {
                      fVar25 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                         ((MethodInfo *)0x0);
                      fVar25 = fVar25 - (this->fields).lastPointCreationTime;
                    }
                    else {
                      fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                         ((MethodInfo *)0x0);
                      fVar25 = ((fVar9 - (this->fields).lastPointCreationTime) +
                               (this->fields).averageCreationTime) * _UNK_?;
                    }
                    fVar9 = _UNK_?;
                    (this->fields).averageCreationTime = fVar25;
                    (this->fields).averageInsertionTime =
                         (this->fields).averageCreationTime * (this->fields).tRatio;
                    fVar25 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                       ((MethodInfo *)0x0);
                    (this->fields).lastPointCreationTime = fVar25;
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
          pCVar29 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                              ((Color *)auStack_30,pMVar28,StringLiteral__TintColor,
                               (MethodInfo *)0x0);
          BStack_21._value = *(void **)pCVar29;
          uStack_22 = *(_union_154 *)&pCVar29->b;
          fVar9 = (this->fields).fadeOutRatio;
          fVar25 = (this->fields).lifeTimeRatio;
          fVar31 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                             ((MethodInfo *)0x0);
          fVar9 = (float)uStack_22._4_4_ - fVar25 * fVar9 * fVar31;
          uStack_22._4_4_ = fVar9;
          if (fVar9 <= 0.0) {
            if ((this->fields).printResults != 0) {
              pSVar16 = mscorlib.dll::System::Int32::Int32_ToString
                                  ((Int32 *)&(this->fields).pointCnt,(MethodInfo *)0x0);
              pSVar16 = mscorlib.dll::System::String::String_Concat_4
                                  (StringLiteral_Trail_effect_ending_with_a_segme,pSVar16,
                                   (MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_print
                        ((Object *)pSVar16,(MethodInfo *)0x0);
            }
            pGVar32 = (this->fields).trail;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)pGVar32,(MethodInfo *)0x0);
            pGVar32 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)pGVar32,(MethodInfo *)0x0);
            return;
          }
          pMVar28 = (this->fields).trailMaterial;
          if (pMVar28 != (Material *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                      (pMVar28,StringLiteral__TintColor,(Color *)&BStack_21,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        goto code_?;
      }
      if ((this->fields).displayCnt < (this->fields).pointCnt) {
        fVar25 = (this->fields).elapsedInsertionTime;
        fVar31 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        fVar31 = fVar31 + fVar25;
        (this->fields).elapsedInsertionTime = fVar31;
        pfVar26 = &(this->fields).averageInsertionTime;
        if (*pfVar26 <= fVar31 && fVar31 != *pfVar26) {
          fVar25 = (this->fields).averageInsertionTime;
          iVar13 = (this->fields).displayCnt;
          do {
            iVar33 = iVar13 + 1;
            if ((this->fields).pointCnt <= iVar13) {
              iVar33 = iVar13;
            }
            iVar13 = iVar33;
            fVar31 = fVar31 - fVar25;
          } while (fVar25 < fVar31);
          (this->fields).displayCnt = iVar13;
          (this->fields).elapsedInsertionTime = fVar31;
        }
      }
      if ((1 < (this->fields).displayCnt) && ((this->fields).maxPointsDrawn != 1)) {
        this_00 = (this->fields).mRenderer;
        if (this_00 != (Renderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                    (this_00,1,(MethodInfo *)0x0);
          fVar25 = _UNK_?;
          (this->fields).lifeTimeRatio = _UNK_? / (this->fields).lifetime;
          iVar13 = (this->fields).displayCnt;
          if (((this->fields).maxPointsDrawn < iVar13) && (0 < (this->fields).maxPointsDrawn)) {
            iVar13 = (this->fields).maxPointsDrawn;
          }
          pAVar34 = (Array *)FUN_?(TypeInfo__UnityEngine__Vector3,iVar13 * 2);
          pAVar35 = (Array *)FUN_?(TypeInfo__UnityEngine__Vector2,iVar13 * 2);
          pAStack_36 = pAVar35;
          value = (Int32__Array *)FUN_?(TypeInfo__System__Int32,(iVar13 + -1) * 6);
          pAStack_37 = (Array *)FUN_?(TypeInfo__UnityEngine__Color);
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                              ((MethodInfo *)0x0);
          if (this_01 != (Camera *)0x0) {
            values = (Vector3__Array *)
                     UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)this_01,(MethodInfo *)0x0);
            if (values != (Vector3__Array *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pIVar38 = ((NumberFormatInfo__Fields *)&values->bounds)->numberGroupSizes;
              if (pIVar38 != (Int32__Array *)0x0) {
                pcVar4 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0))
                goto code_?;
                pcRam_? = pcVar4;
                (*pcRam_?)(pIVar38);
                fVar31 = 0.0;
                uStack_39 = 0;
                VStack_12.x = 0.0;
                VStack_12.y = 0.0;
                values = (Vector3__Array *)0x0;
                while (iVar33 = (int)values, iVar33 < iVar13) {
                  pVVar14 = (this->fields).points;
                  iVar40 = (this->fields).displayCnt;
                  if (pVVar14 == (Vector3__Array *)0x0) goto code_?;
                  iVar41 = (iVar40 - iVar13) + iVar33;
                  if ((uint)pVVar14->max_length <= (uint)((iVar40 - iVar13) + iVar33))
                  goto code_?;
                  pIVar42 = *(Il2CppClass **)(pVVar14->vector + iVar41);
                  fVar43 = pVVar14->vector[iVar41].z;
                  t = (float)iVar33 * (fVar25 / (float)(iVar13 + -1));
                  pCVar44 = (this->fields).colors;
                  if (pCVar44 == (Color__Array *)0x0) goto code_?;
                  if (pCVar44->max_length == 0) {
                    auStack_30._0_8_ = _UNK_?;
                    auStack_30._8_8_ = _UNK_?;
                    pCVar29 = &CStack_45;
code_?:
                    uStack_46._0_4_ = 0.0;
                    uStack_46._4_4_ = 0.0;
                    uStack_47 = (Il2CppGenericMethod *)0x0;
                    a = (Color *)&uStack_47;
                    pCVar48 = (Color *)auStack_30;
code_?:
                    pCVar29 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_Lerp
                                        (pCVar29,a,pCVar48,t,in_stack_10);
                    fVar49 = pCVar29->r;
                    fVar50 = pCVar29->g;
                    fVar51 = pCVar29->b;
                    fVar52 = pCVar29->a;
                  }
                  else {
                    if ((int)pCVar44->max_length == 1) {
                      if ((int)pCVar44->max_length != 0) {
                        auStack_30._0_8_ = *(undefined8 *)pCVar44->vector;
                        auStack_30._8_8_ = *(undefined8 *)&pCVar44->vector[0].b;
                        pCVar29 = &CStack_53;
                        goto code_?;
                      }
                      goto code_?;
                    }
                    if ((int)pCVar44->max_length == 2) {
                      if (1 < (uint)pCVar44->max_length) {
                        pCVar54 = (this->fields).colors;
                        if (pCVar54 != (Color__Array *)0x0) {
                          if ((int)pCVar54->max_length != 0) {
                            uStack_47 = *(_union_155 *)pCVar54->vector;
                            uStack_46._0_4_ = pCVar54->vector[0].b;
                            uStack_46._4_4_ = pCVar54->vector[0].a;
                            auStack_30._0_8_ = *(undefined8 *)(pCVar44->vector + 1);
                            auStack_30._8_8_ = *(undefined8 *)&pCVar44->vector[1].b;
                            pCVar48 = (Color *)&uStack_47;
                            a = (Color *)auStack_30;
                            pCVar29 = &CStack_55;
                            goto code_?;
                          }
                          goto code_?;
                        }
                        goto code_?;
                      }
                      goto code_?;
                    }
                    fVar52 = (float)((int)pCVar44->max_length + -1) -
                             (float)((int)pCVar44->max_length + -1) * t;
                    if (fVar52 == (float)((int)pCVar44->max_length + -1)) {
                      if (pCVar44 == (Color__Array *)0x0) goto code_?;
                      iVar40 = (int)pCVar44->max_length;
                      if ((uint)pCVar44->max_length <= iVar40 - 1U) goto code_?;
                      pCVar29 = pCVar44->vector + (longlong)iVar40 + -1;
                      fVar49 = pCVar29->r;
                      fVar50 = pCVar29->g;
                      fVar51 = pCVar29->b;
                      fVar52 = pCVar29->a;
                    }
                    else {
                      fVar49 = (float)func_?();
                      uVar2 = (uint)fVar49;
                      fVar52 = fVar52 - (float)(int)uVar2;
                      if ((uint)pCVar44->max_length <= uVar2) goto code_?;
                      pCVar54 = (this->fields).colors;
                      if (pCVar54 == (Color__Array *)0x0) goto code_?;
                      if ((uint)pCVar54->max_length <= uVar2 + 1) goto code_?;
                      pCVar29 = pCVar54->vector + (longlong)(int)uVar2 + 1;
                      pCVar48 = pCVar44->vector + (int)uVar2;
                      if (fVar52 < 0.0) {
                        fVar52 = 0.0;
                      }
                      else if (fVar25 < fVar52) {
                        fVar52 = fVar25;
                      }
                      fVar49 = (pCVar29->r - pCVar48->r) * fVar52 + pCVar48->r;
                      fVar50 = (pCVar29->g - pCVar48->g) * fVar52 + pCVar48->g;
                      fVar51 = (pCVar29->b - pCVar48->b) * fVar52 + pCVar48->b;
                      fVar52 = (pCVar29->a - pCVar48->a) * fVar52 + pCVar48->a;
                      uStack_47._4_4_ = fVar50;
                      uStack_47._0_4_ = fVar49;
                      uStack_46._4_4_ = fVar52;
                      uStack_46._0_4_ = fVar51;
                    }
                  }
                  if (pAStack_37 == (Array *)0x0) goto code_?;
                  if (*(uint *)&pAStack_37[1].monitor <= (uint)(iVar33 * 2))
                  goto code_?;
                  pAVar35 = pAStack_37 + (longlong)(iVar33 * 2) + 2;
                  *(float *)&pAVar35->klass = fVar49;
                  *(float *)((longlong)&pAVar35->klass + 4) = fVar50;
                  *(float *)&pAVar35->monitor = fVar51;
                  *(float *)((longlong)&pAVar35->monitor + 4) = fVar52;
                  if (*(uint *)&pAStack_37[1].monitor <= iVar33 * 2 + 1U)
                  goto code_?;
                  pAVar35 = pAStack_37 + (longlong)(iVar33 * 2) + 3;
                  *(float *)&pAVar35->klass = fVar49;
                  *(float *)((longlong)&pAVar35->klass + 4) = fVar50;
                  *(float *)&pAVar35->monitor = fVar51;
                  *(float *)((longlong)&pAVar35->monitor + 4) = fVar52;
                  pSVar56 = (this->fields).widths;
                  if (pSVar56 == (Single__Array *)0x0) goto code_?;
                  fVar49 = fVar25;
                  if (pSVar56->max_length != 0) {
                    if ((int)pSVar56->max_length == 1) {
                      if ((int)pSVar56->max_length == 0) goto code_?;
                      fVar49 = pSVar56->vector[0];
                    }
                    else if ((int)pSVar56->max_length == 2) {
                      if ((uint)pSVar56->max_length < 2) goto code_?;
                      pSVar57 = (this->fields).widths;
                      if (pSVar57 == (Single__Array *)0x0) goto code_?;
                      if ((int)pSVar57->max_length == 0) goto code_?;
                      fVar49 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                                         (pSVar56->vector[1],pSVar57->vector[0],t,
                                          (MethodInfo *)in_R9);
                    }
                    else {
                      fVar49 = (float)((int)pSVar56->max_length + -1) -
                               (float)((int)pSVar56->max_length + -1) * t;
                      if (fVar49 == (float)((int)pSVar56->max_length + -1)) {
                        if (pSVar56 == (Single__Array *)0x0) goto code_?;
                        iVar40 = (int)pSVar56->max_length;
                        if ((uint)pSVar56->max_length <= iVar40 - 1U) goto code_?;
                        fVar49 = pSVar56->vector[(longlong)iVar40 + -1];
                      }
                      else {
                        fVar50 = (float)func_?();
                        uVar2 = (uint)fVar50;
                        if ((uint)pSVar56->max_length <= uVar2) goto code_?;
                        pSVar57 = (this->fields).widths;
                        if (pSVar57 == (Single__Array *)0x0) goto code_?;
                        if ((uint)pSVar57->max_length <= uVar2 + 1) goto code_?;
                        fVar49 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                                           (pSVar56->vector[(int)uVar2],
                                            pSVar57->vector[(longlong)(int)uVar2 + 1],
                                            fVar49 - (float)(int)uVar2,(MethodInfo *)in_R9);
                      }
                    }
                  }
                  fStack_58 = SUB84(pIVar42,0);
                  fStack_59 = (float)((ulonglong)pIVar42 >> 0x20);
                  if ((this->fields).faceCamera == 0) {
                    if ((this->fields).twist == 0) {
                      pVVar14 = (this->fields).pointsUp;
                      iVar40 = (this->fields).displayCnt;
                      if (pVVar14 == (Vector3__Array *)0x0) goto code_?;
                      iVar41 = (iVar40 - iVar13) + iVar33;
                      if ((uint)pVVar14->max_length <= (uint)((iVar40 - iVar13) + iVar33))
                      goto code_?;
                      uStack_47 = *(_union_155 *)(pVVar14->vector + iVar41);
                      fVar50 = pVVar14->vector[iVar41].z;
                      if (pAVar34 == (Array *)0x0) goto code_?;
                      if (*(uint *)&pAVar34[1].monitor <= (uint)(iVar33 * 2))
                      goto code_?;
                      *(ulonglong *)((longlong)&pAVar34[2].klass + (longlong)(iVar33 * 2) * 0xc) =
                           CONCAT44(uStack_47._4_4_ * fVar49 * fVar9 + fStack_59,
                                    (float)uStack_47 * fVar49 * fVar9 + fStack_58);
                      *(float *)((longlong)&pAVar34[2].monitor + (longlong)(iVar33 * 2) * 0xc) =
                           fVar50 * fVar49 * fVar9 + fVar43;
                      pVVar14 = (this->fields).pointsUp;
                      iVar40 = (this->fields).displayCnt;
                      if (pVVar14 == (Vector3__Array *)0x0) goto code_?;
                      iVar41 = (iVar40 - iVar13) + iVar33;
                      if ((uint)pVVar14->max_length <= (uint)((iVar40 - iVar13) + iVar33))
                      goto code_?;
                      uStack_47 = *(_union_155 *)(pVVar14->vector + iVar41);
                      fVar52 = (float)uStack_47;
                      fVar60 = uStack_47._4_4_;
                      fVar50 = pVVar14->vector[iVar41].z;
                      if (*(uint *)&pAVar34[1].monitor <= iVar33 * 2 + 1U)
                      goto code_?;
                    }
                    else {
                      fVar50 = (this->fields).time;
                      fVar51 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                         ((MethodInfo *)0x0);
                      (this->fields).time = fVar50 + fVar51;
                      if (iVar33 == iVar13 + -1) {
                        method_00 = (this->fields).points;
                        iVar40 = (this->fields).displayCnt;
                        if (method_00 == (Vector3__Array *)0x0) goto code_?;
                        lVar61 = (longlong)((iVar40 - iVar13) + iVar33);
                        if ((uint)method_00->max_length <= (uint)((iVar40 - iVar13) + -1 + iVar33))
                        goto code_?;
                        VStack_62.z = fVar43;
                        fVar50 = method_00->vector[lVar61 + -1].z;
                        uStack_63 = pIVar42;
                        uStack_64 = *(Il2CppClass **)(method_00->vector + lVar61 + -1);
                      }
                      else {
                        pVVar14 = (this->fields).points;
                        iVar40 = (this->fields).displayCnt;
                        uStack_64 = pIVar42;
                        if (pVVar14 == (Vector3__Array *)0x0) goto code_?;
                        lVar61 = (longlong)((iVar40 - iVar13) + iVar33);
                        uVar2 = iVar40 - iVar13;
                        method_00 = (Vector3__Array *)(ulonglong)uVar2;
                        if ((uint)pVVar14->max_length <= uVar2 + 1 + iVar33)
                        goto code_?;
                        uStack_63 = *(Il2CppClass **)(pVVar14->vector + lVar61 + 1);
                        VStack_62.z = pVVar14->vector[lVar61 + 1].z;
                        fVar50 = fVar43;
                      }
                      VStack_62.x = (float)uStack_63 - (float)uStack_64;
                      VStack_62.z = VStack_62.z - fVar50;
                      VStack_62.y = uStack_63._4_4_ - uStack_64._4_4_;
                      fVar50 = (float)FUN_?();
                      pQVar65 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                Quaternion_AngleAxis
                                          (aQStack_66,fVar50,&VStack_62,(MethodInfo *)0x0);
                      pIVar67 = *(Il2CppMethodPointer *)pQVar65;
                      pIVar68 = *(Il2CppMethodPointer *)&pQVar65->z;
                      pVVar11 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                                          (&VStack_69,(MethodInfo *)method_00);
                      VStack_70.x = pVVar11->x;
                      VStack_70.y = pVVar11->y;
                      VStack_70.z = pVVar11->z;
                      in_R9 = (Vector3__Array *)0x0;
                      pMVar71 = (MethodInfo *)auStack_30;
                      auStack_30._0_8_ = pIVar67;
                      auStack_30._8_8_ = pIVar68;
                      UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                                (&VStack_72,(Quaternion *)pMVar71,&VStack_70,(MethodInfo *)0x0);
                      p_Var31 = (_union_155 *)
                                RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                                          (&VStack_73,pMVar71);
                      uStack_47 = *p_Var31;
                      fVar50 = *(float *)(p_Var31 + 1);
                      fVar52 = (float)uStack_47;
                      fVar60 = uStack_47._4_4_;
                      fVar51 = *(float *)(p_Var31 + 1);
                      _Stack_158 = uStack_47;
                      if (pAVar34 == (Array *)0x0) goto code_?;
                      if (*(uint *)&pAVar34[1].monitor <= (uint)(iVar33 * 2))
                      goto code_?;
                      *(ulonglong *)((longlong)&pAVar34[2].klass + (longlong)(iVar33 * 2) * 0xc) =
                           CONCAT44(fVar60 * fVar49 * fVar9 + fStack_59,
                                    fVar52 * fVar49 * fVar9 + fStack_58);
                      *(float *)((longlong)&pAVar34[2].monitor + (longlong)(iVar33 * 2) * 0xc) =
                           fVar51 * fVar49 * fVar9 + fVar43;
                      if (*(uint *)&pAVar34[1].monitor <= iVar33 * 2 + 1U)
                      goto code_?;
                    }
                    *(ulonglong *)((longlong)&pAVar34[2].monitor + (longlong)(iVar33 * 2) * 0xc + 4)
                         = CONCAT44(fStack_59 - fVar60 * fVar49 * fVar9,
                                    fStack_58 - fVar52 * fVar49 * fVar9);
                    *(float *)((longlong)&pAVar34[3].klass + (longlong)(iVar33 * 2) * 0xc + 4) =
                         fVar43 - fVar50 * fVar49 * fVar9;
                  }
                  else {
                    if (iVar33 == iVar13 + -1) {
                      pVVar14 = (this->fields).points;
                      iVar40 = (this->fields).displayCnt;
                      if (pVVar14 == (Vector3__Array *)0x0) goto code_?;
                      lVar61 = (longlong)((iVar40 - iVar13) + iVar33);
                      pMVar71 = (MethodInfo *)(lVar61 + -1);
                      if ((uint)pVVar14->max_length <= (uint)((iVar40 - iVar13) + -1 + iVar33))
                      goto code_?;
                      fVar50 = fVar43;
                      fVar51 = pVVar14->vector[lVar61 + -1].z;
                      uStack_6 = pIVar42;
                      uStack_23 = *(Il2CppClass **)(pVVar14->vector + lVar61 + -1);
                    }
                    else {
                      pVVar14 = (this->fields).points;
                      iVar40 = (this->fields).displayCnt;
                      uStack_23 = pIVar42;
                      if (pVVar14 == (Vector3__Array *)0x0) goto code_?;
                      lVar61 = (longlong)((iVar40 - iVar13) + iVar33);
                      pMVar71 = (MethodInfo *)(lVar61 + 1);
                      if ((uint)pVVar14->max_length <= (uint)((iVar40 - iVar13) + 1 + iVar33))
                      goto code_?;
                      uStack_6 = *(Il2CppClass **)(pVVar14->vector + lVar61 + 1);
                      fVar50 = pVVar14->vector[lVar61 + 1].z;
                      fVar51 = fVar43;
                    }
                    in_R9 = (Vector3__Array *)(ulonglong)(uint)fVar51;
                    VStack_1.y = (VStack_12.x - fStack_58) * (fVar50 - fVar51) -
                                   (0.0 - fVar43) * ((float)uStack_6 - (float)uStack_23);
                    VStack_1.x = (0.0 - fVar43) * (uStack_6._4_4_ - uStack_23._4_4_) -
                                   (fVar31 - fStack_59) * (fVar50 - fVar51);
                    VStack_1.z = (fVar31 - fStack_59) * ((float)uStack_6 - (float)uStack_23) -
                                   (VStack_12.x - fStack_58) *
                                   (uStack_6._4_4_ - uStack_23._4_4_);
                    p_Var31 = (_union_155 *)
                              UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                              Vector3_get_normalized((Vector3 *)&BStack_21,&VStack_1,pMVar71);
                    uStack_47 = *p_Var31;
                    fVar50 = *(float *)(p_Var31 + 1);
                    fVar31 = *(float *)(p_Var31 + 1);
                    _Stack_1d8 = uStack_47;
                    if (pAVar34 == (Array *)0x0) goto code_?;
                    if (*(uint *)&pAVar34[1].monitor <= (uint)(iVar33 * 2))
                    goto code_?;
                    *(ulonglong *)((longlong)&pAVar34[2].klass + (longlong)(iVar33 * 2) * 0xc) =
                         CONCAT44(uStack_47._4_4_ * fVar49 * fVar9 + fStack_59,
                                  (float)uStack_47 * fVar49 * fVar9 + fStack_58);
                    *(float *)((longlong)&pAVar34[2].monitor + (longlong)(iVar33 * 2) * 0xc) =
                         fVar31 * fVar49 * fVar9 + fVar43;
                    if (*(uint *)&pAVar34[1].monitor <= iVar33 * 2 + 1U) goto code_?;
                    *(ulonglong *)((longlong)&pAVar34[2].monitor + (longlong)(iVar33 * 2) * 0xc + 4)
                         = CONCAT44(fStack_59 - uStack_47._4_4_ * fVar49 * fVar9,
                                    fStack_58 - (float)uStack_47 * fVar49 * fVar9);
                    *(float *)((longlong)&pAVar34[3].klass + (longlong)(iVar33 * 2) * 0xc + 4) =
                         fVar43 - fVar50 * fVar49 * fVar9;
                    fVar31 = (float)uStack_39;
                  }
                  if (pAStack_36 == (Array *)0x0) goto code_?;
                  if (*(uint *)&pAStack_36[1].monitor <= (uint)(iVar33 * 2))
                  goto code_?;
                  *(float *)(&pAStack_36[2].klass + iVar33 * 2) = t;
                  *(undefined4 *)((longlong)&pAStack_36[2].klass + (longlong)(iVar33 * 2) * 8 + 4)
                       = 0;
                  if (*(uint *)&pAStack_36[1].monitor <= iVar33 * 2 + 1U)
                  goto code_?;
                  *(float *)(&pAStack_36[2].monitor + iVar33 * 2) = t;
                  *(undefined4 *)
                   ((longlong)&pAStack_36[2].monitor + (longlong)(iVar33 * 2) * 8 + 4) = 0x3f800000
                  ;
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
                  values = (Vector3__Array *)
                           UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_get_transform(pGVar32,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Vector3);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (values != (Vector3__Array *)0x0) {
                    _Stack_1d8 = *(_union_155 *)TypeInfo__UnityEngine__Vector3->static_fields;
                    fStack_74 = *(float *)((_union_155 *)
                                            TypeInfo__UnityEngine__Vector3->static_fields + 1);
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pIVar38 = ((NumberFormatInfo__Fields *)&values->bounds)->numberGroupSizes;
                    if (pIVar38 != (Int32__Array *)0x0) {
                      pcVar4 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0))
                      goto code_?;
                      pcRam_? = pcVar4;
                      (*pcRam_?)(pIVar38);
                      pGVar32 = (this->fields).trail;
                      if (pGVar32 != (GameObject *)0x0) {
                        values = (Vector3__Array *)
                                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                 GameObject_get_transform(pGVar32,(MethodInfo *)0x0);
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__UnityEngine__Quaternion);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        if (values != (Vector3__Array *)0x0) {
                          auStack_30._0_8_ =
                               *(undefined8 *)
                                &TypeInfo__UnityEngine__Quaternion->static_fields->
                                 identityQuaternion;
                          auStack_30._8_8_ =
                               *(undefined8 *)
                                &(TypeInfo__UnityEngine__Quaternion->static_fields->
                                 identityQuaternion).z;
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pIVar38 = ((NumberFormatInfo__Fields *)&values->bounds)->numberGroupSizes;
                          if (pIVar38 != (Int32__Array *)0x0) {
                            pcVar4 = pcRam_?;
                            if ((pcRam_? == (code *)0x0) &&
                               (pcVar4 = (code *)FUN_?(&UNK_?),
                               pcVar4 == (code *)0x0)) goto code_?;
                            pcRam_? = pcVar4;
                            (*pcRam_?)(pIVar38);
                            values = (Vector3__Array *)(this->fields).mesh;
                            if (values != (Vector3__Array *)0x0) {
                              if (cRam_? == '\0') {
                                FUN_?(&
                                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Mesh>_UnityEngine__Mesh_
                                             );
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              pvVar75 = (((Component__Fields *)
                                         &((NumberFormatInfo__Fields *)&values->bounds)->
                                          numberGroupSizes)->_).m_CachedPtr;
                              if (pvVar75 != (void *)0x0) {
                                pcVar4 = pcRam_?;
                                if ((pcRam_? == (code *)0x0) &&
                                   (pcVar4 = (code *)FUN_?(&UNK_?),
                                   pcVar4 == (code *)0x0)) goto code_?;
                                pcRam_? = pcVar4;
                                (*pcRam_?)(pvVar75);
                                pMVar76 = (this->fields).mesh;
                                values = (Vector3__Array *)0x0;
                                if (pMVar76 != (Mesh *)0x0) {
                                  if (cRam_? == '\0') {
                                    FUN_?(&
                                                  void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_
                                                 );
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  if (pAVar34 == (Array *)0x0) {
                                    iVar77 = 0;
                                  }
                                  else {
                                    iVar77 = mscorlib.dll::System::Array::Array_get_Length
                                                       (pAVar34,(MethodInfo *)0x0);
                                  }
                                  valuesArrayLength = 0;
                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                  Mesh_SetSizedArrayForChannel
                                            (pMVar76,VertexAttribute__Enum_Position,
                                             VertexAttributeFormat__Enum_Float32,3,pAVar34,iVar77,0,
                                             iVar77,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0)
                                  ;
                                  pMVar76 = (this->fields).mesh;
                                  values = (Vector3__Array *)0x0;
                                  if (pMVar76 != (Mesh *)0x0) {
                                    if (cRam_? == '\0') {
                                      FUN_?(&
                                                  void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Color>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Color_____UnityEngine__Rendering__MeshUpdateFlags_
                                                  );
                                      LOCK();
                                      UNLOCK();
                                      cRam_? = '\x01';
                                    }
                                    pAVar34 = pAStack_37;
                                    iVar77 = valuesArrayLength;
                                    if (pAStack_37 != (Array *)0x0) {
                                      iVar77 = mscorlib.dll::System::Array::Array_get_Length
                                                         (pAStack_37,(MethodInfo *)0x0);
                                    }
                                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                    Mesh_SetSizedArrayForChannel
                                              (pMVar76,VertexAttribute__Enum_Color,
                                               VertexAttributeFormat__Enum_Float32,4,pAVar34,iVar77,
                                               0,iVar77,MeshUpdateFlags__Enum_Default,
                                               (MethodInfo *)0x0);
                                    values = (Vector3__Array *)(this->fields).mesh;
                                    if (values != (Vector3__Array *)0x0) {
                                      if (cRam_? == '\0') {
                                        FUN_?(&
                                                  void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector2>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector2_____UnityEngine__Rendering__MeshUpdateFlags_
                                                  );
                                        LOCK();
                                        UNLOCK();
                                        cRam_? = '\x01';
                                      }
                                      if (pAVar35 != (Array *)0x0) {
                                        valuesArrayLength =
                                             mscorlib.dll::System::Array::Array_get_Length
                                                       (pAVar35,(MethodInfo *)0x0);
                                      }
                                      UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                      Mesh_SetSizedArrayForChannel
                                                ((Mesh *)values,VertexAttribute__Enum_TexCoord0,
                                                 VertexAttributeFormat__Enum_Float32,2,pAVar35,
                                                 valuesArrayLength,0,valuesArrayLength,
                                                 MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                                      pMVar76 = (this->fields).mesh;
                                      if (pMVar76 != (Mesh *)0x0) {
                                        UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                        Mesh_set_triangles(pMVar76,value,(MethodInfo *)0x0);
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
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        values = (this->fields)._._._._.m_CachedPtr;
        if (values != (Vector3__Array *)0x0) {
          pcVar4 = pcRam_?;
          if ((pcRam_? != (code *)0x0) ||
             (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 != (code *)0x0)) {
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
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)values,(MethodInfo *)0x0);
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
                while (ppMVar16 = ppMVar15 + 0x3052af3c,
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


/* Void findCoordinates(Int32) */

void Assembly-CSharp.dll::TrailArc::TrailArc_findCoordinates
               (TrailArc *this,int32_t index,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if ((index == 0) || ((this->fields).savedCnt + -2 <= index)) {
    return;
  }
  pVVar2 = (this->fields).saved;
  if (pVVar2 == (Vector3__Array *)0x0) {
DAT_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((index - 1U < (uint)pVVar2->max_length) && ((uint)index < (uint)pVVar2->max_length)) {
    uVar4 = pVVar2->vector[index].x;
    uVar5 = pVVar2->vector[index].y;
    fVar6 = pVVar2->vector[index].z;
    if (pVVar2 == (Vector3__Array *)0x0) goto DAT_?;
    if (index + 1U < (uint)pVVar2->max_length) {
      uVar7 = pVVar2->vector[(longlong)index + 1].x;
      uVar8 = pVVar2->vector[(longlong)index + 1].y;
      fVar9 = pVVar2->vector[(longlong)index + 1].z;
      if (pVVar2 == (Vector3__Array *)0x0) goto DAT_?;
      if (index + 2U < (uint)pVVar2->max_length) {
        uVar10 = pVVar2->vector[(longlong)index + -1].x;
        uVar11 = pVVar2->vector[(longlong)index + -1].y;
        fVar12 = ((float)uVar7 - (float)uVar10) * _UNK_?;
        fVar13 = (pVVar2->vector[(longlong)index + 1].z - pVVar2->vector[(longlong)index + -1].z)
                 * _UNK_?;
        fVar14 = ((float)uVar8 - (float)uVar11) * _UNK_?;
        uVar15 = pVVar2->vector[index].x;
        uVar16 = pVVar2->vector[index].y;
        uVar17 = pVVar2->vector[(longlong)index + 2].x;
        uVar18 = pVVar2->vector[(longlong)index + 2].y;
        fVar19 = ((float)uVar17 - (float)uVar15) * _UNK_?;
        fVar20 = (pVVar2->vector[(longlong)index + 2].z - pVVar2->vector[index].z) *
                 _UNK_?;
        fVar21 = ((float)uVar18 - (float)uVar16) * _UNK_?;
        iVar22 = index * (this->fields).segmentsPerPoint;
        if (iVar22 < (this->fields).segmentsPerPoint + iVar22) {
          fVar23 = _UNK_?;
          iVar24 = iVar22;
          do {
            pVVar2 = (this->fields).points;
            uVar25 = iVar24 - (this->fields).segmentsPerPoint;
            fVar26 = (float)(iVar24 - iVar22) * (this->fields).tRatio;
            fVar27 = fVar26 * fVar26;
            fVar28 = fVar27 * fVar26;
            fVar29 = ((fVar28 + fVar28) - fVar27 * fVar23) + fVar1;
            fVar30 = fVar27 * fVar23 - (fVar28 + fVar28);
            fVar23 = (fVar28 - (fVar27 + fVar27)) + fVar26;
            fVar28 = fVar28 - fVar27;
            if (pVVar2 == (Vector3__Array *)0x0) goto DAT_?;
            if ((uint)pVVar2->max_length <= uVar25) goto code_?;
            pVVar2->vector[(int)uVar25].x =
                 fVar30 * (float)uVar7 + fVar29 * (float)uVar4 + fVar23 * fVar12 + fVar19 * fVar28;
            pVVar2->vector[(int)uVar25].y =
                 fVar30 * (float)uVar8 + fVar29 * (float)uVar5 + fVar23 * fVar14 + fVar21 * fVar28;
            pVVar2->vector[(int)uVar25].z =
                 fVar30 * fVar9 + fVar29 * fVar6 + fVar23 * fVar13 + fVar20 * fVar28;
            fVar23 = _UNK_?;
            pVVar2 = (this->fields).savedUp;
            pVVar31 = (this->fields).pointsUp;
            if (pVVar2 == (Vector3__Array *)0x0) goto DAT_?;
            if (((uint)pVVar2->max_length <= (uint)index) ||
               ((uint)pVVar2->max_length <= index + 1U)) goto code_?;
            uVar32 = pVVar2->vector[(longlong)index + 1].x;
            uVar33 = pVVar2->vector[(longlong)index + 1].y;
            uVar34 = pVVar2->vector[index].x;
            uVar35 = pVVar2->vector[index].y;
            if (fVar26 < 0.0) {
              fVar26 = 0.0;
            }
            else if (fVar1 < fVar26) {
              fVar26 = fVar1;
            }
            fVar27 = pVVar2->vector[(longlong)index + 1].z;
            fVar29 = pVVar2->vector[index].z;
            fVar28 = pVVar2->vector[index].z;
            if (pVVar31 == (Vector3__Array *)0x0) goto DAT_?;
            if ((uint)pVVar31->max_length <= uVar25) goto code_?;
            iVar24 = iVar24 + 1;
            pVVar31->vector[(int)uVar25].x = ((float)uVar32 - (float)uVar34) * fVar26 + (float)uVar34;
            pVVar31->vector[(int)uVar25].y =
                 ((float)uVar33 - (float)uVar35) * fVar26 + (float)uVar35;
            pVVar31->vector[(int)uVar25].z = (fVar27 - fVar29) * fVar26 + fVar28;
          } while (iVar24 < (this->fields).segmentsPerPoint + iVar22);
        }
        (this->fields).pointCnt = iVar22;
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(), pcVar1 == (code *)0x0)) {
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
    info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                     ((MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar3 = mscorlib.dll::System::Number::Number_FormatSingle
                       (value_00,(String *)0x0,info,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_5
                       (StringLiteral_Points_at_time_,pSVar3,StringLiteral__u000A,(MethodInfo *)0x0)
    ;
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
        if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
             field_0x135 & 1) == 0) {
          FUN_?();
        }
        if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
          FUN_?();
        }
        aRStack_11[0]._pointer._value = (void *)0x0;
        aRStack_11[0]._length = 0;
        aRStack_11[0]._12_4_ = 0;
        pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                           (value,aRStack_11,(IFormatProvider *)0x0,(MethodInfo *)0x0);
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
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(), pcVar1 == (code *)0x0)) {
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
    info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                     ((MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar3 = mscorlib.dll::System::Number::Number_FormatSingle
                       (value_00,(String *)0x0,info,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_5
                       (StringLiteral_Saved_Points_at_time_,pSVar3,StringLiteral__u000A,
                        (MethodInfo *)0x0);
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
        if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
             field_0x135 & 1) == 0) {
          FUN_?();
        }
        if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
          FUN_?();
        }
        aRStack_11[0]._pointer._value = (void *)0x0;
        aRStack_11[0]._length = 0;
        aRStack_11[0]._12_4_ = 0;
        pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                           (value,aRStack_11,(IFormatProvider *)0x0,(MethodInfo *)0x0);
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


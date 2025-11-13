
/* Void CopyMaterial() */

void Assembly-CSharp.dll::SphereVolumeIndicator::SphereVolumeIndicator_CopyMaterial
               (SphereVolumeIndicator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Material);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).lineDotMaterial;
  this_00 = (Material *)FUN_?(TypeInfo__UnityEngine__Material);
  UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor_1
            (this_00,pMVar1,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).materialCopy = this_00;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).materialCopy >> 0xc);
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
  pLVar7 = (this->fields).rangeIndicatorXY;
  if (pLVar7 != (LineRenderer *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
              ((Renderer *)pLVar7,(this->fields).materialCopy,(MethodInfo *)0x0);
    pLVar7 = (this->fields).rangeIndicatorYZ;
    if (pLVar7 != (LineRenderer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
                ((Renderer *)pLVar7,(this->fields).materialCopy,(MethodInfo *)0x0);
      pLVar7 = (this->fields).rangeIndicatorZX;
      if (pLVar7 != (LineRenderer *)0x0) {
        pMVar1 = (this->fields).materialCopy;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                        ,pMVar1,0,in_R9,unaff_RDI);
          LOCK();
          UNLOCK();
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Material>_UnityEngine__Material_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pLVar7 == (LineRenderer *)0x0) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pvVar9 = (pLVar7->fields)._._._.m_CachedPtr;
        if (pvVar9 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar7,(MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((
            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Material>_UnityEngine__Material_
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?();
        }
        if (pMVar1 == (Material *)0x0) {
          pvVar10 = (void *)0x0;
        }
        else {
          pvVar10 = (pMVar1->fields)._.m_CachedPtr;
        }
        pcVar8 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcRam_? = pcVar8;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar9,pvVar10);
        return;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetLineWidths(Single) */

void Assembly-CSharp.dll::SphereVolumeIndicator::SphereVolumeIndicator_SetLineWidths
               (SphereVolumeIndicator *this,float w,MethodInfo *method)

{
  uVar1 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uVar2 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  pLVar3 = (this->fields).rangeIndicatorXY;
  if (pLVar3 != (LineRenderer *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_startWidth
              (pLVar3,w,(MethodInfo *)0x0);
    pLVar3 = (this->fields).rangeIndicatorXY;
    if (pLVar3 != (LineRenderer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_endWidth
                (pLVar3,w,(MethodInfo *)0x0);
      pLVar3 = (this->fields).rangeIndicatorYZ;
      if (pLVar3 != (LineRenderer *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_startWidth
                  (pLVar3,w,(MethodInfo *)0x0);
        pLVar3 = (this->fields).rangeIndicatorYZ;
        if (pLVar3 != (LineRenderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_endWidth
                    (pLVar3,w,(MethodInfo *)0x0);
          pLVar3 = (this->fields).rangeIndicatorZX;
          if (pLVar3 != (LineRenderer *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_startWidth
                      (pLVar3,w,(MethodInfo *)0x0);
            pLVar3 = (this->fields).rangeIndicatorZX;
            if (pLVar3 != (LineRenderer *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                              ,w,0,in_R9,uVar1,uVar2,unaff_RBX);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (pLVar3 == (LineRenderer *)0x0) {
                FUN_?();
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pvVar5 = (pLVar3->fields)._._._.m_CachedPtr;
              if (pvVar5 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar3,(MethodInfo *)0x0);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pcVar4 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                uVar1 = func_?(&UNK_?);
                FUN_?(uVar1,0);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam_?)(pvVar5,w);
              return;
            }
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


/* Void SetRadius(Single) */

void Assembly-CSharp.dll::SphereVolumeIndicator::SphereVolumeIndicator_SetRadius
               (SphereVolumeIndicator *this,float radius,MethodInfo *method)

{
  uStack_1 = (undefined *)CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__MainTex);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  fVar4 = 0.0;
  uStack_5 = 0;
  fStack_6 = _UNK_?;
  fVar7 = 0.0;
  uStack_8 = 0;
  uStack_9 = 0;
  fVar10 = _UNK_? / (float)(this->fields).circleSergmentCount;
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
  (*pcRam_?)(fVar10,&uStack_5);
  iVar13 = (this->fields).circleSergmentCount + 1;
  positions = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,iVar13);
  uVar14 = 0;
  lVar15 = (longlong)iVar13;
  if (0 < iVar13) {
    pVVar16 = positions->vector;
    fVar17 = (uStack_8._4_4_ + uStack_8._4_4_) * (float)uStack_8;
    fVar18 = ((float)uStack_9 + (float)uStack_9) * uStack_8._4_4_;
    fVar10 = (uStack_8._4_4_ + uStack_8._4_4_) * uStack_8._4_4_;
    fVar3 = ((float)uStack_9 + (float)uStack_9) * (float)uStack_9;
    fVar19 = ((float)uStack_8 + (float)uStack_8) * (float)uStack_8;
    fVar20 = ((float)uStack_9 + (float)uStack_9) * (float)uStack_8;
    fVar21 = (uStack_8._4_4_ + uStack_8._4_4_) * uStack_9._4_4_;
    fVar22 = ((float)uStack_9 + (float)uStack_9) * uStack_9._4_4_;
    fVar23 = ((float)uStack_8 + (float)uStack_8) * uStack_9._4_4_;
    fVar24 = _UNK_? - (fVar3 + fVar10);
    fVar25 = _UNK_? - (fVar10 + fVar19);
    fVar19 = _UNK_? - (fVar3 + fVar19);
    uVar26 = uVar14;
    uVar27 = uVar14;
    fVar10 = radius;
    do {
      fVar28 = fVar4 * (fVar22 + fVar17);
      fVar29 = fVar4 * (fVar20 - fVar21);
      fVar4 = fVar10 * (fVar17 - fVar22) + fVar4 * fVar24 + fVar7 * (fVar21 + fVar20);
      fVar3 = fVar7 * (fVar18 - fVar23);
      fVar7 = fVar29 + fVar10 * (fVar23 + fVar18) + fVar7 * fVar25;
      fVar10 = fVar28 + fVar10 * fVar19 + fVar3;
      if (positions == (Vector3__Array *)0x0) goto DAT_?;
      if ((uint)positions->max_length <= (uint)uVar26) goto code_?;
      uVar26 = (ulonglong)((uint)uVar26 + 1);
      uVar27 = uVar27 + 1;
      pVVar16->x = fVar4;
      pVVar16->y = fVar10;
      pVVar16->z = fVar7;
      pVVar16 = pVVar16 + 1;
      fVar3 = _UNK_?;
    } while ((longlong)uVar27 < lVar15);
  }
  pLVar30 = (this->fields).rangeIndicatorXY;
  if (pLVar30 != (LineRenderer *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar31 = (pLVar30->fields)._._._.m_CachedPtr;
    if (pvVar31 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar30,(MethodInfo *)0x0);
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
    (*pcRam_?)(pvVar31,iVar13);
    pLVar30 = (this->fields).rangeIndicatorXY;
    if (pLVar30 != (LineRenderer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPositions
                (pLVar30,positions,(MethodInfo *)0x0);
      iVar32 = (this->fields).circleSergmentCount;
      uStack_5 = (ulonglong)(uint)fVar3;
      fStack_6 = 0.0;
      uStack_8 = 0;
      uStack_9 = 0;
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
      (*pcRam_?)(fVar2 / (float)iVar32,&uStack_5);
      if (0 < iVar13) {
        pVVar16 = positions->vector;
        uVar26 = uVar14;
        uVar27 = uVar14;
        do {
          if (positions == (Vector3__Array *)0x0) goto DAT_?;
          uVar33 = (uint)uVar26;
          if (((uint)positions->max_length <= uVar33) ||
             (pVVar16->z = pVVar16->x, (uint)positions->max_length <= uVar33))
          goto code_?;
          pVVar16->x = 0.0;
          uVar26 = (ulonglong)(uVar33 + 1);
          pVVar16 = pVVar16 + 1;
          uVar27 = uVar27 + 1;
        } while ((longlong)uVar27 < lVar15);
      }
      pLVar30 = (this->fields).rangeIndicatorYZ;
      if (pLVar30 != (LineRenderer *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar31 = (pLVar30->fields)._._._.m_CachedPtr;
        if (pvVar31 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar30,(MethodInfo *)0x0);
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
        (*pcRam_?)(pvVar31,iVar13);
        pLVar30 = (this->fields).rangeIndicatorYZ;
        if (pLVar30 != (LineRenderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPositions
                    (pLVar30,positions,(MethodInfo *)0x0);
          iVar32 = (this->fields).circleSergmentCount;
          uStack_5 = (ulonglong)(uint)fVar3 << 0x20;
          fStack_6 = 0.0;
          uStack_8 = 0;
          uStack_9 = 0;
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
          (*pcRam_?)(fVar2 / (float)iVar32,&uStack_5);
          if (0 < iVar13) {
            pfVar34 = &positions->vector[0].y;
            uVar26 = uVar14;
            do {
              if (positions == (Vector3__Array *)0x0) goto DAT_?;
              uVar33 = (uint)uVar14;
              if (((uint)positions->max_length <= uVar33) ||
                 (((Vector3 *)(pfVar34 + -1))->x = *pfVar34, (uint)positions->max_length <= uVar33)) {
code_?:
                FUN_?();
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              *pfVar34 = 0.0;
              uVar14 = (ulonglong)(uVar33 + 1);
              pfVar34 = pfVar34 + 3;
              uVar26 = uVar26 + 1;
            } while ((longlong)uVar26 < lVar15);
          }
          pLVar30 = (this->fields).rangeIndicatorZX;
          if (pLVar30 != (LineRenderer *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar31 = (pLVar30->fields)._._._.m_CachedPtr;
            if (pvVar31 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar30,(MethodInfo *)0x0);
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
            (*pcRam_?)(pvVar31,iVar13);
            pLVar30 = (this->fields).rangeIndicatorZX;
            if (pLVar30 != (LineRenderer *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPositions
                        (pLVar30,positions,(MethodInfo *)0x0);
              this_00 = (this->fields).materialCopy;
              fVar2 = (this->fields).lineDotDensity;
              if (this_00 != (Material *)0x0) {
                name = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                 (StringLiteral__MainTex,(MethodInfo *)0x0);
                scale.y = fVar3;
                scale.x = radius * fVar2;
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureScaleImpl
                          (this_00,name,scale,(MethodInfo *)0x0);
                pLVar30 = (this->fields).rangeIndicatorXY;
                if (pLVar30 != (LineRenderer *)0x0) {
                  fVar3 = (this->fields).lineWidth;
                  UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_startWidth
                            (pLVar30,fVar3,(MethodInfo *)0x0);
                  pLVar30 = (this->fields).rangeIndicatorXY;
                  if (pLVar30 != (LineRenderer *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_endWidth
                              (pLVar30,fVar3,(MethodInfo *)0x0);
                    pLVar30 = (this->fields).rangeIndicatorYZ;
                    if (pLVar30 != (LineRenderer *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::
                      LineRenderer_set_startWidth(pLVar30,fVar3,(MethodInfo *)0x0);
                      pLVar30 = (this->fields).rangeIndicatorYZ;
                      if (pLVar30 != (LineRenderer *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::
                        LineRenderer_set_endWidth(pLVar30,fVar3,(MethodInfo *)0x0);
                        pLVar30 = (this->fields).rangeIndicatorZX;
                        if (pLVar30 != (LineRenderer *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::
                          LineRenderer_set_startWidth(pLVar30,fVar3,(MethodInfo *)0x0);
                          pLVar30 = (this->fields).rangeIndicatorZX;
                          if (pLVar30 != (LineRenderer *)0x0) {
                            if (cRam_? == '\0') {
                              FUN_?(&
                                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                                           );
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            if (pLVar30 == (LineRenderer *)0x0) {
                              FUN_?();
                              pcVar11 = (code *)swi(3);
                              (*pcVar11)();
                              return;
                            }
                            pvVar31 = (pLVar30->fields)._._._.m_CachedPtr;
                            if (pvVar31 == (void *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                              ThrowHelper_2_ThrowNullReferenceException
                                        ((Object *)pLVar30,(MethodInfo *)0x0);
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                            (*pcRam_?)(pvVar31);
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
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* SphereVolumeIndicator() */

void Assembly-CSharp.dll::SphereVolumeIndicator::SphereVolumeIndicator__ctor
               (SphereVolumeIndicator *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).lineDotDensity = 22.0;
  (this->fields).circleSergmentCount = 8;
  (this->fields).lineWidth = 1.0;
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
                while (pcVar16 = (char *)((longlong)ppMVar15 + 0xADDR),
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *pcVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
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


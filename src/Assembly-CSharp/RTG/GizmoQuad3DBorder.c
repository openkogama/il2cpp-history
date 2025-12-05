
/* Single GetRealBoxDepth(Single) */

float Assembly-CSharp.dll::RTG::GizmoQuad3DBorder::GizmoQuad3DBorder_GetRealBoxDepth
                (GizmoQuad3DBorder *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._planeSlider;
  if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
    method = (MethodInfo *)0xd8;
    lVar2 = 0xd8;
    if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      lVar2 = 0xd0;
    }
    lVar2 = *(longlong *)((longlong)&pGVar1->klass + lVar2);
    if (lVar2 != 0) {
      uVar3 = 0xd8;
      if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        uVar3 = 0xd0;
      }
      return zoomFactor * *(float *)(lVar2 + 0x34) *
             *(float *)(*(longlong *)((longlong)&pGVar1->klass + (ulonglong)uVar3) + 0x14);
    }
  }
  FUN_?(this,pGVar1,method);
  pcVar4 = (code *)swi(3);
  fVar5 = (float)(*pcVar4)();
  return fVar5;
}


/* Single GetRealBoxHeight(Single) */

float Assembly-CSharp.dll::RTG::GizmoQuad3DBorder::GizmoQuad3DBorder_GetRealBoxHeight
                (GizmoQuad3DBorder *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._planeSlider;
  if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
    method = (MethodInfo *)0xd8;
    lVar2 = 0xd8;
    if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      lVar2 = 0xd0;
    }
    lVar2 = *(longlong *)((longlong)&pGVar1->klass + lVar2);
    if (lVar2 != 0) {
      uVar3 = 0xd8;
      if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        uVar3 = 0xd0;
      }
      return zoomFactor * *(float *)(lVar2 + 0x30) *
             *(float *)(*(longlong *)((longlong)&pGVar1->klass + (ulonglong)uVar3) + 0x14);
    }
  }
  FUN_?(this,pGVar1,method);
  pcVar4 = (code *)swi(3);
  fVar5 = (float)(*pcVar4)();
  return fVar5;
}


/* Void OnGizmoPreUpdateBegin(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoQuad3DBorder::GizmoQuad3DBorder_OnGizmoPreUpdateBegin
               (GizmoQuad3DBorder *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoQuad3DBorderController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._targetHandle;
  uVar2 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uVar3 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  if ((pGVar1 != (GizmoHandle *)0x0) && (this_00 = (pGVar1->fields)._gizmo, this_00 != (Gizmo *)0x0)
     ) {
    camera = Gizmo::Gizmo_get_FocusCamera(this_00,(MethodInfo *)0x0);
    pGVar4 = (this->fields)._planeSlider;
    if (pGVar4 != (GizmoPlaneSlider3D *)0x0) {
      lVar5 = 0xd8;
      lVar6 = 0xd8;
      if ((pGVar4->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        lVar6 = 0xd0;
      }
      lVar6 = *(longlong *)((longlong)&pGVar4->klass + lVar6);
      if (lVar6 != 0) {
        fVar7 = _UNK_?;
        if (*(char *)(lVar6 + 0x18) != '\0') {
          pGVar1 = (pGVar4->fields)._._handle;
          if (pGVar1 == (GizmoHandle *)0x0) goto code_?;
          fVar7 = GizmoHandle::GizmoHandle_GetZoomFactor(pGVar1,camera,(MethodInfo *)0x0);
        }
        pGVar4 = (this->fields)._planeSlider;
        if (pGVar4 != (GizmoPlaneSlider3D *)0x0) {
          lVar6 = 0xd8;
          if ((pGVar4->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
            lVar6 = 0xd0;
          }
          lVar6 = *(longlong *)((longlong)&pGVar4->klass + lVar6);
          if ((lVar6 != 0) &&
             (pIVar8 = (this->fields)._controllers,
             pIVar8 != (IGizmoQuad3DBorderController__Array *)0x0)) {
            uVar9 = *(uint *)(lVar6 + 0x98);
            if ((uint)pIVar8->max_length <= uVar9) {
code_?:
              FUN_?();
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if (pIVar8->vector[(int)uVar9] != (IGizmoQuad3DBorderController *)0x0) {
              FUN_?(0,TypeInfo__RTG__IGizmoQuad3DBorderController);
              pGVar4 = (this->fields)._planeSlider;
              if (pGVar4 != (GizmoPlaneSlider3D *)0x0) {
                if ((pGVar4->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                  lVar5 = 0xd0;
                }
                lVar6 = *(longlong *)((longlong)&pGVar4->klass + lVar5);
                if ((lVar6 != 0) &&
                   (pIVar8 = (this->fields)._controllers,
                   pIVar8 != (IGizmoQuad3DBorderController__Array *)0x0)) {
                  uVar9 = *(uint *)(lVar6 + 0x98);
                  if ((uint)pIVar8->max_length <= uVar9) goto code_?;
                  pIVar11 = pIVar8->vector[(int)uVar9];
                  if (pIVar11 != (IGizmoQuad3DBorderController *)0x0) {
                    pIVar12 = pIVar11->klass;
                    uVar13 = 0;
                    uVar14._0_1_ = (pIVar12->_1).rank;
                    uVar14._1_1_ = (pIVar12->_1).minimumAlignment;
                    if (uVar14 != 0) {
                      do {
                        if (pIVar12->interfaceOffsets[uVar13].interfaceType ==
                            (Il2CppClass *)TypeInfo__RTG__IGizmoQuad3DBorderController) {
                          ppIVar15 = &(&(pIVar12->vtable).UpdateHandles)
                                     [pIVar12->interfaceOffsets[uVar13].offset + 1].methodPtr;
                          goto code_?;
                        }
                        uVar16 = (short)uVar13 + 1;
                        uVar13 = (ulonglong)uVar16;
                      } while (uVar16 < uVar14);
                    }
                    ppIVar15 = (Il2CppMethodPointer *)
                              FUN_?(pIVar11,TypeInfo__RTG__IGizmoQuad3DBorderController,1,
                                            fVar7,uVar2,uVar3,unaff_RDI);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (**ppIVar15)(pIVar11,*ppIVar15,(MethodInfo *)ppIVar15[1]);
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
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnQuadShapeChanged() */

void Assembly-CSharp.dll::RTG::GizmoQuad3DBorder::GizmoQuad3DBorder_OnQuadShapeChanged
               (GizmoQuad3DBorder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoQuad3DBorderController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._targetHandle;
  if ((pGVar1 != (GizmoHandle *)0x0) && (this_00 = (pGVar1->fields)._gizmo, this_00 != (Gizmo *)0x0)
     ) {
    camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
    pGVar2 = (this->fields)._planeSlider;
    if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
      lVar3 = 0xd8;
      lVar4 = 0xd8;
      if ((pGVar2->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        lVar4 = 0xd0;
      }
      lVar4 = *(longlong *)((longlong)&pGVar2->klass + lVar4);
      if (lVar4 != 0) {
        if (*(char *)(lVar4 + 0x18) != '\0') {
          pGVar1 = (pGVar2->fields)._._handle;
          if (pGVar1 == (GizmoHandle *)0x0) goto code_?;
          GizmoHandle::GizmoHandle_GetZoomFactor(pGVar1,camera,(MethodInfo *)0x0);
        }
        pGVar2 = (this->fields)._planeSlider;
        if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
          if ((pGVar2->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
            lVar3 = 0xd0;
          }
          lVar4 = *(longlong *)((longlong)&pGVar2->klass + lVar3);
          if ((lVar4 != 0) &&
             (pIVar5 = (this->fields)._controllers,
             pIVar5 != (IGizmoQuad3DBorderController__Array *)0x0)) {
            uVar6 = *(uint *)(lVar4 + 0x98);
            if ((uint)pIVar5->max_length <= uVar6) {
              FUN_?();
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pIVar8 = pIVar5->vector[(int)uVar6];
            if (pIVar8 != (IGizmoQuad3DBorderController *)0x0) {
              pIVar9 = pIVar8->klass;
              uVar10 = 0;
              uVar11._0_1_ = (pIVar9->_1).rank;
              uVar11._1_1_ = (pIVar9->_1).minimumAlignment;
              if (uVar11 != 0) {
                do {
                  if (pIVar9->interfaceOffsets[uVar10].interfaceType ==
                      (Il2CppClass *)TypeInfo__RTG__IGizmoQuad3DBorderController) {
                    ppIVar12 = &(&(pIVar9->vtable).UpdateHandles)
                               [pIVar9->interfaceOffsets[uVar10].offset + 2].methodPtr;
                    goto code_?;
                  }
                  uVar13 = (short)uVar10 + 1;
                  uVar10 = (ulonglong)uVar13;
                } while (uVar13 < uVar11);
              }
              ppIVar12 = (Il2CppMethodPointer *)
                        FUN_?(pIVar8,TypeInfo__RTG__IGizmoQuad3DBorderController,2);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**ppIVar12)(pIVar8,*ppIVar12,(MethodInfo *)ppIVar12[1]);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Render(Camera) */

void Assembly-CSharp.dll::RTG::GizmoQuad3DBorder::GizmoQuad3DBorder_Render
               (GizmoQuad3DBorder *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Comparison<int>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<int>__Sort_System__Comparison<int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__GizmoQuad3DBorder____c__DisplayClass39_0___Render_b__0_int__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoQuad3DBorder____c__DisplayClass39_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLStack_1 = (List_1_System_Int32_ *)0x0;
  uStack_2 = 0;
  iStack_3 = 0;
  uStack_4 = 0;
  lVar5 = FUN_?(TypeInfo__RTG__GizmoQuad3DBorder____c__DisplayClass39_0);
  if (lVar5 == 0) {
code_?:
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  *(GizmoQuad3DBorder **)(lVar5 + 0x10) = this;
  if (iRam_? != 0) {
    uVar7 = (uint)(lVar5 + 0x10U >> 0xc);
    lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
    do {
      uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
      puVar10 = (ulonglong *)(lVar8 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  if ((this->fields)._isVisible == 0) {
    return;
  }
  pGVar12 = (this->fields)._planeSlider;
  if (pGVar12 == (GizmoPlaneSlider3D *)0x0) goto code_?;
  lVar8 = 0xd8;
  if ((pGVar12->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
    lVar8 = 0xd0;
  }
  lVar8 = *(longlong *)((longlong)&pGVar12->klass + lVar8);
  if (lVar8 == 0) goto code_?;
  fVar13 = *(float *)(lVar8 + 0x6c);
  fVar14 = *(float *)(lVar8 + 0x70);
  uVar15 = *(undefined4 *)(lVar8 + 0x74);
  uVar16 = *(undefined4 *)(lVar8 + 0x78);
  pGVar17 = (this->fields)._targetHandle;
  if ((pGVar17 == (GizmoHandle *)0x0) || (pGVar18 = (pGVar17->fields)._gizmo, pGVar18 == (Gizmo *)0x0))
  goto code_?;
  if ((pGVar18->fields)._hoverInfo._handleId == (((this->fields)._targetHandle)->fields)._id) {
    fVar13 = *(float *)(lVar8 + 0x7c);
    fVar14 = *(float *)(lVar8 + 0x80);
    uVar15 = *(undefined4 *)(lVar8 + 0x84);
    uVar16 = *(undefined4 *)(lVar8 + 0x88);
  }
  if (*(int *)(lVar8 + 0x98) == 0) {
    if (*(int *)&(TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_01 = (GizmoLineMaterial *)
              Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                        (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
    if (this_01 != (GizmoLineMaterial *)0x0) {
      GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults(this_01,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral__Color);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar19 = GizmoLineMaterial::GizmoLineMaterial_get_Material(this_01,(MethodInfo *)0x0);
      if (pMVar19 != (Material *)0x0) {
        auStack_20._4_4_ = fVar14;
        auStack_20._0_4_ = fVar13;
        stack0xffffffffffffffa0 = (List_1_System_Int32_ **)CONCAT44(uVar16,uVar15);
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                  (pMVar19,StringLiteral__Color,(Color *)auStack_20,(MethodInfo *)0x0);
        pMVar19 = GizmoLineMaterial::GizmoLineMaterial_get_Material(this_01,(MethodInfo *)0x0);
        if (pMVar19 != (Material *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                    (pMVar19,0,(MethodInfo *)0x0);
          pGVar17 = (this->fields)._targetHandle;
          if (pGVar17 != (GizmoHandle *)0x0) {
            GizmoHandle::GizmoHandle_Render3DWire_1
                      (pGVar17,(this->fields)._borderQuadIndex,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    goto code_?;
  }
  if (*(int *)&(TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = (GizmoSolidMaterial *)
            Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                      (MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__get_Get__);
  if (this_00 == (GizmoSolidMaterial *)0x0) goto code_?;
  GizmoSolidMaterial::GizmoSolidMaterial_ResetValuesToSensibleDefaults(this_00,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__Color);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar19 = GizmoSolidMaterial::GizmoSolidMaterial_get_Material(this_00,(MethodInfo *)0x0);
  if (pMVar19 == (Material *)0x0) goto code_?;
  auStack_20._4_4_ = fVar14;
  auStack_20._0_4_ = fVar13;
  stack0xffffffffffffffa0 = (List_1_System_Int32_ **)CONCAT44(uVar16,uVar15);
  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
            (pMVar19,StringLiteral__Color,(Color *)auStack_20,(MethodInfo *)0x0);
  GizmoSolidMaterial::GizmoSolidMaterial_SetLit
            (this_00,*(int *)(lVar8 + 0x90) == 0,(MethodInfo *)0x0);
  bVar21 = GizmoSolidMaterial::GizmoSolidMaterial_get_IsLit(this_00,(MethodInfo *)0x0);
  if (bVar21 != 0) {
    if ((camera == (Camera *)0x0) ||
       (pTVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)camera,(MethodInfo *)0x0), pTVar22 == (Transform *)0x0))
    goto code_?;
    pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                        ((Vector3 *)auStack_20,pTVar22,(MethodInfo *)0x0);
    VStack_24.x = pVVar23->x;
    VStack_24.y = pVVar23->y;
    VStack_24.z = pVVar23->z;
    GizmoSolidMaterial::GizmoSolidMaterial_SetLightDirection(this_00,&VStack_24,(MethodInfo *)0x0);
  }
  pMVar19 = GizmoSolidMaterial::GizmoSolidMaterial_get_Material(this_00,(MethodInfo *)0x0);
  if (((pMVar19 == (Material *)0x0) ||
      (UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                 (pMVar19,0,(MethodInfo *)0x0), camera == (Camera *)0x0)) ||
     (pTVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)camera,(MethodInfo *)0x0), pTVar22 == (Transform *)0x0))
  goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_24.x = 0.0;
  VStack_24.y = 0.0;
  VStack_24.z = 0.0;
  pvVar25 = (pTVar22->fields)._._.m_CachedPtr;
  if (pvVar25 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar22,(MethodInfo *)0x0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar26 = func_?(&UNK_?);
    FUN_?(uVar26,0);
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
code_?:
    FUN_?();
  }
  else {
    pcRam_? = pcVar6;
    (*pcRam_?)(pvVar25,&VStack_24);
    *(undefined8 *)(lVar5 + 0x18) = VStack_24._0_8_;
    *(float *)(lVar5 + 0x20) = VStack_24.z;
    pLVar27 = (this->fields)._sortedBoxIndices;
    uVar26 = FUN_?(TypeInfo__System__Comparison<int>);
    FUN_?(uVar26,lVar5,
                  MethodInfo__RTG__GizmoQuad3DBorder____c__DisplayClass39_0___Render_b__0_int__int_)
    ;
    if (pLVar27 == (List_1_System_Int32_ *)0x0) goto code_?;
    FUN_?(pLVar27,uVar26);
    if (*(int *)(lVar8 + 0x94) != 0) {
      pLVar27 = (this->fields)._sortedBoxIndices;
      if (pLVar27 == (List_1_System_Int32_ *)0x0) goto code_?;
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)auStack_20 >> 0xc);
        lVar5 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar10 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      iStack_3 = (pLVar27->fields)._version;
      uStack_28 = 0;
      uStack_2 = 0;
      uStack_4 = 0;
      auStack_20._0_4_ = 0.0;
      auStack_20._4_4_ = 0.0;
      unique0x00009c00 = &pLStack_1;
      pLStack_1 = pLVar27;
      while (pLStack_1 != (List_1_System_Int32_ *)0x0) {
        if ((iStack_3 != (pLStack_1->fields)._version) ||
           (lVar5 = (longlong)(int)uStack_2, (uint)(pLStack_1->fields)._size <= uStack_2)) {
          if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__->
               klass->field_0x135 & 1) == 0) {
            FUN_?();
          }
          if (pLStack_1 == (List_1_System_Int32_ *)0x0) goto code_?;
          if (iStack_3 == (pLStack_1->fields)._version) {
            return;
          }
          goto code_?;
        }
        pIVar29 = (pLStack_1->fields)._items;
        if (pIVar29 == (Int32__Array *)0x0) goto code_?;
        if ((uint)pIVar29->max_length <= uStack_2) goto code_?;
        uStack_4 = CONCAT44(uStack_4._4_4_,pIVar29->vector[lVar5]);
        uStack_2 = uStack_2 + 1;
        pGVar17 = (this->fields)._targetHandle;
        if (pGVar17 == (GizmoHandle *)0x0) goto code_?;
        GizmoHandle::GizmoHandle_Render3DWire_1(pGVar17,pIVar29->vector[lVar5],(MethodInfo *)0x0);
      }
      goto code_?;
    }
    pLVar27 = (this->fields)._sortedBoxIndices;
    if (pLVar27 == (List_1_System_Int32_ *)0x0) goto code_?;
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)auStack_20 >> 0xc);
      lVar5 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
      do {
        uVar9 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar10 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    iStack_3 = (pLVar27->fields)._version;
    uStack_28 = 0;
    uStack_2 = 0;
    uStack_4 = 0;
    auStack_20._0_4_ = 0.0;
    auStack_20._4_4_ = 0.0;
    unique0x00009c00 = &pLStack_1;
    pLStack_1 = pLVar27;
    while (pLStack_1 != (List_1_System_Int32_ *)0x0) {
      if ((iStack_3 != (pLStack_1->fields)._version) ||
         (lVar5 = (longlong)(int)uStack_2, (uint)(pLStack_1->fields)._size <= uStack_2)) {
        if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__->klass
             ->field_0x135 & 1) == 0) {
          FUN_?();
        }
        if (pLStack_1 == (List_1_System_Int32_ *)0x0) goto code_?;
        if (iStack_3 == (pLStack_1->fields)._version) {
          return;
        }
        goto code_?;
      }
      pIVar29 = (pLStack_1->fields)._items;
      if (pIVar29 == (Int32__Array *)0x0) goto code_?;
      if ((uint)pIVar29->max_length <= uStack_2) goto code_?;
      uStack_4 = CONCAT44(uStack_4._4_4_,pIVar29->vector[lVar5]);
      uStack_2 = uStack_2 + 1;
      pGVar17 = (this->fields)._targetHandle;
      if (pGVar17 == (GizmoHandle *)0x0) goto code_?;
      GizmoHandle::GizmoHandle_Render3DSolid_1(pGVar17,pIVar29->vector[lVar5],(MethodInfo *)0x0);
    }
  }
  FUN_?();
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetHoverable(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoQuad3DBorder::GizmoQuad3DBorder_SetHoverable
               (GizmoQuad3DBorder *this,bool isHoverable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._isHoverable = isHoverable;
  pGVar1 = (this->fields)._targetHandle;
  if (pGVar1 != (GizmoHandle *)0x0) {
    GizmoHandle::GizmoHandle_Set3DShapeHoverable
              (pGVar1,(this->fields)._borderQuadIndex,isHoverable,(MethodInfo *)0x0);
    pLVar2 = (this->fields)._sortedBoxIndices;
    if (pLVar2 != (List_1_System_Int32_ *)0x0) {
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
        puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar6 = *puVar5;
          LOCK();
          uVar7 = *puVar5;
          if (uVar6 == uVar7) {
            *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (uVar6 != uVar7);
      }
      iStack_8 = (pLVar2->fields)._version;
      uStack_9 = 0;
      uStack_4._0_4_ = SUB84(pLVar2,0);
      uStack_4._4_4_ = (undefined4)((ulonglong)pLVar2 >> 0x20);
      uStack_10 = (undefined4)uStack_4;
      uStack_11 = uStack_4._4_4_;
      uStack_12 = 0;
      uStack_13 = 0;
      uStack_4 = 0;
      puStack_14 = &uStack_10;
      cVar15 = cRam_?;
      do {
        lVar16 = CONCAT44(uStack_11,uStack_10);
        if (lVar16 == 0) {
code_?:
          FUN_?();
          FUN_?();
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        if ((iStack_8 != *(int *)(lVar16 + 0x1c)) || (*(uint *)(lVar16 + 0x18) <= uStack_12)) {
          if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__->
               klass->field_0x135 & 1) == 0) {
            FUN_?();
            lVar16 = CONCAT44(uStack_11,uStack_10);
          }
          if (lVar16 != 0) {
            if (iStack_8 == *(int *)(lVar16 + 0x1c)) {
              return;
            }
            goto code_?;
          }
code_?:
          FUN_?();
          goto code_?;
        }
        lVar16 = *(longlong *)(lVar16 + 0x10);
        if (lVar16 == 0) {
code_?:
          FUN_?();
code_?:
          mscorlib.dll::System::ThrowHelper::
          ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                    ((MethodInfo *)0x0);
          goto code_?;
        }
        if (*(uint *)(lVar16 + 0x18) <= uStack_12) {
          FUN_?();
code_?:
          FUN_?();
code_?:
          FUN_?();
code_?:
          FUN_?();
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
code_?:
          FUN_?();
code_?:
          FUN_?();
          goto code_?;
        }
        uVar3 = *(uint *)(lVar16 + 0x20 + (longlong)(int)uStack_12 * 4);
        uStack_13 = CONCAT44(uStack_13._4_4_,uVar3);
        uStack_12 = uStack_12 + 1;
        pGVar1 = (this->fields)._targetHandle;
        if (pGVar1 == (GizmoHandle *)0x0) goto code_?;
        if (cVar15 == '\0') {
          FUN_?();
          LOCK();
          UNLOCK();
          cVar15 = '\x01';
          cRam_? = '\x01';
        }
        pLVar18 = (pGVar1->fields)._3DShapes;
        if (pLVar18 == (List_1_RTG_GizmoHandleShape3D_ *)0x0) goto code_?;
        if ((uint)(pLVar18->fields)._size <= uVar3) goto code_?;
        pGVar19 = (pLVar18->fields)._items;
        if (pGVar19 == (GizmoHandleShape3D__Array *)0x0) goto code_?;
        if ((uint)pGVar19->max_length <= uVar3) goto code_?;
        if (pGVar19->vector[(int)uVar3] == (GizmoHandleShape3D *)0x0) goto code_?;
        (pGVar19->vector[(int)uVar3]->fields)._isHoverable = isHoverable;
      } while( true );
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void SetVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoQuad3DBorder::GizmoQuad3DBorder_SetVisible
               (GizmoQuad3DBorder *this,bool isVisible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoQuad3DBorderController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._planeSlider;
  (this->fields)._isVisible = isVisible;
  if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
    lVar2 = 0xd8;
    lVar3 = 0xd8;
    if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      lVar3 = 0xd0;
    }
    lVar3 = *(longlong *)((longlong)&pGVar1->klass + lVar3);
    if ((lVar3 != 0) &&
       (pIVar4 = (this->fields)._controllers, pIVar4 != (IGizmoQuad3DBorderController__Array *)0x0))
    {
      uVar5 = *(uint *)(lVar3 + 0x98);
      if ((uint)pIVar4->max_length <= uVar5) {
code_?:
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (pIVar4->vector[(int)uVar5] != (IGizmoQuad3DBorderController *)0x0) {
        FUN_?(0);
        if ((this->fields)._isVisible == 0) {
          return;
        }
        pGVar7 = (this->fields)._targetHandle;
        if ((pGVar7 != (GizmoHandle *)0x0) &&
           (this_00 = (pGVar7->fields)._gizmo, this_00 != (Gizmo *)0x0)) {
          camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
          pGVar1 = (this->fields)._planeSlider;
          if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
            uVar5 = 0xd8;
            if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
              uVar5 = 0xd0;
            }
            lVar3 = *(longlong *)((longlong)&pGVar1->klass + (ulonglong)uVar5);
            if (lVar3 != 0) {
              fVar8 = _UNK_?;
              if (*(char *)(lVar3 + 0x18) != '\0') {
                pGVar7 = (pGVar1->fields)._._handle;
                if (pGVar7 == (GizmoHandle *)0x0) goto code_?;
                fVar8 = GizmoHandle::GizmoHandle_GetZoomFactor(pGVar7,camera,(MethodInfo *)0x0);
              }
              pGVar1 = (this->fields)._planeSlider;
              if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
                if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                  lVar2 = 0xd0;
                }
                lVar3 = *(longlong *)((longlong)&pGVar1->klass + lVar2);
                if ((lVar3 != 0) &&
                   (pIVar4 = (this->fields)._controllers,
                   pIVar4 != (IGizmoQuad3DBorderController__Array *)0x0)) {
                  uVar5 = *(uint *)(lVar3 + 0x98);
                  if ((uint)pIVar4->max_length <= uVar5) goto code_?;
                  if (pIVar4->vector[(int)uVar5] != (IGizmoQuad3DBorderController *)0x0) {
                    FUN_?(1,TypeInfo__RTG__IGizmoQuad3DBorderController,
                                  pIVar4->vector[(int)uVar5],fVar8);
                    GizmoQuad3DBorder_OnQuadShapeChanged(this,(MethodInfo *)0x0);
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
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* GizmoQuad3DBorder(GizmoPlaneSlider3D, GizmoHandle, QuadShape3D) */

void Assembly-CSharp.dll::RTG::GizmoQuad3DBorder::GizmoQuad3DBorder__ctor
               (GizmoQuad3DBorder *this,GizmoPlaneSlider3D *planeSlider,GizmoHandle *targetHandle,
               QuadShape3D *targetQuad,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxShape3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoBoxQuad3DBorderController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPreUpdateBeginHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoQuad3DBorderControllerData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__RTG__GizmoQuad3DBorderType);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__GizmoQuad3DBorder__OnGizmoPreUpdateBegin_RTG__Gizmo_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoThinQuad3DBorderController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IGizmoQuad3DBorderController);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__QuadShape3D);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._isVisible = 1;
  (this->fields)._isHoverable = 1;
  pQVar1 = (QuadShape3D *)FUN_?(TypeInfo__RTG__QuadShape3D);
  QuadShape3D::QuadShape3D__ctor(pQVar1,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._borderQuad = pQVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._borderQuad >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pBVar7 = (BoxShape3D *)FUN_?(TypeInfo__RTG__BoxShape3D);
  BoxShape3D::BoxShape3D__ctor(pBVar7,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._topBox = pBVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._topBox >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pBVar7 = (BoxShape3D *)FUN_?(TypeInfo__RTG__BoxShape3D);
  BoxShape3D::BoxShape3D__ctor(pBVar7,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._rightBox = pBVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._rightBox >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pBVar7 = (BoxShape3D *)FUN_?(TypeInfo__RTG__BoxShape3D);
  BoxShape3D::BoxShape3D__ctor(pBVar7,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._bottomBox = pBVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._bottomBox >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pBVar7 = (BoxShape3D *)FUN_?(TypeInfo__RTG__BoxShape3D);
  BoxShape3D::BoxShape3D__ctor(pBVar7,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._leftBox = pBVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._leftBox >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pBVar7 = (BoxShape3D *)FUN_?(TypeInfo__RTG__BoxShape3D);
  BoxShape3D::BoxShape3D__ctor(pBVar7,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._topLeftBox = pBVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._topLeftBox >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pBVar7 = (BoxShape3D *)FUN_?(TypeInfo__RTG__BoxShape3D);
  BoxShape3D::BoxShape3D__ctor(pBVar7,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._topRightBox = pBVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._topRightBox >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pBVar7 = (BoxShape3D *)FUN_?(TypeInfo__RTG__BoxShape3D);
  BoxShape3D::BoxShape3D__ctor(pBVar7,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._bottomRightBox = pBVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._bottomRightBox >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pBVar7 = (BoxShape3D *)FUN_?(TypeInfo__RTG__BoxShape3D);
  BoxShape3D::BoxShape3D__ctor(pBVar7,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._bottomLeftBox = pBVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._bottomLeftBox >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pLVar8 = (List_1_System_Int32_ *)FUN_?(TypeInfo__System__Collections__Generic__List<int>)
  ;
  FUN_?(pLVar8,MethodInfo__System__Collections__Generic__List<int>__List__);
  bVar2 = iRam_? != 0;
  (this->fields)._sortedBoxIndices = pLVar8;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._sortedBoxIndices >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pGVar9 = (GizmoQuad3DBorderControllerData *)
            FUN_?(TypeInfo__RTG__GizmoQuad3DBorderControllerData);
  bVar2 = iRam_? != 0;
  (this->fields)._controllerData = pGVar9;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._controllerData >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pIVar10 = TypeRef__RTG__GizmoQuad3DBorderType;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  plVar11 = (longlong *)0x0;
  if (pIVar10 != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar4 = FUN_?(pIVar10,1);
    plVar11 = (longlong *)FUN_?(lVar4 + 0x20);
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (plVar11 == (longlong *)0x0) {
    uVar12 = func_?(&TypeInfo__System__ArgumentNullException);
    this_02 = (ArgumentNullException *)func_?(uVar12);
    paramName = (String *)func_?(&StringLiteral_enumType);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_02,paramName,(MethodInfo *)0x0);
    uVar12 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
    FUN_?(this_02,uVar12);
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  this_00 = (Array *)(**(code **)(*plVar11 + 0x888))(plVar11);
  if (this_00 != (Array *)0x0) {
    iVar14 = mscorlib.dll::System::Array::Array_get_Length(this_00,(MethodInfo *)0x0);
    pIVar15 = (IGizmoQuad3DBorderController__Array *)
              FUN_?(TypeInfo__RTG__IGizmoQuad3DBorderController,iVar14);
    (this->fields)._controllers = pIVar15;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&(this->fields)._controllers >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    iVar16 = iRam_?;
    (this->fields)._planeSlider = planeSlider;
    if (iVar16 != 0) {
      uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
        iVar16 = iRam_?;
      } while (!bVar2);
    }
    (this->fields)._targetHandle = targetHandle;
    iVar17 = 0;
    if (iVar16 != 0) {
      uVar3 = (uint)((ulonglong)&(this->fields)._targetHandle >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
        iVar17 = iRam_?;
      } while (!bVar2);
    }
    (this->fields)._targetQuad = targetQuad;
    if (iVar17 != 0) {
      uVar3 = (uint)((ulonglong)&(this->fields)._targetQuad >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pGVar18 = (this->fields)._targetHandle;
    if (pGVar18 == (GizmoHandle *)0x0) goto code_?;
    iVar14 = GizmoHandle::GizmoHandle_Add3DShape
                       (pGVar18,(Shape3D *)(this->fields)._borderQuad,(MethodInfo *)0x0);
    (this->fields)._borderQuadIndex = iVar14;
    pQVar1 = (this->fields)._borderQuad;
    if (pQVar1 == (QuadShape3D *)0x0) goto code_?;
    (pQVar1->fields)._raycastMode = 1;
    pGVar18 = (this->fields)._targetHandle;
    if (pGVar18 == (GizmoHandle *)0x0) goto code_?;
    iVar14 = GizmoHandle::GizmoHandle_Add3DShape
                       (pGVar18,(Shape3D *)(this->fields)._topBox,(MethodInfo *)0x0);
    pGVar18 = (this->fields)._targetHandle;
    (this->fields)._topBoxIndex = iVar14;
    if (pGVar18 == (GizmoHandle *)0x0) goto code_?;
    iVar14 = GizmoHandle::GizmoHandle_Add3DShape
                       (pGVar18,(Shape3D *)(this->fields)._rightBox,(MethodInfo *)0x0);
    pGVar18 = (this->fields)._targetHandle;
    (this->fields)._rightBoxIndex = iVar14;
    if (pGVar18 == (GizmoHandle *)0x0) goto code_?;
    iVar14 = GizmoHandle::GizmoHandle_Add3DShape
                       (pGVar18,(Shape3D *)(this->fields)._bottomBox,(MethodInfo *)0x0);
    pGVar18 = (this->fields)._targetHandle;
    (this->fields)._bottomBoxIndex = iVar14;
    if (pGVar18 == (GizmoHandle *)0x0) goto code_?;
    iVar14 = GizmoHandle::GizmoHandle_Add3DShape
                       (pGVar18,(Shape3D *)(this->fields)._leftBox,(MethodInfo *)0x0);
    pGVar18 = (this->fields)._targetHandle;
    (this->fields)._leftBoxIndex = iVar14;
    if (pGVar18 == (GizmoHandle *)0x0) goto code_?;
    iVar14 = GizmoHandle::GizmoHandle_Add3DShape
                       (pGVar18,(Shape3D *)(this->fields)._topLeftBox,(MethodInfo *)0x0);
    pGVar18 = (this->fields)._targetHandle;
    (this->fields)._topLeftBoxIndex = iVar14;
    if (pGVar18 == (GizmoHandle *)0x0) goto code_?;
    iVar14 = GizmoHandle::GizmoHandle_Add3DShape
                       (pGVar18,(Shape3D *)(this->fields)._topRightBox,(MethodInfo *)0x0);
    pGVar18 = (this->fields)._targetHandle;
    (this->fields)._topRightBoxIndex = iVar14;
    if (pGVar18 == (GizmoHandle *)0x0) goto code_?;
    iVar14 = GizmoHandle::GizmoHandle_Add3DShape
                       (pGVar18,(Shape3D *)(this->fields)._bottomRightBox,(MethodInfo *)0x0);
    pGVar18 = (this->fields)._targetHandle;
    (this->fields)._bottomRightBoxIndex = iVar14;
    if (pGVar18 == (GizmoHandle *)0x0) goto code_?;
    iVar14 = GizmoHandle::GizmoHandle_Add3DShape
                       (pGVar18,(Shape3D *)(this->fields)._bottomLeftBox,(MethodInfo *)0x0);
    pLVar19 = (List_1_System_UInt32Enum_ *)(this->fields)._sortedBoxIndices;
    UVar20 = (this->fields)._topBoxIndex;
    (this->fields)._bottomLeftBoxIndex = iVar14;
    pMVar21 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    if (pLVar19 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
    piVar22 = &(pLVar19->fields)._version;
    *piVar22 = *piVar22 + 1;
    pUVar23 = (pLVar19->fields)._items;
    if (pUVar23 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar3 = (pLVar19->fields)._size;
    if (uVar3 < (uint)pUVar23->max_length) {
      (pLVar19->fields)._size = uVar3 + 1;
      if ((uint)pUVar23->max_length <= uVar3) goto code_?;
      pUVar23->vector[(int)uVar3] = UVar20;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(pLVar19,UVar20,pMVar21->klass->rgctx_data[0xe].method);
    }
    pMVar21 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    pLVar19 = (List_1_System_UInt32Enum_ *)(this->fields)._sortedBoxIndices;
    UVar20 = (this->fields)._rightBoxIndex;
    if (pLVar19 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
    piVar22 = &(pLVar19->fields)._version;
    *piVar22 = *piVar22 + 1;
    pUVar23 = (pLVar19->fields)._items;
    if (pUVar23 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar3 = (pLVar19->fields)._size;
    if (uVar3 < (uint)pUVar23->max_length) {
      (pLVar19->fields)._size = uVar3 + 1;
      if ((uint)pUVar23->max_length <= uVar3) goto code_?;
      pUVar23->vector[(int)uVar3] = UVar20;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(pLVar19,UVar20,pMVar21->klass->rgctx_data[0xe].method);
    }
    pMVar21 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    pLVar19 = (List_1_System_UInt32Enum_ *)(this->fields)._sortedBoxIndices;
    UVar20 = (this->fields)._bottomBoxIndex;
    if (pLVar19 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
    piVar22 = &(pLVar19->fields)._version;
    *piVar22 = *piVar22 + 1;
    pUVar23 = (pLVar19->fields)._items;
    if (pUVar23 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar3 = (pLVar19->fields)._size;
    if (uVar3 < (uint)pUVar23->max_length) {
      (pLVar19->fields)._size = uVar3 + 1;
      if ((uint)pUVar23->max_length <= uVar3) goto code_?;
      pUVar23->vector[(int)uVar3] = UVar20;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(pLVar19,UVar20,pMVar21->klass->rgctx_data[0xe].method);
    }
    pMVar21 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    pLVar19 = (List_1_System_UInt32Enum_ *)(this->fields)._sortedBoxIndices;
    UVar20 = (this->fields)._leftBoxIndex;
    if (pLVar19 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
    piVar22 = &(pLVar19->fields)._version;
    *piVar22 = *piVar22 + 1;
    pUVar23 = (pLVar19->fields)._items;
    if (pUVar23 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar3 = (pLVar19->fields)._size;
    if (uVar3 < (uint)pUVar23->max_length) {
      (pLVar19->fields)._size = uVar3 + 1;
      if ((uint)pUVar23->max_length <= uVar3) goto code_?;
      pUVar23->vector[(int)uVar3] = UVar20;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(pLVar19,UVar20,pMVar21->klass->rgctx_data[0xe].method);
    }
    pMVar21 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    pLVar19 = (List_1_System_UInt32Enum_ *)(this->fields)._sortedBoxIndices;
    UVar20 = (this->fields)._topLeftBoxIndex;
    if (pLVar19 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
    piVar22 = &(pLVar19->fields)._version;
    *piVar22 = *piVar22 + 1;
    pUVar23 = (pLVar19->fields)._items;
    if (pUVar23 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar3 = (pLVar19->fields)._size;
    if (uVar3 < (uint)pUVar23->max_length) {
      (pLVar19->fields)._size = uVar3 + 1;
      if ((uint)pUVar23->max_length <= uVar3) goto code_?;
      pUVar23->vector[(int)uVar3] = UVar20;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(pLVar19,UVar20,pMVar21->klass->rgctx_data[0xe].method);
    }
    pMVar21 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    pLVar19 = (List_1_System_UInt32Enum_ *)(this->fields)._sortedBoxIndices;
    UVar20 = (this->fields)._topRightBoxIndex;
    if (pLVar19 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
    piVar22 = &(pLVar19->fields)._version;
    *piVar22 = *piVar22 + 1;
    pUVar23 = (pLVar19->fields)._items;
    if (pUVar23 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar3 = (pLVar19->fields)._size;
    if (uVar3 < (uint)pUVar23->max_length) {
      (pLVar19->fields)._size = uVar3 + 1;
      if ((uint)pUVar23->max_length <= uVar3) goto code_?;
      pUVar23->vector[(int)uVar3] = UVar20;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(pLVar19,UVar20,pMVar21->klass->rgctx_data[0xe].method);
    }
    pMVar21 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    pLVar19 = (List_1_System_UInt32Enum_ *)(this->fields)._sortedBoxIndices;
    UVar20 = (this->fields)._bottomRightBoxIndex;
    if (pLVar19 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
    piVar22 = &(pLVar19->fields)._version;
    *piVar22 = *piVar22 + 1;
    pUVar23 = (pLVar19->fields)._items;
    if (pUVar23 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar3 = (pLVar19->fields)._size;
    if (uVar3 < (uint)pUVar23->max_length) {
      (pLVar19->fields)._size = uVar3 + 1;
      if ((uint)pUVar23->max_length <= uVar3) goto code_?;
      pUVar23->vector[(int)uVar3] = UVar20;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(pLVar19,UVar20,pMVar21->klass->rgctx_data[0xe].method);
    }
    pMVar21 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    pLVar19 = (List_1_System_UInt32Enum_ *)(this->fields)._sortedBoxIndices;
    UVar20 = (this->fields)._bottomLeftBoxIndex;
    if (pLVar19 != (List_1_System_UInt32Enum_ *)0x0) {
      piVar22 = &(pLVar19->fields)._version;
      *piVar22 = *piVar22 + 1;
      pUVar23 = (pLVar19->fields)._items;
      if (pUVar23 != (UInt32Enum__Enum__Array *)0x0) {
        uVar3 = (pLVar19->fields)._size;
        if (uVar3 < (uint)pUVar23->max_length) {
          (pLVar19->fields)._size = uVar3 + 1;
          if ((uint)pUVar23->max_length <= uVar3) {
code_?:
            FUN_?();
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pUVar23->vector[(int)uVar3] = UVar20;
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
          List_1_System_UInt32Enum__AddWithResize
                    (pLVar19,UVar20,pMVar21->klass->rgctx_data[0xe].method);
        }
        iVar16 = iRam_?;
        pGVar9 = (this->fields)._controllerData;
        if (pGVar9 != (GizmoQuad3DBorderControllerData *)0x0) {
          (pGVar9->fields).Border = this;
          if (iVar16 != 0) {
            uVar3 = (uint)((ulonglong)&(pGVar9->fields).Border >> 0xc);
            lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
            do {
              uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
              puVar6 = (ulonglong *)(lVar4 + 0xADDR);
              LOCK();
              bVar2 = uVar5 == *puVar6;
              if (bVar2) {
                *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
              iVar16 = iRam_?;
            } while (!bVar2);
          }
          pGVar9 = (this->fields)._controllerData;
          if (pGVar9 != (GizmoQuad3DBorderControllerData *)0x0) {
            (pGVar9->fields).PlaneSlider = (this->fields)._planeSlider;
            iVar17 = 0;
            if (iVar16 != 0) {
              uVar3 = (uint)((ulonglong)&(pGVar9->fields).PlaneSlider >> 0xc);
              lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
              do {
                uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                LOCK();
                bVar2 = uVar5 == *puVar6;
                if (bVar2) {
                  *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                }
                UNLOCK();
                iVar17 = iRam_?;
              } while (!bVar2);
            }
            pGVar18 = (this->fields)._targetHandle;
            if ((pGVar18 != (GizmoHandle *)0x0) &&
               (pGVar9 = (this->fields)._controllerData,
               pGVar9 != (GizmoQuad3DBorderControllerData *)0x0)) {
              (pGVar9->fields).Gizmo = (pGVar18->fields)._gizmo;
              iVar16 = 0;
              if (iVar17 != 0) {
                uVar3 = (uint)((ulonglong)&pGVar9->fields >> 0xc);
                lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                do {
                  uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                  puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                  LOCK();
                  bVar2 = uVar5 == *puVar6;
                  if (bVar2) {
                    *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                  }
                  UNLOCK();
                  iVar16 = iRam_?;
                } while (!bVar2);
              }
              pGVar9 = (this->fields)._controllerData;
              if (pGVar9 != (GizmoQuad3DBorderControllerData *)0x0) {
                (pGVar9->fields).TargetHandle = (this->fields)._targetHandle;
                iVar17 = 0;
                if (iVar16 != 0) {
                  uVar3 = (uint)((ulonglong)&(pGVar9->fields).TargetHandle >> 0xc);
                  lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                    puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                    LOCK();
                    bVar2 = uVar5 == *puVar6;
                    if (bVar2) {
                      *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                    }
                    UNLOCK();
                    iVar17 = iRam_?;
                  } while (!bVar2);
                }
                pGVar9 = (this->fields)._controllerData;
                if (pGVar9 != (GizmoQuad3DBorderControllerData *)0x0) {
                  (pGVar9->fields).TargetQuad = (this->fields)._targetQuad;
                  iVar16 = 0;
                  if (iVar17 != 0) {
                    uVar3 = (uint)((ulonglong)&(pGVar9->fields).TargetQuad >> 0xc);
                    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                      LOCK();
                      bVar2 = uVar5 == *puVar6;
                      if (bVar2) {
                        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                      }
                      UNLOCK();
                      iVar16 = iRam_?;
                    } while (!bVar2);
                  }
                  pGVar9 = (this->fields)._controllerData;
                  if (pGVar9 != (GizmoQuad3DBorderControllerData *)0x0) {
                    (pGVar9->fields).BorderQuad = (this->fields)._borderQuad;
                    iVar17 = 0;
                    if (iVar16 != 0) {
                      uVar3 = (uint)((ulonglong)&(pGVar9->fields).BorderQuad >> 0xc);
                      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                      do {
                        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                        LOCK();
                        bVar2 = uVar5 == *puVar6;
                        if (bVar2) {
                          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                        }
                        UNLOCK();
                        iVar17 = iRam_?;
                      } while (!bVar2);
                    }
                    pGVar9 = (this->fields)._controllerData;
                    if (pGVar9 != (GizmoQuad3DBorderControllerData *)0x0) {
                      (pGVar9->fields).TopBox = (this->fields)._topBox;
                      iVar16 = 0;
                      if (iVar17 != 0) {
                        uVar3 = (uint)((ulonglong)&(pGVar9->fields).TopBox >> 0xc);
                        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                        do {
                          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                          LOCK();
                          bVar2 = uVar5 == *puVar6;
                          if (bVar2) {
                            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                          }
                          UNLOCK();
                          iVar16 = iRam_?;
                        } while (!bVar2);
                      }
                      pGVar9 = (this->fields)._controllerData;
                      if (pGVar9 != (GizmoQuad3DBorderControllerData *)0x0) {
                        (pGVar9->fields).RightBox = (this->fields)._rightBox;
                        iVar17 = 0;
                        if (iVar16 != 0) {
                          uVar3 = (uint)((ulonglong)&(pGVar9->fields).RightBox >> 0xc);
                          lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                          do {
                            uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                            puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                            LOCK();
                            bVar2 = uVar5 == *puVar6;
                            if (bVar2) {
                              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                            }
                            UNLOCK();
                            iVar17 = iRam_?;
                          } while (!bVar2);
                        }
                        pGVar9 = (this->fields)._controllerData;
                        if (pGVar9 != (GizmoQuad3DBorderControllerData *)0x0) {
                          (pGVar9->fields).BottomBox = (this->fields)._bottomBox;
                          iVar16 = 0;
                          if (iVar17 != 0) {
                            uVar3 = (uint)((ulonglong)&(pGVar9->fields).BottomBox >> 0xc);
                            lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                            do {
                              uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                              puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                              LOCK();
                              bVar2 = uVar5 == *puVar6;
                              if (bVar2) {
                                *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                              }
                              UNLOCK();
                              iVar16 = iRam_?;
                            } while (!bVar2);
                          }
                          pGVar9 = (this->fields)._controllerData;
                          if (pGVar9 != (GizmoQuad3DBorderControllerData *)0x0) {
                            (pGVar9->fields).LeftBox = (this->fields)._leftBox;
                            iVar17 = 0;
                            if (iVar16 != 0) {
                              uVar3 = (uint)((ulonglong)&(pGVar9->fields).LeftBox >> 0xc);
                              lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                              do {
                                uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                                puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                                LOCK();
                                bVar2 = uVar5 == *puVar6;
                                if (bVar2) {
                                  *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                }
                                UNLOCK();
                                iVar17 = iRam_?;
                              } while (!bVar2);
                            }
                            pGVar9 = (this->fields)._controllerData;
                            if (pGVar9 != (GizmoQuad3DBorderControllerData *)0x0) {
                              (pGVar9->fields).TopLeftBox = (this->fields)._topLeftBox;
                              iVar16 = 0;
                              if (iVar17 != 0) {
                                uVar3 = (uint)((ulonglong)&(pGVar9->fields).TopLeftBox >> 0xc);
                                lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                                do {
                                  uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                                  puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                                  LOCK();
                                  bVar2 = uVar5 == *puVar6;
                                  if (bVar2) {
                                    *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                  }
                                  UNLOCK();
                                  iVar16 = iRam_?;
                                } while (!bVar2);
                              }
                              pGVar9 = (this->fields)._controllerData;
                              if (pGVar9 != (GizmoQuad3DBorderControllerData *)0x0) {
                                (pGVar9->fields).TopRightBox = (this->fields)._topRightBox;
                                iVar17 = 0;
                                if (iVar16 != 0) {
                                  uVar3 = (uint)((ulonglong)&(pGVar9->fields).TopRightBox >> 0xc);
                                  lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                                  do {
                                    uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                                    puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                                    LOCK();
                                    bVar2 = uVar5 == *puVar6;
                                    if (bVar2) {
                                      *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                    }
                                    UNLOCK();
                                    iVar17 = iRam_?;
                                  } while (!bVar2);
                                }
                                pGVar9 = (this->fields)._controllerData;
                                if (pGVar9 != (GizmoQuad3DBorderControllerData *)0x0) {
                                  (pGVar9->fields).BottomRightBox = (this->fields)._bottomRightBox;
                                  iVar16 = 0;
                                  if (iVar17 != 0) {
                                    uVar3 = (uint)((ulonglong)&(pGVar9->fields).BottomRightBox >>
                                                   0xc);
                                    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                                    do {
                                      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                                      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                                      LOCK();
                                      bVar2 = uVar5 == *puVar6;
                                      if (bVar2) {
                                        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                      }
                                      UNLOCK();
                                      iVar16 = iRam_?;
                                    } while (!bVar2);
                                  }
                                  pGVar9 = (this->fields)._controllerData;
                                  if (pGVar9 != (GizmoQuad3DBorderControllerData *)0x0) {
                                    (pGVar9->fields).BottomLeftBox = (this->fields)._bottomLeftBox;
                                    if (iVar16 != 0) {
                                      uVar3 = (uint)((ulonglong)&(pGVar9->fields).BottomLeftBox >>
                                                     0xc);
                                      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                                      do {
                                        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                                        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                                        LOCK();
                                        bVar2 = uVar5 == *puVar6;
                                        if (bVar2) {
                                          *puVar6 = uVar5 | 1L << (ulonglong)(uVar3 & 0x3f);
                                        }
                                        UNLOCK();
                                      } while (!bVar2);
                                    }
                                    pGVar9 = (this->fields)._controllerData;
                                    if (pGVar9 != (GizmoQuad3DBorderControllerData *)0x0) {
                                      (pGVar9->fields).BorderQuadIndex =
                                           (this->fields)._borderQuadIndex;
                                      pGVar9 = (this->fields)._controllerData;
                                      if (pGVar9 != (GizmoQuad3DBorderControllerData *)0x0) {
                                        (pGVar9->fields).TopBoxIndex = (this->fields)._topBoxIndex;
                                        pGVar9 = (this->fields)._controllerData;
                                        if (pGVar9 != (GizmoQuad3DBorderControllerData *)0x0) {
                                          (pGVar9->fields).RightBoxIndex =
                                               (this->fields)._rightBoxIndex;
                                          pGVar9 = (this->fields)._controllerData;
                                          if (pGVar9 != (GizmoQuad3DBorderControllerData *)0x0) {
                                            (pGVar9->fields).BottomBoxIndex =
                                                 (this->fields)._bottomBoxIndex;
                                            pGVar9 = (this->fields)._controllerData;
                                            if (pGVar9 != (GizmoQuad3DBorderControllerData *)0x0) {
                                              (pGVar9->fields).LeftBoxIndex =
                                                   (this->fields)._leftBoxIndex;
                                              pGVar9 = (this->fields)._controllerData;
                                              if (pGVar9 != (GizmoQuad3DBorderControllerData *)0x0)
                                              {
                                                (pGVar9->fields).TopLeftBoxIndex =
                                                     (this->fields)._topLeftBoxIndex;
                                                pGVar9 = (this->fields)._controllerData;
                                                if (pGVar9 !=
                                                    (GizmoQuad3DBorderControllerData *)0x0) {
                                                  (pGVar9->fields).TopRightBoxIndex =
                                                       (this->fields)._topRightBoxIndex;
                                                  pGVar9 = (this->fields)._controllerData;
                                                  if (pGVar9 !=
                                                      (GizmoQuad3DBorderControllerData *)0x0) {
                                                    (pGVar9->fields).BottomRightBoxIndex =
                                                         (this->fields)._bottomRightBoxIndex;
                                                    pGVar9 = (this->fields)._controllerData;
                                                    if (pGVar9 !=
                                                        (GizmoQuad3DBorderControllerData *)0x0) {
                                                      (pGVar9->fields).BottomLeftBoxIndex =
                                                           (this->fields)._bottomLeftBoxIndex;
                                                      pIVar15 = (this->fields)._controllers;
                                                      pGVar9 = (this->fields)._controllerData;
                                                      lVar4 = FUN_?(
                                                  TypeInfo__RTG__GizmoThinQuad3DBorderController);
                                                  bVar2 = iRam_? != 0;
                                                  *(GizmoQuad3DBorderControllerData **)
                                                   (lVar4 + 0x10) = pGVar9;
                                                  if (bVar2) {
                                                    uVar3 = (uint)(lVar4 + 0x10U >> 0xc);
                                                    lVar24 = (ulonglong)((uVar3 & 0x1fffff) >> 6) *
                                                             8;
                                                    do {
                                                      uVar5 = *(ulonglong *)(lVar24 + 0xADDR);
                                                      puVar6 = (ulonglong *)(lVar24 + 0xADDR);
                                                      LOCK();
                                                      bVar2 = uVar5 == *puVar6;
                                                      if (bVar2) {
                                                        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                    } while (!bVar2);
                                                  }
                                                  if (pIVar15 !=
                                                      (IGizmoQuad3DBorderController__Array *)0x0) {
                                                    lVar24 = FUN_?(lVar4,(pIVar15->klass->
                                                                                  _0).element_class)
                                                    ;
                                                    if (lVar24 == 0) {
                                                      uVar12 = FUN_?();
                                                      FUN_?(uVar12,0);
                                                      pcVar13 = (code *)swi(3);
                                                      (*pcVar13)();
                                                      return;
                                                    }
                                                    FUN_?(pIVar15,0,lVar4);
                                                    pIVar15 = (this->fields)._controllers;
                                                    pGVar9 = (this->fields)._controllerData;
                                                    lVar4 = FUN_?(
                                                  TypeInfo__RTG__GizmoBoxQuad3DBorderController);
                                                  bVar2 = iRam_? != 0;
                                                  *(GizmoQuad3DBorderControllerData **)
                                                   (lVar4 + 0x10) = pGVar9;
                                                  if (bVar2) {
                                                    uVar3 = (uint)(lVar4 + 0x10U >> 0xc);
                                                    lVar24 = (ulonglong)((uVar3 & 0x1fffff) >> 6) *
                                                             8;
                                                    do {
                                                      uVar5 = *(ulonglong *)(lVar24 + 0xADDR);
                                                      puVar6 = (ulonglong *)(lVar24 + 0xADDR);
                                                      LOCK();
                                                      bVar2 = uVar5 == *puVar6;
                                                      if (bVar2) {
                                                        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                    } while (!bVar2);
                                                  }
                                                  if (pIVar15 !=
                                                      (IGizmoQuad3DBorderController__Array *)0x0) {
                                                    lVar24 = FUN_?(lVar4,(pIVar15->klass->
                                                                                  _0).element_class)
                                                    ;
                                                    if (lVar24 == 0) {
                                                      uVar12 = FUN_?();
                                                      FUN_?(uVar12,0);
                                                      pcVar13 = (code *)swi(3);
                                                      (*pcVar13)();
                                                      return;
                                                    }
                                                    FUN_?(pIVar15,1,lVar4);
                                                    pGVar18 = (this->fields)._targetHandle;
                                                    if (pGVar18 != (GizmoHandle *)0x0) {
                                                      pGVar25 = (pGVar18->fields)._gizmo;
                                                      this_01 = (UnityAction_1_System_Object_ *)
                                                                FUN_?(
                                                  TypeInfo__RTG__GizmoPreUpdateBeginHandler);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`1[System::Object]::
                                                  UnityAction_1_System_Object___ctor
                                                            (this_01,(Object *)this,
                                                                                                                          
                                                  MethodInfo__RTG__GizmoQuad3DBorder__OnGizmoPreUpdateBegin_RTG__Gizmo_
                                                  ,(MethodInfo *)0x0);
                                                  if (pGVar25 != (Gizmo *)0x0) {
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&
                                                  TypeInfo__RTG__GizmoPreUpdateBeginHandler);
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  ppGVar26 = &(pGVar25->fields).PreUpdateBegin;
                                                  a = (pGVar25->fields).PreUpdateBegin;
                                                  do {
                                                    pGVar27 = (GizmoPreUpdateBeginHandler *)
                                                              mscorlib.dll::System::Delegate::
                                                              Delegate_Combine((Delegate *)a,
                                                                               (Delegate *)this_01,
                                                                               (MethodInfo *)0x0);
                                                    pGVar28 = (GizmoPreUpdateBeginHandler *)0x0;
                                                    if (pGVar27 != (GizmoPreUpdateBeginHandler *)0x0
                                                       ) {
                                                      if (pGVar27->klass ==
                                                          TypeInfo__RTG__GizmoPreUpdateBeginHandler)
                                                      {
                                                        pGVar28 = pGVar27;
                                                      }
                                                      if (pGVar28 ==
                                                          (GizmoPreUpdateBeginHandler *)0x0) {
                                                        FUN_?(pGVar27);
                                                        pcVar13 = (code *)swi(3);
                                                        (*pcVar13)();
                                                        return;
                                                      }
                                                    }
                                                    LOCK();
                                                    pGVar27 = *ppGVar26;
                                                    bVar2 = a == pGVar27;
                                                    if (bVar2) {
                                                      *ppGVar26 = pGVar28;
                                                      pGVar27 = a;
                                                    }
                                                    UNLOCK();
                                                    pGVar28 = a;
                                                    if (!bVar2) {
                                                      pGVar28 = pGVar27;
                                                    }
                                                    if (iRam_? != 0) {
                                                      uVar3 = (uint)((ulonglong)ppGVar26 >> 0xc);
                                                      uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6)
                                                      ;
                                                      do {
                                                        uVar29 = *(ulonglong *)
                                                                 (uVar5 * 8 + 0xADDR);
                                                        puVar6 = (ulonglong *)
                                                                 (uVar5 * 8 + 0xADDR);
                                                        LOCK();
                                                        bVar2 = uVar29 == *puVar6;
                                                        if (bVar2) {
                                                          *puVar6 = uVar29 | 1L << (uVar3 & 0x3f);
                                                        }
                                                        UNLOCK();
                                                      } while (!bVar2);
                                                    }
                                                    bVar2 = pGVar28 != a;
                                                    a = pGVar28;
                                                  } while (bVar2);
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
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


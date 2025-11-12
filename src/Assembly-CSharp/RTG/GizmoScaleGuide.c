
/* Void Render(IEnumerable`1[UnityEngine.GameObject], Camera) */

void Assembly-CSharp.dll::RTG::GizmoScaleGuide::GizmoScaleGuide_Render
               (GizmoScaleGuide *this,IEnumerable_1_UnityEngine_GameObject_ *gameObjects,
               Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (gameObjects == (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
    return;
  }
  if (*(int *)&(TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = (GizmoLineMaterial *)
            Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                      (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
  if (this_00 == (GizmoLineMaterial *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults(this_00,(MethodInfo *)0x0);
  aplStack_2[0] =
       (longlong *)
       FUN_?(0,TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>,
                     gameObjects);
  uStack_3 = 0;
  pplStack_4 = aplStack_2;
  do {
    if (aplStack_2[0] == (longlong *)0x0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    cVar5 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
    plVar6 = aplStack_2[0];
    if (cVar5 == '\0') {
      if (aplStack_2[0] == (longlong *)0x0) {
        return;
      }
      FUN_?(0,TypeInfo__System__IDisposable,aplStack_2[0]);
      return;
    }
    if (aplStack_2[0] == (longlong *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    lVar7 = *aplStack_2[0];
    uVar8 = 0;
    if (*(ushort *)(lVar7 + 0x12e) != 0) {
      do {
        if (*(IEnumerator_1_UnityEngine_GameObject___Class **)
             (*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar8 * 0x10) ==
            TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>) {
          puVar9 = (undefined8 *)
                   ((longlong)*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10)
                    * 0x10 + 0x138 + lVar7);
          goto code_?;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(ushort *)(lVar7 + 0x12e));
    }
    puVar9 = (undefined8 *)
             FUN_?(aplStack_2[0],
                           TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>
                          );
code_?:
    this_01 = (GameObject *)(*(code *)*puVar9)(plVar6);
    if (this_01 == (GameObject *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_01,(MethodInfo *)0x0);
    if (this_02 == (Transform *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_10.x = 0.0;
    VStack_10.y = 0.0;
    VStack_10.z = 0.0;
    pvVar11 = (this_02->fields)._._.m_CachedPtr;
    if (pvVar11 == (void *)0x0) {
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)this_02,(MethodInfo *)0x0);
      goto code_?;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar12 = func_?(&UNK_?);
      FUN_?(uVar12);
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
      goto code_?;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar11,&VStack_10);
    pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                       (&VStack_14,this_02,(MethodInfo *)0x0);
    uStack_15._0_4_ = pVVar13->x;
    uStack_15._4_4_ = pVVar13->y;
    fVar16 = pVVar13->z;
    pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                       (&VStack_17,this_02,(MethodInfo *)0x0);
    uStack_18._0_4_ = pVVar13->x;
    uStack_18._4_4_ = pVVar13->y;
    fVar19 = pVVar13->z;
    pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                       (aVStack_20,this_02,(MethodInfo *)0x0);
    uStack_21._0_4_ = pVVar13->x;
    uStack_21._4_4_ = pVVar13->y;
    fVar22 = pVVar13->z;
    this_02 = (Transform *)(ulonglong)(uint)fVar22;
    lVar7 = 0x18;
    if ((this->fields)._sharedLookAndFeel == (GizmoScaleGuideLookAndFeel *)0x0) {
      lVar7 = 0x10;
    }
    lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
    if (lVar7 == 0) goto code_?;
    fVar23 = _UNK_?;
    if (*(char *)(lVar7 + 0x10) != '\0') {
      if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
        FUN_?();
      }
      VStack_24.x = VStack_10.x;
      VStack_24.y = VStack_10.y;
      VStack_24.z = VStack_10.z;
      fVar23 = CameraEx::CameraEx_EstimateZoomFactor(camera,&VStack_24,(MethodInfo *)0x0);
    }
    lVar7 = 0x18;
    if ((this->fields)._sharedLookAndFeel == (GizmoScaleGuideLookAndFeel *)0x0) {
      lVar7 = 0x10;
    }
    lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
    if (lVar7 == 0) goto code_?;
    fVar23 = fVar23 * *(float *)(lVar7 + 0x44);
    fVar25 = VStack_10.x - (float)uStack_15 * fVar23;
    fVar26 = VStack_10.y - uStack_15._4_4_ * fVar23;
    fVar27 = VStack_10.z - fVar16 * fVar23;
    fVar28 = (float)uStack_15 * fVar23 + VStack_10.x;
    fVar29 = uStack_15._4_4_ * fVar23 + VStack_10.y;
    fVar16 = fVar16 * fVar23 + VStack_10.z;
    lVar7 = 0x18;
    if ((this->fields)._sharedLookAndFeel == (GizmoScaleGuideLookAndFeel *)0x0) {
      lVar7 = 0x10;
    }
    lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
    if (lVar7 == 0) goto code_?;
    uVar12 = *(undefined8 *)(lVar7 + 0x14);
    uVar30 = *(undefined8 *)(lVar7 + 0x1c);
    fVar31 = VStack_10.x;
    fVar32 = VStack_10.y;
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral__Color);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
      fVar31 = VStack_10.x;
      fVar32 = VStack_10.y;
    }
    fVar33 = VStack_10.z;
    pMVar34 = GizmoLineMaterial::GizmoLineMaterial_get_Material(this_00,(MethodInfo *)0x0);
    if (pMVar34 == (Material *)0x0) goto code_?;
    CStack_35._0_8_ = uVar12;
    CStack_35._8_8_ = uVar30;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
              (pMVar34,StringLiteral__Color,&CStack_35,(MethodInfo *)0x0);
    pMVar34 = GizmoLineMaterial::GizmoLineMaterial_get_Material(this_00,(MethodInfo *)0x0);
    if (pMVar34 == (Material *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass(pMVar34,0,(MethodInfo *)0x0)
    ;
    VStack_36.y = fVar29;
    VStack_36.x = fVar28;
    VStack_37.y = fVar26;
    VStack_37.x = fVar25;
    VStack_36.z = fVar16;
    VStack_37.z = fVar27;
    GLRenderer::GLRenderer_DrawLine3D(&VStack_37,&VStack_36,(MethodInfo *)0x0);
    fVar16 = (float)uStack_18 * fVar23;
    fVar27 = uStack_18._4_4_ * fVar23;
    fVar28 = (float)uStack_18 * fVar23;
    fVar29 = uStack_18._4_4_ * fVar23;
    lVar7 = 0x18;
    if ((this->fields)._sharedLookAndFeel == (GizmoScaleGuideLookAndFeel *)0x0) {
      lVar7 = 0x10;
    }
    lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
    if (lVar7 == 0) goto code_?;
    uVar12 = *(undefined8 *)(lVar7 + 0x24);
    uVar30 = *(undefined8 *)(lVar7 + 0x2c);
    fVar25 = fVar31;
    fVar26 = fVar32;
    fVar38 = fVar33;
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral__Color);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
      fVar25 = VStack_10.x;
      fVar26 = VStack_10.y;
      fVar38 = VStack_10.z;
    }
    pMVar34 = GizmoLineMaterial::GizmoLineMaterial_get_Material(this_00,(MethodInfo *)0x0);
    if (pMVar34 == (Material *)0x0) goto code_?;
    CStack_35._0_8_ = uVar12;
    CStack_35._8_8_ = uVar30;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
              (pMVar34,StringLiteral__Color,&CStack_35,(MethodInfo *)0x0);
    pMVar34 = GizmoLineMaterial::GizmoLineMaterial_get_Material(this_00,(MethodInfo *)0x0);
    if (pMVar34 == (Material *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass(pMVar34,0,(MethodInfo *)0x0)
    ;
    VStack_39.y = fVar29 + fVar32;
    VStack_39.x = fVar28 + fVar31;
    VStack_40.y = fVar32 - fVar27;
    VStack_40.x = fVar31 - fVar16;
    VStack_39.z = fVar19 * fVar23 + fVar33;
    VStack_40.z = fVar33 - fVar19 * fVar23;
    GLRenderer::GLRenderer_DrawLine3D(&VStack_40,&VStack_39,(MethodInfo *)0x0);
    fVar16 = (float)uStack_21 * fVar23;
    fVar19 = uStack_21._4_4_ * fVar23;
    fVar27 = (float)uStack_21 * fVar23;
    fVar28 = uStack_21._4_4_ * fVar23;
    lVar7 = 0x18;
    if ((this->fields)._sharedLookAndFeel == (GizmoScaleGuideLookAndFeel *)0x0) {
      lVar7 = 0x10;
    }
    lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
    if (lVar7 == 0) goto code_?;
    uVar12 = *(undefined8 *)(lVar7 + 0x34);
    uVar30 = *(undefined8 *)(lVar7 + 0x3c);
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral__Color);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar34 = GizmoLineMaterial::GizmoLineMaterial_get_Material(this_00,(MethodInfo *)0x0);
    if (pMVar34 == (Material *)0x0) goto code_?;
    CStack_35._0_8_ = uVar12;
    CStack_35._8_8_ = uVar30;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
              (pMVar34,StringLiteral__Color,&CStack_35,(MethodInfo *)0x0);
    pMVar34 = GizmoLineMaterial::GizmoLineMaterial_get_Material(this_00,(MethodInfo *)0x0);
    if (pMVar34 == (Material *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass(pMVar34,0,(MethodInfo *)0x0)
    ;
    VStack_41.y = fVar28 + fVar26;
    VStack_41.x = fVar27 + fVar25;
    aVStack_42[0].y = fVar26 - fVar19;
    aVStack_42[0].x = fVar25 - fVar16;
    VStack_41.z = fVar22 * fVar23 + fVar38;
    aVStack_42[0].z = fVar38 - fVar22 * fVar23;
    GLRenderer::GLRenderer_DrawLine3D(aVStack_42,&VStack_41,(MethodInfo *)0x0);
  } while( true );
}


/* GizmoScaleGuide() */

void Assembly-CSharp.dll::RTG::GizmoScaleGuide::GizmoScaleGuide__ctor
               (GizmoScaleGuide *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoScaleGuideLookAndFeel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (GizmoScaleGuideLookAndFeel *)FUN_?(TypeInfo__RTG__GizmoScaleGuideLookAndFeel);
  uVar2 = _UNK_?;
  uVar3 = _UNK_?;
  uVar4 = _UNK_?;
  bVar5 = iRam_? != 0;
  uVar6 = _UNK_?;
  (pGVar1->fields)._xAxisColor.r = (float)_UNK_?;
  uVar7 = _UNK_?;
  (pGVar1->fields)._xAxisColor.g = (float)uVar6;
  _UNK_? = (undefined4)uVar4;
  _UNK_? = SUB84(uVar4,4);
  uVar6 = _UNK_?;
  (pGVar1->fields)._xAxisColor.b = (float)_UNK_?;
  _UNK_? = uVar7;
  (pGVar1->fields)._xAxisColor.a = (float)uVar6;
  (pGVar1->fields)._useZoomFactor = 1;
  uVar4 = _UNK_?;
  uVar6 = _UNK_?;
  (pGVar1->fields)._zAxisColor.r = (float)_UNK_?;
  uVar7 = _UNK_?;
  (pGVar1->fields)._zAxisColor.g = (float)uVar6;
  _UNK_? = (undefined4)uVar4;
  _UNK_? = SUB84(uVar4,4);
  uVar6 = _UNK_?;
  (pGVar1->fields)._zAxisColor.b = (float)_UNK_?;
  _UNK_? = uVar7;
  (pGVar1->fields)._zAxisColor.a = (float)uVar6;
  (pGVar1->fields)._axisLength = 2.0;
  uVar4 = _UNK_?;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar6 = _UNK_?;
  (pGVar1->fields)._yAxisColor.r = (float)_UNK_?;
  _UNK_? = uVar4;
  uVar4 = _UNK_?;
  (pGVar1->fields)._yAxisColor.g = (float)uVar6;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar6 = _UNK_?;
  (pGVar1->fields)._yAxisColor.b = (float)_UNK_?;
  _UNK_? = uVar4;
  (pGVar1->fields)._yAxisColor.a = (float)uVar6;
  (this->fields)._lookAndFeel = pGVar1;
  if (bVar5) {
    uVar8 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar10 == *puVar11;
      if (bVar5) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  return;
}


/* GizmoScaleGuideLookAndFeel get_LookAndFeel() */

GizmoScaleGuideLookAndFeel *
Assembly-CSharp.dll::RTG::GizmoScaleGuide::GizmoScaleGuide_get_LookAndFeel
          (GizmoScaleGuide *this,MethodInfo *method)

{
  if ((this->fields)._sharedLookAndFeel == (GizmoScaleGuideLookAndFeel *)0x0) {
    return (this->fields)._lookAndFeel;
  }
  return (this->fields)._sharedLookAndFeel;
}


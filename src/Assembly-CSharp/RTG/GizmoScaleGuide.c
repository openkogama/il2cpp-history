
/* Void Render(IEnumerable`1[UnityEngine.GameObject], Camera) */

void Assembly-CSharp.dll::RTG::GizmoScaleGuide::GizmoScaleGuide_Render
               (GizmoScaleGuide *this,IEnumerable_1_UnityEngine_GameObject_ *gameObjects,
               Camera *camera,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
    cRam_? = '\x01';
  }
  if (gameObjects == (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  if ((TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
  }
  this_00 = (GizmoLineMaterial *)
            Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                      (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
  if (this_00 != (GizmoLineMaterial *)0x0) {
    GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults(this_00,(MethodInfo *)0x0);
    pIVar4 = gameObjects->klass;
    uVar5 = 0;
    uVar6._0_1_ = (pIVar4->_1).rank;
    uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
    if (uVar6 != 0) {
      do {
        if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
            (Il2CppClass *)
            TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>) {
          ppMVar7 = &(&pIVar4->vtable)[pIVar4->interfaceOffsets[uVar5].offset].GetEnumerator.
                      method;
          goto code_?;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar6);
    }
    ppMVar7 = (MethodInfo **)func_?();
code_?:
    piVar8 = (int *)(*(code *)*ppMVar7)();
    uStack_1 = 1;
    while (piVar8 != (int *)0x0) {
      cVar9 = func_?(0,TypeInfo__System__Collections__IEnumerator);
      if (cVar9 == '\0') {
        uStack_1 = 0xffffffff;
        if (piVar8 != (int *)0x0) {
          func_?(0,TypeInfo__System__IDisposable);
        }
        goto code_?;
      }
      if (piVar8 == (int *)0x0) break;
      iVar10 = *piVar8;
      uVar6 = 0;
      if (*(ushort *)(iVar10 + 0xb6) != 0) {
        do {
          if (*(IEnumerator_1_UnityEngine_GameObject___Class **)
               (*(int *)(iVar10 + 0x58) + (uint)uVar6 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>) {
            puVar11 = (undefined4 *)
                      (iVar10 + (*(int *)(*(int *)(iVar10 + 0x58) + 4 + (uint)uVar6 * 8) + 0x18) * 8)
            ;
            goto code_?;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(ushort *)(iVar10 + 0xb6));
      }
      puVar11 = (undefined4 *)
                func_?(piVar8,
                                TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>
                               );
code_?:
      this_01 = (GameObject *)(*(code *)*puVar11)(piVar8);
      if ((this_01 == (GameObject *)0x0) ||
         (this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (this_01,(MethodInfo *)0x0), this_02 == (Transform *)0x0)) break;
      pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffff44,this_02,(MethodInfo *)0x0);
      uVar13 = pVVar12->x;
      uVar14 = pVVar12->y;
      fVar15 = pVVar12->z;
      VVar16 = *pVVar12;
      pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                          ((Vector3 *)&stack0xffffff38,this_02,(MethodInfo *)0x0);
      fVar17 = pVVar12->x;
      fVar18 = pVVar12->y;
      fVar19 = pVVar12->z;
      pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          ((Vector3 *)&stack0xffffff2c,this_02,(MethodInfo *)0x0);
      fVar20 = pVVar12->x;
      fVar21 = pVVar12->y;
      fVar22 = pVVar12->z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                ((Vector3 *)&stack0xffffff20,this_02,(MethodInfo *)0x0);
      pGVar23 = (this->fields)._sharedLookAndFeel;
      if ((pGVar23 == (GizmoScaleGuideLookAndFeel *)0x0) &&
         (pGVar23 = (this->fields)._lookAndFeel, pGVar23 == (GizmoScaleGuideLookAndFeel *)0x0))
      break;
      fVar24 = _UNK_?;
      if ((pGVar23->fields)._useZoomFactor != 0) {
        if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        fVar24 = CameraEx::CameraEx_EstimateZoomFactor(camera,VVar16,(MethodInfo *)0x0);
      }
      pGVar23 = (this->fields)._sharedLookAndFeel;
      pGVar25 = pGVar23;
      if ((pGVar23 == (GizmoScaleGuideLookAndFeel *)0x0) &&
         (pGVar25 = (this->fields)._lookAndFeel, pGVar25 == (GizmoScaleGuideLookAndFeel *)0x0))
      goto code_?;
      fVar24 = (pGVar25->fields)._axisLength * fVar24;
      fVar19 = fVar19 * fVar24;
      fVar26 = (float)uVar14 - fVar18 * fVar24;
      fVar27 = fVar15 - fVar19;
      fVar19 = fVar15 + fVar19;
      fVar28 = (float)uVar14 + fVar18 * fVar24;
      fVar18 = (float)uVar13 + fVar17 * fVar24;
      if ((pGVar23 == (GizmoScaleGuideLookAndFeel *)0x0) &&
         (pGVar23 = (this->fields)._lookAndFeel, pGVar23 == (GizmoScaleGuideLookAndFeel *)0x0))
      goto code_?;
      GizmoLineMaterial::GizmoLineMaterial_SetColor
                (this_00,(pGVar23->fields)._xAxisColor,(MethodInfo *)0x0);
      GizmoLineMaterial::GizmoLineMaterial_SetPass(this_00,0,(MethodInfo *)0x0);
      VVar16.y = fVar26;
      VVar16.x = (float)uVar13 - fVar17 * fVar24;
      VVar16.z = fVar27;
      endPoint.y = fVar28;
      endPoint.x = fVar18;
      endPoint.z = fVar19;
      GLRenderer::GLRenderer_DrawLine3D(VVar16,endPoint,(MethodInfo *)0x0);
      fVar22 = fVar22 * fVar24;
      fVar19 = fVar15 - fVar22;
      fVar22 = fVar15 + fVar22;
      fVar18 = (float)uVar14 + fVar21 * fVar24;
      fVar17 = (float)uVar13 + fVar20 * fVar24;
      pGVar23 = (this->fields)._sharedLookAndFeel;
      if ((pGVar23 == (GizmoScaleGuideLookAndFeel *)0x0) &&
         (pGVar23 = (this->fields)._lookAndFeel, pGVar23 == (GizmoScaleGuideLookAndFeel *)0x0))
      goto code_?;
      GizmoLineMaterial::GizmoLineMaterial_SetColor
                (this_00,(pGVar23->fields)._yAxisColor,(MethodInfo *)0x0);
      GizmoLineMaterial::GizmoLineMaterial_SetPass(this_00,0,(MethodInfo *)0x0);
      auVar29._4_4_ = fVar19;
      auVar29._0_4_ = (float)uVar14 - fVar21 * fVar24;
      auVar29._8_4_ = 0;
      endPoint_00.y = fVar18;
      endPoint_00.x = fVar17;
      endPoint_00.z = fVar22;
      GLRenderer::GLRenderer_DrawLine3D((Vector3)(auVar29 << 0x20),endPoint_00,(MethodInfo *)0x0);
      fVar20 = (float)uVar13 - fVar17 * fVar24;
      fVar19 = fVar15 + fVar22 * fVar24;
      fVar21 = (float)uVar14 + fVar18 * fVar24;
      fVar17 = (float)uVar13 + fVar17 * fVar24;
      pGVar23 = (this->fields)._sharedLookAndFeel;
      if ((pGVar23 == (GizmoScaleGuideLookAndFeel *)0x0) &&
         (pGVar23 = (this->fields)._lookAndFeel, pGVar23 == (GizmoScaleGuideLookAndFeel *)0x0))
      goto code_?;
      GizmoLineMaterial::GizmoLineMaterial_SetColor
                (this_00,(pGVar23->fields)._zAxisColor,(MethodInfo *)0x0);
      GizmoLineMaterial::GizmoLineMaterial_SetPass(this_00,0,(MethodInfo *)0x0);
      startPoint.y = (float)uVar14 - fVar18 * fVar24;
      startPoint.x = fVar20;
      startPoint.z = fVar15 - fVar22 * fVar24;
      endPoint_01.y = fVar21;
      endPoint_01.x = fVar17;
      endPoint_01.z = fVar19;
      GLRenderer::GLRenderer_DrawLine3D(startPoint,endPoint_01,(MethodInfo *)0x0);
    }
  }
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
  return;
}


/* GizmoScaleGuide() */

void Assembly-CSharp.dll::RTG::GizmoScaleGuide::GizmoScaleGuide__ctor
               (GizmoScaleGuide *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoScaleGuideLookAndFeel);
    cRam_? = '\x01';
  }
  method_01 = TypeInfo__RTG__GizmoScaleGuideLookAndFeel;
  value = (GizmoScaleGuideLookAndFeel *)func_?();
  (value->fields)._useZoomFactor = 1;
  pCVar1 = RTSystemValues::RTSystemValues_get_XAxisColor(&CStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (value->fields)._xAxisColor.r = pCVar1->r;
  (value->fields)._xAxisColor.g = fVar3;
  (value->fields)._xAxisColor.b = fVar4;
  (value->fields)._xAxisColor.a = fVar5;
  pCVar1 = RTSystemValues::RTSystemValues_get_YAxisColor(&CStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (value->fields)._yAxisColor.r = pCVar1->r;
  (value->fields)._yAxisColor.g = fVar3;
  (value->fields)._yAxisColor.b = fVar4;
  (value->fields)._yAxisColor.a = fVar5;
  pCVar1 = RTSystemValues::RTSystemValues_get_ZAxisColor(&CStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->r;
  fVar4 = pCVar1->g;
  fVar5 = pCVar1->b;
  fVar6 = pCVar1->a;
  (value->fields)._axisLength = (float)&DAT_?;
  (value->fields)._zAxisColor.r = fVar3;
  (value->fields)._zAxisColor.g = fVar4;
  (value->fields)._zAxisColor.b = fVar5;
  (value->fields)._zAxisColor.a = fVar6;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  method_00 = (MethodInfo *)&this->fields;
  ((GizmoScaleGuide__Fields *)method_00)->_lookAndFeel = value;
  func_?(method_00,value);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


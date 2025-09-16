
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
    piVar4 = (int *)func_?(0,
                                     TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>
                                    );
    uStack_1 = 1;
    while (piVar4 != (int *)0x0) {
      cVar5 = func_?(0,TypeInfo__System__Collections__IEnumerator);
      if (cVar5 == '\0') {
        uStack_1 = 0xffffffff;
        if (piVar4 != (int *)0x0) {
          func_?(0,TypeInfo__System__IDisposable);
        }
        goto code_?;
      }
      if (piVar4 == (int *)0x0) break;
      iVar6 = *piVar4;
      uVar7 = 0;
      if (*(ushort *)(iVar6 + 0xb6) != 0) {
        do {
          if (*(IEnumerator_1_UnityEngine_GameObject___Class **)
               (*(int *)(iVar6 + 0x58) + (uint)uVar7 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>) {
            puVar8 = (undefined4 *)
                      (iVar6 + (*(int *)(*(int *)(iVar6 + 0x58) + 4 + (uint)uVar7 * 8) + 0x18) * 8)
            ;
            goto code_?;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(ushort *)(iVar6 + 0xb6));
      }
      puVar8 = (undefined4 *)
                func_?(piVar4,
                                TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>
                               );
code_?:
      this_01 = (GameObject *)(*(code *)*puVar8)(piVar4);
      if ((this_01 == (GameObject *)0x0) ||
         (this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (this_01,(MethodInfo *)0x0), this_02 == (Transform *)0x0)) break;
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffff5c,this_02,(MethodInfo *)0x0);
      fVar10 = pVVar9->x;
      fVar11 = pVVar9->y;
      fVar12 = pVVar9->z;
      fVar13 = fVar12;
      fVar14 = fVar10;
      fVar15 = fVar11;
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                          ((Vector3 *)&stack0xffffff50,this_02,(MethodInfo *)0x0);
      fVar16 = pVVar9->x;
      fVar17 = pVVar9->y;
      fVar18 = pVVar9->z;
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          ((Vector3 *)&stack0xffffff44,this_02,(MethodInfo *)0x0);
      uVar19 = pVVar9->x;
      uVar20 = pVVar9->y;
      fVar21 = pVVar9->z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                ((Vector3 *)&stack0xffffff38,this_02,(MethodInfo *)0x0);
      if ((this->fields)._sharedLookAndFeel == (GizmoScaleGuideLookAndFeel *)0x0) {
        pGVar22 = (this->fields)._lookAndFeel;
        if (pGVar22 == (GizmoScaleGuideLookAndFeel *)0x0) break;
      }
      else {
        pGVar22 = (this->fields)._sharedLookAndFeel;
      }
      fVar23 = _UNK_?;
      if ((pGVar22->fields)._useZoomFactor != 0) {
        if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        worldPos.y = fVar15;
        worldPos.x = fVar14;
        worldPos.z = fVar12;
        fVar23 = CameraEx::CameraEx_EstimateZoomFactor(camera,worldPos,(MethodInfo *)0x0);
      }
      if ((this->fields)._sharedLookAndFeel == (GizmoScaleGuideLookAndFeel *)0x0) {
        pGVar22 = (this->fields)._lookAndFeel;
        if (pGVar22 == (GizmoScaleGuideLookAndFeel *)0x0) goto code_?;
      }
      else {
        pGVar22 = (this->fields)._sharedLookAndFeel;
      }
      fVar23 = (pGVar22->fields)._axisLength * fVar23;
      fVar15 = fVar13 - fVar18 * fVar23;
      fVar14 = fVar11 - fVar17 * fVar23;
      fVar12 = fVar10 - fVar16 * fVar23;
      fVar18 = fVar18 * fVar23;
      fVar17 = fVar17 * fVar23;
      fVar16 = fVar10 + fVar16 * fVar23;
      if ((this->fields)._sharedLookAndFeel == (GizmoScaleGuideLookAndFeel *)0x0) {
        pGVar22 = (this->fields)._lookAndFeel;
        if (pGVar22 == (GizmoScaleGuideLookAndFeel *)0x0) goto code_?;
      }
      else {
        pGVar22 = (this->fields)._sharedLookAndFeel;
      }
      GizmoLineMaterial::GizmoLineMaterial_SetColor
                (this_00,(pGVar22->fields)._xAxisColor,(MethodInfo *)0x0);
      GizmoLineMaterial::GizmoLineMaterial_SetPass(this_00,0,(MethodInfo *)0x0);
      startPoint.y = fVar14;
      startPoint.x = fVar12;
      startPoint.z = fVar15;
      endPoint.y = fVar11 + fVar17;
      endPoint.x = fVar16;
      endPoint.z = fVar13 + fVar18;
      GLRenderer::GLRenderer_DrawLine3D(startPoint,endPoint,(MethodInfo *)0x0);
      fVar12 = fVar13 + fVar21 * fVar23;
      fVar17 = fVar11 + (float)uVar20 * fVar23;
      fVar16 = fVar10 + (float)uVar19 * fVar23;
      if ((this->fields)._sharedLookAndFeel == (GizmoScaleGuideLookAndFeel *)0x0) {
        pGVar22 = (this->fields)._lookAndFeel;
        if (pGVar22 == (GizmoScaleGuideLookAndFeel *)0x0) goto code_?;
      }
      else {
        pGVar22 = (this->fields)._sharedLookAndFeel;
      }
      GizmoLineMaterial::GizmoLineMaterial_SetColor
                (this_00,(pGVar22->fields)._yAxisColor,(MethodInfo *)0x0);
      GizmoLineMaterial::GizmoLineMaterial_SetPass(this_00,0,(MethodInfo *)0x0);
      startPoint_00.y = fVar17;
      startPoint_00.x = fVar16;
      startPoint_00.z = fVar12;
      endPoint_00.y = fVar17;
      endPoint_00.x = fVar16;
      endPoint_00.z = fVar12;
      GLRenderer::GLRenderer_DrawLine3D(startPoint_00,endPoint_00,(MethodInfo *)0x0);
      fVar18 = fVar10 - fVar16 * fVar23;
      fVar10 = fVar16 * fVar23 + fVar10;
      if ((this->fields)._sharedLookAndFeel == (GizmoScaleGuideLookAndFeel *)0x0) {
        pGVar22 = (this->fields)._lookAndFeel;
        if (pGVar22 == (GizmoScaleGuideLookAndFeel *)0x0) goto code_?;
      }
      else {
        pGVar22 = (this->fields)._sharedLookAndFeel;
      }
      GizmoLineMaterial::GizmoLineMaterial_SetColor
                (this_00,(pGVar22->fields)._zAxisColor,(MethodInfo *)0x0);
      GizmoLineMaterial::GizmoLineMaterial_SetPass(this_00,0,(MethodInfo *)0x0);
      startPoint_01.y = fVar11 - fVar17 * fVar23;
      startPoint_01.x = fVar18;
      startPoint_01.z = fVar13 - fVar12 * fVar23;
      endPoint_01.y = fVar11 + fVar17 * fVar23;
      endPoint_01.x = fVar10;
      endPoint_01.z = fVar13 + fVar12 * fVar23;
      GLRenderer::GLRenderer_DrawLine3D(startPoint_01,endPoint_01,(MethodInfo *)0x0);
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
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
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
  (this->fields)._lookAndFeel = value;
  func_?(method_00,value);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
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



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
  pGStack_4 = (GizmoLineMaterial *)
               Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                         (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
  if (pGStack_4 != (GizmoLineMaterial *)0x0) {
    GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults(pGStack_4,(MethodInfo *)0x0)
    ;
    piVar5 = (int *)func_?(0,
                                     TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>
                                    );
    uStack_1 = 1;
    while (piVar5 != (int *)0x0) {
      cVar6 = func_?(0,TypeInfo__System__Collections__IEnumerator);
      if (cVar6 == '\0') {
        uStack_1 = 0xffffffff;
        if (piVar5 != (int *)0x0) {
          func_?(0,TypeInfo__System__IDisposable);
        }
        goto code_?;
      }
      if (piVar5 == (int *)0x0) break;
      iVar7 = *piVar5;
      uVar8 = 0;
      if (*(ushort *)(iVar7 + 0xb6) != 0) {
        do {
          if (*(IEnumerator_1_UnityEngine_GameObject___Class **)
               (*(int *)(iVar7 + 0x58) + (uint)uVar8 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>) {
            puVar9 = (undefined4 *)
                      (iVar7 + (*(int *)(*(int *)(iVar7 + 0x58) + 4 + (uint)uVar8 * 8) + 0x18) * 8)
            ;
            goto code_?;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(ushort *)(iVar7 + 0xb6));
      }
      puVar9 = (undefined4 *)
                func_?(piVar5,
                                TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>
                               );
code_?:
      this_00 = (GameObject *)(*(code *)*puVar9)(piVar5);
      if ((this_00 == (GameObject *)0x0) ||
         (this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (this_00,(MethodInfo *)0x0), this_01 == (Transform *)0x0)) break;
      pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffff5c,this_01,(MethodInfo *)0x0);
      fVar11 = pVVar10->x;
      fVar12 = pVVar10->y;
      fVar13 = pVVar10->z;
      fVar14 = fVar11;
      fVar15 = fVar12;
      fVar16 = fVar13;
      pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                          ((Vector3 *)&stack0xffffff50,this_01,(MethodInfo *)0x0);
      fVar17 = pVVar10->x;
      fVar18 = pVVar10->y;
      fVar19 = pVVar10->z;
      pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          ((Vector3 *)&stack0xffffff44,this_01,(MethodInfo *)0x0);
      uVar20 = pVVar10->x;
      uVar21 = pVVar10->y;
      fVar22 = pVVar10->z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                ((Vector3 *)&stack0xffffff38,this_01,(MethodInfo *)0x0);
      pGVar23 = (&(this->fields)._lookAndFeel)
               [(this->fields)._sharedLookAndFeel != (GizmoScaleGuideLookAndFeel *)0x0];
      if (pGVar23 == (GizmoScaleGuideLookAndFeel *)0x0) break;
      fVar24 = _UNK_?;
      if ((pGVar23->fields)._useZoomFactor != 0) {
        if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        worldPos.y = fVar12;
        worldPos.x = fVar11;
        worldPos.z = fVar13;
        fVar24 = CameraEx::CameraEx_EstimateZoomFactor(camera,worldPos,(MethodInfo *)0x0);
      }
      pGVar23 = (&(this->fields)._lookAndFeel)
               [(this->fields)._sharedLookAndFeel != (GizmoScaleGuideLookAndFeel *)0x0];
      if (pGVar23 == (GizmoScaleGuideLookAndFeel *)0x0) break;
      fVar24 = (pGVar23->fields)._axisLength * fVar24;
      fVar13 = fVar16 - fVar19 * fVar24;
      fVar12 = fVar15 - fVar18 * fVar24;
      fVar11 = fVar14 - fVar17 * fVar24;
      fVar17 = fVar17 * fVar24 + fVar14;
      pGVar23 = (&(this->fields)._lookAndFeel)
               [(this->fields)._sharedLookAndFeel != (GizmoScaleGuideLookAndFeel *)0x0];
      if (pGVar23 == (GizmoScaleGuideLookAndFeel *)0x0) break;
      GizmoLineMaterial::GizmoLineMaterial_SetColor
                (pGStack_4,(pGVar23->fields)._xAxisColor,(MethodInfo *)0x0);
      GizmoLineMaterial::GizmoLineMaterial_SetPass(pGStack_4,0,(MethodInfo *)0x0);
      startPoint.y = fVar12;
      startPoint.x = fVar11;
      startPoint.z = fVar13;
      endPoint.y = fVar15 + fVar18 * fVar24;
      endPoint.x = fVar17;
      endPoint.z = fVar16 + fVar19 * fVar24;
      GLRenderer::GLRenderer_DrawLine3D(startPoint,endPoint,(MethodInfo *)0x0);
      fVar17 = fVar16 + fVar22 * fVar24;
      fVar12 = (float)uVar20 * fVar24 + fVar14;
      fVar11 = fVar15 + (float)uVar21 * fVar24;
      pGVar23 = (&(this->fields)._lookAndFeel)
               [(this->fields)._sharedLookAndFeel != (GizmoScaleGuideLookAndFeel *)0x0];
      if (pGVar23 == (GizmoScaleGuideLookAndFeel *)0x0) break;
      GizmoLineMaterial::GizmoLineMaterial_SetColor
                (pGStack_4,(pGVar23->fields)._yAxisColor,(MethodInfo *)0x0);
      GizmoLineMaterial::GizmoLineMaterial_SetPass(pGStack_4,0,(MethodInfo *)0x0);
      startPoint_00.y = fVar11;
      startPoint_00.x = fVar12;
      startPoint_00.z = fVar17;
      endPoint_00.y = fVar11;
      endPoint_00.x = fVar12;
      endPoint_00.z = fVar17;
      GLRenderer::GLRenderer_DrawLine3D(startPoint_00,endPoint_00,(MethodInfo *)0x0);
      fVar18 = fVar14 - fVar12 * fVar24;
      pGVar23 = (&(this->fields)._lookAndFeel)
               [(this->fields)._sharedLookAndFeel != (GizmoScaleGuideLookAndFeel *)0x0];
      if (pGVar23 == (GizmoScaleGuideLookAndFeel *)0x0) break;
      GizmoLineMaterial::GizmoLineMaterial_SetColor
                (pGStack_4,(pGVar23->fields)._zAxisColor,(MethodInfo *)0x0);
      GizmoLineMaterial::GizmoLineMaterial_SetPass(pGStack_4,0,(MethodInfo *)0x0);
      startPoint_01.y = fVar15 - fVar11 * fVar24;
      startPoint_01.x = fVar18;
      startPoint_01.z = fVar16 - fVar17 * fVar24;
      endPoint_01.y = fVar15 + fVar11 * fVar24;
      endPoint_01.x = fVar12 * fVar24 + fVar14;
      endPoint_01.z = fVar16 + fVar17 * fVar24;
      GLRenderer::GLRenderer_DrawLine3D(startPoint_01,endPoint_01,(MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
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


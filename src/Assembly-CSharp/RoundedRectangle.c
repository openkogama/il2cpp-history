
/* Void Awake() */

void Assembly-CSharp.dll::RoundedRectangle::RoundedRectangle_Awake(RoundedRectangle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    method_00 = this;
    (*(code *)(this->klass->vtable).set_material.method)(this,(pPVar1->fields).roundedRectangleMaterial,(this->klass->vtable).get_materialForRendering.methodPtr);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPopulateMesh(VertexHelper) */

void Assembly-CSharp.dll::RoundedRectangle::RoundedRectangle_OnPopulateMesh(RoundedRectangle *this,VertexHelper *vh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  if (vh != (VertexHelper *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_Clear(vh,(MethodInfo *)0x0);
    pRVar1 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_GetPixelAdjustedRect((Rect *)&stack0xffffff70,(Graphic *)this,(MethodInfo *)0x0);
    fStack_2 = pRVar1->m_XMin;
    pMVar3 = (MethodInfo *)pRVar1->m_YMin;
    puStack_4 = (undefined *)pRVar1->m_Width;
    fVar5 = pRVar1->m_Height;
    fVar6 = fStack_2 + (float)puStack_4;
    method_00 = pMVar3;
    pMStack_7 = pMVar3;
    fVar8 = (float)puStack_4;
    iVar9 = func_?(TypeInfo__System__Single,3);
    if (iVar9 != 0) {
      if ((*(int *)(iVar9 + 0xc) != 0) && (*(float *)(iVar9 + 0x10) = fVar8 * 0.5, 1 < *(uint *)(iVar9 + 0xc))) {
        pfVar10 = (float *)(iVar9 + 0x14);
        *pfVar10 = fVar5 * 0.5;
        if (2 < *(uint *)(iVar9 + 0xc)) {
          *(float *)(iVar9 + 0x18) = (this->fields).radius;
          uVar11 = *(uint *)(iVar9 + 0xc);
          fStack_12 = 0.0;
          if (uVar11 != 0) {
            fVar13 = *(float *)(iVar9 + 0x10);
            uVar14 = 1;
            fStack_12 = fVar13;
            if (1 < (int)uVar11) {
              bVar15 = 1 < uVar11;
              do {
                if (!bVar15) goto code_?;
                fVar16 = *pfVar10;
                if (fVar16 < fVar13) {
                  fVar13 = fVar16;
                  fStack_12 = fVar16;
                }
                uVar14 = uVar14 + 1;
                pfVar10 = pfVar10 + 1;
                bVar15 = uVar14 < uVar11;
              } while ((int)uVar14 < (int)uVar11);
            }
          }
          fVar17 = 0.0;
          fVar18 = fStack_2;
          pCVar19 = (Color *)(*(code *)(this->klass->vtable).get_color.method)(&stack0xffffff90,this,(this->klass->vtable).set_color.methodPtr);
          CVar20 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit(*pCVar19,(MethodInfo *)0x0);
          uVar21 = 0;
          fVar22 = 1.0;
          uVar23 = 0;
          uVar24 = 0;
          fVar13 = fStack_12;
          fVar16 = fVar5;
          fVar25 = fVar8;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar26 = TypeInfo__UnityEngine__Vector4->static_fields;
          uVar27 = (pVVar26->zeroVector).y;
          uVar28 = (pVVar26->zeroVector).z;
          uVar29 = (pVVar26->zeroVector).w;
          tangent_01.z = (float)uVar29;
          tangent_01.y = (float)uVar28;
          tangent_01.x = (float)uVar27;
          VVar30.y = (float)pMVar3;
          VVar30.x = fVar18;
          VVar30.z = fVar17;
          uv0_01.w = fVar8;
          uv0_01.x = 0.0;
          uv0_01.y = 0.0;
          uv0_01.z = 0.0;
          uv1_01.y = fVar13;
          uv1_01.x = fVar5;
          uv1_01.z = (float)uVar21;
          uv1_01.w = fVar22;
          normal_01.y = (float)uVar24;
          normal_01.x = (float)uVar23;
          normal_01.z = (pVVar26->zeroVector).x;
          tangent_01.w = 0.0;
          UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddVert_1(vh,VVar30,(Color32)((ulonglong)CVar20 & 0xffffffff),uv0_01,uv1_01,normal_01,tangent_01,method_00);
          pMVar3 = (MethodInfo *)0x0;
          pRVar31 = this;
          pCVar19 = (Color *)(*(code *)(this->klass->vtable).get_color.method)(&fStack_2);
          CVar20 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit(*pCVar19,(MethodInfo *)0x0);
          uVar21 = 0;
          uVar23 = 0;
          fVar5 = fStack_12;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar26 = TypeInfo__UnityEngine__Vector4->static_fields;
          fVar8 = (pVVar26->zeroVector).x;
          uVar32 = (pVVar26->zeroVector).y;
          uVar33 = (pVVar26->zeroVector).z;
          uVar34 = (pVVar26->zeroVector).w;
          tangent_02.z = (float)uVar34;
          tangent_02.y = (float)uVar33;
          tangent_02.x = (float)uVar32;
          uVar24 = 0;
          position_00.y = 0.0;
          position_00.x = (pVVar26->zeroVector).w;
          position_00.z = (float)pMVar3;
          uv0_02.w = fVar25;
          uv0_02.x = 1.0;
          uv0_02.y = 0.0;
          uv0_02.z = 0.0;
          uv1_02.y = fVar5;
          uv1_02.x = fVar16;
          uv1_02.z = (float)uVar21;
          uv1_02.w = fVar8;
          normal_02.y = (float)uVar23;
          normal_02.x = (pVVar26->zeroVector).y;
          normal_02.z = fVar8;
          tangent_02.w = 0.0;
          UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddVert_1(vh,position_00,(Color32)((ulonglong)CVar20 & 0xffffffff),uv0_02,uv1_02,normal_02,tangent_02,pMVar3);
          pIVar35 = (this->klass->vtable).set_color.methodPtr;
          pfVar10 = &fStack_2;
          pCVar19 = (Color *)(*(code *)(this->klass->vtable).get_color.method)();
          CVar20 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit(*pCVar19,(MethodInfo *)0x0);
          uVar23 = 0;
          fVar13 = 0.0;
          uVar36 = 0x3f800000;
          uVar37 = 0x3f800000;
          fVar5 = fStack_12;
          uVar21 = uVar24;
          fVar8 = fVar25;
          pRVar38 = this;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
            pRVar38 = this;
          }
          pVVar26 = TypeInfo__UnityEngine__Vector4->static_fields;
          uVar39 = (pVVar26->zeroVector).y;
          uVar40 = (pVVar26->zeroVector).z;
          uVar41 = (pVVar26->zeroVector).w;
          tangent.z = (float)uVar41;
          tangent.y = (float)uVar40;
          tangent.x = (float)uVar39;
          this = (RoundedRectangle *)pIVar35;
          fVar42 = (float)pRVar38;
          VVar30.x = (float)pfVar10;
          VVar30 = (Vector3)CONCAT84(uVar43,VVar30.x);
          color.r = 0;
          color.g = 0;
          color.b = 0x80;
          color.a = 0x3f;
          color.rgba = CVar20.rgba;
          uv0.w = fVar25;
          uv0.x = 1.0;
          uv0.y = 0.0;
          uv0.z = 0.0;
          uv1.y = fVar5;
          uv1.x = (float)uVar24;
          uv1.z = (float)uVar23;
          uv1.w = fVar13;
          normal.y = (float)uVar37;
          normal.x = (float)uVar36;
          normal.z = (pVVar26->zeroVector).x;
          tangent.w = 0.0;
          UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddVert_1(vh,VVar30,color,uv0,uv1,normal,tangent,in_stack_44);
          fVar13 = 0.0;
          pCVar19 = (Color *)(**(code **)(*(int *)pIVar35 + 0x170))();
          CVar20 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit(*pCVar19,(MethodInfo *)0x0);
          uVar23 = 0;
          fVar5 = 0.0;
          uVar24 = 0;
          uVar36 = 0x3f800000;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar26 = TypeInfo__UnityEngine__Vector4->static_fields;
          uVar45 = (pVVar26->zeroVector).y;
          uVar46 = (pVVar26->zeroVector).z;
          uVar47 = (pVVar26->zeroVector).w;
          tangent_00.z = (float)uVar47;
          tangent_00.y = (float)uVar46;
          tangent_00.x = (float)uVar45;
          position.y = (float)pRVar31;
          position.x = fVar6;
          position.z = fVar13;
          color_00.r = 0;
          color_00.g = 0;
          color_00.b = 0x80;
          color_00.a = 0x3f;
          color_00.rgba = CVar20.rgba;
          uv0_00.w = fVar8;
          uv0_00.x = 0.0;
          uv0_00.y = 0.0;
          uv0_00.z = 0.0;
          uv1_00.y = fStack_12;
          uv1_00.x = (float)uVar21;
          uv1_00.z = (float)uVar23;
          uv1_00.w = fVar5;
          normal_00.y = (float)uVar36;
          normal_00.x = (float)uVar24;
          normal_00.z = (pVVar26->zeroVector).x;
          tangent_00.w = 0.0;
          UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddVert_1(vh,position,color_00,uv0_00,uv1_00,normal_00,tangent_00,in_stack_48);
          UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddTriangle(vh,0,1,2,(MethodInfo *)0x0);
          UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddTriangle(vh,2,3,0,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar49 = (code *)swi(3);
  (*pcVar49)();
  return;
}


/* RoundedRectangle() */

void Assembly-CSharp.dll::RoundedRectangle::RoundedRectangle__ctor(RoundedRectangle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__UI__Image);
    cRam_? = '\x01';
  }
  (this->fields).radius = 50.0;
  if ((TypeInfo__UnityEngine__UI__Image->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__UI__Image);
  }
  UnityEngine.UI.dll::UnityEngine::UI::Image::Image__ctor((Image *)this,(MethodInfo *)0x0);
  return;
}


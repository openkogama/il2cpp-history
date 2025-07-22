
/* IEnumerator GetMaterialFromPrefabPool() */

IEnumerator *
Assembly-CSharp.dll::RoundedRectangle::RoundedRectangle_GetMaterialFromPrefabPool
          (RoundedRectangle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RoundedRectangle___GetMaterialFromPrefabPool_d__2);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RoundedRectangle___GetMaterialFromPrefabPool_d__2;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::RoundedRectangle::RoundedRectangle_OnDestroy
               (RoundedRectangle *this,MethodInfo *method)

{
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    func_?(&TypeInfo__UnityEngine__UI__GraphicRegistry);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  c = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_canvas
                (in_stack_1,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__UI__GraphicRegistry->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::UI::GraphicRegistry::GraphicRegistry_UnregisterGraphicForCanvas
            (c,in_stack_1,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__UI__CanvasUpdateRegistry->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::UI::CanvasUpdateRegistry::
  CanvasUpdateRegistry_UnRegisterCanvasElementForRebuild
            ((ICanvasElement *)in_stack_1,(MethodInfo *)0x0);
  pMVar2 = (in_stack_1->fields).m_CachedMesh;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pMVar2,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pMVar2 = (in_stack_1->fields).m_CachedMesh;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pMVar2,(MethodInfo *)0x0);
  }
  method_00 = (MethodInfo *)&(in_stack_1->fields).m_CachedMesh;
  (in_stack_1->fields).m_CachedMesh = (Mesh *)0x0;
  func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)in_stack_1,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Void OnPopulateMesh(VertexHelper) */

void Assembly-CSharp.dll::RoundedRectangle::RoundedRectangle_OnPopulateMesh
               (RoundedRectangle *this,VertexHelper *vh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  if (vh != (VertexHelper *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_Clear(vh,(MethodInfo *)0x0);
    pRVar1 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_GetPixelAdjustedRect
                        ((Rect *)&stack0xffffff70,(Graphic *)this,(MethodInfo *)0x0);
    fStack_2 = pRVar1->m_XMin;
    pMVar3 = (MethodInfo *)pRVar1->m_YMin;
    puStack_4 = (undefined *)pRVar1->m_Width;
    fVar5 = pRVar1->m_Height;
    fVar6 = fStack_2 + (float)puStack_4;
    method_00 = pMVar3;
    pMStack_7 = pMVar3;
    fVar8 = (float)puStack_4;
    iVar9 = func_?(TypeInfo__System__Single,3);
    fVar10 = _UNK_?;
    if (iVar9 != 0) {
      if ((*(int *)(iVar9 + 0xc) != 0) &&
         (*(float *)(iVar9 + 0x10) = fVar8 * _UNK_?, 1 < *(uint *)(iVar9 + 0xc))) {
        *(float *)(iVar9 + 0x14) = fVar5 * fVar10;
        if (2 < *(uint *)(iVar9 + 0xc)) {
          *(float *)(iVar9 + 0x18) = (this->fields).radius;
          uVar11 = *(uint *)(iVar9 + 0xc);
          fStack_12 = 0.0;
          if (uVar11 != 0) {
            fVar10 = *(float *)(iVar9 + 0x10);
            uVar13 = 1;
            fStack_12 = fVar10;
            if (1 < (int)uVar11) {
              pfVar14 = (float *)(iVar9 + 0x14);
              do {
                if (uVar11 <= uVar13) goto code_?;
                if (*pfVar14 <= fVar10 && fVar10 != *pfVar14) {
                  fVar10 = *pfVar14;
                  fStack_12 = fVar10;
                }
                uVar13 = uVar13 + 1;
                pfVar14 = pfVar14 + 1;
              } while ((int)uVar13 < (int)uVar11);
            }
          }
          fVar15 = 0.0;
          fVar16 = fStack_2;
          pCVar17 = (Color *)(*(code *)(this->klass->vtable).get_color.method)
                                       (&stack0xffffff90,this,
                                        (this->klass->vtable).set_color.methodPtr);
          CVar18 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                             (*pCVar17,(MethodInfo *)0x0);
          uVar19 = 0;
          fVar20 = 1.0;
          uVar21 = 0;
          uVar22 = 0;
          fVar10 = fStack_12;
          fVar23 = fVar5;
          fVar24 = fVar8;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar25 = TypeInfo__UnityEngine__Vector4->static_fields;
          uVar26 = (pVVar25->zeroVector).y;
          uVar27 = (pVVar25->zeroVector).z;
          uVar28 = (pVVar25->zeroVector).w;
          tangent_01.z = (float)uVar28;
          tangent_01.y = (float)uVar27;
          tangent_01.x = (float)uVar26;
          VVar29.y = (float)pMVar3;
          VVar29.x = fVar16;
          VVar29.z = fVar15;
          uv0_01.w = fVar8;
          uv0_01.x = 0.0;
          uv0_01.y = 0.0;
          uv0_01.z = 0.0;
          uv1_01.y = fVar10;
          uv1_01.x = fVar5;
          uv1_01.z = (float)uVar19;
          uv1_01.w = fVar20;
          normal_01.y = (float)uVar22;
          normal_01.x = (float)uVar21;
          normal_01.z = (pVVar25->zeroVector).x;
          tangent_01.w = 0.0;
          UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddVert_1
                    (vh,VVar29,(Color32)((ulonglong)CVar18 & 0xffffffff),uv0_01,uv1_01,normal_01,
                     tangent_01,method_00);
          pMVar3 = (MethodInfo *)0x0;
          pRVar30 = this;
          pCVar17 = (Color *)(*(code *)(this->klass->vtable).get_color.method)(&fStack_2);
          CVar18 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                             (*pCVar17,(MethodInfo *)0x0);
          uVar19 = 0;
          uVar21 = 0;
          fVar5 = fStack_12;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar25 = TypeInfo__UnityEngine__Vector4->static_fields;
          fVar10 = (pVVar25->zeroVector).x;
          uVar31 = (pVVar25->zeroVector).y;
          uVar32 = (pVVar25->zeroVector).z;
          uVar33 = (pVVar25->zeroVector).w;
          tangent_02.z = (float)uVar33;
          tangent_02.y = (float)uVar32;
          tangent_02.x = (float)uVar31;
          position_00.y = 0.0;
          position_00.x = (pVVar25->zeroVector).w;
          position_00.z = (float)pMVar3;
          color_01.r = UNK_?;
          color_01.g = UNK_?;
          color_01.b = UNK_?;
          color_01.a = UNK_?;
          color_01.rgba = CVar18.rgba;
          uv0_02.y = (float)_UNK_?;
          uv0_02.x = (float)_UNK_?;
          uv0_02.z = (float)_UNK_?;
          uv0_02.w = fVar24;
          uv1_02.y = fVar5;
          uv1_02.x = fVar23;
          uv1_02.z = (float)uVar19;
          uv1_02.w = fVar10;
          normal_02.y = (float)uVar21;
          normal_02.x = (pVVar25->zeroVector).y;
          normal_02.z = fVar10;
          tangent_02.w = 0.0;
          uVar19 = _UNK_?;
          UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddVert_1
                    (vh,position_00,color_01,uv0_02,uv1_02,normal_02,tangent_02,pMVar3);
          pIVar34 = (this->klass->vtable).set_color.methodPtr;
          pfVar14 = &fStack_2;
          pCVar17 = (Color *)(*(code *)(this->klass->vtable).get_color.method)();
          CVar18 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                             (*pCVar17,(MethodInfo *)0x0);
          uVar22 = 0;
          fVar8 = 0.0;
          uVar35 = 0x3f800000;
          uVar36 = 0x3f800000;
          fVar5 = fStack_12;
          uVar21 = uVar19;
          fVar10 = fVar24;
          pRVar37 = this;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
            pRVar37 = this;
          }
          pVVar25 = TypeInfo__UnityEngine__Vector4->static_fields;
          uVar38 = (pVVar25->zeroVector).y;
          uVar39 = (pVVar25->zeroVector).z;
          uVar40 = (pVVar25->zeroVector).w;
          tangent.z = (float)uVar40;
          tangent.y = (float)uVar39;
          tangent.x = (float)uVar38;
          this = (RoundedRectangle *)pIVar34;
          fVar41 = (float)pRVar37;
          VVar29.x = (float)pfVar14;
          VVar29 = (Vector3)CONCAT84(uVar42,VVar29.x);
          color.r = UNK_?;
          color.g = UNK_?;
          color.b = UNK_?;
          color.a = UNK_?;
          color.rgba = CVar18.rgba;
          uv0.y = (float)_UNK_?;
          uv0.x = (float)_UNK_?;
          uv0.z = (float)_UNK_?;
          uv0.w = fVar24;
          uv1.y = fVar5;
          uv1.x = (float)uVar19;
          uv1.z = (float)uVar22;
          uv1.w = fVar8;
          normal.y = (float)uVar36;
          normal.x = (float)uVar35;
          normal.z = (pVVar25->zeroVector).x;
          tangent.w = 0.0;
          UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddVert_1
                    (vh,VVar29,color,uv0,uv1,normal,tangent,in_stack_43);
          fVar8 = 0.0;
          pCVar17 = (Color *)(**(code **)(*(int *)pIVar34 + 0x170))();
          CVar18 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                             (*pCVar17,(MethodInfo *)0x0);
          uVar19 = 0;
          fVar5 = 0.0;
          uVar22 = 0;
          uVar35 = 0x3f800000;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar25 = TypeInfo__UnityEngine__Vector4->static_fields;
          uVar44 = (pVVar25->zeroVector).y;
          uVar45 = (pVVar25->zeroVector).z;
          uVar46 = (pVVar25->zeroVector).w;
          tangent_00.z = (float)uVar46;
          tangent_00.y = (float)uVar45;
          tangent_00.x = (float)uVar44;
          position.y = (float)pRVar30;
          position.x = fVar6;
          position.z = fVar8;
          color_00.r = UNK_?;
          color_00.g = UNK_?;
          color_00.b = UNK_?;
          color_00.a = UNK_?;
          color_00.rgba = CVar18.rgba;
          uv0_00.y = (float)_UNK_?;
          uv0_00.x = (float)_UNK_?;
          uv0_00.z = (float)_UNK_?;
          uv0_00.w = fVar10;
          uv1_00.y = fStack_12;
          uv1_00.x = (float)uVar21;
          uv1_00.z = (float)uVar19;
          uv1_00.w = fVar5;
          normal_00.y = (float)uVar35;
          normal_00.x = (float)uVar22;
          normal_00.z = (pVVar25->zeroVector).x;
          tangent_00.w = 0.0;
          UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddVert_1
                    (vh,position,color_00,uv0_00,uv1_00,normal_00,tangent_00,in_stack_47);
          UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddTriangle
                    (vh,0,1,2,(MethodInfo *)0x0);
          UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddTriangle
                    (vh,2,3,0,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar48 = (code *)swi(3);
  (*pcVar48)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::RoundedRectangle::RoundedRectangle_Start
               (RoundedRectangle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RoundedRectangle___GetMaterialFromPrefabPool_d__2);
    cRam_? = '\x01';
  }
  method_01 = TypeInfo__RoundedRectangle___GetMaterialFromPrefabPool_d__2;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  method_00 = (MethodInfo *)(value + 2);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(method_00,this);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
            ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* RoundedRectangle() */

void Assembly-CSharp.dll::RoundedRectangle::RoundedRectangle__ctor
               (RoundedRectangle *this,MethodInfo *method)

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


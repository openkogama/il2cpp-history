
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
  pRVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  if (vh != (VertexHelper *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_Clear(vh,(MethodInfo *)0x0);
    pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_GetPixelAdjustedRect
                        ((Rect *)&stack0xffffffb0,(Graphic *)this,(MethodInfo *)0x0);
    method_01 = (MethodInfo *)pRVar2->m_XMin;
    pMVar3 = (MethodInfo *)pRVar2->m_YMin;
    fVar4 = pRVar2->m_Width;
    fVar5 = pRVar2->m_Height;
    fVar6 = fVar5 + (float)pMVar3;
    method_00 = pMVar3;
    pMVar7 = pMVar3;
    pMVar8 = pMVar3;
    pMVar9 = pMVar3;
    fVar10 = fVar5;
    fVar11 = fVar5;
    fVar12 = fVar5;
    fVar13 = fVar5;
    fVar14 = fVar4;
    fVar15 = fVar4;
    fVar16 = fVar4;
    fVar17 = fVar4;
    iVar18 = func_?(TypeInfo__System__Single,3);
    fVar19 = _UNK_?;
    if (iVar18 != 0) {
      if ((*(int *)(iVar18 + 0xc) != 0) &&
         (*(float *)(iVar18 + 0x10) = fVar14 * _UNK_?, 1 < *(uint *)(iVar18 + 0xc))) {
        *(float *)(iVar18 + 0x14) = fVar10 * fVar19;
        if (2 < *(uint *)(iVar18 + 0xc)) {
          *(float *)(iVar18 + 0x18) = (this->fields).radius;
          uVar20 = *(uint *)(iVar18 + 0xc);
          fStack_21 = 0.0;
          if (uVar20 != 0) {
            fVar19 = *(float *)(iVar18 + 0x10);
            uVar22 = 1;
            fStack_21 = fVar19;
            if (1 < (int)uVar20) {
              pfVar23 = (float *)(iVar18 + 0x14);
              do {
                if (uVar20 <= uVar22) goto code_?;
                if (*pfVar23 <= fVar19 && fVar19 != *pfVar23) {
                  fVar19 = *pfVar23;
                  fStack_21 = fVar19;
                }
                uVar22 = uVar22 + 1;
                pfVar23 = pfVar23 + 1;
              } while ((int)uVar22 < (int)uVar20);
            }
          }
          fVar24 = (float)(this->fields)._.m_FillMethod;
          uVar25 = 0;
          fVar26 = 0.0;
          fVar19 = (this->fields)._.m_FillAmount;
          fVar27 = (float)(this->fields)._.m_FillOrigin;
          pMVar28 = method_01;
          pCVar29 = (Color *)(*(code *)(this->klass->vtable).get_color.method)
                                       (&stack0xffffffb0,this,
                                        (this->klass->vtable).set_color.methodPtr);
          CVar30 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                             (*pCVar29,(MethodInfo *)0x0);
          uVar31 = 0;
          fVar32 = fVar14;
          fVar33 = fVar10;
          fVar34 = fStack_21;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Vector4,method_00,pMVar7,pMVar8,method_01,
                            pMVar9,fVar4,fVar5,fVar10,fVar11,fVar12,fVar13,fVar14,fVar15,fVar16,
                            fVar17);
            cRam_? = '\x01';
          }
          fVar35 = 1.0;
          pVVar36 = TypeInfo__UnityEngine__Vector4->static_fields;
          fVar37 = (pVVar36->zeroVector).x;
          fVar38 = (pVVar36->zeroVector).y;
          fVar39 = (pVVar36->zeroVector).z;
          fVar40 = (pVVar36->zeroVector).w;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Vector4,method_00,pMVar7,pMVar8,method_01,
                            pMVar9,fVar4,fVar5,fVar10,fVar11,fVar12,fVar13,fVar14,fVar15,fVar16,
                            fVar17);
            cRam_? = '\x01';
          }
          pVVar36 = TypeInfo__UnityEngine__Vector4->static_fields;
          uVar41 = (pVVar36->zeroVector).y;
          uVar42 = (pVVar36->zeroVector).z;
          uVar43 = (pVVar36->zeroVector).w;
          tangent_01.z = (float)uVar43;
          tangent_01.y = (float)uVar42;
          tangent_01.x = (float)uVar41;
          position_00.y = (float)pMVar3;
          position_00.x = (float)pMVar28;
          position_00.z = fVar26;
          uv0_01.w = fVar32;
          uv0_01.x = 0.0;
          uv0_01.y = 0.0;
          uv0_01.z = 0.0;
          uv1_01.y = fVar34;
          uv1_01.x = fVar33;
          uv1_01.z = (float)uVar31;
          uv1_01.w = fVar24;
          uv2_01.y = fVar27;
          uv2_01.x = fVar19;
          uv2_01.z = (float)uVar25;
          uv2_01.w = fVar37;
          uv3_01.y = fVar39;
          uv3_01.x = fVar38;
          uv3_01.z = fVar40;
          uv3_01.w = fVar35;
          auVar44._4_8_ = 0;
          auVar44._0_4_ = (pVVar36->zeroVector).x;
          tangent_01.w = 0.0;
          UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddVert
                    (vh,position_00,(Color32)((ulonglong)CVar30 & 0xffffffff),uv0_01,uv1_01,uv2_01,
                     uv3_01,(Vector3)(auVar44 << 0x40),tangent_01,method_00);
          pRVar45 = this;
          pCVar29 = (Color *)(*(code *)(this->klass->vtable).get_color.method)
                                       (&stack0xffffffb0,this,
                                        (this->klass->vtable).set_color.methodPtr);
          CVar30 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                             (*pCVar29,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar36 = TypeInfo__UnityEngine__Vector4->static_fields;
          fVar4 = (pVVar36->zeroVector).x;
          fVar5 = (pVVar36->zeroVector).y;
          fVar10 = (pVVar36->zeroVector).z;
          fVar11 = (pVVar36->zeroVector).w;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar36 = TypeInfo__UnityEngine__Vector4->static_fields;
          fVar12 = (pVVar36->zeroVector).x;
          fVar13 = (pVVar36->zeroVector).z;
          fVar14 = (pVVar36->zeroVector).w;
          uVar46 = (pVVar36->zeroVector).y;
          uVar47 = (pVVar36->zeroVector).z;
          uVar48 = (pVVar36->zeroVector).w;
          tangent_02.z = (float)uVar48;
          tangent_02.y = (float)uVar47;
          tangent_02.x = (float)uVar46;
          fVar15 = 0.0;
          position_01.y = fVar6;
          position_01.x = (float)method_01;
          position_01.z = 0.0;
          color_00._4_4_ = _UNK_?;
          color_00.rgba = CVar30.rgba;
          uv0_02.y = (float)_UNK_?;
          uv0_02.x = (float)_UNK_?;
          uv0_02.z = (float)_UNK_?;
          uv0_02.w = fVar13;
          uv1_02.y = 0.0;
          uv1_02.x = fVar14;
          uv1_02.z = fVar12;
          uv1_02.w = fVar24;
          uv2_02.y = fVar27;
          uv2_02.x = fVar19;
          uv2_02.z = (float)uVar25;
          uv2_02.w = fVar4;
          uv3_02.y = fVar10;
          uv3_02.x = fVar5;
          uv3_02.z = fVar11;
          uv3_02.w = fVar13;
          normal_01.y = 0.0;
          normal_01.x = fVar14;
          normal_01.z = fVar12;
          tangent_02.w = 0.0;
          fVar4 = _UNK_?;
          UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddVert
                    (vh,position_01,color_00,uv0_02,uv1_02,uv2_02,uv3_02,normal_01,tangent_02,
                     method_01);
          pIVar49 = (this->klass->vtable).set_color.methodPtr;
          pCVar29 = (Color *)(*(code *)(this->klass->vtable).get_color.method)();
          CVar30 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                             (*pCVar29,(MethodInfo *)0x0);
          this_00 = (VertexHelper *)CVar30.rgba;
          uVar31 = 0;
          fVar5 = fVar4;
          pMVar3 = method_01;
          fVar10 = fStack_21;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          fVar17 = 0.0;
          uVar50 = 0x3f800000;
          uVar51 = 0x3f800000;
          pVVar36 = TypeInfo__UnityEngine__Vector4->static_fields;
          fVar11 = (pVVar36->zeroVector).x;
          fVar13 = (pVVar36->zeroVector).y;
          fVar14 = (pVVar36->zeroVector).z;
          fVar16 = (pVVar36->zeroVector).w;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar36 = TypeInfo__UnityEngine__Vector4->static_fields;
          uVar52 = (pVVar36->zeroVector).y;
          uVar53 = (pVVar36->zeroVector).z;
          uVar54 = (pVVar36->zeroVector).w;
          tangent.z = (float)uVar54;
          tangent.y = (float)uVar53;
          tangent.x = (float)uVar52;
          uVar55._4_4_ = (float)uVar25;
          uVar55._0_4_ = (float)pIVar49;
          uVar55 = CONCAT44(uVar55._4_4_,(float)uVar55);
          this = (RoundedRectangle *)0x0;
          CVar30.r = UNK_?;
          CVar30.g = UNK_?;
          CVar30.b = UNK_?;
          CVar30.a = UNK_?;
          CVar30.rgba = (int32_t)this_00;
          uv0.y = (float)_UNK_?;
          uv0.x = (float)_UNK_?;
          uv0.z = (float)_UNK_?;
          uv0.w = fVar5;
          uv1.y = fVar10;
          uv1.x = (float)pMVar3;
          uv1.z = (float)uVar31;
          uv1.w = fVar15;
          uv2.y = fVar24;
          uv2.x = fVar12;
          uv2.z = fVar19;
          uv2.w = fVar11;
          uv3.y = fVar14;
          uv3.x = fVar13;
          uv3.z = fVar16;
          uv3.w = fVar17;
          normal.y = (float)uVar51;
          normal.x = (float)uVar50;
          normal.z = (pVVar36->zeroVector).x;
          tangent.w = 0.0;
          UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddVert
                    (this_00,(Vector3)CONCAT48(this,uVar55),CVar30,uv0,uv1,uv2,uv3,normal,tangent,
                     in_stack_56);
          pCVar29 = (Color *)(*(code *)(pRVar1->klass->vtable).get_color.method)();
          CVar30 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                             (*pCVar29,(MethodInfo *)0x0);
          uVar25 = 0;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          fVar14 = 0.0;
          uVar31 = 0;
          uVar50 = 0x3f800000;
          pVVar36 = TypeInfo__UnityEngine__Vector4->static_fields;
          fVar5 = (pVVar36->zeroVector).x;
          fVar10 = (pVVar36->zeroVector).y;
          fVar11 = (pVVar36->zeroVector).z;
          fVar13 = (pVVar36->zeroVector).w;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar36 = TypeInfo__UnityEngine__Vector4->static_fields;
          uVar57 = (pVVar36->zeroVector).y;
          uVar58 = (pVVar36->zeroVector).z;
          uVar59 = (pVVar36->zeroVector).w;
          tangent_00.z = (float)uVar59;
          tangent_00.y = (float)uVar58;
          tangent_00.x = (float)uVar57;
          position.y = (float)pRVar45;
          position.x = fVar27;
          position.z = 0.0;
          color.r = UNK_?;
          color.g = UNK_?;
          color.b = UNK_?;
          color.a = UNK_?;
          color.rgba = CVar30.rgba;
          uv0_00.y = (float)_UNK_?;
          uv0_00.x = (float)_UNK_?;
          uv0_00.z = (float)_UNK_?;
          uv0_00.w = fVar4;
          uv1_00.y = fStack_21;
          uv1_00.x = (float)method_01;
          uv1_00.z = (float)uVar25;
          uv1_00.w = fVar15;
          uv2_00.y = fVar24;
          uv2_00.x = fVar12;
          uv2_00.z = fVar19;
          uv2_00.w = fVar5;
          uv3_00.y = fVar11;
          uv3_00.x = fVar10;
          uv3_00.z = fVar13;
          uv3_00.w = fVar14;
          normal_00.y = (float)uVar50;
          normal_00.x = (float)uVar31;
          normal_00.z = (pVVar36->zeroVector).x;
          tangent_00.w = 0.0;
          UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddVert
                    (this_00,position,color,uv0_00,uv1_00,uv2_00,uv3_00,normal_00,tangent_00,
                     in_stack_60);
          UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddTriangle
                    (this_00,0,1,2,(MethodInfo *)0x0);
          UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddTriangle
                    (this_00,2,3,0,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar61 = (code *)swi(3);
  (*pcVar61)();
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


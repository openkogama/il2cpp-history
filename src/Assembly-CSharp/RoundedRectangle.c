
/* Void Awake() */

void Assembly-CSharp.dll::RoundedRectangle::RoundedRectangle_Awake(RoundedRectangle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&UnityEngine__Material_MethodInfo__UnityEngine__Resources__Load<UnityEngine::Material>_System__String_);
    func_?(&StringLiteral_Materials_RoundedRectangle);
    cRam_? = '\x01';
  }
  pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Resources::Resources_Load_1(StringLiteral_Materials_RoundedRectangle,UnityEngine__Material_MethodInfo__UnityEngine__Resources__Load<UnityEngine::Material>_System__String_);
  method_00 = this;
  (*(this->klass->vtable).set_material.methodPtr)(this,pOVar1,(this->klass->vtable).set_material.method);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  return;
}


/* Void OnPopulateMesh(VertexHelper) */

void Assembly-CSharp.dll::RoundedRectangle::RoundedRectangle_OnPopulateMesh(RoundedRectangle *this,VertexHelper *vh,MethodInfo *method)

{
  this_00 = vh;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  if (vh != (VertexHelper *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_Clear(vh,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_GetPixelAdjustedRect((Rect *)&stack0xffffffa4,(Graphic *)this,(MethodInfo *)0x0);
    fVar1 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Single,System::Single]::KeyValuePair_2_System_Single_System_Single__get_Key((KeyValuePair_2_System_Single_System_Single_ *)&stack0xffffffb4,(MethodInfo *)0x0);
    uVar2 = CONCAT44(unaff_EBP,fVar1);
    fVar1 = mscorlib.dll::System::Nullable`1[Single]::Nullable_1_Single__GetValueOrDefault((Nullable_1_Single_ *)&stack0xffffffb4,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Single,System::Single]::KeyValuePair_2_System_Single_System_Single__get_Key((KeyValuePair_2_System_Single_System_Single_ *)&stack0xffffffb4,(MethodInfo *)0x0);
    SubscribableVariableBase`1[System::Single]::SubscribableVariableBase_1_System_Single__get_Value((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffb4,(MethodInfo *)0x0);
    fVar3 = mscorlib.dll::System::Nullable`1[Single]::Nullable_1_Single__GetValueOrDefault((Nullable_1_Single_ *)&stack0xffffffb4,(MethodInfo *)0x0);
    fVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::Int32Enum,System::Single]::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single__get_Current((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single_ *)&stack0xffffffb4,(MethodInfo *)0x0);
    auVar5._4_8_ = uVar2;
    auVar5._0_4_ = fVar4 + fVar3;
    iVar6 = func_?();
    VVar7 = UnityEngine.CoreModule.dll::UnityEngine::Rect::Rect_get_size((Rect *)&stack0xffffffb4,(MethodInfo *)0x0);
    if (iVar6 != 0) {
      if (*(int *)(iVar6 + 0xc) != 0) {
        *(float *)(iVar6 + 0x10) = VVar7.x * 0.5;
        VVar7 = UnityEngine.CoreModule.dll::UnityEngine::Rect::Rect_get_size((Rect *)&stack0xffffffb4,(MethodInfo *)0x0);
        if (1 < *(uint *)(iVar6 + 0xc)) {
          *(float *)(iVar6 + 0x14) = VVar7.y * 0.5;
          if (2 < *(uint *)(iVar6 + 0xc)) {
            *(float *)(iVar6 + 0x18) = (this->fields).radius;
            uVar8 = *(uint *)(iVar6 + 0xc);
            vh = (VertexHelper *)0x0;
            if (uVar8 != 0) {
              pVVar9 = *(VertexHelper **)(iVar6 + 0x10);
              uVar10 = 1;
              vh = pVVar9;
              if (1 < (int)uVar8) {
                pfVar11 = (float *)(iVar6 + 0x14);
                do {
                  if (uVar8 <= uVar10) goto code_?;
                  if (*pfVar11 <= (float)pVVar9 && (float)pVVar9 != *pfVar11) {
                    pVVar9 = (VertexHelper *)*pfVar11;
                    vh = pVVar9;
                  }
                  uVar10 = uVar10 + 1;
                  pfVar11 = pfVar11 + 1;
                } while ((int)uVar10 < (int)uVar8);
              }
            }
            VVar7 = UnityEngine.CoreModule.dll::UnityEngine::Rect::Rect_get_size((Rect *)&stack0xffffffb4,(MethodInfo *)0x0);
            fVar3 = VVar7.x;
            VVar7 = UnityEngine.CoreModule.dll::UnityEngine::Rect::Rect_get_size((Rect *)&stack0xffffffb4,(MethodInfo *)0x0);
            fVar4 = VVar7.y;
            method_00 = auVar5._4_4_;
            pCVar12 = (Color *)(*(this->klass->vtable).get_color.methodPtr)(&stack0xffffffa4,this,(this->klass->vtable).get_color.method);
            CVar13 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit(*pCVar12,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pVVar14 = TypeInfo__UnityEngine__Vector4->static_fields;
            fVar15 = (pVVar14->zeroVector).x;
            uVar16 = (pVVar14->zeroVector).y;
            uVar17 = (pVVar14->zeroVector).z;
            uVar18 = (pVVar14->zeroVector).w;
            tangent_02.z = (float)uVar18;
            tangent_02.y = (float)uVar17;
            tangent_02.x = (float)uVar16;
            position_01.y = fVar1;
            position_01.x = (float)method_00;
            position_01.z = 0.0;
            uv0_01.w = 1.0;
            uv0_01.x = 0.0;
            uv0_01.y = 0.0;
            uv0_01.z = 0.0;
            auVar19._4_4_ = fVar15;
            auVar19._0_4_ = vh;
            auVar19._8_4_ = 0;
            auVar19 = auVar19 << 0x20;
            uv1_02.w = 1.0;
            uv1_02.x = (float)auVar19._0_4_;
            uv1_02.y = (float)auVar19._4_4_;
            uv1_02.z = (float)auVar19._8_4_;
            auVar20._4_8_ = 0;
            auVar20._0_4_ = fVar15;
            tangent_02.w = 0.0;
            UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddVert_1(this_00,position_01,(Color32)((ulonglong)CVar13 & 0xffffffff),uv0_01,uv1_02,(Vector3)(auVar20 << 0x40),tangent_02,method_00);
            fVar21 = auVar5._4_4_;
            fVar22 = auVar5._0_4_;
            pCVar12 = (Color *)(*(this->klass->vtable).get_color.methodPtr)();
            fVar1 = pCVar12->r;
            fStack23 = pCVar12->b;
            CVar13 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit(*pCVar12,(MethodInfo *)0x0);
            iVar24 = CVar13.rgba;
            fVar25 = 0.0;
            fVar15 = 0.0;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            fStack23 = fVar15;
            pVVar14 = TypeInfo__UnityEngine__Vector4->static_fields;
            uVar26 = (pVVar14->zeroVector).y;
            uVar27 = (pVVar14->zeroVector).z;
            uVar28 = (pVVar14->zeroVector).w;
            tangent.z = (float)uVar28;
            tangent.y = (float)uVar27;
            tangent.x = (float)uVar26;
            uVar29 = 0;
            uv0_02._0_12_ = ZEXT812(0x3f800000);
            position_02.y = fVar22;
            position_02.x = fVar21;
            position_02.z = 0.0;
            uv0_02.w = fVar3;
            uv1.y = fVar1;
            uv1.x = fVar4;
            uv1.z = fVar25;
            uv1.w = fStack23;
            normal.z = (pVVar14->zeroVector).x;
            normal.x = 1.0;
            normal.y = 0.0;
            tangent.w = 0.0;
            UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddVert_1(this_00,position_02,(Color32)((ulonglong)CVar13 & 0xffffffff),uv0_02,uv1,normal,tangent,in_stack_30);
            uVar31 = uVar29;
            pCVar12 = (Color *)(*(this->klass->vtable).get_color.methodPtr)();
            CVar13 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit(*pCVar12,(MethodInfo *)0x0);
            fVar25 = 0.0;
            fVar32 = 0.0;
            fVar3 = fVar1;
            fVar4 = fVar21;
            fVar15 = fVar22;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pVVar14 = TypeInfo__UnityEngine__Vector4->static_fields;
            uVar33 = (pVVar14->zeroVector).y;
            uVar34 = (pVVar14->zeroVector).z;
            uVar35 = (pVVar14->zeroVector).w;
            tangent_00.z = (float)uVar35;
            tangent_00.y = (float)uVar34;
            tangent_00.x = (float)uVar33;
            position.y = (float)uv0_02.x;
            position.x = (float)uVar29;
            position.z = 0.0;
            color.r = 0;
            color.g = 0;
            color.b = 0x80;
            color.a = 0x3f;
            color.rgba = CVar13.rgba;
            uv0.w = fVar22;
            uv0.x = 1.0;
            uv0.y = 0.0;
            uv0.z = 0.0;
            uv1_00.y = fVar3;
            uv1_00.x = fVar21;
            uv1_00.z = fVar25;
            uv1_00.w = fVar32;
            normal_00.z = (pVVar14->zeroVector).x;
            normal_00.x = 1.0;
            normal_00.y = 1.0;
            tangent_00.w = 0.0;
            UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddVert_1(this_00,position,color,uv0,uv1_00,normal_00,tangent_00,in_stack_36);
            pCVar12 = (Color *)(*(this->klass->vtable).get_color.methodPtr)();
            CVar13 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit(*pCVar12,(MethodInfo *)0x0);
            fVar3 = 0.0;
            fVar22 = 0.0;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pVVar14 = TypeInfo__UnityEngine__Vector4->static_fields;
            uVar37 = (pVVar14->zeroVector).y;
            uVar38 = (pVVar14->zeroVector).z;
            uVar39 = (pVVar14->zeroVector).w;
            tangent_01.z = (float)uVar39;
            tangent_01.y = (float)uVar38;
            tangent_01.x = (float)uVar37;
            position_00.y = (float)iVar24;
            position_00.x = (float)uVar31;
            position_00.z = 0.0;
            color_00.r = 0;
            color_00.g = 0;
            color_00.b = 0x80;
            color_00.a = 0x3f;
            color_00.rgba = CVar13.rgba;
            uv0_00.w = fVar15;
            uv0_00.x = 0.0;
            uv0_00.y = 0.0;
            uv0_00.z = 0.0;
            uv1_01.y = fVar1;
            uv1_01.x = fVar4;
            uv1_01.z = fVar3;
            uv1_01.w = fVar22;
            normal_01.z = (pVVar14->zeroVector).x;
            normal_01.x = 0.0;
            normal_01.y = 1.0;
            tangent_01.w = 0.0;
            UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddVert_1(this_00,position_00,color_00,uv0_00,uv1_01,normal_01,tangent_01,in_stack_40);
            UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddTriangle(this_00,0,1,2,(MethodInfo *)0x0);
            UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddTriangle(this_00,2,3,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar41 = (code *)swi(3);
  (*pcVar41)();
  return;
}


/* RoundedRectangle() */

void Assembly-CSharp.dll::RoundedRectangle::RoundedRectangle__ctor(RoundedRectangle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__UI__Graphic);
    cRam_? = '\x01';
  }
  (this->fields).radius = 50.0;
  if ((TypeInfo__UnityEngine__UI__Graphic->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__UI__Graphic);
  }
  UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic__ctor((Graphic *)this,(MethodInfo *)0x0);
  return;
}


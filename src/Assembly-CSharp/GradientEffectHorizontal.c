
/* Void ModifyMesh(VertexHelper) */

void Assembly-CSharp.dll::GradientEffectHorizontal::GradientEffectHorizontal_ModifyMesh
               (GradientEffectHorizontal *this,VertexHelper *vh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar1 = (*(code *)(this->klass->vtable).IsActive.method)
                    (this,(this->klass->vtable).OnRectTransformDimensionsChange.methodPtr);
  if (cVar1 != '\0') {
    stream = (List_1_UnityEngine_UIVertex_ *)
             func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::UIVertex>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              ((List_1_UnityEngine_Vector4_ *)stream,
               MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__List__);
    if (vh == (VertexHelper *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_GetUIVertexStream
              (vh,stream,(MethodInfo *)0x0);
    GradientEffectHorizontal_ModifyVertices(this,stream,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_Clear(vh,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddUIVertexTriangleStream
              (vh,stream,(MethodInfo *)0x0);
  }
  return;
}


/* Void ModifyVertices(List`1[UnityEngine.UIVertex]) */

void Assembly-CSharp.dll::GradientEffectHorizontal::GradientEffectHorizontal_ModifyVertices
               (GradientEffectHorizontal *this,List_1_UnityEngine_UIVertex_ *vertexList,
               MethodInfo *method)

{
  pGVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar2 = (*(code *)(this->klass->vtable).IsActive.method)
                     (this,(this->klass->vtable).OnRectTransformDimensionsChange.methodPtr);
  if (cVar2 != '\0') {
    if (vertexList == (List_1_UnityEngine_UIVertex_ *)0x0) {
      func_?(0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)vertexList,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__get_Count__
                        );
    if (3 < (int)pOVar4) {
      pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)vertexList,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__get_Count__
                          );
      if (pOVar4 == (Object *)0x6) {
        GradientEffectHorizontal_SetVertexColor
                  (this,vertexList,0,(this->fields).left,(MethodInfo *)0x0);
        GradientEffectHorizontal_SetVertexColor
                  (this,vertexList,1,(this->fields).left,(MethodInfo *)0x0);
        GradientEffectHorizontal_SetVertexColor
                  (this,vertexList,2,(this->fields).right,(MethodInfo *)0x0);
        GradientEffectHorizontal_SetVertexColor
                  (this,vertexList,3,(this->fields).right,(MethodInfo *)0x0);
        GradientEffectHorizontal_SetVertexColor
                  (this,vertexList,4,(this->fields).right,(MethodInfo *)0x0);
        GradientEffectHorizontal_SetVertexColor
                  (this,vertexList,5,(this->fields).left,(MethodInfo *)0x0);
      }
      else {
        pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)vertexList,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__get_Count__
                            );
        iVar5 = func_?(&stack0xfffffecc,vertexList,
                                 (undefined1 *)((int)&pOVar4[-1].monitor + 3));
        fVar6 = *(float *)(iVar5 + 4);
        iVar5 = func_?(&stack0xfffffecc,vertexList,0,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__get_Item_int_
                                );
        this = (GradientEffectHorizontal *)0x0;
        fVar7 = *(float *)(iVar5 + 4);
        while( true ) {
          pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                               vertexList,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__get_Count__
                              );
          if ((int)pOVar4 <= (int)this) break;
          pUVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                    List_1_UnityEngine_UIVertex__get_Item
                              ((UIVertex *)&stack0xfffffecc,vertexList,(int32_t)this,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__get_Item_int_
                              );
          fVar9 = (pUVar8->position).y;
          uVar10 = (pUVar8->position).x;
          uVar11 = (pUVar8->position).y;
          uVar12 = (pUVar8->position).z;
          value.position.z = (float)uVar12;
          value.position.y = (float)uVar11;
          value.position.x = (float)uVar10;
          uVar13 = (pUVar8->normal).x;
          value.normal.x = (float)uVar13;
          fVar14 = (pUVar8->uv3).x;
          fVar15 = (pUVar8->uv1).y;
          fVar16 = (pUVar8->normal).y;
          fVar17 = (pUVar8->normal).z;
          fVar18 = (pUVar8->tangent).x;
          VVar19 = pUVar8->uv2;
          fVar20 = (pUVar8->tangent).z;
          fVar21 = (pUVar8->tangent).w;
          uVar22 = (pUVar8->color).r;
          uVar23 = (pUVar8->color).g;
          uVar24 = (pUVar8->color).b;
          uVar25 = (pUVar8->color).a;
          value.color.a = uVar25;
          value.color.b = uVar24;
          value.color.g = uVar23;
          value.color.r = uVar22;
          CVar26.r = 0;
          CVar26.g = 0;
          CVar26.b = 0;
          CVar26.a = 0;
          CVar26.rgba = (pUVar8->color).rgba;
          pCVar27 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit_1
                              ((Color *)&stack0xffffff38,CVar26,in_stack_28);
          method_00 = (MethodInfo *)pCVar27->r;
          fVar29 = pCVar27->g;
          fVar30 = pCVar27->b;
          fVar31 = pCVar27->a;
          in_stack_28 = (MethodInfo *)(pGVar1->fields).left.b;
          pCVar27 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_Lerp
                              ((Color *)&stack0xffffff28,(pGVar1->fields).left,
                               (pGVar1->fields).right,(fVar9 - fVar6) / (fVar7 - fVar6),
                               (MethodInfo *)0x0);
          a.g = fVar29;
          a.r = (float)method_00;
          a.b = fVar30;
          a.a = fVar31;
          pCVar27 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_op_Multiply
                              ((Color *)&stack0xffffff18,a,*pCVar27,(MethodInfo *)0x0);
          fVar9 = pCVar27->b;
          fVar29 = pCVar27->a;
          uVar32 = 0;
          CVar26 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                             (*pCVar27,(MethodInfo *)0x0);
          value.normal.y = fVar16;
          value.normal.z = fVar17;
          value.tangent.x = fVar18;
          value.tangent.y =
               (float)
               MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
          ;
          value.tangent.z = fVar20;
          value.tangent.w = fVar21;
          value.color.rgba = CVar26.rgba;
          value.uv0.x = fVar9;
          value.uv0.y = fVar29;
          value.uv1.x = (float)uVar32;
          value.uv1.y = fVar15;
          value.uv2.x = VVar19.x;
          value.uv2.y = VVar19.y;
          value.uv3.x = fVar14;
          value.uv3.y = (float)
                        MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
          ;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
          List_1_UnityEngine_UIVertex__set_Item(vertexList,(int32_t)this,value,method_00);
          this = (GradientEffectHorizontal *)((int)&this->klass + 1);
        }
      }
    }
  }
  return;
}


/* Void SetVertexColor(List`1[UnityEngine.UIVertex], Int32, Color) */

void Assembly-CSharp.dll::GradientEffectHorizontal::GradientEffectHorizontal_SetVertexColor
               (GradientEffectHorizontal *this,List_1_UnityEngine_UIVertex_ *vertexList,
               int32_t index,Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (vertexList != (List_1_UnityEngine_UIVertex_ *)0x0) {
    pUVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
              List_1_UnityEngine_UIVertex__get_Item
                        ((UIVertex *)&stack0xffffff2c,vertexList,index,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__get_Item_int_
                        );
    fVar2 = (pUVar1->uv3).x;
    uVar3 = (pUVar1->position).x;
    uVar4 = (pUVar1->position).y;
    uVar5 = (pUVar1->position).z;
    value.position.z = (float)uVar5;
    value.position.y = (float)uVar4;
    value.position.x = (float)uVar3;
    uVar6 = (pUVar1->normal).x;
    uVar7 = (pUVar1->normal).y;
    uVar8 = (pUVar1->normal).z;
    value.normal.z = (float)uVar8;
    value.normal.y = (float)uVar7;
    value.normal.x = (float)uVar6;
    uVar9 = (pUVar1->tangent).x;
    uVar10 = (pUVar1->tangent).y;
    uVar11 = (pUVar1->tangent).z;
    uVar12 = (pUVar1->tangent).w;
    value.tangent.w = (float)uVar12;
    value.tangent.z = (float)uVar11;
    value.tangent.y = (float)uVar10;
    value.tangent.x = (float)uVar9;
    uVar13 = (pUVar1->color).r;
    uVar14 = (pUVar1->color).g;
    uVar15 = (pUVar1->color).b;
    uVar16 = (pUVar1->color).a;
    value.color.a = uVar16;
    value.color.b = uVar15;
    value.color.g = uVar14;
    value.color.r = uVar13;
    fVar17 = (pUVar1->uv0).x;
    fVar18 = (pUVar1->uv0).y;
    fVar19 = (pUVar1->uv1).x;
    fVar20 = (pUVar1->uv1).y;
    VVar21 = pUVar1->uv2;
    CVar22 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                       (color,(MethodInfo *)0x0);
    value.color.rgba = CVar22.rgba;
    value.uv0.x = fVar17;
    value.uv0.y = fVar18;
    value.uv1.x = fVar19;
    value.uv1.y = fVar20;
    value.uv2 = VVar21;
    value.uv3.x = fVar2;
    value.uv3.y = (float)
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
    ;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
    List_1_UnityEngine_UIVertex__set_Item(vertexList,index,value,in_stack_23);
    return;
  }
  func_?(0);
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* GradientEffectHorizontal() */

void Assembly-CSharp.dll::GradientEffectHorizontal::GradientEffectHorizontal__ctor
               (GradientEffectHorizontal *this,MethodInfo *method)

{
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_white
                     (&CStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (this->fields).left.r = pCVar1->r;
  (this->fields).left.g = fVar3;
  (this->fields).left.b = fVar4;
  (this->fields).left.a = fVar5;
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_white
                     (&CStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (this->fields).right.r = pCVar1->r;
  (this->fields).right.g = fVar3;
  (this->fields).right.b = fVar4;
  (this->fields).right.a = fVar5;
  LockCursorManager3DMode::LockCursorManager3DMode__ctor
            ((LockCursorManager3DMode *)this,(MethodInfo *)0x0);
  return;
}


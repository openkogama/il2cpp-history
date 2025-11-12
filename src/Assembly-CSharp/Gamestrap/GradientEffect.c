
/* Void ModifyMesh(VertexHelper) */

void Assembly-CSharp.dll::Gamestrap::GradientEffect::GradientEffect_ModifyMesh(GradientEffect *this,VertexHelper *vh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::UIVertex>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = (*(this->klass->vtable).IsActive.methodPtr)(this,(this->klass->vtable).IsActive.method);
  if (cVar1 != '\0') {
    stream = (List_1_UnityEngine_UIVertex_ *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::UIVertex>);
    FUN_?(stream,MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__List__);
    if (vh == (VertexHelper *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_GetUIVertexStream(vh,stream,(MethodInfo *)0x0);
    GradientEffect_ModifyVertices(this,stream,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_Clear(vh,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddUIVertexTriangleStream(vh,stream,(MethodInfo *)0x0);
  }
  return;
}


/* Void ModifyVertices(List`1[UnityEngine.UIVertex]) */

void Assembly-CSharp.dll::Gamestrap::GradientEffect::GradientEffect_ModifyVertices(GradientEffect *this,List_1_UnityEngine_UIVertex_ *vertexList,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = (*(this->klass->vtable).IsActive.methodPtr)(this,(this->klass->vtable).IsActive.method);
  if (cVar1 != '\0') {
    if (vertexList == (List_1_UnityEngine_UIVertex_ *)0x0) goto DAT_?;
    if (3 < (vertexList->fields)._size) {
      if ((vertexList->fields)._size != 6) {
        uVar2 = (vertexList->fields)._size;
        if (uVar2 - 1 < (uint)(vertexList->fields)._size) {
          pUVar3 = (vertexList->fields)._items;
          if (pUVar3 == (UIVertex__Array *)0x0) {
DAT_?:
            FUN_?();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((uint)pUVar3->max_length <= uVar2 - 1) {
code_?:
            FUN_?();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((vertexList->fields)._size != 0) {
            if (pUVar3 == (UIVertex__Array *)0x0) goto DAT_?;
            if ((int)pUVar3->max_length == 0) goto code_?;
            fVar5 = pUVar3->vector[0].position.y;
            uVar6 = 0;
            fVar7 = *(float *)((longlong)pUVar3->vector + (ulonglong)uVar2 * 0x6c + -0x68);
            lVar8 = 0;
            while( true ) {
              if ((vertexList->fields)._size <= (int)uVar6) {
                return;
              }
              if ((uint)(vertexList->fields)._size <= uVar6) break;
              pUVar3 = (vertexList->fields)._items;
              if (pUVar3 == (UIVertex__Array *)0x0) goto DAT_?;
              if ((uint)pUVar3->max_length <= uVar6) goto code_?;
              uVar2 = *(uint *)((longlong)&pUVar3->vector[0].color.rgba + lVar8);
              puVar9 = (undefined8 *)((longlong)&pUVar3->vector[0].position.x + lVar8);
              uStack_10 = *puVar9;
              uStack_11 = puVar9[1];
              puVar9 = (undefined8 *)((longlong)&pUVar3->vector[0].tangent.z + lVar8);
              uStack_12 = *puVar9;
              uStack_13 = puVar9[1];
              uVar14 = *(undefined4 *)((longlong)&pUVar3->vector[0].uv3.z + lVar8);
              puVar9 = (undefined8 *)((longlong)&pUVar3->vector[0].normal.y + lVar8);
              uStack_15 = *puVar9;
              uStack_16 = puVar9[1];
              puVar9 = (undefined8 *)((longlong)&pUVar3->vector[0].uv0.x + lVar8);
              uStack_17 = *puVar9;
              uStack_18 = puVar9[1];
              puVar9 = (undefined8 *)((longlong)&pUVar3->vector[0].uv1.x + lVar8);
              uStack_19 = *puVar9;
              uStack_20 = puVar9[1];
              puVar9 = (undefined8 *)((longlong)&pUVar3->vector[0].uv2.x + lVar8);
              aCStack_21[0]._0_8_ = *puVar9;
              aCStack_21[0]._8_8_ = puVar9[1];
              uVar22 = *(undefined8 *)((longlong)&pUVar3->vector[0].uv3.x + lVar8);
              fVar23 = (this->fields).top.r;
              fVar24 = (this->fields).top.g;
              fVar25 = (this->fields).top.b;
              fVar26 = (this->fields).top.a;
              fVar27 = (*(float *)((longlong)&pUVar3->vector[0].position.y + lVar8) - fVar7) / (fVar5 - fVar7);
              if (fVar27 < 0.0) {
                fVar27 = 0.0;
              }
              else if (1.0 < fVar27) {
                fVar27 = 1.0;
              }
              fVar23 = (((this->fields).bottom.r - fVar23) * fVar27 + fVar23) * ((float)(*(uint *)((longlong)&pUVar3->vector[0].color.rgba + lVar8) & 0xff) / 255.0);
              fVar28 = (((this->fields).bottom.g - fVar24) * fVar27 + fVar24) * ((float)(uVar2 >> 8 & 0xff) / 255.0);
              fVar25 = (((this->fields).bottom.b - fVar25) * fVar27 + fVar25) * ((float)(uVar2 >> 0x10 & 0xff) / 255.0);
              fVar24 = (((this->fields).bottom.a - fVar26) * fVar27 + fVar26) * ((float)(uVar2 >> 0x18) / 255.0);
              if (fVar23 < 0.0) {
                fVar23 = 0.0;
              }
              else if (1.0 < fVar23) {
                fVar23 = 1.0;
              }
              fVar23 = (float)FUN_?(fVar23 * 255.0);
              if (fVar28 < 0.0) {
                fVar28 = 0.0;
              }
              else if (1.0 < fVar28) {
                fVar28 = 1.0;
              }
              fVar26 = (float)FUN_?(fVar28 * 255.0);
              if (fVar25 < 0.0) {
                fVar25 = 0.0;
              }
              else if (1.0 < fVar25) {
                fVar25 = 1.0;
              }
              fVar25 = (float)FUN_?(fVar25 * 255.0);
              if (fVar24 < 0.0) {
                fVar24 = 0.0;
              }
              else if (1.0 < fVar24) {
                fVar24 = 1.0;
              }
              fVar24 = (float)FUN_?(fVar24 * 255.0);
              uStack_13 = CONCAT44(uStack_13._4_4_,CONCAT31(CONCAT21(CONCAT11((char)(int)fVar24,(char)(int)fVar25),(char)(int)fVar26),(char)(int)fVar23));
              if ((uint)(vertexList->fields)._size <= uVar6) break;
              pUVar3 = (vertexList->fields)._items;
              if (pUVar3 == (UIVertex__Array *)0x0) goto DAT_?;
              if ((uint)pUVar3->max_length <= uVar6) goto code_?;
              uVar6 = uVar6 + 1;
              puVar9 = (undefined8 *)((longlong)&pUVar3->vector[0].position.x + lVar8);
              *puVar9 = uStack_10;
              puVar9[1] = uStack_11;
              puVar9 = (undefined8 *)((longlong)&pUVar3->vector[0].normal.y + lVar8);
              *puVar9 = uStack_15;
              puVar9[1] = uStack_16;
              puVar9 = (undefined8 *)((longlong)&pUVar3->vector[0].tangent.z + lVar8);
              *puVar9 = uStack_12;
              puVar9[1] = uStack_13;
              puVar9 = (undefined8 *)((longlong)&pUVar3->vector[0].uv0.x + lVar8);
              *puVar9 = uStack_17;
              puVar9[1] = uStack_18;
              puVar9 = (undefined8 *)((longlong)&pUVar3->vector[0].uv1.x + lVar8);
              *puVar9 = uStack_19;
              puVar9[1] = uStack_20;
              puVar9 = (undefined8 *)((longlong)&pUVar3->vector[0].uv2.x + lVar8);
              *puVar9 = aCStack_21[0]._0_8_;
              puVar9[1] = aCStack_21[0]._8_8_;
              *(undefined8 *)((longlong)&pUVar3->vector[0].uv3.x + lVar8) = uVar22;
              *(undefined4 *)((longlong)&pUVar3->vector[0].uv3.z + lVar8) = uVar14;
              piVar29 = &(vertexList->fields)._version;
              *piVar29 = *piVar29 + 1;
              lVar8 = lVar8 + 0x6c;
            }
          }
        }
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      aCStack_21[0].r = (this->fields).bottom.r;
      aCStack_21[0].g = (this->fields).bottom.g;
      aCStack_21[0].b = (this->fields).bottom.b;
      aCStack_21[0].a = (this->fields).bottom.a;
      GradientEffect_SetVertexColor(this,vertexList,0,aCStack_21,(MethodInfo *)0x0);
      aCStack_21[0].r = (this->fields).top.r;
      aCStack_21[0].g = (this->fields).top.g;
      aCStack_21[0].b = (this->fields).top.b;
      aCStack_21[0].a = (this->fields).top.a;
      GradientEffect_SetVertexColor(this,vertexList,1,aCStack_21,(MethodInfo *)0x0);
      aCStack_21[0].r = (this->fields).top.r;
      aCStack_21[0].g = (this->fields).top.g;
      aCStack_21[0].b = (this->fields).top.b;
      aCStack_21[0].a = (this->fields).top.a;
      GradientEffect_SetVertexColor(this,vertexList,2,aCStack_21,(MethodInfo *)0x0);
      aCStack_21[0].r = (this->fields).top.r;
      aCStack_21[0].g = (this->fields).top.g;
      aCStack_21[0].b = (this->fields).top.b;
      aCStack_21[0].a = (this->fields).top.a;
      GradientEffect_SetVertexColor(this,vertexList,3,aCStack_21,(MethodInfo *)0x0);
      aCStack_21[0].r = (this->fields).bottom.r;
      aCStack_21[0].g = (this->fields).bottom.g;
      aCStack_21[0].b = (this->fields).bottom.b;
      aCStack_21[0].a = (this->fields).bottom.a;
      GradientEffect_SetVertexColor(this,vertexList,4,aCStack_21,(MethodInfo *)0x0);
      aCStack_21[0].r = (this->fields).bottom.r;
      aCStack_21[0].g = (this->fields).bottom.g;
      aCStack_21[0].b = (this->fields).bottom.b;
      aCStack_21[0].a = (this->fields).bottom.a;
      GradientEffect_SetVertexColor(this,vertexList,5,aCStack_21,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void SetVertexColor(List`1[UnityEngine.UIVertex], Int32, Color) */

void Assembly-CSharp.dll::Gamestrap::GradientEffect::GradientEffect_SetVertexColor(GradientEffect *this,List_1_UnityEngine_UIVertex_ *vertexList,int32_t index,Color *color,MethodInfo *method)

{
  lVar1 = (longlong)index;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (vertexList != (List_1_UnityEngine_UIVertex_ *)0x0) {
    if ((uint)(vertexList->fields)._size <= (uint)index) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar3 = (vertexList->fields)._items;
    if (pUVar3 != (UIVertex__Array *)0x0) {
      if ((uint)index < (uint)pUVar3->max_length) {
        lVar4 = lVar1 * 0x6c;
        pVVar5 = &pUVar3->vector[0].position + lVar1 * 9;
        fVar6 = pVVar5->x;
        fVar7 = pVVar5->y;
        uVar8 = *(undefined8 *)&pVVar5->z;
        uVar9 = *(undefined4 *)((longlong)&pUVar3->vector[0].uv3 + lVar4 + 8);
        pVVar5 = &pUVar3->vector[0].normal + lVar1 * 9;
        fVar10 = pVVar5->y;
        fVar11 = pVVar5->z;
        uVar12 = *(undefined8 *)(&pVVar5->y + 2);
        puVar13 = (undefined8 *)((longlong)&pUVar3->vector[0].tangent + lVar4 + 8);
        uVar14 = *puVar13;
        uVar15 = puVar13[1];
        puVar13 = (undefined8 *)((longlong)&pUVar3->vector[0].uv0 + lVar4);
        uVar16 = *puVar13;
        uVar17 = puVar13[1];
        puVar13 = (undefined8 *)((longlong)&pUVar3->vector[0].uv1 + lVar4);
        uVar18 = *puVar13;
        uVar19 = puVar13[1];
        puVar13 = (undefined8 *)((longlong)&pUVar3->vector[0].uv2 + lVar4);
        uVar20 = *puVar13;
        uVar21 = puVar13[1];
        uVar22 = *(undefined8 *)((longlong)&pUVar3->vector[0].uv3 + lVar4);
        uVar23 = FUN_?();
        uStack_24 = CONCAT44((int)((ulonglong)uVar15 >> 0x20),uVar23);
        if ((uint)(vertexList->fields)._size <= (uint)index) goto code_?;
        pUVar3 = (vertexList->fields)._items;
        if (pUVar3 == (UIVertex__Array *)0x0) goto code_?;
        if ((uint)index < (uint)pUVar3->max_length) {
          lVar4 = lVar1 * 0x6c;
          pVVar5 = &pUVar3->vector[0].position + lVar1 * 9;
          pVVar5->x = fVar6;
          pVVar5->y = fVar7;
          *(undefined8 *)&pVVar5->z = uVar8;
          pVVar5 = &pUVar3->vector[0].normal + lVar1 * 9;
          pVVar5->y = fVar10;
          pVVar5->z = fVar11;
          *(undefined8 *)(&pVVar5->y + 2) = uVar12;
          puVar13 = (undefined8 *)((longlong)&pUVar3->vector[0].tangent + lVar4 + 8);
          *puVar13 = uVar14;
          puVar13[1] = uStack_24;
          puVar13 = (undefined8 *)((longlong)&pUVar3->vector[0].uv0 + lVar4);
          *puVar13 = uVar16;
          puVar13[1] = uVar17;
          puVar13 = (undefined8 *)((longlong)&pUVar3->vector[0].uv1 + lVar4);
          *puVar13 = uVar18;
          puVar13[1] = uVar19;
          puVar13 = (undefined8 *)((longlong)&pUVar3->vector[0].uv2 + lVar4);
          *puVar13 = uVar20;
          puVar13[1] = uVar21;
          *(undefined8 *)((longlong)&pUVar3->vector[0].uv3 + lVar4) = uVar22;
          *(undefined4 *)((longlong)&pUVar3->vector[0].uv3 + lVar4 + 8) = uVar9;
          piVar25 = &(vertexList->fields)._version;
          *piVar25 = *piVar25 + 1;
          return;
        }
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


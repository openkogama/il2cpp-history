
/* Void ModifyMesh(VertexHelper) */

void Assembly-CSharp.dll::Gamestrap::GradientEffect::GradientEffect_ModifyMesh
               (GradientEffect *this,VertexHelper *vh,MethodInfo *method)

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
    stream = (List_1_UnityEngine_UIVertex_ *)
             FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::UIVertex>);
    FUN_?(stream,
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__List__);
    if (vh == (VertexHelper *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_GetUIVertexStream
              (vh,stream,(MethodInfo *)0x0);
    GradientEffect_ModifyVertices(this,stream,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_Clear(vh,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddUIVertexTriangleStream
              (vh,stream,(MethodInfo *)0x0);
  }
  return;
}


/* Void ModifyVertices(List`1[UnityEngine.UIVertex]) */

void Assembly-CSharp.dll::Gamestrap::GradientEffect::GradientEffect_ModifyVertices
               (GradientEffect *this,List_1_UnityEngine_UIVertex_ *vertexList,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = (*(this->klass->vtable).IsActive.methodPtr)(this,(this->klass->vtable).IsActive.method);
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  if (cVar1 != '\0') {
    if (vertexList == (List_1_UnityEngine_UIVertex_ *)0x0) goto DAT_?;
    if (3 < (vertexList->fields)._size) {
      if ((vertexList->fields)._size != 6) {
        uVar4 = (vertexList->fields)._size;
        if (uVar4 - 1 < (uint)(vertexList->fields)._size) {
          pUVar5 = (vertexList->fields)._items;
          if (pUVar5 == (UIVertex__Array *)0x0) {
DAT_?:
            FUN_?();
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((uint)pUVar5->max_length <= uVar4 - 1) {
code_?:
            FUN_?();
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((vertexList->fields)._size != 0) {
            if (pUVar5 == (UIVertex__Array *)0x0) goto DAT_?;
            if ((int)pUVar5->max_length == 0) goto code_?;
            fVar7 = pUVar5->vector[0].position.y;
            uVar8 = 0;
            fVar9 = *(float *)((longlong)pUVar5->vector + (ulonglong)uVar4 * 0x6c + -0x68);
            lVar10 = 0;
            while( true ) {
              if ((vertexList->fields)._size <= (int)uVar8) {
                return;
              }
              if ((uint)(vertexList->fields)._size <= uVar8) break;
              pUVar5 = (vertexList->fields)._items;
              if (pUVar5 == (UIVertex__Array *)0x0) goto DAT_?;
              if ((uint)pUVar5->max_length <= uVar8) goto code_?;
              uVar4 = *(uint *)((longlong)&pUVar5->vector[0].color.rgba + lVar10);
              puVar11 = (undefined8 *)((longlong)&pUVar5->vector[0].position.x + lVar10);
              uStack_12 = *puVar11;
              uStack_13 = puVar11[1];
              puVar11 = (undefined8 *)((longlong)&pUVar5->vector[0].tangent.z + lVar10);
              uStack_14 = *puVar11;
              uStack_15 = puVar11[1];
              uVar16 = *(undefined4 *)((longlong)&pUVar5->vector[0].uv3.z + lVar10);
              puVar11 = (undefined8 *)((longlong)&pUVar5->vector[0].normal.y + lVar10);
              uStack_17 = *puVar11;
              uStack_18 = puVar11[1];
              puVar11 = (undefined8 *)((longlong)&pUVar5->vector[0].uv0.x + lVar10);
              uStack_19 = *puVar11;
              uStack_20 = puVar11[1];
              puVar11 = (undefined8 *)((longlong)&pUVar5->vector[0].uv1.x + lVar10);
              uStack_21 = *puVar11;
              uStack_22 = puVar11[1];
              puVar11 = (undefined8 *)((longlong)&pUVar5->vector[0].uv2.x + lVar10);
              aCStack_23[0]._0_8_ = *puVar11;
              aCStack_23[0]._8_8_ = puVar11[1];
              uVar24 = *(undefined8 *)((longlong)&pUVar5->vector[0].uv3.x + lVar10);
              fVar25 = (this->fields).top.r;
              fVar26 = (this->fields).top.g;
              fVar27 = (this->fields).top.b;
              fVar28 = (this->fields).top.a;
              fVar29 = (*(float *)((longlong)&pUVar5->vector[0].position.y + lVar10) - fVar9) /
                       (fVar7 - fVar9);
              if (fVar29 < 0.0) {
                fVar29 = 0.0;
              }
              else if (fVar3 < fVar29) {
                fVar29 = fVar3;
              }
              fVar25 = (((this->fields).bottom.r - fVar25) * fVar29 + fVar25) *
                       ((float)(*(uint *)((longlong)&pUVar5->vector[0].color.rgba + lVar10) & 0xff)
                       / fVar2);
              fVar30 = (((this->fields).bottom.g - fVar26) * fVar29 + fVar26) *
                       ((float)(uVar4 >> 8 & 0xff) / fVar2);
              fVar27 = (((this->fields).bottom.b - fVar27) * fVar29 + fVar27) *
                       ((float)(uVar4 >> 0x10 & 0xff) / fVar2);
              fVar26 = (((this->fields).bottom.a - fVar28) * fVar29 + fVar28) *
                       ((float)(uVar4 >> 0x18) / fVar2);
              if (fVar25 < 0.0) {
                fVar25 = 0.0;
              }
              else if (fVar3 < fVar25) {
                fVar25 = fVar3;
              }
              fVar25 = (float)FUN_?(fVar25 * fVar2);
              if (fVar30 < 0.0) {
                fVar30 = 0.0;
              }
              else if (fVar3 < fVar30) {
                fVar30 = fVar3;
              }
              fVar28 = (float)FUN_?(fVar30 * fVar2);
              if (fVar27 < 0.0) {
                fVar27 = 0.0;
              }
              else if (fVar3 < fVar27) {
                fVar27 = fVar3;
              }
              fVar27 = (float)FUN_?(fVar27 * fVar2);
              if (fVar26 < 0.0) {
                fVar26 = 0.0;
              }
              else if (fVar3 < fVar26) {
                fVar26 = fVar3;
              }
              fVar26 = (float)FUN_?(fVar26 * fVar2);
              uStack_15 = CONCAT44(uStack_15._4_4_,
                                    CONCAT31(CONCAT21(CONCAT11((char)(int)fVar26,(char)(int)fVar27),
                                                      (char)(int)fVar28),(char)(int)fVar25));
              if ((uint)(vertexList->fields)._size <= uVar8) break;
              pUVar5 = (vertexList->fields)._items;
              if (pUVar5 == (UIVertex__Array *)0x0) goto DAT_?;
              if ((uint)pUVar5->max_length <= uVar8) goto code_?;
              uVar8 = uVar8 + 1;
              puVar11 = (undefined8 *)((longlong)&pUVar5->vector[0].position.x + lVar10);
              *puVar11 = uStack_12;
              puVar11[1] = uStack_13;
              puVar11 = (undefined8 *)((longlong)&pUVar5->vector[0].normal.y + lVar10);
              *puVar11 = uStack_17;
              puVar11[1] = uStack_18;
              puVar11 = (undefined8 *)((longlong)&pUVar5->vector[0].tangent.z + lVar10);
              *puVar11 = uStack_14;
              puVar11[1] = uStack_15;
              puVar11 = (undefined8 *)((longlong)&pUVar5->vector[0].uv0.x + lVar10);
              *puVar11 = uStack_19;
              puVar11[1] = uStack_20;
              puVar11 = (undefined8 *)((longlong)&pUVar5->vector[0].uv1.x + lVar10);
              *puVar11 = uStack_21;
              puVar11[1] = uStack_22;
              puVar11 = (undefined8 *)((longlong)&pUVar5->vector[0].uv2.x + lVar10);
              *puVar11 = aCStack_23[0]._0_8_;
              puVar11[1] = aCStack_23[0]._8_8_;
              *(undefined8 *)((longlong)&pUVar5->vector[0].uv3.x + lVar10) = uVar24;
              *(undefined4 *)((longlong)&pUVar5->vector[0].uv3.z + lVar10) = uVar16;
              piVar31 = &(vertexList->fields)._version;
              *piVar31 = *piVar31 + 1;
              lVar10 = lVar10 + 0x6c;
            }
          }
        }
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      aCStack_23[0].r = (this->fields).bottom.r;
      aCStack_23[0].g = (this->fields).bottom.g;
      aCStack_23[0].b = (this->fields).bottom.b;
      aCStack_23[0].a = (this->fields).bottom.a;
      GradientEffect_SetVertexColor(this,vertexList,0,aCStack_23,(MethodInfo *)0x0);
      aCStack_23[0].r = (this->fields).top.r;
      aCStack_23[0].g = (this->fields).top.g;
      aCStack_23[0].b = (this->fields).top.b;
      aCStack_23[0].a = (this->fields).top.a;
      GradientEffect_SetVertexColor(this,vertexList,1,aCStack_23,(MethodInfo *)0x0);
      aCStack_23[0].r = (this->fields).top.r;
      aCStack_23[0].g = (this->fields).top.g;
      aCStack_23[0].b = (this->fields).top.b;
      aCStack_23[0].a = (this->fields).top.a;
      GradientEffect_SetVertexColor(this,vertexList,2,aCStack_23,(MethodInfo *)0x0);
      aCStack_23[0].r = (this->fields).top.r;
      aCStack_23[0].g = (this->fields).top.g;
      aCStack_23[0].b = (this->fields).top.b;
      aCStack_23[0].a = (this->fields).top.a;
      GradientEffect_SetVertexColor(this,vertexList,3,aCStack_23,(MethodInfo *)0x0);
      aCStack_23[0].r = (this->fields).bottom.r;
      aCStack_23[0].g = (this->fields).bottom.g;
      aCStack_23[0].b = (this->fields).bottom.b;
      aCStack_23[0].a = (this->fields).bottom.a;
      GradientEffect_SetVertexColor(this,vertexList,4,aCStack_23,(MethodInfo *)0x0);
      aCStack_23[0].r = (this->fields).bottom.r;
      aCStack_23[0].g = (this->fields).bottom.g;
      aCStack_23[0].b = (this->fields).bottom.b;
      aCStack_23[0].a = (this->fields).bottom.a;
      GradientEffect_SetVertexColor(this,vertexList,5,aCStack_23,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void SetVertexColor(List`1[UnityEngine.UIVertex], Int32, Color) */

void Assembly-CSharp.dll::Gamestrap::GradientEffect::GradientEffect_SetVertexColor
               (GradientEffect *this,List_1_UnityEngine_UIVertex_ *vertexList,int32_t index,
               Color *color,MethodInfo *method)

{
  lVar1 = (longlong)index;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__get_Item_int_
                 );
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
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
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


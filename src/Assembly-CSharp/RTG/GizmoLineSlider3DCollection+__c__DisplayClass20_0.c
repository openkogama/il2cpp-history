
/* Int32 <GetRenderSortedSliders>b__0(GizmoLineSlider3D, GizmoLineSlider3D) */

int32_t Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection+<>c__DisplayClass20_0::
        GizmoLineSlider3DCollection_c_DisplayClass20_0__GetRenderSortedSliders_b__0
                  (GizmoLineSlider3DCollection_c_DisplayClass20_0 *this,GizmoLineSlider3D *s0,
                  GizmoLineSlider3D *s1,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (s0 != (GizmoLineSlider3D *)0x0) {
    lVar2 = 0xe0;
    lVar3 = 0xe0;
    if ((s0->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
      lVar3 = 0xd8;
    }
    lVar3 = *(longlong *)((longlong)&s0->klass + lVar3);
    if (lVar3 != 0) {
      fVar4 = _UNK_?;
      if (*(char *)(lVar3 + 0x24) != '\0') {
        pGVar5 = (s0->fields)._._handle;
        if (pGVar5 == (GizmoHandle *)0x0) goto code_?;
        fVar4 = GizmoHandle::GizmoHandle_GetZoomFactor
                           (pGVar5,(this->fields).renderCamera,(MethodInfo *)0x0);
      }
      pVVar6 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealEndPosition
                          (&VStack_7,s0,fVar4,(MethodInfo *)0x0);
      aVStack_8[0].x = (this->fields).cameraPos.x;
      aVStack_8[0].y = (this->fields).cameraPos.y;
      uVar9 = pVVar6->x;
      uVar10 = pVVar6->y;
      fVar4 = pVVar6->z - (this->fields).cameraPos.z;
      fVar4 = ((float)uVar10 - aVStack_8[0].y) * ((float)uVar10 - aVStack_8[0].y) +
               ((float)uVar9 - aVStack_8[0].x) * ((float)uVar9 - aVStack_8[0].x) + fVar4 * fVar4
      ;
      if (s1 != (GizmoLineSlider3D *)0x0) {
        if ((s1->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
          lVar2 = 0xd8;
        }
        lVar3 = *(longlong *)((longlong)&s1->klass + lVar2);
        if (lVar3 != 0) {
          if (*(char *)(lVar3 + 0x24) != '\0') {
            pGVar5 = (s1->fields)._._handle;
            if (pGVar5 == (GizmoHandle *)0x0) goto code_?;
            fVar1 = GizmoHandle::GizmoHandle_GetZoomFactor
                               (pGVar5,(this->fields).renderCamera,(MethodInfo *)0x0);
          }
          pVVar6 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealEndPosition
                              (aVStack_8,s1,fVar1,(MethodInfo *)0x0);
          uVar11 = (this->fields).cameraPos.x;
          uVar12 = (this->fields).cameraPos.y;
          uVar13 = pVVar6->x;
          fVar14 = pVVar6->y - (float)uVar12;
          fVar1 = pVVar6->z - (this->fields).cameraPos.z;
          fVar1 = fVar14 * fVar14 + ((float)uVar13 - (float)uVar11) * ((float)uVar13 - (float)uVar11) +
                   fVar1 * fVar1;
          if (fVar1 < fVar4) {
            return -1;
          }
          if (fVar1 <= fVar4) {
            if (fVar1 == fVar4) {
              return 0;
            }
            if (0x7f800000 < (uint)ABS(fVar1)) {
              return (0x7f800000 < (uint)ABS(fVar4)) - 1;
            }
          }
          return 1;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  iVar16 = (*pcVar15)();
  return iVar16;
}


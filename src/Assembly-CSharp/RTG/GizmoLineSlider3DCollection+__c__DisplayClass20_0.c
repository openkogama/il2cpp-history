
/* Int32 <GetRenderSortedSliders>b__0(GizmoLineSlider3D, GizmoLineSlider3D) */

int32_t Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection+<>c__DisplayClass20_0::
        GizmoLineSlider3DCollection_c_DisplayClass20_0__GetRenderSortedSliders_b__0
                  (GizmoLineSlider3DCollection_c_DisplayClass20_0 *this,GizmoLineSlider3D *s0,
                  GizmoLineSlider3D *s1,MethodInfo *method)

{
  if (s0 != (GizmoLineSlider3D *)0x0) {
    if ((s0->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
      pGVar1 = (s0->fields)._lookAndFeel;
      if (pGVar1 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
    }
    else {
      pGVar1 = (s0->fields)._sharedLookAndFeel;
    }
    fVar2 = _UNK_?;
    if ((pGVar1->fields)._useZoomFactor != 0) {
      pGVar3 = (s0->fields)._._handle;
      if (pGVar3 == (GizmoHandle *)0x0) goto code_?;
      fVar2 = GizmoHandle::GizmoHandle_GetZoomFactor
                        (pGVar3,(this->fields).renderCamera,(MethodInfo *)0x0);
    }
    GizmoLineSlider3D::GizmoLineSlider3D_GetRealEndPosition
              ((Vector3 *)&stack0xffffffe0,s0,fVar2,(MethodInfo *)0x0);
    if (s1 != (GizmoLineSlider3D *)0x0) {
      if ((s1->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
        pGVar1 = (s1->fields)._lookAndFeel;
        if (pGVar1 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
      }
      else {
        pGVar1 = (s1->fields)._sharedLookAndFeel;
      }
      fVar2 = _UNK_?;
      if ((pGVar1->fields)._useZoomFactor != 0) {
        pGVar3 = (s1->fields)._._handle;
        if (pGVar3 == (GizmoHandle *)0x0) goto code_?;
        fVar2 = GizmoHandle::GizmoHandle_GetZoomFactor
                          (pGVar3,(this->fields).renderCamera,(MethodInfo *)0x0);
      }
      GizmoLineSlider3D::GizmoLineSlider3D_GetRealEndPosition
                ((Vector3 *)&stack0xffffffec,s1,fVar2,(MethodInfo *)0x0);
      iVar4 = mscorlib.dll::System::Single::Single_CompareTo_1
                        ((Single *)&stack0xfffffff8,value,(MethodInfo *)0x0);
      return iVar4;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  iVar4 = (*pcVar5)();
  return iVar4;
}


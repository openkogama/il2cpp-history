
/* Boolean <ContainsCapId>b__0(GizmoLineSlider3D) */

bool Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection+<>c__DisplayClass8_0::
     GizmoLineSlider3DCollection_c_DisplayClass8_0__ContainsCapId_b__0
               (GizmoLineSlider3DCollection_c_DisplayClass8_0 *this,GizmoLineSlider3D *item,
               MethodInfo *method)

{
  if (((item != (GizmoLineSlider3D *)0x0) &&
      (pGVar1 = (item->fields)._cap3D, pGVar1 != (GizmoCap3D *)0x0)) &&
     (pGVar2 = (pGVar1->fields)._._handle, pGVar2 != (GizmoHandle *)0x0)) {
    return (pGVar2->fields)._id == (this->fields).capHandleId;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


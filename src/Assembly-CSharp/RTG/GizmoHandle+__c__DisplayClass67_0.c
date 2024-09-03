
/* Boolean <Remove2DShape>b__0(GizmoHandleShape2D) */

bool Assembly-CSharp.dll::RTG::GizmoHandle+<>c__DisplayClass67_0::
     GizmoHandle_c_DisplayClass67_0__Remove2DShape_b__0
               (GizmoHandle_c_DisplayClass67_0 *this,GizmoHandleShape2D *item,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (item != (GizmoHandleShape2D *)0x0) {
    return (item->fields)._shape == (this->fields).shape;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


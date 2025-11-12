
/* Boolean <Remove2DShape>b__0(GizmoHandleShape2D) */

bool Assembly-CSharp.dll::RTG::GizmoHandle+<>c__DisplayClass67_0::
     GizmoHandle_c_DisplayClass67_0__Remove2DShape_b__0
               (GizmoHandle_c_DisplayClass67_0 *this,GizmoHandleShape2D *item,MethodInfo *method)

{
  if (item != (GizmoHandleShape2D *)0x0) {
    return (item->fields)._shape == (this->fields).shape;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


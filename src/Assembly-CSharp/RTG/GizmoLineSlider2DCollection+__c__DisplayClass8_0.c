
/* Boolean <ContainsCapId>b__0(GizmoLineSlider2D) */

bool Assembly-CSharp.dll::RTG::GizmoLineSlider2DCollection+<>c__DisplayClass8_0::
     GizmoLineSlider2DCollection_c_DisplayClass8_0__ContainsCapId_b__0
               (GizmoLineSlider2DCollection_c_DisplayClass8_0 *this,GizmoLineSlider2D *item,
               MethodInfo *method)

{
  if ((item != (GizmoLineSlider2D *)0x0) &&
     (this_00 = (item->fields)._cap2D, this_00 != (GizmoCap2D *)0x0)) {
    pvVar1 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
             AndroidJavaObject__GetRawClass((AndroidJavaObject *)this_00,(MethodInfo *)0x0);
    return pvVar1 == (void *)(this->fields).capHandleId;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}



/* Boolean <ContainsCapId>b__0(GizmoLineSlider3D) */

bool Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection+<>c__DisplayClass8_0::
     GizmoLineSlider3DCollection_c_DisplayClass8_0__ContainsCapId_b__0
               (GizmoLineSlider3DCollection_c_DisplayClass8_0 *this,GizmoLineSlider3D *item,
               MethodInfo *method)

{
  if ((item != (GizmoLineSlider3D *)0x0) &&
     (this_00 = (item->fields)._cap3D, this_00 != (GizmoCap3D *)0x0)) {
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

